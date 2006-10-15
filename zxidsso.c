/* zxidsso.c  -  Handwritten functions for implementing Single Sign-On logic for SP
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing. See file COPYING.
 * $Id: zxidsso.c,v 1.11 2006/10/15 00:27:26 sampo Exp $
 *
 * 12.8.2006, created --Sampo
 * 30.9.2006, added signature verification --Sampo
 *
 * See also: http://hoohoo.ncsa.uiuc.edu/cgi/interface.html (CGI specification)
 */

#include <pthread.h>
#include <signal.h>
#include <fcntl.h>
#include <netdb.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

#include <openssl/rand.h>
#include <openssl/x509.h>
#include <openssl/rsa.h>
#include <curl/curl.h>

#include "errmac.h"
#include "zxid.h"
#include "zxidconf.h"
#include "saml2.h"
#include "c/zx-const.h"
#include "c/zx-ns.h"
#include "c/zx-data.h"

/* ============== Generating and sending AuthnReq ============== */

/* This function makes the policy decision about which profile to use. */

int zxid_pick_sso_profile(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_entity* idp_meta)
{
  return ZXID_SAML2_ART;
}

struct zx_sa_Issuer_s* zxid_issuer(struct zxid_conf* cf, struct zx_str* nameid, struct zx_str* affiliation)
{
  struct zx_sa_Issuer_s* is = zx_NEW_sa_Issuer(cf->ctx);
  is->gg.content = nameid;
  is->NameQualifier = affiliation;
  return is;
}

struct zx_str* zxid_mk_id(struct zxid_conf* cf, char* prefix, int bits)
{
  char bit_buf[ZXID_ID_MAX_BITS/8];
  char base64_buf[ZXID_ID_MAX_BITS/6 + 1];
  char* p;
  if (bits > ZXID_ID_MAX_BITS || bits & 0x07) {
    ERR("Requested bits(%d) more than internal limit(%d), or bits not divisible by 8.", bits, ZXID_ID_MAX_BITS);
    return 0;
  }
#if ZXID_TRUE_RAND
  RAND_bytes(bit_buf, bits >> 3);
#else
  RAND_pseudo_bytes(bit_buf, bits >> 3);
#endif
  p = base64_fancy_raw(bit_buf, bits >> 3, base64_buf, safe_basis_64, 1<<31, 0, 0, '.');
  return zx_strf(cf->ctx, "%s%.*s", prefix?prefix:"", p-base64_buf, base64_buf);
}

struct zx_str* zxid_date_time(struct zxid_conf* cf, time_t secs)
{
  struct tm t;
  gmtime_r(&secs, &t);
  /*                      "2002-10-31T21:42:14Z" */
  return zx_strf(cf->ctx, "%04d-%02d-%02dT%02d:%02d:%02dZ",
		 t.tm_year+1900, t.tm_mon+1, t.tm_mday, t.tm_hour, t.tm_min, t.tm_sec);
}

char* zxid_saml2_map_nid_fmt(char* f)
{
  switch (f[0]) {
  case 'n' /*'none'*/:      return "";
  case 'p' /*'prstnt'*/:    return SAML2_PERSISTENT_NID_FMT;
  case 't' /*'trnsnt'*/:    return SAML2_TRANSIENT_NID_FMT;
  case 'u' /*'unspfd'*/:    return SAML2_UNSPECIFIED_NID_FMT;
  case 'e' /*'emladr'*/:    return SAML2_EMAILADDR_NID_FMT;
  case 'x' /*'x509sn'*/:    return SAML2_X509_NID_FMT;
  case 'w' /*'windmn'*/:    return SAML2_WINDOMAINQN_NID_FMT;
  case 'k' /*'kerbrs'*/:    return SAML2_KERBEROS_NID_FMT;
  case 's' /*'saml'*/:      return SAML2_ENTITY_NID_FMT;
  default:                  return f;
  }
}

char* zxid_saml2_map_protocol_binding(char* b)
{
  switch (b[0]) {
  case 'r' /*'redir'*/: return SAML2_REDIR;
  case 'a' /*'art'*/:   return SAML2_ART;
  case 'p' /*'post'*/:  return SAML2_POST;
  case 's' /*'soap'*/:  return SAML2_SOAP;
  case 'e' /*'ecp'*/:
    /*case 'paos':*/  return SAML2_PAOS;
  default:      return b;
  }
}

char* zxid_saml2_map_authn_ctx(char* c)
{
  switch (c[0]) {
  case 'n' /*'none'*/:    return "";
  case 'p':
    switch (c[2]) {
    case 'p' /*'pwp'*/:     return SAML_AUTHCTX_PASSWORDPROTECTED;
    case 0   /*'pw'*/:      return SAML_AUTHCTX_PASSWORD;
    case 'v' /*'prvses'*/:  return SAML_AUTHCTX_PREVSESS;
    }
    break;
  case 'c' /*'clicert'*/: return SAML_AUTHCTX_SSL_TLS_CERT;
  case 'u' /*'unspcf'*/:  return SAML_AUTHCTX_UNSPCFD;
  case 'i' /*'ip'*/:      return SAML_AUTHCTX_INPROT;
  }
  return c;
}

struct zx_str* zxid_start_sso_url(struct zxid_conf* cf, struct zxid_cgi* cgi)
{
  struct zx_md_SingleSignOnService_s* sso_svc;
  struct zx_sp_AuthnRequest_s* ar;
  struct zx_str* ars;
  int sso_profile_ix;
  struct zxid_entity* idp_meta;
  D("start_sso: eid(%s)", cgi->eid?cgi->eid:"-");
  if (!cgi->pr_ix || !cgi->eid)
    return 0;
  idp_meta = zxid_get_ent(cf, cgi->eid);
  if (!idp_meta)
    return 0;
  switch (sso_profile_ix = zxid_pick_sso_profile(cf, cgi, idp_meta)) {
  case ZXID_SAML2_ART:
  case ZXID_SAML2_POST:
    if (!idp_meta->ed->IDPSSODescriptor) {
      ERR("Entity(%s) does not have IdP SSO Descriptor (metadata problem)", cgi->eid);
      return 0;
    }
    for (sso_svc = idp_meta->ed->IDPSSODescriptor->SingleSignOnService;
	 sso_svc;
	 sso_svc = (struct zx_md_SingleSignOnService_s*)sso_svc->gg.g.n)
      if (sso_svc->Binding && !memcmp(SAML2_REDIR, sso_svc->Binding->s, sso_svc->Binding->len))
	break;
    if (!sso_svc) {
      ERR("Entity(%s) does not have any IdP SSO Service with " SAML2_REDIR " binding (metadata problem)", cgi->eid);
      return 0;
    }
    ar = zxid_mk_authn_req(cf, cgi);
    ars = zx_EASY_ENC_SO_sp_AuthnRequest(cf->ctx, ar);
    D("AuthnReq(%.*s)", ars->len, ars->s);
    break;
  default:
    NEVER("Inappropriate SSO profile: %d", sso_profile_ix);
    return 0;
  }
  return zxid_saml2_redir_url(cf, sso_svc->Location, ars);
}

int zxid_start_sso(struct zxid_conf* cf, struct zxid_cgi* cgi)
{
  struct zx_str* url = zxid_start_sso_url(cf, cgi);
  if (!url)
    return 0;
  printf("Location: %.*s" CRLF2, url->len, url->s);
  return ZXID_REDIR_OK;
}

/* ============== Process Response and SSO Assertion ============== */

int zxid_sp_deref_art(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses)
{
  struct zx_md_ArtifactResolutionService_s* ar_svc;
  struct zx_se_Body_s* body;
  struct zx_root_s* r;
  struct zxid_entity* idp_meta;
  int len = strlen(cgi->saml_art);
  char end_pt_ix[16];
  char* raw_succinct_id;
  /*char* msg_handle;*/
  char* p;
  char buf[64];
  if (len-7 >= sizeof(buf)*4/3) {
    ERR("SAMLart(%s), %d chars, too long. Max(%d) chars.", cgi->saml_art, len, sizeof(buf)*4/3+6);
    return 0;
  }
  p = unbase64_raw(cgi->saml_art, cgi->saml_art + len, buf, zx_std_index_64);
  *p = 0;
  if (buf[0])
    goto badart;
  switch (buf[1]) {
  case 0x03: /* SAML 1.1 */
    end_pt_ix[0] = 0;
    raw_succinct_id = buf + 2;
    /*msg_handle = buf + 22;*/
    break;
  case 0x04: /* SAML 2.0 */
    sprintf(end_pt_ix, "%d", (unsigned)buf[2] << 8 | (unsigned)buf[3]);
    raw_succinct_id = buf + 4;
    /*msg_handle = buf + 24;*/
    break;
  default: goto badart;
  }
  
  idp_meta = zxid_get_ent_by_succinct_id(cf, raw_succinct_id);
  if (!idp_meta) {
    ERR("Unable to dereference SAMLart(%s). Can not find metadata for IdP.", cgi->saml_art);
    return 0;
  }
  
  switch (buf[1]) {
  case 0x03: /* SAML 1.1 */
    /* *** ff12_resolve_art() */
    break;
  case 0x04: /* SAML 2.0 */
    if (!idp_meta->ed->IDPSSODescriptor) {
      ERR("Entity(%.*s) does not have IdP SSO Descriptor (metadata problem)", idp_meta->eid_len, idp_meta->eid);
      return 0;
    }
    for (ar_svc = idp_meta->ed->IDPSSODescriptor->ArtifactResolutionService;
	 ar_svc;
	 ar_svc = (struct zx_md_ArtifactResolutionService_s*)ar_svc->gg.g.n)
      if (ar_svc->Binding  && !memcmp(SAML2_SOAP, ar_svc->Binding->s, ar_svc->Binding->len)
	  && ar_svc->index && !memcmp(end_pt_ix, ar_svc->index->s, ar_svc->index->len)
	  && ar_svc->Location)
	break;
    if (!ar_svc) {
      ERR("Entity(%.*s) does not have any IdP Artifact Resolution Service with " SAML2_SOAP " binding and index(%s) (metadata problem)", idp_meta->eid_len, idp_meta->eid, end_pt_ix);
      return 0;
    }
    
    body = zx_NEW_se_Body(cf->ctx);
    body->ArtifactResolve = zxid_mk_art_deref(cf, idp_meta, cgi->saml_art);
    r = zxid_soap_call_body(cf, ar_svc->Location, body);
    return zxid_sp_soap_dispatch(cf, cgi, ses, r);
  default: goto badart;
  }
  
 badart:
  ERR("Bad SAMLart type code 0x%02x 0x%02x", buf[0], buf[1]);
  return 0;
}

/* Validate authentication statement and create session. */

int zxid_sp_sso_finalize(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, struct zx_sa_Assertion_s* a7n)
{
  ses->a7n = a7n;
  if (!a7n || !a7n->AuthnStatement) {
    ERR("SSO failed: no assertion supplied, or assertion didn't contain AuthnStatement. %p", a7n);
    return 0;
  }
  D("SSO Assertion received. %d", 0);
  ses->nid = zx_str_to_c(cf->ctx, a7n->Subject->NameID->gg.content);
  zxid_put_ses(cf, ses);
  cgi->msg = "SSO completed and session created.";
  cgi->op = '-';  /* Make sure management screen does not try to redispatch. */
  return ZXID_SSO_OK;
}

/* EOF  --  zxidsso.c */
