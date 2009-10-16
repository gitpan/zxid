/* zxidpsso.c  -  Handwritten functions for implementing Single Sign-On logic on IdP
 * Copyright (c) 2008-2009 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidpsso.c,v 1.13 2009-10-16 13:36:33 sampo Exp $
 *
 * 14.11.2008, created --Sampo
 * 4.9.2009,   added persistent nameid support --Sampo
 *
 * See also: http://hoohoo.ncsa.uiuc.edu/cgi/interface.html (CGI specification)
 */

#include <sys/stat.h>
#include <dirent.h>
#include <errno.h>

#include "errmac.h"
#include "zxid.h"
#include "zxidconf.h"
#include "saml2.h"
#include "c/zxidvers.h"
#include "c/zx-const.h"
#include "c/zx-ns.h"
#include "c/zx-data.h"

/*() Helper function to sign, if needed, and log the issued assertion.
 * Checks for Assertion ID duplicate and returns 0 on
 * failure (i.e. duplicate), 1 on success. */

/* Called by:  zxid_idp_sso x3 */
static int zxid_anoint_sso_a7n(struct zxid_conf* cf, int sign, struct zx_sa_Assertion_s* a7n, struct zx_sp_AuthnRequest_s* ar)
{
  struct zxsig_ref refs;
  struct zx_str* ss;
  struct zx_str* logpath;
  struct timeval ourts;
  GETTIMEOFDAY(&ourts, 0);
  
  if (sign) {
    refs.id = a7n->ID;
    refs.canon = zx_EASY_ENC_SO_sa_Assertion(cf->ctx, a7n);
    if (!cf->sign_cert) /* Lazy load cert and private key */
      cf->sign_cert = zxid_read_cert(cf, "sign-nopw-cert.pem");
    if (!cf->sign_pkey)
      cf->sign_pkey = zxid_read_private_key(cf, "sign-nopw-cert.pem");
    a7n->Signature = zxsig_sign(cf->ctx, 1, &refs, cf->sign_cert, cf->sign_pkey);
    zx_str_free(cf->ctx, refs.canon);
  }
  
  /* Log the issued a7n */

  zxlog(cf, &ourts, &ourts, 0, ar->Issuer->gg.content, 0, a7n->ID,
	(a7n->Subject->NameID && a7n->Subject->NameID->gg.content
	 ?a7n->Subject->NameID->gg.content
	 :(zx_dup_str(cf->ctx, (a7n->Subject->EncryptedID?"ENC":"-")))),
	sign?"U":"N", "K", "SSOA7N", "-", 0);
  
  if (cf->log_issue_a7n) {
    logpath = zxlog_path(cf, ar->Issuer->gg.content, a7n->ID, ZXLOG_ISSUE_DIR, ZXLOG_A7N_KIND, 1);
    if (logpath) {
      ss = zx_EASY_ENC_SO_sa_Assertion(cf->ctx, a7n);
      if (zxlog_dup_check(cf, logpath, "IdP POST Assertion")) {
	ERR("Duplicate Assertion ID(%.*s)", a7n->ID->len, a7n->ID->s);
	if (cf->dup_a7n_fatal) {
	  ERR("FATAL (by configuration): Duplicate Assertion ID(%.*s)", a7n->ID->len, a7n->ID->s);
	  zxlog_blob(cf, 1, logpath, ss, "anoint_sso_a7n dup");
	  zx_str_free(cf->ctx, ss);
	  zx_str_free(cf->ctx, logpath);
	  return 0;
	}
      }
      zxlog_blob(cf, 1, logpath, ss, "anoint_sso_a7n");
      zx_str_free(cf->ctx, logpath);
    }
  }
  zx_str_free(cf->ctx, ss);
  return 1;
}

/*() Helper function to sign, if needed, and log the issued response.
 * Checks for message ID duplicate and returns 0 on failure (i.e. duplicate),
 * or the canonicalized response message string on success. This string
 * may be useful for caller to send further and should be freed by the caller. */

/* Called by:  zxid_idp_sso x4 */
static struct zx_str* zxid_anoint_sso_resp(struct zxid_conf* cf, int sign, struct zx_sp_Response_s* resp, struct zx_sp_AuthnRequest_s* ar)
{
  struct zxsig_ref refs;
  struct zx_str* ss;
  struct zx_str* logpath;
  struct timeval ourts;
  GETTIMEOFDAY(&ourts, 0);
  
  if (sign) {
    refs.id = resp->ID;
    refs.canon = zx_EASY_ENC_SO_sp_Response(cf->ctx, resp);
    if (!cf->sign_cert) /* Lazy load cert and private key */
      cf->sign_cert = zxid_read_cert(cf, "sign-nopw-cert.pem");
    if (!cf->sign_pkey)
      cf->sign_pkey = zxid_read_private_key(cf, "sign-nopw-cert.pem");
    resp->Signature = zxsig_sign(cf->ctx, 1, &refs, cf->sign_cert, cf->sign_pkey);
    zx_str_free(cf->ctx, refs.canon);
  }
    
  /* Log the issued Response */
  
  zxlog(cf, &ourts, &ourts, 0, ar->Issuer->gg.content, resp->ID,
	resp->Assertion&&resp->Assertion->ID?resp->Assertion->ID:zx_dup_str(cf->ctx, "-"),
	(resp->Assertion
	 ?(resp->Assertion->Subject->NameID && resp->Assertion->Subject->NameID->gg.content
	   ?resp->Assertion->Subject->NameID->gg.content
	   :(zx_dup_str(cf->ctx, (resp->Assertion->Subject->EncryptedID?"ENC":"-"))))
	 :zx_dup_str(cf->ctx,"-")),
	sign?"U":"N", "K", "SSORESP", "-", 0);

  if (cf->log_issue_msg) {
    logpath = zxlog_path(cf, ar->Issuer->gg.content, resp->ID, ZXLOG_ISSUE_DIR, ZXLOG_MSG_KIND,1);
    if (logpath) {
      ss = zx_EASY_ENC_SO_sp_Response(cf->ctx, resp);
      if (zxlog_dup_check(cf, logpath, "IdP POST Response")) {
	ERR("Duplicate Response ID(%.*s)", resp->ID->len, resp->ID->s);
	if (cf->dup_msg_fatal) {
	  ERR("FATAL (by configuration): Duplicate Response ID(%.*s)", resp->ID->len, resp->ID->s);
	  zxlog_blob(cf, 1, logpath, ss, "anoint_sso_resp dup");
	  zx_str_free(cf->ctx, ss);
	  zx_str_free(cf->ctx, logpath);
	  return 0;
	}
      }
      zxlog_blob(cf, 1, logpath, ss, "anoint_sso_resp");
      zx_str_free(cf->ctx, logpath);
    }
  }
  return ss;
}

/*() Parse LDIF format and insert attributes to linked list. Return new head of the list.
 * *** illegal input causes corrupt pointer. For example query string input causes corruption. */

struct zx_sa_Attribute_s* zxid_add_ldif_attributes(struct zxid_conf* cf, struct zx_sa_Attribute_s* prev, int len, char* p, char* lk)
{
  struct zx_sa_Attribute_s* at;
  char* name;
  char* val;

  for (; p; ++p) {
    name = p;
    p = strstr(p, ": ");
    if (!p)
      break;
    *p = 0;
    val = p+2;
    p = strchr(val, '\n');  /* *** parsing LDIF is fragile if values are multiline */
    if (p)
      *p = 0;

    D("%s: ATTR(%s)=VAL(%s)", lk, name, val);
    at = zxid_mk_attribute(cf, name, val);
    ZX_NEXT(at) = prev;
    prev = at;

    val[-2] = ':'; /* restore */
    if (*p)
      *p = '\n';
  }
  return at;
}

extern struct zx_str err_res;

/*(i) Generate SSO assertion and ship it to SP by chosen binding. */

/* Called by:  zxid_idp_dispatch */
struct zx_str* zxid_idp_sso(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, struct zx_sp_AuthnRequest_s* ar)
{
  int got, binding = 0;
  struct zxsig_ref refs;
  struct zxid_entity* sp_meta;
  struct zx_str* idp_eid;
  struct zx_str* nid;
  struct zx_str* affil;
  struct zx_str* acsurl;
  struct zx_str tmpss;
  struct zx_str* ss;
  struct zx_str* payload;
  struct timeval srcts = {0,501000};
  struct zx_sa_NameID_s* nameid;
  struct zx_sa_Subject_s* subj;
  struct zx_sa_AuthnStatement_s* an_stmt;
  struct zx_sa_AttributeStatement_s* at_stmt;
  struct zx_sa_Assertion_s* a7n;
  struct zx_sp_NameIDPolicy_s* nidpol;
  struct zx_sp_Response_s* resp;
  struct zx_e_Envelope_s* e;
  char buf[ZXID_MAX_USER];
  char sp_name_buf[1024];
  char dir[ZXID_MAX_DIR];
  char* p;
  char* logop;

  if (!ar || !ar->Issuer || !ar->Issuer->gg.content) {
    ERR("No Issuer found in AuthnRequest %p", ar);
    return &err_res;
  }

  sp_meta = zxid_get_ent_ss(cf, ar->Issuer->gg.content);
  if (!sp_meta) {
    ERR("The metadata for Issuer of the AuthnRequest could not be found or fetched %d", 0);
    return &err_res;
  }

  /* Figure out the binding and url */

  if (ar->AssertionConsumerServiceIndex) {
    if (ar->ProtocolBinding || ar->AssertionConsumerServiceURL) {
      ERR("When SP specifies AssertionConsumerServiceIndex in AuthnRequest, it SHOULD NOT specify ProtocolBinding(%p) or AssertionConsumerServiceURL(%p). They are ignored. AssertionConsumerServiceIndex approach is the preferred approach.", ar->ProtocolBinding, ar->AssertionConsumerServiceURL);
    }
    acsurl = zxid_sp_loc_by_index_raw(cf, cgi, sp_meta, ZXID_ACS_SVC, ar->AssertionConsumerServiceIndex, &binding);
  } else if (ar->ProtocolBinding) {
    p = zx_str_to_c(cf->ctx, ar->ProtocolBinding);
    acsurl = zxid_sp_loc_raw(cf, cgi, sp_meta, ZXID_ACS_SVC, p, 0);
    ZX_FREE(cf->ctx, p);
    if (acsurl && ar->AssertionConsumerServiceURL) {
      if (acsurl->len != ar->AssertionConsumerServiceURL->len
	  || memcmp(acsurl->s, ar->AssertionConsumerServiceURL->s, acsurl->len)) {
	ERR("SECURITY/SPOOFING: SP specified in AuthnRequest an AssertionConsumerServiceURL(%.*s) but this does not agree with the metadata specified url(%.*s) for Binding(%.*s). SP would be better off using AssertionConsumerServiceIndex approach. The metadata is relied on and the AssertionConsumerServiceURL is ignored.", ar->AssertionConsumerServiceURL->len, ar->AssertionConsumerServiceURL->s, acsurl->len, acsurl->s, ar->ProtocolBinding->len, ar->ProtocolBinding->s);
      }
      binding = zxid_protocol_binding_map_saml2(ar->ProtocolBinding);
    }
  }
  if (!acsurl) {
    D("AuthnRequest did not specify any ACS or binding. Using idp_pref_acs_binding(%s)", cf->idp_pref_acs_binding);
    acsurl = zxid_sp_loc_raw(cf, cgi, sp_meta, ZXID_ACS_SVC, cf->idp_pref_acs_binding, 0);
    if (acsurl) {
      tmpss.len = strlen(cf->idp_pref_acs_binding);
      tmpss.s = cf->idp_pref_acs_binding;
      binding = zxid_protocol_binding_map_saml2(&tmpss);
    } else {
      D("Preferred binding not supported by SP metadata, using first ACS entry from metadata %d", 0);
      if (!sp_meta->ed || !sp_meta->ed->SPSSODescriptor || !sp_meta->ed->SPSSODescriptor->AssertionConsumerService || !sp_meta->ed->SPSSODescriptor->AssertionConsumerService->Location) {
	ERR("SP metadata does not contain any AssertionConsumerService. Can not complete SSO (SP metadata problem) %d", 0);
	return &err_res;
      }
      acsurl = sp_meta->ed->SPSSODescriptor->AssertionConsumerService->Location;
      binding = zxid_protocol_binding_map_saml2(sp_meta->ed->SPSSODescriptor->AssertionConsumerService->Binding);
    }
  }

  /* User ses->uid is already logged in, now check for federation with sp */

  srcts.tv_sec = zx_date_time_to_secs(ar->IssueInstant->s);
  
  nidpol = ar->NameIDPolicy;
  if (!cgi->allow_create && nidpol && nidpol->AllowCreate && nidpol->AllowCreate->s) {
    D("No allow_create from form, extract from SAMLRequest (%.*s) len=%d", nidpol->AllowCreate->len, nidpol->AllowCreate->s, nidpol->AllowCreate->len);
    cgi->allow_create = ZXID_XML_TRUE_TEST(nidpol->AllowCreate) ? '1' : '0';
  }

  if ((!cgi->nid_fmt || !cgi->nid_fmt[0])
      && nidpol && nidpol->Format && nidpol->Format->s) {
    D("No Name ID Format from form, extract from SAMLRequest (%.*s) len=%d", nidpol->Format->len, nidpol->Format->s, nidpol->Format->len);
    cgi->nid_fmt = nidpol->Format->len == sizeof(SAML2_TRANSIENT_NID_FMT)-1 && !memcmp(nidpol->Format->s, SAML2_TRANSIENT_NID_FMT, sizeof(SAML2_TRANSIENT_NID_FMT)-1) ? "trnsnt" : "prstnt";
  }

  affil = nidpol && nidpol->SPNameQualifier ? nidpol->SPNameQualifier : ar->Issuer->gg.content;
  
  zxid_nice_sha1(cf, sp_name_buf, sizeof(sp_name_buf), affil, affil);
  got = read_all(sizeof(buf)-1, buf, "idpsso", "%s" ZXID_UID_DIR "%s/%s/.mni" , cf->path, ses->uid, sp_name_buf);

  if (!got) {
    if (cgi->allow_create == '1') {
      name_from_path(dir, sizeof(dir), "%s" ZXID_UID_DIR "%s/%s", cf->path, ses->uid, sp_name_buf);
      if (MKDIR(dir, 0777) && errno != EEXIST) {
	perror("mkdir for uid/sp fed");
	ERR("Creating uid/sp federation directory(%s) failed", dir);
	zxlog(cf, 0, &srcts, 0, ar->Issuer->gg.content, ar->ID, 0, nid, "N", "S", "EFILE", dir, "mkdir fail, permissions?");
	return &err_res;
      }
      idp_eid = zxid_my_entity_id(cf);
      nid = zxid_mk_id(cf, "F", ZXID_ID_BITS);
      nameid = zx_NEW_sa_NameID(cf->ctx);
      nameid->Format = zx_ref_str(cf->ctx, SAML2_PERSISTENT_NID_FMT);
      nameid->NameQualifier = idp_eid;
      nameid->SPNameQualifier = affil;
      nameid->gg.content = nid;

      if (!write_all_path_fmt("put_fed", ZXID_MAX_USER, buf,
			      "%s%s", dir, "/.mni",
			      "%.*s|%.*s|%.*s|%.*s|",
			      sizeof(SAML2_PERSISTENT_NID_FMT), SAML2_PERSISTENT_NID_FMT,
			      idp_eid->len, idp_eid->s,
			      affil->len, affil->s,
			      nid->len, nid->s)) {
	zxlog(cf, 0, &srcts, 0, ar->Issuer->gg.content, ar->ID, 0, nid, "N", "S", "EFILE", ses->uid, "put_fed fail, permissions?");
	return &err_res;
      }
      
      zxlog(cf, 0, &srcts, 0, ar->Issuer->gg.content, ar->ID, 0, nid, "N", "K", "FEDNEW", ses->uid, 0);

    } else {
      ERR("No federation for uid(%s) in affil(%.*s) and AllowCreate false %c", ses->uid, affil->len, affil->s, cgi->allow_create);
      return &err_res;
    }
  } else {
    buf[got] = 0;
    nameid = zxid_parse_mni(cf, buf, 0);
    D("Old fed uid(%s) affil(%.*s) nid(%.*s)", ses->uid, affil->len, affil->s, nameid->gg.content->len, nameid->gg.content->s);
  }

  if (!nameid) {
    ERR("No federation for affil(%.*s) and AllowCreate false %c", affil->len, affil->s, cgi->allow_create);
    return &err_res;
  }

  if (!cgi->nid_fmt || !cgi->nid_fmt[0] || !strcmp(cgi->nid_fmt, "trnsnt")) {
    nameid->Format = zx_dup_str(cf->ctx, SAML2_TRANSIENT_NID_FMT);
    nameid->gg.content = zxid_mk_id(cf, "T", ZXID_ID_BITS);
    logop = "ITSSO";
  } else
    logop = "IFSSO";

  /* Construct Single Sign-On Assertion */

  subj = zxid_mk_subj(cf, sp_meta, nameid);
  an_stmt = zxid_mk_an_stmt(cf, ses);
  at_stmt = zx_NEW_sa_AttributeStatement(cf->ctx);
  at_stmt->Attribute = zxid_mk_attribute(cf, "zxididp", ZXID_REL " " ZXID_COMPILE_DATE);

  got = read_all(sizeof(buf)-1, buf, "idpsso_uid_at", "%s" ZXID_UID_DIR "%s/.bs/.at" , cf->path, ses->uid);
  if (got) {
    at_stmt->Attribute = zxid_add_ldif_attributes(cf, at_stmt->Attribute, got, buf, "idpsso_uid_at");
  }

  got = read_all(sizeof(buf)-1, buf, "idpsso_uid_sp_at", "%s" ZXID_UID_DIR "%s/%s/.at" , cf->path, ses->uid, sp_name_buf);
  if (got) {
    at_stmt->Attribute = zxid_add_ldif_attributes(cf, at_stmt->Attribute, got, buf, "idpsso_uid_sp_at");
  }

  got = read_all(sizeof(buf)-1, buf, "idpsso_all_at", "%s" ZXID_UID_DIR ".all/.bs/.at" , cf->path);
  if (got) {
    at_stmt->Attribute = zxid_add_ldif_attributes(cf, at_stmt->Attribute, got, buf, "idpsso_all_at");
  }

  got = read_all(sizeof(buf)-1, buf, "idpsso_all_sp_at", "%s" ZXID_UID_DIR ".all/%s/.at" , cf->path, sp_name_buf);
  if (got) {
    at_stmt->Attribute = zxid_add_ldif_attributes(cf, at_stmt->Attribute, got, buf, "idpsso_all_sp_at");
  }
  
  /* *** generalize to process .bs */
  a7n = zxid_mk_a7n(cf, affil, subj, an_stmt, at_stmt, 0);

  /* Sign, encrypt, and ship the assertion according to the binding. */

  switch (binding) {
  case 'e':
    D("SAML2 PAOS ep(%.*s)", acsurl->len, acsurl->s);
    
    if (cf->sso_sign & ZXID_SSO_SIGN_A7N) {
      refs.id = a7n->ID;
      refs.canon = zx_EASY_ENC_SO_sa_Assertion(cf->ctx, a7n);
      if (!cf->sign_cert) /* Lazy load cert and private key */
	cf->sign_cert = zxid_read_cert(cf, "sign-nopw-cert.pem");
      if (!cf->sign_pkey)
	cf->sign_pkey = zxid_read_private_key(cf, "sign-nopw-cert.pem");
      a7n->Signature = zxsig_sign(cf->ctx, 1, &refs, cf->sign_cert, cf->sign_pkey);
    }
    resp = zxid_mk_saml_resp(cf);
    if (cf->post_a7n_enc) {
      resp->EncryptedAssertion = zxid_mk_enc_a7n(cf, a7n, sp_meta);
    } else {
      resp->Assertion = a7n;
    }
    payload = zxid_anoint_sso_resp(cf, cf->sso_sign & ZXID_SSO_SIGN_RESP, resp, ar);
    if (!payload)
      return &err_res;
    zx_str_free(cf->ctx, payload);

    /* Generate SOAP envelope with ECP header */

    e = zx_NEW_e_Envelope(cf->ctx);

    e->Header = zx_NEW_e_Header(cf->ctx);
    e->Header->ecp_Response = zx_NEW_ecp_Response(cf->ctx);
    e->Header->ecp_Response->mustUnderstand = zx_dup_str(cf->ctx, "1");
    e->Header->ecp_Response->actor = zx_dup_str(cf->ctx, SOAP_ACTOR_NEXT);
    e->Header->ecp_Response->AssertionConsumerServiceURL = acsurl;

    e->Body = zx_NEW_e_Body(cf->ctx);
    e->Body->Response = resp;
    
    ss = zx_EASY_ENC_SO_e_Envelope(cf->ctx, e);

    zxlog(cf, 0, &srcts, 0, ar->Issuer->gg.content, 0, a7n->ID, nameid->gg.content, "N", "K", logop, ses->uid, 0);


    /* *** Check what HTTP level headers PAOS needs */
    return zx_strf(cf->ctx, "Content-type: text/xml\r\nContent-Length: %d\r\n%s%s%s\r\n%.*s",
		   ss->len,
		   ses->setcookie?"Set-Cookie: ":"", ses->setcookie?ses->setcookie:"", ses->setcookie?"\r\n":"",
		   ss->len, ss->s);

  case 'q':
    D("SAML2 BRWS-POST-SIMPLE-SIGN ep(%.*s)", acsurl->len, acsurl->s);

    if (!zxid_anoint_sso_a7n(cf, cf->sso_sign & ZXID_SSO_SIGN_A7N_SIMPLE, a7n, ar))
      return &err_res;
    resp = zxid_mk_saml_resp(cf);
    if (cf->post_a7n_enc) {
      resp->EncryptedAssertion = zxid_mk_enc_a7n(cf, a7n, sp_meta);
    } else {
      resp->Assertion = a7n;
    }
    payload = zxid_anoint_sso_resp(cf, 0, resp, ar);
    if (!payload)
      return &err_res;
    ss = zxid_saml2_post_enc(cf, "SAMLResponse", payload, cgi->rs, 1, acsurl);
    zx_str_free(cf->ctx, payload);
    if (!ss)
      return &err_res;

    zxlog(cf, 0, &srcts, 0, ar->Issuer->gg.content, 0, a7n->ID, nameid->gg.content, "N", "K", logop, ses->uid, "");


    return zx_strf(cf->ctx, "Content-type: text/html\r\nContent-Length: %d\r\n%s%s%s\r\n%.*s",
		   ss->len,
		   ses->setcookie?"Set-Cookie: ":"", ses->setcookie?ses->setcookie:"", ses->setcookie?"\r\n":"",
		   ss->len, ss->s);

  case 'p':
    D("SAML2 BRWS-POST ep(%.*s)", acsurl->len, acsurl->s);

    if (!zxid_anoint_sso_a7n(cf, cf->sso_sign & ZXID_SSO_SIGN_A7N, a7n, ar))
      return &err_res;
    resp = zxid_mk_saml_resp(cf);
    if (cf->post_a7n_enc) {
      resp->EncryptedAssertion = zxid_mk_enc_a7n(cf, a7n, sp_meta);
    } else {
      resp->Assertion = a7n;
    }
    payload = zxid_anoint_sso_resp(cf, cf->sso_sign & ZXID_SSO_SIGN_RESP, resp, ar);
    if (!payload)
      return &err_res;
    
    ss = zxid_saml2_post_enc(cf, "SAMLResponse", payload, cgi->rs, 0, acsurl);
    zx_str_free(cf->ctx, payload);
    if (!ss)
      return &err_res;
    
    zxlog(cf, 0, &srcts, 0, ar->Issuer->gg.content, 0, a7n->ID, nameid->gg.content, "N", "K", logop, ses->uid, "BRWS-POST");
    

    return zx_strf(cf->ctx, "Content-type: text/html\r\nContent-Length: %d\r\n%s%s%s\r\n%.*s",
		   ss->len,
		   ses->setcookie?"Set-Cookie: ":"", ses->setcookie?ses->setcookie:"", ses->setcookie?"\r\n":"",
		   ss->len, ss->s);
    
  case 'a':
    D("SAML2 BRWS-ART ep(%.*s)", acsurl->len, acsurl->s);

    if (!cf->log_issue_a7n) {
      INFO("LOG_ISSUE_A7N must be turned on in IdP configuration for artifact profile to work. Turning on now automatically. %d", 0);
      cf->log_issue_a7n = 1;
    }
    if (!zxid_anoint_sso_a7n(cf, cf->sso_sign & ZXID_SSO_SIGN_A7N, a7n, ar))
      return &err_res;
    resp = zxid_mk_saml_resp(cf);
    if (0) {
      resp->EncryptedAssertion = zxid_mk_enc_a7n(cf, a7n, sp_meta);
    } else {
      resp->Assertion = a7n;
    }
    payload = zxid_anoint_sso_resp(cf, cf->sso_sign & ZXID_SSO_SIGN_RESP, resp, ar);
    if (!payload)
      return &err_res;
    
    //ss = zxid_saml2_post_enc(cf, "SAMLResponse", pay_load, ar->RelayState);  *** redirect
    zx_str_free(cf->ctx, payload);
    /* *** Do artifact processing */

    zxlog(cf, 0, &srcts, 0, ar->Issuer->gg.content, 0, a7n->ID, nameid->gg.content, "N", "K", logop, ses->uid, "BRWS-ART");


  default:
    NEVER("Unknown or unsupported binding %d", binding);
  }

  return &err_res;
}

/* EOF  --  zxidpsso.c */
