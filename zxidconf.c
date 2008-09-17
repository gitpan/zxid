/* zxidconf.c  -  Handwritten functions for parsing ZXID configuration file
 * Copyright (c) 2006-2008 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidconf.c,v 1.27 2008-09-17 02:39:21 sampo Exp $
 *
 * 12.8.2006, created --Sampo
 * 16.1.2007, split from zxidlib.c --Sampo
 * 27.3.2007, lazy reading of certificates --Sampo
 * 22.2.2008, added path_supplied feature --Sampo
 */

#include <memory.h>
#include <string.h>

#ifdef USE_OPENSSL
#include <openssl/rand.h>
#include <openssl/x509.h>
#include <openssl/rsa.h>
#endif
#ifdef USE_CURL
#include <curl/curl.h>
#endif

#include "errmac.h"
#include "zxid.h"
#include "zxidconf.h"

#define PEM_CERT_START_MAKER  "-----BEGIN CERTIFICATE-----"
#define PEM_CERT_END_MAKER    "-----END CERTIFICATE-----"
#define PEM_RSA_PRIVATE_KEY_START_MAKER  "-----BEGIN RSA PRIVATE KEY-----"
#define PEM_RSA_PRIVATE_KEY_END_MAKER    "-----END RSA PRIVATE KEY-----"
#define PEM_DSA_PRIVATE_KEY_START_MAKER  "-----BEGIN DSA PRIVATE KEY-----"
#define PEM_DSA_PRIVATE_KEY_END_MAKER    "-----END DSA PRIVATE KEY-----"

/* ============== Configuration ============== */
/* Eventually configuration will be read from some file, but for
 * now, we settle for compilation time configuration, see zxidconf.h */

#define ZXID_PEM_DIR "pem/"

#ifdef USE_OPENSSL
/* Called by:  zxid_init_conf */
void zxid_sha1_file(struct zxid_conf* cf, char* name, char* sha1)
{
  int gotall;
  char buf[4096];
  memset(sha1, 0, 20);
  gotall = read_all(sizeof(buf), buf, "sha1_file", "%s" ZXID_PEM_DIR "%s", cf->path, name);
  SHA1(buf, gotall, sha1);
}

/* Called by:  opt, test_mode, zxid_read_cert */
X509* zxid_extract_cert(char* buf, char* name)
{
  X509* x = 0;  /* Forces d2i_X509() to alloc the memory. */
  char* p;
  char* e;
  p = strstr(buf, PEM_CERT_START_MAKER);
  if (!p) {
    ERR("No certificate found in file(%s)\n", name);
    return 0;
  }
  p += sizeof(PEM_CERT_START_MAKER) - 1;
  if (*p == 0xd) ++p;
  if (*p != 0xa) return 0;
  ++p;
  
  e = strstr(buf, PEM_CERT_END_MAKER);
  if (!e) return 0;
  
  p = unbase64_raw(p, e, buf, zx_std_index_64);
  if (!d2i_X509(&x, (const unsigned char**)&buf, p-buf) || !x) {
    ERR("DER decoding of X509 certificate failed.\n%d", 0);
    return 0;
  }
  return x;
}

/* Called by:  opt, test_mode, zxid_read_private_key */
RSA* zxid_extract_private_key(char* buf, char* name)
{
  char* p;
  char* e;
  EVP_PKEY* pk = 0;  /* Forces d2i_PrivateKey() to alloc the memory. */
  RSA* rsa = 0;
  
  p = strstr(buf, PEM_RSA_PRIVATE_KEY_START_MAKER);
  if (!p) {
    ERR("No private key found in file(%s)\n", name);
    return 0;
  }
  p += sizeof(PEM_RSA_PRIVATE_KEY_START_MAKER) - 1;
  if (*p == 0xd) ++p;
  if (*p != 0xa) return 0;
  ++p;
  
  e = strstr(buf, PEM_RSA_PRIVATE_KEY_END_MAKER);
  if (!e) return 0;
  
  p = unbase64_raw(p, e, buf, zx_std_index_64);
  if (!d2i_PrivateKey(EVP_PKEY_RSA, &pk, (const unsigned char**)&buf, p-buf) || !pk) {
    ERR("DER decoding of private key failed.\n%d", 0);
    return 0;
  }
  rsa = EVP_PKEY_get1_RSA(pk);
  return rsa;
}

/* Called by:  zxid_init_conf x3 */
X509* zxid_read_cert(struct zxid_conf* cf, char* name)
{
  char buf[4096];
  read_all(sizeof(buf), buf, "read_cert", "%s" ZXID_PEM_DIR "%s", cf->path, name);
  return zxid_extract_cert(buf, name);
}

/* Called by:  zxid_init_conf x3 */
RSA* zxid_read_private_key(struct zxid_conf* cf, char* name)
{
  char buf[4096];
  read_all(sizeof(buf), buf, "read_private_key", "%s" ZXID_PEM_DIR "%s", cf->path, name);
  return zxid_extract_private_key(buf, name);
}
#endif

/* Called by:  zxid_fed_mgmt_cf, zxid_idp_list_cf, zxid_simple_cf */
int zxid_set_opt(struct zxid_conf* cf, int which, int val)
{
  switch (which) {
  case 1: zx_debug = val; return val;
  }
  return -1;
}

/* Called by: */
void zxid_url_set(struct zxid_conf* cf, char* url)
{
  if (!cf || !url) return;
  cf->url = url;
}

/* Called by:  zxid_init_conf_ctx */
int zxid_init_conf(struct zxid_conf* cf, char* zxid_path)
{
  DD("Initconf with path(%s)", zxid_path);
  cf->magic = ZXID_CONF_MAGIC;
  cf->path_len = zxid_path ? strlen(zxid_path) : 0;
  cf->path = ZX_ALLOC(cf->ctx, cf->path_len+1);
  memcpy(cf->path, zxid_path, cf->path_len);
  cf->path[cf->path_len] = 0;
  cf->nice_name = ZXID_NICE_NAME;
  cf->url = ZXID_URL;
  cf->non_standard_entityid = ZXID_NON_STANDARD_ENTITYID;
  cf->cdc_url = ZXID_CDC_URL;
  cf->cdc_choice = ZXID_CDC_CHOICE;
  cf->authn_req_sign = ZXID_AUTHN_REQ_SIGN;
  cf->want_sso_a7n_signed = ZXID_WANT_SSO_A7N_SIGNED;
  cf->sso_soap_sign = ZXID_SSO_SOAP_SIGN;
  cf->sso_soap_resp_sign = ZXID_SSO_SOAP_RESP_SIGN;
  cf->nameid_enc = ZXID_NAMEID_ENC;
#ifdef USE_OPENSSL
  if (zxid_path) {
#if 0
    /* DO NOT ENABLE! The certificates and keys are read "just in time" if and when needed. */
    cf->sign_cert = zxid_read_cert(cf, "sign-nopw-cert.pem");
    cf->sign_pkey = zxid_read_private_key(cf, "sign-nopw-cert.pem");
    cf->enc_cert = zxid_read_cert(cf, "enc-nopw-cert.pem");
    cf->enc_pkey = zxid_read_private_key(cf, "enc-nopw-cert.pem");
    cf->log_sign_pkey = zxid_read_private_key(cf, "logsign-nopw-cert.pem");
    cf->log_enc_cert = zxid_read_cert(cf, "logenc-nopw-cert.pem");
    zxid_sha1_file(cf, "logenc.key", cf->log_symkey);
#endif
  }
#else
  ERR("This copy of zxid was compiled to NOT use OpenSSL. Reading certificate and private key is not supported. Signing and signature verification are not supported either. Add -DUSE_OPENSSL and recompile. %d", 0);
#endif
  cf->md_fetch = ZXID_MD_FETCH;
  cf->md_populate_cache = ZXID_MD_POPULATE_CACHE;
  cf->md_cache_first = ZXID_MD_CACHE_FIRST;
  cf->md_cache_last = ZXID_MD_CACHE_LAST;
  cf->ses_arch_dir = ZXID_SES_ARCH_DIR;
  cf->ses_cookie_name = ZXID_SES_COOKIE_NAME;
  cf->user_local = ZXID_USER_LOCAL;

  cf->log_level = ZXLOG_LEVEL;
  cf->log_err = ZXLOG_ERR;      /* Log enables and signing and encryption flags (if USE_OPENSSL) */
  cf->log_act = ZXLOG_ACT;
  cf->log_issue_a7n  = ZXLOG_ISSUE_A7N;
  cf->log_issue_msg  = ZXLOG_ISSUE_MSG;
  cf->log_rely_a7n   = ZXLOG_RELY_A7N;
  cf->log_rely_msg   = ZXLOG_RELY_MSG;
  cf->log_err_in_act = ZXLOG_ERR_IN_ACT;
  cf->log_sigfail_is_err = ZXLOG_SIGFAIL_IS_ERR;

  cf->sig_fatal      = ZXID_SIG_FATAL;
  cf->nosig_fatal    = ZXID_NOSIG_FATAL;
  cf->timeout_fatal  = ZXID_TIMEOUT_FATAL;
  cf->audience_fatal = ZXID_AUDIENCE_FATAL;
  cf->dup_a7n_fatal  = ZXID_DUP_A7N_FATAL;
  cf->dup_msg_fatal  = ZXID_DUP_MSG_FATAL;

  cf->before_slop    = ZXID_BEFORE_SLOP;
  cf->after_slop     = ZXID_AFTER_SLOP;
  cf->timeskew       = ZXID_TIMESKEW;

  cf->redir_to_content  = ZXID_REDIR_TO_CONTENT;
  cf->max_soap_retry    = ZXID_MAX_SOAP_RETRY;
  cf->mod_saml_attr_prefix = ZXID_MOD_SAML_ATTR_PREFIX;
  cf->idp_sel_start     = ZXID_IDP_SEL_START;
  cf->idp_sel_new_idp   = ZXID_IDP_SEL_NEW_IDP;
  cf->idp_sel_our_eid   = ZXID_IDP_SEL_OUR_EID;
  cf->idp_sel_tech_user = ZXID_IDP_SEL_TECH_USER;
  cf->idp_sel_tech_site = ZXID_IDP_SEL_TECH_SITE;
  cf->idp_sel_footer    = ZXID_IDP_SEL_FOOTER;
  cf->idp_sel_end       = ZXID_IDP_SEL_END;
  
  cf->mgmt_start     = ZXID_MGMT_START;
  cf->mgmt_logout    = ZXID_MGMT_LOGOUT;
  cf->mgmt_defed     = ZXID_MGMT_DEFED;
  cf->mgmt_footer    = ZXID_MGMT_FOOTER;
  cf->mgmt_end       = ZXID_MGMT_END;

#if 0
  D("path(%.*s) cf->magic=%x", cf->path_len, cf->path, cf->magic);
#else
  fprintf(stderr, "t %9s:%-3d %-16s %s d " "path(%.*s) cf->magic=%x" "\n",
	  __FILE__, __LINE__, __FUNCTION__, ERRMAC_INSTANCE, cf->path_len, cf->path, cf->magic);
  fflush(stderr);
#endif
  return 0;
}

void zx_reset_ctx(struct zx_ctx* ctx)
{
  memset(ctx, 0, sizeof(struct zx_ctx));
  ctx->guard_seen_n.seen_n = &ctx->guard_seen_p;
  ctx->guard_seen_p.seen_p = &ctx->guard_seen_n;
  ctx->malloc_func = &malloc;
  ctx->realloc_func = &realloc;
  ctx->free_func = &free;
}

struct zx_ctx* zx_init_ctx()
{
  struct zx_ctx* ctx;
  ctx = malloc(sizeof(struct zx_ctx));
  if (!ctx) {
    ERR("out-of-memory in ctx alloc sizeof=%d", sizeof(struct zx_ctx));
    return 0;
  }
  zx_reset_ctx(ctx);
  return ctx;
}

/* If zxid_path is supplied as NULL, then a minimal initialization of
 * the context is performed. Certificate and key operations as well as
 * CURL initialization are omitted. However the zx_ctx is installed so
 * that memory allocation against the context should work. */

/* Called by:  zxid_conf_to_cf_len, zxid_new_conf */
struct zxid_conf* zxid_init_conf_ctx(struct zxid_conf* cf, char* zxid_path)
{
#if 0
  fprintf(stderr, "Waiting 60 secs for gdb attach...\n");
  sleep(60);
#endif
  cf->ctx = zx_init_ctx();
  if (!cf->ctx)
    return 0;
  zxid_init_conf(cf, zxid_path);
#ifdef USE_CURL
  if (zxid_path) {
    cf->curl = curl_easy_init();
    if (!cf->curl) {
      ERR("Failed to initialize libcurl %d",0);
      exit(2);
    }
  }
#endif
  return cf;
}

/* Called by:  main x3, test_mode */
struct zxid_conf* zxid_new_conf(char* zxid_path)
{
  /* *** unholy malloc()s: should use our own allocator! */
  struct zxid_conf* cf = malloc(sizeof(struct zxid_conf));
  if (!cf) {
    ERR("out-of-memory %d", sizeof(struct zxid_conf));
    exit(1);
  }
  return zxid_init_conf_ctx(cf, zxid_path);
}
/* ======================= CONF PARSING ======================== */
/* Parse partial configuration specifications, such as may occur
 * on command line or in a configuration file. Generally you should
 * call first zxid_new_conf(), or at least zxid_init_conf(), and
 * then call this function to apply modifications over the defaults.
 * The configuration options are named after the config options
 * that appear in zxidconf.h, except that prefix ZXID_ is removed.
 *
 * N.B. The qs memory must come from static or permanently allocated
 * source as direct pointers to inside it will be taken. The memory
 * will be modified to add nul terminations. Do not use stack based
 * memory like local variable (unless local of main()).
 * Do consider strdup() or similar before calling this function. */

#if defined(ZXID_CONF_FILE) || defined(ZXID_CONF_FLAG)

#define SCAN_INT(v, lval) sscanf(v, "%i", &i); lval = i

/* Called by:  zxid_conf_to_cf_len x3, zxid_parse_conf */
int zxid_parse_conf_raw(struct zxid_conf* cf, int qs_len, char* qs)
{
  int i;
  char *p, *n, *v, *val, *name;
  if (qs_len != -1 && qs[qs_len]) {  /* *** access one past end of buffer */
    ERR("LIMITATION: The configuration strings MUST be nul terminated (even when length is supplied explicitly). qs_len=%d qs(%.*s)", qs_len, qs_len, qs);
    return -1;
  }
  while (*qs) {
    for (; ONE_OF_5(*qs, '&', ' ', '\t', '\r', '\n'); ++qs) ; /* Skip over & or &&, or line end */
    if (!*qs) break;
    if (*qs == '#')
      goto scan_end;
    
    for (name = qs; *qs && *qs != '='; ++qs) ;  /* Scan name (until '=') */
    if (!*qs) break;                            /* No = ever found and at EOF. No value avail. */
    if (qs == name) {                           /* Key was an empty string: skip it */
scan_end:
      for (; *qs && !ONE_OF_3(*qs, '&', '\r', '\n'); ++qs) ;  /* Scan value (until '&') */
      continue;
    }
    n = p = name;
    URL_DECODE(name, p, qs);
    *p = 0;
    
    for (val = ++qs; *qs && !ONE_OF_3(*qs, '&', '\r', '\n'); ++qs) ; /* Skip over = and scan val */
    v = p = val;
    URL_DECODE(val, p, qs);
    if (*qs)
      ++qs;
    *p = 0;
    
    switch (n[0]) {
    case 'A':  /* AUTHN_REQ_SIGN, ACT, AUDIENCE_FATAL, AFTER_SLOP */
      if (!strcmp(n, "AUTHN_REQ_SIGN")) { SCAN_INT(v, cf->authn_req_sign); break; }
      if (!strcmp(n, "ACT"))            { SCAN_INT(v, cf->log_act); break; }
      if (!strcmp(n, "AUDIENCE_FATAL")) { SCAN_INT(v, cf->audience_fatal); break; }
      if (!strcmp(n, "AFTER_SLOP"))     { SCAN_INT(v, cf->after_slop); break; }
      goto badcf;
    case 'B':  /* BEFORE_SLOP */
      if (!strcmp(n, "BEFORE_SLOP")) { SCAN_INT(v, cf->before_slop); break; }
      goto badcf;
    case 'C':  /* CDC_URL, CDC_CHOICE */
      if (!strcmp(n, "CDC_URL"))     { cf->cdc_url = v; break; }
      if (!strcmp(n, "CDC_CHOICE"))  { SCAN_INT(v, cf->cdc_choice); break; }
      goto badcf;
    case 'D':  /* DUP_A7N_FATAL, DUP_MSG_FATAL */
      if (!strcmp(n, "DEFAULTQS"))      { cf->defaultqs = v; break; }
      if (!strcmp(n, "DUP_A7N_FATAL"))  { SCAN_INT(v, cf->dup_a7n_fatal); break; }
      if (!strcmp(n, "DUP_MSG_FATAL"))  { SCAN_INT(v, cf->dup_msg_fatal); break; }
      goto badcf;
    case 'E':  /* ERR, ERR_IN_ACT */
      if (!strcmp(n, "ERR"))         { SCAN_INT(v, cf->log_err); break; }
      if (!strcmp(n, "ERR_IN_ACT"))  { SCAN_INT(v, cf->log_err_in_act); break; }
      goto badcf;
    case 'I':  /* ISSUE_A7N, ISSUE_MSG */
      if (!strcmp(n, "ISSUE_A7N"))   { SCAN_INT(v, cf->log_issue_a7n); break; }
      if (!strcmp(n, "ISSUE_MSG"))   { SCAN_INT(v, cf->log_issue_msg); break; }
      if (!strcmp(n, "IDP_SEL_START"))   { cf->idp_sel_start = v; break; }
      if (!strcmp(n, "IDP_SEL_NEW_IDP")) { cf->idp_sel_new_idp = v; break; }
      if (!strcmp(n, "IDP_SEL_OUR_EID")) { cf->idp_sel_our_eid = v; break; }
      if (!strcmp(n, "IDP_SEL_TECH_USER")) { cf->idp_sel_tech_user =v; break; }
      if (!strcmp(n, "IDP_SEL_TECH_SITE")) { cf->idp_sel_tech_site =v; break; }
      if (!strcmp(n, "IDP_SEL_FOOTER"))  { cf->idp_sel_footer = v; break; }
      if (!strcmp(n, "IDP_SEL_END"))     { cf->idp_sel_end = v; break; }
      goto badcf;
    case 'L':  /* LEVEL (log level) */
      if (!strcmp(n, "LEVEL"))   { SCAN_INT(v, cf->log_level); break; }
      goto badcf;
    case 'M':  /* MD_FETCH, MD_POPULATE_CACHE, MD_CACHE_FIRST, MD_CACHE_LAST */
      if (!strcmp(n, "MD_FETCH"))          { SCAN_INT(v, cf->md_fetch); break; }
      if (!strcmp(n, "MD_POPULATE_CACHE")) { SCAN_INT(v, cf->md_populate_cache); break; }
      if (!strcmp(n, "MD_CACHE_FIRST"))    { SCAN_INT(v, cf->md_cache_first); break; }
      if (!strcmp(n, "MD_CACHE_LAST"))     { SCAN_INT(v, cf->md_cache_last); break; }
      if (!strcmp(n, "MGMT_START"))   { cf->mgmt_start = v; break; }
      if (!strcmp(n, "MGMT_LOGOUT"))  { cf->mgmt_logout = v; break; }
      if (!strcmp(n, "MGMT_DEFED"))   { cf->mgmt_defed = v; break; }
      if (!strcmp(n, "MGMT_FOOTER"))  { cf->mgmt_footer = v; break; }
      if (!strcmp(n, "MGMT_END"))     { cf->mgmt_end = v; break; }
      if (!strcmp(n, "MAX_SOAP_RETRY"))    { SCAN_INT(v, cf->max_soap_retry); break; }
      if (!strcmp(n, "MOD_SAML_ATTR_PREFIX"))  { cf->mod_saml_attr_prefix = v; break; }

      goto badcf;
    case 'N':  /* NAMEID_ENC, NICE_NAME, NOSIG_FATAL */
      if (!strcmp(n, "NAMEID_ENC"))     { SCAN_INT(v, cf->nameid_enc); break; }
      if (!strcmp(n, "NICE_NAME"))      { cf->nice_name = v; break; }
      if (!strcmp(n, "NON_STANDARD_ENTITYID")) { cf->non_standard_entityid = v; break; }
      if (!strcmp(n, "NOSIG_FATAL"))    { SCAN_INT(v, cf->nosig_fatal); break; }
      goto badcf;
    case 'P':  /* PATH (e.g. /var/zxid) */
      if (!strcmp(n, "PATH"))           { cf->path = v; cf->path_len = strlen(v);
                                          ++cf->path_supplied; break; }
      goto badcf;
    case 'R':  /* RELY_A7N, RELY_MSG */
      if (!strcmp(n, "REDIR_TO_CONTENT")) { SCAN_INT(v, cf->redir_to_content); break; }
      if (!strcmp(n, "RELY_A7N"))       { SCAN_INT(v, cf->log_rely_a7n); break; }
      if (!strcmp(n, "RELY_MSG"))       { SCAN_INT(v, cf->log_rely_msg); break; }
      goto badcf;
    case 'S':  /* SES_ARCH_DIR, SIGFAIL_IS_ERR, SIG_FATAL */
      if (!strcmp(n, "SES_ARCH_DIR"))   { cf->ses_arch_dir = (v[0]=='0' && !v[1]) ? 0 : v; break; }
      if (!strcmp(n, "SES_COOKIE_NAME")) { cf->ses_cookie_name = (v[0]=='0' && !v[1]) ? 0 : v; break; }
      if (!strcmp(n, "SIGFAIL_IS_ERR")) { SCAN_INT(v, cf->log_sigfail_is_err); break; }
      if (!strcmp(n, "SIG_FATAL"))      { SCAN_INT(v, cf->sig_fatal); break; }
      if (!strcmp(n, "SSO_SOAP_SIGN"))  { SCAN_INT(v, cf->sso_soap_sign); break; }
      if (!strcmp(n, "SSO_SOAP_RESP_SIGN"))  { SCAN_INT(v, cf->sso_soap_resp_sign); break; }
      goto badcf;
    case 'T':  /* TIMEOUT_FATAL */
      if (!strcmp(n, "TIMEOUT_FATAL"))  { SCAN_INT(v, cf->timeout_fatal); break; }
      if (!strcmp(n, "TIMESKEW"))       { SCAN_INT(v, cf->timeskew); break; }
      goto badcf;
    case 'U':  /* URL, USER_LOCAL */
      if (!strcmp(n, "URL"))            { cf->url = v; break; }
      if (!strcmp(n, "USER_LOCAL"))     { SCAN_INT(v, cf->user_local); break; }
      goto badcf;
    case 'W':  /* WANT_SSO_A7N_SIGNED */
      if (!strcmp(n, "WANT_SSO_A7N_SIGNED")) { SCAN_INT(v, cf->want_sso_a7n_signed); break; }
      goto badcf;
    default:
    badcf:
      ERR("Unknown config option(%s) val(%s), ignored.", n, v);
      zxlog(cf, 0, 0, 0, 0, 0, 0, 0, "N", "S", "BADCF", n, 0);
    }
  }
  return 0;
}

/* Called by:  opt x3 */
int zxid_parse_conf(struct zxid_conf* cf, char* qs)
{
  if (!cf || !qs)
    return -1;
  return zxid_parse_conf_raw(cf, strlen(qs), qs);
}

#endif

/* EOF  --  zxidconf.c */
