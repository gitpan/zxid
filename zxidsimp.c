/* zxidsimp.c  -  Handwritten zxid_simple() API
 * Copyright (c) 2007-2008 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidsimp.c,v 1.41 2008-05-30 17:39:11 lbernardo Exp $
 *
 * 17.1.2007, created --Sampo
 * 2.2.2007, improved the LDIF return --Sampo
 * 9.3.2008, refactored the logged in and need login cases to subroutines --Sampo
 *
 * Login button abbreviations
 * A2 = SAML 2.0 Artifact Profile
 * P2 = SAML 2.0 POST Profile
 * '' = SAML 2.0 POST Simple Sign
 * A12 = Liberty ID-FF 1.2 Artifact Profile
 * P12 = Liberty ID-FF 1.2 POST Profile
 * A1 = Bare SAML 1.x Artifact Profile
 * P1 = Base SAML 1.x POST Profile
 * A0 = WS-Federation Artifact Profile
 * P0 = WS-Federation POST Profile
 */

#include <memory.h>
#include <string.h>
#include <unistd.h>

#include "errmac.h"
#include "zx.h"
#include "zxid.h"
#include "zxidconf.h"

/* Called by:  zxid_fed_mgmt_len, zxid_idp_list_len, zxid_new_conf_to_cf, zxid_simple_len */
int zxid_conf_to_cf_len(struct zxid_conf* cf, int conf_len, char* conf)
{
#if 1
  if (!cf->ctx) {
    cf->ctx = zx_init_ctx();
    if (!cf->ctx) {
      ERR("Failed to alloc zx_ctx %d",0);
      exit(2);
    }
  }
  zxid_init_conf(cf, ZXID_PATH);
#ifdef USE_CURL
  cf->curl = curl_easy_init();
  if (!cf->curl) {
    ERR("Failed to initialize libcurl %d",0);
    exit(2);
  }
#endif
#else
  zxid_init_conf_ctx(cf, ZXID_PATH /* N.B. Often this is overridden. */);
#endif
#if defined(ZXID_CONF_FILE) || defined(ZXID_CONF_FLAG)
  {
    char* buf;
    char* cc;
    int len, clen = conf_len == -1 && conf ? strlen(conf) : conf_len;
    if (conf && conf_len) {
      /* Copy the conf string because wqe are going to modify it in place. */
      cc = ZX_ALLOC(cf->ctx, clen+1);
      memcpy(cc, conf, clen);
      cc[clen] = 0;
      zxid_parse_conf_raw(cf, clen, cc);
    }
    buf = ZX_ALLOC(cf->ctx, ZXID_MAX_CONF);
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
  cf = memset(cf, 0, sizeof(struct zxid_conf));
  zxid_conf_to_cf_len(cf, -1, conf);
  return cf;
}

/* ------------ zxid_fed_mgmt() ------------ */
/* Either outputs the management screen to stdout or returns string of HTML (at specified
 * automation level). If res_len is supplied, the string length is returned in res_len.
 * Otherwise you can just run strlen() on return value. */

/* Called by:  zxid_fed_mgmt_len */
char* zxid_fed_mgmt_cf(struct zxid_conf* cf, int* res_len, int sid_len, char* sid, int auto_flags)
{
  char* res;
  struct zx_str* ss;
  struct zx_str* ss2;
  int slen = sid_len == -1 && sid ? strlen(sid) : sid_len;
  zxid_set_opt(cf, 1, auto_flags & ZXID_AUTO_DEBUG?1:0);

  if (cf->log_level>1)
    zxlog(cf, 0, 0, 0, 0, 0, 0, 0, "N", "W", "MGMT", 0, "sid(%.*s)", sid_len, sid);
  
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
		 "</form>%s%s%s%s",
		 cf->mgmt_start,
		 cf->url,
		 slen, sid,
		 cf->mgmt_logout, cf->mgmt_defed,
		 cf->mgmt_footer, zxid_version_str(), STRNULLCHK(cf->dbg), cf->mgmt_end);
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

  if (auto_flags & ZXID_AUTO_MGMTC && auto_flags & ZXID_AUTO_MGMTH) {  /* Both H&C: CGI */
    printf("Content-Type: text/html" CRLF "Content-Length: %d" CRLF2 "%.*s",
	   ss->len, ss->len, ss->s);
    zx_str_free(cf->ctx, ss);
    return 0;
  }

  if (auto_flags & (ZXID_AUTO_MGMTC | ZXID_AUTO_MGMTH)) {
    if (auto_flags & ZXID_AUTO_MGMTH) {  /* H only: return both H and C */
      D("With headers 0x%x", auto_flags);
      ss2 = zx_strf(cf->ctx, "Content-Type: text/html" CRLF "Content-Length: %d" CRLF2 "%.*s",
		    ss->len, ss->len, ss->s);
      zx_str_free(cf->ctx, ss);
    } else {
      D("No headers 0x%x", auto_flags);
      ss2 = ss;       /* C only */
    }
    res = ss2->s;
    DD("res(%s)", res);
    if (res_len)
      *res_len = ss2->len;
    ZX_FREE(cf->ctx, ss2);
    return res;
  }
  D("m(%.*s)", ss->len, ss->s);
  zx_str_free(cf->ctx, ss);
  if (res_len)
    *res_len = 1;
  return zx_dup_cstr(cf->ctx, "m");   /* Neither H nor C */
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

char* zxid_idp_list_cf_cgi(struct zxid_conf* cf, struct zxid_cgi* cgi, int* res_len, int auto_flags)
{
  int i;
  char* s;
  char mark[32];
  struct zx_str* ss;
  struct zx_str* dd;
  struct zxid_entity* idp;
  struct zxid_entity* idp_cdc;
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

#define ZXID_USE_POPUP
#ifdef ZXID_USE_POPUP
  dd = zx_strf(cf->ctx, "%.*s<select name=d>\n", ss->len, ss->s);
  zx_str_free(cf->ctx, ss);
  ss = dd;
#endif

  D("Starting IdP processing... %p", idp);
  for (; idp; idp = idp->n) {
    if (!idp->ed->IDPSSODescriptor)
      continue;
    
    mark[0] = 0;
    if (cgi) {    /* Was IdP recommended in IdP list supplied via CDC? See zxid_cdc_check() */
      for (idp_cdc = cgi->idp_list, i=1; idp_cdc && idp_cdc != idp; idp_cdc = idp_cdc->n_cdc, ++i);
      if (cf->cdc_choice == ZXID_CDC_CHOICE_UI_ONLY_CDC && cgi->idp_list && !idp_cdc)
	continue;
      if (idp_cdc) {
	snprintf(mark, sizeof(mark), " CDC %d", i);
	mark[sizeof(mark)-1] = 0;
      }
    }

#ifdef ZXID_USE_POPUP
    dd = zx_strf(cf->ctx, "%.*s"
		 "<option value=\"%.*s\"> %.*s %s\n",
		 ss->len, ss->s,
		 idp->eid_len, idp->eid, idp->eid_len, idp->eid,
		 mark);
#else
    dd = zx_strf(cf->ctx, "%.*s"
		 "<input type=submit name=\"l0%.*s\" value=\" Login to %.*s \">\n"
		 "<input type=submit name=\"l1%.*s\" value=\" Login to %.*s (A2) \">\n"
		 "<input type=submit name=\"l2%.*s\" value=\" Login to %.*s (P2) \">\n"
		 "<input type=submit name=\"l5%.*s\" value=\" Login to %.*s (S2) \">%s<br>\n",
		 ss->len, ss->s,
		 idp->eid_len, idp->eid, idp->eid_len, idp->eid,
		 idp->eid_len, idp->eid, idp->eid_len, idp->eid,
		 idp->eid_len, idp->eid, idp->eid_len, idp->eid,
		 idp->eid_len, idp->eid, idp->eid_len, idp->eid,
		 mark);
#endif
    zx_str_free(cf->ctx, ss);
    ss = dd;
  }
#ifdef ZXID_USE_POPUP
  dd = zx_strf(cf->ctx, "%.*s</select>"
	       "<input type=submit name=\"l0\" value=\" Login \">\n"
	       "<input type=submit name=\"l1\" value=\" Login (A2) \">\n"
	       "<input type=submit name=\"l2\" value=\" Login (P2) \">\n"
	       "<input type=submit name=\"l5\" value=\" Login (S2) \"><br>\n",
	       ss->len, ss->s);
  zx_str_free(cf->ctx, ss);
  ss = dd;
#endif

  s = ss->s;
  D("IdP list(%s)", s);
  if (res_len)
    *res_len = ss->len;
  ZX_FREE(cf->ctx, ss);
  return s;
}

/* Called by:  zxid_idp_list_len, zxid_idp_select */
char* zxid_idp_list_cf(struct zxid_conf* cf, int* res_len, int auto_flags)
{
  return zxid_idp_list_cf_cgi(cf, 0, res_len, auto_flags);
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
struct zx_str* zxid_idp_select_zxstr_cf_cgi(struct zxid_conf* cf, struct zxid_cgi* cgi, int auto_flags)
{
  struct zx_str* eid=0;
  struct zx_str* ss;
  char* idp_list;

  D("HERE %p %p", cf, cf->idp_sel_our_eid);
  if (cf->idp_sel_our_eid && cf->idp_sel_our_eid[0])
    eid = zxid_my_entity_id(cf);
  D("HERE %p", eid);
  idp_list = zxid_idp_list_cf_cgi(cf, cgi, 0, auto_flags);
  if (cf->log_level>1)
    zxlog(cf, 0,0,0,0,0,0,0, "N", "W", "IDPSEL", 0, 0);
  if ((auto_flags & ZXID_AUTO_FORMT) && (auto_flags & ZXID_AUTO_FORMF)) {
    D("HERE %p", idp_list);
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
		 "<input type=hidden name=fr value=\"%s\">"
		 "</form>%s%s%s",
		 cf->idp_sel_start,
		 cf->url,
		 cf->idp_sel_new_idp,
		 cf->idp_sel_our_eid, eid?eid->len:0, eid?eid->s:"", eid?eid->len:0, eid?eid->s:"",
		 idp_list,
		 cf->idp_sel_tech_user, cf->idp_sel_tech_site,
		 (cgi&&cgi->rs)?cgi->rs:"",
		 cf->idp_sel_footer, zxid_version_str(), cf->idp_sel_end);
    D("HERE(%d) ss(%.*s)", ss->len, ss->len, ss->s);
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
		 "<input type=hidden name=fr value=\"%s\">"
		 "</form>",
		 cf->url,
		 cf->idp_sel_new_idp,
		 cf->idp_sel_our_eid, eid?eid->len:0, eid?eid->s:"", eid?eid->len:0, eid?eid->s:"",
		 idp_list,
		 cf->idp_sel_tech_user, cf->idp_sel_tech_site,
		 (cgi&&cgi->rs)?cgi->rs:"");
  } else if (auto_flags & ZXID_AUTO_FORMF) {
    ss = zx_strf(cf->ctx,
		 "%s"
		 "%s<a href=\"%.*s\">%.*s</a><br>"
		 "%s"    /* IdP List */
		 "%s%s"
		 "<input type=hidden name=fr value=\"%s\">",
		 cf->idp_sel_new_idp,
		 cf->idp_sel_our_eid, eid?eid->len:0, eid?eid->s:"", eid?eid->len:0, eid?eid->s:"",
		 idp_list,
		 cf->idp_sel_tech_user, cf->idp_sel_tech_site,
		 (cgi&&cgi->rs)?cgi->rs:"");
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

struct zx_str* zxid_idp_select_zxstr_cf(struct zxid_conf* cf, int auto_flags)
{
  return zxid_idp_select_zxstr_cf_cgi(cf, 0, auto_flags);
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
  struct zx_str* issuer;
  struct zx_str* accr;
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
  
  issuer = ses->a7n&&ses->a7n->Issuer&&ses->a7n->Issuer->gg.content?ses->a7n->Issuer->gg.content:0;

  accr = ses->a7n&&ses->a7n->AuthnStatement&&ses->a7n->AuthnStatement->AuthnContext&&ses->a7n->AuthnStatement->AuthnContext->AuthnContextClassRef&&ses->a7n->AuthnStatement->AuthnContext->AuthnContextClassRef->content&&ses->a7n->AuthnStatement->AuthnContext->AuthnContextClassRef->content?ses->a7n->AuthnStatement->AuthnContext->AuthnContextClassRef->content:0;

  ss = zx_strf(cf->ctx,
"dn: idpnid=%s,affid=%.*s\n"
"objectclass: zxidsession\n"
"affid: %.*s\n"
"idpnid: %s\n"
"authnctxlevel: %.*s\n"
"sesid: %s\n"
"setcookie: %s\n"
"cookie: %s\n"
"%.*s"
"rs: %s\n\n"
	       , ses->nid?ses->nid:"-",
	       issuer&&issuer->len?issuer->len:1, issuer&&issuer->len?issuer->s:"-",
	       issuer&&issuer->len?issuer->len:1, issuer&&issuer->len?issuer->s:"-",
	       ses->nid?ses->nid:"-",
	       accr&&accr->len?accr->len:1, accr&&accr->len?accr->s:"-",
	       ses->sid?ses->sid:"-",
	       ses->setcookie?ses->setcookie:"-",
	       ses->cookie?ses->cookie:"-",
	       len, q, ses->rs?ses->rs:"-");
  
  ZX_FREE(cf->ctx, q);
  return ss;
}

/* ------------ zxid_simple() ------------ */

char* zxid_simple_render_ses(struct zxid_conf* cf, struct zxid_ses* ses, int* res_len, int auto_flags)
{
  char* res;
  struct zx_str* ss;
  DD("render_ses %d", 0);
  ss = zxid_ses_to_ldif(cf, ses);
  D("LDIF(%.*s)", ss?ss->len:1, ss?ss->s:"-");
  if (cf->log_level > 0)
    zxlog(cf, 0,0,0,0,0,0, ses->nameid?ses->nameid->gg.content:0, "N", "K", "SHOWPC", ses->sid, 0);
  res = ss->s;
  if (res_len)
    *res_len = ss->len;
  ZX_FREE(cf->ctx, ss);
  return res;
}

static char* zxid_simple_show_login(struct zxid_conf* cf, struct zxid_cgi* cgi, int* res_len, int auto_flags)
{
  char* res;
  struct zx_str* ss;
  struct zx_str* ss2;
  D("cf=%p cgi=%p", cf, cgi);
  ss = zxid_idp_select_zxstr_cf_cgi(cf, cgi, auto_flags);
  DD("idp_select: ret(%s)", ss?ss->len:1, ss?ss->s:"?");
  if (auto_flags & ZXID_AUTO_LOGINC && auto_flags & ZXID_AUTO_LOGINH) {  /* Both H&C: CGI */
    D("CGI %x", auto_flags);
    printf("Content-Type: text/html" CRLF "Content-Length: %d" CRLF2 "%.*s",
	   ss->len, ss->len, ss->s);
    if (auto_flags & ZXID_AUTO_EXIT)
      exit(0);
    zx_str_free(cf->ctx, ss);
    if (res_len)
      *res_len = 1;
    return zx_dup_cstr(cf->ctx, "n");
  }
  
  if (auto_flags & (ZXID_AUTO_LOGINC | ZXID_AUTO_LOGINH)) {
    if (auto_flags & ZXID_AUTO_LOGINH) {  /* H only: return both H and C */
      D("With headers %x", auto_flags);
      ss2 = zx_strf(cf->ctx, "Content-Type: text/html" CRLF "Content-Length: %d" CRLF2 "%.*s",
		    ss->len, ss->len, ss->s);
      zx_str_free(cf->ctx, ss);
    } else {
      D("No headers %x", auto_flags);
      ss2 = ss;       /* C only */
    }
    res = ss2->s;
    DD("res(%s)", res);
    if (res_len)
      *res_len = ss2->len;
    ZX_FREE(cf->ctx, ss2);
    return res;
  }
  D("e(%.*s)", ss->len, ss->s);
  zx_str_free(cf->ctx, ss);
  if (res_len)
    *res_len = 1;
  return zx_dup_cstr(cf->ctx, "e");   /* Neither H nor C */
}

static char* zxid_simple_show_meta(struct zxid_conf* cf, struct zxid_cgi* cgi, int* res_len, int auto_flags)
{
  char* res;
  struct zx_str* meta;
  struct zx_str* ss;

  meta = zxid_sp_meta(cf, cgi);
  if (auto_flags & ZXID_AUTO_METAC && auto_flags & ZXID_AUTO_METAH) {
    printf("Content-Type: text/xml" CRLF "Content-Length: %d" CRLF2 "%.*s",
	   meta->len, meta->len, meta->s);
    if (auto_flags & ZXID_AUTO_EXIT)
      exit(0);
    zx_str_free(cf->ctx, meta);
    if (res_len)
      *res_len = 1;
    return zx_dup_cstr(cf->ctx, "n");
  }
  
  if (auto_flags & (ZXID_AUTO_METAC | ZXID_AUTO_METAH)) {
    if (auto_flags & ZXID_AUTO_METAH) {
      ss = zx_strf(cf->ctx, "Content-Type: text/xml" CRLF "Content-Length: %d" CRLF2 "%.*s",
		   meta->len, meta->len, meta->s);
      zx_str_free(cf->ctx, meta);
    } else
      ss = meta;
    res = ss->s;
    if (res_len)
      *res_len = ss->len;
    ZX_FREE(cf->ctx, ss);
    return res;
  }
  zx_str_free(cf->ctx, meta);
  if (res_len)
    *res_len = 1;
  return zx_dup_cstr(cf->ctx, "b");
}

/* NULL return means the not logged in processing is needed, see zxid_simple_no_ses_cf() */

char* zxid_simple_ses_active_cf(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, int* res_len, int auto_flags)
{
  char* post_str;
  char* res = 0;
  struct zx_str* ss;
  
  if (!cf || !cgi || !ses) {
    ERR("FATAL: NULL pointer. You MUST supply configuration(%p), cgi(%p), and session(%p) objects (programming error)", cf, cgi, ses);
    exit(1);
  }
  
  if (!cgi->sid || !zxid_get_ses(cf, ses, cgi->sid)) {
    D("No session(%s) active op(%c)", STRNULLCHK(cgi->sid), cgi->op);
    return 0;
  }
  
  /* OPs (the o= CGI field. Not to be confused with first letter of zxid_simple() return value)
   * l = local logout (form gl)
   * r = SLO redir    (form gr)
   * s = SLO soap     (form gs)
   * t = nireg redir  (form gt)
   * u = nireg soap   (form gu)
   * m = Show management screen
   * n = Just check session (used for checking session for protected content pages)
   * P = POST response. HTTP POST in general
   * Q = POST request
   * S = SOAP (POST) request
   * B = Metadata
   *
   * M = CDC redirect and LECP detect
   * C = CDC reader
   * E = Normal "Entry" page (e.g. after CDC read)
   * L = Start SSO (submit of E)
   * A = Artifact processing
   */
  
  if (cgi->enc_hint)
    cf->nameid_enc = cgi->enc_hint != '0';
  D("session(%s) active op(%c)", cgi->sid, cgi->op);
  switch (cgi->op) {
  case 'l':
    if (cf->log_level>0)
      zxlog(cf, 0,0,0,0,0,0, ses->nameid?ses->nameid->gg.content:0, "N", "W", "LOCLO", ses->sid,0);
    zxid_del_ses(cf, ses);
    cgi->msg = "Local logout Ok. Session terminated.";
    return zxid_simple_show_login(cf, cgi, res_len, auto_flags);
  case 'r':
    if (auto_flags & ZXID_AUTO_REDIR) {
      zxid_sp_slo_redir(cf, cgi, ses);
      zxid_del_ses(cf, ses);
      goto cgi_exit;
    }
    ss = zxid_sp_slo_location(cf, cgi, ses);
    zxid_del_ses(cf, ses);
    goto res_zx_str;
  case 's':
    zxid_sp_slo_soap(cf, cgi, ses);
    zxid_del_ses(cf, ses);
    cgi->msg = "SP Initiated logout (SOAP). Session terminated.";
    return zxid_simple_show_login(cf, cgi, res_len, auto_flags);
  case 't':
    if (auto_flags & ZXID_AUTO_REDIR) {
      zxid_sp_mni_redir(cf, cgi, ses, zx_ref_str(cf->ctx, cgi->newnym));
      goto cgi_exit;
    }
    ss = zxid_sp_mni_location(cf, cgi, ses, zx_ref_str(cf->ctx, cgi->newnym));
    goto res_zx_str;
  case 'u':
    zxid_sp_mni_soap(cf, cgi, ses, zx_ref_str(cf->ctx, cgi->newnym));
    cgi->msg = "SP Initiated defederation (SOAP).";
    break;     /* Defederation does not have to mean SLO */
  case 'm':
    res = zxid_fed_mgmt_cf(cf, res_len, -1, cgi->sid, auto_flags);
    if (auto_flags & ZXID_AUTO_EXIT)
      exit(0);
    return res;
  case 'P':    /* POST Profile Responses */
    post_str = cgi->saml_resp;
    goto process_post;
  case 'I':
  case 'K':
  case 'Q':    /* POST Profile Requests */
    post_str = cgi->saml_req;
process_post:
    if (auto_flags & ZXID_AUTO_REDIR) {
      switch (zxid_sp_dispatch(cf, cgi, ses, post_str)) {
      case ZXID_OK:       return zxid_simple_show_login(cf, cgi, res_len, auto_flags);
      case ZXID_REDIR_OK: goto cgi_exit;
      }
    } else {
      ss = zxid_sp_dispatch_location(cf, cgi, ses, post_str);
      switch (ss->s[0]) {
      case 'K': return zxid_simple_show_login(cf, cgi, res_len, auto_flags);
      case 'L': goto res_zx_str;
      }
    }
    D("Q err (fall thru) %d", 0);
    break;
  case 'B':  /* Metadata should work from logged in session, too. */
    return zxid_simple_show_meta(cf, cgi, res_len, auto_flags);
  case 'n': break;
  }
  return zxid_simple_render_ses(cf, ses, res_len, auto_flags);
  
cgi_exit:
  if (auto_flags & ZXID_AUTO_EXIT)
    exit(0);
  res = zx_dup_cstr(cf->ctx, "n");
  if (res_len)
    *res_len = 1;
  return res;

res_zx_str:
  res = ss->s;
  if (res_len)
    *res_len = ss->len;
  ZX_FREE(cf->ctx, ss);
  return res;
}

char* zxid_simple_no_ses_cf(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, int* res_len, int auto_flags)
{
  char* post_str;
  char* res = 0;
  struct zx_str* ss;
  
  if (!cf || !cgi || !ses) {
    ERR("FATAL: NULL pointer. You MUST supply configuration(%p), cgi(%p), and session(%p) objects (programming error)", cf, cgi, ses);
    exit(1);
  }

  switch (cgi->op) {
  case 'M':  /* Invoke LECP or redirect to CDC reader. */
    ss = zxid_lecp_check(cf, cgi);
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
  case 'C':  /* CDC Read: Common Domain Cookie Reader */
    zxid_cdc_read(cf, cgi);
    goto cgi_exit;
  case 'E':  /* Return from CDC read, or start here to by-pass CDC read. */
    ss = zxid_lecp_check(cf, cgi);  /* use o=E&fc=1&fn=p  to set allow create true */
    D("LECP check: ss(%.*s)", ss?ss->len:1, ss?ss->s:"?");
    if (ss) {
      if (auto_flags & ZXID_AUTO_REDIR) {
	printf("%.*s", ss->len, ss->s);
	zx_str_free(cf->ctx, ss);
	goto cgi_exit;
      } else
	goto res_zx_str;
    }
    if (zxid_cdc_check(cf, cgi))
      return 0;
    D("NOT CDC %d", 0);
    break;
  case 'L':
    if (auto_flags & ZXID_AUTO_REDIR) {
      zxid_start_sso(cf, cgi);
      goto cgi_exit;
    } else {
      ss = zxid_start_sso_location(cf, cgi);
      goto res_zx_str;
    }
    break;
  case 'A':
    D("Process artifact(%s) pid=%d", cgi->saml_art, getpid());
    switch (zxid_sp_deref_art(cf, cgi, ses)) {
    case ZXID_REDIR_OK: ERR("*** Odd, redirect on artifact deref. %d", 0); break;
    case ZXID_SSO_OK:
show_protected_content_setcookie:
      D("show_protected_content_setcookie: (%s)", cf->ses_cookie_name);
      if (cf->ses_cookie_name && *cf->ses_cookie_name) {
	ses->setcookie = zx_alloc_sprintf(cf->ctx, 0, "%s=%s; path=/; secure", cf->ses_cookie_name, ses->sid);
	ses->cookie = zx_alloc_sprintf(cf->ctx, 0, "$Version=1; %s=%s", cf->ses_cookie_name, ses->sid);
      }
      ses->rs = cgi->rs;
      return zxid_simple_render_ses(cf, ses, res_len, auto_flags);
    }
    break;
  case 'P':    /* POST Profile Responses */
    DD("Process response(%s)", cgi->saml_resp);
    DD("Process response. %d", 0);
    post_str = cgi->saml_resp;
    goto process_post;
  case 'I':
  case 'K':
  case 'Q':    /* POST Profile Requests */
    DD("Process request(%s)", cgi->saml_req);
    post_str = cgi->saml_req;
process_post:
    if (auto_flags & ZXID_AUTO_REDIR) {
      switch (zxid_sp_dispatch(cf, cgi, ses, post_str)) {
      case ZXID_SSO_OK:   goto show_protected_content_setcookie;
      case ZXID_REDIR_OK: goto cgi_exit;
      }
    } else {
      ss = zxid_sp_dispatch_location(cf, cgi, ses, post_str);
      D("POST dispatch_loc(%s)", ss->s);
      switch (ss->s[0]) {
      case 'O': goto show_protected_content_setcookie;
      case 'M': return zxid_simple_render_ses(cf, ses, res_len, auto_flags);
      case 'L': goto res_zx_str;
      }
    }
    D("Q err (fall thru) %d", 0);
    break;
  case 'B':  /* Metadata */
    return zxid_simple_show_meta(cf, cgi, res_len, auto_flags);
  default: D("unknown op(%c)", cgi->op);
  }
  return zxid_simple_show_login(cf, cgi, res_len, auto_flags);

cgi_exit:
  if (auto_flags & ZXID_AUTO_EXIT)
    exit(0);
  res = zx_dup_cstr(cf->ctx, "n");
  if (res_len)
    *res_len = 1;
  return res;

res_zx_str:
  res = ss->s;
  if (res_len)
    *res_len = ss->len;
  ZX_FREE(cf->ctx, ss);
  return res;
}


/* Simple handler that assumes the configuration has already been read in.
 * The memory for result is grabbed from ZX_ALLOC(), usually malloc(3)
 * and is "given" away to the caller, i.e. caller must free it. The
 * return value is LDIF of attributes in success case.
 * res_len, if non-null, will receive the length of the response. */

/* Called by:  zxid_simple_len */
char* zxid_simple_cf(struct zxid_conf* cf, int qs_len, char* qs, int* res_len, int auto_flags)
{
  int got, ret;
  char* remote_addr;
  char* cont_len;
  char* buf = 0;
  char* res = 0;
  struct zxid_cgi cgi;
  struct zxid_ses ses;
  memset(&cgi, 0, sizeof(cgi));
  memset(&ses, 0, sizeof(ses));
  
  if (!cf) {
    ERR("NULL pointer. You MUST supply configuration object %d  (programming error)", auto_flags);
    exit(1);
  }
  
  /*fprintf(stderr, "qs(%s) arg, autoflags=%x\n", qs, auto_flags);*/
  zxid_set_opt(cf, 1, auto_flags & ZXID_AUTO_DEBUG?1:0);
  if (!cf->ipport) {
    remote_addr = getenv("REMOTE_ADDR");
    if (remote_addr) {
      cf->ipport = ZX_ALLOC(cf->ctx, strlen(remote_addr) + 6 + 1); /* :12345 */
      sprintf(cf->ipport, "%s:-", remote_addr);
    }
  }
  
  if (!qs) {
    qs = getenv("QUERY_STRING");
    D("QUERY_STRING(%s)", qs);
    if (qs) {
      zxid_parse_cgi(&cgi, qs);
      if (ONE_OF_2(cgi.op, 'P', 'S')) {
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
	    if (buf[0] == '<') goto sp_soap;  /* No BOM and looks like XML */
	    if (buf[2] == '<') {              /* UTF-16 BOM and looks like XML */
	      got-=2; buf+=2;
	      ERR("UTF-16 NOT SUPPORTED %x%x", buf[0], buf[1]);
	      goto sp_soap;
	    }
	    if (buf[3] == '<') {              /* UTF-8 BOM and looks XML */
	      got-=3; buf+=3;
	    sp_soap:
	      /* *** TODO: SOAP response should not be sent internally unless there is auto */
	      ret = zxid_sp_soap_parse(cf, &cgi, &ses, got, buf);
	      D("POST soap parse returned %d", ret);
	      if (ret == ZXID_SSO_OK)
		return zxid_simple_render_ses(cf, &ses, res_len, auto_flags);
	      if (auto_flags & ZXID_AUTO_SOAPC || auto_flags & ZXID_AUTO_SOAPH) {
		if (auto_flags & ZXID_AUTO_EXIT)
		  exit(0);
		res = zx_dup_cstr(cf->ctx, "n");
		if (res_len)
		  *res_len = 1;
		goto done;
	      }
	      res = zx_dup_cstr(cf->ctx, ret ? "n" : "*** SOAP error (enable debug if you want to see why)"); 
	      if (res_len)
		*res_len = strlen(res);
	      goto done;
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
    D("QUERY_STRING(%s)", qs);
    zxid_parse_cgi(&cgi, qs);
  }
  if (!cgi.op)
    cgi.op = 'M';  /* By default, if no ses, check CDC and offer SSO */

  if (!cgi.sid && cf->ses_cookie_name && *cf->ses_cookie_name)
    zxid_get_sid_from_cookie(cf, &cgi, getenv("HTTP_COOKIE"));

  if (cgi.sid) {
    if (res = zxid_simple_ses_active_cf(cf, &cgi, &ses, res_len, auto_flags))
      goto done;
  }

  memset(&ses, 0, sizeof(ses));   /* No session yet! Process login form */
  res = zxid_simple_no_ses_cf(cf, &cgi, &ses, res_len, auto_flags);

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
  struct zx_ctx ctx;
  struct zxid_conf cf;
  zx_reset_ctx(&ctx);
  memset(&cf, 0, sizeof(struct zxid_conf));
  cf.ctx = &ctx;
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
