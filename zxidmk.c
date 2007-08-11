/* zxidmk.c  -  Handwritten nitty-gritty functions for constructing various elems
 * Copyright (c) 2006 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidmk.c,v 1.4 2007/02/23 05:00:29 sampo Exp $
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

#define BOOL_STR_TEST(x) ((x) && (x) != '0')

/* Interpret ZXID standard form fields to construct a XML structure for AuthnRequest */

/* Called by:  zxid_lecp_check, zxid_start_sso_url */
struct zx_sp_AuthnRequest_s* zxid_mk_authn_req(struct zxid_conf* cf, struct zxid_cgi* cgi)
{
  char index[2] = "1";
  struct zx_sp_AuthnRequest_s* ar = zx_NEW_sp_AuthnRequest(cf->ctx);
  ar->Issuer = zxid_my_issuer(cf);
  ar->ID = zxid_mk_id(cf, "N", ZXID_ID_BITS);
  ar->Version = zx_ref_str(cf->ctx, SAML2_VERSION);
  ar->IssueInstant = zxid_date_time(cf, time(0));
  if (cf->nice_name && cf->nice_name[0])  ar->ProviderName = zx_ref_str(cf->ctx, cf->nice_name);
  if (BOOL_STR_TEST(cgi->force_authn))    ar->ForceAuthn = zx_ref_str(cf->ctx, ZXID_TRUE);
  if (BOOL_STR_TEST(cgi->ispassive))      ar->IsPassive = zx_ref_str(cf->ctx, ZXID_TRUE);
  if (cgi->consent && cgi->consent[0])    ar->Consent = zx_ref_str(cf->ctx, cgi->consent);
  D("nid_fmt(%s) allow_create=%d", cgi->nid_fmt, cgi->allow_create);
  if (cgi->nid_fmt && cgi->nid_fmt[0]) {
    ar->NameIDPolicy = zx_NEW_sp_NameIDPolicy(cf->ctx);
    ar->NameIDPolicy->Format = zx_ref_str(cf->ctx, zxid_saml2_map_nid_fmt(cgi->nid_fmt));
    ar->NameIDPolicy->AllowCreate
      = zx_ref_str(cf->ctx, BOOL_STR_TEST(cgi->allow_create)?ZXID_TRUE:ZXID_FALSE);
  }
  if (cgi->authn_ctx && cgi->authn_ctx[0]) {
    ar->RequestedAuthnContext = zx_NEW_sp_RequestedAuthnContext(cf->ctx);
    ar->RequestedAuthnContext->AuthnContextClassRef
      = zx_ref_simple_elem(cf->ctx, zxid_saml2_map_authn_ctx(cgi->authn_ctx));
    if (cgi->matching_rule && cgi->matching_rule[0])
      ar->RequestedAuthnContext->Comparison = zx_ref_str(cf->ctx, cgi->matching_rule);
  }
  if (cgi->pr_ix)
    index[0] = cgi->pr_ix;
  ar->AssertionConsumerServiceIndex = zx_dup_str(cf->ctx, index);
  return ar;
}

/* Called by:  zxid_sp_deref_art */
struct zx_sp_ArtifactResolve_s* zxid_mk_art_deref(struct zxid_conf* cf, struct zxid_entity* idp_meta, char* artifact)
{
  struct zx_sp_ArtifactResolve_s* ar = zx_NEW_sp_ArtifactResolve(cf->ctx);
  ar->Issuer = zxid_my_issuer(cf);
  ar->ID = zxid_mk_id(cf, "R", ZXID_ID_BITS);
  ar->Version = zx_ref_str(cf->ctx, SAML2_VERSION);
  ar->IssueInstant = zxid_date_time(cf, time(0));
  ar->Artifact = zx_ref_simple_elem(cf->ctx, artifact);
  return ar;
}

/* Called by:  zxid_OK */
struct zx_sp_Status_s* zxid_mk_Status(struct zxid_conf* cf, char* sc1, char* sc2, char* msg)
{
  struct zx_sp_Status_s* st = zx_NEW_sp_Status(cf->ctx);
  if (msg)
    st->StatusMessage = zx_ref_simple_elem(cf->ctx, msg);
  st->StatusCode = zx_NEW_sp_StatusCode(cf->ctx);
  st->StatusCode->Value = zx_ref_str(cf->ctx, sc1);
  if (sc2) {
    st->StatusCode->StatusCode = zx_NEW_sp_StatusCode(cf->ctx);
    st->StatusCode->StatusCode->Value = zx_ref_str(cf->ctx, sc2);
  }
  return st;
}

/* Called by:  zxid_sp_dispatch x2, zxid_sp_dispatch_location x2, zxid_sp_soap_dispatch x2 */
struct zx_sp_Status_s* zxid_OK(struct zxid_conf* cf)
{
  return zxid_mk_Status(cf, SAML2_SC_SUCCESS, 0, 0);
}

/* Called by:  zxid_sp_slo_location, zxid_sp_slo_redir, zxid_sp_slo_soap */
struct zx_sp_LogoutRequest_s* zxid_mk_logout(struct zxid_conf* cf, struct zx_sa_NameID_s* nid, struct zx_str* ses_ix)
{
  struct zx_sp_LogoutRequest_s* r = zx_NEW_sp_LogoutRequest(cf->ctx);
  r->Issuer = zxid_my_issuer(cf);
  r->ID = zxid_mk_id(cf, "L", ZXID_ID_BITS);
  r->Version = zx_ref_str(cf->ctx, SAML2_VERSION);
  r->IssueInstant = zxid_date_time(cf, time(0));
  r->NameID = nid;
  if (ses_ix)
    r->SessionIndex = zx_new_simple_elem(cf->ctx, ses_ix);
  return r;
}

/* Called by:  zxid_sp_dispatch, zxid_sp_dispatch_location, zxid_sp_soap_dispatch */
struct zx_sp_LogoutResponse_s* zxid_mk_logout_resp(struct zxid_conf* cf, struct zx_sp_Status_s* st, struct zx_str* req_id)
{
  struct zx_sp_LogoutResponse_s* r = zx_NEW_sp_LogoutResponse(cf->ctx);
  r->Issuer = zxid_my_issuer(cf);
  r->ID = zxid_mk_id(cf, "r", ZXID_ID_BITS);
  r->Version = zx_ref_str(cf->ctx, SAML2_VERSION);
  r->IssueInstant = zxid_date_time(cf, time(0));
  if (req_id)
    r->InResponseTo = req_id;
  r->Status = st;
  return r;
}

/* Called by:  zxid_sp_nireg_location, zxid_sp_nireg_redir, zxid_sp_nireg_soap */
struct zx_sp_ManageNameIDRequest_s* zxid_mk_nireg(struct zxid_conf* cf, struct zx_sa_NameID_s* nid, struct zx_str* new_nym)
{
  struct zx_sp_ManageNameIDRequest_s* r = zx_NEW_sp_ManageNameIDRequest(cf->ctx);
  r->Issuer = zxid_my_issuer(cf);
  r->ID = zxid_mk_id(cf, "R", ZXID_ID_BITS);
  r->Version = zx_ref_str(cf->ctx, SAML2_VERSION);
  r->IssueInstant = zxid_date_time(cf, time(0));
  r->NameID = nid;
  if (new_nym && new_nym->len)
    r->NewID = zx_new_simple_elem(cf->ctx, new_nym);
  else
    r->Terminate = zx_new_simple_elem(cf->ctx, 0);
  return r;
}

/* Called by:  zxid_sp_dispatch, zxid_sp_dispatch_location, zxid_sp_soap_dispatch */
struct zx_sp_ManageNameIDResponse_s* zxid_mk_nireg_resp(struct zxid_conf* cf, struct zx_sp_Status_s* st, struct zx_str* req_id)
{
  struct zx_sp_ManageNameIDResponse_s* r = zx_NEW_sp_ManageNameIDResponse(cf->ctx);
  r->Issuer = zxid_my_issuer(cf);
  r->ID = zxid_mk_id(cf, "r", ZXID_ID_BITS);
  r->Version = zx_ref_str(cf->ctx, SAML2_VERSION);
  r->IssueInstant = zxid_date_time(cf, time(0));
  if (req_id)
    r->InResponseTo = req_id;
  r->Status = st;
  return r;
}

/* EOF  --  zxidmk.c */
