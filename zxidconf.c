/* zxidconf.c  -  Handwritten functions for parsing ZXID configuration file
 * Copyright (c) 2006-2009 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidconf.c,v 1.46 2009-10-16 13:36:33 sampo Exp $
 *
 * 12.8.2006, created --Sampo
 * 16.1.2007, split from zxidlib.c --Sampo
 * 27.3.2007, lazy reading of certificates --Sampo
 * 22.2.2008, added path_supplied feature --Sampo
 * 7.10.2008, added documentation --Sampo
 * 29.8.2009, added Auto-Cert feature a.k.a. zxid_mk_self_signed_cert() --Sampo
 * 4.9.2009,  added NEED, WANT, INMAP, PEPMAP, OUTMAP, and ATTRSRC --Sampo
 */

#include <memory.h>
#include <string.h>
#ifdef USE_CURL
#include <curl/curl.h>
#endif

#include "errmac.h"
#include "zxid.h"
#include "zxidconf.h"

/* ============== Configuration ============== */
/* Eventually configuration will be read from some file, but for
 * now, we settle for compilation time configuration, see zxidconf.h */

#ifdef USE_OPENSSL

#include <openssl/rand.h>
#include <openssl/x509.h>
#include <openssl/rsa.h>

#if 0
/*(-) Compute raw SHA1 digest hash over contents of a file.
 *
 * cf:: ZXID configuration object, used for deteminin path prefix and for memory allocation
 * name:: Name of the file (under hierarchy defined by PATH configuration option)
 * sha1:: A sha1 buffer which should be exactly 20 bytes (160 bits) long. The
 *     buffer will be modified in place by this function. */

/* Called by:  zxid_init_conf, zxlog_write_line */
void zxid_sha1_file(struct zxid_conf* cf, char* name, char* sha1)
{
  int gotall;
  char buf[4096];
  memset(sha1, 0, 20);
  gotall = read_all(sizeof(buf), buf, "sha1_file", "%s%s", cf->path, name);
  SHA1(buf, gotall, sha1);
}
#endif

/*() Extract a certificate from PEM encoded string. */

/* Called by:  opt, test_mode, zxid_read_cert */
X509* zxid_extract_cert(char* buf, char* name)
{
  X509* x = 0;  /* Forces d2i_X509() to alloc the memory. */
  char* p;
  char* e;
  p = strstr(buf, PEM_CERT_START);
  if (!p) {
    ERR("No certificate found in file(%s)\n", name);
    return 0;
  }
  p += sizeof(PEM_CERT_START) - 1;
  if (*p == 0xd) ++p;
  if (*p != 0xa) return 0;
  ++p;
  
  e = strstr(buf, PEM_CERT_END);
  if (!e) return 0;
  
  p = unbase64_raw(p, e, buf, zx_std_index_64);
  if (!d2i_X509(&x, (const unsigned char**)&buf, p-buf) || !x) {
    ERR("DER decoding of X509 certificate failed.\n%d", 0);
    return 0;
  }
  return x;
}

/*() Extract a private key from PEM encoded string. */

/* Called by:  opt, test_mode, zxid_read_private_key */
RSA* zxid_extract_private_key(char* buf, char* name)
{
  char* p;
  char* e;
  EVP_PKEY* pk = 0;  /* Forces d2i_PrivateKey() to alloc the memory. */
  RSA* rsa = 0;
  
  p = strstr(buf, PEM_RSA_PRIV_KEY_START);
  if (!p) {
    ERR("No private key found in file(%s)\n", name);
    return 0;
  }
  p += sizeof(PEM_RSA_PRIV_KEY_START) - 1;
  if (*p == 0xd) ++p;
  if (*p != 0xa) return 0;
  ++p;
  
  e = strstr(buf, PEM_RSA_PRIV_KEY_END);
  if (!e) return 0;
  
  p = unbase64_raw(p, e, buf, zx_std_index_64);
  if (!d2i_PrivateKey(EVP_PKEY_RSA, &pk, (const unsigned char**)&buf, p-buf) || !pk) {
    ERR("DER decoding of private key failed.\n%d", 0);
    return 0;
  }
  rsa = EVP_PKEY_get1_RSA(pk);
  return rsa;
}

/*() Extract a certificate from PEM encoded file. */

/* Called by:  zxid_anoint_sso_a7n, zxid_anoint_sso_resp, zxid_idp_soap_dispatch x2, zxid_idp_sso, zxid_idp_sso_desc x2, zxid_init_conf x3, zxid_mk_art_deref, zxid_sp_mni_soap, zxid_sp_slo_soap, zxid_sp_soap_dispatch x2, zxid_sp_sso_desc x2, zxlog_write_line */
X509* zxid_read_cert(struct zxid_conf* cf, char* name)
{
  char buf[4096];
  int got = read_all(sizeof(buf), buf, "read_cert", "%s" ZXID_PEM_DIR "%s", cf->path, name);
  if (!got && cf->auto_cert)
     zxid_mk_self_sig_cert(cf, sizeof(buf), buf, "read_cert", name);
  return zxid_extract_cert(buf, name);
}

/*() Extract a private key from PEM encoded file. */

/* Called by:  test_ibm_cert_problem x2, test_ibm_cert_problem_enc_dec x2, zxenc_privkey_dec, zxid_anoint_sso_a7n, zxid_anoint_sso_resp, zxid_idp_soap_dispatch x2, zxid_idp_sso, zxid_init_conf x3, zxid_mk_art_deref, zxid_saml2_post_enc, zxid_saml2_redir_enc, zxid_sp_mni_soap, zxid_sp_slo_soap, zxid_sp_soap_dispatch x2, zxlog_write_line x2 */
RSA* zxid_read_private_key(struct zxid_conf* cf, char* name)
{
  char buf[4096];
  int got = read_all(sizeof(buf), buf, "read_private_key", "%s" ZXID_PEM_DIR "%s", cf->path, name);
  if (!got && cf->auto_cert)
     zxid_mk_self_sig_cert(cf, sizeof(buf), buf, "read_private_key", name);
  return zxid_extract_private_key(buf, name);
}

#endif

/*() Set obscure options of ZX and ZXID layers. Used to set debug options.
 * Generally setting these options is not supported, but this function
 * exists to avoid uncontrolled access to global variables. At least this
 * way the unsupported activity will happen in one controlled place where
 * it can be ignored, if need to be. You have been warned. */

/* Called by:  zxid_an_page_cf, zxid_fed_mgmt_cf, zxid_idp_list_cf_cgi, zxid_simple_cf */
int zxid_set_opt(struct zxid_conf* cf, int which, int val)
{
  switch (which) {
  case 1: zx_debug = val; return val;
  }
  return -1;
}

/*() Set the URL configuration variable. Usually you would use zxid_parse_conf()
 * to manipulate this and some other options. This function exists for some
 * special cases encountered in scripting language bindings. */

/* Called by: */
void zxid_url_set(struct zxid_conf* cf, char* url)
{
  if (!cf || !url) return;
  cf->url = url;
}

/*(i) Initialize configuration object, which must have already been
 * allocated, to factory defaults (i.e. compiled in defaults, see
 * zxidconf.h).
 *
 * cf:: Pointer to previously allocated configuration object
 * path:: Since this configuration option is so fundamental, it can
 *     be supplied directly as argument.
 * return:: 0 on success (currently, 2008, this function can not
 *     fail - thus it is common to ignore the return value)
 *
 * N.B. This function does NOT initialize the ZX context object although
 * it is a field of this object. You MUST separately initialize
 * the ZX context object, e.g. using zx_reset_ctx() or zx_init_ctx(),
 * before you can use ZXID configuration object in any memory allocation prone
 * activity (which is nearly every function in this API).
 */

/* Called by:  zxid_conf_to_cf_len, zxid_init_conf_ctx */
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
  cf->redirect_hack_imposed_url = ZXID_REDIRECT_HACK_IMPOSED_URL;
  cf->redirect_hack_zxid_url = ZXID_REDIRECT_HACK_ZXID_URL;
  cf->cdc_url = ZXID_CDC_URL;
  cf->cdc_choice = ZXID_CDC_CHOICE;
  cf->authn_req_sign = ZXID_AUTHN_REQ_SIGN;
  cf->want_sso_a7n_signed = ZXID_WANT_SSO_A7N_SIGNED;
  cf->want_authn_req_signed = ZXID_WANT_AUTHN_REQ_SIGNED;
  cf->sso_soap_sign = ZXID_SSO_SOAP_SIGN;
  cf->sso_soap_resp_sign = ZXID_SSO_SOAP_RESP_SIGN;
  cf->sso_sign     = ZXID_SSO_SIGN;
  cf->nameid_enc   = ZXID_NAMEID_ENC;
  cf->post_a7n_enc = ZXID_POST_A7N_ENC;
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
    zxid_sha1_file(cf, "pem/logenc.key", cf->log_symkey);
#endif
  }
#else
  ERR("This copy of zxid was compiled to NOT use OpenSSL. Reading certificate and private key is not supported. Signing and signature verification are not supported either. Add -DUSE_OPENSSL and recompile. %d", 0);
#endif
  cf->md_fetch = ZXID_MD_FETCH;
  cf->md_populate_cache = ZXID_MD_POPULATE_CACHE;
  cf->md_cache_first    = ZXID_MD_CACHE_FIRST;
  cf->md_cache_last     = ZXID_MD_CACHE_LAST;
  cf->auto_cert         = ZXID_AUTO_CERT;
  cf->ses_arch_dir      = ZXID_SES_ARCH_DIR;
  cf->ses_cookie_name   = ZXID_SES_COOKIE_NAME;
  cf->user_local        = ZXID_USER_LOCAL;
  cf->idp_ena           = ZXID_IDP_ENA;
  cf->pdp_ena           = ZXID_PDP_ENA;

  cf->log_level = ZXLOG_LEVEL;
  cf->log_err = ZXLOG_ERR;      /* Log enables and signing and encryption flags (if USE_OPENSSL) */
  cf->log_act = ZXLOG_ACT;
  cf->log_issue_a7n  = ZXLOG_ISSUE_A7N;
  cf->log_issue_msg  = ZXLOG_ISSUE_MSG;
  cf->log_rely_a7n   = ZXLOG_RELY_A7N;
  cf->log_rely_msg   = ZXLOG_RELY_MSG;
  cf->log_err_in_act = ZXLOG_ERR_IN_ACT;
  cf->log_act_in_err = ZXLOG_ACT_IN_ERR;
  cf->log_sigfail_is_err = ZXLOG_SIGFAIL_IS_ERR;

  cf->sig_fatal      = ZXID_SIG_FATAL;
  cf->nosig_fatal    = ZXID_NOSIG_FATAL;
  cf->msg_sig_ok     = ZXID_MSG_SIG_OK;
  cf->timeout_fatal  = ZXID_TIMEOUT_FATAL;
  cf->audience_fatal = ZXID_AUDIENCE_FATAL;
  cf->dup_a7n_fatal  = ZXID_DUP_A7N_FATAL;
  cf->dup_msg_fatal  = ZXID_DUP_MSG_FATAL;
  cf->anon_ok        = ZXID_ANON_OK;
  cf->required_authnctx = ZXID_REQUIRED_AUTHNCTX;
  cf->issue_authnctx_pw = ZXID_ISSUE_AUTHNCTX_PW;
  cf->idp_pref_acs_binding = ZXID_IDP_PREF_ACS_BINDING;

  cf->before_slop    = ZXID_BEFORE_SLOP;
  cf->after_slop     = ZXID_AFTER_SLOP;
  cf->timeskew       = ZXID_TIMESKEW;
  cf->a7nttl         = ZXID_A7NTTL;
  cf->pdp_url        = ZXID_PDP_URL;
  cf->pdp_call_url   = ZXID_PDP_CALL_URL;

  cf->need           = zxid_load_need(cf, 0, ZXID_NEED);
  cf->want           = zxid_load_need(cf, 0, ZXID_WANT);
  cf->attrsrc        = zxid_load_atsrc(cf, 0, ZXID_ATTRSRC);
  cf->inmap          = zxid_load_map(cf, 0, ZXID_INMAP);
  cf->outmap         = zxid_load_map(cf, 0, ZXID_OUTMAP);
  cf->pepmap         = zxid_load_map(cf, 0, ZXID_PEPMAP);

  cf->localpdp_role_permit   = zxid_load_cstr_list(cf, 0, ZXID_LOCALPDP_ROLE_PERMIT);
  cf->localpdp_role_deny     = zxid_load_cstr_list(cf, 0, ZXID_LOCALPDP_ROLE_DENY);
  cf->localpdp_idpnid_permit = zxid_load_cstr_list(cf, 0, ZXID_LOCALPDP_IDPNID_PERMIT);
  cf->localpdp_idpnid_deny   = zxid_load_cstr_list(cf, 0, ZXID_LOCALPDP_IDPNID_DENY);

  cf->redir_to_content  = ZXID_REDIR_TO_CONTENT;
  cf->remote_user_ena   = ZXID_REMOTE_USER_ENA;
  cf->max_soap_retry    = ZXID_MAX_SOAP_RETRY;
  cf->mod_saml_attr_prefix = ZXID_MOD_SAML_ATTR_PREFIX;

  cf->idp_sel_page      = ZXID_IDP_SEL_PAGE;
  cf->idp_sel_start     = ZXID_IDP_SEL_START;
  cf->idp_sel_new_idp   = ZXID_IDP_SEL_NEW_IDP;
  cf->idp_sel_our_eid   = ZXID_IDP_SEL_OUR_EID;
  cf->idp_sel_tech_user = ZXID_IDP_SEL_TECH_USER;
  cf->idp_sel_tech_site = ZXID_IDP_SEL_TECH_SITE;
  cf->idp_sel_footer    = ZXID_IDP_SEL_FOOTER;
  cf->idp_sel_end       = ZXID_IDP_SEL_END;

  cf->an_page           = ZXID_AN_PAGE;
  cf->an_start          = ZXID_AN_START;
  cf->an_our_eid        = ZXID_AN_OUR_EID;
  cf->an_tech_user      = ZXID_AN_TECH_USER;
  cf->an_tech_site      = ZXID_AN_TECH_SITE;
  cf->an_footer         = ZXID_AN_FOOTER;
  cf->an_end            = ZXID_AN_END;
  
  cf->mgmt_start        = ZXID_MGMT_START;
  cf->mgmt_logout       = ZXID_MGMT_LOGOUT;
  cf->mgmt_defed        = ZXID_MGMT_DEFED;
  cf->mgmt_footer       = ZXID_MGMT_FOOTER;
  cf->mgmt_end          = ZXID_MGMT_END;

#if 1
  DD("path(%.*s) cf->magic=%x", cf->path_len, cf->path, cf->magic);
#else
  fprintf(stderr, "t %9s:%-3d %-16s %s d " "path(%.*s) cf->magic=%x" "\n",
	  __FILE__, __LINE__, __FUNCTION__, ERRMAC_INSTANCE, cf->path_len, cf->path, cf->magic);
  fflush(stderr);
#endif
  return 0;
}

/*() Reset the seen doubly linked list to empty and initialize memory
 * allocation related function pointers to system malloc(3). Without
 * such initialization, any meomory allocation activity as well as
 * any XML parsing activity is doomed to segmentation fault. */

/* Called by:  dirconf, main x2, zx_init_ctx, zxid_simple_len */
void zx_reset_ctx(struct zx_ctx* ctx)
{
  memset(ctx, 0, sizeof(struct zx_ctx));
  ctx->guard_seen_n.seen_n = &ctx->guard_seen_p;
  ctx->guard_seen_p.seen_p = &ctx->guard_seen_n;
  ctx->malloc_func = &malloc;
  ctx->realloc_func = &realloc;
  ctx->free_func = &free;
}

/*() Allocate new ZX object and initialize it in standard
 * way, i.e. use malloc(3) for memory allocation. */

/* Called by:  zxid_conf_to_cf_len, zxid_init_conf_ctx */
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

/*() If zxid_path is supplied as NULL, then a minimal initialization of
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

/* Called by:  main x5, test_ibm_cert_problem, test_ibm_cert_problem_enc_dec, test_mode */
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

/* ================== Attribute Broker Config ================*/

#define IS_RULE(rule, val) (!memcmp((rule), (val), sizeof(val)-1) && (rule)[sizeof(val)-1] == '$')

/*() Create new (common pool) attribute and add it to a linked list */

struct zxid_attr* zxid_new_at(struct zxid_conf* cf, struct zxid_attr* at, int name_len, char* name, int val_len, char* val, char* lk)
{
  struct zxid_attr* aa = ZX_ZALLOC(cf->ctx, struct zxid_attr);
  aa->n = at;
  at = aa;
  COPYVAL(at->name, name, name+name_len);
  if (val)
    COPYVAL(at->val, val, val+val_len);
  D("%s:\tATTR name(%.*s) val(%.*s)", lk, name_len, name, val_len, STRNULLCHK(val));
  return aa;
}

/*() Parse map specification and add it to linked list
 * srcns$A$rule$b$ext;src$A$rule$b$ext;...
 */

struct zxid_map* zxid_load_map(struct zxid_conf* cf, struct zxid_map* map, char* v)
{
  char* ns;
  char* A;
  char* rule;
  char* b;
  char* ext;
  char* p = v;
  struct zxid_map* mm;

  DD("v(%s)", v);

  while (p && *p) {
    ns = p;
    p = strchr(p, '$');
    if (!p) {
      ERR("Malformed MAP directive: source namespace missing at pos %d", p-v);
      return map;
    }

    A = ++p;
    p = strchr(p, '$');
    if (!p) {
      ERR("Malformed MAP directive: source attribute name missing at pos %d", p-v);
      return map;
    }

    rule = ++p;
    p = strchr(p, '$');
    if (!p) {
      ERR("Malformed MAP directive: rule missing at pos %d", p-v);
      return map;
    }

    b = ++p;
    p = strchr(p, '$');
    if (!p) {
      ERR("Malformed MAP directive: destination attribute name missing at pos %d", p-v);
      return map;
    }
    
    ext = ++p;
    p = strchr(p, ';');  /* Stanza ends in separator ; or end of string nul */
    if (!p)
      p = ext + strlen(ext);
    
    if (IS_RULE(rule, "reset")) {
      INFO("Reset map %p", map);
      for (; map; map = mm) {
	mm = map->n;
	ZX_FREE(cf->ctx, map);
      }
      if (!*p) break;
      ++p;
      continue;
    }
    
    mm = ZX_ZALLOC(cf->ctx, struct zxid_map);
    mm->n = map;
    map = mm;
    
    if (IS_RULE(rule, "") || IS_RULE(rule, "rename")) { mm->rule = ZXID_MAP_RULE_RENAME; }
    else if (IS_RULE(rule, "del"))        { mm->rule = ZXID_MAP_RULE_DEL; }
    else if (IS_RULE(rule, "feidedec"))   { mm->rule = ZXID_MAP_RULE_FEIDEDEC; }
    else if (IS_RULE(rule, "feideenc"))   { mm->rule = ZXID_MAP_RULE_FEIDEENC; }
    else if (IS_RULE(rule, "unsb64-inf")) { mm->rule = ZXID_MAP_RULE_UNSB64_INF; }
    else if (IS_RULE(rule, "def-sb64"))   { mm->rule = ZXID_MAP_RULE_DEF_SB64; }
    else if (IS_RULE(rule, "unsb64"))     { mm->rule = ZXID_MAP_RULE_UNSB64; }
    else if (IS_RULE(rule, "sb64"))       { mm->rule = ZXID_MAP_RULE_SB64; }
    else {
      ERR("Unknown map rule(%.*s)", b-rule, rule);
      //ERR("sizeof(rename)=%d cmp=%d c(%c)", sizeof("rename"), memcmp(rule, "rename", sizeof("rename")-1), rule[sizeof("rename")]);
    }

    COPYVAL(mm->ns,  ns,  A-1);
    COPYVAL(mm->src, A,   rule-1);
    COPYVAL(mm->dst, b,   ext-1);
    COPYVAL(mm->ext, ext, p);

    D("map ns(%s) src(%s) rule=%d dst(%s) ext(%s)", mm->ns, mm->src, mm->rule, mm->dst, mm->ext);
    if (!*p) break;
    ++p;
  }

  return map;
}

/*() Parse need specification and add it to linked list
 * A,B$usage$retention$oblig$ext;A,B$usage$retention$oblig$ext;...
 */

struct zxid_need* zxid_load_need(struct zxid_conf* cf, struct zxid_need* need, char* v)
{
  char* attrs;
  char* usage;
  char* retent;
  char* oblig;
  char* ext;
  char* p = v;
  char* a;
  int len;
  struct zxid_need* nn;

  while (p && *p) {
    attrs = p;
    p = strchr(p, '$');
    if (!p) {
      ERR("Malformed NEED or WANT directive: attribute list at pos %d", p-v);
      return need;
    }

    usage = ++p;
    p = strchr(p, '$');
    if (!p) {
      ERR("Malformed NEED or WANT directive: usage missing at pos %d", p-v);
      return need;
    }

    retent = ++p;
    p = strchr(p, '$');
    if (!p) {
      ERR("Malformed NEED or WANT directive: retention missing at pos %d", p-v);
      return need;
    }

    oblig = ++p;
    p = strchr(p, '$');
    if (!p) {
      ERR("Malformed NEED or WANT directive: obligations missing at pos %d", p-v);
      return need;
    }
    
    ext = ++p;
    p = strchr(p, ';');  /* Stanza ends in separator ; or end of string nul */
    if (!p)
      p = ext + strlen(ext);
    
    if (IS_RULE(usage, "reset")) {
      INFO("Reset need %p", need);
      for (; need; need = nn) {
	nn = need->n;
	ZX_FREE(cf->ctx, need);
      }
      if (!*p) break;
      ++p;
      continue;
    }
    
    nn = ZX_ZALLOC(cf->ctx, struct zxid_need);
    nn->n = need;
    need = nn;

    COPYVAL(nn->usage,  usage,  retent-1);
    COPYVAL(nn->retent, retent, oblig-1);
    COPYVAL(nn->oblig,  oblig,  ext-1);
    COPYVAL(nn->ext,    ext,    p);

    D("need attrs(%.*s) usage(%s) retent(%s) oblig(%s) ext(%s)", usage-attrs-1, attrs, nn->usage, nn->retent, nn->oblig, nn->ext);

    for (a = attrs; ; a += len+1) {
      len = strcspn(a, ",$");
      nn->at = zxid_new_at(cf, nn->at, len, a, 0,0, "need/want");
      if (a[len] == '$')
	break;
    }
    if (!*p) break;
    ++p;
  }

  return need;
}

/*() Parse ATTRSRC specification and add it to linked list
 * namespace$A,B$weight$accessparamURL$AAPMLref$otherLim$ext;namespace$A,B$weight$accessparamURL$AAPMLref$otherLim$ext;...
 */

struct zxid_cstr_list* zxid_load_cstr_list(struct zxid_conf* cf, struct zxid_cstr_list* l, char* p)
{
  char* q;
  struct zxid_cstr_list* cs;

  for (; p && *p; ++p) {
    q = p;
    p = strchr(p, ',');
    if (!p)
      p = q + strlen(q);
    cs = ZX_ZALLOC(cf->ctx, struct zxid_cstr_list);
    cs->n = l;
    l = cs;
    COPYVAL(cs->s, q, p);    
  }
  return l;
}

/*() Parse ATTRSRC specification and add it to linked list
 * namespace$A,B$weight$accessparamURL$AAPMLref$otherLim$ext;namespace$A,B$weight$accessparamURL$AAPMLref$otherLim$ext;...
 */

struct zxid_atsrc* zxid_load_atsrc(struct zxid_conf* cf, struct zxid_atsrc* atsrc, char* v)
{
  char* ns;
  char* attrs;
  char* weight;
  char* url;
  char* aapml;
  char* otherlim;
  char* ext;
  char* p = v;
  char* a;
  int len;
  struct zxid_atsrc* as;

  while (p && *p) {
    ns = p;
    p = strchr(p, '$');
    if (!p) {
      ERR("Malformed ATSRC directive: namespace missing at pos %d", p-v);
      return atsrc;
    }

    attrs = ++p;
    p = strchr(p, '$');
    if (!p) {
      ERR("Malformed ATSRC directive: attribute list missing at pos %d", p-v);
      return atsrc;
    }

    weight = ++p;
    p = strchr(p, '$');
    if (!p) {
      ERR("Malformed ATSRC directive: weight missing at pos %d", p-v);
      return atsrc;
    }

    url = ++p;
    p = strchr(p, '$');
    if (!p) {
      ERR("Malformed ATSRC directive: url missing at pos %d", p-v);
      return atsrc;
    }

    aapml = ++p;
    p = strchr(p, '$');
    if (!p) {
      ERR("Malformed ATSRC directive: aapml ref missing at pos %d", p-v);
      return atsrc;
    }
    
    otherlim = ++p;
    p = strchr(p, '$');
    if (!p) {
      ERR("Malformed ATSRC directive: otherlim missing at pos %d", p-v);
      return atsrc;
    }
    
    ext = ++p;
    p = strchr(p, ';');  /* Stanza ends in separator ; or end of string nul */
    if (!p)
      p = ext + strlen(ext);
    
    if (IS_RULE(url, "reset")) {
      INFO("Reset atsrc %p", atsrc);
      for (; atsrc; atsrc = as) {
	as = atsrc->n;
	ZX_FREE(cf->ctx, atsrc);
      }
      if (!*p) break;
      ++p;
      continue;
    }
    
    as = ZX_ZALLOC(cf->ctx, struct zxid_atsrc);
    as->n = atsrc;
    atsrc = as;

    COPYVAL(as->ns,       ns,        attrs-1);
    COPYVAL(as->weight,   weight,    url-1);
    COPYVAL(as->url,      url,       aapml-1);
    COPYVAL(as->aapml,    aapml,     otherlim-1);
    COPYVAL(as->otherlim, otherlim,  ext-1);
    COPYVAL(as->ext,      ext,       p);

    D("atsrc ns(%s) attrs(%.*s) weight(%s) url(%s) aapml(%s) otherlim(%s) ext(%s)", as->ns, weight-attrs-1, attrs, as->weight, as->url, as->aapml, as->otherlim, as->ext);

    for (a = attrs; ; a += len+1) {
      len = strcspn(a, ",$");
      as->at = zxid_new_at(cf, as->at, len, a, 0,0, "atsrc");
      if (a[len] == '$')
	break;
    }
    if (!*p) break;
    ++p;
  }

  return atsrc;
}

/*() Check whether attribute is in a (needed or wanted) list. Just a linear
 * scan as it is simple and good enough for handful of attributes. */

struct zxid_need* zxid_is_needed(struct zxid_need* need, char* name)
{
  struct zxid_attr* at;
  if (!name || !*name)
    return 0;
  for (; need; need = need->n)
    for (at = need->at; at; at = at->n)
      if (at->name[0] == '*' && !at->name[1]   /* Wild card */
	  || !strcmp(at->name, name)) /* Match! */
	return need;
  return 0;
}

/*() Check whether attribute is in a (needed or wanted) list. Just a linear
 * scan as it is simple and good enough for handful of attributes. */

struct zxid_map* zxid_find_map(struct zxid_map* map, char* name)
{
  if (!name || !*name)
    return 0;
  for (; map; map = map->n)
    if (map->src[0] == '*' && !map->src[1] /* Wild card (only sensible for del and data xform) */
	|| !strcmp(map->src, name)) /* Match! */
      return map;
  return 0;
}

/*() Check whether name is in the list. Used for Local PDP wite and black lists. */

struct zxid_cstr_list* zxid_find_cstr_list(struct zxid_cstr_list* cs, char* name)
{
  if (!name || !*name)
    return 0;
  for (; cs; cs = cs->n)
    if (cs->s[0] == '*' && !cs->s[1] /* Wild card */
	|| !strcmp(cs->s, name))     /* Match! */
      return cs;
  return 0;
}

/*() Check whether attribute is in pool. */

struct zxid_attr* zxid_find_at(struct zxid_attr* pool, char* name)
{
  if (!name || !*name)
    return 0;
  for (; pool; pool = pool->n)
    if (!strcmp(pool->name, name))     /* Match! */
      return pool;
  return 0;
}

/* ======================= CONF PARSING ======================== */

#if defined(ZXID_CONF_FILE) || defined(ZXID_CONF_FLAG)

#define SCAN_INT(v, lval) sscanf(v, "%i", &i); lval = i

/*(i) Parse partial configuration specifications, such as may occur
 * on command line or in a configuration file.
 *
 * Generally you should
 * call first zxid_new_conf(), or at least zxid_init_conf(), and
 * then call this function to apply modifications over the defaults.
 * The configuration options are named after the config options
 * that appear in zxidconf.h, except that prefix ZXID_ is removed.
 *
 * N.B. The qs memory must come from static or permanently allocated
 * source as direct pointers to inside it will be taken. The memory
 * will be modified to add nul terminations. Do not use stack based
 * memory like local variable (unless local of main()).
 * Do consider strdup() or similar before calling this function.
 *
 * cf:: Previously allocated and initialized ZXID configuration object
 * qs_len:: Query String length. -1 means nul terminated C string
 * qs:: Configuration data in extended CGI Query String format. "extended"
 *     means newline can be used as separator, in addition to ampersand ("&")
 *     This argument is modified in place, changing separators to nul string
 *     terminations.
 * return:: -1 on failure, 0 on success */

/* Called by:  set_zxid_conf, zxid_conf_to_cf_len x3, zxid_parse_conf */
int zxid_parse_conf_raw(struct zxid_conf* cf, int qs_len, char* qs)
{
  int i, len;
  char *p, *n, *v, *val, *name, *buf;
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
    URL_DECODE(p, name, qs);
    *p = 0;
    
    for (val = ++qs; *qs && !ONE_OF_3(*qs, '&', '\r', '\n'); ++qs) ; /* Skip over = and scan val */
    v = p = val;
    URL_DECODE(p, val, qs);
    if (*qs)
      ++qs;
    *p = 0;
    
    switch (n[0]) {
    case 'A':  /* AUTHN_REQ_SIGN, ACT, AUDIENCE_FATAL, AFTER_SLOP */
      if (!strcmp(n, "AUTO_CERT"))      { SCAN_INT(v, cf->auto_cert); break; }
      if (!strcmp(n, "AUTHN_REQ_SIGN")) { SCAN_INT(v, cf->authn_req_sign); break; }
      if (!strcmp(n, "ACT"))            { SCAN_INT(v, cf->log_act); break; }
      if (!strcmp(n, "ACT_IN_ERR"))     { SCAN_INT(v, cf->log_err_in_act); break; }
      if (!strcmp(n, "AUDIENCE_FATAL")) { SCAN_INT(v, cf->audience_fatal); break; }
      if (!strcmp(n, "AFTER_SLOP"))     { SCAN_INT(v, cf->after_slop); break; }
      if (!strcmp(n, "ANON_OK"))      { cf->anon_ok = v; D("anon_ok(%s)", cf->anon_ok); break; }
      if (!strcmp(n, "AN_START"))     { cf->an_start = v; break; }
      if (!strcmp(n, "AN_OUR_EID"))   { cf->an_our_eid = v; break; }
      if (!strcmp(n, "AN_TECH_USER")) { cf->an_tech_user =v; break; }
      if (!strcmp(n, "AN_TECH_SITE")) { cf->an_tech_site =v; break; }
      if (!strcmp(n, "AN_FOOTER"))    { cf->an_footer = v; break; }
      if (!strcmp(n, "AN_END"))       { cf->an_end = v; break; }
      if (!strcmp(n, "AN_PAGE"))      { cf->an_page = v; break; }
      if (!strcmp(n, "ATTRSRC"))      { cf->attrsrc = zxid_load_atsrc(cf, cf->attrsrc, v); break; }
      if (!strcmp(n, "A7NTTL"))       { SCAN_INT(v, cf->a7nttl); break; }
      goto badcf;
    case 'B':  /* BEFORE_SLOP */
      if (!strcmp(n, "BEFORE_SLOP"))  { SCAN_INT(v, cf->before_slop); break; }
      goto badcf;
    case 'C':  /* CDC_URL, CDC_CHOICE */
      if (!strcmp(n, "CDC_URL"))      { cf->cdc_url = v; break; }
      if (!strcmp(n, "CDC_CHOICE"))   { SCAN_INT(v, cf->cdc_choice); break; }
      goto badcf;
    case 'D':  /* DUP_A7N_FATAL, DUP_MSG_FATAL */
      if (!strcmp(n, "DEFAULTQS"))      { cf->defaultqs = v; break; }
      if (!strcmp(n, "DUP_A7N_FATAL"))  { SCAN_INT(v, cf->dup_a7n_fatal); break; }
      if (!strcmp(n, "DUP_MSG_FATAL"))  { SCAN_INT(v, cf->dup_msg_fatal); break; }
      goto badcf;
    case 'E':  /* ERR, ERR_IN_ACT */
      if (!strcmp(n, "ERR"))          { SCAN_INT(v, cf->log_err); break; }
      if (!strcmp(n, "ERR_IN_ACT"))   { SCAN_INT(v, cf->log_err_in_act); break; }
      goto badcf;
    case 'I':  /* ISSUE_A7N, ISSUE_MSG */
      if (!strcmp(n, "ISSUE_A7N"))       { SCAN_INT(v, cf->log_issue_a7n); break; }
      if (!strcmp(n, "ISSUE_MSG"))       { SCAN_INT(v, cf->log_issue_msg); break; }
      if (!strcmp(n, "ISSUE_AUTHNCTX_PW")) { cf->issue_authnctx_pw = v; break; }
      if (!strcmp(n, "IDP_SEL_START"))   { cf->idp_sel_start = v; break; }
      if (!strcmp(n, "IDP_SEL_NEW_IDP")) { cf->idp_sel_new_idp = v; break; }
      if (!strcmp(n, "IDP_SEL_OUR_EID")) { cf->idp_sel_our_eid = v; break; }
      if (!strcmp(n, "IDP_SEL_TECH_USER")) { cf->idp_sel_tech_user =v; break; }
      if (!strcmp(n, "IDP_SEL_TECH_SITE")) { cf->idp_sel_tech_site =v; break; }
      if (!strcmp(n, "IDP_SEL_FOOTER"))  { cf->idp_sel_footer = v; break; }
      if (!strcmp(n, "IDP_SEL_END"))     { cf->idp_sel_end = v; break; }
      if (!strcmp(n, "IDP_SEL_PAGE"))    { cf->idp_sel_page = v; break; }
      if (!strcmp(n, "IDP_ENA"))         { SCAN_INT(v, cf->idp_ena); break; }
      if (!strcmp(n, "IDP_PREF_ACS_BINDING")) { cf->idp_pref_acs_binding = v; break; }
      if (!strcmp(n, "INMAP"))           { cf->inmap = zxid_load_map(cf, cf->inmap, v); break; }
      goto badcf;
    case 'L':  /* LEVEL (log level) */
      if (!strcmp(n, "LEVEL"))   { SCAN_INT(v, cf->log_level); break; }
      if (!strcmp(n, "LOCALPDP_ROLE_PERMIT"))   { cf->localpdp_role_permit   = zxid_load_cstr_list(cf, cf->localpdp_role_permit, v);   break; }
      if (!strcmp(n, "LOCALPDP_ROLE_DENY"))     { cf->localpdp_role_deny     = zxid_load_cstr_list(cf, cf->localpdp_role_deny, v);     break; }
      if (!strcmp(n, "LOCALPDP_IDPNID_PERMIT")) { cf->localpdp_idpnid_permit = zxid_load_cstr_list(cf, cf->localpdp_idpnid_permit, v); break; }
      if (!strcmp(n, "LOCALPDP_IDPNID_DENY"))   { cf->localpdp_idpnid_deny   = zxid_load_cstr_list(cf, cf->localpdp_idpnid_deny, v);   break; }
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
      if (!strcmp(n, "MSG_SIG_OK"))   { SCAN_INT(v, cf->msg_sig_ok); break; }
      if (!strcmp(n, "MAX_SOAP_RETRY"))        { SCAN_INT(v, cf->max_soap_retry); break; }
      if (!strcmp(n, "MOD_SAML_ATTR_PREFIX"))  { cf->mod_saml_attr_prefix = v; break; }

      goto badcf;
    case 'N':  /* NAMEID_ENC, NICE_NAME, NOSIG_FATAL */
      if (!strcmp(n, "NAMEID_ENC"))     { SCAN_INT(v, cf->nameid_enc); break; }
      if (!strcmp(n, "NICE_NAME"))      { cf->nice_name = v; break; }
      if (!strcmp(n, "NON_STANDARD_ENTITYID")) { cf->non_standard_entityid = v; break; }
      if (!strcmp(n, "NOSIG_FATAL"))    { SCAN_INT(v, cf->nosig_fatal); break; }
      if (!strcmp(n, "NEED"))           { cf->need = zxid_load_need(cf, cf->need, v); break; }
      goto badcf;
    case 'O':  /* OUTMAP */
      if (!strcmp(n, "OUTMAP"))         { cf->outmap = zxid_load_map(cf, cf->outmap, v); break; }
      goto badcf;
    case 'P':  /* PATH (e.g. /var/zxid) */
      DD("PATH maybe n(%s)=v(%s)", n, v);
      if (!strcmp(n, "PATH")) {
	DD("PATH inside file(%.*s) %d new(%s)", cf->path_len, cf->path, cf->path_supplied, v);
	if (cf->path_supplied && !memcmp(cf->path, v, cf->path_len) || cf->path_supplied > 5) {
	  D("Skipping PATH inside file(%.*s) %d", cf->path_len, cf->path, cf->path_supplied);
	  break;
	}
	cf->path = v;
	cf->path_len = strlen(v);
	++cf->path_supplied;

	buf = ZX_ALLOC(cf->ctx, ZXID_MAX_CONF);
	len = read_all(ZXID_MAX_CONF-1, buf, "-conf_to_cf", "%szxid.conf", cf->path);
	if (len > 0) {
	  buf[len] = 0;
	  zxid_parse_conf_raw(cf, len, buf);  /* Recurse */
	}
	break;
      }
      if (!strcmp(n, "PDP_ENA"))        { SCAN_INT(v, cf->pdp_ena); break; }
      if (!strcmp(n, "PDP_URL"))        { cf->pdp_url = v; break; }
      if (!strcmp(n, "PDP_CALL_URL"))   { cf->pdp_call_url = v; break; }
      if (!strcmp(n, "PEPMAP"))         { cf->pepmap = zxid_load_map(cf, cf->pepmap, v); break; }
      if (!strcmp(n, "POST_A7N_ENC"))   { SCAN_INT(v, cf->post_a7n_enc); break; }
      goto badcf;
    case 'R':  /* RELY_A7N, RELY_MSG */
      if (!strcmp(n, "REDIRECT_HACK_IMPOSED_URL")) { cf->redirect_hack_imposed_url = v; break; }
      if (!strcmp(n, "REDIRECT_HACK_ZXID_URL")) {
	cf->redirect_hack_zxid_url = v;
	p = strchr(v, '?');
	if (p) {
	  *p = 0;
	  cf->redirect_hack_zxid_qs = p+1;
	}
	break;
      }
      if (!strcmp(n, "REDIR_TO_CONTENT")) { SCAN_INT(v, cf->redir_to_content); break; }
      if (!strcmp(n, "REMOTE_USER_ENA"))  { SCAN_INT(v, cf->remote_user_ena); break; }
      if (!strcmp(n, "RELY_A7N"))       { SCAN_INT(v, cf->log_rely_a7n); break; }
      if (!strcmp(n, "RELY_MSG"))       { SCAN_INT(v, cf->log_rely_msg); break; }
      if (!strcmp(n, "REQUIRED_AUTHNCTX")) {
	/* Count how many */
        for (i=2, p=v; *p; ++p)
	  if (*p == '$')
	    ++i;
	cf->required_authnctx = zx_zalloc(cf->ctx, sizeof(char*) * i);
	/* Populate array with strings, stomping the separator char $ to nul termination. */
        for (i=0, p=v; *p; ++i) {
	  cf->required_authnctx[i] = p;
	  for (; *p && *p != '$'; ++p);
	  if (!*p)
	    break;
	  *p++ = 0;
	}
	break;
      }
      goto badcf;
    case 'S':  /* SES_ARCH_DIR, SIGFAIL_IS_ERR, SIG_FATAL */
      if (!strcmp(n, "SES_ARCH_DIR"))   { cf->ses_arch_dir = (v[0]=='0' && !v[1]) ? 0 : v; break; }
      if (!strcmp(n, "SES_COOKIE_NAME")) { cf->ses_cookie_name = (v[0]=='0' && !v[1]) ? 0 : v; break; }
      if (!strcmp(n, "SIGFAIL_IS_ERR")) { SCAN_INT(v, cf->log_sigfail_is_err); break; }
      if (!strcmp(n, "SIG_FATAL"))      { SCAN_INT(v, cf->sig_fatal); break; }
      if (!strcmp(n, "SSO_SIGN"))       { SCAN_INT(v, cf->sso_sign); break; }
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
      if (!strcmp(n, "WANT"))           { cf->want = zxid_load_need(cf, cf->want, v); break; }
      if (!strcmp(n, "WANT_SSO_A7N_SIGNED"))   { SCAN_INT(v, cf->want_sso_a7n_signed); break; }
      if (!strcmp(n, "WANT_AUTHN_REQ_SIGNED")) { SCAN_INT(v, cf->want_authn_req_signed); break; }
      goto badcf;
    default:
    badcf:
      ERR("Unknown config option(%s) val(%s), ignored.", n, v);
      zxlog(cf, 0, 0, 0, 0, 0, 0, 0, "N", "S", "BADCF", n, 0);
    }
  }
  return 0;
}

/*() Wrapper with initial error checking for zxid_parse_conf_raw(), which see. */

/* Called by:  opt x6, set_zxid_conf */
int zxid_parse_conf(struct zxid_conf* cf, char* qs)
{
  if (!cf || !qs)
    return -1;
  return zxid_parse_conf_raw(cf, strlen(qs), qs);
}

#endif

/* EOF  --  zxidconf.c */
