/* mod_auth_saml.c  -  Handwritten functions for Apache mod_auth_saml module
 * Copyright (c) 2008 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: mod_auth_saml.c,v 1.1 2008-05-13 15:09:42 sampo Exp $
 *
 * 1.2.2008, created --Sampo
 * 22.2.2008, distilled to much more compact version --Sampo
 *
 * To configure this module add to httpd.conf something like
 *
 *   LoadModule auth_saml_module modules/mod_auth_saml.so
 *   <Location /secret>
 *     Require valid-user
 *     AuthType "saml"
 *     ZXIDConf "URL=https://sp1.zxidsp.org:8443/secret/saml"
 *   </Location>
 *
 * http://httpd.apache.org/docs/2.2/developer/
 * http://modules.apache.org/doc/API.html
 */

#define _LARGEFILE64_SOURCE   /* So off64_t is found, see: man 3 lseek64 */

#include <zx/errmac.h>
#include <zx/zxid.h>
#include <zx/zxidconf.h>

#include "ap_config.h"
#include "ap_compat.h"
#include "apr_strings.h"
#include "httpd.h"
#include "http_config.h"
#include "http_core.h"
#include "http_log.h"
#include "http_protocol.h"
#include "http_request.h"

#define srv_cf(s) (struct zxid_srv_cf*)ap_get_module_config((s)->module_config, &auth_saml_module)
#define dir_cf(r) (struct zxid_conf*)ap_get_module_config((r)->per_dir_config, &auth_saml_module)

/* This extern variable is used as first argument to LoadModule in httpd.conf,
 * E.g: LoadModule auth_saml_module modules/mod_auth_saml.so */

extern module AP_MODULE_DECLARE_DATA auth_saml_module;

#if 0
/* This function is run when each child process of apache starts. It does
 * initializations that do not survice fork(2). */
static void chldinit(apr_pool_t* p, server_rec* s)
{
  CURLcode res;
  D("server_rec=%p", m, s);
  res = curl_global_init(CURL_GLOBAL_ALL); /* vs. _SSL. Also OpenSSL vs. gnuTLS. */
  if(res != CURLE_OK) {
    ap_log_error(APLOG_MARK, APLOG_ERR, 0, s, "Failed to initialize curl library: %u", res);
  }
}
#endif

/* ------------------------ Run time action -------------------------- */

static int ldif_to_apache(struct zxid_conf* cf, request_rec* r, char* ldif)
{
  int ret = OK;
  char* name;
  char* val;
  char* p;
  char  saved;

  p = strchr(ldif, '\n');  /* dn: idpnid=,affid= */
  p = strchr(ldif, '\n');  /* objectclass: zxidsession */

  while (p) {
    name = ++p;  /* skip \n */
    p = strstr(p, ": ");
    if (!p)
      break;
    *p = 0;
    val = p+2;
    p = strchr(p+2, '\n');  /* *** parsing LDIF is fragile if values are multiline */
    if (p) {
      saved = *p;
      *p = 0;
    }

    if (name[0] == 'r' && name[1] == 's' && !name[2] && !ONE_OF_2(val[0], '-', 0)) {
      D("RelayState(%s)", val);
      if (strcmp(r->uri, val)) {  /* Different, need external or internal redirect */
	D("redirect(%s) redir_to_content=%d", val, cf->redir_to_content);
	//r->uri = apr_pstrdup(r->pool, val);
	if (cf->redir_to_content) {
	  apr_table_setn(r->headers_out, "Location", val);
	  ret = HTTP_SEE_OTHER;
	} else {
	  /* *** any attributes after may not appear in subrequest */
	  ap_internal_redirect_handler(val, r);
	}
      }
    } else if (name[0] == 's' && !strcmp("setcookie", name) && !ONE_OF_2(val[0], '-', 0)) {
      D("Set-Cookie(%s)", val);
      apr_table_setn(r->headers_out, "Set-Cookie", val);
      apr_table_setn(r->err_headers_out, "Set-Cookie", val);  /* Only way to get redir to set header */
      apr_table_setn(r->headers_in,  "Set-Cookie", val);  /* So subrequest can pick them up! */
    } else if (name[0] == 'c' && !strcmp("cookie", name) && !ONE_OF_2(val[0], '-', 0)) {
      D("Cookie(%s)", val);
      apr_table_setn(r->headers_in, "Cookie", val);  /* so internal redirect sees it */
    } else {
      D("ATTR(%s)=VAL(%s)", name, val);
      /* *** handling of multivalued attributes (right now only last is preserved) */
      name = apr_psprintf(r->pool, "%s%s", cf->mod_saml_attr_prefix, name);
      apr_table_set(r->subprocess_env, name, val);
      val[-2] = ':'; /* restore */
    }
    if (*p)
      *p = saved;
  }
  
  apr_table_setn(r->subprocess_env,
		 apr_psprintf(r->pool, "%sLDIF", cf->mod_saml_attr_prefix), ldif);
  D("SSO OK ret(%d) uri(%s) filename(%s) path_info(%s)", ret, r->uri, r->filename, r->path_info);
  return ret;

}

static int send_res(struct zxid_conf* cf, request_rec* r, char* res)
{
  int len;
  char* p;
#if 0
  apr_table_setn(r->headers_out,     "Cache-Control", "no-cache");
  apr_table_setn(r->err_headers_out, "Cache-Control", "no-cache");
  apr_table_setn(r->headers_out,     "Pragma", "no-cache");
  apr_table_setn(r->err_headers_out, "Pragma", "no-cache");
#endif
  res += 14;
  D("RES(%s)", res);
  p = strchr(res, '\r');
  *p = 0;
  //apr_table_setn(r->headers_out, "Content-Type", res);
  D("CONTENT-TYPE(%s)", res);
  ap_set_content_type(r, res);
  res = p+2 + 16;  /* Content-Length: */
  sscanf(res, "%d", &len);
  res = strchr(res, '\r') + 4; /* skip CRFL pair before body */
  D("CONTENT-LENGTH(%d)", len);
  ap_set_content_length(r, len);
  
  D("LEN(%d) strlen(%d) RES(%s)", len, strlen(res), res);
  
  //register_timeout("send", r);
  ap_send_http_header(r);
  if (!r->header_only)
    ap_rputs(res, r);  //send_fd(f, r);  rprintf(); ap_rwrite()
  return DONE;   /* Prevent further hooks from processing the request. */
}

/* Apache style: read POST input */

static char* read_post(struct zxid_conf* cf, request_rec* r)
{
  int len, ret;
  char* res;
  char* p;
  /*len = apr_table_get(r->headers_in, "Content-Length");*/
  
  /* Ask Apache to dechunk data if it is chunked. */
  ret = ap_setup_client_block(r, REQUEST_CHUNKED_DECHUNK);
  if (ret != OK) {
    ERR("ap_setup_client_block(r, REQUEST_CHUNKED_DECHUNK): %d", ret);
    return 0;
  }
  
  /* This function will send a 100 Continue response if the client is
   * waiting for that. If the client isn't going to send data, then this
   * function will return 0. */
  if (!ap_should_client_block(r)) {
    len = 0;
  } else {
    len = r->remaining;
  }
  res = p = apr_palloc(r->pool, len + 1);
  res[len] = 0;
  D("remaining=%d", len);
  
  while (len > 0) {
    /* Read data from the client. Returns 0 on EOF or error, the
     * number of bytes otherwise.   */
    ret = ap_get_client_block(r, p, len);
    if (!ret) {
      ap_log_rerror(APLOG_MARK, APLOG_ERR, 0, r, "Failed to read POST data from client.");
      return 0;  /* HTTP_INTERNAL_SERVER_ERROR */
    }
    
    p += ret;
    len -= ret;
  }
  D("POST(%s)", res);
  return res;
}

/* 0x1000 debug
 * 0x0e00 11 + 10 = Generate all HTML + Mgmt w/headers as string
 * 0x00a0 10 + 10 = Login w/headers as string + Meta w/headers as string
 * 0x0008 10 + 00 = SOAP w/headers as string + no auto redir, no exit(2) */
#define AUTO_FLAGS 0x1ea8

/* Called from httpd-2.2.8/server/request.c: ap_process_request_internal()
 * ap_run_check_user_id(). Return value is processed in modules/http/http_request.c
 * and redirect is in ap_die(), http_protocol.c: ap_send_error_response()  */

static int chkuid(request_rec* r)
{
  int ret, uri_len, url_len;
  char* p;
  char* res;
  const char* cookie_hdr;
  const char* cur_auth;
  struct zxid_conf* cf = dir_cf(r);
  struct zxid_cgi cgi;
  struct zxid_ses ses;
  memset(&cgi, 0, sizeof(struct zxid_cgi));
  memset(&ses, 0, sizeof(struct zxid_ses));

  D("req=%p", r);
  
  if (r->main) {  /* subreq can't come from net: always auth. */
    D("sub ok %d", OK);
    return OK;
  }
  
  cur_auth = ap_auth_type(r);   /* From directive: AuthType "saml" */
  if (!cur_auth || strcasecmp(cur_auth, "saml")) {
    D("not saml auth (%s) %d", STRNULLCHKD(cur_auth), DECLINED);
    return DECLINED;
  }
  r->ap_auth_type = "saml";
  
  if (cf->ses_cookie_name && *cf->ses_cookie_name) {
    cookie_hdr = apr_table_get(r->headers_in, "Cookie");
    D("cookie(%s)", cookie_hdr);
    zxid_get_sid_from_cookie(cf, &cgi, cookie_hdr);
    /* Kludge to get subrequest to set-cookie */
    cookie_hdr = apr_table_get(r->headers_in, "Set-Cookie");
    if (cookie_hdr) {
      D("subrequest set-cookie(%s)", cookie_hdr);
      apr_table_setn(r->headers_out, "Set-Cookie", cookie_hdr);
    }
  }
  
  /* Check if we are supposed to enter zxid due to URL suffix. To do this
   * correctly we need to ignore the query string part. */
  uri_len = strlen(r->uri);
  url_len = strlen(cf->url);
  for (p = cf->url + url_len - 1; p > cf->url; --p)
    if (*p == '?')
      break;
  if (p == cf->url)
    p = cf->url + url_len;
  
  if (url_len >= uri_len
      && !memcmp(p - uri_len, r->uri, uri_len)) {  /* Suffix match */
    zxid_parse_cgi(&cgi, r->args);
    D("matched uri(%s) cf->url(%s) qs(%s) rs(%s) op(%c)", r->uri, cf->url, r->args, cgi.rs, cgi.op);
    if (r->method_number == M_POST) {
      res = read_post(cf, r);
      if (res) {
	if (cgi.op == 'S') {
	  ret = zxid_sp_soap_parse(cf, &cgi, &ses, strlen(res), res);
	      D("POST soap parse returned %d", ret);
#if 0
	      /* *** TODO: SOAP response should not be sent internally unless there is auto */
	      if (ret == ZXID_SSO_OK)
		return zxid_simple_render_ses(cf, &ses, res_len, auto_flags);
	      if (auto_flags & ZXID_AUTO_SOAPC || auto_flags & ZXID_AUTO_SOAPH) {
		res = zx_dup_cstr(cf->ctx, "n");
		if (res_len)
		  *res_len = 1;
		goto done;
	      }
	      res = zx_dup_cstr(cf->ctx, ret ? "n" : "*** SOAP error (enable debug if you want to see why)"); 
	      if (res_len)
		*res_len = strlen(res);
	      goto done;
#endif
	} else {
	  zxid_parse_cgi(&cgi, res);
	  D("POST CGI parsed. rs(%s)", cgi.rs);
	}
      }
    }
    res = zxid_simple_ses_active_cf(cf, &cgi, &ses, 0, AUTO_FLAGS);
    if (res)
      goto process_zxid_simple_outcome;
    /* not logged in, fall thru */
  } else {
    /* Some other page. Just check for session. */
    D("other page uri(%s) qs(%s) cf->url(%s) uri_len=%d url_len=%d", r->uri, r->args, cf->url, uri_len, url_len);
    cgi.op = 'E';
    cgi.rs = r->uri;
    if (cf->defaultqs && cf->defaultqs[0]) {
      D("DEFAULTQS(%s)", cf->defaultqs);
      zxid_parse_cgi(&cgi, cf->defaultqs);
    }
    res = zxid_simple_ses_active_cf(cf, &cgi, &ses, 0, AUTO_FLAGS);
    if (res)
      goto process_zxid_simple_outcome;
    D("other page: no_ses uri(%s)", r->uri);
  }
  
  res = zxid_simple_no_ses_cf(cf, &cgi, &ses, 0, AUTO_FLAGS);

process_zxid_simple_outcome:
  switch (res[0]) {
  case 'L':
    D("REDIR(%s)", res);
    apr_table_setn(r->headers_out, "Location", res+10);
    return HTTP_SEE_OTHER;
  case 'C':
    D("CONTENT(%s)", res);
    return send_res(cf, r, res);
  case 'd': /* Logged in case */
    /* *** Check authorization data such as user belonging to group. If
     * not authorized, return HTTP_UNAUTHORIZED */
    D("SSO OK LDIF(%s)", res);
    D("SSO OK pre uri(%s) filename(%s) path_info(%s)", r->uri, r->filename, r->path_info);
    return ldif_to_apache(cf, r, res);
  default:
    ERR("Unknown zxid_simple response(%s)", res);
  }

  D("final ok %d", OK);
  return OK;
}

/* ------------------------ CONF -------------------------- */

static const char* set_debug(cmd_parms* cmd, void* st, const char* arg) {
  D("old debug=%x, new debug(%s)", zx_debug, arg);
  sscanf(arg, "%i", &zx_debug);
  D("debug=%x now", zx_debug);
  return 0;
}

/* Can be called any number of times to set additional parameters. Directive: ZXIDConf "" */

static const char* set_zxid_conf(cmd_parms* cmd, void* st, const char* arg) {
  int len;
  char* buf;
  struct zxid_conf* cf = (struct zxid_conf*)st;
  D("arg(%s) cf=%p", arg, cf);
  len = strlen(arg);
  buf = ZX_ALLOC(cf->ctx, len+1);
  memcpy(buf, arg, len+1);
  zxid_parse_conf(cf, buf);
  if (cf->path_supplied) {   /* Reread the config file whenever the PATH is resupplied. */
    buf = ZX_ALLOC(cf->ctx, ZXID_MAX_CONF);
    len = read_all(ZXID_MAX_CONF-1, buf, "-apache-ZXIDConf", "%szxid.conf", cf->path);
    if (len > 0) {
      buf[len] = 0;
      zxid_parse_conf_raw(cf, len, buf);
    }
    cf->path_supplied = 0;
  }
  return 0;
}

const command_rec zxid_apache_commands[] = {
  AP_INIT_TAKE1("ZXIDDebug", set_debug, 0, OR_AUTHCFG,
		"Enable debugging output to stderr. 0 to disable."),
  AP_INIT_TAKE1("ZXIDConf", set_zxid_conf, 0, OR_AUTHCFG,
		"Supply ZXID CONF string. May be supplied multiple times."),
  {0}
};


#define ZXID_APACHE_DEFAULT_CONF ""  /* defaults will reign, including path /var/zxid */

/* This code may run twice: once for syntax check, and then again for
 * production use. Curently we just redo the work. */

static void* dirconf(apr_pool_t* p, char* d)
{
  struct zxid_conf* cf = apr_palloc(p, sizeof(struct zxid_conf));
  memset(cf, 0, sizeof(struct zxid_conf));
  cf->ctx = apr_palloc(p, sizeof(struct zx_ctx));
  zx_reset_ctx(cf->ctx);
  D("cf=%p ctx=%p d(%s)", cf, cf->ctx, STRNULLCHKD(d));
  /* *** set malloc func ptr in ctx to use apr_palloc() */
  zxid_conf_to_cf_len(cf, -1, ZXID_APACHE_DEFAULT_CONF);
  cf->path_supplied = 0;
  return cf;
}

/* ------------------------ Hooks -------------------------- */

static void reghk(apr_pool_t *p) {
  D("pool=%p", p);
  //ap_hook_access_checker(authusr,  0, 0, APR_HOOK_MIDDLE);
  ap_hook_check_user_id( chkuid,   0, 0, APR_HOOK_MIDDLE);
  //ap_hook_post_config(   postconf, 0, 0, APR_HOOK_MIDDLE);
  /*ap_hook_child_init(    chldinit, 0, 0, APR_HOOK_MIDDLE);*/
}

/* This extern variable is used as first argument to LoadModule in httpd.conf,
 * E.g: LoadModule auth_saml_module modules/mod_auth_saml.so */

module AP_MODULE_DECLARE_DATA auth_saml_module = {
  STANDARD20_MODULE_STUFF,
  dirconf,
  0, //dirmerge,
  0, //srvconf,
  0, //srvmerge,
  zxid_apache_commands,
  reghk
};

/* EOF - mod_auth_saml.c */
