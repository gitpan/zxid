/* zxid/zxcrypto.c  -  Glue for cryptographical functions
 * Copyright (c) 2006-2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxcrypto.c,v 1.3 2007-10-31 00:21:32 sampo Exp $
 */

#include <zx/errmac.h>
#include <zx/zx.h>
#include <string.h>

#ifdef USE_OPENSSL
#include <openssl/evp.h>
#include <openssl/hmac.h>
#include <openssl/rand.h>
#include <openssl/x509.h>
#endif

#if 0
struct zx_str* zx_hmac_sha1(struct zx_ctx* c, struct zx_str* key, struct zx_str* ss) {
  HMAC(EVP_sha1(), key->s, key->len, ss->s, ss->len, md, mdlen);

  EVP_CIPHER_CTX *ctx;
  EVP_CIPHER *type = EVP_des_cbc();

  int EVP_SealInit(ctx, type, char **ek, int *ekl, char *iv, EVP_PKEY **pubk, int npubk);
  int EVP_SealUpdate(ctx, unsigned char *out, int *outl, unsigned char *in, int inl);
  int EVP_SealFinal(ctx, unsigned char *out, int *outl);  
}

/* Following are macros in openssl headers so we need to define wrapper functions. */

int zx_EVP_CIPHER_key_length(const EVP_CIPHER* cipher) { return EVP_CIPHER_key_length(cipher); }
int zx_EVP_CIPHER_iv_length(const EVP_CIPHER* cipher)  { return EVP_CIPHER_iv_length(cipher); }
int zx_EVP_CIPHER_block_size(const EVP_CIPHER* cipher) { return EVP_CIPHER_block_size(cipher); }
#endif

//#define ZX_DEFAULT_IV "012345678901234567890123456789012345678901234567890123456789" /* 60 */
#define ZX_DEFAULT_IV   "ZX_DEFAULT_IV ZXID.ORG SAML 2.0 and Liberty ID-WSF by Sampo." /* 60 */

/* zx_raw_cipher() can encrypt and decrypt, based on encflag, using symmetic cipher algo.
 * If encflag indicates encryption, the initialization vector will be prepended. */

struct zx_str* zx_raw_cipher(struct zx_ctx* c, char* algo, int encflag,
			     struct zx_str* key, int len, char* s, int iv_len, char* iv)
{
  char* ivv;
  char* where = "start";
  struct zx_str* out;
  int outlen, tmplen, alloclen;
  const EVP_CIPHER* evp_cipher;
  EVP_CIPHER_CTX ctx;
  EVP_CIPHER_CTX_init(&ctx);
  evp_cipher = EVP_get_cipherbyname(algo);
  if (!evp_cipher) {
    ERR("Cipher algo name(%s) not recognized by the crypto library (OpenSSL)", algo);
    return 0;
  }
  
  tmplen = EVP_CIPHER_iv_length(evp_cipher);
  if (tmplen) {
    if (iv) {
      if (iv_len != tmplen) {
	goto clean;
      }
      ivv = iv;
    } else {
      ivv = ZX_DEFAULT_IV;
      ASSERTOP(EVP_MAX_IV_LENGTH, <=, sizeof(ZX_DEFAULT_IV));
    }
  } else
    ivv = 0;
  
  alloclen = EVP_CIPHER_block_size(evp_cipher);
  alloclen = len + alloclen + alloclen;  /* bit pessimistic, but man EVP_CipherInit is ambiguous about the actual size needed. */
  if (encflag)
    alloclen += iv_len;
  
  out = zx_new_len_str(c, alloclen);
  if (!out) goto clean;
  if (encflag)
    memcpy(out->s, ivv, iv_len);
  else
    iv_len = 0;  /* When decrypting, the iv has already been stripped. */
  
  if (!EVP_CipherInit_ex(&ctx, evp_cipher, 0 /* engine */, key->s, ivv, encflag)) {
    where = "EVP_CipherInit_ex()";
    goto sslerr;
  }
  
  if (!EVP_CIPHER_CTX_set_key_length(&ctx, key->len)) {
    where = "wrong key length for algorithm (block ciphers only accept keys of determined length)";
    goto sslerr;
  }
  
  if(!EVP_CipherUpdate(&ctx, out->s + iv_len, &outlen, s, len)) { /* Actual crypto happens here */
    where = "EVP_CipherUpdate()";
    goto sslerr;
  }
  
  ASSERTOP(outlen + iv_len, <=, alloclen);
  
  if(!EVP_CipherFinal_ex(&ctx, out->s + iv_len + outlen, &tmplen)) {  /* Append final block */
    where = "EVP_CipherFinal_ex()";
    goto sslerr;
  }
  EVP_CIPHER_CTX_cleanup(&ctx);
  
  outlen += tmplen;
  ASSERTOP(outlen + iv_len, <=, alloclen);
  out->len = outlen + iv_len;
  out->s[outlen + iv_len] = 0;  /* nul term */
  return out;

 sslerr:
  zx_report_openssl_error(where);
 clean:
  EVP_CIPHER_CTX_cleanup(&ctx);
  return 0;
}

/* Public key enc and dec */

struct zx_str* zx_rsa_pub_enc(struct zx_ctx* c, struct zx_str* plain, RSA* rsa_pkey, int pad)
{
  struct zx_str* ciphered;
  int ret, siz = RSA_size(rsa_pkey);
  switch (pad) {
  case RSA_PKCS1_PADDING:
  case RSA_SSLV23_PADDING:
    if (plain->len > (siz-11))
      ERR("Too much data for RSA key: can=%d, you have %d bytes.\n", siz-11, plain->len);
    D("RSA_PKCS1_PADDING %d", pad);
    break;
  case RSA_NO_PADDING:
    if (plain->len > siz)
      ERR("Too much data for RSA key: can=%d, you have %d bytes.\n", siz, plain->len);
    break;
  case RSA_PKCS1_OAEP_PADDING:
    if (plain->len > (siz-41))
      ERR("Too much data for RSA key: can=%d, you have %d bytes.\n", siz-41, plain->len);
    break;
  default: D("Illegal padding(%d). See `man 3 rsa'\n",pad);
  }

  ciphered = zx_new_len_str(c, siz);
  if (!ciphered)
    return 0;
  ret = RSA_public_encrypt(plain->len, plain->s, ciphered->s, rsa_pkey, pad);
  if (siz != ret) {
    D("RSA pub enc wrong ret=%d siz=%d\n",ret,siz);
    zx_report_openssl_error("zx_pub_encrypt_rsa fail (${ret})");
    return 0;
  }
  ASSERTOP(ret, <=, siz);
  ciphered->len = ret;
  ciphered->s[ret] = 0;
  return ciphered;
}

struct zx_str* zx_rsa_pub_dec(struct zx_ctx* c, struct zx_str* ciphered, RSA* rsa_pkey, int pad)
{
  struct zx_str* plain;
  int ret, siz = RSA_size(rsa_pkey);
  plain = zx_new_len_str(c, siz);
  if (!plain)
    return 0;
  ret = RSA_public_decrypt(ciphered->len, ciphered->s, plain->s, rsa_pkey, pad);
  if (ret == -1) {
    D("RSA public decrypt failed ret=%d len_cipher_data=%d",ret,ciphered->len);
    zx_report_openssl_error("zx_public_decrypt_rsa fail");
    return 0;
  }
  ASSERTOP(ret, <=, siz);
  plain->len = ret;
  plain->s[ret] = 0;
  return plain;
}

struct zx_str* zx_rsa_priv_dec(struct zx_ctx* c, struct zx_str* ciphered, RSA* rsa_pkey, int pad)
{
  struct zx_str* plain;
  int ret, siz = RSA_size(rsa_pkey);
  plain = zx_new_len_str(c, siz);
  if (!plain)
    return 0;
  ret = RSA_private_decrypt(ciphered->len, ciphered->s, plain->s, rsa_pkey, pad);
  if (ret == -1) {
    D("RSA private decrypt failed ret=%d len_cipher_data=%d",ret,ciphered->len);
    zx_report_openssl_error("zx_priv_decrypt_rsa fail");
    return 0;
  }
  ASSERTOP(ret, <=, siz);
  plain->len = ret;
  plain->s[ret] = 0;
  return plain;
}

struct zx_str* zx_rsa_priv_enc(struct zx_ctx* c, struct zx_str* plain, RSA* rsa_pkey, int pad)
{
  struct zx_str* ciphered;
  int ret, siz = RSA_size(rsa_pkey);
  ciphered = zx_new_len_str(c, siz);
  if (!ciphered)
    return 0;
  ret = RSA_private_encrypt(plain->len, plain->s, ciphered->s, rsa_pkey, pad);
  if (ret == -1) {
    D("RSA private encrypt failed ret=%d len_plain=%d", ret, plain->len);
    zx_report_openssl_error("zx_priv_encrypt_rsa fail");
    return 0;
  }
  ASSERTOP(ret, <=, siz);
  ciphered->len = ret;
  ciphered->s[ret] = 0;
  return ciphered;
}

RSA* zx_get_rsa_pub_from_cert(X509* cert, char* logkey)
{
  EVP_PKEY* evp_pkey;
  struct rsa_st* rsa_pkey;
  evp_pkey = X509_get_pubkey(cert);
  if (!evp_pkey) {
    ERR("RSA enc: failed to get public key from certificate (perhaps you have not supplied any certificate, or it is corrupt or of wrong type) %s", logkey);
    zx_report_openssl_error("zx_get_rsa_pub_from_cert");
    return 0;
  }
  rsa_pkey = EVP_PKEY_get1_RSA(evp_pkey);
  if (!rsa_pkey) {
    ERR("RSA enc: failed to extract RSA get public key from certificate (perhaps you have not supplied any certificate, or it is corrupt or of wrong type) %s", logkey);
    zx_report_openssl_error("zx_get_rsa_pub_from_cert");
    return 0;
  }
  return rsa_pkey;
}

void zx_rand(char* buf, int n_bytes)
{
#ifdef USE_OPENSSL
#if ZXID_TRUE_RAND
  RAND_bytes(buf, n_bytes);
#else
  RAND_pseudo_bytes(buf, n_bytes);
#endif
#else
  ERR("ZXID was compiled without USE_OPENSSL. This means random number generation facilities are unavailable. Recompile ZXID or acknowledge that there is no security. n_rand_bytes=%d", n);
#endif
}

/* EOF  -  zxcrypto.c */
