/* zxid.h  -  Definitions for zxid CGI
 * Copyright (c) 2006-2008 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxid.h,v 1.69 2008-05-30 17:39:11 lbernardo Exp $
 *
 * 12.8.2006,  created --Sampo
 * 18.11.2006, log signing support --Sampo
 * 12.10.2007, new conf options --Sampo
 * 22.2.2008,  added path_supplied feature --Sampo
 */

#ifndef _zxid_h
#define _zxid_h

#include <memory.h>
#include <string.h>
#ifdef USE_CURL
#include <curl/curl.h>
#endif
#ifdef USE_OPENSSL
#include <openssl/x509.h>
#include <openssl/rsa.h>
#endif

#include "c/zx-data.h"
#include "platform.h"

#define ZXID_CONF_MAGIC 0x900dc07f

struct zxid_conf {
  unsigned int magic;
  struct zx_ctx* ctx;
#ifdef USE_CURL
  CURL* curl;
#endif
#ifdef USE_OPENSSL
  X509* sign_cert;
  RSA*  sign_pkey;
  X509* enc_cert;
  RSA*  enc_pkey;

  RSA*  log_sign_pkey;
  X509* log_enc_cert;
  char  log_symkey[20];      /* sha1 hash of key data */
#endif
  struct zxid_entity* cot;   /* Metadata of CoT partners */
  int path_supplied;         /* FLAG: If config variable PATH is supplied, it may trigger reading config file from the supplied location. */
  int path_len;
  char* path;
  char* url;
  char* non_standard_entityid;
  char* cdc_url;
  char  cdc_choice;
  char  md_fetch;
  char  md_populate_cache;
  char  md_cache_first;
  char  md_cache_last;
  char  user_local;          /* Whether local user accounts should be maintained. */
  char  authn_req_sign;
  char  want_sso_a7n_signed;
  char  sso_soap_sign;
  char  sso_soap_resp_sign;
  char  nameid_enc;          /* Should NameID be encrypted in SLO and MNI requests. */
  char* affiliation;
  char* nice_name;           /* Human readable "nice" name. Used in AuthnReq->ProviderName */
  char* ses_arch_dir;        /* Place where dead sessions go. 0=rm */
  char* ses_cookie_name;
  char* ipport;              /* Source IP and port for logging, e.g: "1.2.3.4:5" */
  
  char  log_err;             /* Log enables and signing and encryption flags (if USE_OPENSSL) */
  char  log_act;
  char  log_issue_a7n;
  char  log_issue_msg;
  char  log_rely_a7n;
  char  log_rely_msg;
  char  log_err_in_act;      /* Log errors to action log flag (may also log to error log) */
  char  log_sigfail_is_err;  /* Log signature failures to error log */
  char  log_level;           /* act log level: 0=audit, 1=audit+extio, 2=audit+extio+events */
  
  char  sig_fatal;
  char  nosig_fatal;
  char  timeout_fatal;
  char  audience_fatal;
  char  dup_a7n_fatal;
  char  dup_msg_fatal;
  int   before_slop;
  int   after_slop;
  int   timeskew;
  int   redir_to_content;    /* Should explicit redirect to content be used (vs. internal redir) */

  int   max_soap_retry;      /* How many times a ID-WSF SOAP call can be retried (update EPR) */
  char* defaultqs;
  char* mod_saml_attr_prefix;  /* Prefix for req variables in mod_auth_saml */

  char* idp_sel_start;       /* HTML headers, start of page, side bars */
  char* idp_sel_new_idp;     /* Auto-CoT fields */
  char* idp_sel_our_eid;     /* Our EID advice */
  char* idp_sel_tech_user;   /* Technical options user might choose */
  char* idp_sel_tech_site;   /* Technical options site admin sets (hidden) */
  char* idp_sel_footer;      /* End of page stuff, after form */
  char* idp_sel_end;         /* End of page, after version string */

  char* mgmt_start;    /* HTML headers, start of page, side bars */
  char* mgmt_logout;   /* Logout buttons */
  char* mgmt_defed;    /* Defederation buttons */
  char* mgmt_footer;   /* End of page stuff, after form */
  char* mgmt_end;      /* End of page, after version string */

  char* dbg;           /* Debug message that may be shown. */
};

/* Query string, or post, is parsed into following structure. If a variable
 * is not present, it will be left as NULL. Note that this structure
 * mixes fields from all forms that ZXID might display or process. */

#define ZXID_CGI_MAGIC 0x900d0c91

struct zxid_cgi {
  unsigned int magic;
  char  op;            /* What should be done now. */
  char  pr_ix;         /* Index to protocol profile (typically for login) */
  char  allow_create;  /* Whether federation is permitted (allow creation of new federation) */
  char  ispassive;     /* Whether IdP is allowed to seize user interface (e.g. ask password) */
  char  force_authn;   /* Whether IdP SHOULD authenticate the user anew. */
  char  enc_hint;      /* Hint: Should NID be encrypted in SLO and MNI, see also cf->nameid_enc */
  char* sid;           /* If session is already active, the session ID. */
  char* nid;           /* NameID of the user. */
  char* user;          /* Form field for user. */
  char* pw;            /* Form field for password. */
  char* cdc;           /* Common Domain Cookie as returned by the CDC reader */
  char* eid;           /* Entity ID of an IdP (typically for login) */
  char* nid_fmt;       /* Name ID format */
  char* affil;         /* SP NameQualifier (such as in affiliation of SPs) */
  char* consent;       /* Whether user consented to the operation and how. */
  char* matching_rule; /* How authn_ctx is to be matched by IdP. */
  char* authn_ctx;     /* What kind of authentication the IdP should assert towards SP. */
  char* pxy_count;     /* ProxyCount for triggering IdP proxying */
  char* get_complete;  /* GetComplete URL for IdP proxying */
  char* idppxylist;    /* IDPList for IdP proxying */
  char* rs;            /* RelayState in redirect profile. mod_auth_saml: uri to access after SSO */
  char* newnym;        /* New NameID for MNI/nireg. Empty for federation termination. */
  char* saml_art;      /* SAMLart=... artifact, as in artifact consumer URL. */
  char* saml_resp;     /* SAMLResponse=... in redirect profile */
  char* saml_req;      /* SAMLRequest=... in redirect profile */
  char* sigalg;        /* SigAlg=... in redirect profile */
  char* sig;           /* Signature=... in redirect profile */
  char* sigval;        /* Signature validation code (as logged) */
  char* sigmsg;        /* Signature validation message */
  char* err;           /* When rendering screens: used to put error message to screen. */
  char* msg;           /* When rendering screens: used to put info message to screen. */
  char* dbg;           /* When rendering screens: used to put debug message to screen. */
  struct zxid_entity* idp_list;   /* IdPs from CDC */
};

/* Session is parsed into following structure. */

#define ZXID_SES_MAGIC 0x900d05e5

struct zxid_ses {
  unsigned int magic;
  char* sid;
  char* nid;           /* String representation of NameID. See also nameid. */
  char* sesix;         /* SessionIndex */
  char  nidfmt;        /* 0=tmp NameID, 1=persistent */
  char  sigres;
  char  pad2;
  char  pad3;
  char* sso_a7n_path;  /* Reference to the SSO assertion (needed for SLO) */
  char* setcookie;     /* If set, the content rendering should include set-cookie header. */
  char* cookie;        /* Cookie seen by downstream internal requests after SSO. */
  char* rs;            /* RelayState at SSO. mod_auth_saml uses this as URI after SSO. */
  struct zx_sa_NameID_s* nameid;      /* From a7n or EncryptedID */
  struct zx_sa_Assertion_s*   a7n;    /* SAML 2.0 */
  struct zx_sa11_Assertion_s* a7n11;
  struct zx_ff12_Assertion_s* a7n12;
  char* sesbuf;
  char* sso_a7n_buf;
};

#define ZXID_SES_DIR "ses/"
#define ZXID_USER_DIR "user/"

/* Entity or Provider, as identified by an Entity ID or Provider ID. */

struct zxid_entity {
  struct zxid_entity* n;
  struct zxid_entity* n_cdc;  /* *** not thread safe */
  int eid_len;
  char* eid;
  char  sha1_name[28];  /* 27 chars (+1 that is overwritten with nul) */
  X509* tls_cert;
  X509* sign_cert;
  X509* enc_cert;
  struct zx_md_EntityDescriptor_s* ed;  /* Metadata */
};

/* --------------- zxid_simple() API (see zxidsimp.c) --------------- */

#define ZXID_AUTO_EXIT    0x01 /* Do not call exit(2), return "n" instead */
#define ZXID_AUTO_REDIR   0x02 /* Autoredirs, assume CGI, calls exit(2) */
#define ZXID_AUTO_SOAPC   0x04 /* SOAP resp content */
#define ZXID_AUTO_SOAPH   0x08 /* SOAP resp headers */
#define ZXID_AUTO_METAC   0x10 /* metadata content */
#define ZXID_AUTO_METAH   0x20 /* metadata headers*/
#define ZXID_AUTO_LOGINC  0x40 /* login page content */
#define ZXID_AUTO_LOGINH  0x80 /* login page headers */
#define ZXID_AUTO_MGMTC  0x100 /* mgmt page content */
#define ZXID_AUTO_MGMTH  0x200 /* mgmt page headers */
#define ZXID_AUTO_FORMF  0x400 /* Wrap the output in <form> tag. Full page HTML. */
#define ZXID_AUTO_FORMT  0x800 /* Wrap the output in <form> tag. */
#define ZXID_AUTO_ALL    0xfff /* Enable all automatic behaviour. (4095) */
#define ZXID_AUTO_DEBUG 0x1000 /* Enable debugging output to stderr. */

char* zxid_simple(char* conf, char* qs, int auto_flags);
char* zxid_idp_list(char* conf, int auto_flags);
char* zxid_idp_select(char* conf, int auto_flags);
char* zxid_fed_mgmt(char* conf, char* sid, int auto_flags);

struct zxid_conf* zxid_new_conf_to_cf(char* conf);
char* zxid_simple_cf(struct zxid_conf* cf, int qs_len, char* qs, int* res_len, int auto_flags);
char* zxid_idp_list_cf(struct zxid_conf* cf, int* res_len, int auto_flags);
char* zxid_idp_select_cf(struct zxid_conf* cf, int* res_len, int auto_flags);
char* zxid_fed_mgmt_cf(struct zxid_conf* cf, int* res_len, int sid_len, char* sid, int auto_flags);

int zxid_conf_to_cf_len(struct zxid_conf* cf, int conf_len, char* conf);
char* zxid_simple_len(int conf_len, char* conf, int qs_len, char* qs, int* res_len, int auto_flags);
char* zxid_idp_list_len(int conf_len, char* conf, int* res_len, int auto_flags);
char* zxid_idp_select_len(int conf_len, char* conf, int* res_len, int auto_flags);
char* zxid_fed_mgmt_len(int conf_len, char* conf, int* res_len, char* sid, int auto_flags);
struct zx_str* zxid_idp_select_zxstr_cf(struct zxid_conf* cf, int auto_flags);
struct zx_str* zxid_ses_to_ldif(struct zxid_conf* cf, struct zxid_ses* ses);

char* zxid_simple_render_ses(struct zxid_conf* cf, struct zxid_ses* ses, int* res_len, int auto_flags);
char* zxid_simple_ses_active_cf(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, int* res_len, int auto_flags);
char* zxid_simple_no_ses_cf(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, int* res_len, int auto_flags);

/* --------------- Full API --------------- */

/* Signatures */

struct zxsig_ref {
  struct zx_ds_Reference_s* sref;  /* Reference for validation */
  struct zx_elem_s* blob;          /* XML data structure for validation */
  struct zx_str* id;               /* ID attribute of element to sign */
  struct zx_str* canon;            /* String representing canonicalization for signing */
};

#define ZXSIG_OK         0
#define ZXSIG_BAD_DALGO  1  /* A Unsupported digest algorithm. */
#define ZXSIG_DIGEST_LEN 2  /* G Wrong digest length. */
#define ZXSIG_BAD_DIGEST 3  /* G Digest value does not match. */
#define ZXSIG_BAD_SALGO  4  /* A Unsupported signature algorithm. */
#define ZXSIG_BAD_CERT   5  /* I Extraction of public key from certificate failed. */
#define ZXSIG_VFY_FAIL   6  /* R Verification of signature failed. */
#define ZXSIG_NO_SIG     7  /* N No signature found. */
#define ZXSIG_TIMEOUT    8  /* V Validity time has expired. */
#define ZXSIG_AUDIENCE   9  /* V Assertion has wrong audience. */
struct zx_ds_Signature_s* zxsig_sign(struct zx_ctx* c, int n, struct zxsig_ref* sref, X509* cert, RSA* priv_key);
int zxsig_validate(struct zx_ctx* c, X509* cert, struct zx_ds_Signature_s* sig, int n, struct zxsig_ref* refs);
int zxsig_data_rsa_sha1(struct zx_ctx* c, int len, char* d, char** sig, RSA* priv_key, char* lk);
int zxsig_verify_data_rsa_sha1(int len, char* data, int siglen, char* sig, X509* cert, char* lk);
struct zx_str* zxenc_symkey_dec(struct zxid_conf* cf, struct zx_xenc_EncryptedData_s* ed, struct zx_str* symkey);
struct zx_str* zxenc_privkey_dec(struct zxid_conf* cf, struct zx_xenc_EncryptedData_s* ed, struct zx_xenc_EncryptedKey_s* ek);
struct zx_xenc_EncryptedData_s* zxenc_symkey_enc(struct zxid_conf* cf, struct zx_str* data, struct zx_str* ed_id, struct zx_str* symkey, struct zx_str* symkey_id);
struct zx_xenc_EncryptedData_s* zxenc_pubkey_enc(struct zxid_conf* cf, struct zx_str* data, struct zx_xenc_EncryptedKey_s** ekp, X509* cert, char* idsuffix);

/* zxlog (see logging chapter in README.zxid) */

/*  /var/zxid/log/rely/ISSUER-SHA1-NAME/a7n/A7N-ID-AS-SHA1 */
#define ZXLOG_RELY_DIR  "rely/"
#define ZXLOG_ISSUE_DIR "issue/"
#define ZXLOG_A7N_KIND  "/a7n/"
#define ZXLOG_MSG_KIND  "/msg/"
void zxlog_write_line(struct zxid_conf* cf, char* c_path, int encflags, int n, char* logbuf);
struct zx_str* zxlog_path(struct zxid_conf* cf, struct zx_str* entid, struct zx_str* objid, char* dir, char* kind, int create_dirs);
int zxlog_dup_check(struct zxid_conf* cf, struct zx_str* path, char* logkey);
int zxlog_blob(struct zxid_conf* cf, int logflag, struct zx_str* path, struct zx_str* blob);
int zxlog(struct zxid_conf* cf, struct timeval* ourts, struct timeval* srcts, char* ipport, struct zx_str* entid, struct zx_str* msgid, struct zx_str* a7nid, struct zx_str* nid, char* sigval, char* res, char* op, char* arg, char* fmt, ...);

/* zxidmeta */

#define ZXID_COT_DIR "cot/"
#define ZXID_MAX_MD (64*1024)
#define ZXID_MAX_SOAP (64*1024)
#define ZXID_MAX_EID (1024)

struct zxid_entity* zxid_get_ent_from_file(struct zxid_conf* cf, char* sha1_name);
struct zxid_entity* zxid_get_ent_from_cache(struct zxid_conf* cf, struct zx_str* eid);
int zxid_write_ent_to_cache(struct zxid_conf* cf, struct zxid_entity* ent);
struct zxid_entity* zxid_parse_meta(struct zxid_conf* cf, char** md, char* lim);
struct zxid_entity* zxid_get_meta_ss(struct zxid_conf* cf, struct zx_str* url);
struct zxid_entity* zxid_get_meta(struct zxid_conf* cf, char* url);
struct zxid_entity* zxid_get_ent_ss(struct zxid_conf* cf, struct zx_str* eid);
struct zxid_entity* zxid_get_ent(struct zxid_conf* cf, char* eid);
struct zxid_entity* zxid_get_ent_by_succinct_id(struct zxid_conf* cf, char* raw_succinct_id);
struct zxid_entity* zxid_get_ent_by_sha1_name(struct zxid_conf* cf, char* sha1_name);
struct zxid_entity* zxid_load_cot_cache(struct zxid_conf* cf);

struct zx_ds_KeyInfo_s* zxid_key_info(struct zxid_conf* cf, X509* x);
struct zx_md_KeyDescriptor_s* zxid_key_desc(struct zxid_conf* cf, char* use, X509* cert);
struct zx_md_SingleLogoutService_s* zxid_slo_desc(struct zxid_conf* cf, char* binding, char* loc, char* resp_loc);
struct zx_md_ManageNameIDService_s* zxid_mni_desc(struct zxid_conf* cf, char* binding, char* loc, char* resp_loc);
struct zx_md_AssertionConsumerService_s* zxid_ac_desc(struct zxid_conf* cf, char* binding, char* loc, char* index);
struct zx_md_SPSSODescriptor_s* zxid_sp_sso_desc(struct zxid_conf* cf);
struct zx_str* zxid_sp_meta(struct zxid_conf* cf, struct zxid_cgi* cgi);
int zxid_send_sp_meta(struct zxid_conf* cf, struct zxid_cgi* cgi);
struct zx_str* zxid_my_entity_id(struct zxid_conf* cf);
struct zx_str* zxid_my_cdc_url(struct zxid_conf* cf);
struct zx_sa_Issuer_s* zxid_my_issuer(struct zxid_conf* cf);

/* zxidconf */

void  zxid_sha1_file(struct zxid_conf* cf, char* name, char* sha1);
X509* zxid_extract_cert(char* buf, char* name);
RSA*  zxid_extract_private_key(char* buf, char* name);
X509* zxid_read_cert(struct zxid_conf* cf, char* name);
RSA*  zxid_read_private_key(struct zxid_conf* cf, char* name);
int   zxid_set_opt(struct zxid_conf* cf, int which, int val);
void  zxid_url_set(struct zxid_conf* cf, char* url);
int   zxid_init_conf(struct zxid_conf* cf, char* conf_dir);
struct zxid_conf* zxid_init_conf_ctx(struct zxid_conf* cf, char* zxid_path);
struct zxid_conf* zxid_new_conf(char* zxid_path);
int zxid_parse_conf_raw(struct zxid_conf* cf, int qs_len, char* qs);
int zxid_parse_conf(struct zxid_conf* cf, char* qs);

/* zxidcgi */

int zxid_parse_cgi(struct zxid_cgi* cgi, char* qs);
struct zxid_cgi* zxid_new_cgi(struct zxid_conf* cf, char* qs);
void zxid_get_sid_from_cookie(struct zxid_conf* cf, struct zxid_cgi* cgi, const char* cookie);

/* zxidses */

struct zxid_ses* zxid_fetch_ses(struct zxid_conf* cf, char* sid);
int zxid_get_ses(struct zxid_conf* cf, struct zxid_ses* ses, char* sid);
int zxid_put_ses(struct zxid_conf* cf, struct zxid_ses* ses);
int zxid_del_ses(struct zxid_conf* cf, struct zxid_ses* ses);
int zxid_get_ses_sso_a7n(struct zxid_conf* cf, struct zxid_ses* ses);
struct zxid_entity* zxid_get_ses_idp(struct zxid_conf* cf, struct zxid_ses* ses);
int zxid_find_ses(struct zxid_conf* cf, struct zxid_ses* ses, struct zx_str* ses_ix, struct zx_str* nid);

/* zxiduser */

int zxid_put_user(struct zxid_conf* cf, struct zx_str* nidfmt, struct zx_str* idpent, struct zx_str* spqual, struct zx_str* idpnid, char* mniptr);
struct zx_sa_NameID_s* zxid_get_user_nameid(struct zxid_conf* cf, struct zx_sa_NameID_s* oldnid);
void zxid_user_change_nameid(struct zxid_conf* cf, struct zx_sa_NameID_s* oldnid, struct zx_str* newnym);

/* zxidlib */

struct zx_root_s* zxid_soap_call_raw(struct zxid_conf* cf, struct zx_str* url, struct zx_str* data);
struct zx_str* zxid_lecp_check(struct zxid_conf* cf, struct zxid_cgi* cgi);
int zxid_cdc_read(struct zxid_conf* cf, struct zxid_cgi* cgi);
int zxid_cdc_check(struct zxid_conf* cf, struct zxid_cgi* cgi);
struct zx_root_s* zxid_soap_call_envelope(struct zxid_conf* cf, struct zx_str* url, struct zx_e_Envelope_s* env);
struct zx_root_s* zxid_soap_call_hdr_body(struct zxid_conf* cf, struct zx_str* url, struct zx_e_Header_s* hdr, struct zx_e_Body_s* body);
struct zx_root_s* zxid_soap_call_body(struct zxid_conf* cf, struct zx_str* url, struct zx_e_Body_s* body);
int zxid_soap_cgi_resp_body(struct zxid_conf* cf, struct zx_e_Body_s* body);

struct zx_str* zxid_saml2_redir_enc(struct zxid_conf* cf, char* cgivar, struct zx_str* pay_load, char* relay_state);
int zxid_saml2_redir(struct zxid_conf* cf, struct zx_str* loc, struct zx_str* pay_load, char* relay_state);
struct zx_str* zxid_saml2_redir_url(struct zxid_conf* cf, struct zx_str* loc, struct zx_str* pay_load, char* relay_state);
struct zx_str* zxid_saml2_location(struct zxid_conf* cf, struct zx_str* loc, struct zx_str* pay_load, char* relay_state);

struct zx_str* zxid_saml2_resp_location(struct zxid_conf* cf, struct zx_str* loc, struct zx_str* pay_load, char* relay_state);
int zxid_saml2_resp_redir(struct zxid_conf* cf, struct zx_str* loc, struct zx_str* pay_load, char* relay_state);

int zxid_saml_ok(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zx_sp_Status_s* st, char* what);
struct zx_sa_NameID_s* zxid_decrypt_nameid(struct zxid_conf* cf, struct zx_sa_NameID_s* nid, struct zx_sa_EncryptedID_s* encid);
struct zx_str* zxid_decrypt_newnym(struct zxid_conf* cf, struct zx_str* newnym, struct zx_sp_NewEncryptedID_s* encid);

/* zxidloc */

struct zx_str* zxid_idp_loc_raw(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_entity* idp_meta, int svc_type, char* binding, int req);
struct zx_str* zxid_idp_loc(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, struct zxid_entity* idp_meta, int svc_type, char* binding);
struct zx_root_s* zxid_idp_soap(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, struct zxid_entity* idp_meta, int svc_type, struct zx_e_Body_s* body);

/* zxidsso */

int zxid_pick_sso_profile(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_entity* idp_met);
int zxid_start_sso(struct zxid_conf* cf, struct zxid_cgi* cgi);
struct zx_str* zxid_start_sso_url(struct zxid_conf* cf, struct zxid_cgi* cgi);
struct zx_str* zxid_start_sso_location(struct zxid_conf* cf, struct zxid_cgi* cgi);
int zxid_sp_deref_art(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses);
int zxid_sp_sso_finalize(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, struct zx_sa_Assertion_s* a7n);

char* zxid_saml2_map_nid_fmt(char* f);
char* zxid_saml2_map_protocol_binding(char* b);
char* zxid_saml2_map_authn_ctx(char* c);

struct zx_str* zxid_date_time(struct zxid_conf* cf, time_t secs);
struct zx_str* zxid_mk_id(struct zxid_conf* cf, char* prefix, int bits);
struct zx_sa_Issuer_s* zxid_issuer(struct zxid_conf* cf, struct zx_str* nameid, char* affiliation);
void zxid_sigres_map(int sigres, char** sigval, char** sigmsg);

/* zxidslo */

int zxid_sp_slo_soap(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses);
int zxid_sp_slo_redir(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses);
struct zx_str* zxid_sp_slo_location(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses);

struct zx_str* zxid_sp_dispatch_location(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, char* msg);
int zxid_sp_dispatch(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, char* msg);
int zxid_sp_soap_dispatch(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, struct zx_root_s* r);
int zxid_sp_soap_parse(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, int len, char* buf);

/* zxidmni */

int zxid_sp_mni_soap(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, struct zx_str* new_nym);
int zxid_sp_mni_redir(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, struct zx_str* new_nym);
struct zx_str* zxid_sp_mni_location(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, struct zx_str* new_nym);

struct zx_sp_ManageNameIDResponse_s* zxid_mni_do(struct zxid_conf* cf, struct zx_sp_ManageNameIDRequest_s* mni);
struct zx_str* zxid_mni_do_ss(struct zxid_conf* cf, struct zx_sp_ManageNameIDRequest_s* mni, struct zx_str* loc);

/* zxida7n */

struct zx_sa_Attribute_s* zxid_find_attribute(struct zx_sa_Assertion_s* a7n, int nfmt_len, char* nfmt, int name_len, char* name, int friendly_len, char* friendly, int n);

/* zxidmk */

struct zx_sp_AuthnRequest_s* zxid_mk_authn_req(struct zxid_conf* cf, struct zxid_cgi* cgi);
struct zx_sp_ArtifactResolve_s* zxid_mk_art_deref(struct zxid_conf* cf, struct zxid_entity* idp_meta, char* artifact);

struct zx_sp_Status_s* zxid_mk_Status(struct zxid_conf* cf, char* sc1, char* sc2, char* msg);
struct zx_sp_Status_s* zxid_OK(struct zxid_conf* cf);

struct zx_sp_LogoutRequest_s* zxid_mk_logout(struct zxid_conf* cf, struct zx_sa_NameID_s* nid, struct zx_str* ses_ix, struct zxid_entity* idp);
struct zx_sp_LogoutResponse_s* zxid_mk_logout_resp(struct zxid_conf* cf, struct zx_sp_Status_s* st, struct zx_str* req_id);
struct zx_sp_ManageNameIDRequest_s* zxid_mk_mni(struct zxid_conf* cf, struct zx_sa_NameID_s* nid, struct zx_str* new_nym, struct zxid_entity* idp);
struct zx_sp_ManageNameIDResponse_s* zxid_mk_mni_resp(struct zxid_conf* cf, struct zx_sp_Status_s* st, struct zx_str* req_id);

/* zxidmkwsf */

struct zx_di_Query_s* zxid_mk_di_query(struct zxid_conf* cf, char* svc_type);
struct zx_a_Address_s* zxid_mk_addr(struct zxid_conf* cf, struct zx_str* url);

struct zx_dap_Select_s* zxid_mk_dap_select(struct zxid_conf* cf, char* dn, char* filter, char* attributes, int deref_aliases, int scope, int sizelimit, int timelimit, int typesonly);
struct zx_dap_QueryItem_s* zxid_mk_dap_query_item(struct zxid_conf* cf, struct zx_dap_Select_s* sel, char* objtype, char* predef, char* sort, char* changed_since, int incl_common_attrs, int offset, int count, char* setreq, char* setid, char* contingent_itemidref);
struct zx_dap_TestOp_s* zxid_mk_dap_testop(struct zxid_conf* cf, char* dn, char* filter, char* attributes, int deref_aliases, int scope, int sizelimit, int timelimit, int typesonly);
struct zx_dap_TestItem_s* zxid_mk_dap_test_item(struct zxid_conf* cf, struct zx_dap_TestOp_s* top, char* objtype, char* predef);
struct zx_dap_ResultQuery_s* zxid_mk_dap_resquery(struct zxid_conf* cf, struct zx_dap_Select_s* sel, char* objtype, char* predef, char* sort, char* changed_since, int incl_common_attr, char* contingent_itemidref);
struct zx_dap_Subscription_s* zxid_mk_dap_subscription(struct zxid_conf* cf, char* subsID, char* itemidref, struct zx_dap_ResultQuery_s* rq, char* aggreg, char* trig, char* starts, char* expires, int incl_data, char* admin_notif, char* notify_ref);
struct zx_dap_Query_s* zxid_mk_dap_query(struct zxid_conf* cf, struct zx_dap_TestItem_s* tis, struct zx_dap_QueryItem_s* qis, struct zx_dap_Subscription_s* subs);

/* zxidwsc */

int zxid_map_sec_mech(struct zx_a_EndpointReference_s* epr);
struct zx_e_Envelope_s* zxid_wsc_call(struct zxid_conf* cf, struct zxid_ses* ses, struct zx_a_EndpointReference_s* epr, struct zx_e_Envelope_s* env);
struct zx_e_Envelope_s* zxid_new_envf(struct zxid_conf* cf, char* body_f, ...);
struct zx_e_Envelope_s* zxid_callf(struct zxid_conf* cf, struct zxid_ses* ses, char* svctype, char* body_f, ...);

#define ZXID_RESP_ENV(cf, tag, status_code, status_comment) zxid_new_envf((cf), "<%s><lu:Status code=\"%s\" comment=\"%s\"></lu:Status></%s>", (tag), (status_code), (status_comment), (tag))

#define ZXID_CHK_STATUS(env, field, abort_action) MB struct zx_str* ss; if (!(env)) abort_action; \
  if (!env->Body->field) { ERR("Body is missing " #field " element. %p", env); abort_action; } \
  if (!env->Body->field->Status) { ERR( #field " is missing Status. %p", env); abort_action; } \
  if (!env->Body->field->Status->code) { ERR( #field "->Status is missing code. %p", env); abort_action; } \
  if (!env->Body->field->Status->code->s) { ERR( #field "->Status->code empty. %p", env); abort_action; } \
  if (!memcmp(env->Body->field->Status->code->s, "OK", 2)) { \
       ss = env->Body->field->Status->comment; \
       D(#field ": Status OK (%.*s)", ss?ss->len:0, ss?ss->s:""); \
    } else { \
       ss = env->Body->field->Status->comment; \
       ERR("FAIL: " #field ": Status %.*s (%.*s)", \
         env->Body->field->Status->code->len, env->Body->field->Status->code->s, \
         ss?ss->len:0, ss?ss->s:""); \
      abort_action; \
    } \
  ME

/* zxidepr */

struct zx_a_EndpointReference_s* zxid_get_epr(struct zxid_conf* cf, struct zxid_ses* ses, char* svc, int n);
struct zx_a_EndpointReference_s* zxid_find_epr(struct zxid_conf* cf, struct zxid_ses* ses, char* svc, int n);
int zxid_cache_epr(struct zxid_conf* cf, struct zxid_ses* ses, struct zx_a_EndpointReference_s* epr);
void zxid_snarf_eprs_from_ses(struct zxid_conf* cf, struct zxid_ses* ses);

/* DAP scope constants are same as for LDAP, see RFC2251 */

#define ZXID_DAP_SCOPE_BASE    0  /* Only what is pointed to by DN, e.g. one entry. The default. */
#define ZXID_DAP_SCOPE_SINGLE  1  /* Single level of directory right under DN. */
#define ZXID_DAP_SCOPE_SUBTREE 2  /* Full subtree search under the DN. */

/* If CDC is not present, the user interface is always offered. */

#define ZXID_CDC_CHOICE_ALWAYS_FIRST 1  /* Do not offer UI, always pick first on CDC list. */
#define ZXID_CDC_CHOICE_ALWAYS_LAST  2  /* Do not offer UI, always pick last on CDC list. */
#define ZXID_CDC_CHOICE_ALWAYS_ONLY  3  /* If CDC has only one IdP, always pick it. */
#define ZXID_CDC_CHOICE_UI_PREF      4  /* Offer UI with the CDC designated IdPs first. */
#define ZXID_CDC_CHOICE_UI_NOPREF    5  /* Offer UI. Do not give preference to CDC IdPs. */
#define ZXID_CDC_CHOICE_UI_ONLY_CDC  6  /* Offer UI. If CDC was set, only show IdPs from CDC. Otherwise show all IdPs. */

#define ZXID_SAML2_ART   1
#define ZXID_SAML2_POST  2
#define ZXID_SAML2_PAOS  3
#define ZXID_SAML2_SOAP  4
#define ZXID_SAML2_POST_SIMPLE_SIGN  5
#define ZXID_SAML2_REDIR 6
#define ZXID_SAML2_URI   7

#define ZXID_SLO_SVC 1
#define ZXID_MNI_SVC 2

/* Broad categories of secmechs. Specific secmechs are mapped to these to abstract similarity. */

#define ZXID_SEC_MECH_NULL   0
#define ZXID_SEC_MECH_BEARER 1
#define ZXID_SEC_MECH_SAML   2
#define ZXID_SEC_MECH_X509   3
#define ZXID_SEC_MECH_PEERS  4

/* Common status codes: usually tested without comparison to constant, i.e.
 * return value of functions (which can only fail or succeed) is directly
 * used in conditional test. You will see base 0's and 1's in code.
 * Usually 1 means event was fully handled and no fall thru behaviour
 * is desired. 0 usually means the fal thru default should happen. */
#define ZXID_FAIL     0  /* Fall thru to default behaviour. */
#define ZXID_OK       1  /* Don't fall thru, event fully handled. */
#define ZXID_REDIR_OK 2  /* Don't fall thru, event fully handled. */
#define ZXID_SSO_OK   3  /* Special case for SSO completed situation. Use as switch case. */

#if 1
#define ZXID_TRUE  "1"
#define ZXID_FALSE "0"
#else
#define ZXID_TRUE  "true"
#define ZXID_FALSE "false"
#endif

/* Define this so it results CR (0xd) and LF (0xa) on your platform. N.B. \n is not always 0xa! */
#define CRLF "\015\012"
#define CRLF2 CRLF CRLF

extern char std_basis_64[64];
extern char safe_basis_64[64];
extern unsigned char zx_std_index_64[256];

char* base64_fancy_raw(char* p, int len, char* r,
		       char* basis_64, int line_len, int eol_len, char* eol, char eq_pad);
char* unbase64_raw(char* p, char* lim, char* r, unsigned char* index_64);
char* sha1_safe_base64(char* out_buf, int len, char* data);
char* zx_zlib_raw_deflate(struct zx_ctx* c, int in_len, char* in, int* out_len);
char* zx_zlib_raw_inflate(struct zx_ctx* c, int in_len, char* in, int* out_len);
int   zx_url_encode_len(int in_len, char* in);
char* zx_url_encode_raw(int in_len, char* in, char* out);
char* zx_url_encode(struct zx_ctx* c, int in_len, char* in, int* out_len);

int read_all(int maxlen, char* buf, const char* logkey, char* name_fmt, ...);
int name_from_path(char* buf, int buf_len, char* name_fmt, ...);
fdtype open_fd_from_path(int flags, int mode, char* logkey, char* name_fmt, ...);
int read_all_fd(fdtype fd, char* p, int want, int* got_all);
int write_all_fd(fdtype fd, char* p, int pending);
int write_all_path_fmt(char* logkey, int len, char* buf, char* path_fmt, char* prepath, char* postpath, char* data_fmt, ...);
int close_file(fdtype fd, const char* logkey);

struct zxid_curl_ctx {
  char* p;
  char* lim;
};

size_t zxid_curl_write_data(void *buffer, size_t size, size_t nmemb, void *userp);
size_t zxid_curl_read_data(void *buffer, size_t size, size_t nmemb, void *userp);

int zxid_version();
char* zxid_version_str();

#include <zx/zxidnoswig.h>

#endif
