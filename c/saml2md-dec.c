/* c/saml2md-dec.c - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Code generation design Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for terms and conditions
 * of use. Some aspects of code generation were driven by schema
 * descriptions that were used as input and may be subject to their own copyright.
 * Code generation uses a template, whose copyright statement follows. */

/** dec-templ.c  -  XML decoder template, used in code generation
 ** Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing. See file COPYING.
 ** Id: dec-templ.c,v 1.13 2006/08/28 05:23:23 sampo Exp $
 **
 ** 28.5.2006, created, Sampo Kellomaki (sampo@iki.fi)
 ** 8.8.2006,  reworked namespace handling --Sampo
 ** 12.8.2006, added special scanning of xmlns to avoid backtracking elem recognition --Sampo
 **/

#include "errmac.h"
#include "zx.h"
#include "c/saml2md-const.h"
#include "c/saml2md-data.h"

#define TPF zxmd_

#ifndef ZX_ATTR_DEC_EXT
#define ZX_ATTR_DEC_EXT(ss)  /* Extension point called just after decoding known attribute */
#endif

#ifndef ZX_XMLNS_DEC_EXT
#define ZX_XMLNS_DEC_EXT(ss) /* Extension point called just after decoding xmlns attribute */
#endif

#ifndef ZX_UNKNOWN_ATTR_DEC_EXT
#define ZX_UNKNOWN_ATTR_DEC_EXT(ss) /* Extension point called just after decoding unknown attr */
#endif

#ifndef ZX_START_DEC_EXT
#define ZX_START_DEC_EXT(x) /* Extension point called just after decoding element name and allocating struct, but before decoding any of the attributes. */
#endif

#ifndef ZX_END_DEC_EXT
#define ZX_END_DEC_EXT(x) /* Extension point called just after decoding the entire element. */
#endif

#ifndef ZX_START_BODY_DEC_EXT
#define ZX_START_BODY_DEC_EXT(x) /* Extension point called just after decoding element tag, including attributes, but before decoding the body of the element. */
#endif

#ifndef ZX_PI_DEC_EXT
#define ZX_PI_DEC_EXT(pi) /* Extension point called just after decoding processing instruction */
#endif

#ifndef ZX_COMMENT_DEC_EXT
#define ZX_COMMENT_DEC_EXT(comment) /* Extension point called just after decoding comment */
#endif

#ifndef ZX_CONTENT_DEC
#define ZX_CONTENT_DEC(ss) /* Extension point called just after decoding string content */
#endif

#ifndef ZX_UNKNOWN_ELEM_DEC_EXT
#define ZX_UNKNOWN_ELEM_DEC_EXT(elem) /* Extension point called just after decoding unknown element */
#endif



/* FUNC(zxmd_DEC_ds_CanonicalizationMethod) */

#define EL_NAME   ds_CanonicalizationMethod
#define EL_STRUCT zxmd_ds_CanonicalizationMethod_s
#define EL_NS     ds
#define EL_TAG    CanonicalizationMethod

struct zxmd_ds_CanonicalizationMethod_s* zxmd_DEC_ds_CanonicalizationMethod(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_ds_CanonicalizationMethod_s* x = ZX_ZALLOC(c, struct zxmd_ds_CanonicalizationMethod_s);
  x->gg.g.tok = zxmd_ds_CanonicalizationMethod_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_ds_CanonicalizationMethod_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Algorithm_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Algorithm->g;
      x->Algorithm = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_ds_DSAKeyValue) */

#define EL_NAME   ds_DSAKeyValue
#define EL_STRUCT zxmd_ds_DSAKeyValue_s
#define EL_NS     ds
#define EL_TAG    DSAKeyValue

struct zxmd_ds_DSAKeyValue_s* zxmd_DEC_ds_DSAKeyValue(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_ds_DSAKeyValue_s* x = ZX_ZALLOC(c, struct zxmd_ds_DSAKeyValue_s);
  x->gg.g.tok = zxmd_ds_DSAKeyValue_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_ds_DSAKeyValue_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_P_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->P->g;
            x->P = el;
            break;
          case zxmd_ds_Q_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->Q->g;
            x->Q = el;
            break;
          case zxmd_ds_G_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->G->g;
            x->G = el;
            break;
          case zxmd_ds_Y_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->Y->g;
            x->Y = el;
            break;
          case zxmd_ds_J_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->J->g;
            x->J = el;
            break;
          case zxmd_ds_Seed_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->Seed->g;
            x->Seed = el;
            break;
          case zxmd_ds_PgenCounter_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->PgenCounter->g;
            x->PgenCounter = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_ds_DigestMethod) */

#define EL_NAME   ds_DigestMethod
#define EL_STRUCT zxmd_ds_DigestMethod_s
#define EL_NS     ds
#define EL_TAG    DigestMethod

struct zxmd_ds_DigestMethod_s* zxmd_DEC_ds_DigestMethod(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_ds_DigestMethod_s* x = ZX_ZALLOC(c, struct zxmd_ds_DigestMethod_s);
  x->gg.g.tok = zxmd_ds_DigestMethod_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_ds_DigestMethod_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Algorithm_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Algorithm->g;
      x->Algorithm = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_ds_KeyInfo) */

#define EL_NAME   ds_KeyInfo
#define EL_STRUCT zxmd_ds_KeyInfo_s
#define EL_NS     ds
#define EL_TAG    KeyInfo

struct zxmd_ds_KeyInfo_s* zxmd_DEC_ds_KeyInfo(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_ds_KeyInfo_s* x = ZX_ZALLOC(c, struct zxmd_ds_KeyInfo_s);
  x->gg.g.tok = zxmd_ds_KeyInfo_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_ds_KeyInfo_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Id->g;
      x->Id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_KeyName_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->KeyName->g;
            x->KeyName = el;
            break;
          case zxmd_ds_KeyValue_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_KeyValue(c);
            el->g.n = &x->KeyValue->gg.g;
            x->KeyValue = (struct zxmd_ds_KeyValue_s*)el;
            break;
          case zxmd_ds_RetrievalMethod_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_RetrievalMethod(c);
            el->g.n = &x->RetrievalMethod->gg.g;
            x->RetrievalMethod = (struct zxmd_ds_RetrievalMethod_s*)el;
            break;
          case zxmd_ds_X509Data_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_X509Data(c);
            el->g.n = &x->X509Data->gg.g;
            x->X509Data = (struct zxmd_ds_X509Data_s*)el;
            break;
          case zxmd_ds_PGPData_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_PGPData(c);
            el->g.n = &x->PGPData->gg.g;
            x->PGPData = (struct zxmd_ds_PGPData_s*)el;
            break;
          case zxmd_ds_SPKIData_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_SPKIData(c);
            el->g.n = &x->SPKIData->gg.g;
            x->SPKIData = (struct zxmd_ds_SPKIData_s*)el;
            break;
          case zxmd_ds_MgmtData_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->MgmtData->g;
            x->MgmtData = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_ds_KeyValue) */

#define EL_NAME   ds_KeyValue
#define EL_STRUCT zxmd_ds_KeyValue_s
#define EL_NS     ds
#define EL_TAG    KeyValue

struct zxmd_ds_KeyValue_s* zxmd_DEC_ds_KeyValue(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_ds_KeyValue_s* x = ZX_ZALLOC(c, struct zxmd_ds_KeyValue_s);
  x->gg.g.tok = zxmd_ds_KeyValue_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_ds_KeyValue_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_DSAKeyValue_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_DSAKeyValue(c);
            el->g.n = &x->DSAKeyValue->gg.g;
            x->DSAKeyValue = (struct zxmd_ds_DSAKeyValue_s*)el;
            break;
          case zxmd_ds_RSAKeyValue_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_RSAKeyValue(c);
            el->g.n = &x->RSAKeyValue->gg.g;
            x->RSAKeyValue = (struct zxmd_ds_RSAKeyValue_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_ds_Manifest) */

#define EL_NAME   ds_Manifest
#define EL_STRUCT zxmd_ds_Manifest_s
#define EL_NS     ds
#define EL_TAG    Manifest

struct zxmd_ds_Manifest_s* zxmd_DEC_ds_Manifest(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_ds_Manifest_s* x = ZX_ZALLOC(c, struct zxmd_ds_Manifest_s);
  x->gg.g.tok = zxmd_ds_Manifest_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_ds_Manifest_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Id->g;
      x->Id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_Reference_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_Reference(c);
            el->g.n = &x->Reference->gg.g;
            x->Reference = (struct zxmd_ds_Reference_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_ds_Object) */

#define EL_NAME   ds_Object
#define EL_STRUCT zxmd_ds_Object_s
#define EL_NS     ds
#define EL_TAG    Object

struct zxmd_ds_Object_s* zxmd_DEC_ds_Object(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_ds_Object_s* x = ZX_ZALLOC(c, struct zxmd_ds_Object_s);
  x->gg.g.tok = zxmd_ds_Object_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_ds_Object_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Id->g;
      x->Id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_MimeType_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->MimeType->g;
      x->MimeType = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Encoding_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Encoding->g;
      x->Encoding = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_ds_PGPData) */

#define EL_NAME   ds_PGPData
#define EL_STRUCT zxmd_ds_PGPData_s
#define EL_NS     ds
#define EL_TAG    PGPData

struct zxmd_ds_PGPData_s* zxmd_DEC_ds_PGPData(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_ds_PGPData_s* x = ZX_ZALLOC(c, struct zxmd_ds_PGPData_s);
  x->gg.g.tok = zxmd_ds_PGPData_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_ds_PGPData_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_PGPKeyID_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->PGPKeyID->g;
            x->PGPKeyID = el;
            break;
          case zxmd_ds_PGPKeyPacket_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->PGPKeyPacket->g;
            x->PGPKeyPacket = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_ds_RSAKeyValue) */

#define EL_NAME   ds_RSAKeyValue
#define EL_STRUCT zxmd_ds_RSAKeyValue_s
#define EL_NS     ds
#define EL_TAG    RSAKeyValue

struct zxmd_ds_RSAKeyValue_s* zxmd_DEC_ds_RSAKeyValue(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_ds_RSAKeyValue_s* x = ZX_ZALLOC(c, struct zxmd_ds_RSAKeyValue_s);
  x->gg.g.tok = zxmd_ds_RSAKeyValue_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_ds_RSAKeyValue_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_Modulus_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->Modulus->g;
            x->Modulus = el;
            break;
          case zxmd_ds_Exponent_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->Exponent->g;
            x->Exponent = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_ds_Reference) */

#define EL_NAME   ds_Reference
#define EL_STRUCT zxmd_ds_Reference_s
#define EL_NS     ds
#define EL_TAG    Reference

struct zxmd_ds_Reference_s* zxmd_DEC_ds_Reference(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_ds_Reference_s* x = ZX_ZALLOC(c, struct zxmd_ds_Reference_s);
  x->gg.g.tok = zxmd_ds_Reference_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_ds_Reference_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Id->g;
      x->Id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_URI_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->URI->g;
      x->URI = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Type_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Type->g;
      x->Type = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_Transforms_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_Transforms(c);
            el->g.n = &x->Transforms->gg.g;
            x->Transforms = (struct zxmd_ds_Transforms_s*)el;
            break;
          case zxmd_ds_DigestMethod_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_DigestMethod(c);
            el->g.n = &x->DigestMethod->gg.g;
            x->DigestMethod = (struct zxmd_ds_DigestMethod_s*)el;
            break;
          case zxmd_ds_DigestValue_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->DigestValue->g;
            x->DigestValue = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_ds_RetrievalMethod) */

#define EL_NAME   ds_RetrievalMethod
#define EL_STRUCT zxmd_ds_RetrievalMethod_s
#define EL_NS     ds
#define EL_TAG    RetrievalMethod

struct zxmd_ds_RetrievalMethod_s* zxmd_DEC_ds_RetrievalMethod(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_ds_RetrievalMethod_s* x = ZX_ZALLOC(c, struct zxmd_ds_RetrievalMethod_s);
  x->gg.g.tok = zxmd_ds_RetrievalMethod_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_ds_RetrievalMethod_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_URI_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->URI->g;
      x->URI = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Type_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Type->g;
      x->Type = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_Transforms_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_Transforms(c);
            el->g.n = &x->Transforms->gg.g;
            x->Transforms = (struct zxmd_ds_Transforms_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_ds_SPKIData) */

#define EL_NAME   ds_SPKIData
#define EL_STRUCT zxmd_ds_SPKIData_s
#define EL_NS     ds
#define EL_TAG    SPKIData

struct zxmd_ds_SPKIData_s* zxmd_DEC_ds_SPKIData(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_ds_SPKIData_s* x = ZX_ZALLOC(c, struct zxmd_ds_SPKIData_s);
  x->gg.g.tok = zxmd_ds_SPKIData_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_ds_SPKIData_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_SPKISexp_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->SPKISexp->g;
            x->SPKISexp = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_ds_Signature) */

#define EL_NAME   ds_Signature
#define EL_STRUCT zxmd_ds_Signature_s
#define EL_NS     ds
#define EL_TAG    Signature

struct zxmd_ds_Signature_s* zxmd_DEC_ds_Signature(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_ds_Signature_s* x = ZX_ZALLOC(c, struct zxmd_ds_Signature_s);
  x->gg.g.tok = zxmd_ds_Signature_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_ds_Signature_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Id->g;
      x->Id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_SignedInfo_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_SignedInfo(c);
            el->g.n = &x->SignedInfo->gg.g;
            x->SignedInfo = (struct zxmd_ds_SignedInfo_s*)el;
            break;
          case zxmd_ds_SignatureValue_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_SignatureValue(c);
            el->g.n = &x->SignatureValue->gg.g;
            x->SignatureValue = (struct zxmd_ds_SignatureValue_s*)el;
            break;
          case zxmd_ds_KeyInfo_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_KeyInfo(c);
            el->g.n = &x->KeyInfo->gg.g;
            x->KeyInfo = (struct zxmd_ds_KeyInfo_s*)el;
            break;
          case zxmd_ds_Object_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_Object(c);
            el->g.n = &x->Object->gg.g;
            x->Object = (struct zxmd_ds_Object_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_ds_SignatureMethod) */

#define EL_NAME   ds_SignatureMethod
#define EL_STRUCT zxmd_ds_SignatureMethod_s
#define EL_NS     ds
#define EL_TAG    SignatureMethod

struct zxmd_ds_SignatureMethod_s* zxmd_DEC_ds_SignatureMethod(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_ds_SignatureMethod_s* x = ZX_ZALLOC(c, struct zxmd_ds_SignatureMethod_s);
  x->gg.g.tok = zxmd_ds_SignatureMethod_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_ds_SignatureMethod_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Algorithm_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Algorithm->g;
      x->Algorithm = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_HMACOutputLength_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->HMACOutputLength->g;
            x->HMACOutputLength = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_ds_SignatureProperties) */

#define EL_NAME   ds_SignatureProperties
#define EL_STRUCT zxmd_ds_SignatureProperties_s
#define EL_NS     ds
#define EL_TAG    SignatureProperties

struct zxmd_ds_SignatureProperties_s* zxmd_DEC_ds_SignatureProperties(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_ds_SignatureProperties_s* x = ZX_ZALLOC(c, struct zxmd_ds_SignatureProperties_s);
  x->gg.g.tok = zxmd_ds_SignatureProperties_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_ds_SignatureProperties_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Id->g;
      x->Id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_SignatureProperty_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_SignatureProperty(c);
            el->g.n = &x->SignatureProperty->gg.g;
            x->SignatureProperty = (struct zxmd_ds_SignatureProperty_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_ds_SignatureProperty) */

#define EL_NAME   ds_SignatureProperty
#define EL_STRUCT zxmd_ds_SignatureProperty_s
#define EL_NS     ds
#define EL_TAG    SignatureProperty

struct zxmd_ds_SignatureProperty_s* zxmd_DEC_ds_SignatureProperty(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_ds_SignatureProperty_s* x = ZX_ZALLOC(c, struct zxmd_ds_SignatureProperty_s);
  x->gg.g.tok = zxmd_ds_SignatureProperty_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_ds_SignatureProperty_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Target_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Target->g;
      x->Target = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Id->g;
      x->Id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_ds_SignatureValue) */

#define EL_NAME   ds_SignatureValue
#define EL_STRUCT zxmd_ds_SignatureValue_s
#define EL_NS     ds
#define EL_TAG    SignatureValue

struct zxmd_ds_SignatureValue_s* zxmd_DEC_ds_SignatureValue(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_ds_SignatureValue_s* x = ZX_ZALLOC(c, struct zxmd_ds_SignatureValue_s);
  x->gg.g.tok = zxmd_ds_SignatureValue_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_ds_SignatureValue_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Id->g;
      x->Id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_ds_SignedInfo) */

#define EL_NAME   ds_SignedInfo
#define EL_STRUCT zxmd_ds_SignedInfo_s
#define EL_NS     ds
#define EL_TAG    SignedInfo

struct zxmd_ds_SignedInfo_s* zxmd_DEC_ds_SignedInfo(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_ds_SignedInfo_s* x = ZX_ZALLOC(c, struct zxmd_ds_SignedInfo_s);
  x->gg.g.tok = zxmd_ds_SignedInfo_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_ds_SignedInfo_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Id->g;
      x->Id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_CanonicalizationMethod_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_CanonicalizationMethod(c);
            el->g.n = &x->CanonicalizationMethod->gg.g;
            x->CanonicalizationMethod = (struct zxmd_ds_CanonicalizationMethod_s*)el;
            break;
          case zxmd_ds_SignatureMethod_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_SignatureMethod(c);
            el->g.n = &x->SignatureMethod->gg.g;
            x->SignatureMethod = (struct zxmd_ds_SignatureMethod_s*)el;
            break;
          case zxmd_ds_Reference_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_Reference(c);
            el->g.n = &x->Reference->gg.g;
            x->Reference = (struct zxmd_ds_Reference_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_ds_Transform) */

#define EL_NAME   ds_Transform
#define EL_STRUCT zxmd_ds_Transform_s
#define EL_NS     ds
#define EL_TAG    Transform

struct zxmd_ds_Transform_s* zxmd_DEC_ds_Transform(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_ds_Transform_s* x = ZX_ZALLOC(c, struct zxmd_ds_Transform_s);
  x->gg.g.tok = zxmd_ds_Transform_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_ds_Transform_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Algorithm_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Algorithm->g;
      x->Algorithm = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_XPath_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->XPath->g;
            x->XPath = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_ds_Transforms) */

#define EL_NAME   ds_Transforms
#define EL_STRUCT zxmd_ds_Transforms_s
#define EL_NS     ds
#define EL_TAG    Transforms

struct zxmd_ds_Transforms_s* zxmd_DEC_ds_Transforms(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_ds_Transforms_s* x = ZX_ZALLOC(c, struct zxmd_ds_Transforms_s);
  x->gg.g.tok = zxmd_ds_Transforms_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_ds_Transforms_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_Transform_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_Transform(c);
            el->g.n = &x->Transform->gg.g;
            x->Transform = (struct zxmd_ds_Transform_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_ds_X509Data) */

#define EL_NAME   ds_X509Data
#define EL_STRUCT zxmd_ds_X509Data_s
#define EL_NS     ds
#define EL_TAG    X509Data

struct zxmd_ds_X509Data_s* zxmd_DEC_ds_X509Data(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_ds_X509Data_s* x = ZX_ZALLOC(c, struct zxmd_ds_X509Data_s);
  x->gg.g.tok = zxmd_ds_X509Data_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_ds_X509Data_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_X509IssuerSerial_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_X509IssuerSerial(c);
            el->g.n = &x->X509IssuerSerial->gg.g;
            x->X509IssuerSerial = (struct zxmd_ds_X509IssuerSerial_s*)el;
            break;
          case zxmd_ds_X509SKI_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->X509SKI->g;
            x->X509SKI = el;
            break;
          case zxmd_ds_X509SubjectName_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->X509SubjectName->g;
            x->X509SubjectName = el;
            break;
          case zxmd_ds_X509Certificate_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->X509Certificate->g;
            x->X509Certificate = el;
            break;
          case zxmd_ds_X509CRL_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->X509CRL->g;
            x->X509CRL = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_ds_X509IssuerSerial) */

#define EL_NAME   ds_X509IssuerSerial
#define EL_STRUCT zxmd_ds_X509IssuerSerial_s
#define EL_NS     ds
#define EL_TAG    X509IssuerSerial

struct zxmd_ds_X509IssuerSerial_s* zxmd_DEC_ds_X509IssuerSerial(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_ds_X509IssuerSerial_s* x = ZX_ZALLOC(c, struct zxmd_ds_X509IssuerSerial_s);
  x->gg.g.tok = zxmd_ds_X509IssuerSerial_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_ds_X509IssuerSerial_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_X509IssuerName_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->X509IssuerName->g;
            x->X509IssuerName = el;
            break;
          case zxmd_ds_X509SerialNumber_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->X509SerialNumber->g;
            x->X509SerialNumber = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_m20_AdditionalMetaLocation) */

#define EL_NAME   m20_AdditionalMetaLocation
#define EL_STRUCT zxmd_m20_AdditionalMetaLocation_s
#define EL_NS     m20
#define EL_TAG    AdditionalMetaLocation

struct zxmd_m20_AdditionalMetaLocation_s* zxmd_DEC_m20_AdditionalMetaLocation(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_m20_AdditionalMetaLocation_s* x = ZX_ZALLOC(c, struct zxmd_m20_AdditionalMetaLocation_s);
  x->gg.g.tok = zxmd_m20_AdditionalMetaLocation_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_m20_AdditionalMetaLocation_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_namespace_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->namespace->g;
      x->namespace = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_m20_AffiliationDescriptor) */

#define EL_NAME   m20_AffiliationDescriptor
#define EL_STRUCT zxmd_m20_AffiliationDescriptor_s
#define EL_NS     m20
#define EL_TAG    AffiliationDescriptor

struct zxmd_m20_AffiliationDescriptor_s* zxmd_DEC_m20_AffiliationDescriptor(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_m20_AffiliationDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_m20_AffiliationDescriptor_s);
  x->gg.g.tok = zxmd_m20_AffiliationDescriptor_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_m20_AffiliationDescriptor_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_affiliationOwnerID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->affiliationOwnerID->g;
      x->affiliationOwnerID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_validUntil_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->validUntil->g;
      x->validUntil = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_cacheDuration_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->cacheDuration->g;
      x->cacheDuration = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->id->g;
      x->id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_m20_AffiliateMember_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->AffiliateMember->g;
            x->AffiliateMember = el;
            break;
          case zxmd_m20_Extension_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_Extension(c);
            el->g.n = &x->Extension->gg.g;
            x->Extension = (struct zxmd_m20_Extension_s*)el;
            break;
          case zxmd_m20_KeyDescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_KeyDescriptor(c);
            el->g.n = &x->KeyDescriptor->gg.g;
            x->KeyDescriptor = (struct zxmd_m20_KeyDescriptor_s*)el;
            break;
          case zxmd_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zxmd_ds_Signature_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_m20_AssertionConsumerServiceURL) */

#define EL_NAME   m20_AssertionConsumerServiceURL
#define EL_STRUCT zxmd_m20_AssertionConsumerServiceURL_s
#define EL_NS     m20
#define EL_TAG    AssertionConsumerServiceURL

struct zxmd_m20_AssertionConsumerServiceURL_s* zxmd_DEC_m20_AssertionConsumerServiceURL(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_m20_AssertionConsumerServiceURL_s* x = ZX_ZALLOC(c, struct zxmd_m20_AssertionConsumerServiceURL_s);
  x->gg.g.tok = zxmd_m20_AssertionConsumerServiceURL_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_m20_AssertionConsumerServiceURL_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->id->g;
      x->id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_isDefault_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->isDefault->g;
      x->isDefault = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_m20_ContactPerson) */

#define EL_NAME   m20_ContactPerson
#define EL_STRUCT zxmd_m20_ContactPerson_s
#define EL_NS     m20
#define EL_TAG    ContactPerson

struct zxmd_m20_ContactPerson_s* zxmd_DEC_m20_ContactPerson(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_m20_ContactPerson_s* x = ZX_ZALLOC(c, struct zxmd_m20_ContactPerson_s);
  x->gg.g.tok = zxmd_m20_ContactPerson_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_m20_ContactPerson_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_libertyPrincipalIdentifier_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->libertyPrincipalIdentifier->g;
      x->libertyPrincipalIdentifier = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_contactType_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->contactType->g;
      x->contactType = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_m20_Company_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->Company->g;
            x->Company = el;
            break;
          case zxmd_m20_GivenName_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->GivenName->g;
            x->GivenName = el;
            break;
          case zxmd_m20_SurName_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->SurName->g;
            x->SurName = el;
            break;
          case zxmd_m20_EmailAddress_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->EmailAddress->g;
            x->EmailAddress = el;
            break;
          case zxmd_m20_TelephoneNumber_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->TelephoneNumber->g;
            x->TelephoneNumber = el;
            break;
          case zxmd_m20_Extension_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_Extension(c);
            el->g.n = &x->Extension->gg.g;
            x->Extension = (struct zxmd_m20_Extension_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_m20_EntitiesDescriptor) */

#define EL_NAME   m20_EntitiesDescriptor
#define EL_STRUCT zxmd_m20_EntitiesDescriptor_s
#define EL_NS     m20
#define EL_TAG    EntitiesDescriptor

struct zxmd_m20_EntitiesDescriptor_s* zxmd_DEC_m20_EntitiesDescriptor(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_m20_EntitiesDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_m20_EntitiesDescriptor_s);
  x->gg.g.tok = zxmd_m20_EntitiesDescriptor_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_m20_EntitiesDescriptor_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_m20_EntityDescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_EntityDescriptor(c);
            el->g.n = &x->EntityDescriptor->gg.g;
            x->EntityDescriptor = (struct zxmd_m20_EntityDescriptor_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_m20_EntityDescriptor) */

#define EL_NAME   m20_EntityDescriptor
#define EL_STRUCT zxmd_m20_EntityDescriptor_s
#define EL_NS     m20
#define EL_TAG    EntityDescriptor

struct zxmd_m20_EntityDescriptor_s* zxmd_DEC_m20_EntityDescriptor(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_m20_EntityDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_m20_EntityDescriptor_s);
  x->gg.g.tok = zxmd_m20_EntityDescriptor_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_m20_EntityDescriptor_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_providerID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->providerID->g;
      x->providerID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->id->g;
      x->id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_validUntil_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->validUntil->g;
      x->validUntil = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_cacheDuration_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->cacheDuration->g;
      x->cacheDuration = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_m20_IDPDescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_IDPDescriptor(c);
            el->g.n = &x->IDPDescriptor->gg.g;
            x->IDPDescriptor = (struct zxmd_m20_IDPDescriptor_s*)el;
            break;
          case zxmd_m20_SPDescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_SPDescriptor(c);
            el->g.n = &x->SPDescriptor->gg.g;
            x->SPDescriptor = (struct zxmd_m20_SPDescriptor_s*)el;
            break;
          case zxmd_m20_AffiliationDescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_AffiliationDescriptor(c);
            el->g.n = &x->AffiliationDescriptor->gg.g;
            x->AffiliationDescriptor = (struct zxmd_m20_AffiliationDescriptor_s*)el;
            break;
          case zxmd_m20_ContactPerson_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_ContactPerson(c);
            el->g.n = &x->ContactPerson->gg.g;
            x->ContactPerson = (struct zxmd_m20_ContactPerson_s*)el;
            break;
          case zxmd_m20_Organization_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_Organization(c);
            el->g.n = &x->Organization->gg.g;
            x->Organization = (struct zxmd_m20_Organization_s*)el;
            break;
          case zxmd_m20_Extension_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_Extension(c);
            el->g.n = &x->Extension->gg.g;
            x->Extension = (struct zxmd_m20_Extension_s*)el;
            break;
          case zxmd_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zxmd_ds_Signature_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_m20_Extension) */

#define EL_NAME   m20_Extension
#define EL_STRUCT zxmd_m20_Extension_s
#define EL_NS     m20
#define EL_TAG    Extension

struct zxmd_m20_Extension_s* zxmd_DEC_m20_Extension(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_m20_Extension_s* x = ZX_ZALLOC(c, struct zxmd_m20_Extension_s);
  x->gg.g.tok = zxmd_m20_Extension_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_m20_Extension_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_m20_IDPDescriptor) */

#define EL_NAME   m20_IDPDescriptor
#define EL_STRUCT zxmd_m20_IDPDescriptor_s
#define EL_NS     m20
#define EL_TAG    IDPDescriptor

struct zxmd_m20_IDPDescriptor_s* zxmd_DEC_m20_IDPDescriptor(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_m20_IDPDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_m20_IDPDescriptor_s);
  x->gg.g.tok = zxmd_m20_IDPDescriptor_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_m20_IDPDescriptor_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_protocolSupportEnumeration_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->protocolSupportEnumeration->g;
      x->protocolSupportEnumeration = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->id->g;
      x->id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_validUntil_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->validUntil->g;
      x->validUntil = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_cacheDuration_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->cacheDuration->g;
      x->cacheDuration = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_m20_KeyDescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_KeyDescriptor(c);
            el->g.n = &x->KeyDescriptor->gg.g;
            x->KeyDescriptor = (struct zxmd_m20_KeyDescriptor_s*)el;
            break;
          case zxmd_m20_SoapEndpoint_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->SoapEndpoint->g;
            x->SoapEndpoint = el;
            break;
          case zxmd_m20_SingleLogoutServiceURL_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->SingleLogoutServiceURL->g;
            x->SingleLogoutServiceURL = el;
            break;
          case zxmd_m20_SingleLogoutServiceReturnURL_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->SingleLogoutServiceReturnURL->g;
            x->SingleLogoutServiceReturnURL = el;
            break;
          case zxmd_m20_FederationTerminationServiceURL_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->FederationTerminationServiceURL->g;
            x->FederationTerminationServiceURL = el;
            break;
          case zxmd_m20_FederationTerminationServiceReturnURL_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->FederationTerminationServiceReturnURL->g;
            x->FederationTerminationServiceReturnURL = el;
            break;
          case zxmd_m20_FederationTerminationNotificationProtocolProfile_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->FederationTerminationNotificationProtocolProfile->g;
            x->FederationTerminationNotificationProtocolProfile = el;
            break;
          case zxmd_m20_SingleLogoutProtocolProfile_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->SingleLogoutProtocolProfile->g;
            x->SingleLogoutProtocolProfile = el;
            break;
          case zxmd_m20_RegisterNameIdentifierProtocolProfile_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->RegisterNameIdentifierProtocolProfile->g;
            x->RegisterNameIdentifierProtocolProfile = el;
            break;
          case zxmd_m20_RegisterNameIdentifierServiceURL_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->RegisterNameIdentifierServiceURL->g;
            x->RegisterNameIdentifierServiceURL = el;
            break;
          case zxmd_m20_RegisterNameIdentifierServiceReturnURL_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->RegisterNameIdentifierServiceReturnURL->g;
            x->RegisterNameIdentifierServiceReturnURL = el;
            break;
          case zxmd_m20_NameIdentifierMappingProtocolProfile_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->NameIdentifierMappingProtocolProfile->g;
            x->NameIdentifierMappingProtocolProfile = el;
            break;
          case zxmd_m20_NameIdentifierMappingEncryptionProfile_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->NameIdentifierMappingEncryptionProfile->g;
            x->NameIdentifierMappingEncryptionProfile = el;
            break;
          case zxmd_m20_Organization_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_Organization(c);
            el->g.n = &x->Organization->gg.g;
            x->Organization = (struct zxmd_m20_Organization_s*)el;
            break;
          case zxmd_m20_ContactPerson_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_ContactPerson(c);
            el->g.n = &x->ContactPerson->gg.g;
            x->ContactPerson = (struct zxmd_m20_ContactPerson_s*)el;
            break;
          case zxmd_m20_AdditionalMetaLocation_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_AdditionalMetaLocation(c);
            el->g.n = &x->AdditionalMetaLocation->gg.g;
            x->AdditionalMetaLocation = (struct zxmd_m20_AdditionalMetaLocation_s*)el;
            break;
          case zxmd_m20_Extension_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_Extension(c);
            el->g.n = &x->Extension->gg.g;
            x->Extension = (struct zxmd_m20_Extension_s*)el;
            break;
          case zxmd_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zxmd_ds_Signature_s*)el;
            break;
          case zxmd_m20_SingleSignOnServiceURL_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->SingleSignOnServiceURL->g;
            x->SingleSignOnServiceURL = el;
            break;
          case zxmd_m20_SingleSignOnProtocolProfile_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->SingleSignOnProtocolProfile->g;
            x->SingleSignOnProtocolProfile = el;
            break;
          case zxmd_m20_AuthnServiceURL_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->AuthnServiceURL->g;
            x->AuthnServiceURL = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_m20_KeyDescriptor) */

#define EL_NAME   m20_KeyDescriptor
#define EL_STRUCT zxmd_m20_KeyDescriptor_s
#define EL_NS     m20
#define EL_TAG    KeyDescriptor

struct zxmd_m20_KeyDescriptor_s* zxmd_DEC_m20_KeyDescriptor(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_m20_KeyDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_m20_KeyDescriptor_s);
  x->gg.g.tok = zxmd_m20_KeyDescriptor_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_m20_KeyDescriptor_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_use_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->use->g;
      x->use = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_m20_EncryptionMethod_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->EncryptionMethod->g;
            x->EncryptionMethod = el;
            break;
          case zxmd_m20_KeySize_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->KeySize->g;
            x->KeySize = el;
            break;
          case zxmd_ds_KeyInfo_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_KeyInfo(c);
            el->g.n = &x->KeyInfo->gg.g;
            x->KeyInfo = (struct zxmd_ds_KeyInfo_s*)el;
            break;
          case zxmd_m20_Extension_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_Extension(c);
            el->g.n = &x->Extension->gg.g;
            x->Extension = (struct zxmd_m20_Extension_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_m20_Organization) */

#define EL_NAME   m20_Organization
#define EL_STRUCT zxmd_m20_Organization_s
#define EL_NS     m20
#define EL_TAG    Organization

struct zxmd_m20_Organization_s* zxmd_DEC_m20_Organization(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_m20_Organization_s* x = ZX_ZALLOC(c, struct zxmd_m20_Organization_s);
  x->gg.g.tok = zxmd_m20_Organization_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_m20_Organization_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_m20_OrganizationName_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_OrganizationName(c);
            el->g.n = &x->OrganizationName->gg.g;
            x->OrganizationName = (struct zxmd_m20_OrganizationName_s*)el;
            break;
          case zxmd_m20_OrganizationDisplayName_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_OrganizationDisplayName(c);
            el->g.n = &x->OrganizationDisplayName->gg.g;
            x->OrganizationDisplayName = (struct zxmd_m20_OrganizationDisplayName_s*)el;
            break;
          case zxmd_m20_OrganizationURL_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_OrganizationURL(c);
            el->g.n = &x->OrganizationURL->gg.g;
            x->OrganizationURL = (struct zxmd_m20_OrganizationURL_s*)el;
            break;
          case zxmd_m20_Extension_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_Extension(c);
            el->g.n = &x->Extension->gg.g;
            x->Extension = (struct zxmd_m20_Extension_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_m20_OrganizationDisplayName) */

#define EL_NAME   m20_OrganizationDisplayName
#define EL_STRUCT zxmd_m20_OrganizationDisplayName_s
#define EL_NS     m20
#define EL_TAG    OrganizationDisplayName

struct zxmd_m20_OrganizationDisplayName_s* zxmd_DEC_m20_OrganizationDisplayName(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_m20_OrganizationDisplayName_s* x = ZX_ZALLOC(c, struct zxmd_m20_OrganizationDisplayName_s);
  x->gg.g.tok = zxmd_m20_OrganizationDisplayName_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_m20_OrganizationDisplayName_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_lang_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->lang->g;
      x->lang = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_m20_OrganizationName) */

#define EL_NAME   m20_OrganizationName
#define EL_STRUCT zxmd_m20_OrganizationName_s
#define EL_NS     m20
#define EL_TAG    OrganizationName

struct zxmd_m20_OrganizationName_s* zxmd_DEC_m20_OrganizationName(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_m20_OrganizationName_s* x = ZX_ZALLOC(c, struct zxmd_m20_OrganizationName_s);
  x->gg.g.tok = zxmd_m20_OrganizationName_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_m20_OrganizationName_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_lang_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->lang->g;
      x->lang = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_m20_OrganizationURL) */

#define EL_NAME   m20_OrganizationURL
#define EL_STRUCT zxmd_m20_OrganizationURL_s
#define EL_NS     m20
#define EL_TAG    OrganizationURL

struct zxmd_m20_OrganizationURL_s* zxmd_DEC_m20_OrganizationURL(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_m20_OrganizationURL_s* x = ZX_ZALLOC(c, struct zxmd_m20_OrganizationURL_s);
  x->gg.g.tok = zxmd_m20_OrganizationURL_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_m20_OrganizationURL_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_lang_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->lang->g;
      x->lang = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_m20_SPDescriptor) */

#define EL_NAME   m20_SPDescriptor
#define EL_STRUCT zxmd_m20_SPDescriptor_s
#define EL_NS     m20
#define EL_TAG    SPDescriptor

struct zxmd_m20_SPDescriptor_s* zxmd_DEC_m20_SPDescriptor(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_m20_SPDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_m20_SPDescriptor_s);
  x->gg.g.tok = zxmd_m20_SPDescriptor_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_m20_SPDescriptor_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_protocolSupportEnumeration_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->protocolSupportEnumeration->g;
      x->protocolSupportEnumeration = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->id->g;
      x->id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_validUntil_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->validUntil->g;
      x->validUntil = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_cacheDuration_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->cacheDuration->g;
      x->cacheDuration = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_m20_KeyDescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_KeyDescriptor(c);
            el->g.n = &x->KeyDescriptor->gg.g;
            x->KeyDescriptor = (struct zxmd_m20_KeyDescriptor_s*)el;
            break;
          case zxmd_m20_SoapEndpoint_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->SoapEndpoint->g;
            x->SoapEndpoint = el;
            break;
          case zxmd_m20_SingleLogoutServiceURL_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->SingleLogoutServiceURL->g;
            x->SingleLogoutServiceURL = el;
            break;
          case zxmd_m20_SingleLogoutServiceReturnURL_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->SingleLogoutServiceReturnURL->g;
            x->SingleLogoutServiceReturnURL = el;
            break;
          case zxmd_m20_FederationTerminationServiceURL_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->FederationTerminationServiceURL->g;
            x->FederationTerminationServiceURL = el;
            break;
          case zxmd_m20_FederationTerminationServiceReturnURL_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->FederationTerminationServiceReturnURL->g;
            x->FederationTerminationServiceReturnURL = el;
            break;
          case zxmd_m20_FederationTerminationNotificationProtocolProfile_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->FederationTerminationNotificationProtocolProfile->g;
            x->FederationTerminationNotificationProtocolProfile = el;
            break;
          case zxmd_m20_SingleLogoutProtocolProfile_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->SingleLogoutProtocolProfile->g;
            x->SingleLogoutProtocolProfile = el;
            break;
          case zxmd_m20_RegisterNameIdentifierProtocolProfile_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->RegisterNameIdentifierProtocolProfile->g;
            x->RegisterNameIdentifierProtocolProfile = el;
            break;
          case zxmd_m20_RegisterNameIdentifierServiceURL_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->RegisterNameIdentifierServiceURL->g;
            x->RegisterNameIdentifierServiceURL = el;
            break;
          case zxmd_m20_RegisterNameIdentifierServiceReturnURL_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->RegisterNameIdentifierServiceReturnURL->g;
            x->RegisterNameIdentifierServiceReturnURL = el;
            break;
          case zxmd_m20_NameIdentifierMappingProtocolProfile_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->NameIdentifierMappingProtocolProfile->g;
            x->NameIdentifierMappingProtocolProfile = el;
            break;
          case zxmd_m20_NameIdentifierMappingEncryptionProfile_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->NameIdentifierMappingEncryptionProfile->g;
            x->NameIdentifierMappingEncryptionProfile = el;
            break;
          case zxmd_m20_Organization_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_Organization(c);
            el->g.n = &x->Organization->gg.g;
            x->Organization = (struct zxmd_m20_Organization_s*)el;
            break;
          case zxmd_m20_ContactPerson_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_ContactPerson(c);
            el->g.n = &x->ContactPerson->gg.g;
            x->ContactPerson = (struct zxmd_m20_ContactPerson_s*)el;
            break;
          case zxmd_m20_AdditionalMetaLocation_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_AdditionalMetaLocation(c);
            el->g.n = &x->AdditionalMetaLocation->gg.g;
            x->AdditionalMetaLocation = (struct zxmd_m20_AdditionalMetaLocation_s*)el;
            break;
          case zxmd_m20_Extension_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_Extension(c);
            el->g.n = &x->Extension->gg.g;
            x->Extension = (struct zxmd_m20_Extension_s*)el;
            break;
          case zxmd_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zxmd_ds_Signature_s*)el;
            break;
          case zxmd_m20_AssertionConsumerServiceURL_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_AssertionConsumerServiceURL(c);
            el->g.n = &x->AssertionConsumerServiceURL->gg.g;
            x->AssertionConsumerServiceURL = (struct zxmd_m20_AssertionConsumerServiceURL_s*)el;
            break;
          case zxmd_m20_AuthnRequestsSigned_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->AuthnRequestsSigned->g;
            x->AuthnRequestsSigned = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_AdditionalMetadataLocation) */

#define EL_NAME   md_AdditionalMetadataLocation
#define EL_STRUCT zxmd_md_AdditionalMetadataLocation_s
#define EL_NS     md
#define EL_TAG    AdditionalMetadataLocation

struct zxmd_md_AdditionalMetadataLocation_s* zxmd_DEC_md_AdditionalMetadataLocation(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_AdditionalMetadataLocation_s* x = ZX_ZALLOC(c, struct zxmd_md_AdditionalMetadataLocation_s);
  x->gg.g.tok = zxmd_md_AdditionalMetadataLocation_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_AdditionalMetadataLocation_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_namespace_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->namespace->g;
      x->namespace = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_AffiliationDescriptor) */

#define EL_NAME   md_AffiliationDescriptor
#define EL_STRUCT zxmd_md_AffiliationDescriptor_s
#define EL_NS     md
#define EL_TAG    AffiliationDescriptor

struct zxmd_md_AffiliationDescriptor_s* zxmd_DEC_md_AffiliationDescriptor(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_AffiliationDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_md_AffiliationDescriptor_s);
  x->gg.g.tok = zxmd_md_AffiliationDescriptor_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_AffiliationDescriptor_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_affiliationOwnerID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->affiliationOwnerID->g;
      x->affiliationOwnerID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_validUntil_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->validUntil->g;
      x->validUntil = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_cacheDuration_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->cacheDuration->g;
      x->cacheDuration = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zxmd_ds_Signature_s*)el;
            break;
          case zxmd_md_Extensions_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zxmd_md_Extensions_s*)el;
            break;
          case zxmd_md_AffiliateMember_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->AffiliateMember->g;
            x->AffiliateMember = el;
            break;
          case zxmd_md_KeyDescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_KeyDescriptor(c);
            el->g.n = &x->KeyDescriptor->gg.g;
            x->KeyDescriptor = (struct zxmd_md_KeyDescriptor_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_ArtifactResolutionService) */

#define EL_NAME   md_ArtifactResolutionService
#define EL_STRUCT zxmd_md_ArtifactResolutionService_s
#define EL_NS     md
#define EL_TAG    ArtifactResolutionService

struct zxmd_md_ArtifactResolutionService_s* zxmd_DEC_md_ArtifactResolutionService(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_ArtifactResolutionService_s* x = ZX_ZALLOC(c, struct zxmd_md_ArtifactResolutionService_s);
  x->gg.g.tok = zxmd_md_ArtifactResolutionService_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_ArtifactResolutionService_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Binding_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Binding->g;
      x->Binding = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Location_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Location->g;
      x->Location = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_ResponseLocation_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ResponseLocation->g;
      x->ResponseLocation = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_index_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->index->g;
      x->index = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_isDefault_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->isDefault->g;
      x->isDefault = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_AssertionConsumerService) */

#define EL_NAME   md_AssertionConsumerService
#define EL_STRUCT zxmd_md_AssertionConsumerService_s
#define EL_NS     md
#define EL_TAG    AssertionConsumerService

struct zxmd_md_AssertionConsumerService_s* zxmd_DEC_md_AssertionConsumerService(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_AssertionConsumerService_s* x = ZX_ZALLOC(c, struct zxmd_md_AssertionConsumerService_s);
  x->gg.g.tok = zxmd_md_AssertionConsumerService_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_AssertionConsumerService_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Binding_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Binding->g;
      x->Binding = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Location_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Location->g;
      x->Location = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_ResponseLocation_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ResponseLocation->g;
      x->ResponseLocation = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_index_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->index->g;
      x->index = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_isDefault_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->isDefault->g;
      x->isDefault = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_AssertionIDRequestService) */

#define EL_NAME   md_AssertionIDRequestService
#define EL_STRUCT zxmd_md_AssertionIDRequestService_s
#define EL_NS     md
#define EL_TAG    AssertionIDRequestService

struct zxmd_md_AssertionIDRequestService_s* zxmd_DEC_md_AssertionIDRequestService(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_AssertionIDRequestService_s* x = ZX_ZALLOC(c, struct zxmd_md_AssertionIDRequestService_s);
  x->gg.g.tok = zxmd_md_AssertionIDRequestService_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_AssertionIDRequestService_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Binding_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Binding->g;
      x->Binding = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Location_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Location->g;
      x->Location = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_ResponseLocation_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ResponseLocation->g;
      x->ResponseLocation = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_AttributeAuthorityDescriptor) */

#define EL_NAME   md_AttributeAuthorityDescriptor
#define EL_STRUCT zxmd_md_AttributeAuthorityDescriptor_s
#define EL_NS     md
#define EL_TAG    AttributeAuthorityDescriptor

struct zxmd_md_AttributeAuthorityDescriptor_s* zxmd_DEC_md_AttributeAuthorityDescriptor(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_AttributeAuthorityDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_md_AttributeAuthorityDescriptor_s);
  x->gg.g.tok = zxmd_md_AttributeAuthorityDescriptor_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_AttributeAuthorityDescriptor_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_validUntil_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->validUntil->g;
      x->validUntil = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_cacheDuration_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->cacheDuration->g;
      x->cacheDuration = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_protocolSupportEnumeration_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->protocolSupportEnumeration->g;
      x->protocolSupportEnumeration = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_errorURL_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->errorURL->g;
      x->errorURL = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zxmd_ds_Signature_s*)el;
            break;
          case zxmd_md_Extensions_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zxmd_md_Extensions_s*)el;
            break;
          case zxmd_md_KeyDescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_KeyDescriptor(c);
            el->g.n = &x->KeyDescriptor->gg.g;
            x->KeyDescriptor = (struct zxmd_md_KeyDescriptor_s*)el;
            break;
          case zxmd_md_Organization_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_Organization(c);
            el->g.n = &x->Organization->gg.g;
            x->Organization = (struct zxmd_md_Organization_s*)el;
            break;
          case zxmd_md_ContactPerson_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_ContactPerson(c);
            el->g.n = &x->ContactPerson->gg.g;
            x->ContactPerson = (struct zxmd_md_ContactPerson_s*)el;
            break;
          case zxmd_md_AttributeService_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_AttributeService(c);
            el->g.n = &x->AttributeService->gg.g;
            x->AttributeService = (struct zxmd_md_AttributeService_s*)el;
            break;
          case zxmd_md_AssertionIDRequestService_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_AssertionIDRequestService(c);
            el->g.n = &x->AssertionIDRequestService->gg.g;
            x->AssertionIDRequestService = (struct zxmd_md_AssertionIDRequestService_s*)el;
            break;
          case zxmd_md_NameIDFormat_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->NameIDFormat->g;
            x->NameIDFormat = el;
            break;
          case zxmd_md_AttributeProfile_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->AttributeProfile->g;
            x->AttributeProfile = el;
            break;
          case zxmd_sa_Attribute_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_Attribute(c);
            el->g.n = &x->Attribute->gg.g;
            x->Attribute = (struct zxmd_sa_Attribute_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_AttributeConsumingService) */

#define EL_NAME   md_AttributeConsumingService
#define EL_STRUCT zxmd_md_AttributeConsumingService_s
#define EL_NS     md
#define EL_TAG    AttributeConsumingService

struct zxmd_md_AttributeConsumingService_s* zxmd_DEC_md_AttributeConsumingService(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_AttributeConsumingService_s* x = ZX_ZALLOC(c, struct zxmd_md_AttributeConsumingService_s);
  x->gg.g.tok = zxmd_md_AttributeConsumingService_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_AttributeConsumingService_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_index_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->index->g;
      x->index = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_isDefault_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->isDefault->g;
      x->isDefault = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_md_ServiceName_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_ServiceName(c);
            el->g.n = &x->ServiceName->gg.g;
            x->ServiceName = (struct zxmd_md_ServiceName_s*)el;
            break;
          case zxmd_md_ServiceDescription_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_ServiceDescription(c);
            el->g.n = &x->ServiceDescription->gg.g;
            x->ServiceDescription = (struct zxmd_md_ServiceDescription_s*)el;
            break;
          case zxmd_md_RequestedAttribute_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_RequestedAttribute(c);
            el->g.n = &x->RequestedAttribute->gg.g;
            x->RequestedAttribute = (struct zxmd_md_RequestedAttribute_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_AttributeService) */

#define EL_NAME   md_AttributeService
#define EL_STRUCT zxmd_md_AttributeService_s
#define EL_NS     md
#define EL_TAG    AttributeService

struct zxmd_md_AttributeService_s* zxmd_DEC_md_AttributeService(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_AttributeService_s* x = ZX_ZALLOC(c, struct zxmd_md_AttributeService_s);
  x->gg.g.tok = zxmd_md_AttributeService_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_AttributeService_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Binding_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Binding->g;
      x->Binding = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Location_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Location->g;
      x->Location = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_ResponseLocation_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ResponseLocation->g;
      x->ResponseLocation = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_AuthnAuthorityDescriptor) */

#define EL_NAME   md_AuthnAuthorityDescriptor
#define EL_STRUCT zxmd_md_AuthnAuthorityDescriptor_s
#define EL_NS     md
#define EL_TAG    AuthnAuthorityDescriptor

struct zxmd_md_AuthnAuthorityDescriptor_s* zxmd_DEC_md_AuthnAuthorityDescriptor(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_AuthnAuthorityDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_md_AuthnAuthorityDescriptor_s);
  x->gg.g.tok = zxmd_md_AuthnAuthorityDescriptor_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_AuthnAuthorityDescriptor_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_validUntil_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->validUntil->g;
      x->validUntil = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_cacheDuration_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->cacheDuration->g;
      x->cacheDuration = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_protocolSupportEnumeration_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->protocolSupportEnumeration->g;
      x->protocolSupportEnumeration = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_errorURL_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->errorURL->g;
      x->errorURL = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zxmd_ds_Signature_s*)el;
            break;
          case zxmd_md_Extensions_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zxmd_md_Extensions_s*)el;
            break;
          case zxmd_md_KeyDescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_KeyDescriptor(c);
            el->g.n = &x->KeyDescriptor->gg.g;
            x->KeyDescriptor = (struct zxmd_md_KeyDescriptor_s*)el;
            break;
          case zxmd_md_Organization_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_Organization(c);
            el->g.n = &x->Organization->gg.g;
            x->Organization = (struct zxmd_md_Organization_s*)el;
            break;
          case zxmd_md_ContactPerson_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_ContactPerson(c);
            el->g.n = &x->ContactPerson->gg.g;
            x->ContactPerson = (struct zxmd_md_ContactPerson_s*)el;
            break;
          case zxmd_md_AuthnQueryService_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_AuthnQueryService(c);
            el->g.n = &x->AuthnQueryService->gg.g;
            x->AuthnQueryService = (struct zxmd_md_AuthnQueryService_s*)el;
            break;
          case zxmd_md_AssertionIDRequestService_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_AssertionIDRequestService(c);
            el->g.n = &x->AssertionIDRequestService->gg.g;
            x->AssertionIDRequestService = (struct zxmd_md_AssertionIDRequestService_s*)el;
            break;
          case zxmd_md_NameIDFormat_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->NameIDFormat->g;
            x->NameIDFormat = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_AuthnQueryService) */

#define EL_NAME   md_AuthnQueryService
#define EL_STRUCT zxmd_md_AuthnQueryService_s
#define EL_NS     md
#define EL_TAG    AuthnQueryService

struct zxmd_md_AuthnQueryService_s* zxmd_DEC_md_AuthnQueryService(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_AuthnQueryService_s* x = ZX_ZALLOC(c, struct zxmd_md_AuthnQueryService_s);
  x->gg.g.tok = zxmd_md_AuthnQueryService_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_AuthnQueryService_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Binding_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Binding->g;
      x->Binding = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Location_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Location->g;
      x->Location = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_ResponseLocation_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ResponseLocation->g;
      x->ResponseLocation = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_AuthzService) */

#define EL_NAME   md_AuthzService
#define EL_STRUCT zxmd_md_AuthzService_s
#define EL_NS     md
#define EL_TAG    AuthzService

struct zxmd_md_AuthzService_s* zxmd_DEC_md_AuthzService(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_AuthzService_s* x = ZX_ZALLOC(c, struct zxmd_md_AuthzService_s);
  x->gg.g.tok = zxmd_md_AuthzService_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_AuthzService_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Binding_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Binding->g;
      x->Binding = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Location_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Location->g;
      x->Location = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_ResponseLocation_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ResponseLocation->g;
      x->ResponseLocation = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_ContactPerson) */

#define EL_NAME   md_ContactPerson
#define EL_STRUCT zxmd_md_ContactPerson_s
#define EL_NS     md
#define EL_TAG    ContactPerson

struct zxmd_md_ContactPerson_s* zxmd_DEC_md_ContactPerson(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_ContactPerson_s* x = ZX_ZALLOC(c, struct zxmd_md_ContactPerson_s);
  x->gg.g.tok = zxmd_md_ContactPerson_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_ContactPerson_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_contactType_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->contactType->g;
      x->contactType = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_md_Extensions_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zxmd_md_Extensions_s*)el;
            break;
          case zxmd_md_Company_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->Company->g;
            x->Company = el;
            break;
          case zxmd_md_GivenName_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->GivenName->g;
            x->GivenName = el;
            break;
          case zxmd_md_SurName_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->SurName->g;
            x->SurName = el;
            break;
          case zxmd_md_EmailAddress_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->EmailAddress->g;
            x->EmailAddress = el;
            break;
          case zxmd_md_TelephoneNumber_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->TelephoneNumber->g;
            x->TelephoneNumber = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_EncryptionMethod) */

#define EL_NAME   md_EncryptionMethod
#define EL_STRUCT zxmd_md_EncryptionMethod_s
#define EL_NS     md
#define EL_TAG    EncryptionMethod

struct zxmd_md_EncryptionMethod_s* zxmd_DEC_md_EncryptionMethod(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_EncryptionMethod_s* x = ZX_ZALLOC(c, struct zxmd_md_EncryptionMethod_s);
  x->gg.g.tok = zxmd_md_EncryptionMethod_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_EncryptionMethod_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Algorithm_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Algorithm->g;
      x->Algorithm = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_xenc_KeySize_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->KeySize->g;
            x->KeySize = el;
            break;
          case zxmd_xenc_OAEPparams_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->OAEPparams->g;
            x->OAEPparams = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_EntitiesDescriptor) */

#define EL_NAME   md_EntitiesDescriptor
#define EL_STRUCT zxmd_md_EntitiesDescriptor_s
#define EL_NS     md
#define EL_TAG    EntitiesDescriptor

struct zxmd_md_EntitiesDescriptor_s* zxmd_DEC_md_EntitiesDescriptor(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_EntitiesDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_md_EntitiesDescriptor_s);
  x->gg.g.tok = zxmd_md_EntitiesDescriptor_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_EntitiesDescriptor_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_validUntil_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->validUntil->g;
      x->validUntil = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_cacheDuration_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->cacheDuration->g;
      x->cacheDuration = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Name_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Name->g;
      x->Name = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zxmd_ds_Signature_s*)el;
            break;
          case zxmd_md_Extensions_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zxmd_md_Extensions_s*)el;
            break;
          case zxmd_md_EntityDescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_EntityDescriptor(c);
            el->g.n = &x->EntityDescriptor->gg.g;
            x->EntityDescriptor = (struct zxmd_md_EntityDescriptor_s*)el;
            break;
          case zxmd_md_EntitiesDescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_EntitiesDescriptor(c);
            el->g.n = &x->EntitiesDescriptor->gg.g;
            x->EntitiesDescriptor = (struct zxmd_md_EntitiesDescriptor_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_EntityDescriptor) */

#define EL_NAME   md_EntityDescriptor
#define EL_STRUCT zxmd_md_EntityDescriptor_s
#define EL_NS     md
#define EL_TAG    EntityDescriptor

struct zxmd_md_EntityDescriptor_s* zxmd_DEC_md_EntityDescriptor(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_EntityDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_md_EntityDescriptor_s);
  x->gg.g.tok = zxmd_md_EntityDescriptor_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_EntityDescriptor_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_entityID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->entityID->g;
      x->entityID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_validUntil_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->validUntil->g;
      x->validUntil = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_cacheDuration_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->cacheDuration->g;
      x->cacheDuration = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zxmd_ds_Signature_s*)el;
            break;
          case zxmd_md_Extensions_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zxmd_md_Extensions_s*)el;
            break;
          case zxmd_md_RoleDescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_RoleDescriptor(c);
            el->g.n = &x->RoleDescriptor->gg.g;
            x->RoleDescriptor = (struct zxmd_md_RoleDescriptor_s*)el;
            break;
          case zxmd_md_IDPSSODescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_IDPSSODescriptor(c);
            el->g.n = &x->IDPSSODescriptor->gg.g;
            x->IDPSSODescriptor = (struct zxmd_md_IDPSSODescriptor_s*)el;
            break;
          case zxmd_md_SPSSODescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_SPSSODescriptor(c);
            el->g.n = &x->SPSSODescriptor->gg.g;
            x->SPSSODescriptor = (struct zxmd_md_SPSSODescriptor_s*)el;
            break;
          case zxmd_md_AuthnAuthorityDescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_AuthnAuthorityDescriptor(c);
            el->g.n = &x->AuthnAuthorityDescriptor->gg.g;
            x->AuthnAuthorityDescriptor = (struct zxmd_md_AuthnAuthorityDescriptor_s*)el;
            break;
          case zxmd_md_AttributeAuthorityDescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_AttributeAuthorityDescriptor(c);
            el->g.n = &x->AttributeAuthorityDescriptor->gg.g;
            x->AttributeAuthorityDescriptor = (struct zxmd_md_AttributeAuthorityDescriptor_s*)el;
            break;
          case zxmd_md_PDPDescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_PDPDescriptor(c);
            el->g.n = &x->PDPDescriptor->gg.g;
            x->PDPDescriptor = (struct zxmd_md_PDPDescriptor_s*)el;
            break;
          case zxmd_md_AffiliationDescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_AffiliationDescriptor(c);
            el->g.n = &x->AffiliationDescriptor->gg.g;
            x->AffiliationDescriptor = (struct zxmd_md_AffiliationDescriptor_s*)el;
            break;
          case zxmd_md_Organization_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_Organization(c);
            el->g.n = &x->Organization->gg.g;
            x->Organization = (struct zxmd_md_Organization_s*)el;
            break;
          case zxmd_md_ContactPerson_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_ContactPerson(c);
            el->g.n = &x->ContactPerson->gg.g;
            x->ContactPerson = (struct zxmd_md_ContactPerson_s*)el;
            break;
          case zxmd_md_AdditionalMetadataLocation_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_AdditionalMetadataLocation(c);
            el->g.n = &x->AdditionalMetadataLocation->gg.g;
            x->AdditionalMetadataLocation = (struct zxmd_md_AdditionalMetadataLocation_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_Extensions) */

#define EL_NAME   md_Extensions
#define EL_STRUCT zxmd_md_Extensions_s
#define EL_NS     md
#define EL_TAG    Extensions

struct zxmd_md_Extensions_s* zxmd_DEC_md_Extensions(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_Extensions_s* x = ZX_ZALLOC(c, struct zxmd_md_Extensions_s);
  x->gg.g.tok = zxmd_md_Extensions_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_Extensions_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_IDPSSODescriptor) */

#define EL_NAME   md_IDPSSODescriptor
#define EL_STRUCT zxmd_md_IDPSSODescriptor_s
#define EL_NS     md
#define EL_TAG    IDPSSODescriptor

struct zxmd_md_IDPSSODescriptor_s* zxmd_DEC_md_IDPSSODescriptor(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_IDPSSODescriptor_s* x = ZX_ZALLOC(c, struct zxmd_md_IDPSSODescriptor_s);
  x->gg.g.tok = zxmd_md_IDPSSODescriptor_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_IDPSSODescriptor_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_validUntil_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->validUntil->g;
      x->validUntil = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_cacheDuration_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->cacheDuration->g;
      x->cacheDuration = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_protocolSupportEnumeration_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->protocolSupportEnumeration->g;
      x->protocolSupportEnumeration = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_errorURL_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->errorURL->g;
      x->errorURL = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_WantAuthnRequestsSigned_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->WantAuthnRequestsSigned->g;
      x->WantAuthnRequestsSigned = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zxmd_ds_Signature_s*)el;
            break;
          case zxmd_md_Extensions_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zxmd_md_Extensions_s*)el;
            break;
          case zxmd_md_KeyDescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_KeyDescriptor(c);
            el->g.n = &x->KeyDescriptor->gg.g;
            x->KeyDescriptor = (struct zxmd_md_KeyDescriptor_s*)el;
            break;
          case zxmd_md_Organization_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_Organization(c);
            el->g.n = &x->Organization->gg.g;
            x->Organization = (struct zxmd_md_Organization_s*)el;
            break;
          case zxmd_md_ContactPerson_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_ContactPerson(c);
            el->g.n = &x->ContactPerson->gg.g;
            x->ContactPerson = (struct zxmd_md_ContactPerson_s*)el;
            break;
          case zxmd_md_ArtifactResolutionService_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_ArtifactResolutionService(c);
            el->g.n = &x->ArtifactResolutionService->gg.g;
            x->ArtifactResolutionService = (struct zxmd_md_ArtifactResolutionService_s*)el;
            break;
          case zxmd_md_SingleLogoutService_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_SingleLogoutService(c);
            el->g.n = &x->SingleLogoutService->gg.g;
            x->SingleLogoutService = (struct zxmd_md_SingleLogoutService_s*)el;
            break;
          case zxmd_md_ManageNameIDService_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_ManageNameIDService(c);
            el->g.n = &x->ManageNameIDService->gg.g;
            x->ManageNameIDService = (struct zxmd_md_ManageNameIDService_s*)el;
            break;
          case zxmd_md_NameIDFormat_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->NameIDFormat->g;
            x->NameIDFormat = el;
            break;
          case zxmd_md_SingleSignOnService_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_SingleSignOnService(c);
            el->g.n = &x->SingleSignOnService->gg.g;
            x->SingleSignOnService = (struct zxmd_md_SingleSignOnService_s*)el;
            break;
          case zxmd_md_NameIDMappingService_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_NameIDMappingService(c);
            el->g.n = &x->NameIDMappingService->gg.g;
            x->NameIDMappingService = (struct zxmd_md_NameIDMappingService_s*)el;
            break;
          case zxmd_md_AssertionIDRequestService_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_AssertionIDRequestService(c);
            el->g.n = &x->AssertionIDRequestService->gg.g;
            x->AssertionIDRequestService = (struct zxmd_md_AssertionIDRequestService_s*)el;
            break;
          case zxmd_md_AttributeProfile_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->AttributeProfile->g;
            x->AttributeProfile = el;
            break;
          case zxmd_sa_Attribute_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_Attribute(c);
            el->g.n = &x->Attribute->gg.g;
            x->Attribute = (struct zxmd_sa_Attribute_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_KeyDescriptor) */

#define EL_NAME   md_KeyDescriptor
#define EL_STRUCT zxmd_md_KeyDescriptor_s
#define EL_NS     md
#define EL_TAG    KeyDescriptor

struct zxmd_md_KeyDescriptor_s* zxmd_DEC_md_KeyDescriptor(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_KeyDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_md_KeyDescriptor_s);
  x->gg.g.tok = zxmd_md_KeyDescriptor_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_KeyDescriptor_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_use_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->use->g;
      x->use = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_KeyInfo_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_KeyInfo(c);
            el->g.n = &x->KeyInfo->gg.g;
            x->KeyInfo = (struct zxmd_ds_KeyInfo_s*)el;
            break;
          case zxmd_md_EncryptionMethod_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_EncryptionMethod(c);
            el->g.n = &x->EncryptionMethod->gg.g;
            x->EncryptionMethod = (struct zxmd_md_EncryptionMethod_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_ManageNameIDService) */

#define EL_NAME   md_ManageNameIDService
#define EL_STRUCT zxmd_md_ManageNameIDService_s
#define EL_NS     md
#define EL_TAG    ManageNameIDService

struct zxmd_md_ManageNameIDService_s* zxmd_DEC_md_ManageNameIDService(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_ManageNameIDService_s* x = ZX_ZALLOC(c, struct zxmd_md_ManageNameIDService_s);
  x->gg.g.tok = zxmd_md_ManageNameIDService_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_ManageNameIDService_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Binding_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Binding->g;
      x->Binding = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Location_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Location->g;
      x->Location = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_ResponseLocation_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ResponseLocation->g;
      x->ResponseLocation = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_NameIDMappingService) */

#define EL_NAME   md_NameIDMappingService
#define EL_STRUCT zxmd_md_NameIDMappingService_s
#define EL_NS     md
#define EL_TAG    NameIDMappingService

struct zxmd_md_NameIDMappingService_s* zxmd_DEC_md_NameIDMappingService(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_NameIDMappingService_s* x = ZX_ZALLOC(c, struct zxmd_md_NameIDMappingService_s);
  x->gg.g.tok = zxmd_md_NameIDMappingService_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_NameIDMappingService_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Binding_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Binding->g;
      x->Binding = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Location_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Location->g;
      x->Location = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_ResponseLocation_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ResponseLocation->g;
      x->ResponseLocation = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_Organization) */

#define EL_NAME   md_Organization
#define EL_STRUCT zxmd_md_Organization_s
#define EL_NS     md
#define EL_TAG    Organization

struct zxmd_md_Organization_s* zxmd_DEC_md_Organization(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_Organization_s* x = ZX_ZALLOC(c, struct zxmd_md_Organization_s);
  x->gg.g.tok = zxmd_md_Organization_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_Organization_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_md_Extensions_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zxmd_md_Extensions_s*)el;
            break;
          case zxmd_md_OrganizationName_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_OrganizationName(c);
            el->g.n = &x->OrganizationName->gg.g;
            x->OrganizationName = (struct zxmd_md_OrganizationName_s*)el;
            break;
          case zxmd_md_OrganizationDisplayName_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_OrganizationDisplayName(c);
            el->g.n = &x->OrganizationDisplayName->gg.g;
            x->OrganizationDisplayName = (struct zxmd_md_OrganizationDisplayName_s*)el;
            break;
          case zxmd_md_OrganizationURL_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_OrganizationURL(c);
            el->g.n = &x->OrganizationURL->gg.g;
            x->OrganizationURL = (struct zxmd_md_OrganizationURL_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_OrganizationDisplayName) */

#define EL_NAME   md_OrganizationDisplayName
#define EL_STRUCT zxmd_md_OrganizationDisplayName_s
#define EL_NS     md
#define EL_TAG    OrganizationDisplayName

struct zxmd_md_OrganizationDisplayName_s* zxmd_DEC_md_OrganizationDisplayName(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_OrganizationDisplayName_s* x = ZX_ZALLOC(c, struct zxmd_md_OrganizationDisplayName_s);
  x->gg.g.tok = zxmd_md_OrganizationDisplayName_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_OrganizationDisplayName_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_lang_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->lang->g;
      x->lang = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_OrganizationName) */

#define EL_NAME   md_OrganizationName
#define EL_STRUCT zxmd_md_OrganizationName_s
#define EL_NS     md
#define EL_TAG    OrganizationName

struct zxmd_md_OrganizationName_s* zxmd_DEC_md_OrganizationName(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_OrganizationName_s* x = ZX_ZALLOC(c, struct zxmd_md_OrganizationName_s);
  x->gg.g.tok = zxmd_md_OrganizationName_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_OrganizationName_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_lang_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->lang->g;
      x->lang = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_OrganizationURL) */

#define EL_NAME   md_OrganizationURL
#define EL_STRUCT zxmd_md_OrganizationURL_s
#define EL_NS     md
#define EL_TAG    OrganizationURL

struct zxmd_md_OrganizationURL_s* zxmd_DEC_md_OrganizationURL(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_OrganizationURL_s* x = ZX_ZALLOC(c, struct zxmd_md_OrganizationURL_s);
  x->gg.g.tok = zxmd_md_OrganizationURL_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_OrganizationURL_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_lang_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->lang->g;
      x->lang = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_PDPDescriptor) */

#define EL_NAME   md_PDPDescriptor
#define EL_STRUCT zxmd_md_PDPDescriptor_s
#define EL_NS     md
#define EL_TAG    PDPDescriptor

struct zxmd_md_PDPDescriptor_s* zxmd_DEC_md_PDPDescriptor(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_PDPDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_md_PDPDescriptor_s);
  x->gg.g.tok = zxmd_md_PDPDescriptor_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_PDPDescriptor_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_validUntil_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->validUntil->g;
      x->validUntil = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_cacheDuration_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->cacheDuration->g;
      x->cacheDuration = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_protocolSupportEnumeration_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->protocolSupportEnumeration->g;
      x->protocolSupportEnumeration = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_errorURL_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->errorURL->g;
      x->errorURL = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zxmd_ds_Signature_s*)el;
            break;
          case zxmd_md_Extensions_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zxmd_md_Extensions_s*)el;
            break;
          case zxmd_md_KeyDescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_KeyDescriptor(c);
            el->g.n = &x->KeyDescriptor->gg.g;
            x->KeyDescriptor = (struct zxmd_md_KeyDescriptor_s*)el;
            break;
          case zxmd_md_Organization_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_Organization(c);
            el->g.n = &x->Organization->gg.g;
            x->Organization = (struct zxmd_md_Organization_s*)el;
            break;
          case zxmd_md_ContactPerson_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_ContactPerson(c);
            el->g.n = &x->ContactPerson->gg.g;
            x->ContactPerson = (struct zxmd_md_ContactPerson_s*)el;
            break;
          case zxmd_md_AuthzService_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_AuthzService(c);
            el->g.n = &x->AuthzService->gg.g;
            x->AuthzService = (struct zxmd_md_AuthzService_s*)el;
            break;
          case zxmd_md_AssertionIDRequestService_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_AssertionIDRequestService(c);
            el->g.n = &x->AssertionIDRequestService->gg.g;
            x->AssertionIDRequestService = (struct zxmd_md_AssertionIDRequestService_s*)el;
            break;
          case zxmd_md_NameIDFormat_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->NameIDFormat->g;
            x->NameIDFormat = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_RequestedAttribute) */

#define EL_NAME   md_RequestedAttribute
#define EL_STRUCT zxmd_md_RequestedAttribute_s
#define EL_NS     md
#define EL_TAG    RequestedAttribute

struct zxmd_md_RequestedAttribute_s* zxmd_DEC_md_RequestedAttribute(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_RequestedAttribute_s* x = ZX_ZALLOC(c, struct zxmd_md_RequestedAttribute_s);
  x->gg.g.tok = zxmd_md_RequestedAttribute_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_RequestedAttribute_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Name_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Name->g;
      x->Name = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_NameFormat_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->NameFormat->g;
      x->NameFormat = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_FriendlyName_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->FriendlyName->g;
      x->FriendlyName = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_isRequired_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->isRequired->g;
      x->isRequired = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_sa_AttributeValue_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->AttributeValue->g;
            x->AttributeValue = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_RoleDescriptor) */

#define EL_NAME   md_RoleDescriptor
#define EL_STRUCT zxmd_md_RoleDescriptor_s
#define EL_NS     md
#define EL_TAG    RoleDescriptor

struct zxmd_md_RoleDescriptor_s* zxmd_DEC_md_RoleDescriptor(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_RoleDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_md_RoleDescriptor_s);
  x->gg.g.tok = zxmd_md_RoleDescriptor_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_RoleDescriptor_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_validUntil_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->validUntil->g;
      x->validUntil = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_cacheDuration_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->cacheDuration->g;
      x->cacheDuration = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_protocolSupportEnumeration_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->protocolSupportEnumeration->g;
      x->protocolSupportEnumeration = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_errorURL_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->errorURL->g;
      x->errorURL = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zxmd_ds_Signature_s*)el;
            break;
          case zxmd_md_Extensions_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zxmd_md_Extensions_s*)el;
            break;
          case zxmd_md_KeyDescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_KeyDescriptor(c);
            el->g.n = &x->KeyDescriptor->gg.g;
            x->KeyDescriptor = (struct zxmd_md_KeyDescriptor_s*)el;
            break;
          case zxmd_md_Organization_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_Organization(c);
            el->g.n = &x->Organization->gg.g;
            x->Organization = (struct zxmd_md_Organization_s*)el;
            break;
          case zxmd_md_ContactPerson_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_ContactPerson(c);
            el->g.n = &x->ContactPerson->gg.g;
            x->ContactPerson = (struct zxmd_md_ContactPerson_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_SPSSODescriptor) */

#define EL_NAME   md_SPSSODescriptor
#define EL_STRUCT zxmd_md_SPSSODescriptor_s
#define EL_NS     md
#define EL_TAG    SPSSODescriptor

struct zxmd_md_SPSSODescriptor_s* zxmd_DEC_md_SPSSODescriptor(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_SPSSODescriptor_s* x = ZX_ZALLOC(c, struct zxmd_md_SPSSODescriptor_s);
  x->gg.g.tok = zxmd_md_SPSSODescriptor_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_SPSSODescriptor_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_validUntil_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->validUntil->g;
      x->validUntil = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_cacheDuration_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->cacheDuration->g;
      x->cacheDuration = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_protocolSupportEnumeration_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->protocolSupportEnumeration->g;
      x->protocolSupportEnumeration = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_errorURL_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->errorURL->g;
      x->errorURL = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_AuthnRequestsSigned_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->AuthnRequestsSigned->g;
      x->AuthnRequestsSigned = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_WantAssertionsSigned_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->WantAssertionsSigned->g;
      x->WantAssertionsSigned = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zxmd_ds_Signature_s*)el;
            break;
          case zxmd_md_Extensions_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zxmd_md_Extensions_s*)el;
            break;
          case zxmd_md_KeyDescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_KeyDescriptor(c);
            el->g.n = &x->KeyDescriptor->gg.g;
            x->KeyDescriptor = (struct zxmd_md_KeyDescriptor_s*)el;
            break;
          case zxmd_md_Organization_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_Organization(c);
            el->g.n = &x->Organization->gg.g;
            x->Organization = (struct zxmd_md_Organization_s*)el;
            break;
          case zxmd_md_ContactPerson_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_ContactPerson(c);
            el->g.n = &x->ContactPerson->gg.g;
            x->ContactPerson = (struct zxmd_md_ContactPerson_s*)el;
            break;
          case zxmd_md_ArtifactResolutionService_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_ArtifactResolutionService(c);
            el->g.n = &x->ArtifactResolutionService->gg.g;
            x->ArtifactResolutionService = (struct zxmd_md_ArtifactResolutionService_s*)el;
            break;
          case zxmd_md_SingleLogoutService_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_SingleLogoutService(c);
            el->g.n = &x->SingleLogoutService->gg.g;
            x->SingleLogoutService = (struct zxmd_md_SingleLogoutService_s*)el;
            break;
          case zxmd_md_ManageNameIDService_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_ManageNameIDService(c);
            el->g.n = &x->ManageNameIDService->gg.g;
            x->ManageNameIDService = (struct zxmd_md_ManageNameIDService_s*)el;
            break;
          case zxmd_md_NameIDFormat_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->NameIDFormat->g;
            x->NameIDFormat = el;
            break;
          case zxmd_md_AssertionConsumerService_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_AssertionConsumerService(c);
            el->g.n = &x->AssertionConsumerService->gg.g;
            x->AssertionConsumerService = (struct zxmd_md_AssertionConsumerService_s*)el;
            break;
          case zxmd_md_AttributeConsumingService_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_AttributeConsumingService(c);
            el->g.n = &x->AttributeConsumingService->gg.g;
            x->AttributeConsumingService = (struct zxmd_md_AttributeConsumingService_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_ServiceDescription) */

#define EL_NAME   md_ServiceDescription
#define EL_STRUCT zxmd_md_ServiceDescription_s
#define EL_NS     md
#define EL_TAG    ServiceDescription

struct zxmd_md_ServiceDescription_s* zxmd_DEC_md_ServiceDescription(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_ServiceDescription_s* x = ZX_ZALLOC(c, struct zxmd_md_ServiceDescription_s);
  x->gg.g.tok = zxmd_md_ServiceDescription_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_ServiceDescription_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_lang_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->lang->g;
      x->lang = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_ServiceName) */

#define EL_NAME   md_ServiceName
#define EL_STRUCT zxmd_md_ServiceName_s
#define EL_NS     md
#define EL_TAG    ServiceName

struct zxmd_md_ServiceName_s* zxmd_DEC_md_ServiceName(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_ServiceName_s* x = ZX_ZALLOC(c, struct zxmd_md_ServiceName_s);
  x->gg.g.tok = zxmd_md_ServiceName_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_ServiceName_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_lang_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->lang->g;
      x->lang = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_SingleLogoutService) */

#define EL_NAME   md_SingleLogoutService
#define EL_STRUCT zxmd_md_SingleLogoutService_s
#define EL_NS     md
#define EL_TAG    SingleLogoutService

struct zxmd_md_SingleLogoutService_s* zxmd_DEC_md_SingleLogoutService(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_SingleLogoutService_s* x = ZX_ZALLOC(c, struct zxmd_md_SingleLogoutService_s);
  x->gg.g.tok = zxmd_md_SingleLogoutService_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_SingleLogoutService_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Binding_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Binding->g;
      x->Binding = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Location_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Location->g;
      x->Location = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_ResponseLocation_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ResponseLocation->g;
      x->ResponseLocation = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_md_SingleSignOnService) */

#define EL_NAME   md_SingleSignOnService
#define EL_STRUCT zxmd_md_SingleSignOnService_s
#define EL_NS     md
#define EL_TAG    SingleSignOnService

struct zxmd_md_SingleSignOnService_s* zxmd_DEC_md_SingleSignOnService(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_md_SingleSignOnService_s* x = ZX_ZALLOC(c, struct zxmd_md_SingleSignOnService_s);
  x->gg.g.tok = zxmd_md_SingleSignOnService_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_md_SingleSignOnService_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Binding_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Binding->g;
      x->Binding = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Location_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Location->g;
      x->Location = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_ResponseLocation_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ResponseLocation->g;
      x->ResponseLocation = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_sa_Action) */

#define EL_NAME   sa_Action
#define EL_STRUCT zxmd_sa_Action_s
#define EL_NS     sa
#define EL_TAG    Action

struct zxmd_sa_Action_s* zxmd_DEC_sa_Action(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_sa_Action_s* x = ZX_ZALLOC(c, struct zxmd_sa_Action_s);
  x->gg.g.tok = zxmd_sa_Action_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_sa_Action_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Namespace_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Namespace->g;
      x->Namespace = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_sa_Advice) */

#define EL_NAME   sa_Advice
#define EL_STRUCT zxmd_sa_Advice_s
#define EL_NS     sa
#define EL_TAG    Advice

struct zxmd_sa_Advice_s* zxmd_DEC_sa_Advice(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_sa_Advice_s* x = ZX_ZALLOC(c, struct zxmd_sa_Advice_s);
  x->gg.g.tok = zxmd_sa_Advice_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_sa_Advice_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_sa_AssertionIDRef_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->AssertionIDRef->g;
            x->AssertionIDRef = el;
            break;
          case zxmd_sa_AssertionURIRef_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->AssertionURIRef->g;
            x->AssertionURIRef = el;
            break;
          case zxmd_sa_Assertion_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_Assertion(c);
            el->g.n = &x->Assertion->gg.g;
            x->Assertion = (struct zxmd_sa_Assertion_s*)el;
            break;
          case zxmd_sa_EncryptedAssertion_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_EncryptedAssertion(c);
            el->g.n = &x->EncryptedAssertion->gg.g;
            x->EncryptedAssertion = (struct zxmd_sa_EncryptedAssertion_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_sa_Assertion) */

#define EL_NAME   sa_Assertion
#define EL_STRUCT zxmd_sa_Assertion_s
#define EL_NS     sa
#define EL_TAG    Assertion

struct zxmd_sa_Assertion_s* zxmd_DEC_sa_Assertion(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_sa_Assertion_s* x = ZX_ZALLOC(c, struct zxmd_sa_Assertion_s);
  x->gg.g.tok = zxmd_sa_Assertion_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_sa_Assertion_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Version_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Version->g;
      x->Version = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_IssueInstant_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->IssueInstant->g;
      x->IssueInstant = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_sa_Issuer_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_Issuer(c);
            el->g.n = &x->Issuer->gg.g;
            x->Issuer = (struct zxmd_sa_Issuer_s*)el;
            break;
          case zxmd_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zxmd_ds_Signature_s*)el;
            break;
          case zxmd_sa_Subject_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_Subject(c);
            el->g.n = &x->Subject->gg.g;
            x->Subject = (struct zxmd_sa_Subject_s*)el;
            break;
          case zxmd_sa_Conditions_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_Conditions(c);
            el->g.n = &x->Conditions->gg.g;
            x->Conditions = (struct zxmd_sa_Conditions_s*)el;
            break;
          case zxmd_sa_Advice_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_Advice(c);
            el->g.n = &x->Advice->gg.g;
            x->Advice = (struct zxmd_sa_Advice_s*)el;
            break;
          case zxmd_sa_Statement_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->Statement->g;
            x->Statement = el;
            break;
          case zxmd_sa_AuthnStatement_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_AuthnStatement(c);
            el->g.n = &x->AuthnStatement->gg.g;
            x->AuthnStatement = (struct zxmd_sa_AuthnStatement_s*)el;
            break;
          case zxmd_sa_AuthzDecisionStatement_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_AuthzDecisionStatement(c);
            el->g.n = &x->AuthzDecisionStatement->gg.g;
            x->AuthzDecisionStatement = (struct zxmd_sa_AuthzDecisionStatement_s*)el;
            break;
          case zxmd_sa_AttributeStatement_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_AttributeStatement(c);
            el->g.n = &x->AttributeStatement->gg.g;
            x->AttributeStatement = (struct zxmd_sa_AttributeStatement_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_sa_Attribute) */

#define EL_NAME   sa_Attribute
#define EL_STRUCT zxmd_sa_Attribute_s
#define EL_NS     sa
#define EL_TAG    Attribute

struct zxmd_sa_Attribute_s* zxmd_DEC_sa_Attribute(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_sa_Attribute_s* x = ZX_ZALLOC(c, struct zxmd_sa_Attribute_s);
  x->gg.g.tok = zxmd_sa_Attribute_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_sa_Attribute_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Name_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Name->g;
      x->Name = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_NameFormat_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->NameFormat->g;
      x->NameFormat = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_FriendlyName_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->FriendlyName->g;
      x->FriendlyName = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_sa_AttributeValue_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->AttributeValue->g;
            x->AttributeValue = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_sa_AttributeStatement) */

#define EL_NAME   sa_AttributeStatement
#define EL_STRUCT zxmd_sa_AttributeStatement_s
#define EL_NS     sa
#define EL_TAG    AttributeStatement

struct zxmd_sa_AttributeStatement_s* zxmd_DEC_sa_AttributeStatement(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_sa_AttributeStatement_s* x = ZX_ZALLOC(c, struct zxmd_sa_AttributeStatement_s);
  x->gg.g.tok = zxmd_sa_AttributeStatement_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_sa_AttributeStatement_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_sa_Attribute_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_Attribute(c);
            el->g.n = &x->Attribute->gg.g;
            x->Attribute = (struct zxmd_sa_Attribute_s*)el;
            break;
          case zxmd_sa_EncryptedAttribute_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_EncryptedAttribute(c);
            el->g.n = &x->EncryptedAttribute->gg.g;
            x->EncryptedAttribute = (struct zxmd_sa_EncryptedAttribute_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_sa_AudienceRestriction) */

#define EL_NAME   sa_AudienceRestriction
#define EL_STRUCT zxmd_sa_AudienceRestriction_s
#define EL_NS     sa
#define EL_TAG    AudienceRestriction

struct zxmd_sa_AudienceRestriction_s* zxmd_DEC_sa_AudienceRestriction(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_sa_AudienceRestriction_s* x = ZX_ZALLOC(c, struct zxmd_sa_AudienceRestriction_s);
  x->gg.g.tok = zxmd_sa_AudienceRestriction_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_sa_AudienceRestriction_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_sa_Audience_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->Audience->g;
            x->Audience = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_sa_AuthnContext) */

#define EL_NAME   sa_AuthnContext
#define EL_STRUCT zxmd_sa_AuthnContext_s
#define EL_NS     sa
#define EL_TAG    AuthnContext

struct zxmd_sa_AuthnContext_s* zxmd_DEC_sa_AuthnContext(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_sa_AuthnContext_s* x = ZX_ZALLOC(c, struct zxmd_sa_AuthnContext_s);
  x->gg.g.tok = zxmd_sa_AuthnContext_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_sa_AuthnContext_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_sa_AuthnContextClassRef_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->AuthnContextClassRef->g;
            x->AuthnContextClassRef = el;
            break;
          case zxmd_sa_AuthnContextDecl_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->AuthnContextDecl->g;
            x->AuthnContextDecl = el;
            break;
          case zxmd_sa_AuthnContextDeclRef_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->AuthnContextDeclRef->g;
            x->AuthnContextDeclRef = el;
            break;
          case zxmd_sa_AuthenticatingAuthority_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->AuthenticatingAuthority->g;
            x->AuthenticatingAuthority = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_sa_AuthnStatement) */

#define EL_NAME   sa_AuthnStatement
#define EL_STRUCT zxmd_sa_AuthnStatement_s
#define EL_NS     sa
#define EL_TAG    AuthnStatement

struct zxmd_sa_AuthnStatement_s* zxmd_DEC_sa_AuthnStatement(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_sa_AuthnStatement_s* x = ZX_ZALLOC(c, struct zxmd_sa_AuthnStatement_s);
  x->gg.g.tok = zxmd_sa_AuthnStatement_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_sa_AuthnStatement_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_AuthnInstant_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->AuthnInstant->g;
      x->AuthnInstant = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_SessionIndex_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->SessionIndex->g;
      x->SessionIndex = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_SessionNotOnOrAfter_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->SessionNotOnOrAfter->g;
      x->SessionNotOnOrAfter = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_sa_SubjectLocality_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_SubjectLocality(c);
            el->g.n = &x->SubjectLocality->gg.g;
            x->SubjectLocality = (struct zxmd_sa_SubjectLocality_s*)el;
            break;
          case zxmd_sa_AuthnContext_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_AuthnContext(c);
            el->g.n = &x->AuthnContext->gg.g;
            x->AuthnContext = (struct zxmd_sa_AuthnContext_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_sa_AuthzDecisionStatement) */

#define EL_NAME   sa_AuthzDecisionStatement
#define EL_STRUCT zxmd_sa_AuthzDecisionStatement_s
#define EL_NS     sa
#define EL_TAG    AuthzDecisionStatement

struct zxmd_sa_AuthzDecisionStatement_s* zxmd_DEC_sa_AuthzDecisionStatement(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_sa_AuthzDecisionStatement_s* x = ZX_ZALLOC(c, struct zxmd_sa_AuthzDecisionStatement_s);
  x->gg.g.tok = zxmd_sa_AuthzDecisionStatement_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_sa_AuthzDecisionStatement_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Resource_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Resource->g;
      x->Resource = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Decision_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Decision->g;
      x->Decision = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_sa_Action_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_Action(c);
            el->g.n = &x->Action->gg.g;
            x->Action = (struct zxmd_sa_Action_s*)el;
            break;
          case zxmd_sa_Evidence_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_Evidence(c);
            el->g.n = &x->Evidence->gg.g;
            x->Evidence = (struct zxmd_sa_Evidence_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_sa_BaseID) */

#define EL_NAME   sa_BaseID
#define EL_STRUCT zxmd_sa_BaseID_s
#define EL_NS     sa
#define EL_TAG    BaseID

struct zxmd_sa_BaseID_s* zxmd_DEC_sa_BaseID(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_sa_BaseID_s* x = ZX_ZALLOC(c, struct zxmd_sa_BaseID_s);
  x->gg.g.tok = zxmd_sa_BaseID_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_sa_BaseID_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_NameQualifier_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->NameQualifier->g;
      x->NameQualifier = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_SPNameQualifier_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->SPNameQualifier->g;
      x->SPNameQualifier = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_sa_Conditions) */

#define EL_NAME   sa_Conditions
#define EL_STRUCT zxmd_sa_Conditions_s
#define EL_NS     sa
#define EL_TAG    Conditions

struct zxmd_sa_Conditions_s* zxmd_DEC_sa_Conditions(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_sa_Conditions_s* x = ZX_ZALLOC(c, struct zxmd_sa_Conditions_s);
  x->gg.g.tok = zxmd_sa_Conditions_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_sa_Conditions_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_NotBefore_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->NotBefore->g;
      x->NotBefore = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_NotOnOrAfter_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->NotOnOrAfter->g;
      x->NotOnOrAfter = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_sa_Condition_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->Condition->g;
            x->Condition = el;
            break;
          case zxmd_sa_AudienceRestriction_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_AudienceRestriction(c);
            el->g.n = &x->AudienceRestriction->gg.g;
            x->AudienceRestriction = (struct zxmd_sa_AudienceRestriction_s*)el;
            break;
          case zxmd_sa_OneTimeUse_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_OneTimeUse(c);
            el->g.n = &x->OneTimeUse->gg.g;
            x->OneTimeUse = (struct zxmd_sa_OneTimeUse_s*)el;
            break;
          case zxmd_sa_ProxyRestriction_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_ProxyRestriction(c);
            el->g.n = &x->ProxyRestriction->gg.g;
            x->ProxyRestriction = (struct zxmd_sa_ProxyRestriction_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_sa_EncryptedAssertion) */

#define EL_NAME   sa_EncryptedAssertion
#define EL_STRUCT zxmd_sa_EncryptedAssertion_s
#define EL_NS     sa
#define EL_TAG    EncryptedAssertion

struct zxmd_sa_EncryptedAssertion_s* zxmd_DEC_sa_EncryptedAssertion(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_sa_EncryptedAssertion_s* x = ZX_ZALLOC(c, struct zxmd_sa_EncryptedAssertion_s);
  x->gg.g.tok = zxmd_sa_EncryptedAssertion_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_sa_EncryptedAssertion_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_xenc_EncryptedData_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_xenc_EncryptedData(c);
            el->g.n = &x->EncryptedData->gg.g;
            x->EncryptedData = (struct zxmd_xenc_EncryptedData_s*)el;
            break;
          case zxmd_xenc_EncryptedKey_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_xenc_EncryptedKey(c);
            el->g.n = &x->EncryptedKey->gg.g;
            x->EncryptedKey = (struct zxmd_xenc_EncryptedKey_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_sa_EncryptedAttribute) */

#define EL_NAME   sa_EncryptedAttribute
#define EL_STRUCT zxmd_sa_EncryptedAttribute_s
#define EL_NS     sa
#define EL_TAG    EncryptedAttribute

struct zxmd_sa_EncryptedAttribute_s* zxmd_DEC_sa_EncryptedAttribute(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_sa_EncryptedAttribute_s* x = ZX_ZALLOC(c, struct zxmd_sa_EncryptedAttribute_s);
  x->gg.g.tok = zxmd_sa_EncryptedAttribute_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_sa_EncryptedAttribute_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_xenc_EncryptedData_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_xenc_EncryptedData(c);
            el->g.n = &x->EncryptedData->gg.g;
            x->EncryptedData = (struct zxmd_xenc_EncryptedData_s*)el;
            break;
          case zxmd_xenc_EncryptedKey_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_xenc_EncryptedKey(c);
            el->g.n = &x->EncryptedKey->gg.g;
            x->EncryptedKey = (struct zxmd_xenc_EncryptedKey_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_sa_EncryptedID) */

#define EL_NAME   sa_EncryptedID
#define EL_STRUCT zxmd_sa_EncryptedID_s
#define EL_NS     sa
#define EL_TAG    EncryptedID

struct zxmd_sa_EncryptedID_s* zxmd_DEC_sa_EncryptedID(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_sa_EncryptedID_s* x = ZX_ZALLOC(c, struct zxmd_sa_EncryptedID_s);
  x->gg.g.tok = zxmd_sa_EncryptedID_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_sa_EncryptedID_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_xenc_EncryptedData_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_xenc_EncryptedData(c);
            el->g.n = &x->EncryptedData->gg.g;
            x->EncryptedData = (struct zxmd_xenc_EncryptedData_s*)el;
            break;
          case zxmd_xenc_EncryptedKey_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_xenc_EncryptedKey(c);
            el->g.n = &x->EncryptedKey->gg.g;
            x->EncryptedKey = (struct zxmd_xenc_EncryptedKey_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_sa_Evidence) */

#define EL_NAME   sa_Evidence
#define EL_STRUCT zxmd_sa_Evidence_s
#define EL_NS     sa
#define EL_TAG    Evidence

struct zxmd_sa_Evidence_s* zxmd_DEC_sa_Evidence(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_sa_Evidence_s* x = ZX_ZALLOC(c, struct zxmd_sa_Evidence_s);
  x->gg.g.tok = zxmd_sa_Evidence_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_sa_Evidence_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_sa_AssertionIDRef_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->AssertionIDRef->g;
            x->AssertionIDRef = el;
            break;
          case zxmd_sa_AssertionURIRef_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->AssertionURIRef->g;
            x->AssertionURIRef = el;
            break;
          case zxmd_sa_Assertion_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_Assertion(c);
            el->g.n = &x->Assertion->gg.g;
            x->Assertion = (struct zxmd_sa_Assertion_s*)el;
            break;
          case zxmd_sa_EncryptedAssertion_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_EncryptedAssertion(c);
            el->g.n = &x->EncryptedAssertion->gg.g;
            x->EncryptedAssertion = (struct zxmd_sa_EncryptedAssertion_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_sa_Issuer) */

#define EL_NAME   sa_Issuer
#define EL_STRUCT zxmd_sa_Issuer_s
#define EL_NS     sa
#define EL_TAG    Issuer

struct zxmd_sa_Issuer_s* zxmd_DEC_sa_Issuer(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_sa_Issuer_s* x = ZX_ZALLOC(c, struct zxmd_sa_Issuer_s);
  x->gg.g.tok = zxmd_sa_Issuer_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_sa_Issuer_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_NameQualifier_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->NameQualifier->g;
      x->NameQualifier = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_SPNameQualifier_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->SPNameQualifier->g;
      x->SPNameQualifier = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Format_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Format->g;
      x->Format = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_SPProvidedID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->SPProvidedID->g;
      x->SPProvidedID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_sa_NameID) */

#define EL_NAME   sa_NameID
#define EL_STRUCT zxmd_sa_NameID_s
#define EL_NS     sa
#define EL_TAG    NameID

struct zxmd_sa_NameID_s* zxmd_DEC_sa_NameID(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_sa_NameID_s* x = ZX_ZALLOC(c, struct zxmd_sa_NameID_s);
  x->gg.g.tok = zxmd_sa_NameID_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_sa_NameID_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_NameQualifier_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->NameQualifier->g;
      x->NameQualifier = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_SPNameQualifier_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->SPNameQualifier->g;
      x->SPNameQualifier = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Format_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Format->g;
      x->Format = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_SPProvidedID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->SPProvidedID->g;
      x->SPProvidedID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_sa_OneTimeUse) */

#define EL_NAME   sa_OneTimeUse
#define EL_STRUCT zxmd_sa_OneTimeUse_s
#define EL_NS     sa
#define EL_TAG    OneTimeUse

struct zxmd_sa_OneTimeUse_s* zxmd_DEC_sa_OneTimeUse(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_sa_OneTimeUse_s* x = ZX_ZALLOC(c, struct zxmd_sa_OneTimeUse_s);
  x->gg.g.tok = zxmd_sa_OneTimeUse_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_sa_OneTimeUse_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_sa_ProxyRestriction) */

#define EL_NAME   sa_ProxyRestriction
#define EL_STRUCT zxmd_sa_ProxyRestriction_s
#define EL_NS     sa
#define EL_TAG    ProxyRestriction

struct zxmd_sa_ProxyRestriction_s* zxmd_DEC_sa_ProxyRestriction(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_sa_ProxyRestriction_s* x = ZX_ZALLOC(c, struct zxmd_sa_ProxyRestriction_s);
  x->gg.g.tok = zxmd_sa_ProxyRestriction_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_sa_ProxyRestriction_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Count_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Count->g;
      x->Count = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_sa_Audience_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->Audience->g;
            x->Audience = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_sa_Subject) */

#define EL_NAME   sa_Subject
#define EL_STRUCT zxmd_sa_Subject_s
#define EL_NS     sa
#define EL_TAG    Subject

struct zxmd_sa_Subject_s* zxmd_DEC_sa_Subject(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_sa_Subject_s* x = ZX_ZALLOC(c, struct zxmd_sa_Subject_s);
  x->gg.g.tok = zxmd_sa_Subject_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_sa_Subject_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_sa_BaseID_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_BaseID(c);
            el->g.n = &x->BaseID->gg.g;
            x->BaseID = (struct zxmd_sa_BaseID_s*)el;
            break;
          case zxmd_sa_NameID_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_NameID(c);
            el->g.n = &x->NameID->gg.g;
            x->NameID = (struct zxmd_sa_NameID_s*)el;
            break;
          case zxmd_sa_EncryptedID_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_EncryptedID(c);
            el->g.n = &x->EncryptedID->gg.g;
            x->EncryptedID = (struct zxmd_sa_EncryptedID_s*)el;
            break;
          case zxmd_sa_SubjectConfirmation_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_SubjectConfirmation(c);
            el->g.n = &x->SubjectConfirmation->gg.g;
            x->SubjectConfirmation = (struct zxmd_sa_SubjectConfirmation_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_sa_SubjectConfirmation) */

#define EL_NAME   sa_SubjectConfirmation
#define EL_STRUCT zxmd_sa_SubjectConfirmation_s
#define EL_NS     sa
#define EL_TAG    SubjectConfirmation

struct zxmd_sa_SubjectConfirmation_s* zxmd_DEC_sa_SubjectConfirmation(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_sa_SubjectConfirmation_s* x = ZX_ZALLOC(c, struct zxmd_sa_SubjectConfirmation_s);
  x->gg.g.tok = zxmd_sa_SubjectConfirmation_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_sa_SubjectConfirmation_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Method_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Method->g;
      x->Method = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_sa_BaseID_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_BaseID(c);
            el->g.n = &x->BaseID->gg.g;
            x->BaseID = (struct zxmd_sa_BaseID_s*)el;
            break;
          case zxmd_sa_NameID_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_NameID(c);
            el->g.n = &x->NameID->gg.g;
            x->NameID = (struct zxmd_sa_NameID_s*)el;
            break;
          case zxmd_sa_EncryptedID_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_EncryptedID(c);
            el->g.n = &x->EncryptedID->gg.g;
            x->EncryptedID = (struct zxmd_sa_EncryptedID_s*)el;
            break;
          case zxmd_sa_SubjectConfirmationData_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_sa_SubjectConfirmationData(c);
            el->g.n = &x->SubjectConfirmationData->gg.g;
            x->SubjectConfirmationData = (struct zxmd_sa_SubjectConfirmationData_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_sa_SubjectConfirmationData) */

#define EL_NAME   sa_SubjectConfirmationData
#define EL_STRUCT zxmd_sa_SubjectConfirmationData_s
#define EL_NS     sa
#define EL_TAG    SubjectConfirmationData

struct zxmd_sa_SubjectConfirmationData_s* zxmd_DEC_sa_SubjectConfirmationData(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_sa_SubjectConfirmationData_s* x = ZX_ZALLOC(c, struct zxmd_sa_SubjectConfirmationData_s);
  x->gg.g.tok = zxmd_sa_SubjectConfirmationData_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_sa_SubjectConfirmationData_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_NotBefore_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->NotBefore->g;
      x->NotBefore = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_NotOnOrAfter_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->NotOnOrAfter->g;
      x->NotOnOrAfter = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Recipient_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Recipient->g;
      x->Recipient = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_InResponseTo_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->InResponseTo->g;
      x->InResponseTo = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Address_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Address->g;
      x->Address = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_sa_SubjectLocality) */

#define EL_NAME   sa_SubjectLocality
#define EL_STRUCT zxmd_sa_SubjectLocality_s
#define EL_NS     sa
#define EL_TAG    SubjectLocality

struct zxmd_sa_SubjectLocality_s* zxmd_DEC_sa_SubjectLocality(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_sa_SubjectLocality_s* x = ZX_ZALLOC(c, struct zxmd_sa_SubjectLocality_s);
  x->gg.g.tok = zxmd_sa_SubjectLocality_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_sa_SubjectLocality_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Address_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Address->g;
      x->Address = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_DNSName_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->DNSName->g;
      x->DNSName = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_sa_TestElem) */

#define EL_NAME   sa_TestElem
#define EL_STRUCT zxmd_sa_TestElem_s
#define EL_NS     sa
#define EL_TAG    TestElem

struct zxmd_sa_TestElem_s* zxmd_DEC_sa_TestElem(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_sa_TestElem_s* x = ZX_ZALLOC(c, struct zxmd_sa_TestElem_s);
  x->gg.g.tok = zxmd_sa_TestElem_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_sa_TestElem_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_sa_AttributeValue_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->AttributeValue->g;
            x->AttributeValue = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_xenc_AgreementMethod) */

#define EL_NAME   xenc_AgreementMethod
#define EL_STRUCT zxmd_xenc_AgreementMethod_s
#define EL_NS     xenc
#define EL_TAG    AgreementMethod

struct zxmd_xenc_AgreementMethod_s* zxmd_DEC_xenc_AgreementMethod(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_xenc_AgreementMethod_s* x = ZX_ZALLOC(c, struct zxmd_xenc_AgreementMethod_s);
  x->gg.g.tok = zxmd_xenc_AgreementMethod_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_xenc_AgreementMethod_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Algorithm_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Algorithm->g;
      x->Algorithm = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_xenc_KA_Nonce_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->KA_Nonce->g;
            x->KA_Nonce = el;
            break;
          case zxmd_xenc_OriginatorKeyInfo_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_xenc_OriginatorKeyInfo(c);
            el->g.n = &x->OriginatorKeyInfo->gg.g;
            x->OriginatorKeyInfo = (struct zxmd_xenc_OriginatorKeyInfo_s*)el;
            break;
          case zxmd_xenc_RecipientKeyInfo_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_xenc_RecipientKeyInfo(c);
            el->g.n = &x->RecipientKeyInfo->gg.g;
            x->RecipientKeyInfo = (struct zxmd_xenc_RecipientKeyInfo_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_xenc_CipherData) */

#define EL_NAME   xenc_CipherData
#define EL_STRUCT zxmd_xenc_CipherData_s
#define EL_NS     xenc
#define EL_TAG    CipherData

struct zxmd_xenc_CipherData_s* zxmd_DEC_xenc_CipherData(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_xenc_CipherData_s* x = ZX_ZALLOC(c, struct zxmd_xenc_CipherData_s);
  x->gg.g.tok = zxmd_xenc_CipherData_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_xenc_CipherData_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_xenc_CipherValue_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->CipherValue->g;
            x->CipherValue = el;
            break;
          case zxmd_xenc_CipherReference_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_xenc_CipherReference(c);
            el->g.n = &x->CipherReference->gg.g;
            x->CipherReference = (struct zxmd_xenc_CipherReference_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_xenc_CipherReference) */

#define EL_NAME   xenc_CipherReference
#define EL_STRUCT zxmd_xenc_CipherReference_s
#define EL_NS     xenc
#define EL_TAG    CipherReference

struct zxmd_xenc_CipherReference_s* zxmd_DEC_xenc_CipherReference(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_xenc_CipherReference_s* x = ZX_ZALLOC(c, struct zxmd_xenc_CipherReference_s);
  x->gg.g.tok = zxmd_xenc_CipherReference_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_xenc_CipherReference_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_URI_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->URI->g;
      x->URI = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_xenc_Transforms_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_xenc_Transforms(c);
            el->g.n = &x->Transforms->gg.g;
            x->Transforms = (struct zxmd_xenc_Transforms_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_xenc_DataReference) */

#define EL_NAME   xenc_DataReference
#define EL_STRUCT zxmd_xenc_DataReference_s
#define EL_NS     xenc
#define EL_TAG    DataReference

struct zxmd_xenc_DataReference_s* zxmd_DEC_xenc_DataReference(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_xenc_DataReference_s* x = ZX_ZALLOC(c, struct zxmd_xenc_DataReference_s);
  x->gg.g.tok = zxmd_xenc_DataReference_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_xenc_DataReference_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_URI_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->URI->g;
      x->URI = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_xenc_EncryptedData) */

#define EL_NAME   xenc_EncryptedData
#define EL_STRUCT zxmd_xenc_EncryptedData_s
#define EL_NS     xenc
#define EL_TAG    EncryptedData

struct zxmd_xenc_EncryptedData_s* zxmd_DEC_xenc_EncryptedData(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_xenc_EncryptedData_s* x = ZX_ZALLOC(c, struct zxmd_xenc_EncryptedData_s);
  x->gg.g.tok = zxmd_xenc_EncryptedData_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_xenc_EncryptedData_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Id->g;
      x->Id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Type_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Type->g;
      x->Type = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_MimeType_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->MimeType->g;
      x->MimeType = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Encoding_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Encoding->g;
      x->Encoding = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_xenc_EncryptionMethod_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_xenc_EncryptionMethod(c);
            el->g.n = &x->EncryptionMethod->gg.g;
            x->EncryptionMethod = (struct zxmd_xenc_EncryptionMethod_s*)el;
            break;
          case zxmd_ds_KeyInfo_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_KeyInfo(c);
            el->g.n = &x->KeyInfo->gg.g;
            x->KeyInfo = (struct zxmd_ds_KeyInfo_s*)el;
            break;
          case zxmd_xenc_CipherData_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_xenc_CipherData(c);
            el->g.n = &x->CipherData->gg.g;
            x->CipherData = (struct zxmd_xenc_CipherData_s*)el;
            break;
          case zxmd_xenc_EncryptionProperties_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_xenc_EncryptionProperties(c);
            el->g.n = &x->EncryptionProperties->gg.g;
            x->EncryptionProperties = (struct zxmd_xenc_EncryptionProperties_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_xenc_EncryptedKey) */

#define EL_NAME   xenc_EncryptedKey
#define EL_STRUCT zxmd_xenc_EncryptedKey_s
#define EL_NS     xenc
#define EL_TAG    EncryptedKey

struct zxmd_xenc_EncryptedKey_s* zxmd_DEC_xenc_EncryptedKey(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_xenc_EncryptedKey_s* x = ZX_ZALLOC(c, struct zxmd_xenc_EncryptedKey_s);
  x->gg.g.tok = zxmd_xenc_EncryptedKey_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_xenc_EncryptedKey_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Id->g;
      x->Id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Type_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Type->g;
      x->Type = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_MimeType_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->MimeType->g;
      x->MimeType = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Encoding_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Encoding->g;
      x->Encoding = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Recipient_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Recipient->g;
      x->Recipient = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_xenc_EncryptionMethod_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_xenc_EncryptionMethod(c);
            el->g.n = &x->EncryptionMethod->gg.g;
            x->EncryptionMethod = (struct zxmd_xenc_EncryptionMethod_s*)el;
            break;
          case zxmd_ds_KeyInfo_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_KeyInfo(c);
            el->g.n = &x->KeyInfo->gg.g;
            x->KeyInfo = (struct zxmd_ds_KeyInfo_s*)el;
            break;
          case zxmd_xenc_CipherData_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_xenc_CipherData(c);
            el->g.n = &x->CipherData->gg.g;
            x->CipherData = (struct zxmd_xenc_CipherData_s*)el;
            break;
          case zxmd_xenc_EncryptionProperties_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_xenc_EncryptionProperties(c);
            el->g.n = &x->EncryptionProperties->gg.g;
            x->EncryptionProperties = (struct zxmd_xenc_EncryptionProperties_s*)el;
            break;
          case zxmd_xenc_ReferenceList_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_xenc_ReferenceList(c);
            el->g.n = &x->ReferenceList->gg.g;
            x->ReferenceList = (struct zxmd_xenc_ReferenceList_s*)el;
            break;
          case zxmd_xenc_CarriedKeyName_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->CarriedKeyName->g;
            x->CarriedKeyName = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_xenc_EncryptionMethod) */

#define EL_NAME   xenc_EncryptionMethod
#define EL_STRUCT zxmd_xenc_EncryptionMethod_s
#define EL_NS     xenc
#define EL_TAG    EncryptionMethod

struct zxmd_xenc_EncryptionMethod_s* zxmd_DEC_xenc_EncryptionMethod(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_xenc_EncryptionMethod_s* x = ZX_ZALLOC(c, struct zxmd_xenc_EncryptionMethod_s);
  x->gg.g.tok = zxmd_xenc_EncryptionMethod_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_xenc_EncryptionMethod_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Algorithm_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Algorithm->g;
      x->Algorithm = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_xenc_KeySize_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->KeySize->g;
            x->KeySize = el;
            break;
          case zxmd_xenc_OAEPparams_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->OAEPparams->g;
            x->OAEPparams = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_xenc_EncryptionProperties) */

#define EL_NAME   xenc_EncryptionProperties
#define EL_STRUCT zxmd_xenc_EncryptionProperties_s
#define EL_NS     xenc
#define EL_TAG    EncryptionProperties

struct zxmd_xenc_EncryptionProperties_s* zxmd_DEC_xenc_EncryptionProperties(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_xenc_EncryptionProperties_s* x = ZX_ZALLOC(c, struct zxmd_xenc_EncryptionProperties_s);
  x->gg.g.tok = zxmd_xenc_EncryptionProperties_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_xenc_EncryptionProperties_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Id->g;
      x->Id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_xenc_EncryptionProperty_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_xenc_EncryptionProperty(c);
            el->g.n = &x->EncryptionProperty->gg.g;
            x->EncryptionProperty = (struct zxmd_xenc_EncryptionProperty_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_xenc_EncryptionProperty) */

#define EL_NAME   xenc_EncryptionProperty
#define EL_STRUCT zxmd_xenc_EncryptionProperty_s
#define EL_NS     xenc
#define EL_TAG    EncryptionProperty

struct zxmd_xenc_EncryptionProperty_s* zxmd_DEC_xenc_EncryptionProperty(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_xenc_EncryptionProperty_s* x = ZX_ZALLOC(c, struct zxmd_xenc_EncryptionProperty_s);
  x->gg.g.tok = zxmd_xenc_EncryptionProperty_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_xenc_EncryptionProperty_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Target_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Target->g;
      x->Target = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxmd_Id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Id->g;
      x->Id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_xenc_KeyReference) */

#define EL_NAME   xenc_KeyReference
#define EL_STRUCT zxmd_xenc_KeyReference_s
#define EL_NS     xenc
#define EL_TAG    KeyReference

struct zxmd_xenc_KeyReference_s* zxmd_DEC_xenc_KeyReference(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_xenc_KeyReference_s* x = ZX_ZALLOC(c, struct zxmd_xenc_KeyReference_s);
  x->gg.g.tok = zxmd_xenc_KeyReference_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_xenc_KeyReference_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_URI_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->URI->g;
      x->URI = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_xenc_OriginatorKeyInfo) */

#define EL_NAME   xenc_OriginatorKeyInfo
#define EL_STRUCT zxmd_xenc_OriginatorKeyInfo_s
#define EL_NS     xenc
#define EL_TAG    OriginatorKeyInfo

struct zxmd_xenc_OriginatorKeyInfo_s* zxmd_DEC_xenc_OriginatorKeyInfo(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_xenc_OriginatorKeyInfo_s* x = ZX_ZALLOC(c, struct zxmd_xenc_OriginatorKeyInfo_s);
  x->gg.g.tok = zxmd_xenc_OriginatorKeyInfo_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_xenc_OriginatorKeyInfo_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Id->g;
      x->Id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_KeyName_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->KeyName->g;
            x->KeyName = el;
            break;
          case zxmd_ds_KeyValue_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_KeyValue(c);
            el->g.n = &x->KeyValue->gg.g;
            x->KeyValue = (struct zxmd_ds_KeyValue_s*)el;
            break;
          case zxmd_ds_RetrievalMethod_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_RetrievalMethod(c);
            el->g.n = &x->RetrievalMethod->gg.g;
            x->RetrievalMethod = (struct zxmd_ds_RetrievalMethod_s*)el;
            break;
          case zxmd_ds_X509Data_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_X509Data(c);
            el->g.n = &x->X509Data->gg.g;
            x->X509Data = (struct zxmd_ds_X509Data_s*)el;
            break;
          case zxmd_ds_PGPData_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_PGPData(c);
            el->g.n = &x->PGPData->gg.g;
            x->PGPData = (struct zxmd_ds_PGPData_s*)el;
            break;
          case zxmd_ds_SPKIData_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_SPKIData(c);
            el->g.n = &x->SPKIData->gg.g;
            x->SPKIData = (struct zxmd_ds_SPKIData_s*)el;
            break;
          case zxmd_ds_MgmtData_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->MgmtData->g;
            x->MgmtData = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_xenc_RecipientKeyInfo) */

#define EL_NAME   xenc_RecipientKeyInfo
#define EL_STRUCT zxmd_xenc_RecipientKeyInfo_s
#define EL_NS     xenc
#define EL_TAG    RecipientKeyInfo

struct zxmd_xenc_RecipientKeyInfo_s* zxmd_DEC_xenc_RecipientKeyInfo(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_xenc_RecipientKeyInfo_s* x = ZX_ZALLOC(c, struct zxmd_xenc_RecipientKeyInfo_s);
  x->gg.g.tok = zxmd_xenc_RecipientKeyInfo_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_xenc_RecipientKeyInfo_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxmd_Id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Id->g;
      x->Id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_KeyName_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->KeyName->g;
            x->KeyName = el;
            break;
          case zxmd_ds_KeyValue_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_KeyValue(c);
            el->g.n = &x->KeyValue->gg.g;
            x->KeyValue = (struct zxmd_ds_KeyValue_s*)el;
            break;
          case zxmd_ds_RetrievalMethod_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_RetrievalMethod(c);
            el->g.n = &x->RetrievalMethod->gg.g;
            x->RetrievalMethod = (struct zxmd_ds_RetrievalMethod_s*)el;
            break;
          case zxmd_ds_X509Data_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_X509Data(c);
            el->g.n = &x->X509Data->gg.g;
            x->X509Data = (struct zxmd_ds_X509Data_s*)el;
            break;
          case zxmd_ds_PGPData_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_PGPData(c);
            el->g.n = &x->PGPData->gg.g;
            x->PGPData = (struct zxmd_ds_PGPData_s*)el;
            break;
          case zxmd_ds_SPKIData_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_SPKIData(c);
            el->g.n = &x->SPKIData->gg.g;
            x->SPKIData = (struct zxmd_ds_SPKIData_s*)el;
            break;
          case zxmd_ds_MgmtData_ELEM:
            el = zxmd_DEC_simple_elem(c, tok);
            el->g.n = &x->MgmtData->g;
            x->MgmtData = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_xenc_ReferenceList) */

#define EL_NAME   xenc_ReferenceList
#define EL_STRUCT zxmd_xenc_ReferenceList_s
#define EL_NS     xenc
#define EL_TAG    ReferenceList

struct zxmd_xenc_ReferenceList_s* zxmd_DEC_xenc_ReferenceList(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_xenc_ReferenceList_s* x = ZX_ZALLOC(c, struct zxmd_xenc_ReferenceList_s);
  x->gg.g.tok = zxmd_xenc_ReferenceList_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_xenc_ReferenceList_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_xenc_DataReference_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_xenc_DataReference(c);
            el->g.n = &x->DataReference->gg.g;
            x->DataReference = (struct zxmd_xenc_DataReference_s*)el;
            break;
          case zxmd_xenc_KeyReference_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_xenc_KeyReference(c);
            el->g.n = &x->KeyReference->gg.g;
            x->KeyReference = (struct zxmd_xenc_KeyReference_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_xenc_Transforms) */

#define EL_NAME   xenc_Transforms
#define EL_STRUCT zxmd_xenc_Transforms_s
#define EL_NS     xenc
#define EL_TAG    Transforms

struct zxmd_xenc_Transforms_s* zxmd_DEC_xenc_Transforms(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_xenc_Transforms_s* x = ZX_ZALLOC(c, struct zxmd_xenc_Transforms_s);
  x->gg.g.tok = zxmd_xenc_Transforms_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_xenc_Transforms_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_ds_Transform_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_ds_Transform(c);
            el->g.n = &x->Transform->gg.g;
            x->Transform = (struct zxmd_ds_Transform_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_root) */

#define EL_NAME   root
#define EL_STRUCT zxmd_root_s
#define EL_NS     
#define EL_TAG    root

struct zxmd_root_s* zxmd_DEC_root(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxmd_root_s* x = ZX_ZALLOC(c, struct zxmd_root_s);
  x->gg.g.tok = zxmd_root_ELEM;
  x->gg.g.ns = zxmd_elems[zxmd_root_ELEM].ns;
  ZX_START_DEC_EXT(x);



  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxmd_md_EntityDescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_EntityDescriptor(c);
            el->g.n = &x->EntityDescriptor->gg.g;
            x->EntityDescriptor = (struct zxmd_md_EntityDescriptor_s*)el;
            if (--x->gg.g.tok) break; else { x->gg.g.tok = tok; return x; };
          case zxmd_md_EntitiesDescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_md_EntitiesDescriptor(c);
            el->g.n = &x->EntitiesDescriptor->gg.g;
            x->EntitiesDescriptor = (struct zxmd_md_EntitiesDescriptor_s*)el;
            if (--x->gg.g.tok) break; else { x->gg.g.tok = tok; return x; };
          case zxmd_m20_EntityDescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_EntityDescriptor(c);
            el->g.n = &x->m20_EntityDescriptor->gg.g;
            x->m20_EntityDescriptor = (struct zxmd_m20_EntityDescriptor_s*)el;
            if (--x->gg.g.tok) break; else { x->gg.g.tok = tok; return x; };
          case zxmd_m20_EntitiesDescriptor_ELEM:
            el = (struct zx_elem_s*)zxmd_DEC_m20_EntitiesDescriptor(c);
            el->g.n = &x->m20_EntitiesDescriptor->gg.g;
            x->m20_EntitiesDescriptor = (struct zxmd_m20_EntitiesDescriptor_s*)el;
            if (--x->gg.g.tok) break; else { x->gg.g.tok = tok; return x; };

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_simple_elem) */

#define EL_NAME   simple_elem
#define EL_STRUCT zx_elem_s
#define EL_NS     
#define EL_TAG    simple_elem

struct zx_elem_s* zxmd_DEC_simple_elem(struct zx_ctx* c, int toke)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_elem_s* x = ZX_ZALLOC(c, struct zx_elem_s);
  x->g.tok = toke;
  x->g.ns = zxmd_elems[toke].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->any_attr->ss.g;
      x->any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->any_elem->gg.g;
	    x->any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->content->g;
    x->content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zxmd_DEC_wrong_elem) */

#define EL_NAME   wrong_elem
#define EL_STRUCT zx_any_elem_s
#define EL_NS     
#define EL_TAG    wrong_elem

struct zx_any_elem_s* zxmd_DEC_wrong_elem(struct zx_ctx* c, char* nam, int namlen)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_any_elem_s* x = ZX_ZALLOC(c, struct zx_any_elem_s);
  x->gg.g.tok = ZX_TOK_NOT_FOUND;
  zx_fix_any_elem_dec(c,x,nam,namlen);
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zxmd_attr_lookup(c, name, data-2);
    switch (tok) {

    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = zxmd_attrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zxmd_elem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zxmd_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxmd_DEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* This subtemplate is only expanded once (i.e. not per element) */

/* FUNC(zxmd_attr_lookup) */

/* Tokenize a string.
 * Lookup functions to convert a namespace qualified string to integer token.
 * One of each (attr and elem) is needed for every prefix used in code generation.
 * The ...2tok() functions come from code generation via gperf. */

int zxmd_attr_lookup(struct zx_ctx* c, char* name, char* lim)
{
  const struct zx_tok* zt;
  const struct zx_tok* ztt;
  char* prefix;
  char* p;
  
  for (p = name; p < lim && *p != ':'; ++p) ;  /* look for namespace prefix */
  if (p < lim) {
    prefix = name;
    name = p+1;
  } else
    prefix = 0;
  zt = zxmd_attr2tok(name, lim-name);
  if (!zt) {
    if (prefix && (name-1)-prefix == sizeof("xmlns")-1
	&& !memcmp("xmlns", prefix, sizeof("xmlns")-1)) {
      /* Namespace declaration */
      return ZX_TOK_XMLNS;
    }
    return ZX_TOK_NOT_FOUND;
  }
  
  /* The token hash can have duplicate entries (see -D flag to gperf). We differentiate
   * between them by looking at the namespace prefix. If none of the tokens in the
   * table match the namespace, we pick the first one (which, given hashing, is
   * difficult to predict and should not be depended on), whether it's right or wrong. */
  
  for (ztt = zt; ; ++ztt) {
    if (zx_is_ns_prefix(ztt->ns, prefix ? (name-1)-prefix : 0, prefix))
      return ztt - zxmd_attrs;
    /* *** Following check can overflow the token table if zt is already last. Usually
     * token table is followed by other constant tables so this should not be
     * a problem. Easiest fix would be to add to toke table a trailer element,
     * but that would mean altering gperf or sedding its output. */
    if (memcmp(ztt[1].name, name, lim-name))
      break;
  }
  if (prefix)
    D("No matching namespace found for attr(%.*s:%.*s)", prefix ? (name-1)-prefix : 0, prefix, lim-name, name);
  else
    D("info: No matching namespace found for unqualified attr(%.*s)", lim-name, name);
  return zt - zxmd_attrs;
}

/* FUNC(zxmd_elem_lookup) */

int zxmd_elem_lookup(struct zx_ctx* c, char* name, char* lim)
{
  const struct zx_tok* zt;
  const struct zx_tok* ztt;
  char* prefix;
  char* p;
  
  for (p = name; p < lim && *p != ':'; ++p) ;  /* look for namespace prefix */
  if (p < lim) {
    prefix = name;
    name = p+1;
  } else
    prefix = 0;
  zt = zxmd_elem2tok(name, lim-name);
  if (!zt)
    return ZX_TOK_NOT_FOUND;
  
  /* The token hash can have duplicate entries (see -D flag to gperf). We differentiate
   * between them by looking at the namespace prefix. If none of the tokens in the
   * table match the namespace, we pick the first one (which, given hashing, is
   * difficult to predict and should not be depended on), whether it's right or wrong. */
  
  for (ztt = zt; ; ++ztt) {
    if (zx_is_ns_prefix(ztt->ns, prefix ? (name-1)-prefix : 0, prefix))
      return ztt - zxmd_elems;
    /* *** Following check can overflow the token table if zt is already last. Usually
     * token table is followed by other constant tables so this should not be
     * a problem. Easiest fix would be to add to toke table a trailer element,
     * but that would mean altering gperf or sedding its output. */
    if (memcmp(ztt[1].name, name, lim-name))
      break;
  }
  D("No matching namespace found for elem(%.*s:%.*s)", prefix ? (name-1)-prefix : 0, prefix, lim-name, name);
  return zt - zxmd_elems;
}

/* EOF -- c/saml2md-dec.c */
