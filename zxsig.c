/* zxsig.c  -  Signature generation and validation
 * Copyright (c) 2006 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxsig.c,v 1.10 2007/02/23 05:00:29 sampo Exp $
 *
 * 29.9.2006, created --Sampo
 */

#include <memory.h>
#include <string.h>
#include <openssl/x509.h>
#include <openssl/sha.h>
#include <openssl/md5.h>
#include <openssl/evp.h>
#include <openssl/rsa.h>
#include <openssl/dsa.h>
#include <openssl/err.h>

#include "errmac.h"
#include "zx.h"
#include "zxid.h"
#include "c/zx-data.h"   /* For the XMLDSIG code. */

/* Called by:  main, zxid_sp_sso_finalize */
int zxsig_validate(struct zx_ctx* c, X509* cert, struct zx_ds_Signature_s* sig, int n, struct zxsig_ref* sref)
{
  EVP_PKEY* evp_pkey;
  struct rsa_st* rsa_pkey;
  struct dsa_st* dsa_pkey;
  int siz, verdict;
  char* old_sig_raw;
  char* lim;
  char md_calc[20];   /* SHA1 is 160 bits. */
  char md_given[20];  /* SHA1 is 160 bits. */
  struct zx_str* ss;
  c->exclude_sig = sig;
  for (; n; --n, ++sref) {
    ss = zx_EASY_ENC_WO_any_elem(c, sref->blob);
    D("canon blob(%.*s)", ss->len, ss->s);
    if (       ZX_STR_ENDS_IN_CONST(sref->sref->DigestMethod->Algorithm, "#sha1")) {
      SHA1(ss->s, ss->len, md_calc);
      siz = 20;
    } else if (ZX_STR_ENDS_IN_CONST(sref->sref->DigestMethod->Algorithm, "#md5")) {
      MD5(ss->s, ss->len, md_calc);
      siz = 16;
    } else {
      ERR("Unknown digest algo(%.*s) in sref(%.*s). Only SHA1 and MD5 are supported.",
	  sref->sref->DigestMethod->Algorithm->len, sref->sref->DigestMethod->Algorithm->s,
	  sref->sref->URI->len, sref->sref->URI->s);
      ZX_FREE(c, ss);
      return ZXSIG_BAD_DALGO;
    }
    if (sref->sref->DigestValue->content->len != SIMPLE_BASE64_LEN(siz)) {
      ERR("Message digest(%.*) length incorrect (%d vs. %d) at sref(%.*s)",
	  sref->sref->DigestValue->content->s, sref->sref->DigestValue->content->len,
	  sref->sref->DigestValue->content->len, SIMPLE_BASE64_LEN(siz),
	  sref->sref->URI->len, sref->sref->URI->s);
      ZX_FREE(c, ss);
      return ZXSIG_DIGEST_LEN;
    }
    unbase64_raw(sref->sref->DigestValue->content->s,
		 sref->sref->DigestValue->content->s + sref->sref->DigestValue->content->len,
		 md_given, zx_std_index_64);
    if (memcmp(md_calc, md_given, siz)) {
      ERR("Message digest(%.*s) does not match calculated digest at sref(%.*s)",
	  sref->sref->DigestValue->content->len, sref->sref->DigestValue->content->s,
	  sref->sref->URI->len, sref->sref->URI->s);
      ZX_FREE(c, ss);
      return ZXSIG_BAD_DIGEST;
    }
    ZX_FREE(c, ss);
  }
  c->exclude_sig = 0;
  ss = zx_EASY_ENC_WO_ds_SignedInfo(c, sig->SignedInfo);
  evp_pkey = X509_get_pubkey(cert);
  if (!evp_pkey) goto certerr;

  old_sig_raw = ZX_ALLOC(c, SIMPLE_BASE64_PESSIMISTIC_DECODE_LEN(sig->SignatureValue->gg.content->len));
  lim = unbase64_raw(sig->SignatureValue->gg.content->s,
		     sig->SignatureValue->gg.content->s + sig->SignatureValue->gg.content->len,
		     old_sig_raw, zx_std_index_64);
  
  if (       ZX_STR_ENDS_IN_CONST(sig->SignedInfo->SignatureMethod->Algorithm, "#rsa-sha1")) {
    /* PKCS#1 v2.0 */
    rsa_pkey = EVP_PKEY_get1_RSA(evp_pkey);
    if (!rsa_pkey) goto certerr;
    SHA1(ss->s, ss->len, md_calc);
    D("VFY rsa-sha1 (PKCS#1 v2.0) canon sigInfo(%.*s) %d", ss->len, ss->s, hexdmp("inner sha1: ", md_calc,20,20));
    verdict = RSA_verify(NID_sha1, md_calc, 20, old_sig_raw, lim - old_sig_raw, rsa_pkey);
    if (!verdict) goto vfyerr;
  } else if (ZX_STR_ENDS_IN_CONST(sig->SignedInfo->SignatureMethod->Algorithm, "#dsa-sha1")) {
    dsa_pkey = EVP_PKEY_get1_DSA(evp_pkey);
    if (!dsa_pkey) goto certerr;
    SHA1(ss->s, ss->len, md_calc);
    D("VFY dsa-sha1 canon sigInfo(%.*s) %d", ss->len, ss->s, hexdmp("inner sha1: ",md_calc,20,20));
    verdict = DSA_verify(NID_sha1, md_calc, 20, old_sig_raw, lim - old_sig_raw, dsa_pkey);
    if (!verdict) goto vfyerr;
  } else if (ZX_STR_ENDS_IN_CONST(sig->SignedInfo->SignatureMethod->Algorithm, "#rsa-md5")) {
    rsa_pkey = EVP_PKEY_get1_RSA(evp_pkey);
    if (!rsa_pkey) goto certerr;
    MD5(ss->s, ss->len, md_calc);
    D("VFY rsa-md5 canon sigInfo(%.*s) %d", ss->len, ss->s, hexdmp("inner md5: ",md_calc,16,16));
    verdict = RSA_verify(NID_md5, md_calc, 16, old_sig_raw, lim - old_sig_raw, rsa_pkey);
    if (!verdict) goto vfyerr;
  } else if (ZX_STR_ENDS_IN_CONST(sig->SignedInfo->SignatureMethod->Algorithm, "#dsa-md5")) {
    dsa_pkey = EVP_PKEY_get1_DSA(evp_pkey);
    if (!dsa_pkey) goto certerr;
    MD5(ss->s, ss->len, md_calc);
    D("VFY dsa-md5 canon sigInfo(%.*s) %d", ss->len, ss->s, hexdmp("inner md5: ",md_calc,16,16));
    verdict = DSA_verify(NID_md5, md_calc, 16, old_sig_raw, lim - old_sig_raw, dsa_pkey);
    if (!verdict) goto vfyerr;
  } else {
    ERR("Unknown digest algo(%.*s) in sref(%.*s). Only SHA1 and MD5 are supported.",
	sref->sref->DigestMethod->Algorithm->len, sref->sref->DigestMethod->Algorithm->s,
	sref->sref->URI->len, sref->sref->URI->s);
    ZX_FREE(c, ss);
    return ZXSIG_BAD_SALGO;
  }  
  ZX_FREE(c, ss);
  return ZXSIG_OK;

certerr:
  zx_report_openssl_error("certificate error");
  ZX_FREE(c, ss);
  return ZXSIG_BAD_CERT;

vfyerr:
  zx_report_openssl_error("verification error");
  D("VFY FAIL canon sigInfo(%.*s) %d", ss->len, ss->s, hexdmp("md_calc: ", md_calc, 20, 20));
  ZX_FREE(c, ss);
  return ZXSIG_VFY_FAIL;
}

/* Called by:  main, zxlog_write_line x3, zxsig_data_rsa_sha1, zxsig_validate x2, zxsig_verify_data_rsa_sha1 x3 */
int zx_report_openssl_error(const char* logkey)
{
  char buf[256];
  unsigned long err;
  const char* file;
  const char* data;
  int flags, line, n_err = 0;
  buf[0] = 0;
  while ((err = ERR_get_error_line_data(&file, &line, &data, &flags))) {
    ERR_error_string_n(err, buf, sizeof(buf));
    buf[sizeof(buf)-1] = 0;
    ERR("%s: OpenSSL error(%d) %s (%s:%d): %s %x", logkey, err,
		 buf, STRNULLCHK(file), line,
		 (data && (flags & ERR_TXT_STRING)) ? data : "?", flags);
  }
  return n_err;
}

/* Called by:  zxid_saml2_redir_enc, zxlog_write_line x2 */
int zxsig_data_rsa_sha1(struct zx_ctx* c, int len, char* data, char** sig, RSA* priv_key, char* lk)
{
  char sha1[20];  /* 160 bits */
  SHA1(data, len, sha1);
  
  DD("RSA_sign(%s) data above", lk, hexdump("data: ", data, data+len, 4096));
  D("RSA_sign(%s) sha1 above", lk, hexdump("sha1: ", sha1, sha1+20, 20));
  
  len = RSA_size(priv_key);
  *sig = ZX_ALLOC(c, len);
  if (RSA_sign(NID_sha1, sha1, 20, *sig, &len, priv_key))  /* PKCS#1 v2.0 */
    return len;
  ERR("RSA signing in %s data failed. Perhaps you have bad, or no, private key(%p) len=%d data=%p", lk, priv_key, len, data);
  zx_report_openssl_error(lk);
  return -1;
}

/* Called by:  main, zxlog_zsig_verify_print */
int zxsig_verify_data_rsa_sha1(int len, char* data, int siglen, char* sig, X509* cert, char* lk)
{
  int verdict;
  EVP_PKEY* evp_pkey;
  struct rsa_st* rsa_pkey;
  char sha1[20];  /* 160 bits */
  SHA1(data, len, sha1);
  
  DD("RSA_vfy(%s) data above", lk, hexdump("data: ", data, data+len, 4096));
  DD("RSA_vfy(%s) sig above", lk, hexdump("sig: ", sig, sig+len, 4096));
  D("RSA_vfy(%s) sha1 above", lk, hexdump("sha1: ", sha1, sha1+20, 20));
  
  evp_pkey = X509_get_pubkey(cert);
  if (!evp_pkey) {
    ERR("RSA vfy: failed to get public key from certificate (perhaps you have not supplied any certificate, or it is corrupt or of wrong type) %p", cert);
    zx_report_openssl_error("zxsig rsa vfy get_pub");
    return ZXSIG_BAD_CERT;
  }
  rsa_pkey = EVP_PKEY_get1_RSA(evp_pkey);
  if (!rsa_pkey) {
    ERR("RSA vfy: failed to extract RSA get public key from certificate (perhaps you have not supplied any certificate, or it is corrupt or of wrong type) %p", cert);
    zx_report_openssl_error("zxsig rsa vfy rsa get_pub rsa");
    return ZXSIG_BAD_CERT;
  }
  
  verdict = RSA_verify(NID_sha1, sha1, 20, sig, siglen, rsa_pkey);  /* PKCS#1 v2.0 */
  if (!verdict) {
    ERR("RSA signature verify in %s data failed. Perhaps you have bad, or no, certificate(%p) len=%d data=%p siglen=%d sig=%p", lk, cert, len, data, siglen, sig);
    zx_report_openssl_error(lk);
    return ZXSIG_VFY_FAIL;
  } else {
    D("RSA verify OK %d", verdict);
    return 0;
  }
}

/* EOF -- zxsig.c */
