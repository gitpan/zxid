/* zxlib.c  -  Utility functions for generated (and other) code
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing. See file COPYING.
 * $Id: zxlib.c,v 1.6 2006/08/31 15:44:42 sampo Exp $
 *
 * 28.5.2006, created --Sampo
 * 8.8.2006,  moved lookup functions to generated code --Sampo
 * 12.8.2006, added special scanning of xmlns to avoid backtracking elem recognition --Sampo
 * 26.8.2006, significatn Common Subexpression Elimination (CSE) --Sampo
 */

#include <pthread.h>
#include <malloc.h>
#include <memory.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

#include "errmac.h"
#include "zx.h"
#include "c/saml2-data.h"  /* ALso generig zx simple_elem, etc. */

char* zx_alloc(struct zx_ctx* c, int size)
{
  char* p;
  p = malloc(size);
  if (!p) { ERR("Out-of-memory(%d)", size); exit(1); }
  return p;
}

char* zx_zalloc(struct zx_ctx* c, int size)
{
  char* p = zx_alloc(c, size);
  memset(p, 0, size);
  return p;
}

char* zx_free(struct zx_ctx* c, void* p)
{
  if (p)
    free(p);
  return 0;
}

char* zx_str_to_c(struct zx_ctx* c, struct zx_str_s* ss)
{
  char* p = ZX_ALLOC(c, ss->len+1);
  memcpy(p, ss->s, ss->len);
  p[ss->len] = 0;
  return p;
}

void zx_str_free(struct zx_ctx* c, struct zx_str_s* ss)
{
  if (ss->s)
    ZX_FREE(c, ss->s);
  ZX_FREE(c, ss);
}

struct zx_str_s* zx_ref_len_str(struct zx_ctx* c, int len, char* s)
{
  struct zx_str_s* ss;
  ss = (struct zx_str_s*)ZX_ALLOC(c, sizeof(struct zx_str_s));
  ss->s = s;  /* ref points to underlying data */
  ss->len = len;
  return ss;
}

struct zx_str_s* zx_ref_str(struct zx_ctx* c, char* s)
{
  return zx_ref_len_str(c, strlen(s), s);
}

struct zx_str_s* zx_dup_len_str(struct zx_ctx* c, int len, char* s)
{
  struct zx_str_s* ss;
  ss = (struct zx_str_s*)ZX_ALLOC(c, sizeof(struct zx_str_s));
  ss->s = ZX_ALLOC(c, len+1);
  memcpy(ss->s, s, len);
  ss->s[len] = 0;
  ss->len = len;
  return ss;
}

struct zx_str_s* zx_dup_str(struct zx_ctx* c, char* s)
{
  return zx_dup_len_str(c, strlen(s), s);
}

struct zx_str_s* zx_strf(struct zx_ctx* c, char* f, ...)  /* data is new memory */
{
  va_list ap;
  int len;
  char* s = "";
  va_start(ap, f);
  len = vsnprintf(s, 0, f, ap);
  va_end(ap);
  s = ZX_ALLOC(c, len+1);
  va_start(ap, f);
  vsnprintf(s, len+1, f, ap);
  va_end(ap);
  return zx_ref_len_str(c, len, s);
}

struct zx_elem_s* zx_new_simple_elem(struct zx_ctx* c, struct zx_str_s* ss)
{
  struct zx_elem_s* el;
  el = ZX_ZALLOC(c, struct zx_elem_s);
  el->content = ss;
  return el;
}

struct zx_elem_s* zx_ref_len_simple_elem(struct zx_ctx* c, int len, char* s)
{
  return zx_new_simple_elem(c, zx_ref_len_str(c, len, s));
}

struct zx_elem_s* zx_ref_simple_elem(struct zx_ctx* c, char* s)
{
  return zx_ref_len_simple_elem(c, strlen(s), s);
}

struct zx_elem_s* zx_dup_len_simple_elem(struct zx_ctx* c, int len, char* s)
{
  return zx_new_simple_elem(c, zx_dup_len_str(c, len, s));
}

struct zx_elem_s* zx_dup_simple_elem(struct zx_ctx* c, char* s)
{
  return zx_dup_len_simple_elem(c, strlen(s), s);
}

/* ------------- All the manner namespace management ------------- */

void zx_fix_any_elem_dec(struct zx_ctx* c, struct zx_any_elem_s* x, char* nam, int namlen)
{
  char* p = memchr(nam, ':', namlen);
  if (p) {
    x->gg.g.ns = zx_locate_ns_by_prefix(c, p-nam, nam);
    ++p;
    namlen -= p-nam;
    nam = p;
  }
  x->name = nam;
  x->name_len = namlen;
}

int zx_is_ns_prefix(struct zx_ns_s* ns, int len, char* prefix)
{
  struct zx_ns_s* alias;
  if (!ns)
    return 0;
  if (ns->prefix_len == len && (!len || !memcmp(ns->prefix, prefix, len)))
    return 1;
  for (alias = ns->n; alias; alias = alias->n)
    if (alias->prefix_len == len && (!len || !memcmp(alias->prefix, prefix, len)))
      return 1;
  return 0;
}

struct zx_ns_s* zx_locate_ns_by_prefix(struct zx_ctx* c, int len, char* prefix)
{
  struct zx_ns_s* ns;
  struct zx_ns_s* alias;
  for (ns = c->ns_tab; ns->url_len; ++ns) {
    if (ns->prefix_len == len && (!len || !memcmp(ns->prefix, prefix, len)))
      return ns;
    for (alias = ns->n; alias; alias = alias->n)
      if (alias->prefix_len == len && (!len || !memcmp(alias->prefix, prefix, len)))
	return ns;
  }
  
  /* Trailer element holds unknown namespaces. */
  for (alias = ns->n; alias; alias = alias->n)
    if (alias->prefix_len == len && (!len || !memcmp(alias->prefix, prefix, len)))
      return alias;
  return 0;
}

struct zx_ns_s* zx_locate_ns_by_url(struct zx_ctx* c, int len, char* url)
{
  struct zx_ns_s* ns;
  struct zx_ns_s* alias;
  for (ns = c->ns_tab; ns->url_len; ++ns) {
    if (ns->url_len == len && (!len || !memcmp(ns->url, url, len)))
      return ns;
    for (alias = ns->n; alias; alias = alias->n)
      if (alias->url_len == len && (!len || !memcmp(alias->url, url, len)))
	return ns;
  }

  /* Trailer element holds unknown namespaces. */
  for (alias = ns->n; alias; alias = alias->n)
    if (alias->url_len == len && (!len || !memcmp(alias->url, url, len)))
      return alias;
  return 0;
}

void zx_xmlns_decl(struct zx_ctx* c, int prefix_len, char* prefix, int url_len, char* url)
{
  struct zx_ns_s* alias;
  struct zx_ns_s* ns = zx_locate_ns_by_url(c, url_len, url);
  if (!ns) {
    D("Namespace(%.*s) not found by URL(%.*s) (probably wrong namespace URL)", prefix_len, prefix, url_len, url);
    ns = zx_locate_ns_by_prefix(c, prefix_len, prefix);
    if (!ns) {
      D("Namespace not found by prefix(%.*s) or URL(%.*s) (probably wrong namespace URL)", prefix_len, prefix, url_len, url);
      return;  /* Namespace not known by compiled in schemata. */
    }
  }
  if (zx_is_ns_prefix(ns, prefix_len, prefix))
    return;
  alias = ZX_ZALLOC(c, struct zx_ns_s);
  alias->prefix_len = prefix_len;
  alias->prefix = prefix;
  alias->url_len = url_len;
  alias->url =url;
  alias->n = ns->n;
  ns->n = alias;
}

/* When trying to scan an element, an annoying feature of XML namespaces is that the
 * namespace may be declared in a xmlns attribute within the element itself. Thus
 * at the time of scanning the <ns:element part we can't know its namespace. What
 * a lousy design. In order to handle this we need to either backtrack or
 * make a special case forward scan for xmlns attributes (which is redundant with
 * normal attribute scanning). It seems simpler to do the latter, so here goes... */

struct zx_ns_s* zx_scan_xmlns(struct zx_ctx* c)
{
  struct zx_ns_s* ns = 0;  /* *** build a list of namespaces declared? */
  char* prefix;
  char* url;
  char* p = c->p;  /* We need to keep the original c->p so normal attributes can be scanned. */
  char quote;
  
  /* The tag name has already been detected. Process attributes until '>' */
  
  for ( ; 1; ++p) {
    ZX_SKIP_WS_P(c,p,ns);
    if (ONE_OF_2(*p, '>', '/'))
      break;
    if (!memcmp(p, "xmlns", sizeof("xmlns")-1)) {
      switch (p[5]) {
      case '=':  /* Default namespace decl. */
	prefix = p;
	goto scan_URL;
      case ':':  /* Qualified namespace decl. */
	prefix = p += 6;
	ZX_LOOK_FOR_P(c,'=',p,ns);
      scan_URL:
	++p;
	if (!ONE_OF_2(*p, '"', '\''))
	  return ns;
	quote = *p;
	url = ++p;
	ZX_LOOK_FOR_P(c,quote,p,ns);
	zx_xmlns_decl(c, (url - 2) - prefix, prefix, p - url, url);
	goto next;	
      default:
	D("Illformed attributes. Bad char(%c)", p[5]);
	return ns;
      }
    }
    
    ZX_LOOK_FOR_P(c,'=',p,ns);
    ++p;
    if (!ONE_OF_2(*p, '"', '\''))
      return ns;
    quote = *p;
    ++p;
    ZX_LOOK_FOR_P(c,quote,p,ns);
  next:
    continue;
  }
  return ns;
}

#if 0
/* N.B. Generally this function is not needed since tokens can be arranged
 * to point to respective struct zx_ns_s at compile time using static
 * initialization. This is handled by xsd2sg.pl */
/*if (!zx_init_tok_tab(&ctx, zx_elems, zx_elems + sizeof(zx_elems) / sizeof(struct zx_tok)))  DIE("Inconsistency between tokens and namespaces");*/
int zx_init_tok_tab(struct zx_ctx* c, struct zx_tok* tok_tab, struct zx_tok* tok_tab_lim)
{
  for (; tok_tab < tok_tab_lim; ++tok_tab)
    if (!(tok_tab->ns = zx_locate_ns_by_prefix(c, strlen(tok_tab->prefix), (char*)tok_tab->prefix)))
      return 0;
  return 1;
}
#endif

/* Render the unknown attributes list. CSE for almost all tags. */

int zx_len_common(struct zx_elem_s* x)
{
  int len = 0;
  struct zx_str_s* ss;
  struct zx_any_attr_s* aa;
  struct zx_any_elem_s* ae;
  
  for (aa = x->any_attr; aa; aa = (struct zx_any_attr_s*)aa->ss.g.n) {  /* unknown attributes */
    if (aa->ss.g.ns && aa->ss.g.ns->prefix_len)
      len += aa->ss.g.ns->prefix_len + 1;
    len += 1 + aa->name_len + 1 + 1 + aa->ss.len + 1;  /* attr="val" */
  }

  for (ae = x->any_elem; ae; ae = (struct zx_any_elem_s*)ae->gg.g.n)    /* unknown elements */
    len += zx_LEN_simple_elem(&ae->gg, ae->name_len);
  
  for (ss = x->content; ss; ss = (struct zx_str_s*)ss->g.n)             /* content */
    len += ss->len;
  
  return len;
}

char* zx_enc_so_unknown_attrs(char* p, struct zx_any_attr_s* aa)
{
  for (; aa; aa = (struct zx_any_attr_s*)aa->ss.g.n) {  /* unknown attributes */
    ZX_OUT_CH(p, ' ');
    if (aa->ss.g.ns && aa->ss.g.ns->prefix_len) {
      ZX_OUT_MEM(p, aa->ss.g.ns->prefix, aa->ss.g.ns->prefix_len);
      ZX_OUT_CH(p, ':');
    }
    
    ZX_OUT_MEM(p, aa->name, aa->name_len);
    ZX_OUT_CH(p, '=');
    ZX_OUT_CH(p, '"');
    ZX_OUT_MEM(p, aa->ss.s, aa->ss.len);
    ZX_OUT_CH(p, '"');
  }
  return p;
}

char* zx_enc_so_unknown_elems_and_content(char* p, struct zx_elem_s* x)
{
  struct zx_str_s* ss;
  struct zx_any_elem_s* ae;
  
  for (ae = x->any_elem; ae; ae = (struct zx_any_elem_s*)ae->gg.g.n)    /* unknown elements */
    p = zx_ENC_SO_simple_elem(&ae->gg, p, ae->name, ae->name_len);
  
  for (ss = x->content; ss; ss = (struct zx_str_s*)ss->g.n)      /* content */
    ZX_OUT_MEM(p, ss->s, ss->len);
  
  return p;
}

struct zx_str_s* zx_easy_enc_common(struct zx_ctx* c, char* p, char* buf, int len)
{
  if (p != buf+len) {
    ERR("Encoded length(%d) does not match computed length(%d). ED(%.*s)", p-buf, len, p-buf, buf);
    len = p-buf;
  }
  buf[len] = 0;
  return zx_ref_len_str(c, len, buf);
}

int zx_attr_len(struct zx_str_s* attr, int name_size)
{
  int len = 0;
  /* In legal XML there should really be just one attribute, but we acommodate multioccurances. */
  for (; attr; attr = (struct zx_str_s*)attr->g.n) {
    if (attr->g.ns && attr->g.ns->prefix_len)
      len += attr->g.ns->prefix_len + 1;
    len += 1 + name_size - 1 + 1 + 1 + attr->len + 1;
  }
  return len;
}

char* zx_attr_enc(char* p, struct zx_str_s* attr, char* name, int name_len)
{
  /* In legal XML there should really be just one attribute, but we acommodate multioccurances. */
  for (; attr; attr = (struct zx_str_s*)attr->g.n) {
    ZX_OUT_CH(p, ' ');
    if (attr->g.ns && attr->g.ns->prefix_len) {
      ZX_OUT_MEM(p, attr->g.ns->prefix, attr->g.ns->prefix_len);
      ZX_OUT_CH(p, ':');
    }
    
    ZX_OUT_MEM(p, name, name_len);
    ZX_OUT_CH(p, '=');
    ZX_OUT_CH(p, '"');
    ZX_OUT_MEM(p, attr->s, attr->len);
    ZX_OUT_CH(p, '"');
  }
  return p;
}

void zx_dup_attr(struct zx_ctx* c, struct zx_str_s* attr)
{
  char* p;
  for (; attr; attr = (struct zx_str_s*)attr->g.n)
    if (attr->s) {
      p = ZX_ALLOC(c, attr->len);
      memcpy(p, attr->s, attr->len);
      attr->s = p;
    }
}

void zx_free_attr(struct zx_ctx* c, struct zx_str_s* attr, int free_strs)
{
  struct zx_str_s* attrn;
  for (; attr; attr = attrn) {
    attrn = (struct zx_str_s*)attr->g.n;
    if (free_strs && attr->s)
	ZX_FREE(c, attr->s);
    ZX_FREE(c, attr);
  }
}

struct zx_str_s* zx_clone_attr(struct zx_ctx* c, struct zx_str_s* attr)
{
  struct zx_str_s* ret;
  struct zx_str_s* attrnn;
  struct zx_str_s* attrn;
  char* p;
  for (attrnn = 0; attr; attr = (struct zx_str_s*)attr->g.n) {
    ZX_DUPALLOC(c, struct zx_str_s, attrn, attr);
    if (!attrnn)
      ret = attrn;
    else
      attrnn->g.n = &attrn->g;
    attrnn = attrn;
    if (attrn->s) {
      p = ZX_ALLOC(c, attrn->len);
      memcpy(p, attrn->s, attrn->len);
      attrn->s = p;
    }
  }
  return ret;
}

void zx_free_elem_common(struct zx_ctx* c, struct zx_elem_s* x, int free_strs)
{
  struct zx_str_s* ss;
  struct zx_any_attr_s* aa;
  struct zx_any_elem_s* ae;
  struct zx_str_s* ssn;
  struct zx_any_attr_s* aan;
  struct zx_any_elem_s* aen;
  
  if (x->g.tok == ZX_TOK_NOT_FOUND && free_strs) {
    ae = (struct zx_any_elem_s*)x;
    if (ae->name)
      ZX_FREE(c, ae->name);
  }
  for (aa = x->any_attr; aa; aa = aan) {   /* unknown attributes */
    aan = (struct zx_any_attr_s*)aa->ss.g.n;
    if (free_strs && aa->name)
      ZX_FREE(c, aa->name);
    if (free_strs && aa->ss.s)
      ZX_FREE(c, aa->ss.s);
    ZX_FREE(c, aa);
  }
  for (ae = x->any_elem; ae; ae = aen) {  /* unknown elements */
    aen = (struct zx_any_elem_s*)ae->gg.g.n;
    zx_FREE_simple_elem(c, &ae->gg, free_strs);
  }
  for (ss = x->content; ss; ss = ssn) {   /* content */
    ssn = (struct zx_str_s*)ss->g.n;
    if (free_strs && ss->s)
      ZX_FREE(c, ss->s);
  }
  ZX_FREE(c, x);
}

struct zx_elem_s* zx_clone_elem_common(struct zx_ctx* c, struct zx_elem_s* x, int size, int dup_strs)
{
  struct zx_str_s* ss;
  struct zx_any_attr_s* aa;
  struct zx_any_elem_s* ae;
  struct zx_str_s* ssn;
  struct zx_any_attr_s* aan;
  struct zx_any_elem_s* aen;
  struct zx_str_s* ssnn;
  struct zx_any_attr_s* aann;
  struct zx_any_elem_s* aenn;
  char* p;

  if (x->g.tok == ZX_TOK_NOT_FOUND) {
    ae = (struct zx_any_elem_s*)x;
    ZX_DUPALLOC(c, struct zx_any_elem_s, aen, ae);
    if (dup_strs) {
      aen->name = ZX_ALLOC(c, ae->name_len);
      memcpy(aen->name, ae->name, ae->name_len);
    }
    x = &aen->gg;
  } else {
    struct zx_elem_s* xx = (struct zx_elem_s*)ZX_ALLOC(c, size);
    memcpy(xx, x, size);
    x = xx;
  }
  
  /* *** deal with xmlns specifications in exc c14n way */
  
  for (aann = 0, aa = x->any_attr; aa; aa = (struct zx_any_attr_s*)aa->ss.g.n) {  /* unknown attributes */
    ZX_DUPALLOC(c, struct zx_any_attr_s, aan, aa);
    if (!aann)
      x->any_attr = aan;
    else
      aann->ss.g.n = &aan->ss.g;
    aann = aan;
    
    if (dup_strs && aan->name) {
      p = ZX_ALLOC(c, aan->name_len);
      memcpy(p, aan->name, aan->name_len);
      aan->name = p;
    }
    if (dup_strs && aan->ss.s) {
      p = ZX_ALLOC(c, aan->ss.len);
      memcpy(p, aan->ss.s, aan->ss.len);
      aan->ss.s = p;
    }
  }
  
  for (aenn = 0, ae = x->any_elem; ae; ae = (struct zx_any_elem_s*)ae->gg.g.n) {  /* unknown elements */
    aen = (struct zx_any_elem_s*)zx_DEEP_CLONE_simple_elem(c, &ae->gg, dup_strs);
    if (!aenn)
      x->any_elem = aen;
    else
      aenn->gg.g.n = &aen->gg.g;
    aenn = aen;
  }
  
  for (ssnn = 0, ss = x->content; ss; ss = (struct zx_str_s*)ss->g.n) {   /* content */
    ZX_DUPALLOC(c, struct zx_str_s, ssn, ss);
    if (!ssnn)
      x->content = ssn;
    else
      ssnn->g.n = &ssn->g;
    ssnn = ssn;
    if (ssn->s) {
      p = ZX_ALLOC(c, ssn->len);
      memcpy(p, ssn->s, ssn->len);
      ssn->s = p;
    }
  }
  
  return x;
}

void zx_dup_strs_common(struct zx_ctx* c, struct zx_elem_s* x)
{
  struct zx_str_s* ss;
  struct zx_any_attr_s* aa;
  struct zx_any_elem_s* ae;
  char* p;
  
  if (x->g.tok == ZX_TOK_NOT_FOUND) {
    ae = (struct zx_any_elem_s*)x;
    p = ZX_ALLOC(c, ae->name_len);
    memcpy(p, ae->name, ae->name_len);
    ae->name = p;
  }
  
  /* *** deal with xmlns specifications in exc c14n way */

  for (aa = x->any_attr; aa; aa = (struct zx_any_attr_s*)aa->ss.g.n) {  /* unknown attributes */
    if (aa->name) {
      p = ZX_ALLOC(c, aa->name_len);
      memcpy(p, aa->name, aa->name_len);
      aa->name = p;
    }
    if (aa->ss.s) {
      p = ZX_ALLOC(c, aa->ss.len);
      memcpy(p, aa->ss.s, aa->ss.len);
      aa->ss.s = p;
    }
  }

  for (ae = x->any_elem; ae; ae = (struct zx_any_elem_s*)ae->gg.g.n)   /* unknown elements */
    zx_DUP_STRS_simple_elem(c, &ae->gg);

  for (ss = x->content; ss; ss = (struct zx_str_s*)ss->g.n)    /* content */
    if (ss->s) {
      p = ZX_ALLOC(c, ss->len);
      memcpy(p, ss->s, ss->len);
      ss->s = p;
    }
}

int zx_walk_so_unknown_attributes(struct zx_ctx* c, struct zx_elem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  struct zx_any_attr_s* aa;
  int ret;
  
  for (aa = x->any_attr; aa; aa = (struct zx_any_attr_s*)aa->ss.g.n) {  /* unknown attributes */
    ret = callback(&aa->ss.g, ctx);
    if (ret)
      return ret;
  }
  return 0;
}

int zx_walk_so_unknown_elems_and_content(struct zx_ctx* c, struct zx_elem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  struct zx_str_s* ss;
  struct zx_any_elem_s* ae;
  int ret;
  
  for (ae = x->any_elem; ae; ae = (struct zx_any_elem_s*)ae->gg.g.n) {  /* unknown elements */
    ret = zx_WALK_SO_simple_elem(c, &ae->gg, ctx, callback);
    if (ret)
      return ret;
  }
  
  for (ss = x->content; ss; ss = (struct zx_str_s*)ss->g.n) {   /* content */
    ret = callback(&ss->g, ctx);
    if (ret)
      return ret;
  }
  return 0;
}

struct zx_elem_s* zx_deep_clone_simple_elems(struct zx_ctx* c, struct zx_elem_s* x, int dup_strs)
{
  struct zx_elem_s* se;
  struct zx_elem_s* sen;
  struct zx_elem_s* senn;
  
  for (senn = 0, se = x; se; se = (struct zx_elem_s*)se->g.n) {
    sen = zx_DEEP_CLONE_simple_elem(c, se, dup_strs);
    if (!senn)
      x = sen;
    else
      senn->g.n = &sen->g;
    senn = sen;
  }
  return x;
}


int zx_walk_so_simple_elems(struct zx_ctx* c, struct zx_elem_s* se, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret;

  for (; se; se = (struct zx_elem_s*)se->g.n) {
    ret = zx_WALK_SO_simple_elem(c, se, ctx, callback);
    if (ret)
      return ret;
  }
  return 0;
}

void zx_free_simple_elems(struct zx_ctx* c, struct zx_elem_s* se, int free_strs)
{
  struct zx_elem_s* sen;
  for (; se; se = sen) {
    sen = (struct zx_elem_s*)se->g.n;
    zx_FREE_simple_elem(c, se, free_strs);
  }
}

void zx_dup_strs_simple_elems(struct zx_ctx* c, struct zx_elem_s* se)
{
  for (; se; se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_simple_elem(c, se);
}

#if 0
/* In ionterest of efficiency, we leave these inlined. */
int zx_len_simple_elems(struct zx_ctx* c, struct zx_elem_s* se, int siz)
{
  int len = 0;
  for (; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, siz);
  return len;
}

char* zx_enc_so_simple_elems(struct zx_ctx* c, struct zx_elem_s* se, char* p, char* name, int len)
{
  for (; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, name, len);
  return p;
}
#endif

/* EOF -- zxlib.c */
