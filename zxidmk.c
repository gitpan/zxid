/* zxidmk.c  -  Handwritten nitty-gritty functions for constructing various elems
 * Copyright (c) 2006-2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidmk.c,v 1.13 2008-04-15 08:45:09 sampo Exp $
 *
 * 12.8.2006, created --Sampo
 * 8.10.2007, added signing ArtifactResolve --Sampo
 */

#include "errmac.h"
#include "zxid.h"
#include "zxidconf.h"
#include "saml2.h"
#include "c/zx-const.h"
#include "c/zx-ns.h"
#include "c/zx-data.h"

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
  D("nid_fmt(%s) allow_create=%c", cgi->nid_fmt, cgi->allow_create);
  if (cgi->nid_fmt && cgi->nid_fmt[0] || cgi->affil && cgi->affil[0]
      || BOOL_STR_TEST(cgi->allow_create)) {
    ar->NameIDPolicy = zx_NEW_sp_NameIDPolicy(cf->ctx);
    if (cgi->nid_fmt && cgi->nid_fmt[0])
      ar->NameIDPolicy->Format = zx_ref_str(cf->ctx, zxid_saml2_map_nid_fmt(cgi->nid_fmt));
    if (cgi->affil && cgi->affil[0])
      ar->NameIDPolicy->SPNameQualifier = zx_ref_str(cf->ctx, cgi->affil);
    if (BOOL_STR_TEST(cgi->allow_create))
      ar->NameIDPolicy->AllowCreate = zx_ref_str(cf->ctx, ZXID_TRUE);  /* default false */
  }
  if (cgi->authn_ctx && cgi->authn_ctx[0]) {
    ar->RequestedAuthnContext = zx_NEW_sp_RequestedAuthnContext(cf->ctx);
    ar->RequestedAuthnContext->AuthnContextClassRef
      = zx_ref_simple_elem(cf->ctx, zxid_saml2_map_authn_ctx(cgi->authn_ctx));
    if (cgi->matching_rule && cgi->matching_rule[0])
      ar->RequestedAuthnContext->Comparison = zx_ref_str(cf->ctx, cgi->matching_rule);
  }
  if (cgi->pr_ix && cgi->pr_ix != '0') {
    index[0] = cgi->pr_ix;
    ar->AssertionConsumerServiceIndex = zx_dup_str(cf->ctx, index);
  }
  if (cgi->get_complete && cgi->get_complete[0]
      || cgi->pxy_count && cgi->pxy_count[0]
      || cgi->idppxylist && cgi->idppxylist[0]) {
    ar->Scoping = zx_NEW_sp_Scoping(cf->ctx);
    if (cgi->pxy_count && cgi->pxy_count[0])
      ar->Scoping->ProxyCount = zx_ref_str(cf->ctx, cgi->pxy_count);
#if 0
    if (cgi->get_complete && cgi->get_complete[0] || cgi->idppxylist) {
      ar->Scoping->IDPList = zx_NEW_sp_IDPList(cf->ctx);
      /* *** Add IDPEntry and GetComplete */
    }
#endif
  }
  return ar;
}

/* Called by:  zxid_sp_deref_art */
struct zx_sp_ArtifactResolve_s* zxid_mk_art_deref(struct zxid_conf* cf, struct zxid_entity* idp_meta, char* artifact)
{
  struct zxsig_ref refs;
  struct zx_sp_ArtifactResolve_s* ar = zx_NEW_sp_ArtifactResolve(cf->ctx);
  ar->Issuer = zxid_my_issuer(cf);
  ar->ID = zxid_mk_id(cf, "R", ZXID_ID_BITS);
  ar->Version = zx_ref_str(cf->ctx, SAML2_VERSION);
  ar->IssueInstant = zxid_date_time(cf, time(0));
  ar->Artifact = zx_ref_simple_elem(cf->ctx, artifact);
  if (cf->sso_soap_sign) {
    refs.id = ar->ID;
    refs.canon = zx_EASY_ENC_SO_sp_ArtifactResolve(cf->ctx, ar);
    if (!cf->sign_cert) // Lazy load cert and private key
      cf->sign_cert = zxid_read_cert(cf, "sign-nopw-cert.pem");
    if (!cf->sign_pkey)
      cf->sign_pkey = zxid_read_private_key(cf, "sign-nopw-cert.pem");
    ar->Signature = zxsig_sign(cf->ctx, 1, &refs, cf->sign_cert, cf->sign_pkey);
    zx_str_free(cf->ctx, refs.canon);
  }
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
struct zx_sp_LogoutRequest_s* zxid_mk_logout(struct zxid_conf* cf, struct zx_sa_NameID_s* nid, struct zx_str* ses_ix, struct zxid_entity* idp_meta)
{
  struct zx_str* ss;
  struct zx_xenc_EncryptedKey_s* ek;
  struct zx_sp_LogoutRequest_s* r = zx_NEW_sp_LogoutRequest(cf->ctx);
  r->Issuer = zxid_my_issuer(cf);
  r->ID = zxid_mk_id(cf, "L", ZXID_ID_BITS);
  r->Version = zx_ref_str(cf->ctx, SAML2_VERSION);
  r->IssueInstant = zxid_date_time(cf, time(0));

  D("nameid_enc(%d) idp_meta(%p) enc_cert(%p)", cf->nameid_enc, idp_meta, idp_meta->enc_cert);
  if (cf->nameid_enc && idp_meta) {
    ss = zx_EASY_ENC_SO_sa_NameID(cf->ctx, nid);
    r->EncryptedID = zx_NEW_sa_EncryptedID(cf->ctx);
    r->EncryptedID->EncryptedData = zxenc_pubkey_enc(cf, ss, &ek, idp_meta->enc_cert, "38");
    r->EncryptedID->EncryptedKey = ek;
    zx_str_free(cf->ctx, ss);
  } else {
    r->NameID = nid;
  }
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

/* Change SPNameID (newnym supplied), or Terminate federation (newnym not supplied). */
/* Called by:  zxid_sp_mni_location, zxid_sp_mni_redir, zxid_sp_mni_soap */
struct zx_sp_ManageNameIDRequest_s* zxid_mk_mni(struct zxid_conf* cf, struct zx_sa_NameID_s* nid, struct zx_str* new_nym, struct zxid_entity* idp_meta)
{
  struct zx_str* ss;
  struct zx_xenc_EncryptedKey_s* ek;
  struct zx_sp_ManageNameIDRequest_s* r = zx_NEW_sp_ManageNameIDRequest(cf->ctx);
  r->Issuer = zxid_my_issuer(cf);
  r->ID = zxid_mk_id(cf, "R", ZXID_ID_BITS);
  r->Version = zx_ref_str(cf->ctx, SAML2_VERSION);
  r->IssueInstant = zxid_date_time(cf, time(0));
  if (cf->nameid_enc && idp_meta) {
    ss = zx_EASY_ENC_SO_sa_NameID(cf->ctx, nid);
    r->EncryptedID = zx_NEW_sa_EncryptedID(cf->ctx);
    r->EncryptedID->EncryptedData = zxenc_pubkey_enc(cf, ss, &ek, idp_meta->enc_cert, "38");
    r->EncryptedID->EncryptedKey = ek;
    zx_str_free(cf->ctx, ss);
    if (new_nym && new_nym->len) {
      struct zx_elem_s* newid = zx_new_simple_elem(cf->ctx, new_nym);
      ss = zx_EASY_ENC_SO_simple_elem(cf->ctx, newid, "sp:NewID", sizeof("sp:NewID")-1, zx_ns_tab+zx_xmlns_ix_sp);
      r->NewEncryptedID = zx_NEW_sp_NewEncryptedID(cf->ctx);
      r->NewEncryptedID->EncryptedData = zxenc_pubkey_enc(cf, ss, &ek, idp_meta->enc_cert, "39");
      r->NewEncryptedID->EncryptedKey = ek;
      zx_str_free(cf->ctx, ss);
      zx_FREE_simple_elem(cf->ctx, newid, 0);
    } else
      r->Terminate = zx_new_simple_elem(cf->ctx, 0);
  } else {
    r->NameID = nid;
    if (new_nym && new_nym->len)
      r->NewID = zx_new_simple_elem(cf->ctx, new_nym);
    else
      r->Terminate = zx_new_simple_elem(cf->ctx, 0);
  }
  return r;
}

/* Called by:  zxid_sp_dispatch, zxid_sp_dispatch_location, zxid_sp_soap_dispatch */
struct zx_sp_ManageNameIDResponse_s* zxid_mk_mni_resp(struct zxid_conf* cf, struct zx_sp_Status_s* st, struct zx_str* req_id)
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
