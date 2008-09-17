/* zxidlib.c  -  Handwritten functions for implementing common application logic for SP
 * Copyright (c) 2006-2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidlib.c,v 1.55 2008-03-23 19:34:09 sampo Exp $
 *
 * 12.8.2006, created --Sampo
 * 16.1.2007, factored out ses, conf, cgi, ecp, cdc, and loc --Sampo
 */

#include <string.h>
#include <stdio.h>

#include "errmac.h"
#include "zxid.h"
#include "zxidconf.h"
#include "saml2.h"
#include "c/zxidvers.h"
#include "c/zx-const.h"
#include "c/zx-ns.h"
#include "c/zx-data.h"

int zx_debug = 0;   /* declared in errmac.h */
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
  printf("CONTENT-TYPE: text/xml" CRLF "CONTENT-LENGTH: %d" CRLF2 "%.*s", ss->len, ss->len, ss->s);
  return ZXID_REDIR_OK;
}

/* ============== Redirect Encodings ============= */

/* Returns query string part of redirection URL */

#define SIG_ALGO_RSA_SHA1_URLENC "&SigAlg=http://www.w3.org/2000/09/xmldsig%23rsa-sha1"
#define SIGNATURE_EQ "&Signature="

/* Called by:  zxid_saml2_location, zxid_saml2_redir, zxid_saml2_redir_url, zxid_saml2_resp_location, zxid_saml2_resp_redir */

struct zx_str* zxid_saml2_redir_enc(struct zxid_conf* cf, char* cgivar, struct zx_str* pay_load, char* relay_state)
{
  char* zbuf;
  char* b64;
  char* url;
  char* sig;
  char* p;
  int zlen, len, slen, cvlen, rs_len;
  cvlen = strlen(cgivar);
  rs_len = relay_state?strlen(relay_state):0;
  
  /* RFC1951 per SAML2 binding line 576 (p.17), i.e. NOT gzip or ordinary zlib */
  zbuf = zx_zlib_raw_deflate(cf->ctx, pay_load->len, pay_load->s, &zlen);
  if (!zbuf)
    return 0;
  
  len = SIMPLE_BASE64_LEN(zlen);
  b64 = ZX_ALLOC(cf->ctx, len);
  p = base64_fancy_raw(zbuf, zlen, b64, std_basis_64, 1<<31, 0, 0, '=');
  
  len = zx_url_encode_len(p-b64, b64) - 1 /* zap nul termination */ + cvlen;
  url = ZX_ALLOC(cf->ctx, len + sizeof(SIG_ALGO_RSA_SHA1_URLENC)
		 + (rs_len?(sizeof("&RelayState=")-1+rs_len):0));
  memcpy(url, cgivar, cvlen);

  zx_url_encode_raw(p-b64, b64, url+cvlen);
  ZX_FREE(cf->ctx, b64);
  
  if (rs_len) {
    memcpy(url + len, "&RelayState=", sizeof("&RelayState=")-1);
    memcpy(url + len + sizeof("&RelayState=")-1, relay_state, rs_len);
    len += sizeof("&RelayState=")-1+rs_len;
  }
  
  if (!cf->authn_req_sign) {    /* Simple nonsigned case. */
    url[len] = 0;  /* Reservation for SIG_ALGO_RSA_SHA1_URLENC provides space for nul term. */
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
struct zx_str* zxid_saml2_redir_url(struct zxid_conf* cf, struct zx_str* loc, struct zx_str* pay_load, char* relay_state)
{
  struct zx_str* ss;
  struct zx_str* rse = zxid_saml2_redir_enc(cf, "SAMLRequest=", pay_load, relay_state);
  if (!loc || !rse) {
    ERR("Redirection location URL missing. %d", 0);
    return 0;
  }
  D("%.*s?%.*s", loc->len, loc->s, rse->len, rse->s);
  ss = zx_strf(cf->ctx, "%.*s?%.*s", loc->len, loc->s, rse->len, rse->s);
  zx_str_free(cf->ctx, rse);
  return ss;
}

/* Return the HTTP 302 redirect LOCATION header + CRLF2 */

/* Called by:  zxid_sp_nireg_location, zxid_sp_slo_location */
struct zx_str* zxid_saml2_location(struct zxid_conf* cf, struct zx_str* loc, struct zx_str* pay_load, char* relay_state)
{
  struct zx_str* ss;
  struct zx_str* rse = zxid_saml2_redir_enc(cf, "SAMLRequest=", pay_load, relay_state);
  if (!loc) {
    ERR("Redirection location URL missing. rse(%.*s)", rse->len, rse->s);
    return 0;
  }
  D("Location: %.*s?%.*s", loc->len, loc->s, rse->len, rse->s);
  ss = zx_strf(cf->ctx, "Location: %.*s?%.*s" CRLF2, loc->len, loc->s, rse->len, rse->s);
  zx_str_free(cf->ctx, rse);
  return ss;
}

/* Called by:  zxid_sp_nireg_redir, zxid_sp_slo_redir */
int zxid_saml2_redir(struct zxid_conf* cf, struct zx_str* loc, struct zx_str* pay_load, char* relay_state)
{
  struct zx_str* rse = zxid_saml2_redir_enc(cf, "SAMLRequest=", pay_load, relay_state);
  if (!loc || !rse) {
    ERR("Redirection location URL missing. %d", 0);
    return 0;
  }
  D("Location: %.*s?%.*s", loc->len, loc->s, rse->len, rse->s);
  printf("Location: %.*s?%.*s" CRLF2, loc->len, loc->s, rse->len, rse->s);
  zx_str_free(cf->ctx, rse);
  fflush(stdout);
  return ZXID_REDIR_OK;
}

/* Called by:  zxid_sp_dispatch_location x2 */
struct zx_str* zxid_saml2_resp_location(struct zxid_conf* cf, struct zx_str* loc, struct zx_str* pay_load, char* relay_state)
{
  struct zx_str* ss;
  struct zx_str* rse = zxid_saml2_redir_enc(cf, "SAMLResponse=", pay_load, relay_state);
  if (!loc || !rse) {
    ERR("Redirection location URL missing. rse(%.*s)", rse->len, rse->s);
    return 0;
  }
  D("Location: %.*s?%.*s", loc->len, loc->s, rse->len, rse->s);
  ss = zx_strf(cf->ctx, "Location: %.*s?%.*s" CRLF2, loc->len, loc->s, rse->len, rse->s);
  zx_str_free(cf->ctx, rse);
  return ss;
}

/* Called by:  zxid_sp_dispatch x2 */
int zxid_saml2_resp_redir(struct zxid_conf* cf, struct zx_str* loc, struct zx_str* pay_load, char* relay_state)
{
  struct zx_str* rse = zxid_saml2_redir_enc(cf, "SAMLResponse=", pay_load, relay_state);
  if (!loc || !rse) {
    ERR("Redirection location URL missing. %p", loc);
    return 0;
  }
  D("Location: %.*s?%.*s", loc->len, loc->s, rse->len, rse->s);
  printf("Location: %.*s?%.*s" CRLF2, loc->len, loc->s, rse->len, rse->s);
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
    if (cf->log_level>0)
      zxlog(cf, 0, 0, 0, 0, 0, 0, 0, "N", "K", "SAMLOK", what, 0);
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
    
  ss = zx_strf(cf->ctx, "SAML Fail what(%s) msg(%.*s) SC1(%.*s) subcode(%.*s)", what,
	       m?m->len:0, m?m->s:"",
	       sc1?sc1->len:0, sc1?sc1->s:"",
	       sc2?sc2->len:0, sc2?sc2->s:"");

  if (cf->log_level>0)
    zxlog(cf, 0, 0, 0, 0, 0, 0, 0, "N", "F", "SAMLFAIL", what, ss->s);
  
  if (!cgi)
    return 0;
  cgi->err = ss->s;
  return 0;
}

struct zx_sa_NameID_s* zxid_decrypt_nameid(struct zxid_conf* cf, struct zx_sa_NameID_s* nid, struct zx_sa_EncryptedID_s* encid)
{
  struct zx_str* ss;
  struct zx_root_s* r;
  if (nid)
    return nid;
  if (encid) {
    ss = zxenc_privkey_dec(cf, encid->EncryptedData, encid->EncryptedKey);
    if (!ss) {
      ERR("Failed to decrypt NameID. Most probably certificate-private key mismatch or metadata problem. Could also be corrupt message. %d", 0);
      return 0;
    }
    zx_prepare_dec_ctx(cf->ctx, zx_ns_tab, ss->s, ss->s + ss->len);
    r = zx_DEC_root(cf->ctx, 0, 1);
    if (!r) {
      ERR("Failed to parse EncryptedID buf(%.*s)", ss->len, ss->s);
      return 0;
    }
    return r->NameID;
  }
  ERR("Neither NameID nor EncryptedID available %d", 0);
  return 0;
}

struct zx_str* zxid_decrypt_newnym(struct zxid_conf* cf, struct zx_str* newnym, struct zx_sp_NewEncryptedID_s* encid)
{
  struct zx_str* ss;
  struct zx_root_s* r;
  if (newnym)
    return newnym;
  if (encid) {
    ss = zxenc_privkey_dec(cf, encid->EncryptedData, encid->EncryptedKey);
    zx_prepare_dec_ctx(cf->ctx, zx_ns_tab, ss->s, ss->s + ss->len);
    r = zx_DEC_root(cf->ctx, 0, 1);
    if (!r) {
      ERR("Failed to parse NewEncryptedID buf(%.*s)", ss->len, ss->s);
      return 0;
    }
    return r->NewID->content;
  }
  ERR("Neither NewNameID nor NewEncryptedID available %d", 0);
  return 0;
}

/* EOF  --  zxidlib.c */
