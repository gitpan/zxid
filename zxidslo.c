/* zxidslo.c  -  Handwritten functions for implementing Single LogOut logic for SP
 * Copyright (c) 2006-2008 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidslo.c,v 1.30 2008-04-26 01:04:35 sampo Exp $
 *
 * 12.8.2006,  created --Sampo
 * 12.10.2007, tweaked for signing SLO and MNI --Sampo
 * 14.4.2008,  added SimpleSign --Sampo
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
    struct zxsig_ref refs;
    struct zx_root_s* r;
    struct zx_e_Body_s* body;
    struct zx_str* ses_ix;
    struct zxid_entity* idp_meta;
    
    ses_ix = ses->a7n->AuthnStatement?ses->a7n->AuthnStatement->SessionIndex:0;
    if (cf->log_level>0)
      zxlog(cf, 0, 0, 0, 0, 0, 0, ses->nameid?ses->nameid->gg.content:0, "N", "W", "SLOSOAP", ses->sid, "sesix(%.*s)", ses_ix?ses_ix->len:1, ses_ix?ses_ix->s:"?");
    
    idp_meta = zxid_get_ses_idp(cf, ses);
    if (!idp_meta)
      return 0;
    
    body = zx_NEW_e_Body(cf->ctx);
    body->LogoutRequest = zxid_mk_logout(cf, zxid_get_user_nameid(cf, ses->nameid), ses_ix, idp_meta);
    if (cf->sso_soap_sign) {
      refs.id = body->LogoutRequest->ID;
      refs.canon = zx_EASY_ENC_SO_sp_LogoutRequest(cf->ctx, body->LogoutRequest);
      if (!cf->sign_cert) // Lazy load cert and private key
	cf->sign_cert = zxid_read_cert(cf, "sign-nopw-cert.pem");
      if (!cf->sign_pkey)
	cf->sign_pkey = zxid_read_private_key(cf, "sign-nopw-cert.pem");
      body->LogoutRequest->Signature = zxsig_sign(cf->ctx, 1, &refs, cf->sign_cert, cf->sign_pkey);
      zx_str_free(cf->ctx, refs.canon);
    }
    r = zxid_idp_soap(cf, cgi, ses, idp_meta, ZXID_SLO_SVC, body);
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
    struct zx_str* loc;
    struct zxid_entity* idp_meta;
    struct zx_str* ses_ix;

    ses_ix = ses->a7n->AuthnStatement?ses->a7n->AuthnStatement->SessionIndex:0;
    if (cf->log_level>0)
      zxlog(cf, 0, 0, 0, 0, 0, 0, ses->nameid?ses->nameid->gg.content:0, "N", "W", "SLOREDIR", ses->sid, "sesix(%.*s)", ses_ix?ses_ix->len:1, ses_ix?ses_ix->s:"?");

    idp_meta = zxid_get_ses_idp(cf, ses);
    if (!idp_meta)
      return 0;

    loc = zxid_idp_loc(cf, cgi, ses, idp_meta, ZXID_SLO_SVC, SAML2_REDIR);
    if (!loc)
      return 0;
    r = zxid_mk_logout(cf, zxid_get_user_nameid(cf, ses->nameid), ses_ix, idp_meta);
    r->Destination = loc;
    rs = zx_EASY_ENC_SO_sp_LogoutRequest(cf->ctx, r);
    D("SLO(%.*s)", rs->len, rs->s);
    return zxid_saml2_redir(cf, loc, rs, 0);
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
    struct zx_str* loc;
    struct zxid_entity* idp_meta;
    struct zx_str* ses_ix;

    ses_ix = ses->a7n->AuthnStatement?ses->a7n->AuthnStatement->SessionIndex:0;
    if (cf->log_level>0)
      zxlog(cf, 0, 0, 0, 0, 0, 0, ses->nameid?ses->nameid->gg.content:0, "N", "W", "SLOREDIR", ses->sid, "sesix(%.*s) loc", ses_ix?ses_ix->len:1, ses_ix?ses_ix->s:"?");
    
    idp_meta = zxid_get_ses_idp(cf, ses);
    if (!idp_meta)
      return 0;

    loc = zxid_idp_loc(cf, cgi, ses, idp_meta, ZXID_SLO_SVC, SAML2_REDIR);
    if (!loc)
      return 0;
    r = zxid_mk_logout(cf, zxid_get_user_nameid(cf, ses->nameid), ses_ix, idp_meta);
    r->Destination = loc;
    rs = zx_EASY_ENC_SO_sp_LogoutRequest(cf->ctx, r);
    D("SLO(%.*s)", rs->len, rs->s);
    return zxid_saml2_location(cf, loc, rs, 0);
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

static int zxid_sp_dig_sso_a7n(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, struct zx_sp_Response_s* resp)
{
  struct zx_sa_Assertion_s* a7n;
  struct zx_sa_EncryptedAssertion_s* enca7n;
  struct zx_str* ss;
  struct zx_root_s* r;
  
  a7n = resp->Assertion;
  enca7n = resp->EncryptedAssertion;
  if (!a7n && enca7n) {
    ss = zxenc_privkey_dec(cf, enca7n->EncryptedData, enca7n->EncryptedKey);
    zx_prepare_dec_ctx(cf->ctx, zx_ns_tab, ss->s, ss->s + ss->len);
    r = zx_DEC_root(cf->ctx, 0, 1);
    if (!r) {
      ERR("Failed to parse EncryptedAssertion buf(%.*s)", ss->len, ss->s);
      zxlog(cf, 0, 0, 0, 0, 0, 0, ses->nameid?ses->nameid->gg.content:0, "N", "C", "BADXML", 0, "sid(%s) bad EncryptedAssertion", ses->sid);
      return 0;
    }
    a7n = r->Assertion;
  }
  if (a7n)
    return zxid_sp_sso_finalize(cf, cgi, ses, a7n);
  ERR("No Assertion found in SAML Response %d", 0);
  zxlog(cf, 0, 0, 0, 0, 0, 0, ses->nameid?ses->nameid->gg.content:0, "N", "C", "ERR", 0, "sid(%s) No assertion", ses->sid);
  return 0;
}

static int zxid_slo_do(struct zxid_conf* cf, struct zxid_ses* ses, struct zx_sp_LogoutRequest_s* req)
{
  req->NameID = zxid_decrypt_nameid(cf, req->NameID, req->EncryptedID);
  if (!req->NameID || !req->NameID->gg.content) {
    ERR("SLO failed: request does not have NameID. %p", req->NameID);
    return 0;
  }
  zxid_find_ses(cf, ses, req->SessionIndex?req->SessionIndex->content:0, req->NameID->gg.content);
  zxid_del_ses(cf, ses);
  return 1;
}

static struct zx_root_s* zxid_decode_redir_or_post(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, char* msg)
{
  struct zx_sa_Issuer_s* issuer = 0;
  struct zxid_entity* idp_meta;
  struct zx_str* ss;
  struct zx_root_s* r;
  int len;
  char* p;
  char* m2;
  char* p2;

  if (!msg) {
    ERR("Empty msg?! %d", 0);
    return 0;
  }
  len = strlen(msg);
  p = unbase64_raw(msg, msg + len, msg, zx_std_index_64);
  *p = 0;
  DD("Msg(%s) x=%x", msg, *msg);

  /* Skip whitespace in the beginning and end of the payload to help correct POST detection. */
  for (m2 = msg; m2 < p; ++m2)
    if (!ONE_OF_4(*m2, ' ', '\t', '\015', '\012'))
      break;
  for (p2 = p-1; m2 < p2; --p2)
    if (!ONE_OF_4(*p2, ' ', '\t', '\015', '\012'))
      break;
  DD("Msg_sans_ws(%.*s) start=%x end=%x", p2-m2+1, m2, *m2, *p2);
  
  if (cf->log_level > 1)
    zxlog(cf, 0, 0, 0, 0, 0, 0, ses->nameid?ses->nameid->gg.content:0, "N", "W", "SPDISP", 0, "sid(%s) len=%d", ses->sid, len);

  if (*m2 == '<' && *p2 == '>') {  /* POST profiles do not compress the payload */
    len = p2 - m2 + 1;
    p = m2;
  } else
    p = zx_zlib_raw_inflate(cf->ctx, p-msg, msg, &len);  /* Redir uses compressed payload. */
  
  zx_prepare_dec_ctx(cf->ctx, zx_ns_tab, p, p + len);
  r = zx_DEC_root(cf->ctx, 0, 1);
  if (!r) {
    ERR("Failed to parse redir buf(%.*s)", len, p);
    zxlog(cf, 0, 0, 0, 0, 0, 0, ses->nameid?ses->nameid->gg.content:0, "N", "C", "BADXML", 0, "sid(%s) bad redir", ses->sid);
    return 0;
  }
  
  if (cgi->op == 'P' && cgi->sig && *cgi->sig) {
    D("SimpleSign detect sigalg(%s)", cgi->sigalg);
#if 1
    ss = zx_strf(cf->ctx, "%s=%s&RelayState=%s&SigAlg=%s",
		 cgi->saml_resp && *cgi->saml_resp ? "SAMLResponse" : "SAMLRequest",
		 msg, STRNULLCHK(cgi->rs), cgi->sigalg);
#else
    cgi->rs = "Fake";
#if 0
    ss = zx_strf(cf->ctx, "%s=%s&RelayState=%s&SigAlg=%s",
		 cgi->saml_resp && *cgi->saml_resp ? "SAMLResponse" : "SAMLRequest",
		 msg, STRNULLCHK(cgi->rs), cgi->sigalg);
#else
    ss = zx_strf(cf->ctx, "%s=%.*s&RelayState=%s&SigAlg=%s",
		 cgi->saml_resp && *cgi->saml_resp ? "SAMLResponse" : "SAMLRequest",
		 len-22, p+22, STRNULLCHK(cgi->rs), cgi->sigalg);
#endif
#endif
    DD("Signed data(%.*s) len=%d sig(%s)", ss->len, ss->s, ss->len, cgi->sig);
    p2 = unbase64_raw(cgi->sig, cgi->sig + strlen(cgi->sig), cgi->sig, zx_std_index_64);
    *p2 = 0;
    DD("r=%p sig decoded len=%d", r, p2-cgi->sig);
    DD("r->Response=%p", r->Response);
    if (r->Response)
      issuer = r->Response->Issuer;
    if (issuer) {
      idp_meta = zxid_get_ent_ss(cf, issuer->gg.content);
      if (idp_meta) {
	if (!strcmp(cgi->sigalg, SIG_ALGO_RSA_SHA1)) {
	  ses->sigres = zxsig_verify_data_rsa_sha1(ss->len, ss->s, p2-cgi->sig, cgi->sig,
						   idp_meta->sign_cert, "SimpleSign");
	  zxid_sigres_map(ses->sigres, &cgi->sigval, &cgi->sigmsg);
	} else {
	  ERR("Unsupported or bad signature algorithm(%s).", cgi->sigalg);
	  cgi->sigval = "I";
	  cgi->sigmsg = "Unsupported or bad signature algorithm (in SimpleSign).";
	  ses->sigres = ZXSIG_NO_SIG;
	}
      } else {
	ERR("Unable to find metadata for Issuer(%.*s).", issuer->gg.content->len, issuer->gg.content->s);
	cgi->sigval = "I";
	cgi->sigmsg = "Issuer unknown (SimpleSign).";
	ses->sigres = ZXSIG_NO_SIG;
      }
    } else {
      ERR("SimpleSign missing issuer %d", 0);
      cgi->sigval = "I";
      cgi->sigmsg = "Issuer not found (SimpleSign).";
      ses->sigres = ZXSIG_NO_SIG;
    }
    zx_str_free(cf->ctx, ss);
  } else if (cgi->sig && *cgi->sig) {
    D("HTTP Redirect Sign detect *** TODO: implement redir sig validation %d", 0);
  }
  return r;
}

/* CGI version of dispatch. Just blurt the redirections to stdout. */

/* Called by:  main x2, zxid_mgmt x2, zxid_simple_cf x4 */
int zxid_sp_dispatch(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, char* msg)
{
  struct zx_sp_LogoutRequest_s* req;
  struct zxid_entity* idp_meta;
  struct zx_str* loc;
  struct zx_str* ss;
  struct zx_root_s* r;
  int len;
  char* p;

  r = zxid_decode_redir_or_post(cf, cgi, ses, msg);
  if (!r)
    return 0;

  if (r->Response) {
    if (!zxid_saml_ok(cf, cgi, r->Response->Status, "SAMLresp"))
      return 0;
    return zxid_sp_dig_sso_a7n(cf, cgi, ses, r->Response);
  }
  
  if (req = r->LogoutRequest) {
    struct zx_sp_LogoutResponse_s* res;
    if (!zxid_slo_do(cf, ses, req))
      return 0;
    
    idp_meta = zxid_get_ent_ss(cf, req->Issuer->gg.content);
    loc = zxid_idp_loc_raw(cf, cgi, idp_meta, ZXID_SLO_SVC, SAML2_REDIR, 0);
    if (!loc)
      return 0;  /* *** consider sending error page */
    res = zxid_mk_logout_resp(cf, zxid_OK(cf), req->ID);
    res->Destination = loc;
    ss = zx_EASY_ENC_SO_sp_LogoutResponse(cf->ctx, res);
    return zxid_saml2_resp_redir(cf, loc, ss, cgi->rs);
  }
  
  if (r->LogoutResponse) {
    if (!zxid_saml_ok(cf, cgi, r->LogoutResponse->Status, "SLO resp"))
      return 0;
    cgi->msg = "Logout Response OK. Logged out.";
    zxid_del_ses(cf, ses);
    return ZXID_OK;  /* Prevent mgmt screen from displaying, show login screen. */
  }

  if (r->ManageNameIDRequest) {
    idp_meta = zxid_get_ent_ss(cf, r->ManageNameIDRequest->Issuer->gg.content);
    loc = zxid_idp_loc_raw(cf, cgi, idp_meta, ZXID_MNI_SVC, SAML2_REDIR, 0);
    if (!loc)
      return 0;  /* *** consider sending error page */
    ss = zxid_mni_do_ss(cf, r->ManageNameIDRequest, loc);
    return zxid_saml2_resp_redir(cf, loc, ss, cgi->rs);
  }
  
  if (r->ManageNameIDResponse) {
    if (!zxid_saml_ok(cf, cgi, r->ManageNameIDResponse->Status, "MNI resp")) {
      ERR("Response indicates failure. %d", 0);
      return 0;
    }
    cgi->msg = "Manage NameID Response OK.";
    return 0; /* Defederation does not have to mean SLO, show mgmt screen. */
  }
  
  if (cf->log_level > 0)
    zxlog(cf, 0, 0, 0, 0, 0, 0, ses->nameid?ses->nameid->gg.content:0, "N", "C", "SPDISP", 0, "sid(%s) unknown req or resp", ses->sid);
  ERR("Unknown request or response buf(%.*s)",len, p);
  return 0;
}

/* Non i/o version of dispatch. Do not output anything directly to stdout: instead
 * return a string (such as Location: header) and let the caller output it. */

static struct zx_str O_res = { {0,0,0,0,0}, 1, "O" };
static struct zx_str K_res = { {0,0,0,0,0}, 1, "K" };
static struct zx_str M_res = { {0,0,0,0,0}, 1, "M" };
static struct zx_str err_res = { {0,0,0,0,0}, 5, "* ERR" };

/* Called by:  zxid_simple_cf x4 */
struct zx_str* zxid_sp_dispatch_location(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, char* msg)
{
  struct zx_sp_LogoutRequest_s* req;
  struct zxid_entity* idp_meta;
  struct zx_str* loc;
  struct zx_str* ss;
  struct zx_root_s* r;
  int ret, len;
  char* p;

  r = zxid_decode_redir_or_post(cf, cgi, ses, msg);
  if (!r)
    return &err_res;

  if (r->Response) {
    if (!zxid_saml_ok(cf, cgi, r->Response->Status, "SAMLresp"))
      return &err_res;
    ret = zxid_sp_dig_sso_a7n(cf, cgi, ses, r->Response);
    D("ret=%d", ret);
    switch (ret) {
    case ZXID_OK: return &K_res;
    case ZXID_SSO_OK: return &O_res;
    }
    return &M_res;
  }
  
  if (req = r->LogoutRequest) {
    struct zx_sp_LogoutResponse_s* res;
    if (!zxid_slo_do(cf, ses, req))
      return 0;
    
    idp_meta = zxid_get_ent_ss(cf, req->Issuer->gg.content);
    loc = zxid_idp_loc_raw(cf, cgi, idp_meta, ZXID_SLO_SVC, SAML2_REDIR, 0);
    if (!loc)
      return 0;  /* *** consider sending error page */
    res = zxid_mk_logout_resp(cf, zxid_OK(cf), req->ID);
    res->Destination = loc;
    ss = zx_EASY_ENC_SO_sp_LogoutResponse(cf->ctx, res);
    return zxid_saml2_resp_location(cf, loc, ss, cgi->rs);
  }
  
  if (r->LogoutResponse) {
    if (!zxid_saml_ok(cf, cgi, r->LogoutResponse->Status, "SLO resp"))
      return &err_res;
    cgi->msg = "Logout Response OK. Logged out.";
    zxid_del_ses(cf, ses);
    return &K_res;  /* Prevent mgmt screen from displaying, show login screen. */
  }

  if (r->ManageNameIDRequest) {
    idp_meta = zxid_get_ent_ss(cf, r->ManageNameIDRequest->Issuer->gg.content);
    loc = zxid_idp_loc_raw(cf, cgi, idp_meta, ZXID_MNI_SVC, SAML2_REDIR, 0);
    if (!loc)
      return 0;  /* *** consider sending error page */
    ss = zxid_mni_do_ss(cf, r->ManageNameIDRequest, loc);
    return zxid_saml2_resp_location(cf, loc, ss, cgi->rs);
  }
  
  if (r->ManageNameIDResponse) {
    if (!zxid_saml_ok(cf, cgi, r->ManageNameIDResponse->Status, "MIN resp")) {
      ERR("MNI Response indicates failure. %d", 0);
      return &err_res;
    }
    cgi->msg = "Manage NameID Response OK.";
    return &M_res; /* Defederation does not have to mean SLO, show mgmt screen. */
  }
  
  if (cf->log_level > 0)
    zxlog(cf, 0, 0, 0, 0, 0, 0, ses->nameid?ses->nameid->gg.content:0, "N", "C", "SPDISP", 0, "sid(%s) unknown req or resp (loc)", ses->sid);
  ERR("Unknown request or response buf(%.*s)", len, p);
  return &err_res;
}

/* SOAP dispatch can also handle requests and responses received via artifact
 * resolution. However only some combinations make sense.
 * Return 0 for failure, otherwise some success code such as ZXID_SSO_OK */

/* Called by:  zxid_sp_deref_art, zxid_sp_soap_parse */
int zxid_sp_soap_dispatch(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, struct zx_root_s* r)
{
  struct zxsig_ref refs;
  struct zx_e_Body_s* body;
  struct zx_sp_LogoutRequest_s* req;

  if (!r) goto bad;
  if (!r->Envelope) goto bad;
  
  if (cf->log_level > 1)
    zxlog(cf, 0, 0, 0, 0, 0, 0, ses->nameid?ses->nameid->gg.content:0, "N", "W", "SPDISP", 0, "sid(%s) soap", ses->sid);

  if (r->Envelope->Body->ArtifactResponse) {
    if (!zxid_saml_ok(cf, cgi, r->Envelope->Body->ArtifactResponse->Status, "ArtResp"))
      return 0;
    return zxid_sp_dig_sso_a7n(cf, cgi, ses, r->Envelope->Body->ArtifactResponse->Response);
  }

  if (r->Envelope->Body->Response) {    /* PAOS/ECP response */
    if (!zxid_saml_ok(cf, cgi, r->Envelope->Body->Response->Status, "PAOS Resp"))
      return 0;
    return zxid_sp_dig_sso_a7n(cf, cgi, ses, r->Envelope->Body->Response);
  }
  
  if (req = r->Envelope->Body->LogoutRequest) {
    if (!zxid_slo_do(cf, ses, req))
      return 0;

    body = zx_NEW_e_Body(cf->ctx);
    body->LogoutResponse = zxid_mk_logout_resp(cf, zxid_OK(cf), req->ID);
    if (cf->sso_soap_resp_sign) {
      refs.id = body->LogoutResponse->ID;
      refs.canon = zx_EASY_ENC_SO_sp_LogoutResponse(cf->ctx, body->LogoutResponse);
      if (!cf->sign_cert) // Lazy load cert and private key
	cf->sign_cert = zxid_read_cert(cf, "sign-nopw-cert.pem");
      if (!cf->sign_pkey)
	cf->sign_pkey = zxid_read_private_key(cf, "sign-nopw-cert.pem");
      body->LogoutResponse->Signature = zxsig_sign(cf->ctx, 1, &refs, cf->sign_cert, cf->sign_pkey);
      zx_str_free(cf->ctx, refs.canon);
    }
    return zxid_soap_cgi_resp_body(cf, body);
  }

  if (r->Envelope->Body->ManageNameIDRequest) {
    struct zx_sp_ManageNameIDResponse_s* res = zxid_mni_do(cf, r->Envelope->Body->ManageNameIDRequest);
    body = zx_NEW_e_Body(cf->ctx);
    body->ManageNameIDResponse = res;
    if (cf->sso_soap_resp_sign) {
      refs.id = res->ID;
      refs.canon = zx_EASY_ENC_SO_sp_ManageNameIDResponse(cf->ctx, res);
      if (!cf->sign_cert) // Lazy load cert and private key
	cf->sign_cert = zxid_read_cert(cf, "sign-nopw-cert.pem");
      if (!cf->sign_pkey)
	cf->sign_pkey = zxid_read_private_key(cf, "sign-nopw-cert.pem");
      res->Signature = zxsig_sign(cf->ctx, 1, &refs, cf->sign_cert, cf->sign_pkey);
      zx_str_free(cf->ctx, refs.canon);
    }
    return zxid_soap_cgi_resp_body(cf, body);
  }
  
 bad:
  ERR("Unknown soap request %p", r);
  if (cf->log_level > 0)
    zxlog(cf, 0, 0, 0, 0, 0, 0, ses->nameid?ses->nameid->gg.content:0, "N", "C", "SPDISP", 0, "sid(%s) unknown soap req", ses->sid);
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
    zxlog(cf, 0, 0, 0, 0, 0, 0, ses->nameid?ses->nameid->gg.content:0, "N", "C", "BADXML", 0, "sid(%s) bad soap req", ses->sid);
    return 0;
  }
  return zxid_sp_soap_dispatch(cf, cgi, ses, r);
}

/* EOF  --  zxidslo.c */
