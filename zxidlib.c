/* zxidlib.c  -  Handwritten functions for implementing common application logic for SP
 * Copyright (c) 2006-2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidlib.c,v 1.46 2007/05/10 18:19:57 sampo Exp $
 *
 * 12.8.2006, created --Sampo
 * 16.1.2007, factored out ses, conf, cgi, ecp, cdc, and loc --Sampo
 */

#include <string.h>
#include <stdio.h>

#ifdef USE_CURL
#include <curl/curl.h>
#endif

#include "errmac.h"
#include "zxid.h"
#include "zxidconf.h"
#include "saml2.h"
#include "c/zxidvers.h"
#include "c/zx-const.h"
#include "c/zx-ns.h"
#include "c/zx-data.h"

int debug = 0;
int assert_nonfatal = 0;
char* assert_msg = "%s: Internal error caused an ASSERT to fire. Deliberately provoking a core dump.\nSorry for the inconvenience.\n";
int trace = 0;

/* Called by:  opt */
int zxid_version()
{
  return ZXID_VERSION;
}

/* Called by:  main x4, opt, zxid_fed_mgmt_cf, zxid_idp_select, zxid_mgmt */
char* zxid_version_str()
{
  return ZXID_REL " " ZXID_COMPILE_DATE " libzxid (zxid.org)";
}

/* ============== SOAP Call ============= */

/* See also: http://curl.haxx.se/libcurl/ */

#define ZXID_MAX_SOAP (64*1024)

/* Called by:  zxid_soap_call_body */
struct zx_root_s* zxid_soap_call_raw(struct zxid_conf* cf, struct zx_str* url, struct zx_str* data)
{
#ifdef USE_CURL
  struct zx_root_s* r;
  CURLcode res;
  struct zxid_curl_ctx rc;
  struct zxid_curl_ctx wc;
  struct curl_slist content_type;
  struct curl_slist SOAPaction;
  char* urli;
  char* buf = ZX_ALLOC(cf->ctx, ZXID_MAX_SOAP+1);
  rc.p = buf;
  rc.lim = buf + ZXID_MAX_SOAP;
  curl_easy_setopt(cf->curl, CURLOPT_WRITEDATA, &rc);
  curl_easy_setopt(cf->curl, CURLOPT_WRITEFUNCTION, zxid_curl_write_data);
  curl_easy_setopt(cf->curl, CURLOPT_NOPROGRESS, 1);
  curl_easy_setopt(cf->curl, CURLOPT_FOLLOWLOCATION, 1);
  curl_easy_setopt(cf->curl, CURLOPT_MAXREDIRS, 110);
  curl_easy_setopt(cf->curl, CURLOPT_SSL_VERIFYPEER, 0);  /* *** arrange verification */
  curl_easy_setopt(cf->curl, CURLOPT_SSL_VERIFYHOST, 0);  /* *** arrange verification */
  urli = zx_str_to_c(cf->ctx, url);
  D("urli(%s) data->len=%d", urli, data->len);
  curl_easy_setopt(cf->curl, CURLOPT_URL, urli);
  
  wc.p = data->s;
  wc.lim = data->s + data->len;
  
  curl_easy_setopt(cf->curl, CURLOPT_POST, 1);
  curl_easy_setopt(cf->curl, CURLOPT_POSTFIELDSIZE, data->len);
  curl_easy_setopt(cf->curl, CURLOPT_READDATA, &wc);
  curl_easy_setopt(cf->curl, CURLOPT_READFUNCTION, zxid_curl_read_data);
  
  memset(&content_type, 0, sizeof(content_type));
  content_type.data = "Content-Type: text/xml";
  curl_easy_setopt(cf->curl, CURLOPT_HTTPHEADER, &content_type);

  memset(&SOAPaction, 0, sizeof(SOAPaction));
  SOAPaction.data = "SOAPAction: \"\"";
  curl_easy_setopt(cf->curl, CURLOPT_HTTPHEADER, &SOAPaction);
  
  D("------------------------ url(%.*s) ------------------------", url->len, url->s);
  res = curl_easy_perform(cf->curl);  /* <========= Actual call, blocks. */
  ZX_FREE(cf->ctx, urli);
  rc.lim = rc.p;
  rc.p[1] = 0;
  rc.p = buf;
  
  zx_prepare_dec_ctx(cf->ctx, zx_ns_tab, buf, rc.lim);
  r = zx_DEC_root(cf->ctx, 0, 1);
  if (!r || !r->Envelope || !r->Envelope->Body) {
    ERR("Failed to parse SOAP response url(%.*s) CURLcode(%d) CURLerr(%s) buf(%.*s)", url->len, url->s, res, curl_easy_strerror(res), rc.lim-buf, buf);
    return 0;
  }
  return r;
#else
  ERR("This copy of zxid was compiled to NOT use libcurl. SOAP calls (such as Artifact profile and WSC) are not supported. Add -DUSE_CURL and recompile. %d", 0);
  return 0;
#endif
}

/* To be called from ID-WSF world */

struct zx_root_s* zxid_soap_call_envelope(struct zxid_conf* cf, struct zx_str* url, struct zx_e_Envelope_s* env)
{
  struct zx_root_s* r;
  struct zx_str* ss;
  ss = zx_EASY_ENC_SO_e_Envelope(cf->ctx, env);
  r = zxid_soap_call_raw(cf, url, ss);
  zx_str_free(cf->ctx, ss);
  return r;
}

/* To be called from SSO world */

struct zx_root_s* zxid_soap_call_hdr_body(struct zxid_conf* cf, struct zx_str* url, struct zx_e_Header_s* hdr, struct zx_e_Body_s* body)
{
  struct zx_root_s* r;
  struct zx_str* ss;
  struct zx_e_Envelope_s* env = zx_NEW_e_Envelope(cf->ctx);
  env->Header = hdr;
  env->Body = body;
  ss = zx_EASY_ENC_SO_e_Envelope(cf->ctx, env);
  r = zxid_soap_call_raw(cf, url, ss);
  zx_str_free(cf->ctx, ss);
  return r;
}

/* Called by:  zxid_idp_soap, zxid_sp_deref_art */
struct zx_root_s* zxid_soap_call_body(struct zxid_conf* cf, struct zx_str* url, struct zx_e_Body_s* body)
{
  return zxid_soap_call_hdr_body(cf, url, zx_NEW_e_Header(cf->ctx), body);
}

/* Called by:  zxid_sp_soap_dispatch x2 */
int zxid_soap_cgi_resp_body(struct zxid_conf* cf, struct zx_e_Body_s* body)
{
  struct zx_e_Envelope_s* env = zx_NEW_e_Envelope(cf->ctx);
  struct zx_str* ss;
  
  env->Header = zx_NEW_e_Header(cf->ctx);
  env->Body = body;
  ss = zx_EASY_ENC_SO_e_Envelope(cf->ctx, env);

  D("SOAP_RESP(%.*s)", ss->len, ss->s);
  printf("text/xml" CRLF2 "%.*s", ss->len, ss->s);
  return ZXID_REDIR_OK;
}

/* ============== Redirect Encodings ============= */

/* Returns query string part of redirection URL */

#define SIG_ALGO_RSA_SHA1_URLENC "&SigAlg=http://www.w3.org/2000/09/xmldsig%23rsa-sha1"
#define SIGNATURE_EQ "&Signature="

/* Called by:  zxid_saml2_location, zxid_saml2_redir, zxid_saml2_redir_url, zxid_saml2_resp_location, zxid_saml2_resp_redir */
struct zx_str* zxid_saml2_redir_enc(struct zxid_conf* cf, struct zx_str* pay_load)
{
  char* zbuf;
  char* b64;
  char* url;
  char* sig;
  char* p;
  int zlen, len, slen;
  
  /* RFC1951 per SAML2 binding line 576 (p.17), i.e. NOT gzip or ordinary zlib */
  zbuf = zx_zlib_raw_deflate(cf->ctx, pay_load->len, pay_load->s, &zlen);
  if (!zbuf)
    return 0;
  
  len = SIMPLE_BASE64_LEN(zlen);
  b64 = ZX_ALLOC(cf->ctx, len);
  p = base64_fancy_raw(zbuf, zlen, b64, std_basis_64, 1<<31, 0, 0, '=');
  
  len = zx_url_encode_len(p-b64, b64) - 1;  /* zap nul termination */
  url = ZX_ALLOC(cf->ctx, len + sizeof(SIG_ALGO_RSA_SHA1_URLENC));
  zx_url_encode_raw(p-b64, b64, url);
  ZX_FREE(cf->ctx, b64);

  /* *** relay state ... */

  if (!cf->authn_req_sign) {    /* Simple nonsigned case. */
    url[len] = 0;
    return zx_ref_len_str(cf->ctx, len, url);
  }
  
  /* Additional URL signing */
  
  memcpy(url+len, SIG_ALGO_RSA_SHA1_URLENC, sizeof(SIG_ALGO_RSA_SHA1_URLENC)-1);
  len += sizeof(SIG_ALGO_RSA_SHA1_URLENC)-1;
  if (!cf->sign_pkey)
    cf->sign_pkey = zxid_read_private_key(cf, "sign-nopw-cert.pem");
  zlen = zxsig_data_rsa_sha1(cf->ctx, len, url, &zbuf, cf->sign_pkey, "SAML2 redir");
  if (zlen == -1)
    return 0;
  
  /* Base64 and URL encode the sig. Had SAML2 specified safe base64, world would be simpler! */
  
  b64 = ZX_ALLOC(cf->ctx, SIMPLE_BASE64_LEN(zlen));
  p = base64_fancy_raw(zbuf, zlen, b64, std_basis_64, 1<<31, 0, 0, '=');
  
  slen = zx_url_encode_len(p-b64, b64) - 1;
  sig = ZX_ALLOC(cf->ctx, len + sizeof(SIGNATURE_EQ)-1 + slen + 1);
  memcpy(sig, url, len);
  memcpy(sig + len, SIGNATURE_EQ, sizeof(SIGNATURE_EQ)-1);
  len += sizeof(SIGNATURE_EQ)-1;
  zx_url_encode_raw(p-b64, b64, sig + len);
  ZX_FREE(cf->ctx, b64);
  ZX_FREE(cf->ctx, url);
  sig[len + slen] = 0;
  return zx_ref_len_str(cf->ctx, len + slen, sig);
}

/* Called by:  zxid_start_sso_url */
struct zx_str* zxid_saml2_redir_url(struct zxid_conf* cf, struct zx_str* loc, struct zx_str* rs)
{
  struct zx_str* ss;
  struct zx_str* rse = zxid_saml2_redir_enc(cf, rs);
  if (!loc || !rse) {
    ERR("Redirection location URL missing. %d", 0);
    return 0;
  }
  D("%.*s?SAMLRequest=%.*s", loc->len, loc->s, rse->len, rse->s);
  ss = zx_strf(cf->ctx, "%.*s?SAMLRequest=%.*s", loc->len, loc->s, rse->len, rse->s);
  zx_str_free(cf->ctx, rse);
  return ss;
}

/* Return the HTTP 302 redirect LOCATION header + CRLF2 */

/* Called by:  zxid_sp_nireg_location, zxid_sp_slo_location */
struct zx_str* zxid_saml2_location(struct zxid_conf* cf, struct zx_str* loc, struct zx_str* rs)
{
  struct zx_str* ss;
  struct zx_str* rse = zxid_saml2_redir_enc(cf, rs);
  if (!loc) {
    ERR("Redirection location URL missing. rse(%.*s)", rse->len, rse->s);
    return 0;
  }
  D("Location: %.*s?SAMLRequest=%.*s", loc->len, loc->s, rse->len, rse->s);
  ss = zx_strf(cf->ctx, "Location: %.*s?SAMLRequest=%.*s" CRLF2, loc->len, loc->s, rse->len, rse->s);
  zx_str_free(cf->ctx, rse);
  return ss;
}

/* Called by:  zxid_sp_nireg_redir, zxid_sp_slo_redir */
int zxid_saml2_redir(struct zxid_conf* cf, struct zx_str* loc, struct zx_str* rs)
{
  struct zx_str* rse = zxid_saml2_redir_enc(cf, rs);
  if (!loc || !rse) {
    ERR("Redirection location URL missing. %d", 0);
    return 0;
  }
  D("Location: %.*s?SAMLRequest=%.*s", loc->len, loc->s, rse->len, rse->s);
  printf("Location: %.*s?SAMLRequest=%.*s" CRLF2, loc->len, loc->s, rse->len, rse->s);
  zx_str_free(cf->ctx, rse);
  fflush(stdout);
  return ZXID_REDIR_OK;
}

/* Called by:  zxid_sp_dispatch_location x2 */
struct zx_str* zxid_saml2_resp_location(struct zxid_conf* cf, struct zx_str* loc, struct zx_str* rs)
{
  struct zx_str* ss;
  struct zx_str* rse = zxid_saml2_redir_enc(cf, rs);
  if (!loc || !rse) {
    ERR("Redirection location URL missing. rse(%.*s)", rse->len, rse->s);
    return 0;
  }
  D("Location: %.*s?SAMLResponse=%.*s", loc->len, loc->s, rse->len, rse->s);
  ss = zx_strf(cf->ctx, "Location: %.*s?SAMLResponse=%.*s" CRLF2, loc->len, loc->s, rse->len, rse->s);
  zx_str_free(cf->ctx, rse);
  return ss;
}

/* Called by:  zxid_sp_dispatch x2 */
int zxid_saml2_resp_redir(struct zxid_conf* cf, struct zx_str* loc, struct zx_str* rs)
{
  struct zx_str* rse = zxid_saml2_redir_enc(cf, rs);
  if (!loc || !rse) {
    ERR("Redirection location URL missing. %d", 0);
    return 0;
  }
  D("Location: %.*s?SAMLResponse=%.*s", loc->len, loc->s, rse->len, rse->s);
  printf("Location: %.*s?SAMLResponse=%.*s" CRLF2, loc->len, loc->s, rse->len, rse->s);
  zx_str_free(cf->ctx, rse);
  return ZXID_REDIR_OK;
}

/* Called by:  zxid_sp_dispatch x3, zxid_sp_dispatch_location x3, zxid_sp_nireg_soap, zxid_sp_slo_soap, zxid_sp_soap_dispatch x2 */
int zxid_saml_ok(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zx_sp_Status_s* st, char* what)
{
  struct zx_str* ss;
  struct zx_str* m = 0;
  struct zx_str* sc1 = 0;
  struct zx_str* sc2 = 0;
  struct zx_sp_StatusCode_s* sc = st->StatusCode;
  if (!memcmp(SAML2_SC_SUCCESS, sc->Value->s, sc->Value->len)) {
    D("SAML ok what(%s)", what);
    return 1;
  }
  if (st->StatusMessage && (m = st->StatusMessage->content))
    ERR("SAML Fail what(%s) msg(%.*s)", what, m->len, m->s);
  if (sc1 = sc->Value)
    ERR("SAML Fail what(%s) SC1(%.*s)", what, sc1->len, sc1->s);
  if (sc->StatusCode)
    sc2 = sc->StatusCode->Value;
  for (sc = sc->StatusCode; sc; sc = sc->StatusCode)
    ERR("SAML Fail what(%s) subcode(%.*s)", what, sc->Value->len, sc->Value->s);
  
  if (!cgi)
    return 0;
  
  ss = zx_strf(cf->ctx, "SAML Fail what(%s) msg(%.*s) SC1(%.*s) subcode(%.*s)", what,
	       m?m->len:0, m?m->s:"",
	       sc1?sc1->len:0, sc1?sc1->s:"",
	       sc2?sc2->len:0, sc2?sc2->s:"");
  cgi->err = ss->s;
  return 0;
}

/* EOF  --  zxidlib.c */
