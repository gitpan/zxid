/* c/saml2-dec.c - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id: saml2-dec.c,v 1.27 2006/09/05 05:09:38 sampo Exp $ */
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
#include "c/saml2-const.h"
#include "c/saml2-data.h"

#define TPF zx_

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



/* FUNC(zx_DEC_ds_CanonicalizationMethod) */

#define EL_NAME   ds_CanonicalizationMethod
#define EL_STRUCT zx_ds_CanonicalizationMethod_s
#define EL_NS     ds
#define EL_TAG    CanonicalizationMethod

struct zx_ds_CanonicalizationMethod_s* zx_DEC_ds_CanonicalizationMethod(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_ds_CanonicalizationMethod_s* x = ZX_ZALLOC(c, struct zx_ds_CanonicalizationMethod_s);
  x->gg.g.tok = zx_ds_CanonicalizationMethod_ELEM;
  x->gg.g.ns = zx_elems[zx_ds_CanonicalizationMethod_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Algorithm_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_ds_DSAKeyValue) */

#define EL_NAME   ds_DSAKeyValue
#define EL_STRUCT zx_ds_DSAKeyValue_s
#define EL_NS     ds
#define EL_TAG    DSAKeyValue

struct zx_ds_DSAKeyValue_s* zx_DEC_ds_DSAKeyValue(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_ds_DSAKeyValue_s* x = ZX_ZALLOC(c, struct zx_ds_DSAKeyValue_s);
  x->gg.g.tok = zx_ds_DSAKeyValue_ELEM;
  x->gg.g.ns = zx_elems[zx_ds_DSAKeyValue_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_ds_P_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->P->g;
            x->P = el;
            break;
          case zx_ds_Q_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->Q->g;
            x->Q = el;
            break;
          case zx_ds_G_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->G->g;
            x->G = el;
            break;
          case zx_ds_Y_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->Y->g;
            x->Y = el;
            break;
          case zx_ds_J_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->J->g;
            x->J = el;
            break;
          case zx_ds_Seed_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->Seed->g;
            x->Seed = el;
            break;
          case zx_ds_PgenCounter_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->PgenCounter->g;
            x->PgenCounter = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_ds_DigestMethod) */

#define EL_NAME   ds_DigestMethod
#define EL_STRUCT zx_ds_DigestMethod_s
#define EL_NS     ds
#define EL_TAG    DigestMethod

struct zx_ds_DigestMethod_s* zx_DEC_ds_DigestMethod(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_ds_DigestMethod_s* x = ZX_ZALLOC(c, struct zx_ds_DigestMethod_s);
  x->gg.g.tok = zx_ds_DigestMethod_ELEM;
  x->gg.g.ns = zx_elems[zx_ds_DigestMethod_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Algorithm_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_ds_KeyInfo) */

#define EL_NAME   ds_KeyInfo
#define EL_STRUCT zx_ds_KeyInfo_s
#define EL_NS     ds
#define EL_TAG    KeyInfo

struct zx_ds_KeyInfo_s* zx_DEC_ds_KeyInfo(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_ds_KeyInfo_s* x = ZX_ZALLOC(c, struct zx_ds_KeyInfo_s);
  x->gg.g.tok = zx_ds_KeyInfo_ELEM;
  x->gg.g.ns = zx_elems[zx_ds_KeyInfo_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Id_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_ds_KeyName_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->KeyName->g;
            x->KeyName = el;
            break;
          case zx_ds_KeyValue_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_KeyValue(c);
            el->g.n = &x->KeyValue->gg.g;
            x->KeyValue = (struct zx_ds_KeyValue_s*)el;
            break;
          case zx_ds_RetrievalMethod_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_RetrievalMethod(c);
            el->g.n = &x->RetrievalMethod->gg.g;
            x->RetrievalMethod = (struct zx_ds_RetrievalMethod_s*)el;
            break;
          case zx_ds_X509Data_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_X509Data(c);
            el->g.n = &x->X509Data->gg.g;
            x->X509Data = (struct zx_ds_X509Data_s*)el;
            break;
          case zx_ds_PGPData_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_PGPData(c);
            el->g.n = &x->PGPData->gg.g;
            x->PGPData = (struct zx_ds_PGPData_s*)el;
            break;
          case zx_ds_SPKIData_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_SPKIData(c);
            el->g.n = &x->SPKIData->gg.g;
            x->SPKIData = (struct zx_ds_SPKIData_s*)el;
            break;
          case zx_ds_MgmtData_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->MgmtData->g;
            x->MgmtData = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_ds_KeyValue) */

#define EL_NAME   ds_KeyValue
#define EL_STRUCT zx_ds_KeyValue_s
#define EL_NS     ds
#define EL_TAG    KeyValue

struct zx_ds_KeyValue_s* zx_DEC_ds_KeyValue(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_ds_KeyValue_s* x = ZX_ZALLOC(c, struct zx_ds_KeyValue_s);
  x->gg.g.tok = zx_ds_KeyValue_ELEM;
  x->gg.g.ns = zx_elems[zx_ds_KeyValue_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_ds_DSAKeyValue_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_DSAKeyValue(c);
            el->g.n = &x->DSAKeyValue->gg.g;
            x->DSAKeyValue = (struct zx_ds_DSAKeyValue_s*)el;
            break;
          case zx_ds_RSAKeyValue_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_RSAKeyValue(c);
            el->g.n = &x->RSAKeyValue->gg.g;
            x->RSAKeyValue = (struct zx_ds_RSAKeyValue_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_ds_Manifest) */

#define EL_NAME   ds_Manifest
#define EL_STRUCT zx_ds_Manifest_s
#define EL_NS     ds
#define EL_TAG    Manifest

struct zx_ds_Manifest_s* zx_DEC_ds_Manifest(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_ds_Manifest_s* x = ZX_ZALLOC(c, struct zx_ds_Manifest_s);
  x->gg.g.tok = zx_ds_Manifest_ELEM;
  x->gg.g.ns = zx_elems[zx_ds_Manifest_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Id_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_ds_Reference_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_Reference(c);
            el->g.n = &x->Reference->gg.g;
            x->Reference = (struct zx_ds_Reference_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_ds_Object) */

#define EL_NAME   ds_Object
#define EL_STRUCT zx_ds_Object_s
#define EL_NS     ds
#define EL_TAG    Object

struct zx_ds_Object_s* zx_DEC_ds_Object(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_ds_Object_s* x = ZX_ZALLOC(c, struct zx_ds_Object_s);
  x->gg.g.tok = zx_ds_Object_ELEM;
  x->gg.g.ns = zx_elems[zx_ds_Object_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Id->g;
      x->Id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_MimeType_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->MimeType->g;
      x->MimeType = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Encoding_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_ds_PGPData) */

#define EL_NAME   ds_PGPData
#define EL_STRUCT zx_ds_PGPData_s
#define EL_NS     ds
#define EL_TAG    PGPData

struct zx_ds_PGPData_s* zx_DEC_ds_PGPData(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_ds_PGPData_s* x = ZX_ZALLOC(c, struct zx_ds_PGPData_s);
  x->gg.g.tok = zx_ds_PGPData_ELEM;
  x->gg.g.ns = zx_elems[zx_ds_PGPData_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_ds_PGPKeyID_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->PGPKeyID->g;
            x->PGPKeyID = el;
            break;
          case zx_ds_PGPKeyPacket_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->PGPKeyPacket->g;
            x->PGPKeyPacket = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_ds_RSAKeyValue) */

#define EL_NAME   ds_RSAKeyValue
#define EL_STRUCT zx_ds_RSAKeyValue_s
#define EL_NS     ds
#define EL_TAG    RSAKeyValue

struct zx_ds_RSAKeyValue_s* zx_DEC_ds_RSAKeyValue(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_ds_RSAKeyValue_s* x = ZX_ZALLOC(c, struct zx_ds_RSAKeyValue_s);
  x->gg.g.tok = zx_ds_RSAKeyValue_ELEM;
  x->gg.g.ns = zx_elems[zx_ds_RSAKeyValue_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_ds_Modulus_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->Modulus->g;
            x->Modulus = el;
            break;
          case zx_ds_Exponent_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->Exponent->g;
            x->Exponent = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_ds_Reference) */

#define EL_NAME   ds_Reference
#define EL_STRUCT zx_ds_Reference_s
#define EL_NS     ds
#define EL_TAG    Reference

struct zx_ds_Reference_s* zx_DEC_ds_Reference(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_ds_Reference_s* x = ZX_ZALLOC(c, struct zx_ds_Reference_s);
  x->gg.g.tok = zx_ds_Reference_ELEM;
  x->gg.g.ns = zx_elems[zx_ds_Reference_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Id->g;
      x->Id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_URI_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->URI->g;
      x->URI = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Type_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_ds_Transforms_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_Transforms(c);
            el->g.n = &x->Transforms->gg.g;
            x->Transforms = (struct zx_ds_Transforms_s*)el;
            break;
          case zx_ds_DigestMethod_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_DigestMethod(c);
            el->g.n = &x->DigestMethod->gg.g;
            x->DigestMethod = (struct zx_ds_DigestMethod_s*)el;
            break;
          case zx_ds_DigestValue_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->DigestValue->g;
            x->DigestValue = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_ds_RetrievalMethod) */

#define EL_NAME   ds_RetrievalMethod
#define EL_STRUCT zx_ds_RetrievalMethod_s
#define EL_NS     ds
#define EL_TAG    RetrievalMethod

struct zx_ds_RetrievalMethod_s* zx_DEC_ds_RetrievalMethod(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_ds_RetrievalMethod_s* x = ZX_ZALLOC(c, struct zx_ds_RetrievalMethod_s);
  x->gg.g.tok = zx_ds_RetrievalMethod_ELEM;
  x->gg.g.ns = zx_elems[zx_ds_RetrievalMethod_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_URI_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->URI->g;
      x->URI = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Type_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_ds_Transforms_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_Transforms(c);
            el->g.n = &x->Transforms->gg.g;
            x->Transforms = (struct zx_ds_Transforms_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_ds_SPKIData) */

#define EL_NAME   ds_SPKIData
#define EL_STRUCT zx_ds_SPKIData_s
#define EL_NS     ds
#define EL_TAG    SPKIData

struct zx_ds_SPKIData_s* zx_DEC_ds_SPKIData(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_ds_SPKIData_s* x = ZX_ZALLOC(c, struct zx_ds_SPKIData_s);
  x->gg.g.tok = zx_ds_SPKIData_ELEM;
  x->gg.g.ns = zx_elems[zx_ds_SPKIData_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_ds_SPKISexp_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->SPKISexp->g;
            x->SPKISexp = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_ds_Signature) */

#define EL_NAME   ds_Signature
#define EL_STRUCT zx_ds_Signature_s
#define EL_NS     ds
#define EL_TAG    Signature

struct zx_ds_Signature_s* zx_DEC_ds_Signature(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_ds_Signature_s* x = ZX_ZALLOC(c, struct zx_ds_Signature_s);
  x->gg.g.tok = zx_ds_Signature_ELEM;
  x->gg.g.ns = zx_elems[zx_ds_Signature_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Id_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_ds_SignedInfo_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_SignedInfo(c);
            el->g.n = &x->SignedInfo->gg.g;
            x->SignedInfo = (struct zx_ds_SignedInfo_s*)el;
            break;
          case zx_ds_SignatureValue_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_SignatureValue(c);
            el->g.n = &x->SignatureValue->gg.g;
            x->SignatureValue = (struct zx_ds_SignatureValue_s*)el;
            break;
          case zx_ds_KeyInfo_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_KeyInfo(c);
            el->g.n = &x->KeyInfo->gg.g;
            x->KeyInfo = (struct zx_ds_KeyInfo_s*)el;
            break;
          case zx_ds_Object_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_Object(c);
            el->g.n = &x->Object->gg.g;
            x->Object = (struct zx_ds_Object_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_ds_SignatureMethod) */

#define EL_NAME   ds_SignatureMethod
#define EL_STRUCT zx_ds_SignatureMethod_s
#define EL_NS     ds
#define EL_TAG    SignatureMethod

struct zx_ds_SignatureMethod_s* zx_DEC_ds_SignatureMethod(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_ds_SignatureMethod_s* x = ZX_ZALLOC(c, struct zx_ds_SignatureMethod_s);
  x->gg.g.tok = zx_ds_SignatureMethod_ELEM;
  x->gg.g.ns = zx_elems[zx_ds_SignatureMethod_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Algorithm_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_ds_HMACOutputLength_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->HMACOutputLength->g;
            x->HMACOutputLength = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_ds_SignatureProperties) */

#define EL_NAME   ds_SignatureProperties
#define EL_STRUCT zx_ds_SignatureProperties_s
#define EL_NS     ds
#define EL_TAG    SignatureProperties

struct zx_ds_SignatureProperties_s* zx_DEC_ds_SignatureProperties(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_ds_SignatureProperties_s* x = ZX_ZALLOC(c, struct zx_ds_SignatureProperties_s);
  x->gg.g.tok = zx_ds_SignatureProperties_ELEM;
  x->gg.g.ns = zx_elems[zx_ds_SignatureProperties_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Id_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_ds_SignatureProperty_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_SignatureProperty(c);
            el->g.n = &x->SignatureProperty->gg.g;
            x->SignatureProperty = (struct zx_ds_SignatureProperty_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_ds_SignatureProperty) */

#define EL_NAME   ds_SignatureProperty
#define EL_STRUCT zx_ds_SignatureProperty_s
#define EL_NS     ds
#define EL_TAG    SignatureProperty

struct zx_ds_SignatureProperty_s* zx_DEC_ds_SignatureProperty(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_ds_SignatureProperty_s* x = ZX_ZALLOC(c, struct zx_ds_SignatureProperty_s);
  x->gg.g.tok = zx_ds_SignatureProperty_ELEM;
  x->gg.g.ns = zx_elems[zx_ds_SignatureProperty_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Target_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Target->g;
      x->Target = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Id_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_ds_SignatureValue) */

#define EL_NAME   ds_SignatureValue
#define EL_STRUCT zx_ds_SignatureValue_s
#define EL_NS     ds
#define EL_TAG    SignatureValue

struct zx_ds_SignatureValue_s* zx_DEC_ds_SignatureValue(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_ds_SignatureValue_s* x = ZX_ZALLOC(c, struct zx_ds_SignatureValue_s);
  x->gg.g.tok = zx_ds_SignatureValue_ELEM;
  x->gg.g.ns = zx_elems[zx_ds_SignatureValue_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Id_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_ds_SignedInfo) */

#define EL_NAME   ds_SignedInfo
#define EL_STRUCT zx_ds_SignedInfo_s
#define EL_NS     ds
#define EL_TAG    SignedInfo

struct zx_ds_SignedInfo_s* zx_DEC_ds_SignedInfo(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_ds_SignedInfo_s* x = ZX_ZALLOC(c, struct zx_ds_SignedInfo_s);
  x->gg.g.tok = zx_ds_SignedInfo_ELEM;
  x->gg.g.ns = zx_elems[zx_ds_SignedInfo_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Id_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_ds_CanonicalizationMethod_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_CanonicalizationMethod(c);
            el->g.n = &x->CanonicalizationMethod->gg.g;
            x->CanonicalizationMethod = (struct zx_ds_CanonicalizationMethod_s*)el;
            break;
          case zx_ds_SignatureMethod_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_SignatureMethod(c);
            el->g.n = &x->SignatureMethod->gg.g;
            x->SignatureMethod = (struct zx_ds_SignatureMethod_s*)el;
            break;
          case zx_ds_Reference_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_Reference(c);
            el->g.n = &x->Reference->gg.g;
            x->Reference = (struct zx_ds_Reference_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_ds_Transform) */

#define EL_NAME   ds_Transform
#define EL_STRUCT zx_ds_Transform_s
#define EL_NS     ds
#define EL_TAG    Transform

struct zx_ds_Transform_s* zx_DEC_ds_Transform(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_ds_Transform_s* x = ZX_ZALLOC(c, struct zx_ds_Transform_s);
  x->gg.g.tok = zx_ds_Transform_ELEM;
  x->gg.g.ns = zx_elems[zx_ds_Transform_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Algorithm_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_ds_XPath_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->XPath->g;
            x->XPath = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_ds_Transforms) */

#define EL_NAME   ds_Transforms
#define EL_STRUCT zx_ds_Transforms_s
#define EL_NS     ds
#define EL_TAG    Transforms

struct zx_ds_Transforms_s* zx_DEC_ds_Transforms(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_ds_Transforms_s* x = ZX_ZALLOC(c, struct zx_ds_Transforms_s);
  x->gg.g.tok = zx_ds_Transforms_ELEM;
  x->gg.g.ns = zx_elems[zx_ds_Transforms_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_ds_Transform_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_Transform(c);
            el->g.n = &x->Transform->gg.g;
            x->Transform = (struct zx_ds_Transform_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_ds_X509Data) */

#define EL_NAME   ds_X509Data
#define EL_STRUCT zx_ds_X509Data_s
#define EL_NS     ds
#define EL_TAG    X509Data

struct zx_ds_X509Data_s* zx_DEC_ds_X509Data(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_ds_X509Data_s* x = ZX_ZALLOC(c, struct zx_ds_X509Data_s);
  x->gg.g.tok = zx_ds_X509Data_ELEM;
  x->gg.g.ns = zx_elems[zx_ds_X509Data_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_ds_X509IssuerSerial_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_X509IssuerSerial(c);
            el->g.n = &x->X509IssuerSerial->gg.g;
            x->X509IssuerSerial = (struct zx_ds_X509IssuerSerial_s*)el;
            break;
          case zx_ds_X509SKI_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->X509SKI->g;
            x->X509SKI = el;
            break;
          case zx_ds_X509SubjectName_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->X509SubjectName->g;
            x->X509SubjectName = el;
            break;
          case zx_ds_X509Certificate_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->X509Certificate->g;
            x->X509Certificate = el;
            break;
          case zx_ds_X509CRL_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->X509CRL->g;
            x->X509CRL = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_ds_X509IssuerSerial) */

#define EL_NAME   ds_X509IssuerSerial
#define EL_STRUCT zx_ds_X509IssuerSerial_s
#define EL_NS     ds
#define EL_TAG    X509IssuerSerial

struct zx_ds_X509IssuerSerial_s* zx_DEC_ds_X509IssuerSerial(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_ds_X509IssuerSerial_s* x = ZX_ZALLOC(c, struct zx_ds_X509IssuerSerial_s);
  x->gg.g.tok = zx_ds_X509IssuerSerial_ELEM;
  x->gg.g.ns = zx_elems[zx_ds_X509IssuerSerial_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_ds_X509IssuerName_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->X509IssuerName->g;
            x->X509IssuerName = el;
            break;
          case zx_ds_X509SerialNumber_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->X509SerialNumber->g;
            x->X509SerialNumber = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sa_Action) */

#define EL_NAME   sa_Action
#define EL_STRUCT zx_sa_Action_s
#define EL_NS     sa
#define EL_TAG    Action

struct zx_sa_Action_s* zx_DEC_sa_Action(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sa_Action_s* x = ZX_ZALLOC(c, struct zx_sa_Action_s);
  x->gg.g.tok = zx_sa_Action_ELEM;
  x->gg.g.ns = zx_elems[zx_sa_Action_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Namespace_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sa_Advice) */

#define EL_NAME   sa_Advice
#define EL_STRUCT zx_sa_Advice_s
#define EL_NS     sa
#define EL_TAG    Advice

struct zx_sa_Advice_s* zx_DEC_sa_Advice(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sa_Advice_s* x = ZX_ZALLOC(c, struct zx_sa_Advice_s);
  x->gg.g.tok = zx_sa_Advice_ELEM;
  x->gg.g.ns = zx_elems[zx_sa_Advice_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_AssertionIDRef_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->AssertionIDRef->g;
            x->AssertionIDRef = el;
            break;
          case zx_sa_AssertionURIRef_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->AssertionURIRef->g;
            x->AssertionURIRef = el;
            break;
          case zx_sa_Assertion_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Assertion(c);
            el->g.n = &x->Assertion->gg.g;
            x->Assertion = (struct zx_sa_Assertion_s*)el;
            break;
          case zx_sa_EncryptedAssertion_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_EncryptedAssertion(c);
            el->g.n = &x->EncryptedAssertion->gg.g;
            x->EncryptedAssertion = (struct zx_sa_EncryptedAssertion_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sa_Assertion) */

#define EL_NAME   sa_Assertion
#define EL_STRUCT zx_sa_Assertion_s
#define EL_NS     sa
#define EL_TAG    Assertion

struct zx_sa_Assertion_s* zx_DEC_sa_Assertion(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sa_Assertion_s* x = ZX_ZALLOC(c, struct zx_sa_Assertion_s);
  x->gg.g.tok = zx_sa_Assertion_ELEM;
  x->gg.g.ns = zx_elems[zx_sa_Assertion_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Version_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Version->g;
      x->Version = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_IssueInstant_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_Issuer_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Issuer(c);
            el->g.n = &x->Issuer->gg.g;
            x->Issuer = (struct zx_sa_Issuer_s*)el;
            break;
          case zx_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zx_ds_Signature_s*)el;
            break;
          case zx_sa_Subject_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Subject(c);
            el->g.n = &x->Subject->gg.g;
            x->Subject = (struct zx_sa_Subject_s*)el;
            break;
          case zx_sa_Conditions_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Conditions(c);
            el->g.n = &x->Conditions->gg.g;
            x->Conditions = (struct zx_sa_Conditions_s*)el;
            break;
          case zx_sa_Advice_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Advice(c);
            el->g.n = &x->Advice->gg.g;
            x->Advice = (struct zx_sa_Advice_s*)el;
            break;
          case zx_sa_Statement_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->Statement->g;
            x->Statement = el;
            break;
          case zx_sa_AuthnStatement_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_AuthnStatement(c);
            el->g.n = &x->AuthnStatement->gg.g;
            x->AuthnStatement = (struct zx_sa_AuthnStatement_s*)el;
            break;
          case zx_sa_AuthzDecisionStatement_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_AuthzDecisionStatement(c);
            el->g.n = &x->AuthzDecisionStatement->gg.g;
            x->AuthzDecisionStatement = (struct zx_sa_AuthzDecisionStatement_s*)el;
            break;
          case zx_sa_AttributeStatement_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_AttributeStatement(c);
            el->g.n = &x->AttributeStatement->gg.g;
            x->AttributeStatement = (struct zx_sa_AttributeStatement_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sa_Attribute) */

#define EL_NAME   sa_Attribute
#define EL_STRUCT zx_sa_Attribute_s
#define EL_NS     sa
#define EL_TAG    Attribute

struct zx_sa_Attribute_s* zx_DEC_sa_Attribute(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sa_Attribute_s* x = ZX_ZALLOC(c, struct zx_sa_Attribute_s);
  x->gg.g.tok = zx_sa_Attribute_ELEM;
  x->gg.g.ns = zx_elems[zx_sa_Attribute_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Name_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Name->g;
      x->Name = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_NameFormat_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->NameFormat->g;
      x->NameFormat = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_FriendlyName_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_AttributeValue_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->AttributeValue->g;
            x->AttributeValue = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sa_AttributeStatement) */

#define EL_NAME   sa_AttributeStatement
#define EL_STRUCT zx_sa_AttributeStatement_s
#define EL_NS     sa
#define EL_TAG    AttributeStatement

struct zx_sa_AttributeStatement_s* zx_DEC_sa_AttributeStatement(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sa_AttributeStatement_s* x = ZX_ZALLOC(c, struct zx_sa_AttributeStatement_s);
  x->gg.g.tok = zx_sa_AttributeStatement_ELEM;
  x->gg.g.ns = zx_elems[zx_sa_AttributeStatement_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_Attribute_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Attribute(c);
            el->g.n = &x->Attribute->gg.g;
            x->Attribute = (struct zx_sa_Attribute_s*)el;
            break;
          case zx_sa_EncryptedAttribute_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_EncryptedAttribute(c);
            el->g.n = &x->EncryptedAttribute->gg.g;
            x->EncryptedAttribute = (struct zx_sa_EncryptedAttribute_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sa_AudienceRestriction) */

#define EL_NAME   sa_AudienceRestriction
#define EL_STRUCT zx_sa_AudienceRestriction_s
#define EL_NS     sa
#define EL_TAG    AudienceRestriction

struct zx_sa_AudienceRestriction_s* zx_DEC_sa_AudienceRestriction(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sa_AudienceRestriction_s* x = ZX_ZALLOC(c, struct zx_sa_AudienceRestriction_s);
  x->gg.g.tok = zx_sa_AudienceRestriction_ELEM;
  x->gg.g.ns = zx_elems[zx_sa_AudienceRestriction_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_Audience_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->Audience->g;
            x->Audience = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sa_AuthnContext) */

#define EL_NAME   sa_AuthnContext
#define EL_STRUCT zx_sa_AuthnContext_s
#define EL_NS     sa
#define EL_TAG    AuthnContext

struct zx_sa_AuthnContext_s* zx_DEC_sa_AuthnContext(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sa_AuthnContext_s* x = ZX_ZALLOC(c, struct zx_sa_AuthnContext_s);
  x->gg.g.tok = zx_sa_AuthnContext_ELEM;
  x->gg.g.ns = zx_elems[zx_sa_AuthnContext_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_AuthnContextClassRef_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->AuthnContextClassRef->g;
            x->AuthnContextClassRef = el;
            break;
          case zx_sa_AuthnContextDecl_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->AuthnContextDecl->g;
            x->AuthnContextDecl = el;
            break;
          case zx_sa_AuthnContextDeclRef_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->AuthnContextDeclRef->g;
            x->AuthnContextDeclRef = el;
            break;
          case zx_sa_AuthenticatingAuthority_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->AuthenticatingAuthority->g;
            x->AuthenticatingAuthority = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sa_AuthnStatement) */

#define EL_NAME   sa_AuthnStatement
#define EL_STRUCT zx_sa_AuthnStatement_s
#define EL_NS     sa
#define EL_TAG    AuthnStatement

struct zx_sa_AuthnStatement_s* zx_DEC_sa_AuthnStatement(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sa_AuthnStatement_s* x = ZX_ZALLOC(c, struct zx_sa_AuthnStatement_s);
  x->gg.g.tok = zx_sa_AuthnStatement_ELEM;
  x->gg.g.ns = zx_elems[zx_sa_AuthnStatement_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_AuthnInstant_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->AuthnInstant->g;
      x->AuthnInstant = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_SessionIndex_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->SessionIndex->g;
      x->SessionIndex = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_SessionNotOnOrAfter_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_SubjectLocality_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_SubjectLocality(c);
            el->g.n = &x->SubjectLocality->gg.g;
            x->SubjectLocality = (struct zx_sa_SubjectLocality_s*)el;
            break;
          case zx_sa_AuthnContext_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_AuthnContext(c);
            el->g.n = &x->AuthnContext->gg.g;
            x->AuthnContext = (struct zx_sa_AuthnContext_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sa_AuthzDecisionStatement) */

#define EL_NAME   sa_AuthzDecisionStatement
#define EL_STRUCT zx_sa_AuthzDecisionStatement_s
#define EL_NS     sa
#define EL_TAG    AuthzDecisionStatement

struct zx_sa_AuthzDecisionStatement_s* zx_DEC_sa_AuthzDecisionStatement(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sa_AuthzDecisionStatement_s* x = ZX_ZALLOC(c, struct zx_sa_AuthzDecisionStatement_s);
  x->gg.g.tok = zx_sa_AuthzDecisionStatement_ELEM;
  x->gg.g.ns = zx_elems[zx_sa_AuthzDecisionStatement_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Resource_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Resource->g;
      x->Resource = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Decision_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_Action_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Action(c);
            el->g.n = &x->Action->gg.g;
            x->Action = (struct zx_sa_Action_s*)el;
            break;
          case zx_sa_Evidence_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Evidence(c);
            el->g.n = &x->Evidence->gg.g;
            x->Evidence = (struct zx_sa_Evidence_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sa_BaseID) */

#define EL_NAME   sa_BaseID
#define EL_STRUCT zx_sa_BaseID_s
#define EL_NS     sa
#define EL_TAG    BaseID

struct zx_sa_BaseID_s* zx_DEC_sa_BaseID(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sa_BaseID_s* x = ZX_ZALLOC(c, struct zx_sa_BaseID_s);
  x->gg.g.tok = zx_sa_BaseID_ELEM;
  x->gg.g.ns = zx_elems[zx_sa_BaseID_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_NameQualifier_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->NameQualifier->g;
      x->NameQualifier = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_SPNameQualifier_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sa_Conditions) */

#define EL_NAME   sa_Conditions
#define EL_STRUCT zx_sa_Conditions_s
#define EL_NS     sa
#define EL_TAG    Conditions

struct zx_sa_Conditions_s* zx_DEC_sa_Conditions(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sa_Conditions_s* x = ZX_ZALLOC(c, struct zx_sa_Conditions_s);
  x->gg.g.tok = zx_sa_Conditions_ELEM;
  x->gg.g.ns = zx_elems[zx_sa_Conditions_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_NotBefore_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->NotBefore->g;
      x->NotBefore = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_NotOnOrAfter_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_Condition_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->Condition->g;
            x->Condition = el;
            break;
          case zx_sa_AudienceRestriction_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_AudienceRestriction(c);
            el->g.n = &x->AudienceRestriction->gg.g;
            x->AudienceRestriction = (struct zx_sa_AudienceRestriction_s*)el;
            break;
          case zx_sa_OneTimeUse_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_OneTimeUse(c);
            el->g.n = &x->OneTimeUse->gg.g;
            x->OneTimeUse = (struct zx_sa_OneTimeUse_s*)el;
            break;
          case zx_sa_ProxyRestriction_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_ProxyRestriction(c);
            el->g.n = &x->ProxyRestriction->gg.g;
            x->ProxyRestriction = (struct zx_sa_ProxyRestriction_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sa_EncryptedAssertion) */

#define EL_NAME   sa_EncryptedAssertion
#define EL_STRUCT zx_sa_EncryptedAssertion_s
#define EL_NS     sa
#define EL_TAG    EncryptedAssertion

struct zx_sa_EncryptedAssertion_s* zx_DEC_sa_EncryptedAssertion(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sa_EncryptedAssertion_s* x = ZX_ZALLOC(c, struct zx_sa_EncryptedAssertion_s);
  x->gg.g.tok = zx_sa_EncryptedAssertion_ELEM;
  x->gg.g.ns = zx_elems[zx_sa_EncryptedAssertion_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_xenc_EncryptedData_ELEM:
            el = (struct zx_elem_s*)zx_DEC_xenc_EncryptedData(c);
            el->g.n = &x->EncryptedData->gg.g;
            x->EncryptedData = (struct zx_xenc_EncryptedData_s*)el;
            break;
          case zx_xenc_EncryptedKey_ELEM:
            el = (struct zx_elem_s*)zx_DEC_xenc_EncryptedKey(c);
            el->g.n = &x->EncryptedKey->gg.g;
            x->EncryptedKey = (struct zx_xenc_EncryptedKey_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sa_EncryptedAttribute) */

#define EL_NAME   sa_EncryptedAttribute
#define EL_STRUCT zx_sa_EncryptedAttribute_s
#define EL_NS     sa
#define EL_TAG    EncryptedAttribute

struct zx_sa_EncryptedAttribute_s* zx_DEC_sa_EncryptedAttribute(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sa_EncryptedAttribute_s* x = ZX_ZALLOC(c, struct zx_sa_EncryptedAttribute_s);
  x->gg.g.tok = zx_sa_EncryptedAttribute_ELEM;
  x->gg.g.ns = zx_elems[zx_sa_EncryptedAttribute_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_xenc_EncryptedData_ELEM:
            el = (struct zx_elem_s*)zx_DEC_xenc_EncryptedData(c);
            el->g.n = &x->EncryptedData->gg.g;
            x->EncryptedData = (struct zx_xenc_EncryptedData_s*)el;
            break;
          case zx_xenc_EncryptedKey_ELEM:
            el = (struct zx_elem_s*)zx_DEC_xenc_EncryptedKey(c);
            el->g.n = &x->EncryptedKey->gg.g;
            x->EncryptedKey = (struct zx_xenc_EncryptedKey_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sa_EncryptedID) */

#define EL_NAME   sa_EncryptedID
#define EL_STRUCT zx_sa_EncryptedID_s
#define EL_NS     sa
#define EL_TAG    EncryptedID

struct zx_sa_EncryptedID_s* zx_DEC_sa_EncryptedID(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sa_EncryptedID_s* x = ZX_ZALLOC(c, struct zx_sa_EncryptedID_s);
  x->gg.g.tok = zx_sa_EncryptedID_ELEM;
  x->gg.g.ns = zx_elems[zx_sa_EncryptedID_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_xenc_EncryptedData_ELEM:
            el = (struct zx_elem_s*)zx_DEC_xenc_EncryptedData(c);
            el->g.n = &x->EncryptedData->gg.g;
            x->EncryptedData = (struct zx_xenc_EncryptedData_s*)el;
            break;
          case zx_xenc_EncryptedKey_ELEM:
            el = (struct zx_elem_s*)zx_DEC_xenc_EncryptedKey(c);
            el->g.n = &x->EncryptedKey->gg.g;
            x->EncryptedKey = (struct zx_xenc_EncryptedKey_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sa_Evidence) */

#define EL_NAME   sa_Evidence
#define EL_STRUCT zx_sa_Evidence_s
#define EL_NS     sa
#define EL_TAG    Evidence

struct zx_sa_Evidence_s* zx_DEC_sa_Evidence(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sa_Evidence_s* x = ZX_ZALLOC(c, struct zx_sa_Evidence_s);
  x->gg.g.tok = zx_sa_Evidence_ELEM;
  x->gg.g.ns = zx_elems[zx_sa_Evidence_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_AssertionIDRef_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->AssertionIDRef->g;
            x->AssertionIDRef = el;
            break;
          case zx_sa_AssertionURIRef_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->AssertionURIRef->g;
            x->AssertionURIRef = el;
            break;
          case zx_sa_Assertion_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Assertion(c);
            el->g.n = &x->Assertion->gg.g;
            x->Assertion = (struct zx_sa_Assertion_s*)el;
            break;
          case zx_sa_EncryptedAssertion_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_EncryptedAssertion(c);
            el->g.n = &x->EncryptedAssertion->gg.g;
            x->EncryptedAssertion = (struct zx_sa_EncryptedAssertion_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sa_Issuer) */

#define EL_NAME   sa_Issuer
#define EL_STRUCT zx_sa_Issuer_s
#define EL_NS     sa
#define EL_TAG    Issuer

struct zx_sa_Issuer_s* zx_DEC_sa_Issuer(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sa_Issuer_s* x = ZX_ZALLOC(c, struct zx_sa_Issuer_s);
  x->gg.g.tok = zx_sa_Issuer_ELEM;
  x->gg.g.ns = zx_elems[zx_sa_Issuer_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_NameQualifier_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->NameQualifier->g;
      x->NameQualifier = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_SPNameQualifier_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->SPNameQualifier->g;
      x->SPNameQualifier = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Format_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Format->g;
      x->Format = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_SPProvidedID_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sa_NameID) */

#define EL_NAME   sa_NameID
#define EL_STRUCT zx_sa_NameID_s
#define EL_NS     sa
#define EL_TAG    NameID

struct zx_sa_NameID_s* zx_DEC_sa_NameID(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sa_NameID_s* x = ZX_ZALLOC(c, struct zx_sa_NameID_s);
  x->gg.g.tok = zx_sa_NameID_ELEM;
  x->gg.g.ns = zx_elems[zx_sa_NameID_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_NameQualifier_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->NameQualifier->g;
      x->NameQualifier = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_SPNameQualifier_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->SPNameQualifier->g;
      x->SPNameQualifier = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Format_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Format->g;
      x->Format = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_SPProvidedID_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sa_OneTimeUse) */

#define EL_NAME   sa_OneTimeUse
#define EL_STRUCT zx_sa_OneTimeUse_s
#define EL_NS     sa
#define EL_TAG    OneTimeUse

struct zx_sa_OneTimeUse_s* zx_DEC_sa_OneTimeUse(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sa_OneTimeUse_s* x = ZX_ZALLOC(c, struct zx_sa_OneTimeUse_s);
  x->gg.g.tok = zx_sa_OneTimeUse_ELEM;
  x->gg.g.ns = zx_elems[zx_sa_OneTimeUse_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sa_ProxyRestriction) */

#define EL_NAME   sa_ProxyRestriction
#define EL_STRUCT zx_sa_ProxyRestriction_s
#define EL_NS     sa
#define EL_TAG    ProxyRestriction

struct zx_sa_ProxyRestriction_s* zx_DEC_sa_ProxyRestriction(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sa_ProxyRestriction_s* x = ZX_ZALLOC(c, struct zx_sa_ProxyRestriction_s);
  x->gg.g.tok = zx_sa_ProxyRestriction_ELEM;
  x->gg.g.ns = zx_elems[zx_sa_ProxyRestriction_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Count_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_Audience_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->Audience->g;
            x->Audience = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sa_Subject) */

#define EL_NAME   sa_Subject
#define EL_STRUCT zx_sa_Subject_s
#define EL_NS     sa
#define EL_TAG    Subject

struct zx_sa_Subject_s* zx_DEC_sa_Subject(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sa_Subject_s* x = ZX_ZALLOC(c, struct zx_sa_Subject_s);
  x->gg.g.tok = zx_sa_Subject_ELEM;
  x->gg.g.ns = zx_elems[zx_sa_Subject_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_BaseID_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_BaseID(c);
            el->g.n = &x->BaseID->gg.g;
            x->BaseID = (struct zx_sa_BaseID_s*)el;
            break;
          case zx_sa_NameID_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_NameID(c);
            el->g.n = &x->NameID->gg.g;
            x->NameID = (struct zx_sa_NameID_s*)el;
            break;
          case zx_sa_EncryptedID_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_EncryptedID(c);
            el->g.n = &x->EncryptedID->gg.g;
            x->EncryptedID = (struct zx_sa_EncryptedID_s*)el;
            break;
          case zx_sa_SubjectConfirmation_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_SubjectConfirmation(c);
            el->g.n = &x->SubjectConfirmation->gg.g;
            x->SubjectConfirmation = (struct zx_sa_SubjectConfirmation_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sa_SubjectConfirmation) */

#define EL_NAME   sa_SubjectConfirmation
#define EL_STRUCT zx_sa_SubjectConfirmation_s
#define EL_NS     sa
#define EL_TAG    SubjectConfirmation

struct zx_sa_SubjectConfirmation_s* zx_DEC_sa_SubjectConfirmation(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sa_SubjectConfirmation_s* x = ZX_ZALLOC(c, struct zx_sa_SubjectConfirmation_s);
  x->gg.g.tok = zx_sa_SubjectConfirmation_ELEM;
  x->gg.g.ns = zx_elems[zx_sa_SubjectConfirmation_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Method_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_BaseID_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_BaseID(c);
            el->g.n = &x->BaseID->gg.g;
            x->BaseID = (struct zx_sa_BaseID_s*)el;
            break;
          case zx_sa_NameID_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_NameID(c);
            el->g.n = &x->NameID->gg.g;
            x->NameID = (struct zx_sa_NameID_s*)el;
            break;
          case zx_sa_EncryptedID_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_EncryptedID(c);
            el->g.n = &x->EncryptedID->gg.g;
            x->EncryptedID = (struct zx_sa_EncryptedID_s*)el;
            break;
          case zx_sa_SubjectConfirmationData_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_SubjectConfirmationData(c);
            el->g.n = &x->SubjectConfirmationData->gg.g;
            x->SubjectConfirmationData = (struct zx_sa_SubjectConfirmationData_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sa_SubjectConfirmationData) */

#define EL_NAME   sa_SubjectConfirmationData
#define EL_STRUCT zx_sa_SubjectConfirmationData_s
#define EL_NS     sa
#define EL_TAG    SubjectConfirmationData

struct zx_sa_SubjectConfirmationData_s* zx_DEC_sa_SubjectConfirmationData(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sa_SubjectConfirmationData_s* x = ZX_ZALLOC(c, struct zx_sa_SubjectConfirmationData_s);
  x->gg.g.tok = zx_sa_SubjectConfirmationData_ELEM;
  x->gg.g.ns = zx_elems[zx_sa_SubjectConfirmationData_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_NotBefore_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->NotBefore->g;
      x->NotBefore = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_NotOnOrAfter_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->NotOnOrAfter->g;
      x->NotOnOrAfter = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Recipient_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Recipient->g;
      x->Recipient = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_InResponseTo_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->InResponseTo->g;
      x->InResponseTo = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Address_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sa_SubjectLocality) */

#define EL_NAME   sa_SubjectLocality
#define EL_STRUCT zx_sa_SubjectLocality_s
#define EL_NS     sa
#define EL_TAG    SubjectLocality

struct zx_sa_SubjectLocality_s* zx_DEC_sa_SubjectLocality(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sa_SubjectLocality_s* x = ZX_ZALLOC(c, struct zx_sa_SubjectLocality_s);
  x->gg.g.tok = zx_sa_SubjectLocality_ELEM;
  x->gg.g.ns = zx_elems[zx_sa_SubjectLocality_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Address_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Address->g;
      x->Address = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_DNSName_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sa_TestElem) */

#define EL_NAME   sa_TestElem
#define EL_STRUCT zx_sa_TestElem_s
#define EL_NS     sa
#define EL_TAG    TestElem

struct zx_sa_TestElem_s* zx_DEC_sa_TestElem(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sa_TestElem_s* x = ZX_ZALLOC(c, struct zx_sa_TestElem_s);
  x->gg.g.tok = zx_sa_TestElem_ELEM;
  x->gg.g.ns = zx_elems[zx_sa_TestElem_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_AttributeValue_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->AttributeValue->g;
            x->AttributeValue = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_se_Body) */

#define EL_NAME   se_Body
#define EL_STRUCT zx_se_Body_s
#define EL_NS     se
#define EL_TAG    Body

struct zx_se_Body_s* zx_DEC_se_Body(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_se_Body_s* x = ZX_ZALLOC(c, struct zx_se_Body_s);
  x->gg.g.tok = zx_se_Body_ELEM;
  x->gg.g.ns = zx_elems[zx_se_Body_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sp_ArtifactResolve_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_ArtifactResolve(c);
            el->g.n = &x->ArtifactResolve->gg.g;
            x->ArtifactResolve = (struct zx_sp_ArtifactResolve_s*)el;
            break;
          case zx_sp_ArtifactResponse_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_ArtifactResponse(c);
            el->g.n = &x->ArtifactResponse->gg.g;
            x->ArtifactResponse = (struct zx_sp_ArtifactResponse_s*)el;
            break;
          case zx_sp_ManageNameIDRequest_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_ManageNameIDRequest(c);
            el->g.n = &x->ManageNameIDRequest->gg.g;
            x->ManageNameIDRequest = (struct zx_sp_ManageNameIDRequest_s*)el;
            break;
          case zx_sp_ManageNameIDResponse_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_ManageNameIDResponse(c);
            el->g.n = &x->ManageNameIDResponse->gg.g;
            x->ManageNameIDResponse = (struct zx_sp_ManageNameIDResponse_s*)el;
            break;
          case zx_sp_LogoutRequest_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_LogoutRequest(c);
            el->g.n = &x->LogoutRequest->gg.g;
            x->LogoutRequest = (struct zx_sp_LogoutRequest_s*)el;
            break;
          case zx_sp_LogoutResponse_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_LogoutResponse(c);
            el->g.n = &x->LogoutResponse->gg.g;
            x->LogoutResponse = (struct zx_sp_LogoutResponse_s*)el;
            break;
          case zx_sp_NameIDMappingRequest_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_NameIDMappingRequest(c);
            el->g.n = &x->NameIDMappingRequest->gg.g;
            x->NameIDMappingRequest = (struct zx_sp_NameIDMappingRequest_s*)el;
            break;
          case zx_sp_NameIDMappingResponse_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_NameIDMappingResponse(c);
            el->g.n = &x->NameIDMappingResponse->gg.g;
            x->NameIDMappingResponse = (struct zx_sp_NameIDMappingResponse_s*)el;
            break;
          case zx_sp_AttributeQuery_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_AttributeQuery(c);
            el->g.n = &x->AttributeQuery->gg.g;
            x->AttributeQuery = (struct zx_sp_AttributeQuery_s*)el;
            break;
          case zx_sp_AuthnQuery_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_AuthnQuery(c);
            el->g.n = &x->AuthnQuery->gg.g;
            x->AuthnQuery = (struct zx_sp_AuthnQuery_s*)el;
            break;
          case zx_sp_AuthzDecisionQuery_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_AuthzDecisionQuery(c);
            el->g.n = &x->AuthzDecisionQuery->gg.g;
            x->AuthzDecisionQuery = (struct zx_sp_AuthzDecisionQuery_s*)el;
            break;
          case zx_sp_AssertionIDRequest_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_AssertionIDRequest(c);
            el->g.n = &x->AssertionIDRequest->gg.g;
            x->AssertionIDRequest = (struct zx_sp_AssertionIDRequest_s*)el;
            break;
          case zx_sp_Response_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_Response(c);
            el->g.n = &x->Response->gg.g;
            x->Response = (struct zx_sp_Response_s*)el;
            break;
          case zx_se_Fault_ELEM:
            el = (struct zx_elem_s*)zx_DEC_se_Fault(c);
            el->g.n = &x->Fault->gg.g;
            x->Fault = (struct zx_se_Fault_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_se_Envelope) */

#define EL_NAME   se_Envelope
#define EL_STRUCT zx_se_Envelope_s
#define EL_NS     se
#define EL_TAG    Envelope

struct zx_se_Envelope_s* zx_DEC_se_Envelope(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_se_Envelope_s* x = ZX_ZALLOC(c, struct zx_se_Envelope_s);
  x->gg.g.tok = zx_se_Envelope_ELEM;
  x->gg.g.ns = zx_elems[zx_se_Envelope_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_se_Header_ELEM:
            el = (struct zx_elem_s*)zx_DEC_se_Header(c);
            el->g.n = &x->Header->gg.g;
            x->Header = (struct zx_se_Header_s*)el;
            break;
          case zx_se_Body_ELEM:
            el = (struct zx_elem_s*)zx_DEC_se_Body(c);
            el->g.n = &x->Body->gg.g;
            x->Body = (struct zx_se_Body_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_se_Fault) */

#define EL_NAME   se_Fault
#define EL_STRUCT zx_se_Fault_s
#define EL_NS     se
#define EL_TAG    Fault

struct zx_se_Fault_s* zx_DEC_se_Fault(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_se_Fault_s* x = ZX_ZALLOC(c, struct zx_se_Fault_s);
  x->gg.g.tok = zx_se_Fault_ELEM;
  x->gg.g.ns = zx_elems[zx_se_Fault_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_se_faultcode_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->faultcode->g;
            x->faultcode = el;
            break;
          case zx_se_faultstring_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->faultstring->g;
            x->faultstring = el;
            break;
          case zx_se_faultactor_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->faultactor->g;
            x->faultactor = el;
            break;
          case zx_se_detail_ELEM:
            el = (struct zx_elem_s*)zx_DEC_se_detail(c);
            el->g.n = &x->detail->gg.g;
            x->detail = (struct zx_se_detail_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_se_Header) */

#define EL_NAME   se_Header
#define EL_STRUCT zx_se_Header_s
#define EL_NS     se
#define EL_TAG    Header

struct zx_se_Header_s* zx_DEC_se_Header(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_se_Header_s* x = ZX_ZALLOC(c, struct zx_se_Header_s);
  x->gg.g.tok = zx_se_Header_ELEM;
  x->gg.g.ns = zx_elems[zx_se_Header_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_se_detail) */

#define EL_NAME   se_detail
#define EL_STRUCT zx_se_detail_s
#define EL_NS     se
#define EL_TAG    detail

struct zx_se_detail_s* zx_DEC_se_detail(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_se_detail_s* x = ZX_ZALLOC(c, struct zx_se_detail_s);
  x->gg.g.tok = zx_se_detail_ELEM;
  x->gg.g.ns = zx_elems[zx_se_detail_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sp_ArtifactResolve) */

#define EL_NAME   sp_ArtifactResolve
#define EL_STRUCT zx_sp_ArtifactResolve_s
#define EL_NS     sp
#define EL_TAG    ArtifactResolve

struct zx_sp_ArtifactResolve_s* zx_DEC_sp_ArtifactResolve(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sp_ArtifactResolve_s* x = ZX_ZALLOC(c, struct zx_sp_ArtifactResolve_s);
  x->gg.g.tok = zx_sp_ArtifactResolve_ELEM;
  x->gg.g.ns = zx_elems[zx_sp_ArtifactResolve_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Version_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Version->g;
      x->Version = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_IssueInstant_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->IssueInstant->g;
      x->IssueInstant = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Destination_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Destination->g;
      x->Destination = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Consent_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Consent->g;
      x->Consent = ss;
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_Issuer_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Issuer(c);
            el->g.n = &x->Issuer->gg.g;
            x->Issuer = (struct zx_sa_Issuer_s*)el;
            break;
          case zx_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zx_ds_Signature_s*)el;
            break;
          case zx_sp_Extensions_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zx_sp_Extensions_s*)el;
            break;
          case zx_sp_Artifact_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->Artifact->g;
            x->Artifact = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sp_ArtifactResponse) */

#define EL_NAME   sp_ArtifactResponse
#define EL_STRUCT zx_sp_ArtifactResponse_s
#define EL_NS     sp
#define EL_TAG    ArtifactResponse

struct zx_sp_ArtifactResponse_s* zx_DEC_sp_ArtifactResponse(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sp_ArtifactResponse_s* x = ZX_ZALLOC(c, struct zx_sp_ArtifactResponse_s);
  x->gg.g.tok = zx_sp_ArtifactResponse_ELEM;
  x->gg.g.ns = zx_elems[zx_sp_ArtifactResponse_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_InResponseTo_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->InResponseTo->g;
      x->InResponseTo = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Version_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Version->g;
      x->Version = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_IssueInstant_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->IssueInstant->g;
      x->IssueInstant = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Destination_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Destination->g;
      x->Destination = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Consent_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Consent->g;
      x->Consent = ss;
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_Issuer_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Issuer(c);
            el->g.n = &x->Issuer->gg.g;
            x->Issuer = (struct zx_sa_Issuer_s*)el;
            break;
          case zx_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zx_ds_Signature_s*)el;
            break;
          case zx_sp_Extensions_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zx_sp_Extensions_s*)el;
            break;
          case zx_sp_Status_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_Status(c);
            el->g.n = &x->Status->gg.g;
            x->Status = (struct zx_sp_Status_s*)el;
            break;
          case zx_sp_Response_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_Response(c);
            el->g.n = &x->Response->gg.g;
            x->Response = (struct zx_sp_Response_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sp_AssertionIDRequest) */

#define EL_NAME   sp_AssertionIDRequest
#define EL_STRUCT zx_sp_AssertionIDRequest_s
#define EL_NS     sp
#define EL_TAG    AssertionIDRequest

struct zx_sp_AssertionIDRequest_s* zx_DEC_sp_AssertionIDRequest(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sp_AssertionIDRequest_s* x = ZX_ZALLOC(c, struct zx_sp_AssertionIDRequest_s);
  x->gg.g.tok = zx_sp_AssertionIDRequest_ELEM;
  x->gg.g.ns = zx_elems[zx_sp_AssertionIDRequest_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Version_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Version->g;
      x->Version = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_IssueInstant_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->IssueInstant->g;
      x->IssueInstant = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Destination_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Destination->g;
      x->Destination = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Consent_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Consent->g;
      x->Consent = ss;
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_Issuer_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Issuer(c);
            el->g.n = &x->Issuer->gg.g;
            x->Issuer = (struct zx_sa_Issuer_s*)el;
            break;
          case zx_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zx_ds_Signature_s*)el;
            break;
          case zx_sp_Extensions_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zx_sp_Extensions_s*)el;
            break;
          case zx_sa_AssertionIDRef_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->AssertionIDRef->g;
            x->AssertionIDRef = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sp_AttributeQuery) */

#define EL_NAME   sp_AttributeQuery
#define EL_STRUCT zx_sp_AttributeQuery_s
#define EL_NS     sp
#define EL_TAG    AttributeQuery

struct zx_sp_AttributeQuery_s* zx_DEC_sp_AttributeQuery(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sp_AttributeQuery_s* x = ZX_ZALLOC(c, struct zx_sp_AttributeQuery_s);
  x->gg.g.tok = zx_sp_AttributeQuery_ELEM;
  x->gg.g.ns = zx_elems[zx_sp_AttributeQuery_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Version_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Version->g;
      x->Version = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_IssueInstant_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->IssueInstant->g;
      x->IssueInstant = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Destination_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Destination->g;
      x->Destination = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Consent_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Consent->g;
      x->Consent = ss;
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_Issuer_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Issuer(c);
            el->g.n = &x->Issuer->gg.g;
            x->Issuer = (struct zx_sa_Issuer_s*)el;
            break;
          case zx_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zx_ds_Signature_s*)el;
            break;
          case zx_sp_Extensions_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zx_sp_Extensions_s*)el;
            break;
          case zx_sa_Subject_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Subject(c);
            el->g.n = &x->Subject->gg.g;
            x->Subject = (struct zx_sa_Subject_s*)el;
            break;
          case zx_sa_Attribute_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Attribute(c);
            el->g.n = &x->Attribute->gg.g;
            x->Attribute = (struct zx_sa_Attribute_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sp_AuthnQuery) */

#define EL_NAME   sp_AuthnQuery
#define EL_STRUCT zx_sp_AuthnQuery_s
#define EL_NS     sp
#define EL_TAG    AuthnQuery

struct zx_sp_AuthnQuery_s* zx_DEC_sp_AuthnQuery(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sp_AuthnQuery_s* x = ZX_ZALLOC(c, struct zx_sp_AuthnQuery_s);
  x->gg.g.tok = zx_sp_AuthnQuery_ELEM;
  x->gg.g.ns = zx_elems[zx_sp_AuthnQuery_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Version_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Version->g;
      x->Version = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_IssueInstant_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->IssueInstant->g;
      x->IssueInstant = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Destination_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Destination->g;
      x->Destination = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Consent_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Consent->g;
      x->Consent = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_SessionIndex_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->SessionIndex->g;
      x->SessionIndex = ss;
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_Issuer_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Issuer(c);
            el->g.n = &x->Issuer->gg.g;
            x->Issuer = (struct zx_sa_Issuer_s*)el;
            break;
          case zx_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zx_ds_Signature_s*)el;
            break;
          case zx_sp_Extensions_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zx_sp_Extensions_s*)el;
            break;
          case zx_sa_Subject_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Subject(c);
            el->g.n = &x->Subject->gg.g;
            x->Subject = (struct zx_sa_Subject_s*)el;
            break;
          case zx_sp_RequestedAuthnContext_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_RequestedAuthnContext(c);
            el->g.n = &x->RequestedAuthnContext->gg.g;
            x->RequestedAuthnContext = (struct zx_sp_RequestedAuthnContext_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sp_AuthnRequest) */

#define EL_NAME   sp_AuthnRequest
#define EL_STRUCT zx_sp_AuthnRequest_s
#define EL_NS     sp
#define EL_TAG    AuthnRequest

struct zx_sp_AuthnRequest_s* zx_DEC_sp_AuthnRequest(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sp_AuthnRequest_s* x = ZX_ZALLOC(c, struct zx_sp_AuthnRequest_s);
  x->gg.g.tok = zx_sp_AuthnRequest_ELEM;
  x->gg.g.ns = zx_elems[zx_sp_AuthnRequest_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Version_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Version->g;
      x->Version = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_IssueInstant_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->IssueInstant->g;
      x->IssueInstant = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Destination_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Destination->g;
      x->Destination = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Consent_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Consent->g;
      x->Consent = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_ForceAuthn_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ForceAuthn->g;
      x->ForceAuthn = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_IsPassive_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->IsPassive->g;
      x->IsPassive = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_ProtocolBinding_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ProtocolBinding->g;
      x->ProtocolBinding = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_AssertionConsumerServiceIndex_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->AssertionConsumerServiceIndex->g;
      x->AssertionConsumerServiceIndex = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_AssertionConsumerServiceURL_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->AssertionConsumerServiceURL->g;
      x->AssertionConsumerServiceURL = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_AttributeConsumingServiceIndex_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->AttributeConsumingServiceIndex->g;
      x->AttributeConsumingServiceIndex = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_ProviderName_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ProviderName->g;
      x->ProviderName = ss;
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_Issuer_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Issuer(c);
            el->g.n = &x->Issuer->gg.g;
            x->Issuer = (struct zx_sa_Issuer_s*)el;
            break;
          case zx_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zx_ds_Signature_s*)el;
            break;
          case zx_sp_Extensions_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zx_sp_Extensions_s*)el;
            break;
          case zx_sa_Subject_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Subject(c);
            el->g.n = &x->Subject->gg.g;
            x->Subject = (struct zx_sa_Subject_s*)el;
            break;
          case zx_sp_NameIDPolicy_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_NameIDPolicy(c);
            el->g.n = &x->NameIDPolicy->gg.g;
            x->NameIDPolicy = (struct zx_sp_NameIDPolicy_s*)el;
            break;
          case zx_sa_Conditions_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Conditions(c);
            el->g.n = &x->Conditions->gg.g;
            x->Conditions = (struct zx_sa_Conditions_s*)el;
            break;
          case zx_sp_RequestedAuthnContext_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_RequestedAuthnContext(c);
            el->g.n = &x->RequestedAuthnContext->gg.g;
            x->RequestedAuthnContext = (struct zx_sp_RequestedAuthnContext_s*)el;
            break;
          case zx_sp_Scoping_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_Scoping(c);
            el->g.n = &x->Scoping->gg.g;
            x->Scoping = (struct zx_sp_Scoping_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sp_AuthzDecisionQuery) */

#define EL_NAME   sp_AuthzDecisionQuery
#define EL_STRUCT zx_sp_AuthzDecisionQuery_s
#define EL_NS     sp
#define EL_TAG    AuthzDecisionQuery

struct zx_sp_AuthzDecisionQuery_s* zx_DEC_sp_AuthzDecisionQuery(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sp_AuthzDecisionQuery_s* x = ZX_ZALLOC(c, struct zx_sp_AuthzDecisionQuery_s);
  x->gg.g.tok = zx_sp_AuthzDecisionQuery_ELEM;
  x->gg.g.ns = zx_elems[zx_sp_AuthzDecisionQuery_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Version_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Version->g;
      x->Version = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_IssueInstant_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->IssueInstant->g;
      x->IssueInstant = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Destination_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Destination->g;
      x->Destination = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Consent_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Consent->g;
      x->Consent = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Resource_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Resource->g;
      x->Resource = ss;
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_Issuer_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Issuer(c);
            el->g.n = &x->Issuer->gg.g;
            x->Issuer = (struct zx_sa_Issuer_s*)el;
            break;
          case zx_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zx_ds_Signature_s*)el;
            break;
          case zx_sp_Extensions_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zx_sp_Extensions_s*)el;
            break;
          case zx_sa_Subject_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Subject(c);
            el->g.n = &x->Subject->gg.g;
            x->Subject = (struct zx_sa_Subject_s*)el;
            break;
          case zx_sa_Action_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Action(c);
            el->g.n = &x->Action->gg.g;
            x->Action = (struct zx_sa_Action_s*)el;
            break;
          case zx_sa_Evidence_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Evidence(c);
            el->g.n = &x->Evidence->gg.g;
            x->Evidence = (struct zx_sa_Evidence_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sp_Extensions) */

#define EL_NAME   sp_Extensions
#define EL_STRUCT zx_sp_Extensions_s
#define EL_NS     sp
#define EL_TAG    Extensions

struct zx_sp_Extensions_s* zx_DEC_sp_Extensions(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sp_Extensions_s* x = ZX_ZALLOC(c, struct zx_sp_Extensions_s);
  x->gg.g.tok = zx_sp_Extensions_ELEM;
  x->gg.g.ns = zx_elems[zx_sp_Extensions_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sp_IDPEntry) */

#define EL_NAME   sp_IDPEntry
#define EL_STRUCT zx_sp_IDPEntry_s
#define EL_NS     sp
#define EL_TAG    IDPEntry

struct zx_sp_IDPEntry_s* zx_DEC_sp_IDPEntry(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sp_IDPEntry_s* x = ZX_ZALLOC(c, struct zx_sp_IDPEntry_s);
  x->gg.g.tok = zx_sp_IDPEntry_ELEM;
  x->gg.g.ns = zx_elems[zx_sp_IDPEntry_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_ProviderID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ProviderID->g;
      x->ProviderID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Name_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Name->g;
      x->Name = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Loc_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Loc->g;
      x->Loc = ss;
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sp_IDPList) */

#define EL_NAME   sp_IDPList
#define EL_STRUCT zx_sp_IDPList_s
#define EL_NS     sp
#define EL_TAG    IDPList

struct zx_sp_IDPList_s* zx_DEC_sp_IDPList(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sp_IDPList_s* x = ZX_ZALLOC(c, struct zx_sp_IDPList_s);
  x->gg.g.tok = zx_sp_IDPList_ELEM;
  x->gg.g.ns = zx_elems[zx_sp_IDPList_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sp_IDPEntry_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_IDPEntry(c);
            el->g.n = &x->IDPEntry->gg.g;
            x->IDPEntry = (struct zx_sp_IDPEntry_s*)el;
            break;
          case zx_sp_GetComplete_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->GetComplete->g;
            x->GetComplete = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sp_LogoutRequest) */

#define EL_NAME   sp_LogoutRequest
#define EL_STRUCT zx_sp_LogoutRequest_s
#define EL_NS     sp
#define EL_TAG    LogoutRequest

struct zx_sp_LogoutRequest_s* zx_DEC_sp_LogoutRequest(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sp_LogoutRequest_s* x = ZX_ZALLOC(c, struct zx_sp_LogoutRequest_s);
  x->gg.g.tok = zx_sp_LogoutRequest_ELEM;
  x->gg.g.ns = zx_elems[zx_sp_LogoutRequest_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Version_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Version->g;
      x->Version = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_IssueInstant_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->IssueInstant->g;
      x->IssueInstant = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Destination_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Destination->g;
      x->Destination = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Consent_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Consent->g;
      x->Consent = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Reason_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Reason->g;
      x->Reason = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_NotOnOrAfter_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_Issuer_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Issuer(c);
            el->g.n = &x->Issuer->gg.g;
            x->Issuer = (struct zx_sa_Issuer_s*)el;
            break;
          case zx_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zx_ds_Signature_s*)el;
            break;
          case zx_sp_Extensions_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zx_sp_Extensions_s*)el;
            break;
          case zx_sa_BaseID_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_BaseID(c);
            el->g.n = &x->BaseID->gg.g;
            x->BaseID = (struct zx_sa_BaseID_s*)el;
            break;
          case zx_sa_NameID_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_NameID(c);
            el->g.n = &x->NameID->gg.g;
            x->NameID = (struct zx_sa_NameID_s*)el;
            break;
          case zx_sa_EncryptedID_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_EncryptedID(c);
            el->g.n = &x->EncryptedID->gg.g;
            x->EncryptedID = (struct zx_sa_EncryptedID_s*)el;
            break;
          case zx_sp_SessionIndex_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->SessionIndex->g;
            x->SessionIndex = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sp_LogoutResponse) */

#define EL_NAME   sp_LogoutResponse
#define EL_STRUCT zx_sp_LogoutResponse_s
#define EL_NS     sp
#define EL_TAG    LogoutResponse

struct zx_sp_LogoutResponse_s* zx_DEC_sp_LogoutResponse(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sp_LogoutResponse_s* x = ZX_ZALLOC(c, struct zx_sp_LogoutResponse_s);
  x->gg.g.tok = zx_sp_LogoutResponse_ELEM;
  x->gg.g.ns = zx_elems[zx_sp_LogoutResponse_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_InResponseTo_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->InResponseTo->g;
      x->InResponseTo = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Version_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Version->g;
      x->Version = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_IssueInstant_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->IssueInstant->g;
      x->IssueInstant = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Destination_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Destination->g;
      x->Destination = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Consent_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Consent->g;
      x->Consent = ss;
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_Issuer_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Issuer(c);
            el->g.n = &x->Issuer->gg.g;
            x->Issuer = (struct zx_sa_Issuer_s*)el;
            break;
          case zx_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zx_ds_Signature_s*)el;
            break;
          case zx_sp_Extensions_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zx_sp_Extensions_s*)el;
            break;
          case zx_sp_Status_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_Status(c);
            el->g.n = &x->Status->gg.g;
            x->Status = (struct zx_sp_Status_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sp_ManageNameIDRequest) */

#define EL_NAME   sp_ManageNameIDRequest
#define EL_STRUCT zx_sp_ManageNameIDRequest_s
#define EL_NS     sp
#define EL_TAG    ManageNameIDRequest

struct zx_sp_ManageNameIDRequest_s* zx_DEC_sp_ManageNameIDRequest(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sp_ManageNameIDRequest_s* x = ZX_ZALLOC(c, struct zx_sp_ManageNameIDRequest_s);
  x->gg.g.tok = zx_sp_ManageNameIDRequest_ELEM;
  x->gg.g.ns = zx_elems[zx_sp_ManageNameIDRequest_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Version_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Version->g;
      x->Version = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_IssueInstant_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->IssueInstant->g;
      x->IssueInstant = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Destination_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Destination->g;
      x->Destination = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Consent_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Consent->g;
      x->Consent = ss;
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_Issuer_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Issuer(c);
            el->g.n = &x->Issuer->gg.g;
            x->Issuer = (struct zx_sa_Issuer_s*)el;
            break;
          case zx_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zx_ds_Signature_s*)el;
            break;
          case zx_sp_Extensions_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zx_sp_Extensions_s*)el;
            break;
          case zx_sa_NameID_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_NameID(c);
            el->g.n = &x->NameID->gg.g;
            x->NameID = (struct zx_sa_NameID_s*)el;
            break;
          case zx_sa_EncryptedID_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_EncryptedID(c);
            el->g.n = &x->EncryptedID->gg.g;
            x->EncryptedID = (struct zx_sa_EncryptedID_s*)el;
            break;
          case zx_sp_NewID_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->NewID->g;
            x->NewID = el;
            break;
          case zx_sp_NewEncryptedID_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_NewEncryptedID(c);
            el->g.n = &x->NewEncryptedID->gg.g;
            x->NewEncryptedID = (struct zx_sp_NewEncryptedID_s*)el;
            break;
          case zx_sp_Terminate_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->Terminate->g;
            x->Terminate = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sp_ManageNameIDResponse) */

#define EL_NAME   sp_ManageNameIDResponse
#define EL_STRUCT zx_sp_ManageNameIDResponse_s
#define EL_NS     sp
#define EL_TAG    ManageNameIDResponse

struct zx_sp_ManageNameIDResponse_s* zx_DEC_sp_ManageNameIDResponse(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sp_ManageNameIDResponse_s* x = ZX_ZALLOC(c, struct zx_sp_ManageNameIDResponse_s);
  x->gg.g.tok = zx_sp_ManageNameIDResponse_ELEM;
  x->gg.g.ns = zx_elems[zx_sp_ManageNameIDResponse_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_InResponseTo_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->InResponseTo->g;
      x->InResponseTo = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Version_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Version->g;
      x->Version = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_IssueInstant_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->IssueInstant->g;
      x->IssueInstant = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Destination_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Destination->g;
      x->Destination = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Consent_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Consent->g;
      x->Consent = ss;
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_Issuer_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Issuer(c);
            el->g.n = &x->Issuer->gg.g;
            x->Issuer = (struct zx_sa_Issuer_s*)el;
            break;
          case zx_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zx_ds_Signature_s*)el;
            break;
          case zx_sp_Extensions_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zx_sp_Extensions_s*)el;
            break;
          case zx_sp_Status_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_Status(c);
            el->g.n = &x->Status->gg.g;
            x->Status = (struct zx_sp_Status_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sp_NameIDMappingRequest) */

#define EL_NAME   sp_NameIDMappingRequest
#define EL_STRUCT zx_sp_NameIDMappingRequest_s
#define EL_NS     sp
#define EL_TAG    NameIDMappingRequest

struct zx_sp_NameIDMappingRequest_s* zx_DEC_sp_NameIDMappingRequest(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sp_NameIDMappingRequest_s* x = ZX_ZALLOC(c, struct zx_sp_NameIDMappingRequest_s);
  x->gg.g.tok = zx_sp_NameIDMappingRequest_ELEM;
  x->gg.g.ns = zx_elems[zx_sp_NameIDMappingRequest_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Version_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Version->g;
      x->Version = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_IssueInstant_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->IssueInstant->g;
      x->IssueInstant = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Destination_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Destination->g;
      x->Destination = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Consent_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Consent->g;
      x->Consent = ss;
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_Issuer_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Issuer(c);
            el->g.n = &x->Issuer->gg.g;
            x->Issuer = (struct zx_sa_Issuer_s*)el;
            break;
          case zx_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zx_ds_Signature_s*)el;
            break;
          case zx_sp_Extensions_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zx_sp_Extensions_s*)el;
            break;
          case zx_sa_BaseID_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_BaseID(c);
            el->g.n = &x->BaseID->gg.g;
            x->BaseID = (struct zx_sa_BaseID_s*)el;
            break;
          case zx_sa_NameID_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_NameID(c);
            el->g.n = &x->NameID->gg.g;
            x->NameID = (struct zx_sa_NameID_s*)el;
            break;
          case zx_sa_EncryptedID_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_EncryptedID(c);
            el->g.n = &x->EncryptedID->gg.g;
            x->EncryptedID = (struct zx_sa_EncryptedID_s*)el;
            break;
          case zx_sp_NameIDPolicy_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_NameIDPolicy(c);
            el->g.n = &x->NameIDPolicy->gg.g;
            x->NameIDPolicy = (struct zx_sp_NameIDPolicy_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sp_NameIDMappingResponse) */

#define EL_NAME   sp_NameIDMappingResponse
#define EL_STRUCT zx_sp_NameIDMappingResponse_s
#define EL_NS     sp
#define EL_TAG    NameIDMappingResponse

struct zx_sp_NameIDMappingResponse_s* zx_DEC_sp_NameIDMappingResponse(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sp_NameIDMappingResponse_s* x = ZX_ZALLOC(c, struct zx_sp_NameIDMappingResponse_s);
  x->gg.g.tok = zx_sp_NameIDMappingResponse_ELEM;
  x->gg.g.ns = zx_elems[zx_sp_NameIDMappingResponse_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_InResponseTo_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->InResponseTo->g;
      x->InResponseTo = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Version_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Version->g;
      x->Version = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_IssueInstant_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->IssueInstant->g;
      x->IssueInstant = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Destination_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Destination->g;
      x->Destination = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Consent_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Consent->g;
      x->Consent = ss;
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_Issuer_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Issuer(c);
            el->g.n = &x->Issuer->gg.g;
            x->Issuer = (struct zx_sa_Issuer_s*)el;
            break;
          case zx_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zx_ds_Signature_s*)el;
            break;
          case zx_sp_Extensions_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zx_sp_Extensions_s*)el;
            break;
          case zx_sp_Status_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_Status(c);
            el->g.n = &x->Status->gg.g;
            x->Status = (struct zx_sp_Status_s*)el;
            break;
          case zx_sa_NameID_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_NameID(c);
            el->g.n = &x->NameID->gg.g;
            x->NameID = (struct zx_sa_NameID_s*)el;
            break;
          case zx_sa_EncryptedID_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_EncryptedID(c);
            el->g.n = &x->EncryptedID->gg.g;
            x->EncryptedID = (struct zx_sa_EncryptedID_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sp_NameIDPolicy) */

#define EL_NAME   sp_NameIDPolicy
#define EL_STRUCT zx_sp_NameIDPolicy_s
#define EL_NS     sp
#define EL_TAG    NameIDPolicy

struct zx_sp_NameIDPolicy_s* zx_DEC_sp_NameIDPolicy(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sp_NameIDPolicy_s* x = ZX_ZALLOC(c, struct zx_sp_NameIDPolicy_s);
  x->gg.g.tok = zx_sp_NameIDPolicy_ELEM;
  x->gg.g.ns = zx_elems[zx_sp_NameIDPolicy_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Format_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Format->g;
      x->Format = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_SPNameQualifier_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->SPNameQualifier->g;
      x->SPNameQualifier = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_AllowCreate_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->AllowCreate->g;
      x->AllowCreate = ss;
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sp_NewEncryptedID) */

#define EL_NAME   sp_NewEncryptedID
#define EL_STRUCT zx_sp_NewEncryptedID_s
#define EL_NS     sp
#define EL_TAG    NewEncryptedID

struct zx_sp_NewEncryptedID_s* zx_DEC_sp_NewEncryptedID(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sp_NewEncryptedID_s* x = ZX_ZALLOC(c, struct zx_sp_NewEncryptedID_s);
  x->gg.g.tok = zx_sp_NewEncryptedID_ELEM;
  x->gg.g.ns = zx_elems[zx_sp_NewEncryptedID_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_xenc_EncryptedData_ELEM:
            el = (struct zx_elem_s*)zx_DEC_xenc_EncryptedData(c);
            el->g.n = &x->EncryptedData->gg.g;
            x->EncryptedData = (struct zx_xenc_EncryptedData_s*)el;
            break;
          case zx_xenc_EncryptedKey_ELEM:
            el = (struct zx_elem_s*)zx_DEC_xenc_EncryptedKey(c);
            el->g.n = &x->EncryptedKey->gg.g;
            x->EncryptedKey = (struct zx_xenc_EncryptedKey_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sp_RequestedAuthnContext) */

#define EL_NAME   sp_RequestedAuthnContext
#define EL_STRUCT zx_sp_RequestedAuthnContext_s
#define EL_NS     sp
#define EL_TAG    RequestedAuthnContext

struct zx_sp_RequestedAuthnContext_s* zx_DEC_sp_RequestedAuthnContext(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sp_RequestedAuthnContext_s* x = ZX_ZALLOC(c, struct zx_sp_RequestedAuthnContext_s);
  x->gg.g.tok = zx_sp_RequestedAuthnContext_ELEM;
  x->gg.g.ns = zx_elems[zx_sp_RequestedAuthnContext_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Comparison_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Comparison->g;
      x->Comparison = ss;
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_AuthnContextClassRef_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->AuthnContextClassRef->g;
            x->AuthnContextClassRef = el;
            break;
          case zx_sa_AuthnContextDeclRef_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->AuthnContextDeclRef->g;
            x->AuthnContextDeclRef = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sp_Response) */

#define EL_NAME   sp_Response
#define EL_STRUCT zx_sp_Response_s
#define EL_NS     sp
#define EL_TAG    Response

struct zx_sp_Response_s* zx_DEC_sp_Response(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sp_Response_s* x = ZX_ZALLOC(c, struct zx_sp_Response_s);
  x->gg.g.tok = zx_sp_Response_ELEM;
  x->gg.g.ns = zx_elems[zx_sp_Response_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_InResponseTo_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->InResponseTo->g;
      x->InResponseTo = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Version_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Version->g;
      x->Version = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_IssueInstant_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->IssueInstant->g;
      x->IssueInstant = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Destination_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Destination->g;
      x->Destination = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Consent_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Consent->g;
      x->Consent = ss;
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_Issuer_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Issuer(c);
            el->g.n = &x->Issuer->gg.g;
            x->Issuer = (struct zx_sa_Issuer_s*)el;
            break;
          case zx_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zx_ds_Signature_s*)el;
            break;
          case zx_sp_Extensions_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zx_sp_Extensions_s*)el;
            break;
          case zx_sp_Status_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_Status(c);
            el->g.n = &x->Status->gg.g;
            x->Status = (struct zx_sp_Status_s*)el;
            break;
          case zx_sa_Assertion_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Assertion(c);
            el->g.n = &x->Assertion->gg.g;
            x->Assertion = (struct zx_sa_Assertion_s*)el;
            break;
          case zx_sa_EncryptedAssertion_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_EncryptedAssertion(c);
            el->g.n = &x->EncryptedAssertion->gg.g;
            x->EncryptedAssertion = (struct zx_sa_EncryptedAssertion_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sp_Scoping) */

#define EL_NAME   sp_Scoping
#define EL_STRUCT zx_sp_Scoping_s
#define EL_NS     sp
#define EL_TAG    Scoping

struct zx_sp_Scoping_s* zx_DEC_sp_Scoping(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sp_Scoping_s* x = ZX_ZALLOC(c, struct zx_sp_Scoping_s);
  x->gg.g.tok = zx_sp_Scoping_ELEM;
  x->gg.g.ns = zx_elems[zx_sp_Scoping_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_ProxyCount_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ProxyCount->g;
      x->ProxyCount = ss;
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sp_IDPList_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_IDPList(c);
            el->g.n = &x->IDPList->gg.g;
            x->IDPList = (struct zx_sp_IDPList_s*)el;
            break;
          case zx_sp_RequesterID_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->RequesterID->g;
            x->RequesterID = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sp_Status) */

#define EL_NAME   sp_Status
#define EL_STRUCT zx_sp_Status_s
#define EL_NS     sp
#define EL_TAG    Status

struct zx_sp_Status_s* zx_DEC_sp_Status(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sp_Status_s* x = ZX_ZALLOC(c, struct zx_sp_Status_s);
  x->gg.g.tok = zx_sp_Status_ELEM;
  x->gg.g.ns = zx_elems[zx_sp_Status_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sp_StatusCode_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_StatusCode(c);
            el->g.n = &x->StatusCode->gg.g;
            x->StatusCode = (struct zx_sp_StatusCode_s*)el;
            break;
          case zx_sp_StatusMessage_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->StatusMessage->g;
            x->StatusMessage = el;
            break;
          case zx_sp_StatusDetail_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_StatusDetail(c);
            el->g.n = &x->StatusDetail->gg.g;
            x->StatusDetail = (struct zx_sp_StatusDetail_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sp_StatusCode) */

#define EL_NAME   sp_StatusCode
#define EL_STRUCT zx_sp_StatusCode_s
#define EL_NS     sp
#define EL_TAG    StatusCode

struct zx_sp_StatusCode_s* zx_DEC_sp_StatusCode(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sp_StatusCode_s* x = ZX_ZALLOC(c, struct zx_sp_StatusCode_s);
  x->gg.g.tok = zx_sp_StatusCode_ELEM;
  x->gg.g.ns = zx_elems[zx_sp_StatusCode_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Value_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Value->g;
      x->Value = ss;
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sp_StatusCode_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_StatusCode(c);
            el->g.n = &x->StatusCode->gg.g;
            x->StatusCode = (struct zx_sp_StatusCode_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sp_StatusDetail) */

#define EL_NAME   sp_StatusDetail
#define EL_STRUCT zx_sp_StatusDetail_s
#define EL_NS     sp
#define EL_TAG    StatusDetail

struct zx_sp_StatusDetail_s* zx_DEC_sp_StatusDetail(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sp_StatusDetail_s* x = ZX_ZALLOC(c, struct zx_sp_StatusDetail_s);
  x->gg.g.tok = zx_sp_StatusDetail_ELEM;
  x->gg.g.ns = zx_elems[zx_sp_StatusDetail_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_sp_SubjectQuery) */

#define EL_NAME   sp_SubjectQuery
#define EL_STRUCT zx_sp_SubjectQuery_s
#define EL_NS     sp
#define EL_TAG    SubjectQuery

struct zx_sp_SubjectQuery_s* zx_DEC_sp_SubjectQuery(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_sp_SubjectQuery_s* x = ZX_ZALLOC(c, struct zx_sp_SubjectQuery_s);
  x->gg.g.tok = zx_sp_SubjectQuery_ELEM;
  x->gg.g.ns = zx_elems[zx_sp_SubjectQuery_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_ID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ID->g;
      x->ID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Version_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Version->g;
      x->Version = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_IssueInstant_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->IssueInstant->g;
      x->IssueInstant = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Destination_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Destination->g;
      x->Destination = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Consent_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Consent->g;
      x->Consent = ss;
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_Issuer_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Issuer(c);
            el->g.n = &x->Issuer->gg.g;
            x->Issuer = (struct zx_sa_Issuer_s*)el;
            break;
          case zx_ds_Signature_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_Signature(c);
            el->g.n = &x->Signature->gg.g;
            x->Signature = (struct zx_ds_Signature_s*)el;
            break;
          case zx_sp_Extensions_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_Extensions(c);
            el->g.n = &x->Extensions->gg.g;
            x->Extensions = (struct zx_sp_Extensions_s*)el;
            break;
          case zx_sa_Subject_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Subject(c);
            el->g.n = &x->Subject->gg.g;
            x->Subject = (struct zx_sa_Subject_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_xenc_AgreementMethod) */

#define EL_NAME   xenc_AgreementMethod
#define EL_STRUCT zx_xenc_AgreementMethod_s
#define EL_NS     xenc
#define EL_TAG    AgreementMethod

struct zx_xenc_AgreementMethod_s* zx_DEC_xenc_AgreementMethod(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_xenc_AgreementMethod_s* x = ZX_ZALLOC(c, struct zx_xenc_AgreementMethod_s);
  x->gg.g.tok = zx_xenc_AgreementMethod_ELEM;
  x->gg.g.ns = zx_elems[zx_xenc_AgreementMethod_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Algorithm_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_xenc_KA_Nonce_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->KA_Nonce->g;
            x->KA_Nonce = el;
            break;
          case zx_xenc_OriginatorKeyInfo_ELEM:
            el = (struct zx_elem_s*)zx_DEC_xenc_OriginatorKeyInfo(c);
            el->g.n = &x->OriginatorKeyInfo->gg.g;
            x->OriginatorKeyInfo = (struct zx_xenc_OriginatorKeyInfo_s*)el;
            break;
          case zx_xenc_RecipientKeyInfo_ELEM:
            el = (struct zx_elem_s*)zx_DEC_xenc_RecipientKeyInfo(c);
            el->g.n = &x->RecipientKeyInfo->gg.g;
            x->RecipientKeyInfo = (struct zx_xenc_RecipientKeyInfo_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_xenc_CipherData) */

#define EL_NAME   xenc_CipherData
#define EL_STRUCT zx_xenc_CipherData_s
#define EL_NS     xenc
#define EL_TAG    CipherData

struct zx_xenc_CipherData_s* zx_DEC_xenc_CipherData(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_xenc_CipherData_s* x = ZX_ZALLOC(c, struct zx_xenc_CipherData_s);
  x->gg.g.tok = zx_xenc_CipherData_ELEM;
  x->gg.g.ns = zx_elems[zx_xenc_CipherData_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_xenc_CipherValue_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->CipherValue->g;
            x->CipherValue = el;
            break;
          case zx_xenc_CipherReference_ELEM:
            el = (struct zx_elem_s*)zx_DEC_xenc_CipherReference(c);
            el->g.n = &x->CipherReference->gg.g;
            x->CipherReference = (struct zx_xenc_CipherReference_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_xenc_CipherReference) */

#define EL_NAME   xenc_CipherReference
#define EL_STRUCT zx_xenc_CipherReference_s
#define EL_NS     xenc
#define EL_TAG    CipherReference

struct zx_xenc_CipherReference_s* zx_DEC_xenc_CipherReference(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_xenc_CipherReference_s* x = ZX_ZALLOC(c, struct zx_xenc_CipherReference_s);
  x->gg.g.tok = zx_xenc_CipherReference_ELEM;
  x->gg.g.ns = zx_elems[zx_xenc_CipherReference_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_URI_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_xenc_Transforms_ELEM:
            el = (struct zx_elem_s*)zx_DEC_xenc_Transforms(c);
            el->g.n = &x->Transforms->gg.g;
            x->Transforms = (struct zx_xenc_Transforms_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_xenc_DataReference) */

#define EL_NAME   xenc_DataReference
#define EL_STRUCT zx_xenc_DataReference_s
#define EL_NS     xenc
#define EL_TAG    DataReference

struct zx_xenc_DataReference_s* zx_DEC_xenc_DataReference(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_xenc_DataReference_s* x = ZX_ZALLOC(c, struct zx_xenc_DataReference_s);
  x->gg.g.tok = zx_xenc_DataReference_ELEM;
  x->gg.g.ns = zx_elems[zx_xenc_DataReference_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_URI_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_xenc_EncryptedData) */

#define EL_NAME   xenc_EncryptedData
#define EL_STRUCT zx_xenc_EncryptedData_s
#define EL_NS     xenc
#define EL_TAG    EncryptedData

struct zx_xenc_EncryptedData_s* zx_DEC_xenc_EncryptedData(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_xenc_EncryptedData_s* x = ZX_ZALLOC(c, struct zx_xenc_EncryptedData_s);
  x->gg.g.tok = zx_xenc_EncryptedData_ELEM;
  x->gg.g.ns = zx_elems[zx_xenc_EncryptedData_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Id->g;
      x->Id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Type_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Type->g;
      x->Type = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_MimeType_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->MimeType->g;
      x->MimeType = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Encoding_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_xenc_EncryptionMethod_ELEM:
            el = (struct zx_elem_s*)zx_DEC_xenc_EncryptionMethod(c);
            el->g.n = &x->EncryptionMethod->gg.g;
            x->EncryptionMethod = (struct zx_xenc_EncryptionMethod_s*)el;
            break;
          case zx_ds_KeyInfo_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_KeyInfo(c);
            el->g.n = &x->KeyInfo->gg.g;
            x->KeyInfo = (struct zx_ds_KeyInfo_s*)el;
            break;
          case zx_xenc_CipherData_ELEM:
            el = (struct zx_elem_s*)zx_DEC_xenc_CipherData(c);
            el->g.n = &x->CipherData->gg.g;
            x->CipherData = (struct zx_xenc_CipherData_s*)el;
            break;
          case zx_xenc_EncryptionProperties_ELEM:
            el = (struct zx_elem_s*)zx_DEC_xenc_EncryptionProperties(c);
            el->g.n = &x->EncryptionProperties->gg.g;
            x->EncryptionProperties = (struct zx_xenc_EncryptionProperties_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_xenc_EncryptedKey) */

#define EL_NAME   xenc_EncryptedKey
#define EL_STRUCT zx_xenc_EncryptedKey_s
#define EL_NS     xenc
#define EL_TAG    EncryptedKey

struct zx_xenc_EncryptedKey_s* zx_DEC_xenc_EncryptedKey(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_xenc_EncryptedKey_s* x = ZX_ZALLOC(c, struct zx_xenc_EncryptedKey_s);
  x->gg.g.tok = zx_xenc_EncryptedKey_ELEM;
  x->gg.g.ns = zx_elems[zx_xenc_EncryptedKey_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Id->g;
      x->Id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Type_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Type->g;
      x->Type = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_MimeType_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->MimeType->g;
      x->MimeType = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Encoding_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Encoding->g;
      x->Encoding = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Recipient_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_xenc_EncryptionMethod_ELEM:
            el = (struct zx_elem_s*)zx_DEC_xenc_EncryptionMethod(c);
            el->g.n = &x->EncryptionMethod->gg.g;
            x->EncryptionMethod = (struct zx_xenc_EncryptionMethod_s*)el;
            break;
          case zx_ds_KeyInfo_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_KeyInfo(c);
            el->g.n = &x->KeyInfo->gg.g;
            x->KeyInfo = (struct zx_ds_KeyInfo_s*)el;
            break;
          case zx_xenc_CipherData_ELEM:
            el = (struct zx_elem_s*)zx_DEC_xenc_CipherData(c);
            el->g.n = &x->CipherData->gg.g;
            x->CipherData = (struct zx_xenc_CipherData_s*)el;
            break;
          case zx_xenc_EncryptionProperties_ELEM:
            el = (struct zx_elem_s*)zx_DEC_xenc_EncryptionProperties(c);
            el->g.n = &x->EncryptionProperties->gg.g;
            x->EncryptionProperties = (struct zx_xenc_EncryptionProperties_s*)el;
            break;
          case zx_xenc_ReferenceList_ELEM:
            el = (struct zx_elem_s*)zx_DEC_xenc_ReferenceList(c);
            el->g.n = &x->ReferenceList->gg.g;
            x->ReferenceList = (struct zx_xenc_ReferenceList_s*)el;
            break;
          case zx_xenc_CarriedKeyName_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->CarriedKeyName->g;
            x->CarriedKeyName = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_xenc_EncryptionMethod) */

#define EL_NAME   xenc_EncryptionMethod
#define EL_STRUCT zx_xenc_EncryptionMethod_s
#define EL_NS     xenc
#define EL_TAG    EncryptionMethod

struct zx_xenc_EncryptionMethod_s* zx_DEC_xenc_EncryptionMethod(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_xenc_EncryptionMethod_s* x = ZX_ZALLOC(c, struct zx_xenc_EncryptionMethod_s);
  x->gg.g.tok = zx_xenc_EncryptionMethod_ELEM;
  x->gg.g.ns = zx_elems[zx_xenc_EncryptionMethod_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Algorithm_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_xenc_KeySize_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->KeySize->g;
            x->KeySize = el;
            break;
          case zx_xenc_OAEPparams_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->OAEPparams->g;
            x->OAEPparams = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_xenc_EncryptionProperties) */

#define EL_NAME   xenc_EncryptionProperties
#define EL_STRUCT zx_xenc_EncryptionProperties_s
#define EL_NS     xenc
#define EL_TAG    EncryptionProperties

struct zx_xenc_EncryptionProperties_s* zx_DEC_xenc_EncryptionProperties(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_xenc_EncryptionProperties_s* x = ZX_ZALLOC(c, struct zx_xenc_EncryptionProperties_s);
  x->gg.g.tok = zx_xenc_EncryptionProperties_ELEM;
  x->gg.g.ns = zx_elems[zx_xenc_EncryptionProperties_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Id_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_xenc_EncryptionProperty_ELEM:
            el = (struct zx_elem_s*)zx_DEC_xenc_EncryptionProperty(c);
            el->g.n = &x->EncryptionProperty->gg.g;
            x->EncryptionProperty = (struct zx_xenc_EncryptionProperty_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_xenc_EncryptionProperty) */

#define EL_NAME   xenc_EncryptionProperty
#define EL_STRUCT zx_xenc_EncryptionProperty_s
#define EL_NS     xenc
#define EL_TAG    EncryptionProperty

struct zx_xenc_EncryptionProperty_s* zx_DEC_xenc_EncryptionProperty(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_xenc_EncryptionProperty_s* x = ZX_ZALLOC(c, struct zx_xenc_EncryptionProperty_s);
  x->gg.g.tok = zx_xenc_EncryptionProperty_ELEM;
  x->gg.g.ns = zx_elems[zx_xenc_EncryptionProperty_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Target_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Target->g;
      x->Target = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zx_Id_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_xenc_KeyReference) */

#define EL_NAME   xenc_KeyReference
#define EL_STRUCT zx_xenc_KeyReference_s
#define EL_NS     xenc
#define EL_TAG    KeyReference

struct zx_xenc_KeyReference_s* zx_DEC_xenc_KeyReference(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_xenc_KeyReference_s* x = ZX_ZALLOC(c, struct zx_xenc_KeyReference_s);
  x->gg.g.tok = zx_xenc_KeyReference_ELEM;
  x->gg.g.ns = zx_elems[zx_xenc_KeyReference_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_URI_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_xenc_OriginatorKeyInfo) */

#define EL_NAME   xenc_OriginatorKeyInfo
#define EL_STRUCT zx_xenc_OriginatorKeyInfo_s
#define EL_NS     xenc
#define EL_TAG    OriginatorKeyInfo

struct zx_xenc_OriginatorKeyInfo_s* zx_DEC_xenc_OriginatorKeyInfo(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_xenc_OriginatorKeyInfo_s* x = ZX_ZALLOC(c, struct zx_xenc_OriginatorKeyInfo_s);
  x->gg.g.tok = zx_xenc_OriginatorKeyInfo_ELEM;
  x->gg.g.ns = zx_elems[zx_xenc_OriginatorKeyInfo_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Id_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_ds_KeyName_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->KeyName->g;
            x->KeyName = el;
            break;
          case zx_ds_KeyValue_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_KeyValue(c);
            el->g.n = &x->KeyValue->gg.g;
            x->KeyValue = (struct zx_ds_KeyValue_s*)el;
            break;
          case zx_ds_RetrievalMethod_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_RetrievalMethod(c);
            el->g.n = &x->RetrievalMethod->gg.g;
            x->RetrievalMethod = (struct zx_ds_RetrievalMethod_s*)el;
            break;
          case zx_ds_X509Data_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_X509Data(c);
            el->g.n = &x->X509Data->gg.g;
            x->X509Data = (struct zx_ds_X509Data_s*)el;
            break;
          case zx_ds_PGPData_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_PGPData(c);
            el->g.n = &x->PGPData->gg.g;
            x->PGPData = (struct zx_ds_PGPData_s*)el;
            break;
          case zx_ds_SPKIData_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_SPKIData(c);
            el->g.n = &x->SPKIData->gg.g;
            x->SPKIData = (struct zx_ds_SPKIData_s*)el;
            break;
          case zx_ds_MgmtData_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->MgmtData->g;
            x->MgmtData = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_xenc_RecipientKeyInfo) */

#define EL_NAME   xenc_RecipientKeyInfo
#define EL_STRUCT zx_xenc_RecipientKeyInfo_s
#define EL_NS     xenc
#define EL_TAG    RecipientKeyInfo

struct zx_xenc_RecipientKeyInfo_s* zx_DEC_xenc_RecipientKeyInfo(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_xenc_RecipientKeyInfo_s* x = ZX_ZALLOC(c, struct zx_xenc_RecipientKeyInfo_s);
  x->gg.g.tok = zx_xenc_RecipientKeyInfo_ELEM;
  x->gg.g.ns = zx_elems[zx_xenc_RecipientKeyInfo_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
    switch (tok) {
    case zx_Id_ATTR:
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_ds_KeyName_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->KeyName->g;
            x->KeyName = el;
            break;
          case zx_ds_KeyValue_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_KeyValue(c);
            el->g.n = &x->KeyValue->gg.g;
            x->KeyValue = (struct zx_ds_KeyValue_s*)el;
            break;
          case zx_ds_RetrievalMethod_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_RetrievalMethod(c);
            el->g.n = &x->RetrievalMethod->gg.g;
            x->RetrievalMethod = (struct zx_ds_RetrievalMethod_s*)el;
            break;
          case zx_ds_X509Data_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_X509Data(c);
            el->g.n = &x->X509Data->gg.g;
            x->X509Data = (struct zx_ds_X509Data_s*)el;
            break;
          case zx_ds_PGPData_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_PGPData(c);
            el->g.n = &x->PGPData->gg.g;
            x->PGPData = (struct zx_ds_PGPData_s*)el;
            break;
          case zx_ds_SPKIData_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_SPKIData(c);
            el->g.n = &x->SPKIData->gg.g;
            x->SPKIData = (struct zx_ds_SPKIData_s*)el;
            break;
          case zx_ds_MgmtData_ELEM:
            el = zx_DEC_simple_elem(c, tok);
            el->g.n = &x->MgmtData->g;
            x->MgmtData = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_xenc_ReferenceList) */

#define EL_NAME   xenc_ReferenceList
#define EL_STRUCT zx_xenc_ReferenceList_s
#define EL_NS     xenc
#define EL_TAG    ReferenceList

struct zx_xenc_ReferenceList_s* zx_DEC_xenc_ReferenceList(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_xenc_ReferenceList_s* x = ZX_ZALLOC(c, struct zx_xenc_ReferenceList_s);
  x->gg.g.tok = zx_xenc_ReferenceList_ELEM;
  x->gg.g.ns = zx_elems[zx_xenc_ReferenceList_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_xenc_DataReference_ELEM:
            el = (struct zx_elem_s*)zx_DEC_xenc_DataReference(c);
            el->g.n = &x->DataReference->gg.g;
            x->DataReference = (struct zx_xenc_DataReference_s*)el;
            break;
          case zx_xenc_KeyReference_ELEM:
            el = (struct zx_elem_s*)zx_DEC_xenc_KeyReference(c);
            el->g.n = &x->KeyReference->gg.g;
            x->KeyReference = (struct zx_xenc_KeyReference_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_xenc_Transforms) */

#define EL_NAME   xenc_Transforms
#define EL_STRUCT zx_xenc_Transforms_s
#define EL_NS     xenc
#define EL_TAG    Transforms

struct zx_xenc_Transforms_s* zx_DEC_xenc_Transforms(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_xenc_Transforms_s* x = ZX_ZALLOC(c, struct zx_xenc_Transforms_s);
  x->gg.g.tok = zx_xenc_Transforms_ELEM;
  x->gg.g.ns = zx_elems[zx_xenc_Transforms_ELEM].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_ds_Transform_ELEM:
            el = (struct zx_elem_s*)zx_DEC_ds_Transform(c);
            el->g.n = &x->Transform->gg.g;
            x->Transform = (struct zx_ds_Transform_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_root) */

#define EL_NAME   root
#define EL_STRUCT zx_root_s
#define EL_NS     
#define EL_TAG    root

struct zx_root_s* zx_DEC_root(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zx_root_s* x = ZX_ZALLOC(c, struct zx_root_s);
  x->gg.g.tok = zx_root_ELEM;
  x->gg.g.ns = zx_elems[zx_root_ELEM].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zx_sa_Assertion_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sa_Assertion(c);
            el->g.n = &x->Assertion->gg.g;
            x->Assertion = (struct zx_sa_Assertion_s*)el;
            if (--x->gg.g.tok) break; else { x->gg.g.tok = tok; return x; };
          case zx_sp_AuthnRequest_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_AuthnRequest(c);
            el->g.n = &x->AuthnRequest->gg.g;
            x->AuthnRequest = (struct zx_sp_AuthnRequest_s*)el;
            if (--x->gg.g.tok) break; else { x->gg.g.tok = tok; return x; };
          case zx_sp_Response_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_Response(c);
            el->g.n = &x->Response->gg.g;
            x->Response = (struct zx_sp_Response_s*)el;
            if (--x->gg.g.tok) break; else { x->gg.g.tok = tok; return x; };
          case zx_sp_LogoutRequest_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_LogoutRequest(c);
            el->g.n = &x->LogoutRequest->gg.g;
            x->LogoutRequest = (struct zx_sp_LogoutRequest_s*)el;
            if (--x->gg.g.tok) break; else { x->gg.g.tok = tok; return x; };
          case zx_sp_LogoutResponse_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_LogoutResponse(c);
            el->g.n = &x->LogoutResponse->gg.g;
            x->LogoutResponse = (struct zx_sp_LogoutResponse_s*)el;
            if (--x->gg.g.tok) break; else { x->gg.g.tok = tok; return x; };
          case zx_sp_ManageNameIDRequest_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_ManageNameIDRequest(c);
            el->g.n = &x->ManageNameIDRequest->gg.g;
            x->ManageNameIDRequest = (struct zx_sp_ManageNameIDRequest_s*)el;
            if (--x->gg.g.tok) break; else { x->gg.g.tok = tok; return x; };
          case zx_sp_ManageNameIDResponse_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sp_ManageNameIDResponse(c);
            el->g.n = &x->ManageNameIDResponse->gg.g;
            x->ManageNameIDResponse = (struct zx_sp_ManageNameIDResponse_s*)el;
            if (--x->gg.g.tok) break; else { x->gg.g.tok = tok; return x; };
          case zx_se_Envelope_ELEM:
            el = (struct zx_elem_s*)zx_DEC_se_Envelope(c);
            el->g.n = &x->Envelope->gg.g;
            x->Envelope = (struct zx_se_Envelope_s*)el;
            if (--x->gg.g.tok) break; else { x->gg.g.tok = tok; return x; };

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_simple_elem) */

#define EL_NAME   simple_elem
#define EL_STRUCT zx_elem_s
#define EL_NS     
#define EL_TAG    simple_elem

struct zx_elem_s* zx_DEC_simple_elem(struct zx_ctx* c, int toke)
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
  x->g.ns = zx_elems[toke].ns;
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zx_DEC_wrong_elem) */

#define EL_NAME   wrong_elem
#define EL_STRUCT zx_any_elem_s
#define EL_NS     
#define EL_TAG    wrong_elem

struct zx_any_elem_s* zx_DEC_wrong_elem(struct zx_ctx* c, char* nam, int namlen)
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
    
    tok = zx_attr_lookup(c, name, data-2);
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
    ss->g.ns = zx_attrs[tok].ns;
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
	tok = zx_elem_lookup(c, name, c->p);
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
	  tok = zx_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zx_DEC_wrong_elem(c, name, c->p - name);
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

/* FUNC(zx_attr_lookup) */

/* Tokenize a string.
 * Lookup functions to convert a namespace qualified string to integer token.
 * One of each (attr and elem) is needed for every prefix used in code generation.
 * The ...2tok() functions come from code generation via gperf. */

int zx_attr_lookup(struct zx_ctx* c, char* name, char* lim)
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
  zt = zx_attr2tok(name, lim-name);
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
      return ztt - zx_attrs;
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
  return zt - zx_attrs;
}

/* FUNC(zx_elem_lookup) */

int zx_elem_lookup(struct zx_ctx* c, char* name, char* lim)
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
  zt = zx_elem2tok(name, lim-name);
  if (!zt)
    return ZX_TOK_NOT_FOUND;
  
  /* The token hash can have duplicate entries (see -D flag to gperf). We differentiate
   * between them by looking at the namespace prefix. If none of the tokens in the
   * table match the namespace, we pick the first one (which, given hashing, is
   * difficult to predict and should not be depended on), whether it's right or wrong. */
  
  for (ztt = zt; ; ++ztt) {
    if (zx_is_ns_prefix(ztt->ns, prefix ? (name-1)-prefix : 0, prefix))
      return ztt - zx_elems;
    /* *** Following check can overflow the token table if zt is already last. Usually
     * token table is followed by other constant tables so this should not be
     * a problem. Easiest fix would be to add to toke table a trailer element,
     * but that would mean altering gperf or sedding its output. */
    if (memcmp(ztt[1].name, name, lim-name))
      break;
  }
  D("No matching namespace found for elem(%.*s:%.*s)", prefix ? (name-1)-prefix : 0, prefix, lim-name, name);
  return zt - zx_elems;
}

/* EOF -- c/saml2-dec.c */
