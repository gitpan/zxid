/* zxidsimp.c  -  Handwritten zxid_simple() API
 * Copyright (c) 2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidsimp.c,v 1.19 2007-06-19 15:17:03 sampo Exp $
 *
 * 17.1.2007, created --Sampo
 * 2.2.2007, improved the LDIF return --Sampo
 *
 * Login button abbreviations
 * A2 = SAML 2.0 Artifact Profile
 * P2 = SAML 2.0 POST Profile
 * A12 = Liberty ID-FF 1.2 Artifact Profile
 * P12 = Liberty ID-FF 1.2 POST Profile
 * A1 = Bare SAML 1.x Artifact Profile
 * P1 = Base SAML 1.x POST Profile
 * A0 = WS-Federation Artifact Profile
 * P0 = WS-Federation POST Profile
 */

#include <memory.h>
#include <string.h>

#include "errmac.h"
#include "zxid.h"
#include "zxidconf.h"

/* Called by:  zxid_fed_mgmt_len, zxid_idp_list_len, zxid_new_conf_to_cf, zxid_simple_len */
int zxid_conf_to_cf_len(struct zxid_conf* cf, int conf_len, char* conf)
{
  zxid_init_conf_ctx(cf, ZXID_PATH /* N.B. Often this is overridden. */);
#if defined(ZXID_CONF_FILE) || defined(ZXID_CONF_FLAG)
  {
    char* buf;
    char* cc;
    int len, clen = conf_len == -1 && conf ? strlen(conf) : conf_len;
    if (conf && conf_len) {
      cc = ZX_ALLOC(cf->ctx, clen+1);
      memcpy(cc, conf, clen);
      cc[clen] = 0;
      buf = ZX_ALLOC(cf->ctx, ZXID_MAX_CONF);
      zxid_parse_conf_raw(cf, clen, cc);
    }
    len = read_all(ZXID_MAX_CONF-1, buf, "-conf_to_cf", "%szxid.conf", cf->path);
    if (len > 0) {
      buf[len] = 0;
      zxid_parse_conf_raw(cf, len, buf);
      if (conf && conf_len)
	zxid_parse_conf_raw(cf, clen, cc);  /* supplied conf takes presedence */
    }
  }
#endif
  return 0;
}

/* Called by: */
struct zxid_conf* zxid_new_conf_to_cf(char* conf)
{
  struct zxid_conf* cf = malloc(sizeof(struct zxid_conf));  /* *** direct use of malloc */
  if (!cf) {
    ERR("out-of-memory %d", sizeof(struct zxid_conf));
    exit(1);
  }
  zxid_conf_to_cf_len(cf, -1, conf);
  return cf;
}

/* ------------ zxid_fed_mgmt() ------------ */

/* Called by:  zxid_fed_mgmt_len */
char* zxid_fed_mgmt_cf(struct zxid_conf* cf, int* res_len, int sid_len, char* sid, int auto_flags)
{
  char* s;
  struct zx_str* ss;
  int slen = sid_len == -1 && sid ? strlen(sid) : sid_len;
  zxid_set_opt(cf, 1, auto_flags & ZXID_AUTO_DEBUG?1:0);

  if ((auto_flags & ZXID_AUTO_FORMT) && (auto_flags & ZXID_AUTO_FORMF))
    ss = zx_strf(cf->ctx,
		 "%s"
#ifdef ZXID_USE_POST
		 "<form method=post action=\"%s?o=P\">"
#else
		 "<form method=get action=\"%s\">"
#endif
		 "<input type=hidden name=s value=\"%.*s\">"
		 "%s%s"
		 "</form>%s%s%s",
		 cf->mgmt_start,
		 cf->url,
		 slen, sid,
		 cf->mgmt_logout, cf->mgmt_defed,
		 cf->mgmt_footer, zxid_version_str(), cf->mgmt_end);
  else if (auto_flags & ZXID_AUTO_FORMT)
    ss = zx_strf(cf->ctx,
#ifdef ZXID_USE_POST
		 "<form method=post action=\"%s?o=P\">"
#else
		 "<form method=get action=\"%s\"><input type=hidden name=o value=G>"
#endif
		 "<input type=hidden name=s value=\"%.*s\">"
		 "%s%s"
		 "</form>",
		 cf->url,
		 slen, sid,
		 cf->mgmt_logout, cf->mgmt_defed);
  else if (auto_flags & ZXID_AUTO_FORMF)
    ss = zx_strf(cf->ctx,
		 "<input type=hidden name=s value=\"%.*s\">"
		 "%s%s",
		 slen, sid,
		 cf->mgmt_logout, cf->mgmt_defed);
  else
    ss = zx_dup_str(cf->ctx, "");

#if 0
  printf("COOKIE: foo\r\n");
  if (qs) printf("QS(%s)\n", qs);
  if (got>0) printf("GOT(%.*s)\n", got, buf);
  if (cgi->err) printf("<p><font color=red><i>%s</i></font></p>\n", cgi->err);
  if (cgi->msg) printf("<p><i>%s</i></p>\n", cgi->msg);
  printf("User:<input name=user> PW:<input name=pw type=password>");
  printf("<input name=login value=\" Login \" type=submit>");
  printf("<h3>Technical options (typically hidden fields on production site)</h3>\n");
  printf("sid(%s) nid(%s) <a href=\"zxid?s=%s\">Reload</a>", ses->sid, ses->nid, ses->sid);
  if (cgi->dbg) printf("<p><form><textarea cols=100 row=10>%s</textarea></form>\n", cgi->dbg);
#endif

  s = ss->s;
  if (res_len)
    *res_len = ss->len;
  ZX_FREE(cf->ctx, ss);
  return s;
}

/* Called by:  zxid_fed_mgmt */
char* zxid_fed_mgmt_len(int conf_len, char* conf, int* res_len, char* sid, int auto_flags)
{
  struct zxid_conf cf;
  zxid_conf_to_cf_len(&cf, conf_len, conf);
  return zxid_fed_mgmt_cf(&cf, 0, -1, sid, auto_flags);
}

/* Called by: */
char* zxid_fed_mgmt(char* conf, char* sid, int auto_flags)
{
  return zxid_fed_mgmt_len(-1, conf, 0, sid, auto_flags);
}

/* ------------ zxid_idp_list() ------------ */

/* Called by:  zxid_idp_list_len, zxid_idp_select */
char* zxid_idp_list_cf(struct zxid_conf* cf, int* res_len, int auto_flags)
{
  char* s;
  struct zx_str* ss;
  struct zx_str* dd;
  struct zxid_entity* idp;
  zxid_set_opt(cf, 1, auto_flags & ZXID_AUTO_DEBUG?1:0);
  idp = zxid_load_cot_cache(cf);
  if (!idp) {
    D("No IdP's found %p", res_len);
    if (res_len)
      *res_len = 0;
    return "";
  }
  
  if ((auto_flags & ZXID_AUTO_FORMT) && (auto_flags & ZXID_AUTO_FORMF))
    ss = zx_dup_str(cf->ctx, "<h3>Login Using Known IdP</h3>\n");
  else
    ss = zx_dup_str(cf->ctx, "");
  D("Starting IdP processing... %p", idp);
  for (; idp; idp = idp->n) {
    if (!idp->ed->IDPSSODescriptor)
      continue;
    dd = zx_strf(cf->ctx, "%.*s"
		 "<input type=submit name=\"l1%.*s\" value=\" Login to %.*s (A2) \">\n"
		 "<input type=submit name=\"l2%.*s\" value=\" Login to %.*s (P2) \"><br>\n",
		 ss->len, ss->s,
		 idp->eid_len, idp->eid, idp->eid_len, idp->eid,
		 idp->eid_len, idp->eid, idp->eid_len, idp->eid);
    zx_str_free(cf->ctx, ss);
    ss = dd;
  }
  s = ss->s;
  D("IdP list(%s)", s);
  if (res_len)
    *res_len = ss->len;
  ZX_FREE(cf->ctx, ss);
  return s;
}

/* Called by:  zxid_idp_list */
char* zxid_idp_list_len(int conf_len, char* conf, int* res_len, int auto_flags)
{
  struct zxid_conf cf;
  zxid_conf_to_cf_len(&cf, conf_len, conf);
  return zxid_idp_list_cf(&cf, 0, auto_flags);
}

/* Called by: */
char* zxid_idp_list(char* conf, int auto_flags)
{
  return zxid_idp_list_len(-1, conf, 0, auto_flags);
}

/* Called by:  zxid_simple_cf */
struct zx_str* zxid_idp_select_zxstr_cf(struct zxid_conf* cf, int auto_flags)
{
  struct zx_str* eid=0;
  struct zx_str* ss;
  char* idp_list;

  DD("HERE %p %p", cf, cf->idp_sel_our_eid);
  if (cf->idp_sel_our_eid && cf->idp_sel_our_eid[0])
    eid = zxid_my_entity_id(cf);
  idp_list = zxid_idp_list_cf(cf, 0, auto_flags);
  DD("idp_list(%s)", idp_list?idp_list:"?");
  if ((auto_flags & ZXID_AUTO_FORMT) && (auto_flags & ZXID_AUTO_FORMF)) {
    ss = zx_strf(cf->ctx,
		 "%s"
#ifdef ZXID_USE_POST
		 "<form method=post action=\"%s?o=P\">"
#else
		 "<form method=get action=\"%s\"><input type=hidden name=o value=G>"
#endif
		 "%s"
		 "%s<a href=\"%.*s\">%.*s</a><br>"
		 "%s"    /* IdP List */
		 "%s%s"
		 "</form>%s%s%s",
		 cf->idp_sel_start,
		 cf->url,
		 cf->idp_sel_new_idp,
		 cf->idp_sel_our_eid, eid?eid->len:0, eid?eid->s:"", eid?eid->len:0, eid?eid->s:"",
		 idp_list,
		 cf->idp_sel_tech_user, cf->idp_sel_tech_site,
		 cf->idp_sel_footer, zxid_version_str(), cf->idp_sel_end);
  } else if (auto_flags & ZXID_AUTO_FORMT) {
    ss = zx_strf(cf->ctx,
#ifdef ZXID_USE_POST
		 "<form method=post action=\"%s?o=P\">"
#else
		 "<form method=get action=\"%s\"><input type=hidden name=o value=G>"
#endif
		 "%s"
		 "%s<a href=\"%.*s\">%.*s</a><br>"
		 "%s"    /* IdP List */
		 "%s%s"
		 "</form>",
		 cf->url,
		 cf->idp_sel_new_idp,
		 cf->idp_sel_our_eid, eid?eid->len:0, eid?eid->s:"", eid?eid->len:0, eid?eid->s:"",
		 idp_list,
		 cf->idp_sel_tech_user, cf->idp_sel_tech_site);
  } else if (auto_flags & ZXID_AUTO_FORMF) {
    ss = zx_strf(cf->ctx,
		 "%s"
		 "%s<a href=\"%.*s\">%.*s</a><br>"
		 "%s"    /* IdP List */
		 "%s%s",
		 cf->idp_sel_new_idp,
		 cf->idp_sel_our_eid, eid?eid->len:0, eid?eid->s:"", eid?eid->len:0, eid?eid->s:"",
		 idp_list,
		 cf->idp_sel_tech_user, cf->idp_sel_tech_site);
  } else
    ss = zx_dup_str(cf->ctx, "");
#if 0
  if (cgi.err) printf("<p><font color=red><i>%s</i></font></p>\n", cgi.err);
  if (cgi.msg) printf("<p><i>%s</i></p>\n", cgi.msg);
  printf("User:<input name=user> PW:<input name=pw type=password>");
  printf("<input name=login value=\" Login \" type=submit>");
  printf("<h3>Login Using IdP Discovered from Common Domain Cookie (CDC)</h3>\n");
  printf("RelayState: <input name=fr value=\"rs123\"><br>\n");
  if (cgi.dbg) printf("<p><form><textarea cols=100 row=10>%s</textarea></form>\n", cgi.dbg);
#endif
  return ss;
}

char* zxid_idp_select_cf(struct zxid_conf* cf, int* res_len, int auto_flags)
{
  char* s;
  struct zx_str* ss = zxid_idp_select_zxstr_cf(cf, auto_flags);
  s = ss->s;
  if (res_len)
    *res_len = ss->len;
  ZX_FREE(cf->ctx, ss);
  return s;
}

/* Called by:  zxid_fed_mgmt */
char* zxid_idp_select_len(int conf_len, char* conf, int* res_len, int auto_flags)
{
  struct zxid_conf cf;
  zxid_conf_to_cf_len(&cf, conf_len, conf);
  return zxid_idp_select_cf(&cf, 0, auto_flags);
}

/* Called by: */
char* zxid_idp_select(char* conf, int auto_flags)
{
  return zxid_idp_select_len(-1, conf, 0, auto_flags);
}

/* ------------ LDIF ------------ */

/* Called by: */
struct zx_str* zxid_ses_to_ldif(struct zxid_conf* cf, struct zxid_ses* ses)
{
  char* p;
  char* q;
  int len = 0;
  struct zx_sa_AttributeValue_s* av;
  struct zx_sa_Attribute_s* at;
  struct zx_sa_AttributeStatement_s* as;
  struct zx_str* ss;
  zxid_get_ses_sso_a7n(cf, ses);
  
  /* Length computation pass */
  
  for (as = ses->a7n->AttributeStatement; as; as = (struct zx_sa_AttributeStatement_s*)as->gg.g.n)
    for (at = as->Attribute; at; at = (struct zx_sa_Attribute_s*)at->gg.g.n)
      for (av = at->AttributeValue; av; av = (struct zx_sa_AttributeValue_s*)av->gg.g.n) {
	if (av->EndpointReference || av->ResourceOffering)
	  continue;  /* Skip bootstraps. They are handled elsewhere. */
	if (av->gg.content)
	  len += av->gg.content->len;
	len += at->Name->len + sizeof(": \n")-1;
      }
  
  /* Attribute rendering pass */
  
  p = q = ZX_ALLOC(cf->ctx, len);
  
  for (as = ses->a7n->AttributeStatement; as; as = (struct zx_sa_AttributeStatement_s*)as->gg.g.n)
    for (at = as->Attribute; at; at = (struct zx_sa_Attribute_s*)at->gg.g.n)
      for (av = at->AttributeValue; av; av = (struct zx_sa_AttributeValue_s*)av->gg.g.n) {
	if (av->EndpointReference || av->ResourceOffering)
	  continue;  /* Skip bootstraps. They are handled elsewhere. */
	memcpy(p, at->Name->s, at->Name->len);
	p += at->Name->len;
	*(p++) = ':';
	*(p++) = ' ';
	if (av->gg.content) {
	  memcpy(p, av->gg.content->s, av->gg.content->len);
	  /* *** Should fold any newlines in content */
	  p += av->gg.content->len;
	}
	*(p++) = '\n';
      }

  ASSERTOP(p, ==, q+len);
  
  /* Format some pseudo attributes that describe the SSO */
  
  ss = zx_strf(cf->ctx,
"dn: idpnid=%s,affid=%.*s\n"
"objectclass: zxidsession\n"
"affid: %.*s\n"
"idpnid: %s\n"
"authnctxlevel: %.*s\n"
"sesid: %s\n"
"%.*s\n"
	       , ses->nid?ses->nid:"-",

	       ses->a7n&&ses->a7n->Issuer&&ses->a7n->Issuer->gg.content&&ses->a7n->Issuer->gg.content->len?ses->a7n->Issuer->gg.content->len:1,
	       ses->a7n&&ses->a7n->Issuer&&ses->a7n->Issuer->gg.content&&ses->a7n->Issuer->gg.content->len?ses->a7n->Issuer->gg.content->s:"-",

	       ses->a7n&&ses->a7n->Issuer&&ses->a7n->Issuer->gg.content&&ses->a7n->Issuer->gg.content->len?ses->a7n->Issuer->gg.content->len:1,
	       ses->a7n&&ses->a7n->Issuer&&ses->a7n->Issuer->gg.content&&ses->a7n->Issuer->gg.content->len?ses->a7n->Issuer->gg.content->s:"-",

	       ses->nid?ses->nid:"-",

	       ses->a7n&&ses->a7n->AuthnStatement&&ses->a7n->AuthnStatement->AuthnContext&&ses->a7n->AuthnStatement->AuthnContext->AuthnContextClassRef&&ses->a7n->AuthnStatement->AuthnContext->AuthnContextClassRef->content&&ses->a7n->AuthnStatement->AuthnContext->AuthnContextClassRef->content->len?ses->a7n->AuthnStatement->AuthnContext->AuthnContextClassRef->content->len:1,
	       ses->a7n&&ses->a7n->AuthnStatement&&ses->a7n->AuthnStatement->AuthnContext&&ses->a7n->AuthnStatement->AuthnContext->AuthnContextClassRef&&ses->a7n->AuthnStatement->AuthnContext->AuthnContextClassRef->content&&ses->a7n->AuthnStatement->AuthnContext->AuthnContextClassRef->content->len?ses->a7n->AuthnStatement->AuthnContext->AuthnContextClassRef->content->s:"-",
	       
	       ses->sid?ses->sid:"-",
	       len, q);
  
  ZX_FREE(cf->ctx, q);
  return ss;
}

/* ------------ zxid_simple() ------------ */

/* Simple handler that assumes the configuration has already been read in.
 * The memory for result is grabbed from ZX_ALLOC(), usually malloc(3)
 * and is "given" away to the caller, i.e. caller must free it. The
 * return value is LDIF of attributes in success case.
 * res_len, if non-null, will receive the length of the response. */

/* Called by:  zxid_simple_len */
char* zxid_simple_cf(struct zxid_conf* cf, int qs_len, char* qs, int* res_len, int auto_flags)
{
  int got, ret;
  char* cont_len;
  char* buf = 0;
  char* res = 0;
  struct zx_str* ss;
  struct zx_str* meta;
  struct zxid_entity* idp;
  struct zxid_cgi cgi;
  struct zxid_ses ses;
  memset(&cgi, 0, sizeof(cgi));
  memset(&ses, 0, sizeof(ses));
  
  if (!cf) {
    ERR("NULL pointer. You MUST supply configuration object %d", auto_flags);
    exit(1);
  }
  
  /*fprintf(stderr, "qs(%s) arg, autoflags=%x\n", qs, auto_flags);*/
  zxid_set_opt(cf, 1, auto_flags & ZXID_AUTO_DEBUG?1:0);
  
  if (!qs) {
    qs = getenv("QUERY_STRING");
    D("QUERY_STRING(%s)", qs);
    if (qs) {
      zxid_parse_cgi(&cgi, qs);
      if (cgi.op == 'P') {
	cont_len = getenv("CONTENT_LENGTH");
	if (cont_len) {
	  sscanf(cont_len, "%d", &got);
	  buf = ZX_ALLOC(cf->ctx, got);
	  if (!buf) {
	    ERR("out of memory len=%d", got);
	    exit(1);
	  }
	  if (read_all_fd(0, buf, got, &got) == -1) {
	    perror("Trouble reading post content.");
	  } else {
	    buf[got] = 0;
	    D("POST(%s) got=%d cont_len(%s)", buf, got, cont_len);
	    if (buf[0] == '<') goto sp_soap;                      /* No BOM and looks like XML */
	    if (buf[2] == '<') { got-=2; buf+=2; ERR("UTF-16 NOT SUPPORTED %x%x", buf[0], buf[1]); goto sp_soap; }  /* UTF-16 BOM and looks XML */
	    if (buf[3] == '<') { got-=3; buf+=3;                  /* UTF-8 BOM and looks XML */
	    sp_soap:
	      /* *** TODO: SOAP response should not be sent internally unless there is auto */
	      ret = zxid_sp_soap_parse(cf, &cgi, &ses, got, buf);
	      D("POST soap parse returned %d", ret);
	      if (ret == ZXID_SSO_OK)
		goto show_protected_content;
	      goto soap_ret;
	    }
	    zxid_parse_cgi(&cgi, buf);
	  }
	}
      }
    }
  } else {
    if (qs_len == -1)
      qs_len = strlen(qs);
    if (qs[qs_len]) {   /* *** reads one past end of buffer */
      ERR("IMPLEMENTATION LIMIT: Query String MUST be nul terminated len=%d", qs_len);
      exit(1);
    }
    zxid_parse_cgi(&cgi, qs);
  }
  if (!cgi.op)
    cgi.op = 'M';

  /* Check if user already has a working session.
   *** Add session cookie check. */
  
  if (cgi.sid) {
    D("sid(%s)", cgi.sid);
    if (zxid_get_ses(cf, &ses, cgi.sid)) {
      D("session active op(%c)", cgi.op);
      switch (cgi.op) {
      case 'l':
	zxid_del_ses(cf, &ses);
	cgi.msg = "Local logout Ok. Session terminated.";
	goto show_login_ret;  /* Simply abandon local session. Falls thru to login screen. */
      case 'r':
	if (auto_flags & ZXID_AUTO_REDIR) {
	  zxid_sp_slo_redir(cf, &cgi, &ses);
	  zxid_del_ses(cf, &ses);
	  goto cgi_exit;
	}
	ss = zxid_sp_slo_location(cf, &cgi, &ses);
	zxid_del_ses(cf, &ses);
	goto res_zx_str;
      case 's':
	zxid_sp_slo_soap(cf, &cgi, &ses);
	zxid_del_ses(cf, &ses);
	cgi.msg = "SP Initiated logout (SOAP). Session terminated.";
	goto show_login_ret;  /* Falls thru to login screen. */
      case 't':
	if (auto_flags & ZXID_AUTO_REDIR) {
	  zxid_sp_nireg_redir(cf, &cgi, &ses, 0);
	  goto cgi_exit;
	}
	ss = zxid_sp_nireg_location(cf, &cgi, &ses, 0);
	goto res_zx_str;
      case 'u':
	zxid_sp_nireg_soap(cf, &cgi, &ses, 0);
	cgi.msg = "SP Initiated defederation (SOAP).";
	break;     /* Defederation does not have to mean SLO */
      case 'P':    /* POST Profile Responses */
	if (auto_flags & ZXID_AUTO_REDIR) {
	  switch (zxid_sp_dispatch(cf, &cgi, &ses, cgi.saml_resp)) {
	  case ZXID_OK:       goto show_login_ret;
	  case ZXID_REDIR_OK: goto cgi_exit;
	  }
	} else {
	  ss = zxid_sp_dispatch_location(cf, &cgi, &ses, cgi.saml_resp);
	  switch (ss->s[0]) {
	  case 'K': goto show_login_ret;
	  case 'L': goto res_zx_str;
	  }
	}
	break;
      case 'Q':    /* POST Profile Requests */
	if (auto_flags & ZXID_AUTO_REDIR) {
	  switch (zxid_sp_dispatch(cf, &cgi, &ses, cgi.saml_req)) {
	  case ZXID_OK:       goto show_login_ret;
	  case ZXID_REDIR_OK: goto cgi_exit;
	  }
	} else {
	  ss = zxid_sp_dispatch_location(cf, &cgi, &ses, cgi.saml_req);
	  switch (ss->s[0]) {
	  case 'K': goto show_login_ret;
	  case 'L': goto res_zx_str;
	  }
	}
	break;
      case 'B':  /* Metadata should work from logged in session, too. */
	goto metadata;
      }

    show_protected_content:
      D("show_protected_content %d", 0);
      ss = zxid_ses_to_ldif(cf, &ses);
      D("LDIF(%.*s)", ss?ss->len:1, ss?ss->s:"-");
      goto res_zx_str;
    }
  }

  /* No session yet! Process login form */

  memset(&ses, 0, sizeof(ses));
  
  switch (cgi.op) {
  case 'M':  /* Invoke LECP or redirect to CDC reader. */
    ss = zxid_lecp_check(cf, &cgi);
    D("LECP check: ss(%.*s)", ss?ss->len:1, ss?ss->s:"?");
    if (ss) {
      if (auto_flags & ZXID_AUTO_REDIR) {
	printf("%.*s", ss->len, ss->s);
	zx_str_free(cf->ctx, ss);
	goto cgi_exit;
      } else
	goto res_zx_str;
    } else {
      if (auto_flags & ZXID_AUTO_REDIR) {
	printf("Location: %s?o=C" CRLF2, cf->cdc_url);
	goto cgi_exit;
      } else {
	ss = zx_strf(cf->ctx, "Location: %s?o=C" CRLF2, cf->cdc_url);
	goto res_zx_str;
      }
    }
#if 0
  case 'C':  /* CDC Read: Common Domain Cookie Reader */
    return zxid_cdc_read(cf, &cgi);
#endif
  case 'E':  /* Return from CDC read, or start here to by-pass CDC read. */
    ss = zxid_lecp_check(cf, &cgi);  /* use o=E&fc=1&fn=p  to set allow create true */
    D("LECP check: ss(%.*s)", ss?ss->len:1, ss?ss->s:"?");
    if (ss) {
      if (auto_flags & ZXID_AUTO_REDIR) {
	printf("%.*s", ss->len, ss->s);
	zx_str_free(cf->ctx, ss);
	goto cgi_exit;
      } else
	goto res_zx_str;
    }
#if 0
    if (zxid_cdc_check(cf, &cgi))
      return 0;
#endif
    break;
  case 'L':
    if (auto_flags & ZXID_AUTO_REDIR) {
      zxid_start_sso(cf, &cgi);
      goto cgi_exit;
    } else {
      ss = zxid_start_sso_location(cf, &cgi);
      goto res_zx_str;
    }
    break;
  case 'A':
    D("Process artifact(%s) pid=%d", cgi.saml_art, getpid());
    switch (zxid_sp_deref_art(cf, &cgi, &ses)) {
    case ZXID_REDIR_OK: ERR("*** Odd, redirect on artifact deref. %d", 0); break;
    case ZXID_SSO_OK:   goto show_protected_content;
    }
    break;
  case 'P':    /* POST Profile Responses */
    D("Process response(%s)", cgi.saml_resp);
    if (auto_flags & ZXID_AUTO_REDIR) {
      switch (zxid_sp_dispatch(cf, &cgi, &ses, cgi.saml_resp)) {
      case ZXID_SSO_OK:   goto show_protected_content;
      case ZXID_REDIR_OK: goto cgi_exit;
      }
    } else {
      ss = zxid_sp_dispatch_location(cf, &cgi, &ses, cgi.saml_resp);
      switch (ss->s[0]) {
      case 'M': goto show_protected_content;
      case 'L': goto res_zx_str;
      }
    }
    break;
  case 'Q':    /* POST Profile Requests */
    D("Process request(%s)", cgi.saml_req);
    if (auto_flags & ZXID_AUTO_REDIR) {
      switch (zxid_sp_dispatch(cf, &cgi, &ses, cgi.saml_req)) {
      case ZXID_SSO_OK:   goto show_protected_content;
      case ZXID_REDIR_OK: goto cgi_exit;
      }
    } else {
      ss = zxid_sp_dispatch_location(cf, &cgi, &ses, cgi.saml_req);
      switch (ss->s[0]) {
      case 'M': goto show_protected_content;
      case 'L': goto res_zx_str;
      }
    }
    break;
  case 'B':  /* Metadata */
  metadata:
    meta = zxid_sp_meta(cf, &cgi);
    if (auto_flags & ZXID_AUTO_METAC && auto_flags & ZXID_AUTO_METAH) {
      printf("Content-Type: text/xml" CRLF "Content-Length: %d" CRLF2 "%.*s",
	     meta->len, meta->len, meta->s);
      goto cgi_exit;
    } else {
      if (auto_flags & (ZXID_AUTO_METAC | ZXID_AUTO_METAH)) {
	if (auto_flags & ZXID_AUTO_METAH) {
	  ss = zx_strf(cf->ctx, "Content-Type: text/xml" CRLF "Content-Length: %d" CRLF2 "%.*s",
		       meta->len, meta->len, meta->s);
	  zx_str_free(cf->ctx, meta);
	} else
	  ss = meta;
	goto res_zx_str;
      }
      res = zx_dup_cstr(cf->ctx, "b");
      goto done;
    }
  default: D("unknown op(%c)", cgi.op);
  }
  
show_login_ret:
  D("show_login_ret %p", cf);
  meta = zxid_idp_select_zxstr_cf(cf, auto_flags);
  DD("idp_select: ret(%s)", meta?meta->len:1, meta?meta->s:"?");
  if (auto_flags & ZXID_AUTO_LOGINC && auto_flags & ZXID_AUTO_LOGINH) {  /* Both H&C: CGI */
    printf("Content-Type: text/html" CRLF "Content-Length: %d" CRLF2 "%.*s",
	   meta->len, meta->len, meta->s);
    goto cgi_exit;
  } else {
    if (auto_flags & (ZXID_AUTO_LOGINC | ZXID_AUTO_LOGINH)) {
      if (auto_flags & ZXID_AUTO_LOGINH) {  /* H only: return both H and C */
	ss = zx_strf(cf->ctx, "Content-Type: text/xml" CRLF "Content-Length: %d" CRLF2 "%.*s",
		     meta->len, meta->len, meta->s);
	zx_str_free(cf->ctx, meta);
      } else
	ss = meta;       /* C only */
      goto res_zx_str;
    }
    res = zx_dup_cstr(cf->ctx, "e");   /* Neither H nor C */
    goto done;
  }
  
soap_ret:
  if (auto_flags & ZXID_AUTO_SOAPC || auto_flags & ZXID_AUTO_SOAPH)
    goto cgi_exit;
  res = zx_dup_cstr(cf->ctx, ret ? "n" : "*** SOAP error (enable debug if you want to see why)"); 
  goto done;

cgi_exit:
  if (auto_flags & ZXID_AUTO_EXIT)
    exit(0);
  res = zx_dup_cstr(cf->ctx, "n");
  goto done;

res_zx_str:
  res = ss->s;
  ZX_FREE(cf->ctx, ss);
  goto done;

done:
  if (buf)
    ZX_FREE(cf->ctx, buf);
  return res;
}

/* Process simple configuration and then call simple handler. Strings
 * are length + pointer (no C string nul termination needed). */

/* Called by:  zxid_simple */
char* zxid_simple_len(int conf_len, char* conf, int qs_len, char* qs, int* res_len, int auto_flags)
{
  struct zxid_conf cf;
  zxid_conf_to_cf_len(&cf, conf_len, conf);
  return zxid_simple_cf(&cf, qs_len, qs, res_len, auto_flags);
}

/* Main simple interface. C string nul termination is assumed. */

/* Called by:  main x4 */
char* zxid_simple(char* conf, char* qs, int auto_flags)
{
  return zxid_simple_len(-1, conf, -1, qs, 0, auto_flags);
}

/* EOF  --  zxidsimp.c */
