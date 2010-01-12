/* zxid/zxcrypto.c  -  Glue for cryptographical functions
 * Copyright (c) 2006-2009 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxcrypto.c,v 1.10 2009-11-24 23:53:40 sampo Exp $
 *
 * 7.10.2008, added documentation --Sampo
 * 29.8.2009, added zxid_mk_self_signed_cert() --Sampo
 */

#include <zx/errmac.h>
#include <zx/zx.h>
#include <zx/zxid.h>
#include <string.h>
#include <sys/stat.h>  /* umask(2) */

#ifdef USE_OPENSSL
#include <openssl/evp.h>
#include <openssl/md5.h>
#include <openssl/hmac.h>
#include <openssl/rand.h>
#include <openssl/x509.h>
#include <openssl/x509v3.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#endif

#if 0
/* Called by: */
struct zx_str* zx_hmac_sha1(struct zx_ctx* c, struct zx_str* key, struct zx_str* ss) {
  HMAC(EVP_sha1(), key->s, key->len, ss->s, ss->len, md, mdlen);

  EVP_CIPHER_CTX *ctx;
  EVP_CIPHER *type = EVP_des_cbc();

  int EVP_SealInit(ctx, type, char **ek, int *ekl, char *iv, EVP_PKEY **pubk, int npubk);
  int EVP_SealUpdate(ctx, unsigned char *out, int *outl, unsigned char *in, int inl);
  int EVP_SealFinal(ctx, unsigned char *out, int *outl);  
}

/* Following are macros in openssl headers so we need to define wrapper functions. */

/* Called by: */
int zx_EVP_CIPHER_key_length(const EVP_CIPHER* cipher) { return EVP_CIPHER_key_length(cipher); }
int zx_EVP_CIPHER_iv_length(const EVP_CIPHER* cipher)  { return EVP_CIPHER_iv_length(cipher); }
int zx_EVP_CIPHER_block_size(const EVP_CIPHER* cipher) { return EVP_CIPHER_block_size(cipher); }
#endif

//#define ZX_DEFAULT_IV "012345678901234567890123456789012345678901234567890123456789" /* 60 */
#define ZX_DEFAULT_IV   "ZX_DEFAULT_IV ZXID.ORG SAML 2.0 and Liberty ID-WSF by Sampo." /* 60 */

/*() zx_raw_cipher() can encrypt and decrypt, based on encflag, using symmetic cipher algo.
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
  OpenSSL_add_all_algorithms();
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

/*() RSA public key encryption. See zx_get_rsa_pub_from_cert() for
 * a way to obtain public key data structure.
 * N.B. This function +only+ does the public key part. It does not
 * perform combined enc-session-key-with-pub-key-and-then-data-with-session-key
 * operation, though this function could be used as a component to implement
 * such a system.
 *
 * This is considered a low level function. See zxenc_pubkey_enc() for a higher level solution. */

/* Called by:  zxenc_pubkey_enc x2 */
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

/*() RSA public key decryption. See zx_get_rsa_pub_from_cert() for
 * a way to obtain public key data structure. */

/* Called by: */
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

/*() RSA private key decryption. See zxid_read_private_key() and zxid_extract_private_key()
 * for ways to read in the private key data structure.
 * N.B. This function +only+ does the private key part. It does not
 * perform combined dec-session-key-with-priv-key-and-then-data-with-session-key
 * operation, though this function could be used as a component to implement
 * such a system.
 *
 * This is considered a low level function. See zxenc_privkey_dec() for a higher level solution. */

/* Called by:  zxenc_privkey_dec x2 */
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

/*() RSA private key encryption. See zxid_read_private_key() and zxid_extract_private_key()
 * for ways to read in the private key data structure. */

/* Called by: */
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

/*() Obtain RSA public key from X509 certificate. The certificate must have been
 * previously read into a data structure. See zxid_read_cert() and zxid_extract_cert() */

/* Called by:  zxenc_pubkey_enc, zxlog_write_line */
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

/*() ZXID centralized hook for obtaning randin numbers. This backends to
 * OpenSSL random number gnerator and seeds from /dev/urandom where
 * available. If you want to use /dev/random, which may block, you need
 * to recompile with ZXID_TRUE_RAND set to true. */

/* Called by:  main, zxenc_pubkey_enc, zxid_mk_id, zxid_mk_self_sig_cert, zxlog_alloc_zbuf, zxlog_write_line x2 */
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

/*() Create Self-Signed Certificate-Private Key pair and Certificate Signing Request
 * This function is invoked when AUTO_CERT is set and a certificate is missing.
 * As this is not expected to be frequent, we are cavalier about releasing
 * the memory needed for each intermediate step.
 *
 * cf:: zxid configuration object, of wich cf->ctx will be used for memory allocation
 * buflen:: sizeof(buf)
 * buf:: Buffer used for rendering pem representations of the data
 * log key:: Who and why is calling
 * name:: Name of the certificate file to be created
 *
 * See also: keygen() in keygen.c */

/* Called by:  zxid_read_cert, zxid_read_private_key */
int zxid_mk_self_sig_cert(struct zxid_conf* cf, int buflen, char* buf, char* lk, char* name)
{
#ifdef USE_OPENSSL
  BIO* wbio_cert;
  BIO* wbio_pkey;
  BIO* wbio_csr;
  int len, lenq, um;
  long cert_ser;
  char*     p;
  char*     q;
  time_t    ts;
  X509*     x509ss;
  X509_REQ* req;
  X509_REQ_INFO* ri;
  EVP_PKEY* pkey;
  EVP_PKEY* tmp_pkey;
  RSA*      rsa;
  X509_EXTENSION*  ext;
  X509_NAME_ENTRY* ne;
  char      org[512];
  char      cn[256];

  X509V3_add_standard_extensions();
  
  D("keygen start lk(%s) name(%s)", lk, name);
  
  ts = time(0);
  RAND_seed(&ts,sizeof(ts));
#ifdef WINDOWS
  RAND_screen(); /* Loading video display memory into random state */
#endif
  
  /* Here's the beef: Generate keypair */
  
  pkey=EVP_PKEY_new();
  DD("keygen preparing rsa key %s", lk);
  rsa = RSA_generate_key(1024 /*bits*/, 0x10001 /*65537*/, 0 /*req_cb*/, 0 /*arg*/);
  DD("keygen rsa key generated %s", name);
  EVP_PKEY_assign_RSA(pkey, rsa);

#if 0
  /* Key generation is a big operation. Write in the new random state. */
  t = time(0);
  RAND_seed(&t,sizeof(t));
  RAND_write_file(randomfile);
#endif

  /* Now handle the public key part, i.e. create self signed and
   * certificate request. This starts by making a request that
   * contains all relevant fields.   */
  
  req=X509_REQ_new();
  ri=req->req_info;

  DD("keygen populate: set version %d (real vers is one higher)", 2);
  ASN1_INTEGER_set(ri->version, 2L /* version 3 (binary value is one less) */);

  snprintf(org, sizeof(org)-1, "ZXID Auto-Cert %s", cf->url);
  org[sizeof(org)-1] = 0;
  DD("keygen populate: org(%s)", org);
  
  /* Parse domain name out of the URL: skip https:// and then scan name without port or path */
  
  for (p = cf->url; !ONE_OF_2(*p, '/', 0); ++p) ;
  if (*p != '/') goto badurl;
  ++p;
  if (*p != '/') {
badurl:
    ERR("Malformed URL: does not start by https:// or http:// -- URL(%s)", cf->url);
    return 0;
  }
  ++p;
  for (q = cn; !ONE_OF_3(*p, ':', '/', 0) && q < cn + sizeof(cn)-1; ++q, ++p) *q = *p;
  *q = 0;

  D("keygen populate DN: cn(%s) org(%s) url=%p cn=%p p=%p q=%p", cn, org, cf->url, cn, p, q);
  
  /* Note on string types and allowable char sets:
   * V_ASN1_PRINTABLESTRING  [A-Za-z0-9 '()+,-./:=?]   -- Any domain name, but not query string
   * V_ASN1_IA5STRING        Any 7bit string
   * V_ASN1_T61STRING        8bit string   */

  /* Construct DN part by part. We want cn=www.site.com,o=ZXID Auto-Cert */

  ne = X509_NAME_ENTRY_create_by_NID(0, NID_commonName, V_ASN1_PRINTABLESTRING, cn, strlen(cn));
  X509_NAME_add_entry(ri->subject, ne, X509_NAME_entry_count(ri->subject), 0);

#if 1
  ne = X509_NAME_ENTRY_create_by_NID(0, NID_organizationalUnitName, V_ASN1_T61STRING, "SSO Dept", sizeof("SSO Dept")-1);
  X509_NAME_add_entry(ri->subject, ne, X509_NAME_entry_count(ri->subject), 0);
#endif

  ne = X509_NAME_ENTRY_create_by_NID(0, NID_organizationName, V_ASN1_T61STRING, org, strlen(org));
  X509_NAME_add_entry(ri->subject, ne, X509_NAME_entry_count(ri->subject), 0);

#if 0
  X509_ATTRIBUTE*  xa;
  ASN1_BIT_STRING* bs;
  ASN1_TYPE* at;

  /* It seems this gives indigestion to the default CA */
  DD("keygen populate attributes %s", lk);  /* Add attributes: we really only need cn */
  
  xa = X509_ATTRIBUTE_new();
  xa->value.set = sk_ASN1_TYPE_new_null();
  /*xa->single = 1; **** this may also be set on some versions */
  xa->object=OBJ_nid2obj(NID_commonName);

  bs = ASN1_BIT_STRING_new();
  bs->type = V_ASN1_PRINTABLESTRING;
  ASN1_STRING_set(bs, cn, strlen(cn)+1);  /* *** +1 why? Some archaic bug work-around? */

  at = ASN1_TYPE_new();
  ASN1_TYPE_set(at, bs->type, (char*)bs);
  sk_ASN1_TYPE_push(xa->value.set, at);
  sk_X509_ATTRIBUTE_push(ri->attributes, xa);
#endif

  DD("keygen request populated %s", lk);
  X509_REQ_set_pubkey(req, pkey);
  /*req->req_info->req_kludge=0;    / * no asn1 kludge *** filed deleted as of 0.9.7b?!? */
  
  DD("keygen signing request %s", lk);
  X509_REQ_sign(req, pkey, EVP_md5());
  
  /* ----- X509 create self signed certificate ----- */
  
  DD("keygen making x509ss %s", lk);
  x509ss = X509_new();
  X509_set_version(x509ss, 2); /* Set version to V3 and serial number to zero */
  zx_rand((char*)&cert_ser, 4);
  ASN1_INTEGER_set(X509_get_serialNumber(x509ss), cert_ser);
  DD("keygen setting various x509ss fields %s", lk);
    
  X509_set_issuer_name(x509ss, X509_REQ_get_subject_name(req));
#if 1
  ASN1_TIME_set(X509_get_notBefore(x509ss),0);
  ASN1_TIME_set(X509_get_notAfter(x509ss), 0x7fffffffL); /* The end of the 32 bit Unix epoch */
#else
  X509_gmtime_adj(X509_get_notBefore(x509ss),0);
  X509_gmtime_adj(X509_get_notAfter(x509ss), 0x7fffffffL); /* The end of the 32 bit Unix epoch */
#endif
  X509_set_subject_name(x509ss,	X509_REQ_get_subject_name(req));
  
  DD("keygen setting x509ss pubkey %s", lk);
  tmp_pkey =X509_REQ_get_pubkey(req);
  X509_set_pubkey(x509ss, tmp_pkey);
  EVP_PKEY_free(tmp_pkey);
  
  /* Set up V3 context struct and add certificate extensions. Note
   * that we need to add (full) suite of CA extensions, otherwise
   * our cert is not valid for signing itself. */
  
  ext = X509V3_EXT_conf_nid(0, 0, NID_basic_constraints, "CA:TRUE,pathlen:3");
  X509_add_ext(x509ss, ext, -1);
  
  ext = X509V3_EXT_conf_nid(0, 0, NID_netscape_cert_type, "client,server,email,objsign,sslCA,emailCA,objCA");
  X509_add_ext(x509ss, ext, -1);
  
  ext = X509V3_EXT_conf_nid(0, 0, NID_key_usage, "digitalSignature,nonRepudiation,keyEncipherment,dataEncipherment,keyAgreement,keyCertSign,cRLSign");
  X509_add_ext(x509ss, ext, -1);

  ext = X509V3_EXT_conf_nid(0, 0, NID_netscape_comment, "Auto-Cert, see zxid.org");
  X509_add_ext(x509ss, ext, -1);
  
  DD("keygen signing x509ss %s", lk);
  if (!(X509_sign(x509ss, pkey, EVP_md5()))) {
    ERR("Failed to sign x509ss %s", lk);
    zx_report_openssl_error("X509_sign");
    return 0;
  }
  DD("keygen x509ss ready %s", lk);

  /* ----- Output phase ----- */

  um = umask(0077);  /* Key material should be readable only by owner */

  wbio_csr = BIO_new(BIO_s_mem());
  DD("write_csr %s", lk);
  if (!PEM_write_bio_X509_REQ(wbio_csr, req)) {
    ERR("write_csr %s", lk);
    zx_report_openssl_error("write_csr");
    return 0;
  }
  len = BIO_get_mem_data(wbio_csr, &p);

  write_all_path_fmt("auto_cert csr", buflen, buf,
		     "%s" ZXID_PEM_DIR "csr-%s", cf->path, name,
		     "%.*s", len, p);
  BIO_free_all(wbio_csr);

  /* Output combined self signed plus private key file. It is important
   * that this happens after csr so that buf is left with this data
   * so that the caller can then parse it. */

  wbio_cert = BIO_new(BIO_s_mem());
  DD("write_cert %s", lk);
  if (!PEM_write_bio_X509(wbio_cert, x509ss)) {
    ERR("write_cert %s", lk);
    zx_report_openssl_error("write_cert");
    return 0;
  }
  len = BIO_get_mem_data(wbio_cert, &p);

  wbio_pkey = BIO_new(BIO_s_mem());
  DD("write_private_key %s", lk);
  if (!PEM_write_bio_PrivateKey(wbio_pkey, pkey, 0,0,0,0,0)) {
    ERR("write_private_key %s", lk);
    zx_report_openssl_error("write_private_key");
    return 0;
  }
  lenq = BIO_get_mem_data(wbio_pkey, &q);

  write_all_path_fmt("auto_cert ss", buflen, buf,
		     "%s" ZXID_PEM_DIR "%s", cf->path, name,
		     "%.*s%.*s", len, p, lenq, q);

  BIO_free_all(wbio_cert);
  BIO_free_all(wbio_pkey);

  umask(um);

  EVP_PKEY_free(pkey);
  X509_REQ_free(req);
  X509_free(x509ss);
  X509V3_EXT_cleanup();
  OBJ_cleanup();

  zxlog(cf, 0, 0, 0, 0, 0, 0, 0, 0, "K", "KEYGEN", name, 0);
  D("keygen done. %s", lk);
  return 1;
#else
  ERR("ZXID was compiled without USE_OPENSSL. This means self signed certificate generation facility is unavailable. Recompile ZXID. %s", lk);
  return 0;
#endif
}

/* Adapted by Sampo from FreeBSD md5_crypt.c, which is licensed as follows
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <phk@login.dknet.dk> wrote this file.  As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer in return.   Poul-Henning Kamp
 * ----------------------------------------------------------------------------
 */

extern char pw_basis_64[64];

/* Called by:  zx_md5_crypt x6 */
static void to64(char *s, unsigned long v, int n) {
  while (--n >= 0) {
    *s++ = pw_basis_64[v & 0x3f];
    v >>= 6;
  }
}

/*() Compute MD5-Crypt password hash (starts by $1$)
 * 
 * pw:: Password in plain
 * salt:: 0-8 chars of salt. Preceding $1$ is automatically skipped. Salt ends in $ or nul.
 * buf:: must be at least 120 chars
 * return:: buf, nul terminated */

/* Called by:  main x2, zxid_pw_authn */
char* zx_md5_crypt(const char* pw, const char* salt, char* buf)
{
  const char* magic = "$1$";    /* magic prefix to identify algo */
  char* p;
  const char *sp, *ep;
  unsigned char final[16];
  int sl, pl, i, j;
  MD5_CTX ctx, ctx1;
  unsigned long l;

  /* Refine the Salt first */
  sp = salt;
  
  /* If it starts with the magic string, then skip that */
  if (!strncmp(sp, magic, strlen(magic)))
    sp += strlen(magic);
  
  /* It stops at the first '$', max 8 chars */
  for (ep = sp; *ep && *ep != '$' && ep < (sp + 8); ep++) ;
  sl = ep - sp;  /* get the length of the true salt */
  
  MD5_Init(&ctx);
  MD5_Update(&ctx, (unsigned const char *)pw, strlen(pw));       /* pw 1st, as it's most unknown */
  MD5_Update(&ctx, (unsigned const char *)magic, strlen(magic)); /* Then our magic string */
  MD5_Update(&ctx, (unsigned const char *)sp, sl);               /* Then the raw salt */
  
  /* Then just as many characters of the MD5(pw,salt,pw) */
  MD5_Init(&ctx1);
  MD5_Update(&ctx1, (unsigned const char *)pw, strlen(pw));
  MD5_Update(&ctx1, (unsigned const char *)sp, sl);
  MD5_Update(&ctx1, (unsigned const char *)pw, strlen(pw));
  MD5_Final(final, &ctx1);
  for (pl = strlen(pw); pl > 0; pl -= 16)
    MD5_Update(&ctx, (unsigned const char *)final, pl>16 ? 16 : pl);

  memset(final, 0, sizeof final); /* Don't leave anything around in vm they could use. */
  
  /* Then something really weird... */
  for (j = 0, i = strlen(pw); i; i >>= 1)
    if (i & 1)
      MD5_Update(&ctx, (unsigned const char *)final+j, 1);
    else
      MD5_Update(&ctx, (unsigned const char *)pw+j, 1);
  
  strcpy(buf, magic);   /* Start the output string */
  strncat(buf, sp, sl);
  strcat(buf, "$");
  
  MD5_Final(final, &ctx);
  
  /* and now, just to make sure things don't run too fast
   * On a 60 Mhz Pentium this takes 34 msec, so you would
   * need 30 seconds to build a 1000 entry dictionary... */
  for (i = 0; i < 1000; i++) {
    MD5_Init(&ctx1);
    if (i & 1)
      MD5_Update(&ctx1, (unsigned const char *)pw, strlen(pw));
    else
      MD5_Update(&ctx1, (unsigned const char *)final, 16);
    
    if (i % 3)
      MD5_Update(&ctx1, (unsigned const char *)sp, sl);
    
    if (i % 7)
      MD5_Update(&ctx1, (unsigned const char *)pw, strlen(pw));
    
    if (i & 1)
      MD5_Update(&ctx1, (unsigned const char *)final, 16);
    else
      MD5_Update(&ctx1, (unsigned const char *)pw, strlen(pw));
    MD5_Final(final, &ctx1);
  }
  
  p = buf + strlen(buf);

  l = (final[0] << 16) | (final[6] << 8) | final[12];  to64(p, l, 4);  p += 4;
  l = (final[1] << 16) | (final[7] << 8) | final[13];  to64(p, l, 4);  p += 4;
  l = (final[2] << 16) | (final[8] << 8) | final[14];  to64(p, l, 4);  p += 4;
  l = (final[3] << 16) | (final[9] << 8) | final[15];  to64(p, l, 4);  p += 4;
  l = (final[4] << 16) | (final[10] << 8) | final[5];  to64(p, l, 4);  p += 4;
  l = final[11];                                       to64(p, l, 2);  p += 2;
  *p = '\0';

  memset(final, 0, sizeof final); /* Don't leave anything around in vm they could use. */
  return buf;
}

/* EOF  -  zxcrypto.c */
