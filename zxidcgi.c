/* zxidcgi.c  -  Handwritten functions for parsing SP specific CGI options
 * Copyright (c) 2006-2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidcgi.c,v 1.6 2007-06-19 15:17:03 sampo Exp $
 *
 * 12.8.2006, created --Sampo
 * 16.1.2007, split from zxidlib.c --Sampo
 *
 * See also: http://hoohoo.ncsa.uiuc.edu/cgi/interface.html (CGI specification)
 */

#include <memory.h>
#include <string.h>
#include "errmac.h"
#include "zxid.h"
#include "zxidconf.h"

/* ============== CGI Parsing ==============
 * N.B. This CGI parsing is very specific for needs of ZXID. It is not generic. */

/* Called by:  main x2, zxid_new_cgi, zxid_simple_cf x3 */
int zxid_parse_cgi(struct zxid_cgi* cgi, char* qs)
{
  char *p, *n, *v, *val, *name;
  D("START qs(%s)", qs);
  while (*qs) {
    for (; *qs == '&'; ++qs) ;                  /* Skip over & or && */
    if (!*qs) break;
    
    for (name = qs; *qs && *qs != '='; ++qs) ;  /* Scan name (until '=') */
    if (!*qs) break;
    if (qs == name) {                           /* Key was an empty string: skip it */
      for (; *qs && *qs != '&'; ++qs) ;         /* Scan value (until '&') */
      continue;
    }
    for (; name < qs && *name <= ' '; ++name) ; /* Skip over initial whitespace before name */
    n = p = name;
    URL_DECODE(name, p, qs);
    *p = 0;
    
    for (val = ++qs; *qs && *qs != '&'; ++qs) ; /* Skip over = and scan value (until '&') */
    v = p = val;
    URL_DECODE(val, p, qs);
    if (*qs)
      ++qs;
    *p = 0;
    
    switch (n[0]) {
    case 'o':
      if (!n[1]) { cgi->op = v[0];    break; }
      goto unknown;
    case 's': cgi->sid = v;           break;
    case 'u': cgi->user = v;          break;
    case 'p': cgi->pw = v;            break;
    case 'c': cgi->cdc = v;           break;
      
      /* The following two entity IDs, combined with various login buttons
       * aim at supporting may different user interface layouts. You need to
       * understand how they interact to avoid undesired conflicts. */
    case 'e':                                 /* EntityID field (manual entry) */
    case 'd':  /* EntityID popup or radio box */
      if (v[0]) cgi->eid = v;
      D("v(%s) v0=0x%02x v=%p cgi->eid=%p cgi=%p", v, v[0], v, cgi->eid, cgi);
      break;
    case 'l':
      /* Login button names are like lP<eid>, where "l" is literal ell, P is
       * protocol profile designator, and <eid> is Entity ID of the IdP.
       * N.B. If eid is omitted from button name, it may be provided using
       * d or e fields (see above). */
      cgi->pr_ix = n[1];
      if (n[2])
	cgi->eid = n+2;
      cgi->op = 'L';
      D("cgi: login eid(%s)", cgi->eid);
      break;
    case 'i':
      /* IdP and protocol index selection popup values are like P<eid>
       * N.B. If eid is omitted from button name, it may be provided using
       * d or e fields (see above). This effectively allows i to be just
       * a protocol selection popup. */
      cgi->pr_ix = v[0];
      if (v[1])
	cgi->eid = v+1;
      break;
    case 'f':  /* flags and (hidden) fields found in typical SP login form */
      switch (n[1]) {
      case 'c': cgi->allow_create = v[0]; break;
      case 'p': cgi->ispassive = v[0];    break;
      case 'f': cgi->force_authn = v[0];  break;
      case 'n': cgi->nid_fmt = v;         break;
      case 'q': cgi->affil = v;           break;
      case 'y': cgi->consent = v;         break;
      case 'm': cgi->matching_rule = v;   break;
      case 'a': cgi->authn_ctx = v;       break;
      case 'r': cgi->rs = v;              break;
      }
      break;
    case 'g':
      switch (n[1]) {
      case 'l':
      case 'r':
      case 's':
      case 't':
      case 'u': cgi->op = n[1]; break;
      }
      break;
    case 'R':
      if (!strcmp(n, "RelayState")) {
	cgi->rs = v;
	break;
      }
      break;
    case 'S':
      if (!strcmp(n, "SAMLart")) {
	cgi->saml_art = v;
	cgi->op = 'A';
	break;
      }
      if (!strcmp(n, "SAMLResponse")) {
	cgi->saml_resp = v;
	cgi->op = 'P';
	break;
      }
      if (!strcmp(n, "SAMLRequest")) {
	cgi->saml_req = v;
	cgi->op = 'Q';
	break;
      }
      if (!strcmp(n, "SigAlg")) {
	cgi->sigalg = v;
	break;
      }
      if (!strcmp(n, "Signature")) {
	cgi->sig = v;
	break;
      }
      /* fall thru */
    unknown:
    default:  D("Unknown CGI field(%s) val(%s)", n, v);
    }
  }
  D("END cgi=%p cgi->eid=%p eid(%s) op(%c) magic=%x", cgi, cgi->eid,cgi->eid, cgi->op, cgi->magic);
  return 0;
}

/* Called by: */
struct zxid_cgi* zxid_new_cgi(struct zxid_conf* cf, char* qs)
{
  struct zxid_cgi* cgi = ZX_ZALLOC(cf->ctx, struct zxid_cgi);
  cgi->magic = ZXID_CGI_MAGIC;
  if (qs) {
    char* qqs;
    int len = strlen(qs);
    qqs = ZX_ALLOC(cf->ctx, len+1);
    memcpy(qqs, qs, len);
    qqs[len] = 0;
    zxid_parse_cgi(cgi, qqs);
  }
  return cgi;
}

/* EOF  --  zxidcgi.c */
/*
  fprintf(stderr, "cgi=%p\n", arg1);
  fflush(stderr);
  fprintf(stderr, "cgi->magic=%x cgi->eid=%p\n", arg1->magic, arg1->eid);
  fflush(stderr);
  fprintf(stderr, "eid(%s)\n", arg1->eid);
  fflush(stderr);
*/
