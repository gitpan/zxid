/* zxsig.c  -  Signature generation and validation
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing. See file COPYING.
 * $Id: zxsig.c,v 1.3 2006/10/15 00:27:26 sampo Exp $
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

int zxsig_validate(struct zx_ctx* c, X509* cert, struct zx_ds_Signature_s* sig, int n, struct zxsig_ref* ref)
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
  for (; n; --n, ++ref) {
    ss = zx_EASY_ENC_WO_any_elem(c, ref->blob);
    D("canon blob(%.*s)", ss->len, ss->s);
    if (       ZX_STR_ENDS_IN_CONST(ref->ref->DigestMethod->Algorithm, "#sha1")) {
      SHA1(ss->s, ss->len, md_calc);
      siz = 20;
    } else if (ZX_STR_ENDS_IN_CONST(ref->ref->DigestMethod->Algorithm, "#md5")) {
      MD5(ss->s, ss->len, md_calc);
      siz = 16;
    } else {
      ERR("Unknown digest algo(%.*s) in ref(%.*s). Only SHA1 and MD5 are supported.",
	  ref->ref->DigestMethod->Algorithm->len, ref->ref->DigestMethod->Algorithm->s,
	  ref->ref->URI->len, ref->ref->URI->s);
      ZX_FREE(c, ss);
      return ZXSIG_BAD_DALGO;
    }
    if (ref->ref->DigestValue->content->len != SIMPLE_BASE64_LEN(siz)) {
      ERR("Message digest(%.*) length incorrect (%d vs. %d) at ref(%.*s)",
	  ref->ref->DigestValue->content->s, ref->ref->DigestValue->content->len,
	  ref->ref->DigestValue->content->len, SIMPLE_BASE64_LEN(siz),
	  ref->ref->URI->len, ref->ref->URI->s);
      ZX_FREE(c, ss);
      return ZXSIG_DIGEST_LEN;
    }
    unbase64_raw(ref->ref->DigestValue->content->s,
		 ref->ref->DigestValue->content->s + ref->ref->DigestValue->content->len,
		 md_given, zx_std_index_64);
    if (memcmp(md_calc, md_given, siz)) {
      ERR("Message digest(%.*s) does not match calculated digest at ref(%.*s)",
	  ref->ref->DigestValue->content->len, ref->ref->DigestValue->content->s,
	  ref->ref->URI->len, ref->ref->URI->s);
      ZX_FREE(c, ss);
      return ZXSIG_BAD_DIGEST;
    }
    ZX_FREE(c, ss);
  }
  c->exclude_sig = 0;
  ss = zx_EASY_ENC_WO_ds_SignedInfo(c, sig->SignedInfo);
  D("canon sigInfo(%.*s)", ss->len, ss->s);
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
    verdict = RSA_verify(NID_sha1, md_calc, 20, old_sig_raw, lim - old_sig_raw, rsa_pkey);
    if (!verdict) goto vfyerr;
  } else if (ZX_STR_ENDS_IN_CONST(sig->SignedInfo->SignatureMethod->Algorithm, "#dsa-sha1")) {
    dsa_pkey = EVP_PKEY_get1_DSA(evp_pkey);
    if (!dsa_pkey) goto certerr;
    SHA1(ss->s, ss->len, md_calc);
    verdict = DSA_verify(NID_sha1, md_calc, 20, old_sig_raw, lim - old_sig_raw, dsa_pkey);
    if (!verdict) goto vfyerr;
  } else if (ZX_STR_ENDS_IN_CONST(sig->SignedInfo->SignatureMethod->Algorithm, "#rsa-md5")) {
    rsa_pkey = EVP_PKEY_get1_RSA(evp_pkey);
    if (!rsa_pkey) goto certerr;
    MD5(ss->s, ss->len, md_calc);
    verdict = RSA_verify(NID_md5, md_calc, 16, old_sig_raw, lim - old_sig_raw, rsa_pkey);
    if (!verdict) goto vfyerr;
  } else if (ZX_STR_ENDS_IN_CONST(sig->SignedInfo->SignatureMethod->Algorithm, "#dsa-md5")) {
    dsa_pkey = EVP_PKEY_get1_DSA(evp_pkey);
    if (!dsa_pkey) goto certerr;
    MD5(ss->s, ss->len, md_calc);
    verdict = DSA_verify(NID_md5, md_calc, 16, old_sig_raw, lim - old_sig_raw, dsa_pkey);
    if (!verdict) goto vfyerr;
  } else {
    ERR("Unknown digest algo(%.*s) in ref(%.*s). Only SHA1 and MD5 are supported.",
	ref->ref->DigestMethod->Algorithm->len, ref->ref->DigestMethod->Algorithm->s,
	ref->ref->URI->len, ref->ref->URI->s);
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
  HEXDUMP("md from sig verify: ", md_calc, md_calc+20, 20);
  ZX_FREE(c, ss);
  return ZXSIG_VFY_FAIL;
}

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
/* EOF -- zxsig.c */
