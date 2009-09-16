/* zxidpool.c  -  Attribute handling
 * Copyright (c) 2007-2009 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidpool.c,v 1.2 2009-09-16 10:14:57 sampo Exp $
 *
 * 4.9.2009, forked from zxidsimp.c --Sampo
 */

#include <memory.h>
#include <string.h>
#include <unistd.h>

#include "errmac.h"
#include "zx.h"
#include "zxid.h"
#include "zxidconf.h"

/*(i) Convert attributes from (session) pool to LDIF entry, applying OUTMAP.
 * This is used by zxid_simple() SSO successful code to generate return
 * value, but can also be used later to regenerate the LDIF
 * given the pool. See zxid_ses_to_pool() for how to create the pool.
 *
 * N.B. More complete documentation is available in <<link: zxid-simple.pd>> (*** fixme) */

/* Called by: */
struct zx_str* zxid_pool_to_ldif(struct zxid_conf* cf, struct zxid_attr* pool)
{
  char* p;
  char* name;
  char* idpnid = 0;
  char* affid = 0;
  int len = 0, name_len;
  struct zxid_map* map;
  struct zxid_attr* at;
  struct zxid_attr* av;
  struct zx_str* ss;
  
  /* Length computation pass */

  for (at = pool; at; at = at->n) {
    map = zxid_find_map(cf->outmap, at->name);
    if (map) {
      if (map->rule == ZXID_MAP_RULE_DEL) {
	D("attribute(%s) filtered out by del rule in OUTMAP", at->name);
	continue;
      }
      at->map_val = zxid_map_val(cf, map, zx_ref_str(cf->ctx, at->val));
      if (map->dst && map->dst[0] && map->src && map->src[0] != '*') {
	name_len = strlen(map->dst);
      } else {
	name_len = strlen(at->name);
      }
      len += name_len + sizeof(": \n")-1 + at->map_val->len;
      DD("len1=%d", len);

      for (av = at->nv; av; av = av->n) {
	av->map_val = zxid_map_val(cf, map, zx_ref_str(cf->ctx, av->val));
	len += name_len + sizeof(": \n")-1 + av->map_val->len;
	DD("len2=%d", len);
      }
    } else {
      name_len = strlen(at->name);
      len += name_len + sizeof(": \n")-1 + (at->val?strlen(at->val):0);
      DD("len3=%d name_len=%d name(%s)", len, name_len, at->name);
      for (av = at->nv; av; av = av->n) {
	len += name_len + sizeof(": \n")-1 + (av->val?strlen(av->val):0);
	DD("len4=%d", len);
      }
    }

    if (!strcmp(at->name, "idpnid")) idpnid = at->val;
    else if (!strcmp(at->name, "affid")) affid = at->val;
  }
  len += sizeof("dn: idpnid=,affid=\n")-1 + (idpnid?strlen(idpnid):0) + (affid?strlen(affid):0);
  DD("lenFin=%d", p-ss->s);
  
  /* Attribute rendering pass */

  ss = zx_new_len_str(cf->ctx, len);
  p = ss->s;

  memcpy(p, "dn: idpnid=", sizeof("dn: idpnid=")-1);
  p += sizeof("dn: idpnid=")-1;
  if (idpnid) {
    strcpy(p, idpnid);
    p += strlen(idpnid);
  }
  memcpy(p, ",affid=", sizeof(",affid=")-1);
  p += sizeof(",affid=")-1;
  if (affid) {
    strcpy(p, affid);
    p += strlen(affid);
  }
  *p++ = '\n';

  DD("len 0=%d", p-ss->s);

  for (at = pool; at; at = at->n) {
    map = zxid_find_map(cf->outmap, at->name);
    if (map) {
      if (map->rule == ZXID_MAP_RULE_DEL)
	continue;
      if (map->dst && map->dst[0] && map->src && map->src[0] != '*') {
	name = map->dst;
      } else {
	name = at->name;
      }
      
      name_len = strlen(name);
      strcpy(p, name);
      p += name_len;
      *p++ = ':';
      *p++ = ' ';
      memcpy(p, at->map_val->s, at->map_val->len);
      p += at->map_val->len;
      *p++ = '\n';

      DD("len 1=%d", p-ss->s);
      
      for (av = at->nv; av; av = av->n) {
	strcpy(p, name);
	p += name_len;
	*p++ = ':';
	*p++ = ' ';
	memcpy(p, av->map_val->s, av->map_val->len);
	p += av->map_val->len;
	*p++ = '\n';

	DD("len 2=%d", p-ss->s);
      }


    } else {
      name_len = strlen(at->name);
      strcpy(p, at->name);
      p += name_len;
      *p++ = ':';
      *p++ = ' ';
      strcpy(p, at->val);
      p += strlen(at->val);
      *p++ = '\n';

      DD("len 3=%d name_len=%d name(%s)", p-ss->s, name_len, at->name);
      
      for (av = at->nv; av; av = av->n) {
	strcpy(p, at->name);
	p += name_len;
	*p++ = ':';
	*p++ = ' ';
	strcpy(p, av->val);
	p += strlen(av->val);
	*p++ = '\n';

	D("len 4=%d", p-ss->s);
      }

    }
  }
  DD("len Fin=%d", p-ss->s);

  ASSERTOP(p, ==, ss->s+len);
  return ss;
}

/*() Convert attributes from (session) pool to JSON, applying OUTMAP.
 * *** Need to check escaping JSON values, e.g. " or \n */

/* Called by: */
struct zx_str* zxid_pool_to_json(struct zxid_conf* cf, struct zxid_attr* pool)
{
  char* p;
  char* name;
  int len = sizeof("{")-1, name_len;
  struct zxid_map* map;
  struct zxid_attr* at;
  struct zxid_attr* av;
  struct zx_str* ss;
  
  /* Length computation pass */

  for (at = pool; at; at = at->n) {
    map = zxid_find_map(cf->outmap, at->name);
    if (map) {
      if (map->rule == ZXID_MAP_RULE_DEL) {
	D("attribute(%s) filtered out by del rule in OUTMAP", at->name);
	continue;
      }
      at->map_val = zxid_map_val(cf, map, zx_ref_str(cf->ctx, at->val));
      if (map->dst && map->dst[0] && map->src && map->src[0] != '*') {
	name_len = strlen(map->dst);
      } else {
	name_len = strlen(at->name);
      }

      if (at->nv) {  /* Multivalue requires array */
	len += name_len + sizeof("\"\":[\"\"],")-1 + at->map_val->len;
	for (av = at->nv; av; av = av->n) {
	  av->map_val = zxid_map_val(cf, map, zx_ref_str(cf->ctx, av->val));
	  len += name_len + sizeof(",\"\"")-1 + av->map_val->len;
	}
      } else {
	len += name_len + sizeof("\"\":\"\",")-1 + at->map_val->len;
      }
    } else {
      name_len = strlen(at->name);
      if (at->nv) {  /* Multivalue requires array */
	len += name_len + sizeof("\"\":[\"\"],")-1 + (at->val?strlen(at->val):0);
	for (av = at->nv; av; av = av->n)
	  len += name_len + sizeof(",\"\"")-1 + (av->val?strlen(av->val):0);
      } else {
	len += name_len + sizeof("\"\":\"\",")-1 + (at->val?strlen(at->val):0);
      }
    }
  }
  
  /* Attribute rendering pass */

  ss = zx_new_len_str(cf->ctx, len);
  p = ss->s;
  *p++ = '{';

  for (at = pool; at; at = at->n) {
    map = zxid_find_map(cf->outmap, at->name);
    if (map) {
      if (map->rule == ZXID_MAP_RULE_DEL)
	continue;
      if (map->dst && map->dst[0] && map->src && map->src[0] != '*') {
	name = map->dst;
      } else {
	name = at->name;
      }

      *p++ = '"';
      strcpy(p, name);
      p += strlen(name);
      *p++ = '"';
      *p++ = ':';
      if (at->nv) {
	*p++ = '[';
	*p++ = '"';
	memcpy(p, at->map_val->s, at->map_val->len);
	p += at->map_val->len;
	*p++ = '"';
	for (av = at->nv; av; av = av->n) {
	  *p++ = ',';
	  *p++ = '"';
	  memcpy(p, av->map_val->s, av->map_val->len);
	  p += av->map_val->len;
	  *p++ = '"';
	}
	*p++ = ']';
      } else {
	*p++ = '"';
	memcpy(p, at->map_val->s, at->map_val->len);
	p += at->map_val->len;
	*p++ = '"';
      }

    } else {
      *p++ = '"';
      strcpy(p, at->name);
      p += strlen(at->name);
      *p++ = '"';
      *p++ = ':';
      if (at->nv) {
	*p++ = '[';
	*p++ = '"';
	strcpy(p, at->val);
	p += strlen(at->val);
	*p++ = '"';
	for (av = at->nv; av; av = av->n) {
	  *p++ = ',';
	  *p++ = '"';
	  strcpy(p, av->val);
	  p += strlen(av->val);
	  *p++ = '"';
	}
	*p++ = ']';
      } else {
	*p++ = '"';
	strcpy(p, at->val);
	p += strlen(at->val);
	*p++ = '"';
      }
    }
    *p++ = ',';
  }
  *p = '}';   /* Overwrites last comma */
  ASSERTOP(p, ==, ss->s+len);
  return ss;
}

/*() Convert attributes from (session) pool to query string, applying OUTMAP.
 * *** Need to check multivalue handling. Now all values are simply blurted
 *     out as separate name=value pairs.
 * *** Need to figure out how to distinguish query string return from
 *     other returns, like redirect. Perhaps arrange dn field always first? */

/* Called by: */
struct zx_str* zxid_pool_to_qs(struct zxid_conf* cf, struct zxid_attr* pool)
{
  char* p;
  char* name;
  int len = 0, name_len;
  struct zxid_map* map;
  struct zxid_attr* at;
  struct zxid_attr* av;
  struct zx_str* ss;
  
  /* Length computation pass */

  for (at = pool; at; at = at->n) {
    map = zxid_find_map(cf->outmap, at->name);
    if (map) {
      if (map->rule == ZXID_MAP_RULE_DEL) {
	D("attribute(%s) filtered out by del rule in OUTMAP", at->name);
	continue;
      }
      at->map_val = zxid_map_val(cf, map, zx_ref_str(cf->ctx, at->val));
      if (map->dst && map->dst[0] && map->src && map->src[0] != '*') {
	name_len = strlen(map->dst);
      } else {
	name_len = strlen(at->name);
      }
      len += name_len + sizeof("=&")-1 + zx_url_encode_len(at->map_val->len,at->map_val->s);
      for (av = at->nv; av; av = av->n) {
	av->map_val = zxid_map_val(cf, map, zx_ref_str(cf->ctx, av->val));
	len += name_len + sizeof("=&")-1 + zx_url_encode_len(av->map_val->len,av->map_val->s);
      }
    } else {
      name_len = strlen(at->name);
      len += name_len + sizeof("=&")-1 + (at->val?zx_url_encode_len(strlen(at->val),at->val):0);
      for (av = at->nv; av; av = av->n)
	len += name_len + sizeof("=&")-1 + (av->val?zx_url_encode_len(strlen(av->val),av->val):0);
    }
  }
  
  /* Attribute rendering pass */

  ss = zx_new_len_str(cf->ctx, len);
  p = ss->s;

  for (at = pool; at; at = at->n) {
    map = zxid_find_map(cf->outmap, at->name);
    if (map) {
      if (map->rule == ZXID_MAP_RULE_DEL)
	continue;
      if (map->dst && map->src && map->src[0] != '*') {
	name = map->dst;
      } else {
	name = at->name;
      }
      
      name_len = strlen(name);
      strcpy(p, name);
      p += name_len;
      *p++ = '=';
      p = zx_url_encode_raw(at->map_val->len, at->map_val->s, p);
      *p++ = '&';
      
      for (av = at->nv; av; av = av->n) {
	strcpy(p, name);
	p += name_len;
	*p++ = '=';
	p = zx_url_encode_raw(av->map_val->len, av->map_val->s, p);
	*p++ = '&';
      }
    } else {
      name_len = strlen(at->name);
      strcpy(p, at->name);
      p += name_len;
      *p++ = '=';
      p = zx_url_encode_raw(strlen(at->val), at->val, p);
      *p++ = '&';
      
      for (av = at->nv; av; av = av->n) {
	strcpy(p, at->name);
	p += name_len;
	*p++ = '=';
	p = zx_url_encode_raw(strlen(av->val), av->val, p);
	*p++ = '&';
      }
    }
  }
  ASSERTOP(p, ==, ss->s+len);
  *p = 0;  /* Zap last & */
  return ss;
}

/*() Add Attribute Statements of an Assertion to pool, applying NEED, WANT, and INMAP */

static void zxid_add_a7n_at_to_pool(struct zxid_conf* cf, struct zxid_ses* ses, struct zx_sa_Assertion_s* a7n)
{
  char* name;
  struct zx_str* ss;
  struct zxid_map* map;
  struct zx_sa_AttributeValue_s* av;
  struct zx_sa_Attribute_s* at;
  struct zx_sa_AttributeStatement_s* as;
  if (!a7n)
    return;
  
  for (as = a7n->AttributeStatement; as; as = ZX_NEXT(as)) {
    for (at = as->Attribute; at; at = ZX_NEXT(at)) {
      
      /* Attribute must be needed or wanted */

      name = zx_str_to_c(cf->ctx, at->Name);
      if (!zxid_is_needed(cf->need, name) && !zxid_is_needed(cf->want, name)) {
	D("attribute(%s) neither needed nor wanted", name);
	name = zx_str_to_c(cf->ctx, at->FriendlyName);
	if (!zxid_is_needed(cf->need, name) && !zxid_is_needed(cf->want, name)) {
	  D("attribute fn(%s) neither needed nor wanted", name);
	  continue;
	}
      }

      map = zxid_find_map(cf->inmap, name);
      if (map && map->rule == ZXID_MAP_RULE_DEL) {
	D("attribute(%s) filtered out by del rule in INMAP", name);
	continue;
      }
      
      if (map && map->dst && map->src && map->src[0] != '*') {
	ses->at = zxid_new_at(cf, ses->at, strlen(map->dst), map->dst, 0, 0, "mapped");
      } else {
	ses->at = zxid_new_at(cf, ses->at, strlen(name), name, 0, 0, "as is");
      }
      ses->at->orig = at;
      ses->at->issuer = a7n->Issuer ? a7n->Issuer->gg.content : 0;
      
      for (av = at->AttributeValue; av; av = ZX_NEXT(av)) {
	if (av->EndpointReference || av->ResourceOffering)
	  continue;  /* Skip bootstraps. They are handled elsewhere. */
	if (av->gg.content) {
	  ss = zxid_map_val(cf, map, av->gg.content);
	  if (ses->at->val) {
	    ses->at->nv = zxid_new_at(cf, ses->at->nv, 0, 0, ss->len, ss->s, "multival");
	  } else {
	    COPYVAL(ses->at->val, ss->s, ss->s+ss->len);
	  }
	}
      }
    }
  }
}

/*() Add simple attribute to pool, applying NEED, WANT, and INMAP */

void zxid_add_attr_to_pool(struct zxid_conf* cf, struct zxid_ses* ses, char* at_name, struct zx_str* val)
{
  struct zxid_map* map;
  if (!val)
    val = zx_dup_str(cf->ctx, "-");

  if (zxid_is_needed(cf->need, at_name) || zxid_is_needed(cf->want, at_name)) {
    map = zxid_find_map(cf->inmap, at_name);
    if (map && map->rule == ZXID_MAP_RULE_DEL) {
      D("attribute(%s) filtered out by del rule in INMAP", at_name);
    } else {
      if (map && map->dst && map->src && map->src[0] != '*') {
	ses->at = zxid_new_at(cf, ses->at, strlen(map->dst), map->dst, val->len, val->s, "mapd2");
      } else {
	ses->at = zxid_new_at(cf, ses->at, strlen(at_name), at_name, val->len, val->s, "as is2");
      }
    }
  } else {
    D("attribute(%s) neither needed nor wanted", at_name);
  }
}

/*(i) Process attributes from the AttributeStatements of the session
 * SSO Assertion and insert them to the pool. NEED, WANT, and INMAP
 * are applied. The pool is suitable for use by PEP or eventually
 * rendering to LDIF (or JSON). */

void zxid_ses_to_pool(struct zxid_conf* cf, struct zxid_ses* ses)
{
  char* src;
  char* dst;
  char* lim;
  struct zx_str* issuer;
  struct zx_str* accr;
  zxid_get_ses_sso_a7n(cf, ses);
  D("adding a7n %p to pool", ses->a7n);
  zxid_add_a7n_at_to_pool(cf, ses, ses->a7n);
  
  /* Format some pseudo attributes that describe the SSO */
  
  issuer = ses->a7n&&ses->a7n->Issuer&&ses->a7n->Issuer->gg.content?ses->a7n->Issuer->gg.content:0;
  zxid_add_attr_to_pool(cf, ses, "affid", issuer);

  accr = ses->a7n&&ses->a7n->AuthnStatement&&ses->a7n->AuthnStatement->AuthnContext&&ses->a7n->AuthnStatement->AuthnContext->AuthnContextClassRef&&ses->a7n->AuthnStatement->AuthnContext->AuthnContextClassRef->content&&ses->a7n->AuthnStatement->AuthnContext->AuthnContextClassRef->content?ses->a7n->AuthnStatement->AuthnContext->AuthnContextClassRef->content:0;
  zxid_add_attr_to_pool(cf, ses, "authnctxlevel", accr);

  zxid_add_attr_to_pool(cf, ses, "idpnid",     zx_dup_str(cf->ctx, STRNULLCHKD(ses->nid)));
  zxid_add_attr_to_pool(cf, ses, "sesid",      zx_dup_str(cf->ctx, STRNULLCHKD(ses->sid)));
  zxid_add_attr_to_pool(cf, ses, "setcookie",  zx_dup_str(cf->ctx, STRNULLCHKD(ses->setcookie)));
  zxid_add_attr_to_pool(cf, ses, "cookie",     zx_dup_str(cf->ctx, STRNULLCHKD(ses->cookie)));
  zxid_add_attr_to_pool(cf, ses, "rs",         zx_dup_str(cf->ctx, STRNULLCHKD(ses->rs)));

  src = dst = ses->at->val;
  lim = ses->at->val + strlen(ses->at->val);
  URL_DECODE(dst, src, lim);
  *dst = 0;
  D("RelayState(%s)", ses->at->val);
}

/* EOF  --  zxidpool.c */
