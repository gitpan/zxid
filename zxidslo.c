/* zxidslo.c  -  Handwritten functions for implementing Single LogOut logic for SP
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing. See file COPYING.
 * $Id: zxidslo.c,v 1.3 2006/09/05 05:09:37 sampo Exp $
 *
 * 12.8.2006, created --Sampo
 */

#include "errmac.h"
#include "zxid.h"
#include "zxidconf.h"
#include "saml2.h"
#include "c/saml2-const.h"
#include "c/saml2-ns.h"
#include "c/saml2-data.h"
#include "c/saml2md-const.h"
#include "c/saml2md-ns.h"
#include "c/saml2md-data.h"

/* ============== Single Logout ============== */

int zxid_sp_slo_soap(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses)
{
  struct zx_root_s* r;
struct zx_se_Body_s* body = zx_NEW_se_Body(cf->ctx);
  body->LogoutRequest = zxid_mk_logout(cf, ses->a7n->Subject->NameID,
				       ses->a7n->AuthnStatement->SessionIndex);
  r = zxid_idp_soap(cf, cgi, ses, ZXID_SLO_SVC, body);
  if (!zxid_saml_ok(cf, cgi, r->Envelope->Body->LogoutResponse->Status, "LogoutResp"))
    return 0;
  return 1;
}

int zxid_sp_slo_redir(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses)
{
  struct zx_sp_LogoutRequest_s* r;
  struct zx_str_s* rs;
  struct zx_str_s* rse;
  struct zx_str_s* loc = zxid_idp_loc(cf, cgi, ses, ZXID_SLO_SVC, SAML2_REDIR);
  r = zxid_mk_logout(cf, ses->a7n->Subject->NameID,
		     ses->a7n->AuthnStatement->SessionIndex);
  rs = zx_EASY_ENC_SO_sp_LogoutRequest(cf->ctx, r);
  D("SLO(%.*s)", rs->len, rs->s);
  return zxid_saml2_redir(cf, loc, rs);
}

/* ============== NID Mgmt / Defederation ============== */

int zxid_sp_nireg_soap(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, struct zx_str_s* new_nym)
{
  struct zx_root_s* r;
  struct zx_se_Body_s* body = zx_NEW_se_Body(cf->ctx);
  body->ManageNameIDRequest = zxid_mk_nireg(cf, ses->a7n->Subject->NameID, new_nym);
  r = zxid_idp_soap(cf, cgi, ses, ZXID_NIREG_SVC, body);
  if (!zxid_saml_ok(cf, cgi, r->Envelope->Body->ManageNameIDResponse->Status, "NIRegResp"))
    return 0;
  /* *** Take actual steps to terminate the federation or change the name IDs */
  return 1;
}

int zxid_sp_nireg_redir(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, struct zx_str_s* new_nym)
{
  struct zx_sp_ManageNameIDRequest_s* r;
  struct zx_str_s* rs;
  struct zx_str_s* loc = zxid_idp_loc(cf, cgi, ses, ZXID_NIREG_SVC, SAML2_REDIR);
  r = zxid_mk_nireg(cf, ses->a7n->Subject->NameID, new_nym);
  rs = zx_EASY_ENC_SO_sp_ManageNameIDRequest(cf->ctx, r);
  D("NIReq(%.*s)", rs->len, rs->s);
  return zxid_saml2_redir(cf, loc, rs);
}

/* ============== Dispatch incoming requests and responses ============== */

int zxid_sp_dispatch(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, char* msg)
{
  struct zx_str_s* loc;
  struct zx_str_s* ss;
  struct zx_root_s* r;
  int len;
  char* p;
  if (!msg) {
    ERR("Empty msg?! %d", 0);
    return 0;
  }
  len = strlen(msg);
  p = unbase64_raw(msg, msg + len, msg, zx_std_index_64);
  *p = 0;
  
  if (*msg == '<' && p[-1] == '>') {  /* POST profile does not compress the payload */
    len = p - msg;
    p = msg;
  } else
    p = zx_zlib_raw_inflate(cf->ctx, p-msg, msg, &len);  /* Redir uses compressed payload. */

  cf->ctx->ns_tab = zx_ns_tab;
  cf->ctx->base = cf->ctx->p = p;
  cf->ctx->lim = p + len;
  r = zx_DEC_root(cf->ctx);
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

/* SOAP dispatch can also handle requests and responses received via artifact
 * resolution. However only some combinations make sense. */

int zxid_sp_soap_dispatch(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, struct zx_root_s* r)
{
  struct zx_se_Body_s* body;
  if (r->Envelope->Body->ArtifactResponse) {
    if (!zxid_saml_ok(cf, cgi, r->Envelope->Body->ArtifactResponse->Status, "ArtResp"))
      return 0;
    return zxid_sp_sso_finalize(cf, cgi, ses, r->Envelope->Body->ArtifactResponse->Response->Assertion);
  }
  
  if (r->Envelope->Body->LogoutRequest) {
    /* *** Which session. Should really look at supplied NameID and SessionIndex
     * and comb through all of session cache. Ouch. */
    zxid_del_ses(cf, ses);
    body = zx_NEW_se_Body(cf->ctx);
    body->LogoutResponse = zxid_mk_logout_resp(cf, zxid_OK(cf), r->Envelope->Body->LogoutRequest->ID);
    return zxid_soap_cgi_resp_body(cf, body);
  }

  if (r->Envelope->Body->ManageNameIDRequest) {
    body = zx_NEW_se_Body(cf->ctx);
    body->ManageNameIDResponse = zxid_mk_nireg_resp(cf, zxid_OK(cf), r->Envelope->Body->ManageNameIDRequest->ID);
    return zxid_soap_cgi_resp_body(cf, body);
  }
  
  ERR("Unknown soap request %d", 0);
  return 0;
}

int zxid_sp_soap_parse(struct zxid_conf* cf, int len, char* buf)
{
  struct zx_root_s* r;
  cf->ctx->ns_tab = zx_ns_tab;
  cf->ctx->base = cf->ctx->p = buf;
  cf->ctx->lim = buf + len;
  r = zx_DEC_root(cf->ctx);
  if (!r || !r->Envelope || !r->Envelope->Body) {
    ERR("Failed to parse SOAP request buf(%.*s)", len, buf);
    return 0;
  }
  return zxid_sp_soap_dispatch(cf, 0, 0, r);
}

/* EOF  --  zxidslo.c */
