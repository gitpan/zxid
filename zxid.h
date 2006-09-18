/* zxid.h  -  Definitions for zxid CGI
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing. See file COPYING.
 * $Id: zxid.h,v 1.16 2006/09/16 20:00:36 sampo Exp $
 *
 * 12.8.2006, created --Sampo
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

#include "c/saml2-data.h"
#include "c/saml2md-data.h"

struct zxid_conf {
  struct zx_ctx* ctx;
#ifdef USE_CURL
  CURL* curl;
#endif
#ifdef USE_OPENSSL
  X509* sign_cert;
  RSA*  sign_pkey;
  X509* enc_cert;
  RSA*  enc_pkey;
#endif
  struct zxid_entity* cot;  /* Metadata of CoT partners */
  int path_len;
  char* path;
  char* url;
  int   cdc_choice;
  char* cdc_url;
  char  md_fetch;
  char  md_populate_cache;
  char  md_cache_first;
  char  md_cache_last;
  char* authn_req_sign;
  char* want_sso_a7n_signed;
  char* affiliation;
  char* nice_name;    /* Human readable "nice" name. Used in AuthnReq->ProviderName */
  char* ses_arch_dir; /* Place where dead sessions go. 0=rm */
};

/* Query string, or post, is parsed into following structure. If a variable
 * is not present, it will be left as NULL. Note that this structure
 * mixes fields from all forms that ZXID might display or process. */

struct zxid_cgi {
  char  op;            /* What should be done now. */
  char  pr_ix;         /* Index to protocol profile (typically for login) */
  char  allow_create;  /* Whether federation is pemitted (allow creation of new federation) */
  char  ispassive;     /* Whether IdP is allowed to seize user interface (e.g. ask password) */
  char  force_authn;   /* Whether IdP SHOULD authenticate the user anew. */
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
  char* rs;            /* RelayState in redirect profile. */
  char* saml_art;      /* SAMLart=... artifact, as in artifact consumer URL. */
  char* saml_resp;     /* SAMLResponse=... in redirect profile */
  char* saml_req;      /* SAMLRequest=... in redirect profile */
  char* sigalg;        /* SigAlg=... in redirect profile */
  char* sig;           /* Signature=... in redirect profile */
  char* err;           /* When rendering screens: used to put error message to screen. */
  char* msg;           /* When rendering screens: used to put info message to screen. */
  char* dbg;           /* When rendering screens: used to put debug message to screen. */
};

/* Session is parsed into following structure. */

struct zxid_ses {
  char* sid;
  char* nid;
  struct zx_sa_Assertion_s* a7n;
  char* sesbuf;
};

/* Entity or Provider, as identified by an Entity ID or Provider ID. */

struct zxid_entity {
  struct zxid_entity* n;
  int eid_len;
  char* eid;
  char* sha1_name;
  struct zxmd_md_EntityDescriptor_s* ed;  /* Metadata */
};

/* zxidmeta */

struct zxid_entity* zxid_get_ent_from_file(struct zxid_conf* cf, char* sha1_name);
struct zxid_entity* zxid_get_ent_from_cache(struct zxid_conf* cf, struct zx_str_s* eid);
int zxid_write_ent_to_cache(struct zxid_conf* cf, struct zxid_entity* ent);
struct zxid_entity* zxid_parse_meta(struct zxid_conf* cf, char** md, char* lim);
struct zxid_entity* zxid_get_meta_ss(struct zxid_conf* cf, struct zx_str_s* url);
struct zxid_entity* zxid_get_meta(struct zxid_conf* cf, char* url);
struct zxid_entity* zxid_get_ent_ss(struct zxid_conf* cf, struct zx_str_s* eid);
struct zxid_entity* zxid_get_ent(struct zxid_conf* cf, char* eid);
struct zxid_entity* zxid_get_ent_by_succinct_id(struct zxid_conf* cf, char* raw_succinct_id);
struct zxid_entity* zxid_get_ent_by_sha1_name(struct zxid_conf* cf, char* sha1_name);
struct zxid_entity* zxid_load_cot_cache(struct zxid_conf* cf);

struct zxmd_md_KeyDescriptor_s* zxid_key_desc(struct zxid_conf* cf, char* use, X509* cert);
struct zxmd_md_SingleLogoutService_s* zxid_slo_desc(struct zxid_conf* cf, char* binding, char* loc, char* resp_loc);
struct zxmd_md_ManageNameIDService_s* zxid_nireg_desc(struct zxid_conf* cf, char* binding, char* loc, char* resp_loc);
struct zxmd_md_AssertionConsumerService_s* zxid_ac_desc(struct zxid_conf* cf, char* binding, char* loc, char* index);
struct zxmd_md_SPSSODescriptor_s* zxid_sp_sso_desc(struct zxid_conf* cf);
struct zx_str_s* zxid_sp_meta(struct zxid_conf* cf, struct zxid_cgi* cgi);
int zxid_send_sp_meta(struct zxid_conf* cf, struct zxid_cgi* cgi);
struct zx_str_s* zxid_my_entity_id(struct zxid_conf* cf);
struct zx_str_s* zxid_my_cdc_url(struct zxid_conf* cf);
struct zx_sa_Issuer_s* zxid_my_issuer(struct zxid_conf* cf);

/* zxidlib */

X509* zxid_read_cert(struct zxid_conf* cf, char* name);
RSA* zxid_read_private_key(struct zxid_conf* cf, char* name);
int zxid_set_opt(struct zxid_conf* cf, int which, int val);
void zxid_url_set(struct zxid_conf* cf, char* url);
int zxid_init_conf(struct zxid_conf* cf, char* conf_dir);
struct zxid_conf* zxid_new_conf(char* zxid_path);
int zxid_parse_cgi(struct zxid_cgi* cgi, char* qs);
struct zxid_cgi* zxid_new_cgi(struct zxid_conf* cf, char* qs);
struct zxid_ses* zxid_fetch_ses(struct zxid_conf* cf, char* sid);
int zxid_get_ses(struct zxid_conf* cf, struct zxid_ses* ses, char* sid);
int zxid_put_ses(struct zxid_conf* cf, struct zxid_ses* ses);
int zxid_del_ses(struct zxid_conf* cf, struct zxid_ses* ses);
int zxid_lecp_check(struct zxid_conf* cf, struct zxid_cgi* cgi);
int zxid_cdc_read(struct zxid_conf* cf, struct zxid_cgi* cgi);
int zxid_cdc_check(struct zxid_conf* cf, struct zxid_cgi* cgi);
struct zx_root_s* zxid_soap_call_body(struct zxid_conf* cf, struct zx_str_s* url, struct zx_se_Body_s* body);
int zxid_soap_cgi_resp_body(struct zxid_conf* cf, struct zx_se_Body_s* body);
struct zx_str_s* zxid_idp_loc_raw(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zx_sa_Issuer_s* Issuer, int svc_type, char* binding, int req);
struct zx_str_s* zxid_idp_loc(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, int svc_type, char* binding);
struct zx_root_s* zxid_idp_soap(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, int svc_type, struct zx_se_Body_s* body);
struct zx_str_s* zxid_saml2_redir_enc(struct zxid_conf* cf, struct zx_str_s* pay_load);
int zxid_saml2_redir(struct zxid_conf* cf, struct zx_str_s* loc, struct zx_str_s* rs);
struct zx_str_s* zxid_saml2_redir_url(struct zxid_conf* cf, struct zx_str_s* loc, struct zx_str_s* rs);
int zxid_saml_ok(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zx_sp_Status_s* st, char* what);

/* zxidsso */

int zxid_pick_sso_profile(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_entity* idp_met);
int zxid_start_sso(struct zxid_conf* cf, struct zxid_cgi* cgi);
struct zx_str_s* zxid_start_sso_url(struct zxid_conf* cf, struct zxid_cgi* cgi);
int zxid_sp_deref_art(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses);
int zxid_sp_sso_finalize(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, struct zx_sa_Assertion_s* a7n);

char* zxid_saml2_map_nid_fmt(char* f);
char* zxid_saml2_map_protocol_binding(char* b);
char* zxid_saml2_map_authn_ctx(char* c);

struct zx_str_s* zxid_date_time(struct zxid_conf* cf, time_t secs);
struct zx_str_s* zxid_mk_id(struct zxid_conf* cf, char* prefix, int bits);
struct zx_sa_Issuer_s* zxid_issuer(struct zxid_conf* cf, struct zx_str_s* nameid, struct zx_str_s* affiliation);

/* zxidslo */

int zxid_sp_slo_soap(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses);
int zxid_sp_slo_redir(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses);

int zxid_sp_nireg_soap(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, struct zx_str_s* new_nym);
int zxid_sp_nireg_redir(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, struct zx_str_s* new_nym);
int zxid_sp_dispatch(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, char* msg);
int zxid_sp_soap_dispatch(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, struct zx_root_s* r);

/* zxidmk */

struct zx_sp_AuthnRequest_s* zxid_mk_authn_req(struct zxid_conf* cf, struct zxid_cgi* cgi);
struct zx_sp_ArtifactResolve_s* zxid_mk_art_deref(struct zxid_conf* cf, struct zxid_entity* idp_meta, char* artifact);

struct zx_sp_Status_s* zxid_mk_Status(struct zxid_conf* cf, char* sc1, char* sc2, char* msg);
struct zx_sp_Status_s* zxid_OK(struct zxid_conf* cf);

struct zx_sp_LogoutRequest_s* zxid_mk_logout(struct zxid_conf* cf, struct zx_sa_NameID_s* nid, struct zx_str_s* ses_ix);
struct zx_sp_LogoutResponse_s* zxid_mk_logout_resp(struct zxid_conf* cf, struct zx_sp_Status_s* st, struct zx_str_s* req_id);
struct zx_sp_ManageNameIDRequest_s* zxid_mk_nireg(struct zxid_conf* cf, struct zx_sa_NameID_s* nid, struct zx_str_s* new_nym);
struct zx_sp_ManageNameIDResponse_s* zxid_mk_nireg_resp(struct zxid_conf* cf, struct zx_sp_Status_s* st, struct zx_str_s* req_id);

/* If CDC is not present, the user interface is always offered. */

#define ZXID_CDC_CHOICE_ALWAYS_FIRST 1  /* Do not offer UI, always pick first on CDC list. */
#define ZXID_CDC_CHOICE_ALWAYS_LAST  2  /* Do not offer UI, always pick last on CDC list. */
#define ZXID_CDC_CHOICE_ALWAYS_ONLY  3  /* If CDC has only one IdP, always pick it. */
#define ZXID_CDC_CHOICE_UI_PREF      4  /* Offer UI with the CDC designated IdPs first. */
#define ZXID_CDC_CHOICE_UI_NOPREF    5  /* Offer UI. Do not give preference to CDC IdPs. */

#define ZXID_SAML2_ART   1
#define ZXID_SAML2_POST  2
#define ZXID_SAML2_PAOS  3
#define ZXID_SAML2_SOAP  4
#define ZXID_SAML2_REDIR 5
#define ZXID_SAML2_URI   6

#define ZXID_SLO_SVC 1
#define ZXID_NIREG_SVC 2

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

/* Define this so it results CR (0xd) and LF (0xa) on your platform. */
#define CRLF "\r\n"
#define CRLF2 CRLF CRLF

extern char std_basis_64[64];
extern char safe_basis_64[64];
extern unsigned char zx_std_index_64[256];

char* base64_fancy_raw(char* p, int len, char* r,
		       char* basis_64, int line_len, int eol_len, char* eol, char eq_pad);
char* unbase64_raw(char* p, char* lim, char* r, char* index_64);
void sha1_safe_base64(char* out_buf, int len, char* data);
char* zx_zlib_raw_deflate(struct zx_ctx* c, int in_len, char* in, int* out_len);
char* zx_zlib_raw_inflate(struct zx_ctx* c, int in_len, char* in, int* out_len);
char* zx_url_encode(struct zx_ctx* c, int in_len, char* in, int* out_len);

int name_from_path(char* buf, int len, char* base, char* dir, char* name);
int open_fd_from_path(char* base, char* dir, char* name, int flags, int mode);
int read_all_fd(int fd, char* p, int want, int* got_all);
int write_all_fd(int fd, char* p, int pending);
int write_or_append_lock_c_path(char* c_path, char* data, int len, CU8* lk, int seeky, int flag);

struct zxid_curl_ctx {
  char* p;
  char* lim;
};

size_t zxid_curl_write_data(void *buffer, size_t size, size_t nmemb, void *userp);
size_t zxid_curl_read_data(void *buffer, size_t size, size_t nmemb, void *userp);

int zxid_version();
char* zxid_version_str();

#endif
