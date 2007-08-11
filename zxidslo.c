/* zxidslo.c  -  Handwritten functions for implementing Single LogOut logic for SP
 * Copyright (c) 2006 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidslo.c,v 1.15 2007/03/04 08:21:32 sampo Exp $
 *
 * 12.8.2006, created --Sampo
 */

#include "errmac.h"
#include "zxid.h"
#include "zxidconf.h"
#include "saml2.h"
#include "c/zx-const.h"
#include "c/zx-ns.h"
#include "c/zx-data.h"

/* ============== Single Logout ============== */

/* Called by:  zxid_mgmt, zxid_simple_cf */
int zxid_sp_slo_soap(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses)
{
  zxid_get_ses_sso_a7n(cf, ses);
  if (ses->a7n) {
    struct zx_root_s* r;
    struct zx_e_Body_s* body = zx_NEW_e_Body(cf->ctx);
    body->LogoutRequest = zxid_mk_logout(cf, ses->a7n->Subject->NameID,
					 ses->a7n->AuthnStatement->SessionIndex);
    r = zxid_idp_soap(cf, cgi, ses, ZXID_SLO_SVC, body);
    if (!zxid_saml_ok(cf, cgi, r->Envelope->Body->LogoutResponse->Status, "LogoutResp"))
      return 0;
    return 1;
  }
  if (ses->a7n11) {
    ERR("Not implemented, SAML 1.1 assetion %d", 0);
  }
  if (ses->a7n12) {
    ERR("Not implemented, ID-FF 1.2 type SAML 1.1 assetion %d", 0);
  }
  ERR("Session sid(%s) lacks SSO assertion.", ses->sid);
  return 0;
}

/* Called by:  zxid_mgmt, zxid_simple_cf */
int zxid_sp_slo_redir(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses)
{
  zxid_get_ses_sso_a7n(cf, ses);
  if (ses->a7n) {
    struct zx_sp_LogoutRequest_s* r;
    struct zx_str* rs;
    struct zx_str* rse;
    struct zx_str* loc = zxid_idp_loc(cf, cgi, ses, ZXID_SLO_SVC, SAML2_REDIR);
    if (!loc)
      return 0;
    r = zxid_mk_logout(cf, ses->a7n->Subject->NameID,
		       ses->a7n->AuthnStatement->SessionIndex);
    rs = zx_EASY_ENC_SO_sp_LogoutRequest(cf->ctx, r);
    D("SLO(%.*s)", rs->len, rs->s);
    return zxid_saml2_redir(cf, loc, rs);
  }
  if (ses->a7n11) {
    ERR("Not implemented, SAML 1.1 assetion %d", 0);
  }
  if (ses->a7n12) {
    ERR("Not implemented, ID-FF 1.2 type SAML 1.1 assetion %d", 0);
  }
  ERR("Session sid(%s) lacks SSO assertion.", ses->sid);
  return 0;
}

/* Called by:  zxid_simple_cf */
struct zx_str* zxid_sp_slo_location(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses)
{
  zxid_get_ses_sso_a7n(cf, ses);
  if (ses->a7n) {
    struct zx_sp_LogoutRequest_s* r;
    struct zx_str* rs;
    struct zx_str* rse;
    struct zx_str* loc = zxid_idp_loc(cf, cgi, ses, ZXID_SLO_SVC, SAML2_REDIR);
    if (!loc)
      return 0;
    r = zxid_mk_logout(cf, ses->a7n->Subject->NameID,
		       ses->a7n->AuthnStatement->SessionIndex);
    rs = zx_EASY_ENC_SO_sp_LogoutRequest(cf->ctx, r);
    D("SLO(%.*s)", rs->len, rs->s);
    return zxid_saml2_location(cf, loc, rs);
  }
  if (ses->a7n11) {
    ERR("Not implemented, SAML 1.1 assetion %d", 0);
  }
  if (ses->a7n12) {
    ERR("Not implemented, ID-FF 1.2 type SAML 1.1 assetion %d", 0);
  }
  ERR("Session sid(%s) lacks SSO assertion.", ses->sid);
  return 0;
}

/* ============== NID Mgmt / Defederation ============== */

/* Called by:  zxid_mgmt, zxid_simple_cf */
int zxid_sp_nireg_soap(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, struct zx_str* new_nym)
{
  zxid_get_ses_sso_a7n(cf, ses);
  if (ses->a7n) {
    struct zx_root_s* r;
    struct zx_e_Body_s* body = zx_NEW_e_Body(cf->ctx);
    body->ManageNameIDRequest = zxid_mk_nireg(cf, ses->a7n->Subject->NameID, new_nym);
    r = zxid_idp_soap(cf, cgi, ses, ZXID_NIREG_SVC, body);
    if (!zxid_saml_ok(cf, cgi, r->Envelope->Body->ManageNameIDResponse->Status, "NIRegResp"))
      return 0;
    /* *** Take actual steps to terminate the federation or change the name IDs */
    return 1;
  }
  if (ses->a7n11) {
    ERR("Not implemented, SAML 1.1 assetion %d", 0);
  }
  if (ses->a7n12) {
    ERR("Not implemented, ID-FF 1.2 type SAML 1.1 assetion %d", 0);
  }
  ERR("Session sid(%s) lacks SSO assertion.", ses->sid);
  return 0;
}

/* Called by:  zxid_mgmt, zxid_simple_cf */
int zxid_sp_nireg_redir(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, struct zx_str* new_nym)
{
  zxid_get_ses_sso_a7n(cf, ses);
  if (ses->a7n) {
    struct zx_sp_ManageNameIDRequest_s* r;
    struct zx_str* rs;
    struct zx_str* loc = zxid_idp_loc(cf, cgi, ses, ZXID_NIREG_SVC, SAML2_REDIR);
    if (!loc)
      return 0;
    r = zxid_mk_nireg(cf, ses->a7n->Subject->NameID, new_nym);
    rs = zx_EASY_ENC_SO_sp_ManageNameIDRequest(cf->ctx, r);
    D("NIReq(%.*s)", rs->len, rs->s);
    return zxid_saml2_redir(cf, loc, rs);
  }
  if (ses->a7n11) {
    ERR("Not implemented, SAML 1.1 assetion %d", 0);
  }
  if (ses->a7n12) {
    ERR("Not implemented, ID-FF 1.2 type SAML 1.1 assetion %d", 0);
  }
  ERR("Session sid(%s) lacks SSO assertion.", ses->sid);
  return 0;
}

/* Return the HTTP 302 redirect LOCATION header + CRLF2 */

/* Called by:  zxid_simple_cf */
struct zx_str* zxid_sp_nireg_location(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, struct zx_str* new_nym)
{
  zxid_get_ses_sso_a7n(cf, ses);
  if (ses->a7n) {
    struct zx_sp_ManageNameIDRequest_s* r;
    struct zx_str* rs;
    struct zx_str* loc = zxid_idp_loc(cf, cgi, ses, ZXID_NIREG_SVC, SAML2_REDIR);
    if (!loc)
      return 0;
    r = zxid_mk_nireg(cf, ses->a7n->Subject->NameID, new_nym);
    rs = zx_EASY_ENC_SO_sp_ManageNameIDRequest(cf->ctx, r);
    D("NIReq(%.*s)", rs->len, rs->s);
    return zxid_saml2_location(cf, loc, rs);
  }
  if (ses->a7n11) {
    ERR("Not implemented, SAML 1.1 assetion %d", 0);
  }
  if (ses->a7n12) {
    ERR("Not implemented, ID-FF 1.2 type SAML 1.1 assetion %d", 0);
  }
  ERR("Session sid(%s) lacks SSO assertion.", ses->sid);
  return 0;
}

/* ============== Dispatch incoming requests and responses ============== */

/* CGI version of dispatch. Just blurt the redirections to stdout. */

/* Called by:  main x2, zxid_mgmt x2, zxid_simple_cf x4 */
int zxid_sp_dispatch(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, char* msg)
{
  struct zx_str* loc;
  struct zx_str* ss;
  struct zx_root_s* r;
  int len;
  char* p;
  if (!msg) {
    ERR("Empty msg?! %d", 0);
    return 0;
  }
  DD("msg(%s)", msg);
  len = strlen(msg);
  p = unbase64_raw(msg, msg + len, msg, zx_std_index_64);
  *p = 0;
  
  if (*msg == '<' && p[-1] == '>') {  /* POST profile does not compress the payload */
    len = p - msg;
    p = msg;
  } else
    p = zx_zlib_raw_inflate(cf->ctx, p-msg, msg, &len);  /* Redir uses compressed payload. */

  zx_prepare_dec_ctx(cf->ctx, zx_ns_tab, p, p + len);
  r = zx_DEC_root(cf->ctx, 0, 1);
  if (!r) {
    ERR("Failed to parse redir buf(%.*s)", len, p);
    return 0;
  }
  
  if (r->Response) {
    if (!zxid_saml_ok(cf, cgi, r->Response->Status, "SAMLresp"))
      return 0;
    return zxid_sp_sso_finalize(cf, cgi, ses, r->Response->Assertion);
  }
  
  if (r->LogoutRequest) {
    struct zx_sp_LogoutResponse_s* res;
    /* *** Which session. Should really look at supplied NameID and SessionIndex
     * and comb through all of session cache. Ouch. */
    zxid_del_ses(cf, ses);
    res = zxid_mk_logout_resp(cf, zxid_OK(cf), r->LogoutRequest->ID);
    ss = zx_EASY_ENC_SO_sp_LogoutResponse(cf->ctx, res);
    loc = zxid_idp_loc_raw(cf, cgi, r->LogoutRequest->Issuer, ZXID_SLO_SVC, SAML2_REDIR, 0);
    return zxid_saml2_resp_redir(cf, loc, ss);
  }
  
  if (r->LogoutResponse) {
    if (!zxid_saml_ok(cf, cgi, r->LogoutResponse->Status, "SLO resp"))
      return 0;
    cgi->msg = "Logout Response OK. Logged out.";
    zxid_del_ses(cf, ses);
    return ZXID_OK;  /* Prevent mgmt screen from displaying, show login screen. */
  }

  if (r->ManageNameIDRequest) {
    struct zx_sp_ManageNameIDResponse_s* res;
    res = zxid_mk_nireg_resp(cf, zxid_OK(cf), r->ManageNameIDRequest->ID);
    ss = zx_EASY_ENC_SO_sp_ManageNameIDResponse(cf->ctx, res);
    loc = zxid_idp_loc_raw(cf, cgi, r->ManageNameIDRequest->Issuer, ZXID_NIREG_SVC, SAML2_REDIR,0);
    return zxid_saml2_resp_redir(cf, loc, ss);
  }
  
  if (r->ManageNameIDResponse) {
    if (!zxid_saml_ok(cf, cgi, r->ManageNameIDResponse->Status, "NIReg resp")) {
      ERR("Response indicates failure. %d", 0);
      return 0;
    }
    cgi->msg = "Manage NameID Response OK.";
    return 0; /* Defederation does not have to mean SLO, show mgmt screen. */
  }
  
  ERR("Unknown request or response buf(%.*s)",len, p);
  return 0;
}

/* Non i/o version of dispatch. Do not output anything directly to stdout: instead
 * return a string (such as Location: header) and let the caller output it. */

static struct zx_str K_res = { {0,0,0,0,0}, 1, "K" };
static struct zx_str M_res = { {0,0,0,0,0}, 1, "M" };
static struct zx_str err_res = { {0,0,0,0,0}, 5, "* ERR" };

/* Called by:  zxid_simple_cf x4 */
struct zx_str* zxid_sp_dispatch_location(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, char* msg)
{
  struct zx_str* loc;
  struct zx_str* ss;
  struct zx_root_s* r;
  int ret, len;
  char* p;
  if (!msg) {
    ERR("Empty msg?! %d", 0);
    return 0;
  }
  len = strlen(msg);
  p = unbase64_raw(msg, msg + len, msg, zx_std_index_64);
  *p = 0;
  DD("Msg(%s)", msg);
  
  if (*msg == '<' && p[-1] == '>') {  /* POST profile does not compress the payload */
    len = p - msg;
    p = msg;
  } else
    p = zx_zlib_raw_inflate(cf->ctx, p-msg, msg, &len);  /* Redir uses compressed payload. */

  zx_prepare_dec_ctx(cf->ctx, zx_ns_tab, p, p + len);
  r = zx_DEC_root(cf->ctx, 0, 1);
  if (!r) {
    ERR("Failed to parse redir buf(%.*s)", len, p);
    return &err_res;
  }
  
  if (r->Response) {
    if (!zxid_saml_ok(cf, cgi, r->Response->Status, "SAMLresp"))
      return &err_res;
    ret = zxid_sp_sso_finalize(cf, cgi, ses, r->Response->Assertion);
    switch (ret) {
    case ZXID_OK: return &K_res;
    }
    return &M_res;
  }
  
  if (r->LogoutRequest) {
    struct zx_sp_LogoutResponse_s* res;
    /* *** Which session. Should really look at supplied NameID and SessionIndex
     * and comb through all of session cache. Ouch. */
    zxid_del_ses(cf, ses);
    res = zxid_mk_logout_resp(cf, zxid_OK(cf), r->LogoutRequest->ID);
    ss = zx_EASY_ENC_SO_sp_LogoutResponse(cf->ctx, res);
    loc = zxid_idp_loc_raw(cf, cgi, r->LogoutRequest->Issuer, ZXID_SLO_SVC, SAML2_REDIR, 0);
    return zxid_saml2_resp_location(cf, loc, ss);
  }
  
  if (r->LogoutResponse) {
    if (!zxid_saml_ok(cf, cgi, r->LogoutResponse->Status, "SLO resp"))
      return &err_res;
    cgi->msg = "Logout Response OK. Logged out.";
    zxid_del_ses(cf, ses);
    return &K_res;  /* Prevent mgmt screen from displaying, show login screen. */
  }

  if (r->ManageNameIDRequest) {
    struct zx_sp_ManageNameIDResponse_s* res;
    res = zxid_mk_nireg_resp(cf, zxid_OK(cf), r->ManageNameIDRequest->ID);
    ss = zx_EASY_ENC_SO_sp_ManageNameIDResponse(cf->ctx, res);
    loc = zxid_idp_loc_raw(cf, cgi, r->ManageNameIDRequest->Issuer, ZXID_NIREG_SVC, SAML2_REDIR,0);
    return zxid_saml2_resp_location(cf, loc, ss);
  }
  
  if (r->ManageNameIDResponse) {
    if (!zxid_saml_ok(cf, cgi, r->ManageNameIDResponse->Status, "NIReg resp")) {
      ERR("NIREG Response indicates failure. %d", 0);
      return &err_res;
    }
    cgi->msg = "Manage NameID Response OK.";
    return &M_res; /* Defederation does not have to mean SLO, show mgmt screen. */
  }
  
  ERR("Unknown request or response buf(%.*s)", len, p);
  return &err_res;
}

/* SOAP dispatch can also handle requests and responses received via artifact
 * resolution. However only some combinations make sense.
 * Return 0 for failure, otherwise some success code such as ZXID_SSO_OK */

/* Called by:  zxid_sp_deref_art, zxid_sp_soap_parse */
int zxid_sp_soap_dispatch(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, struct zx_root_s* r)
{
  struct zx_e_Body_s* body;
  if (!r) goto bad;
  if (!r->Envelope) goto bad;
  
  if (r->Envelope->Body->ArtifactResponse) {
    if (!zxid_saml_ok(cf, cgi, r->Envelope->Body->ArtifactResponse->Status, "ArtResp"))
      return 0;
    return zxid_sp_sso_finalize(cf, cgi, ses, r->Envelope->Body->ArtifactResponse->Response->Assertion);
  }

  if (r->Envelope->Body->Response) {    /* PAOS/ECP response */
    if (!zxid_saml_ok(cf, cgi, r->Envelope->Body->Response->Status, "PAOS Resp"))
      return 0;
    return zxid_sp_sso_finalize(cf, cgi, ses, r->Envelope->Body->Response->Assertion);
  }
  
  if (r->Envelope->Body->LogoutRequest) {
    /* *** Which session. Should really look at supplied NameID and SessionIndex
     * and comb through all of session cache. Ouch. */
    zxid_del_ses(cf, ses);
    body = zx_NEW_e_Body(cf->ctx);
    body->LogoutResponse = zxid_mk_logout_resp(cf, zxid_OK(cf), r->Envelope->Body->LogoutRequest->ID);
    return zxid_soap_cgi_resp_body(cf, body);
  }

  if (r->Envelope->Body->ManageNameIDRequest) {
    body = zx_NEW_e_Body(cf->ctx);
    body->ManageNameIDResponse = zxid_mk_nireg_resp(cf, zxid_OK(cf), r->Envelope->Body->ManageNameIDRequest->ID);
    return zxid_soap_cgi_resp_body(cf, body);
  }
  
 bad:
  ERR("Unknown soap request %p", r);
  return 0;
}

/* Return 0 for failure, otherwise some success code such as ZXID_SSO_OK */

/* Called by:  main x3, zxid_simple_cf */
int zxid_sp_soap_parse(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, int len, char* buf)
{
  struct zx_root_s* r;
  zx_prepare_dec_ctx(cf->ctx, zx_ns_tab, buf, buf + len);
  r = zx_DEC_root(cf->ctx, 0, 1);
  if (!r || !r->Envelope || !r->Envelope->Body) {
    ERR("Failed to parse SOAP request buf(%.*s)", len, buf);
    return 0;
  }
  return zxid_sp_soap_dispatch(cf, cgi, ses, r);
}

/* EOF  --  zxidslo.c */
