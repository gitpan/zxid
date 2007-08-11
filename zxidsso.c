/* zxidsso.c  -  Handwritten functions for implementing Single Sign-On logic for SP
 * Copyright (c) 2006-2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidsso.c,v 1.29 2007/05/10 18:19:57 sampo Exp $
 *
 * 12.8.2006, created --Sampo
 * 30.9.2006, added signature verification --Sampo
 *
 * See also: http://hoohoo.ncsa.uiuc.edu/cgi/interface.html (CGI specification)
 */

#include <signal.h>
#include <fcntl.h>
//#include <netdb.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <time.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/stat.h>
//#include <sys/wait.h>

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

/* Called by:  zxid_start_sso_url */
int zxid_pick_sso_profile(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_entity* idp_meta)
{
  return ZXID_SAML2_ART;
}

/* Called by:  zxid_mk_art_deref x2, zxid_mk_authn_req, zxid_mk_logout x2, zxid_mk_logout_resp x2, zxid_mk_nireg, zxid_mk_nireg_resp, zxid_put_ses */
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

/* Called by:  zxid_mk_art_deref x2, zxid_mk_authn_req, zxid_mk_logout x2, zxid_mk_logout_resp x2, zxid_mk_nireg, zxid_mk_nireg_resp */
struct zx_str* zxid_date_time(struct zxid_conf* cf, time_t secs)
{
  struct tm t;
  GMTIME_R(secs, t);
  /*                      "2002-10-31T21:42:14.000Z" */
  return zx_strf(cf->ctx, "%04d-%02d-%02dT%02d:%02d:%02d.002Z",
		 t.tm_year+1900, t.tm_mon+1, t.tm_mday, t.tm_hour, t.tm_min, t.tm_sec);
}

/* Called by:  zxid_mk_authn_req */
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

/* Called by: */
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

/* Called by:  zxid_mk_authn_req */
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

/* Called by:  zxid_start_sso, zxid_start_sso_location */
struct zx_str* zxid_start_sso_url(struct zxid_conf* cf, struct zxid_cgi* cgi)
{
  struct zx_md_SingleSignOnService_s* sso_svc;
  struct zx_sp_AuthnRequest_s* ar;
  struct zx_str* ars;
  int sso_profile_ix;
  struct zxid_entity* idp_meta;
  D("start_sso: cgi=%p cgi->eid=%p eid(%s)", cgi, cgi->eid, cgi->eid?cgi->eid:"-");
  if (!cgi->pr_ix || !cgi->eid || !cgi->eid[0]) {
    D("Either protocol index or entity ID missing %d", cgi->pr_ix);
    return 0;
  }
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

/* Called by:  main, zxid_simple_cf */
int zxid_start_sso(struct zxid_conf* cf, struct zxid_cgi* cgi)
{
  struct zx_str* url = zxid_start_sso_url(cf, cgi);
  if (!url)
    return 0;
  printf("Location: %.*s" CRLF2, url->len, url->s);
  return ZXID_REDIR_OK;
}

/* Called by:  zxid_simple_cf */
struct zx_str* zxid_start_sso_location(struct zxid_conf* cf, struct zxid_cgi* cgi)
{
  struct zx_str* ss;
  struct zx_str* url = zxid_start_sso_url(cf, cgi);
  if (!url)
    return 0;
  ss = zx_strf(cf->ctx, "Location: %.*s" CRLF2, url->len, url->s);
  zx_str_free(cf->ctx, url);
  return ss;
}

/* ============== Process Response and SSO Assertion ============== */

/* Called by:  main, zxid_simple_cf */
int zxid_sp_deref_art(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses)
{
  struct zx_md_ArtifactResolutionService_s* ar_svc;
  struct zx_e_Body_s* body;
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
    
    body = zx_NEW_e_Body(cf->ctx);
    body->ArtifactResolve = zxid_mk_art_deref(cf, idp_meta, cgi->saml_art);
    r = zxid_soap_call_body(cf, ar_svc->Location, body);
    return zxid_sp_soap_dispatch(cf, cgi, ses, r);
  default: goto badart;
  }
  
 badart:
  ERR("Bad SAMLart type code 0x%02x 0x%02x", buf[0], buf[1]);
  return 0;
}

/* Called by:  zxid_sp_sso_finalize */
void zxid_sigres_map(int sigres, char** sigval, char** sigmsg)
{
  switch (sigres) {
  case ZXSIG_OK:
    D("Signature validated. %d", sigres);
    *sigval = "O";
    *sigmsg = "Signature validated.";
    break;
  case ZXSIG_BAD_DALGO:  /* 1 Unsupported digest algorithm. */
    ERR("Bad digest algo. %d", sigres);
    *sigval = "A";
    *sigmsg = "Unsupported digest algorithm. Signature can not be validated.";
    break;
  case ZXSIG_DIGEST_LEN: /* 2 Wrong digest length. */
    ERR("Bad digest length. %d", sigres);
    *sigval = "G";
    *sigmsg = "Wrong digest length. Signature can not be validated.";
    break;
  case ZXSIG_BAD_DIGEST: /* 3 Digest value does not match. */
    ERR("Bad digest. Canon problem? %d", sigres);
    *sigval = "G";
    *sigmsg = "Message digest does not match signed content. Canonicalization problem? Or falsified or altered or substituted content. Signature can not be validated.";
    break;
  case ZXSIG_BAD_SALGO:  /* 4 Unsupported signature algorithm. */
    ERR("Bad sig algo. %d", sigres);
    *sigval = "A";
    *sigmsg = "Unsupported signature algorithm. Signature can not be validated.";
    break;
  case ZXSIG_BAD_CERT:   /* 5 Extraction of public key from certificate failed. */
    ERR("Bad cert. %d", sigres);
    *sigval = "I";
    *sigmsg = "Bad IdP certificate or bad IdP metadata or unknown IdP. Signature can not be validated.";
    break;
  case ZXSIG_VFY_FAIL:   /* 6 Verification of signature failed. */
    ERR("Bad sig. %d", sigres);
    *sigval = "R";
    *sigmsg = "Signature does not match signed content (but content checksum matches). Content may have been falsified, altered, or substituted; or IdP metadata does not match the keys actually used by IdP.";
    break;
  case ZXSIG_NO_SIG:
    ERR("Not signed. %d", sigres);
    *sigval = "N";
    *sigmsg = "No signature found.";
    break;
  case ZXSIG_TIMEOUT:
    ERR("Out of validity period. %d", sigres);
    *sigval = "V";
    *sigmsg = "Assertion is not in its validity period.";
    break;
  case ZXSIG_AUDIENCE:
    ERR("Wrong audience. %d", sigres);
    *sigval = "V";
    *sigmsg = "Assertion has wrong audience.";
    break;
  default:
    ERR("Other sig err(%d)", sigres);
    *sigval = "E";
    *sigmsg = "Broken or unvalidatable signature.";
  }
}

/* Validate authentication statement and populate session. */

struct zx_str unknown_str = {{0,0,0,0,0}, 1, "?"};

/* Return 0 for failure, otherwise some success code such as ZXID_SSO_OK */

/* Called by:  zxid_sp_dispatch, zxid_sp_dispatch_location, zxid_sp_soap_dispatch x2 */
int zxid_sp_sso_finalize(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, struct zx_sa_Assertion_s* a7n)
{
  char* err = "S";
  int secs;
  struct timeval ourts;
  struct timeval srcts = {0,501000};
  struct zx_str* logpath;
  struct zx_str* myentid;
  struct zx_str* issuer = &unknown_str;
  struct zx_str* subj = &unknown_str;
  struct zx_sa_AudienceRestriction_s* audr;
  struct zx_elem_s* aud;
  struct zxsig_ref refs;
  struct zxid_entity* idp_meta;
  ses->sigres = ZXSIG_NO_SIG;
  ses->a7n = a7n;
  GETTIMEOFDAY(&ourts, 0);
  
  if (!a7n || !a7n->AuthnStatement) {
    ERR("SSO failed: no assertion supplied, or assertion didn't contain AuthnStatement. %p", a7n);
    goto erro;
  }
  srcts.tv_sec = zx_date_time_to_secs(a7n->IssueInstant->s);
  if (!a7n->Issuer || !a7n->Issuer->gg.content) {
    ERR("SSO failed: assertion does not have Issuer. %p", a7n->Issuer);
    goto erro;
  }
  issuer = a7n->Issuer->gg.content;
  if (!a7n->Subject || !a7n->Subject->NameID || !a7n->Subject->NameID->gg.content) {
    ERR("SSO failed: assertion does not have Subject. %p", a7n->Subject);
    goto erro;
  }
  subj = a7n->Subject->NameID->gg.content;
  ses->nid = zx_str_to_c(cf->ctx, subj);
  if (a7n->Subject->NameID->Format
      && !memcmp(a7n->Subject->NameID->Format->s,
		 SAML2_TRANSIENT_NID_FMT,
		 a7n->Subject->NameID->Format->len)) {
    ses->nidfmt = 0;
  } else {
    ses->nidfmt = 1;  /* anything nontransient may be a federation */
  }
  D("SSO Assertion received. NID(%s) FMT(%d)", ses->nid, ses->nidfmt);
  
  /* Validate signature (*** add Issuer trusted check, CA validation, etc.) */
  
  idp_meta = zxid_get_ent_ss(cf, a7n->Issuer->gg.content);
  if (!idp_meta) {
    ERR("Unable to find metadata for Issuer(%.*s).", a7n->Issuer->gg.content->len, a7n->Issuer->gg.content->s);
    cgi->sigval = "I";
    cgi->sigmsg = "Issuer of Assertion unknown.";
    ses->sigres = ZXSIG_NO_SIG;
  } else {
    if (a7n->Signature && a7n->Signature->SignedInfo && a7n->Signature->SignedInfo->Reference) {
      refs.sref = a7n->Signature->SignedInfo->Reference;
      refs.blob = (struct zx_elem_s*)a7n;
      ses->sigres = zxsig_validate(cf->ctx, idp_meta->sign_cert, a7n->Signature, 1, &refs);
      zxid_sigres_map(ses->sigres, &cgi->sigval, &cgi->sigmsg);
    } else {
      ERR("SSO warn: assertion not signed. %p", a7n->Signature);
      cgi->sigval = "N";
      cgi->sigmsg = "Assertion was not signed.";
      ses->sigres = ZXSIG_NO_SIG;
      if (cf->nosig_fatal) {
	err = "P";
	goto erro;
      }
    }
  }
  if (cf->sig_fatal && !ses->sigres) {
    err = "P";
    goto erro;
  }
  
  /* Validate Conditions */
  
  if (a7n->Conditions) {
    if (a7n->Conditions->AudienceRestriction) {
      myentid = zxid_my_entity_id(cf);
      for (audr = a7n->Conditions->AudienceRestriction; audr; audr = (struct zx_sa_AudienceRestriction_s*)audr->gg.g.n)
	for (aud = audr->Audience; aud; aud = (struct zx_elem_s*)aud->g.n)
	  if (aud->content->len == myentid->len
	      && !memcmp(aud->content->s, myentid->s, aud->content->len)) {
	    D("Found audience. %d", 0);
	    goto found_audience;
	  }
      ERR("SSO warn: AudienceRestriction wrong. %d", 0);
      cgi->sigval = "V";
      cgi->sigmsg = "This SP not included in the Assertion Audience.";
      ses->sigres = ZXSIG_AUDIENCE;
      if (cf->audience_fatal) {
	err = "P";
	goto erro;
      }
    } else {
      D("Assertion does not have AudienceRestriction. %d", 0);
    }
  found_audience:

    if (a7n->Conditions->NotOnOrAfter && a7n->Conditions->NotOnOrAfter->len > 18) {
      secs = zx_date_time_to_secs(a7n->Conditions->NotOnOrAfter->s);
      if (secs <= ourts.tv_sec) {
	if (secs + cf->after_slop <= ourts.tv_sec) {
	  ERR("NotOnOrAfter rejected with slop of %d. Time to expiry %d secs", cf->after_slop, secs - ourts.tv_sec);
	  cgi->sigval = "V";
	  cgi->sigmsg = "Assertion has expired.";
	  ses->sigres = ZXSIG_TIMEOUT;
	  if (cf->timeout_fatal) {
	    err = "P";
	    goto erro;
	  }
	} else {
	  D("NotOnOrAfter accepted with slop of %d. Time to expiry %d secs", cf->after_slop, secs - ourts.tv_sec);
	}
      } else {
	D("NotOnOrAfter ok. Time to expiry %d secs", secs - ourts.tv_sec);
      }
    } else {
      D("Assertion does not have NotOnOrAfter. %d", 0);
    }

    if (a7n->Conditions->NotBefore && a7n->Conditions->NotBefore->len > 18) {
      secs = zx_date_time_to_secs(a7n->Conditions->NotBefore->s);
      if (secs > ourts.tv_sec) {
	if (secs - cf->before_slop > ourts.tv_sec) {
	  ERR("NotBefore rejected with slop of %d. Time to validity %d secs", cf->after_slop, secs - ourts.tv_sec);
	  cgi->sigval = "V";
	  cgi->sigmsg = "Assertion is not valid yet (too soon).";
	  ses->sigres = ZXSIG_TIMEOUT;
	  if (cf->timeout_fatal) {
	    err = "P";
	    goto erro;
	  }
	} else {
	  D("NotBefore accepted with slop of %d. Time to validity %d secs", cf->after_slop, secs - ourts.tv_sec);
	}
      } else {
	D("NotBefore ok. Time from validity %d secs", ourts.tv_sec - secs);
      }
    } else {
      D("Assertion does not have NotBefore. %d", 0);
    }
  } else {
    D("Assertion does not have Conditions. %d", 0);
  }
  
  if (cf->log_rely_a7n) {
    D("Logging... %d", 0);
    logpath = zxlog_path(cf, a7n->Issuer->gg.content, a7n->ID, ZXLOG_RELY_DIR, ZXLOG_A7N_KIND, 1);
    if (logpath) {
      ses->sso_a7n_path = zx_str_to_c(cf->ctx, logpath);
      if (zxlog_dup_check(cf, logpath, "SSO assertion")) {
	if (cf->dup_a7n_fatal) {
	  err = "C";
	  goto erro;
	}
      }
      zxlog_blob(cf, cf->log_rely_a7n, logpath, zx_EASY_ENC_WO_sa_Assertion(cf->ctx, a7n));
    }
  }
  D("Creating session... %d", 0);
  zxid_put_ses(cf, ses);
  zxid_snarf_eprs_from_ses(cf, ses);  /* Harvest attributes and bootstrap(s) */
  cgi->msg = "SSO completed and session created.";
  cgi->op = '-';  /* Make sure management screen does not try to redispatch. */
  D("Logging... %d", 0);
  zxlog(cf, &ourts, &srcts, "-:-", issuer, 0, a7n->ID, subj,
	cgi->sigval, "K", ses->nidfmt?"FEDSSO":"TMPSSO", "-", 0);
  return ZXID_SSO_OK;

erro:
  ERR("SSO fail (%s)", err);
  cgi->msg = "SSO failed. This could be due to signature, timeout, etc., technical failures, or by policy.";
  zxlog(cf, &ourts, &srcts, "-:-", issuer, 0, a7n?a7n->ID:0, subj,
	cgi->sigval, err, ses->nidfmt?"FEDSSO":"TMPSSO", "-", "Error.");
  return 0;
}

/* EOF  --  zxidsso.c */
