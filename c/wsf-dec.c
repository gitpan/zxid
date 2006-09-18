/* c/wsf-dec.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/wsf-const.h"
#include "c/wsf-data.h"

#define TPF zxwsf_

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



/* FUNC(zxwsf_DEC_a_Action) */

#define EL_NAME   a_Action
#define EL_STRUCT zxwsf_a_Action_s
#define EL_NS     a
#define EL_TAG    Action

struct zxwsf_a_Action_s* zxwsf_DEC_a_Action(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_a_Action_s* x = ZX_ZALLOC(c, struct zxwsf_a_Action_s);
  x->gg.g.tok = zxwsf_a_Action_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_a_Action_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_a_Address) */

#define EL_NAME   a_Address
#define EL_STRUCT zxwsf_a_Address_s
#define EL_NS     a
#define EL_TAG    Address

struct zxwsf_a_Address_s* zxwsf_DEC_a_Address(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_a_Address_s* x = ZX_ZALLOC(c, struct zxwsf_a_Address_s);
  x->gg.g.tok = zxwsf_a_Address_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_a_Address_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_a_EndpointReference) */

#define EL_NAME   a_EndpointReference
#define EL_STRUCT zxwsf_a_EndpointReference_s
#define EL_NS     a
#define EL_TAG    EndpointReference

struct zxwsf_a_EndpointReference_s* zxwsf_DEC_a_EndpointReference(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_a_EndpointReference_s* x = ZX_ZALLOC(c, struct zxwsf_a_EndpointReference_s);
  x->gg.g.tok = zxwsf_a_EndpointReference_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_a_EndpointReference_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_a_Address_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_Address(c);
            el->g.n = &x->Address->gg.g;
            x->Address = (struct zxwsf_a_Address_s*)el;
            break;
          case zxwsf_a_ReferenceParameters_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_ReferenceParameters(c);
            el->g.n = &x->ReferenceParameters->gg.g;
            x->ReferenceParameters = (struct zxwsf_a_ReferenceParameters_s*)el;
            break;
          case zxwsf_a_Metadata_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_Metadata(c);
            el->g.n = &x->Metadata->gg.g;
            x->Metadata = (struct zxwsf_a_Metadata_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_a_FaultTo) */

#define EL_NAME   a_FaultTo
#define EL_STRUCT zxwsf_a_FaultTo_s
#define EL_NS     a
#define EL_TAG    FaultTo

struct zxwsf_a_FaultTo_s* zxwsf_DEC_a_FaultTo(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_a_FaultTo_s* x = ZX_ZALLOC(c, struct zxwsf_a_FaultTo_s);
  x->gg.g.tok = zxwsf_a_FaultTo_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_a_FaultTo_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_a_Address_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_Address(c);
            el->g.n = &x->Address->gg.g;
            x->Address = (struct zxwsf_a_Address_s*)el;
            break;
          case zxwsf_a_ReferenceParameters_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_ReferenceParameters(c);
            el->g.n = &x->ReferenceParameters->gg.g;
            x->ReferenceParameters = (struct zxwsf_a_ReferenceParameters_s*)el;
            break;
          case zxwsf_a_Metadata_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_Metadata(c);
            el->g.n = &x->Metadata->gg.g;
            x->Metadata = (struct zxwsf_a_Metadata_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_a_From) */

#define EL_NAME   a_From
#define EL_STRUCT zxwsf_a_From_s
#define EL_NS     a
#define EL_TAG    From

struct zxwsf_a_From_s* zxwsf_DEC_a_From(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_a_From_s* x = ZX_ZALLOC(c, struct zxwsf_a_From_s);
  x->gg.g.tok = zxwsf_a_From_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_a_From_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_a_Address_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_Address(c);
            el->g.n = &x->Address->gg.g;
            x->Address = (struct zxwsf_a_Address_s*)el;
            break;
          case zxwsf_a_ReferenceParameters_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_ReferenceParameters(c);
            el->g.n = &x->ReferenceParameters->gg.g;
            x->ReferenceParameters = (struct zxwsf_a_ReferenceParameters_s*)el;
            break;
          case zxwsf_a_Metadata_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_Metadata(c);
            el->g.n = &x->Metadata->gg.g;
            x->Metadata = (struct zxwsf_a_Metadata_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_a_MessageID) */

#define EL_NAME   a_MessageID
#define EL_STRUCT zxwsf_a_MessageID_s
#define EL_NS     a
#define EL_TAG    MessageID

struct zxwsf_a_MessageID_s* zxwsf_DEC_a_MessageID(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_a_MessageID_s* x = ZX_ZALLOC(c, struct zxwsf_a_MessageID_s);
  x->gg.g.tok = zxwsf_a_MessageID_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_a_MessageID_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_a_Metadata) */

#define EL_NAME   a_Metadata
#define EL_STRUCT zxwsf_a_Metadata_s
#define EL_NS     a
#define EL_TAG    Metadata

struct zxwsf_a_Metadata_s* zxwsf_DEC_a_Metadata(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_a_Metadata_s* x = ZX_ZALLOC(c, struct zxwsf_a_Metadata_s);
  x->gg.g.tok = zxwsf_a_Metadata_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_a_Metadata_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_a_ProblemAction) */

#define EL_NAME   a_ProblemAction
#define EL_STRUCT zxwsf_a_ProblemAction_s
#define EL_NS     a
#define EL_TAG    ProblemAction

struct zxwsf_a_ProblemAction_s* zxwsf_DEC_a_ProblemAction(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_a_ProblemAction_s* x = ZX_ZALLOC(c, struct zxwsf_a_ProblemAction_s);
  x->gg.g.tok = zxwsf_a_ProblemAction_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_a_ProblemAction_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_a_Action_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_Action(c);
            el->g.n = &x->Action->gg.g;
            x->Action = (struct zxwsf_a_Action_s*)el;
            break;
          case zxwsf_a_SoapAction_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->SoapAction->g;
            x->SoapAction = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_a_ProblemHeader) */

#define EL_NAME   a_ProblemHeader
#define EL_STRUCT zxwsf_a_ProblemHeader_s
#define EL_NS     a
#define EL_TAG    ProblemHeader

struct zxwsf_a_ProblemHeader_s* zxwsf_DEC_a_ProblemHeader(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_a_ProblemHeader_s* x = ZX_ZALLOC(c, struct zxwsf_a_ProblemHeader_s);
  x->gg.g.tok = zxwsf_a_ProblemHeader_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_a_ProblemHeader_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_a_ProblemHeaderQName) */

#define EL_NAME   a_ProblemHeaderQName
#define EL_STRUCT zxwsf_a_ProblemHeaderQName_s
#define EL_NS     a
#define EL_TAG    ProblemHeaderQName

struct zxwsf_a_ProblemHeaderQName_s* zxwsf_DEC_a_ProblemHeaderQName(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_a_ProblemHeaderQName_s* x = ZX_ZALLOC(c, struct zxwsf_a_ProblemHeaderQName_s);
  x->gg.g.tok = zxwsf_a_ProblemHeaderQName_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_a_ProblemHeaderQName_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_a_ProblemIRI) */

#define EL_NAME   a_ProblemIRI
#define EL_STRUCT zxwsf_a_ProblemIRI_s
#define EL_NS     a
#define EL_TAG    ProblemIRI

struct zxwsf_a_ProblemIRI_s* zxwsf_DEC_a_ProblemIRI(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_a_ProblemIRI_s* x = ZX_ZALLOC(c, struct zxwsf_a_ProblemIRI_s);
  x->gg.g.tok = zxwsf_a_ProblemIRI_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_a_ProblemIRI_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_a_ReferenceParameters) */

#define EL_NAME   a_ReferenceParameters
#define EL_STRUCT zxwsf_a_ReferenceParameters_s
#define EL_NS     a
#define EL_TAG    ReferenceParameters

struct zxwsf_a_ReferenceParameters_s* zxwsf_DEC_a_ReferenceParameters(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_a_ReferenceParameters_s* x = ZX_ZALLOC(c, struct zxwsf_a_ReferenceParameters_s);
  x->gg.g.tok = zxwsf_a_ReferenceParameters_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_a_ReferenceParameters_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_a_RelatesTo) */

#define EL_NAME   a_RelatesTo
#define EL_STRUCT zxwsf_a_RelatesTo_s
#define EL_NS     a
#define EL_TAG    RelatesTo

struct zxwsf_a_RelatesTo_s* zxwsf_DEC_a_RelatesTo(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_a_RelatesTo_s* x = ZX_ZALLOC(c, struct zxwsf_a_RelatesTo_s);
  x->gg.g.tok = zxwsf_a_RelatesTo_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_a_RelatesTo_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_RelationshipType_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->RelationshipType->g;
      x->RelationshipType = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_a_ReplyTo) */

#define EL_NAME   a_ReplyTo
#define EL_STRUCT zxwsf_a_ReplyTo_s
#define EL_NS     a
#define EL_TAG    ReplyTo

struct zxwsf_a_ReplyTo_s* zxwsf_DEC_a_ReplyTo(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_a_ReplyTo_s* x = ZX_ZALLOC(c, struct zxwsf_a_ReplyTo_s);
  x->gg.g.tok = zxwsf_a_ReplyTo_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_a_ReplyTo_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_a_Address_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_Address(c);
            el->g.n = &x->Address->gg.g;
            x->Address = (struct zxwsf_a_Address_s*)el;
            break;
          case zxwsf_a_ReferenceParameters_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_ReferenceParameters(c);
            el->g.n = &x->ReferenceParameters->gg.g;
            x->ReferenceParameters = (struct zxwsf_a_ReferenceParameters_s*)el;
            break;
          case zxwsf_a_Metadata_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_Metadata(c);
            el->g.n = &x->Metadata->gg.g;
            x->Metadata = (struct zxwsf_a_Metadata_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_a_RetryAfter) */

#define EL_NAME   a_RetryAfter
#define EL_STRUCT zxwsf_a_RetryAfter_s
#define EL_NS     a
#define EL_TAG    RetryAfter

struct zxwsf_a_RetryAfter_s* zxwsf_DEC_a_RetryAfter(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_a_RetryAfter_s* x = ZX_ZALLOC(c, struct zxwsf_a_RetryAfter_s);
  x->gg.g.tok = zxwsf_a_RetryAfter_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_a_RetryAfter_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_a_To) */

#define EL_NAME   a_To
#define EL_STRUCT zxwsf_a_To_s
#define EL_NS     a
#define EL_TAG    To

struct zxwsf_a_To_s* zxwsf_DEC_a_To(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_a_To_s* x = ZX_ZALLOC(c, struct zxwsf_a_To_s);
  x->gg.g.tok = zxwsf_a_To_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_a_To_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_b12_Consent) */

#define EL_NAME   b12_Consent
#define EL_STRUCT zxwsf_b12_Consent_s
#define EL_NS     b12
#define EL_TAG    Consent

struct zxwsf_b12_Consent_s* zxwsf_DEC_b12_Consent(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_b12_Consent_s* x = ZX_ZALLOC(c, struct zxwsf_b12_Consent_s);
  x->gg.g.tok = zxwsf_b12_Consent_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_b12_Consent_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_uri_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->uri->g;
      x->uri = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_timestamp_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->timestamp->g;
      x->timestamp = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->id->g;
      x->id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_e_mustUnderstand_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->mustUnderstand->g;
      x->mustUnderstand = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_e_actor_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->actor->g;
      x->actor = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_b12_Correlation) */

#define EL_NAME   b12_Correlation
#define EL_STRUCT zxwsf_b12_Correlation_s
#define EL_NS     b12
#define EL_TAG    Correlation

struct zxwsf_b12_Correlation_s* zxwsf_DEC_b12_Correlation(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_b12_Correlation_s* x = ZX_ZALLOC(c, struct zxwsf_b12_Correlation_s);
  x->gg.g.tok = zxwsf_b12_Correlation_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_b12_Correlation_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_messageID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->messageID->g;
      x->messageID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_refToMessageID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->refToMessageID->g;
      x->refToMessageID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_timestamp_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->timestamp->g;
      x->timestamp = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->id->g;
      x->id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_e_mustUnderstand_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->mustUnderstand->g;
      x->mustUnderstand = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_e_actor_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->actor->g;
      x->actor = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_b12_ProcessingContext) */

#define EL_NAME   b12_ProcessingContext
#define EL_STRUCT zxwsf_b12_ProcessingContext_s
#define EL_NS     b12
#define EL_TAG    ProcessingContext

struct zxwsf_b12_ProcessingContext_s* zxwsf_DEC_b12_ProcessingContext(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_b12_ProcessingContext_s* x = ZX_ZALLOC(c, struct zxwsf_b12_ProcessingContext_s);
  x->gg.g.tok = zxwsf_b12_ProcessingContext_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_b12_ProcessingContext_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->id->g;
      x->id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_e_mustUnderstand_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->mustUnderstand->g;
      x->mustUnderstand = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_e_actor_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->actor->g;
      x->actor = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_b12_Provider) */

#define EL_NAME   b12_Provider
#define EL_STRUCT zxwsf_b12_Provider_s
#define EL_NS     b12
#define EL_TAG    Provider

struct zxwsf_b12_Provider_s* zxwsf_DEC_b12_Provider(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_b12_Provider_s* x = ZX_ZALLOC(c, struct zxwsf_b12_Provider_s);
  x->gg.g.tok = zxwsf_b12_Provider_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_b12_Provider_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_providerID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->providerID->g;
      x->providerID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_affiliationID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->affiliationID->g;
      x->affiliationID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->id->g;
      x->id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_e_mustUnderstand_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->mustUnderstand->g;
      x->mustUnderstand = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_e_actor_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->actor->g;
      x->actor = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_b12_UsageDirective) */

#define EL_NAME   b12_UsageDirective
#define EL_STRUCT zxwsf_b12_UsageDirective_s
#define EL_NS     b12
#define EL_TAG    UsageDirective

struct zxwsf_b12_UsageDirective_s* zxwsf_DEC_b12_UsageDirective(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_b12_UsageDirective_s* x = ZX_ZALLOC(c, struct zxwsf_b12_UsageDirective_s);
  x->gg.g.tok = zxwsf_b12_UsageDirective_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_b12_UsageDirective_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->id->g;
      x->id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_ref_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ref->g;
      x->ref = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_e_mustUnderstand_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->mustUnderstand->g;
      x->mustUnderstand = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_e_actor_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->actor->g;
      x->actor = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_b_ApplicationEPR) */

#define EL_NAME   b_ApplicationEPR
#define EL_STRUCT zxwsf_b_ApplicationEPR_s
#define EL_NS     b
#define EL_TAG    ApplicationEPR

struct zxwsf_b_ApplicationEPR_s* zxwsf_DEC_b_ApplicationEPR(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_b_ApplicationEPR_s* x = ZX_ZALLOC(c, struct zxwsf_b_ApplicationEPR_s);
  x->gg.g.tok = zxwsf_b_ApplicationEPR_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_b_ApplicationEPR_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_a_Address_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_Address(c);
            el->g.n = &x->Address->gg.g;
            x->Address = (struct zxwsf_a_Address_s*)el;
            break;
          case zxwsf_a_ReferenceParameters_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_ReferenceParameters(c);
            el->g.n = &x->ReferenceParameters->gg.g;
            x->ReferenceParameters = (struct zxwsf_a_ReferenceParameters_s*)el;
            break;
          case zxwsf_a_Metadata_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_Metadata(c);
            el->g.n = &x->Metadata->gg.g;
            x->Metadata = (struct zxwsf_a_Metadata_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_b_Consent) */

#define EL_NAME   b_Consent
#define EL_STRUCT zxwsf_b_Consent_s
#define EL_NS     b
#define EL_TAG    Consent

struct zxwsf_b_Consent_s* zxwsf_DEC_b_Consent(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_b_Consent_s* x = ZX_ZALLOC(c, struct zxwsf_b_Consent_s);
  x->gg.g.tok = zxwsf_b_Consent_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_b_Consent_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_uri_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->uri->g;
      x->uri = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_timestamp_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->timestamp->g;
      x->timestamp = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_b_CredentialsContext) */

#define EL_NAME   b_CredentialsContext
#define EL_STRUCT zxwsf_b_CredentialsContext_s
#define EL_NS     b
#define EL_TAG    CredentialsContext

struct zxwsf_b_CredentialsContext_s* zxwsf_DEC_b_CredentialsContext(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_b_CredentialsContext_s* x = ZX_ZALLOC(c, struct zxwsf_b_CredentialsContext_s);
  x->gg.g.tok = zxwsf_b_CredentialsContext_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_b_CredentialsContext_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_sp_RequestedAuthnContext_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->RequestedAuthnContext->g;
            x->RequestedAuthnContext = el;
            break;
          case zxwsf_b_SecurityMechID_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->SecurityMechID->g;
            x->SecurityMechID = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_b_EndpointUpdate) */

#define EL_NAME   b_EndpointUpdate
#define EL_STRUCT zxwsf_b_EndpointUpdate_s
#define EL_NS     b
#define EL_TAG    EndpointUpdate

struct zxwsf_b_EndpointUpdate_s* zxwsf_DEC_b_EndpointUpdate(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_b_EndpointUpdate_s* x = ZX_ZALLOC(c, struct zxwsf_b_EndpointUpdate_s);
  x->gg.g.tok = zxwsf_b_EndpointUpdate_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_b_EndpointUpdate_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_updateType_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->updateType->g;
      x->updateType = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_a_Address_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_Address(c);
            el->g.n = &x->Address->gg.g;
            x->Address = (struct zxwsf_a_Address_s*)el;
            break;
          case zxwsf_a_ReferenceParameters_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_ReferenceParameters(c);
            el->g.n = &x->ReferenceParameters->gg.g;
            x->ReferenceParameters = (struct zxwsf_a_ReferenceParameters_s*)el;
            break;
          case zxwsf_a_Metadata_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_Metadata(c);
            el->g.n = &x->Metadata->gg.g;
            x->Metadata = (struct zxwsf_a_Metadata_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_b_Framework) */

#define EL_NAME   b_Framework
#define EL_STRUCT zxwsf_b_Framework_s
#define EL_NS     b
#define EL_TAG    Framework

struct zxwsf_b_Framework_s* zxwsf_DEC_b_Framework(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_b_Framework_s* x = ZX_ZALLOC(c, struct zxwsf_b_Framework_s);
  x->gg.g.tok = zxwsf_b_Framework_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_b_Framework_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_version_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->version->g;
      x->version = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_b_InteractionService) */

#define EL_NAME   b_InteractionService
#define EL_STRUCT zxwsf_b_InteractionService_s
#define EL_NS     b
#define EL_TAG    InteractionService

struct zxwsf_b_InteractionService_s* zxwsf_DEC_b_InteractionService(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_b_InteractionService_s* x = ZX_ZALLOC(c, struct zxwsf_b_InteractionService_s);
  x->gg.g.tok = zxwsf_b_InteractionService_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_b_InteractionService_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_a_Address_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_Address(c);
            el->g.n = &x->Address->gg.g;
            x->Address = (struct zxwsf_a_Address_s*)el;
            break;
          case zxwsf_a_ReferenceParameters_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_ReferenceParameters(c);
            el->g.n = &x->ReferenceParameters->gg.g;
            x->ReferenceParameters = (struct zxwsf_a_ReferenceParameters_s*)el;
            break;
          case zxwsf_a_Metadata_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_Metadata(c);
            el->g.n = &x->Metadata->gg.g;
            x->Metadata = (struct zxwsf_a_Metadata_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_b_ProcessingContext) */

#define EL_NAME   b_ProcessingContext
#define EL_STRUCT zxwsf_b_ProcessingContext_s
#define EL_NS     b
#define EL_TAG    ProcessingContext

struct zxwsf_b_ProcessingContext_s* zxwsf_DEC_b_ProcessingContext(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_b_ProcessingContext_s* x = ZX_ZALLOC(c, struct zxwsf_b_ProcessingContext_s);
  x->gg.g.tok = zxwsf_b_ProcessingContext_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_b_ProcessingContext_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_b_RedirectRequest) */

#define EL_NAME   b_RedirectRequest
#define EL_STRUCT zxwsf_b_RedirectRequest_s
#define EL_NS     b
#define EL_TAG    RedirectRequest

struct zxwsf_b_RedirectRequest_s* zxwsf_DEC_b_RedirectRequest(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_b_RedirectRequest_s* x = ZX_ZALLOC(c, struct zxwsf_b_RedirectRequest_s);
  x->gg.g.tok = zxwsf_b_RedirectRequest_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_b_RedirectRequest_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_redirectURL_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->redirectURL->g;
      x->redirectURL = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_b_Sender) */

#define EL_NAME   b_Sender
#define EL_STRUCT zxwsf_b_Sender_s
#define EL_NS     b
#define EL_TAG    Sender

struct zxwsf_b_Sender_s* zxwsf_DEC_b_Sender(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_b_Sender_s* x = ZX_ZALLOC(c, struct zxwsf_b_Sender_s);
  x->gg.g.tok = zxwsf_b_Sender_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_b_Sender_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_providerID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->providerID->g;
      x->providerID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_affiliationID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->affiliationID->g;
      x->affiliationID = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_b_TargetIdentity) */

#define EL_NAME   b_TargetIdentity
#define EL_STRUCT zxwsf_b_TargetIdentity_s
#define EL_NS     b
#define EL_TAG    TargetIdentity

struct zxwsf_b_TargetIdentity_s* zxwsf_DEC_b_TargetIdentity(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_b_TargetIdentity_s* x = ZX_ZALLOC(c, struct zxwsf_b_TargetIdentity_s);
  x->gg.g.tok = zxwsf_b_TargetIdentity_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_b_TargetIdentity_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_b_UsageDirective) */

#define EL_NAME   b_UsageDirective
#define EL_STRUCT zxwsf_b_UsageDirective_s
#define EL_NS     b
#define EL_TAG    UsageDirective

struct zxwsf_b_UsageDirective_s* zxwsf_DEC_b_UsageDirective(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_b_UsageDirective_s* x = ZX_ZALLOC(c, struct zxwsf_b_UsageDirective_s);
  x->gg.g.tok = zxwsf_b_UsageDirective_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_b_UsageDirective_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_ref_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ref->g;
      x->ref = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_b_UserInteraction) */

#define EL_NAME   b_UserInteraction
#define EL_STRUCT zxwsf_b_UserInteraction_s
#define EL_NS     b
#define EL_TAG    UserInteraction

struct zxwsf_b_UserInteraction_s* zxwsf_DEC_b_UserInteraction(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_b_UserInteraction_s* x = ZX_ZALLOC(c, struct zxwsf_b_UserInteraction_s);
  x->gg.g.tok = zxwsf_b_UserInteraction_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_b_UserInteraction_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_interact_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->interact->g;
      x->interact = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_language_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->language->g;
      x->language = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_redirect_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->redirect->g;
      x->redirect = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_maxInteractTime_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->maxInteractTime->g;
      x->maxInteractTime = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_b_InteractionService_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_b_InteractionService(c);
            el->g.n = &x->InteractionService->gg.g;
            x->InteractionService = (struct zxwsf_b_InteractionService_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di12_AuthenticateRequester) */

#define EL_NAME   di12_AuthenticateRequester
#define EL_STRUCT zxwsf_di12_AuthenticateRequester_s
#define EL_NS     di12
#define EL_TAG    AuthenticateRequester

struct zxwsf_di12_AuthenticateRequester_s* zxwsf_DEC_di12_AuthenticateRequester(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di12_AuthenticateRequester_s* x = ZX_ZALLOC(c, struct zxwsf_di12_AuthenticateRequester_s);
  x->gg.g.tok = zxwsf_di12_AuthenticateRequester_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di12_AuthenticateRequester_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_descriptionIDRefs_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->descriptionIDRefs->g;
      x->descriptionIDRefs = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di12_AuthenticateSessionContext) */

#define EL_NAME   di12_AuthenticateSessionContext
#define EL_STRUCT zxwsf_di12_AuthenticateSessionContext_s
#define EL_NS     di12
#define EL_TAG    AuthenticateSessionContext

struct zxwsf_di12_AuthenticateSessionContext_s* zxwsf_DEC_di12_AuthenticateSessionContext(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di12_AuthenticateSessionContext_s* x = ZX_ZALLOC(c, struct zxwsf_di12_AuthenticateSessionContext_s);
  x->gg.g.tok = zxwsf_di12_AuthenticateSessionContext_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di12_AuthenticateSessionContext_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_descriptionIDRefs_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->descriptionIDRefs->g;
      x->descriptionIDRefs = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di12_AuthorizeRequester) */

#define EL_NAME   di12_AuthorizeRequester
#define EL_STRUCT zxwsf_di12_AuthorizeRequester_s
#define EL_NS     di12
#define EL_TAG    AuthorizeRequester

struct zxwsf_di12_AuthorizeRequester_s* zxwsf_DEC_di12_AuthorizeRequester(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di12_AuthorizeRequester_s* x = ZX_ZALLOC(c, struct zxwsf_di12_AuthorizeRequester_s);
  x->gg.g.tok = zxwsf_di12_AuthorizeRequester_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di12_AuthorizeRequester_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_descriptionIDRefs_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->descriptionIDRefs->g;
      x->descriptionIDRefs = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di12_Credentials) */

#define EL_NAME   di12_Credentials
#define EL_STRUCT zxwsf_di12_Credentials_s
#define EL_NS     di12
#define EL_TAG    Credentials

struct zxwsf_di12_Credentials_s* zxwsf_DEC_di12_Credentials(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di12_Credentials_s* x = ZX_ZALLOC(c, struct zxwsf_di12_Credentials_s);
  x->gg.g.tok = zxwsf_di12_Credentials_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di12_Credentials_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di12_Description) */

#define EL_NAME   di12_Description
#define EL_STRUCT zxwsf_di12_Description_s
#define EL_NS     di12
#define EL_TAG    Description

struct zxwsf_di12_Description_s* zxwsf_DEC_di12_Description(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di12_Description_s* x = ZX_ZALLOC(c, struct zxwsf_di12_Description_s);
  x->gg.g.tok = zxwsf_di12_Description_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di12_Description_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_id_ATTR:
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di12_SecurityMechID_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->SecurityMechID->g;
            x->SecurityMechID = el;
            break;
          case zxwsf_di12_CredentialRef_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->CredentialRef->g;
            x->CredentialRef = el;
            break;
          case zxwsf_di12_WsdlURI_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->WsdlURI->g;
            x->WsdlURI = el;
            break;
          case zxwsf_di12_ServiceNameRef_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->ServiceNameRef->g;
            x->ServiceNameRef = el;
            break;
          case zxwsf_di12_Endpoint_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Endpoint->g;
            x->Endpoint = el;
            break;
          case zxwsf_di12_SoapAction_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->SoapAction->g;
            x->SoapAction = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di12_EncryptResourceID) */

#define EL_NAME   di12_EncryptResourceID
#define EL_STRUCT zxwsf_di12_EncryptResourceID_s
#define EL_NS     di12
#define EL_TAG    EncryptResourceID

struct zxwsf_di12_EncryptResourceID_s* zxwsf_DEC_di12_EncryptResourceID(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di12_EncryptResourceID_s* x = ZX_ZALLOC(c, struct zxwsf_di12_EncryptResourceID_s);
  x->gg.g.tok = zxwsf_di12_EncryptResourceID_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di12_EncryptResourceID_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_descriptionIDRefs_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->descriptionIDRefs->g;
      x->descriptionIDRefs = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di12_EncryptedResourceID) */

#define EL_NAME   di12_EncryptedResourceID
#define EL_STRUCT zxwsf_di12_EncryptedResourceID_s
#define EL_NS     di12
#define EL_TAG    EncryptedResourceID

struct zxwsf_di12_EncryptedResourceID_s* zxwsf_DEC_di12_EncryptedResourceID(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di12_EncryptedResourceID_s* x = ZX_ZALLOC(c, struct zxwsf_di12_EncryptedResourceID_s);
  x->gg.g.tok = zxwsf_di12_EncryptedResourceID_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di12_EncryptedResourceID_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_xenc_EncryptedData_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->EncryptedData->g;
            x->EncryptedData = el;
            break;
          case zxwsf_xenc_EncryptedKey_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->EncryptedKey->g;
            x->EncryptedKey = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di12_Extension) */

#define EL_NAME   di12_Extension
#define EL_STRUCT zxwsf_di12_Extension_s
#define EL_NS     di12
#define EL_TAG    Extension

struct zxwsf_di12_Extension_s* zxwsf_DEC_di12_Extension(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di12_Extension_s* x = ZX_ZALLOC(c, struct zxwsf_di12_Extension_s);
  x->gg.g.tok = zxwsf_di12_Extension_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di12_Extension_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di12_InsertEntry) */

#define EL_NAME   di12_InsertEntry
#define EL_STRUCT zxwsf_di12_InsertEntry_s
#define EL_NS     di12
#define EL_TAG    InsertEntry

struct zxwsf_di12_InsertEntry_s* zxwsf_DEC_di12_InsertEntry(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di12_InsertEntry_s* x = ZX_ZALLOC(c, struct zxwsf_di12_InsertEntry_s);
  x->gg.g.tok = zxwsf_di12_InsertEntry_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di12_InsertEntry_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di12_ResourceOffering_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di12_ResourceOffering(c);
            el->g.n = &x->ResourceOffering->gg.g;
            x->ResourceOffering = (struct zxwsf_di12_ResourceOffering_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di12_Modify) */

#define EL_NAME   di12_Modify
#define EL_STRUCT zxwsf_di12_Modify_s
#define EL_NS     di12
#define EL_TAG    Modify

struct zxwsf_di12_Modify_s* zxwsf_DEC_di12_Modify(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di12_Modify_s* x = ZX_ZALLOC(c, struct zxwsf_di12_Modify_s);
  x->gg.g.tok = zxwsf_di12_Modify_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di12_Modify_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_id_ATTR:
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di12_InsertEntry_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di12_InsertEntry(c);
            el->g.n = &x->InsertEntry->gg.g;
            x->InsertEntry = (struct zxwsf_di12_InsertEntry_s*)el;
            break;
          case zxwsf_di12_RemoveEntry_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di12_RemoveEntry(c);
            el->g.n = &x->RemoveEntry->gg.g;
            x->RemoveEntry = (struct zxwsf_di12_RemoveEntry_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di12_ModifyResponse) */

#define EL_NAME   di12_ModifyResponse
#define EL_STRUCT zxwsf_di12_ModifyResponse_s
#define EL_NS     di12
#define EL_TAG    ModifyResponse

struct zxwsf_di12_ModifyResponse_s* zxwsf_DEC_di12_ModifyResponse(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di12_ModifyResponse_s* x = ZX_ZALLOC(c, struct zxwsf_di12_ModifyResponse_s);
  x->gg.g.tok = zxwsf_di12_ModifyResponse_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di12_ModifyResponse_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->id->g;
      x->id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_newEntryIDs_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->newEntryIDs->g;
      x->newEntryIDs = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di12_Status_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di12_Status(c);
            el->g.n = &x->Status->gg.g;
            x->Status = (struct zxwsf_di12_Status_s*)el;
            break;
          case zxwsf_di12_Extension_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di12_Extension(c);
            el->g.n = &x->Extension->gg.g;
            x->Extension = (struct zxwsf_di12_Extension_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di12_Options) */

#define EL_NAME   di12_Options
#define EL_STRUCT zxwsf_di12_Options_s
#define EL_NS     di12
#define EL_TAG    Options

struct zxwsf_di12_Options_s* zxwsf_DEC_di12_Options(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di12_Options_s* x = ZX_ZALLOC(c, struct zxwsf_di12_Options_s);
  x->gg.g.tok = zxwsf_di12_Options_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di12_Options_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di12_Option_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Option->g;
            x->Option = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di12_Query) */

#define EL_NAME   di12_Query
#define EL_STRUCT zxwsf_di12_Query_s
#define EL_NS     di12
#define EL_TAG    Query

struct zxwsf_di12_Query_s* zxwsf_DEC_di12_Query(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di12_Query_s* x = ZX_ZALLOC(c, struct zxwsf_di12_Query_s);
  x->gg.g.tok = zxwsf_di12_Query_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di12_Query_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_id_ATTR:
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di12_RequestedServiceType_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di12_RequestedServiceType(c);
            el->g.n = &x->RequestedServiceType->gg.g;
            x->RequestedServiceType = (struct zxwsf_di12_RequestedServiceType_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di12_QueryResponse) */

#define EL_NAME   di12_QueryResponse
#define EL_STRUCT zxwsf_di12_QueryResponse_s
#define EL_NS     di12
#define EL_TAG    QueryResponse

struct zxwsf_di12_QueryResponse_s* zxwsf_DEC_di12_QueryResponse(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di12_QueryResponse_s* x = ZX_ZALLOC(c, struct zxwsf_di12_QueryResponse_s);
  x->gg.g.tok = zxwsf_di12_QueryResponse_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di12_QueryResponse_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_id_ATTR:
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di12_Status_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di12_Status(c);
            el->g.n = &x->Status->gg.g;
            x->Status = (struct zxwsf_di12_Status_s*)el;
            break;
          case zxwsf_di12_ResourceOffering_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di12_ResourceOffering(c);
            el->g.n = &x->ResourceOffering->gg.g;
            x->ResourceOffering = (struct zxwsf_di12_ResourceOffering_s*)el;
            break;
          case zxwsf_di12_Credentials_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di12_Credentials(c);
            el->g.n = &x->Credentials->gg.g;
            x->Credentials = (struct zxwsf_di12_Credentials_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di12_RemoveEntry) */

#define EL_NAME   di12_RemoveEntry
#define EL_STRUCT zxwsf_di12_RemoveEntry_s
#define EL_NS     di12
#define EL_TAG    RemoveEntry

struct zxwsf_di12_RemoveEntry_s* zxwsf_DEC_di12_RemoveEntry(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di12_RemoveEntry_s* x = ZX_ZALLOC(c, struct zxwsf_di12_RemoveEntry_s);
  x->gg.g.tok = zxwsf_di12_RemoveEntry_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di12_RemoveEntry_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_entryID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->entryID->g;
      x->entryID = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di12_RequestedServiceType) */

#define EL_NAME   di12_RequestedServiceType
#define EL_STRUCT zxwsf_di12_RequestedServiceType_s
#define EL_NS     di12
#define EL_TAG    RequestedServiceType

struct zxwsf_di12_RequestedServiceType_s* zxwsf_DEC_di12_RequestedServiceType(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di12_RequestedServiceType_s* x = ZX_ZALLOC(c, struct zxwsf_di12_RequestedServiceType_s);
  x->gg.g.tok = zxwsf_di12_RequestedServiceType_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di12_RequestedServiceType_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di12_ServiceType_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->ServiceType->g;
            x->ServiceType = el;
            break;
          case zxwsf_di12_Options_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di12_Options(c);
            el->g.n = &x->Options->gg.g;
            x->Options = (struct zxwsf_di12_Options_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di12_ResourceID) */

#define EL_NAME   di12_ResourceID
#define EL_STRUCT zxwsf_di12_ResourceID_s
#define EL_NS     di12
#define EL_TAG    ResourceID

struct zxwsf_di12_ResourceID_s* zxwsf_DEC_di12_ResourceID(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di12_ResourceID_s* x = ZX_ZALLOC(c, struct zxwsf_di12_ResourceID_s);
  x->gg.g.tok = zxwsf_di12_ResourceID_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di12_ResourceID_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_id_ATTR:
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di12_ResourceOffering) */

#define EL_NAME   di12_ResourceOffering
#define EL_STRUCT zxwsf_di12_ResourceOffering_s
#define EL_NS     di12
#define EL_TAG    ResourceOffering

struct zxwsf_di12_ResourceOffering_s* zxwsf_DEC_di12_ResourceOffering(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di12_ResourceOffering_s* x = ZX_ZALLOC(c, struct zxwsf_di12_ResourceOffering_s);
  x->gg.g.tok = zxwsf_di12_ResourceOffering_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di12_ResourceOffering_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_entryID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->entryID->g;
      x->entryID = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di12_ServiceInstance_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di12_ServiceInstance(c);
            el->g.n = &x->ServiceInstance->gg.g;
            x->ServiceInstance = (struct zxwsf_di12_ServiceInstance_s*)el;
            break;
          case zxwsf_di12_Options_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di12_Options(c);
            el->g.n = &x->Options->gg.g;
            x->Options = (struct zxwsf_di12_Options_s*)el;
            break;
          case zxwsf_di12_Abstract_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Abstract->g;
            x->Abstract = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di12_ServiceInstance) */

#define EL_NAME   di12_ServiceInstance
#define EL_STRUCT zxwsf_di12_ServiceInstance_s
#define EL_NS     di12
#define EL_TAG    ServiceInstance

struct zxwsf_di12_ServiceInstance_s* zxwsf_DEC_di12_ServiceInstance(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di12_ServiceInstance_s* x = ZX_ZALLOC(c, struct zxwsf_di12_ServiceInstance_s);
  x->gg.g.tok = zxwsf_di12_ServiceInstance_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di12_ServiceInstance_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di12_ServiceType_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->ServiceType->g;
            x->ServiceType = el;
            break;
          case zxwsf_di12_ProviderID_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->ProviderID->g;
            x->ProviderID = el;
            break;
          case zxwsf_di12_Description_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di12_Description(c);
            el->g.n = &x->Description->gg.g;
            x->Description = (struct zxwsf_di12_Description_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di12_Status) */

#define EL_NAME   di12_Status
#define EL_STRUCT zxwsf_di12_Status_s
#define EL_NS     di12
#define EL_TAG    Status

struct zxwsf_di12_Status_s* zxwsf_DEC_di12_Status(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di12_Status_s* x = ZX_ZALLOC(c, struct zxwsf_di12_Status_s);
  x->gg.g.tok = zxwsf_di12_Status_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di12_Status_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_code_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->code->g;
      x->code = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_ref_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ref->g;
      x->ref = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_comment_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->comment->g;
      x->comment = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di12_Status_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di12_Status(c);
            el->g.n = &x->Status->gg.g;
            x->Status = (struct zxwsf_di12_Status_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di_EndpointContext) */

#define EL_NAME   di_EndpointContext
#define EL_STRUCT zxwsf_di_EndpointContext_s
#define EL_NS     di
#define EL_TAG    EndpointContext

struct zxwsf_di_EndpointContext_s* zxwsf_DEC_di_EndpointContext(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di_EndpointContext_s* x = ZX_ZALLOC(c, struct zxwsf_di_EndpointContext_s);
  x->gg.g.tok = zxwsf_di_EndpointContext_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di_EndpointContext_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di_Address_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Address->g;
            x->Address = el;
            break;
          case zxwsf_sbf_Framework_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_sbf_Framework(c);
            el->g.n = &x->Framework->gg.g;
            x->Framework = (struct zxwsf_sbf_Framework_s*)el;
            break;
          case zxwsf_di_SecurityMechID_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->SecurityMechID->g;
            x->SecurityMechID = el;
            break;
          case zxwsf_di_Action_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Action->g;
            x->Action = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di_Framework) */

#define EL_NAME   di_Framework
#define EL_STRUCT zxwsf_di_Framework_s
#define EL_NS     di
#define EL_TAG    Framework

struct zxwsf_di_Framework_s* zxwsf_DEC_di_Framework(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di_Framework_s* x = ZX_ZALLOC(c, struct zxwsf_di_Framework_s);
  x->gg.g.tok = zxwsf_di_Framework_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di_Framework_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_version_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->version->g;
      x->version = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di_Keys) */

#define EL_NAME   di_Keys
#define EL_STRUCT zxwsf_di_Keys_s
#define EL_NS     di
#define EL_TAG    Keys

struct zxwsf_di_Keys_s* zxwsf_DEC_di_Keys(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di_Keys_s* x = ZX_ZALLOC(c, struct zxwsf_di_Keys_s);
  x->gg.g.tok = zxwsf_di_Keys_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di_Keys_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_md_KeyDescriptor_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->KeyDescriptor->g;
            x->KeyDescriptor = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di_Options) */

#define EL_NAME   di_Options
#define EL_STRUCT zxwsf_di_Options_s
#define EL_NS     di
#define EL_TAG    Options

struct zxwsf_di_Options_s* zxwsf_DEC_di_Options(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di_Options_s* x = ZX_ZALLOC(c, struct zxwsf_di_Options_s);
  x->gg.g.tok = zxwsf_di_Options_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di_Options_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di_Option_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Option->g;
            x->Option = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di_Query) */

#define EL_NAME   di_Query
#define EL_STRUCT zxwsf_di_Query_s
#define EL_NS     di
#define EL_TAG    Query

struct zxwsf_di_Query_s* zxwsf_DEC_di_Query(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di_Query_s* x = ZX_ZALLOC(c, struct zxwsf_di_Query_s);
  x->gg.g.tok = zxwsf_di_Query_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di_Query_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di_RequestedService_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_RequestedService(c);
            el->g.n = &x->RequestedService->gg.g;
            x->RequestedService = (struct zxwsf_di_RequestedService_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di_QueryResponse) */

#define EL_NAME   di_QueryResponse
#define EL_STRUCT zxwsf_di_QueryResponse_s
#define EL_NS     di
#define EL_TAG    QueryResponse

struct zxwsf_di_QueryResponse_s* zxwsf_DEC_di_QueryResponse(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di_QueryResponse_s* x = ZX_ZALLOC(c, struct zxwsf_di_QueryResponse_s);
  x->gg.g.tok = zxwsf_di_QueryResponse_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di_QueryResponse_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_lu_Status_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_lu_Status(c);
            el->g.n = &x->Status->gg.g;
            x->Status = (struct zxwsf_lu_Status_s*)el;
            break;
          case zxwsf_a_EndpointReference_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_EndpointReference(c);
            el->g.n = &x->EndpointReference->gg.g;
            x->EndpointReference = (struct zxwsf_a_EndpointReference_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di_RequestedService) */

#define EL_NAME   di_RequestedService
#define EL_STRUCT zxwsf_di_RequestedService_s
#define EL_NS     di
#define EL_TAG    RequestedService

struct zxwsf_di_RequestedService_s* zxwsf_DEC_di_RequestedService(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di_RequestedService_s* x = ZX_ZALLOC(c, struct zxwsf_di_RequestedService_s);
  x->gg.g.tok = zxwsf_di_RequestedService_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di_RequestedService_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_reqID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->reqID->g;
      x->reqID = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_resultsType_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->resultsType->g;
      x->resultsType = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di_ServiceType_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->ServiceType->g;
            x->ServiceType = el;
            break;
          case zxwsf_di_ProviderID_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->ProviderID->g;
            x->ProviderID = el;
            break;
          case zxwsf_di_Options_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_Options(c);
            el->g.n = &x->Options->gg.g;
            x->Options = (struct zxwsf_di_Options_s*)el;
            break;
          case zxwsf_di_SecurityMechID_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->SecurityMechID->g;
            x->SecurityMechID = el;
            break;
          case zxwsf_di_Framework_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_Framework(c);
            el->g.n = &x->Framework->gg.g;
            x->Framework = (struct zxwsf_di_Framework_s*)el;
            break;
          case zxwsf_di_Action_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Action->g;
            x->Action = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di_SecurityContext) */

#define EL_NAME   di_SecurityContext
#define EL_STRUCT zxwsf_di_SecurityContext_s
#define EL_NS     di
#define EL_TAG    SecurityContext

struct zxwsf_di_SecurityContext_s* zxwsf_DEC_di_SecurityContext(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di_SecurityContext_s* x = ZX_ZALLOC(c, struct zxwsf_di_SecurityContext_s);
  x->gg.g.tok = zxwsf_di_SecurityContext_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di_SecurityContext_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di_SecurityMechID_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->SecurityMechID->g;
            x->SecurityMechID = el;
            break;
          case zxwsf_sec_Token_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_sec_Token(c);
            el->g.n = &x->Token->gg.g;
            x->Token = (struct zxwsf_sec_Token_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di_ServiceContext) */

#define EL_NAME   di_ServiceContext
#define EL_STRUCT zxwsf_di_ServiceContext_s
#define EL_NS     di
#define EL_TAG    ServiceContext

struct zxwsf_di_ServiceContext_s* zxwsf_DEC_di_ServiceContext(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di_ServiceContext_s* x = ZX_ZALLOC(c, struct zxwsf_di_ServiceContext_s);
  x->gg.g.tok = zxwsf_di_ServiceContext_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di_ServiceContext_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di_ServiceType_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->ServiceType->g;
            x->ServiceType = el;
            break;
          case zxwsf_di_Options_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_Options(c);
            el->g.n = &x->Options->gg.g;
            x->Options = (struct zxwsf_di_Options_s*)el;
            break;
          case zxwsf_di_EndpointContext_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_EndpointContext(c);
            el->g.n = &x->EndpointContext->gg.g;
            x->EndpointContext = (struct zxwsf_di_EndpointContext_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di_SvcMD) */

#define EL_NAME   di_SvcMD
#define EL_STRUCT zxwsf_di_SvcMD_s
#define EL_NS     di
#define EL_TAG    SvcMD

struct zxwsf_di_SvcMD_s* zxwsf_DEC_di_SvcMD(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di_SvcMD_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMD_s);
  x->gg.g.tok = zxwsf_di_SvcMD_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di_SvcMD_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_svcMDID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->svcMDID->g;
      x->svcMDID = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di_Abstract_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Abstract->g;
            x->Abstract = el;
            break;
          case zxwsf_di_ProviderID_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->ProviderID->g;
            x->ProviderID = el;
            break;
          case zxwsf_di_ServiceContext_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_ServiceContext(c);
            el->g.n = &x->ServiceContext->gg.g;
            x->ServiceContext = (struct zxwsf_di_ServiceContext_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di_SvcMDAssociationAdd) */

#define EL_NAME   di_SvcMDAssociationAdd
#define EL_STRUCT zxwsf_di_SvcMDAssociationAdd_s
#define EL_NS     di
#define EL_TAG    SvcMDAssociationAdd

struct zxwsf_di_SvcMDAssociationAdd_s* zxwsf_DEC_di_SvcMDAssociationAdd(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di_SvcMDAssociationAdd_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDAssociationAdd_s);
  x->gg.g.tok = zxwsf_di_SvcMDAssociationAdd_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di_SvcMDAssociationAdd_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di_SvcMDID_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->SvcMDID->g;
            x->SvcMDID = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di_SvcMDAssociationAddResponse) */

#define EL_NAME   di_SvcMDAssociationAddResponse
#define EL_STRUCT zxwsf_di_SvcMDAssociationAddResponse_s
#define EL_NS     di
#define EL_TAG    SvcMDAssociationAddResponse

struct zxwsf_di_SvcMDAssociationAddResponse_s* zxwsf_DEC_di_SvcMDAssociationAddResponse(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di_SvcMDAssociationAddResponse_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDAssociationAddResponse_s);
  x->gg.g.tok = zxwsf_di_SvcMDAssociationAddResponse_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di_SvcMDAssociationAddResponse_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_lu_Status_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_lu_Status(c);
            el->g.n = &x->Status->gg.g;
            x->Status = (struct zxwsf_lu_Status_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di_SvcMDAssociationDelete) */

#define EL_NAME   di_SvcMDAssociationDelete
#define EL_STRUCT zxwsf_di_SvcMDAssociationDelete_s
#define EL_NS     di
#define EL_TAG    SvcMDAssociationDelete

struct zxwsf_di_SvcMDAssociationDelete_s* zxwsf_DEC_di_SvcMDAssociationDelete(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di_SvcMDAssociationDelete_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDAssociationDelete_s);
  x->gg.g.tok = zxwsf_di_SvcMDAssociationDelete_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di_SvcMDAssociationDelete_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di_SvcMDID_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->SvcMDID->g;
            x->SvcMDID = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di_SvcMDAssociationDeleteResponse) */

#define EL_NAME   di_SvcMDAssociationDeleteResponse
#define EL_STRUCT zxwsf_di_SvcMDAssociationDeleteResponse_s
#define EL_NS     di
#define EL_TAG    SvcMDAssociationDeleteResponse

struct zxwsf_di_SvcMDAssociationDeleteResponse_s* zxwsf_DEC_di_SvcMDAssociationDeleteResponse(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDAssociationDeleteResponse_s);
  x->gg.g.tok = zxwsf_di_SvcMDAssociationDeleteResponse_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di_SvcMDAssociationDeleteResponse_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_lu_Status_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_lu_Status(c);
            el->g.n = &x->Status->gg.g;
            x->Status = (struct zxwsf_lu_Status_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di_SvcMDAssociationQuery) */

#define EL_NAME   di_SvcMDAssociationQuery
#define EL_STRUCT zxwsf_di_SvcMDAssociationQuery_s
#define EL_NS     di
#define EL_TAG    SvcMDAssociationQuery

struct zxwsf_di_SvcMDAssociationQuery_s* zxwsf_DEC_di_SvcMDAssociationQuery(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di_SvcMDAssociationQuery_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDAssociationQuery_s);
  x->gg.g.tok = zxwsf_di_SvcMDAssociationQuery_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di_SvcMDAssociationQuery_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di_SvcMDID_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->SvcMDID->g;
            x->SvcMDID = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di_SvcMDAssociationQueryResponse) */

#define EL_NAME   di_SvcMDAssociationQueryResponse
#define EL_STRUCT zxwsf_di_SvcMDAssociationQueryResponse_s
#define EL_NS     di
#define EL_TAG    SvcMDAssociationQueryResponse

struct zxwsf_di_SvcMDAssociationQueryResponse_s* zxwsf_DEC_di_SvcMDAssociationQueryResponse(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di_SvcMDAssociationQueryResponse_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDAssociationQueryResponse_s);
  x->gg.g.tok = zxwsf_di_SvcMDAssociationQueryResponse_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di_SvcMDAssociationQueryResponse_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_lu_Status_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_lu_Status(c);
            el->g.n = &x->Status->gg.g;
            x->Status = (struct zxwsf_lu_Status_s*)el;
            break;
          case zxwsf_di_SvcMDID_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->SvcMDID->g;
            x->SvcMDID = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di_SvcMDDelete) */

#define EL_NAME   di_SvcMDDelete
#define EL_STRUCT zxwsf_di_SvcMDDelete_s
#define EL_NS     di
#define EL_TAG    SvcMDDelete

struct zxwsf_di_SvcMDDelete_s* zxwsf_DEC_di_SvcMDDelete(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di_SvcMDDelete_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDDelete_s);
  x->gg.g.tok = zxwsf_di_SvcMDDelete_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di_SvcMDDelete_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di_SvcMDID_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->SvcMDID->g;
            x->SvcMDID = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di_SvcMDDeleteResponse) */

#define EL_NAME   di_SvcMDDeleteResponse
#define EL_STRUCT zxwsf_di_SvcMDDeleteResponse_s
#define EL_NS     di
#define EL_TAG    SvcMDDeleteResponse

struct zxwsf_di_SvcMDDeleteResponse_s* zxwsf_DEC_di_SvcMDDeleteResponse(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di_SvcMDDeleteResponse_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDDeleteResponse_s);
  x->gg.g.tok = zxwsf_di_SvcMDDeleteResponse_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di_SvcMDDeleteResponse_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_lu_Status_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_lu_Status(c);
            el->g.n = &x->Status->gg.g;
            x->Status = (struct zxwsf_lu_Status_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di_SvcMDQuery) */

#define EL_NAME   di_SvcMDQuery
#define EL_STRUCT zxwsf_di_SvcMDQuery_s
#define EL_NS     di
#define EL_TAG    SvcMDQuery

struct zxwsf_di_SvcMDQuery_s* zxwsf_DEC_di_SvcMDQuery(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di_SvcMDQuery_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDQuery_s);
  x->gg.g.tok = zxwsf_di_SvcMDQuery_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di_SvcMDQuery_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di_SvcMDID_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->SvcMDID->g;
            x->SvcMDID = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di_SvcMDQueryResponse) */

#define EL_NAME   di_SvcMDQueryResponse
#define EL_STRUCT zxwsf_di_SvcMDQueryResponse_s
#define EL_NS     di
#define EL_TAG    SvcMDQueryResponse

struct zxwsf_di_SvcMDQueryResponse_s* zxwsf_DEC_di_SvcMDQueryResponse(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di_SvcMDQueryResponse_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDQueryResponse_s);
  x->gg.g.tok = zxwsf_di_SvcMDQueryResponse_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di_SvcMDQueryResponse_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_lu_Status_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_lu_Status(c);
            el->g.n = &x->Status->gg.g;
            x->Status = (struct zxwsf_lu_Status_s*)el;
            break;
          case zxwsf_di_SvcMD_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_SvcMD(c);
            el->g.n = &x->SvcMD->gg.g;
            x->SvcMD = (struct zxwsf_di_SvcMD_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di_SvcMDRegister) */

#define EL_NAME   di_SvcMDRegister
#define EL_STRUCT zxwsf_di_SvcMDRegister_s
#define EL_NS     di
#define EL_TAG    SvcMDRegister

struct zxwsf_di_SvcMDRegister_s* zxwsf_DEC_di_SvcMDRegister(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di_SvcMDRegister_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDRegister_s);
  x->gg.g.tok = zxwsf_di_SvcMDRegister_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di_SvcMDRegister_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di_SvcMD_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_SvcMD(c);
            el->g.n = &x->SvcMD->gg.g;
            x->SvcMD = (struct zxwsf_di_SvcMD_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di_SvcMDRegisterResponse) */

#define EL_NAME   di_SvcMDRegisterResponse
#define EL_STRUCT zxwsf_di_SvcMDRegisterResponse_s
#define EL_NS     di
#define EL_TAG    SvcMDRegisterResponse

struct zxwsf_di_SvcMDRegisterResponse_s* zxwsf_DEC_di_SvcMDRegisterResponse(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di_SvcMDRegisterResponse_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDRegisterResponse_s);
  x->gg.g.tok = zxwsf_di_SvcMDRegisterResponse_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di_SvcMDRegisterResponse_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_lu_Status_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_lu_Status(c);
            el->g.n = &x->Status->gg.g;
            x->Status = (struct zxwsf_lu_Status_s*)el;
            break;
          case zxwsf_di_SvcMDID_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->SvcMDID->g;
            x->SvcMDID = el;
            break;
          case zxwsf_di_Keys_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_Keys(c);
            el->g.n = &x->Keys->gg.g;
            x->Keys = (struct zxwsf_di_Keys_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di_SvcMDReplace) */

#define EL_NAME   di_SvcMDReplace
#define EL_STRUCT zxwsf_di_SvcMDReplace_s
#define EL_NS     di
#define EL_TAG    SvcMDReplace

struct zxwsf_di_SvcMDReplace_s* zxwsf_DEC_di_SvcMDReplace(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di_SvcMDReplace_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDReplace_s);
  x->gg.g.tok = zxwsf_di_SvcMDReplace_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di_SvcMDReplace_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di_SvcMD_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_SvcMD(c);
            el->g.n = &x->SvcMD->gg.g;
            x->SvcMD = (struct zxwsf_di_SvcMD_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_di_SvcMDReplaceResponse) */

#define EL_NAME   di_SvcMDReplaceResponse
#define EL_STRUCT zxwsf_di_SvcMDReplaceResponse_s
#define EL_NS     di
#define EL_TAG    SvcMDReplaceResponse

struct zxwsf_di_SvcMDReplaceResponse_s* zxwsf_DEC_di_SvcMDReplaceResponse(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_di_SvcMDReplaceResponse_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDReplaceResponse_s);
  x->gg.g.tok = zxwsf_di_SvcMDReplaceResponse_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_di_SvcMDReplaceResponse_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_lu_Status_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_lu_Status(c);
            el->g.n = &x->Status->gg.g;
            x->Status = (struct zxwsf_lu_Status_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_dise_Body) */

#define EL_NAME   dise_Body
#define EL_STRUCT zxwsf_dise_Body_s
#define EL_NS     dise
#define EL_TAG    Body

struct zxwsf_dise_Body_s* zxwsf_DEC_dise_Body(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_dise_Body_s* x = ZX_ZALLOC(c, struct zxwsf_dise_Body_s);
  x->gg.g.tok = zxwsf_dise_Body_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_dise_Body_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di_SvcMDAssociationAdd_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_SvcMDAssociationAdd(c);
            el->g.n = &x->SvcMDAssociationAdd->gg.g;
            x->SvcMDAssociationAdd = (struct zxwsf_di_SvcMDAssociationAdd_s*)el;
            break;
          case zxwsf_di_SvcMDAssociationAddResponse_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_SvcMDAssociationAddResponse(c);
            el->g.n = &x->SvcMDAssociationAddResponse->gg.g;
            x->SvcMDAssociationAddResponse = (struct zxwsf_di_SvcMDAssociationAddResponse_s*)el;
            break;
          case zxwsf_di_SvcMDAssociationDelete_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_SvcMDAssociationDelete(c);
            el->g.n = &x->SvcMDAssociationDelete->gg.g;
            x->SvcMDAssociationDelete = (struct zxwsf_di_SvcMDAssociationDelete_s*)el;
            break;
          case zxwsf_di_SvcMDAssociationDeleteResponse_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_SvcMDAssociationDeleteResponse(c);
            el->g.n = &x->SvcMDAssociationDeleteResponse->gg.g;
            x->SvcMDAssociationDeleteResponse = (struct zxwsf_di_SvcMDAssociationDeleteResponse_s*)el;
            break;
          case zxwsf_di_SvcMDAssociationQuery_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_SvcMDAssociationQuery(c);
            el->g.n = &x->SvcMDAssociationQuery->gg.g;
            x->SvcMDAssociationQuery = (struct zxwsf_di_SvcMDAssociationQuery_s*)el;
            break;
          case zxwsf_di_SvcMDAssociationQueryResponse_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_SvcMDAssociationQueryResponse(c);
            el->g.n = &x->SvcMDAssociationQueryResponse->gg.g;
            x->SvcMDAssociationQueryResponse = (struct zxwsf_di_SvcMDAssociationQueryResponse_s*)el;
            break;
          case zxwsf_di_SvcMDRegister_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_SvcMDRegister(c);
            el->g.n = &x->SvcMDRegister->gg.g;
            x->SvcMDRegister = (struct zxwsf_di_SvcMDRegister_s*)el;
            break;
          case zxwsf_di_SvcMDRegisterResponse_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_SvcMDRegisterResponse(c);
            el->g.n = &x->SvcMDRegisterResponse->gg.g;
            x->SvcMDRegisterResponse = (struct zxwsf_di_SvcMDRegisterResponse_s*)el;
            break;
          case zxwsf_di_SvcMDDelete_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_SvcMDDelete(c);
            el->g.n = &x->SvcMDDelete->gg.g;
            x->SvcMDDelete = (struct zxwsf_di_SvcMDDelete_s*)el;
            break;
          case zxwsf_di_SvcMDDeleteResponse_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_SvcMDDeleteResponse(c);
            el->g.n = &x->SvcMDDeleteResponse->gg.g;
            x->SvcMDDeleteResponse = (struct zxwsf_di_SvcMDDeleteResponse_s*)el;
            break;
          case zxwsf_di_SvcMDQuery_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_SvcMDQuery(c);
            el->g.n = &x->SvcMDQuery->gg.g;
            x->SvcMDQuery = (struct zxwsf_di_SvcMDQuery_s*)el;
            break;
          case zxwsf_di_SvcMDQueryResponse_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_SvcMDQueryResponse(c);
            el->g.n = &x->SvcMDQueryResponse->gg.g;
            x->SvcMDQueryResponse = (struct zxwsf_di_SvcMDQueryResponse_s*)el;
            break;
          case zxwsf_di_SvcMDReplace_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_SvcMDReplace(c);
            el->g.n = &x->SvcMDReplace->gg.g;
            x->SvcMDReplace = (struct zxwsf_di_SvcMDReplace_s*)el;
            break;
          case zxwsf_di_SvcMDReplaceResponse_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_SvcMDReplaceResponse(c);
            el->g.n = &x->SvcMDReplaceResponse->gg.g;
            x->SvcMDReplaceResponse = (struct zxwsf_di_SvcMDReplaceResponse_s*)el;
            break;
          case zxwsf_dise_Fault_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_dise_Fault(c);
            el->g.n = &x->Fault->gg.g;
            x->Fault = (struct zxwsf_dise_Fault_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_dise_Envelope) */

#define EL_NAME   dise_Envelope
#define EL_STRUCT zxwsf_dise_Envelope_s
#define EL_NS     dise
#define EL_TAG    Envelope

struct zxwsf_dise_Envelope_s* zxwsf_DEC_dise_Envelope(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_dise_Envelope_s* x = ZX_ZALLOC(c, struct zxwsf_dise_Envelope_s);
  x->gg.g.tok = zxwsf_dise_Envelope_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_dise_Envelope_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_dise_Header_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_dise_Header(c);
            el->g.n = &x->Header->gg.g;
            x->Header = (struct zxwsf_dise_Header_s*)el;
            break;
          case zxwsf_dise_Body_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_dise_Body(c);
            el->g.n = &x->Body->gg.g;
            x->Body = (struct zxwsf_dise_Body_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_dise_Fault) */

#define EL_NAME   dise_Fault
#define EL_STRUCT zxwsf_dise_Fault_s
#define EL_NS     dise
#define EL_TAG    Fault

struct zxwsf_dise_Fault_s* zxwsf_DEC_dise_Fault(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_dise_Fault_s* x = ZX_ZALLOC(c, struct zxwsf_dise_Fault_s);
  x->gg.g.tok = zxwsf_dise_Fault_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_dise_Fault_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_dise_faultcode_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->faultcode->g;
            x->faultcode = el;
            break;
          case zxwsf_dise_faultstring_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->faultstring->g;
            x->faultstring = el;
            break;
          case zxwsf_dise_faultactor_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->faultactor->g;
            x->faultactor = el;
            break;
          case zxwsf_dise_detail_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_dise_detail(c);
            el->g.n = &x->detail->gg.g;
            x->detail = (struct zxwsf_dise_detail_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_dise_Header) */

#define EL_NAME   dise_Header
#define EL_STRUCT zxwsf_dise_Header_s
#define EL_NS     dise
#define EL_TAG    Header

struct zxwsf_dise_Header_s* zxwsf_DEC_dise_Header(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_dise_Header_s* x = ZX_ZALLOC(c, struct zxwsf_dise_Header_s);
  x->gg.g.tok = zxwsf_dise_Header_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_dise_Header_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_a_MessageID_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_MessageID(c);
            el->g.n = &x->MessageID->gg.g;
            x->MessageID = (struct zxwsf_a_MessageID_s*)el;
            break;
          case zxwsf_a_RelatesTo_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_RelatesTo(c);
            el->g.n = &x->RelatesTo->gg.g;
            x->RelatesTo = (struct zxwsf_a_RelatesTo_s*)el;
            break;
          case zxwsf_a_ReplyTo_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_ReplyTo(c);
            el->g.n = &x->ReplyTo->gg.g;
            x->ReplyTo = (struct zxwsf_a_ReplyTo_s*)el;
            break;
          case zxwsf_a_From_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_From(c);
            el->g.n = &x->From->gg.g;
            x->From = (struct zxwsf_a_From_s*)el;
            break;
          case zxwsf_a_FaultTo_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_FaultTo(c);
            el->g.n = &x->FaultTo->gg.g;
            x->FaultTo = (struct zxwsf_a_FaultTo_s*)el;
            break;
          case zxwsf_a_To_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_To(c);
            el->g.n = &x->To->gg.g;
            x->To = (struct zxwsf_a_To_s*)el;
            break;
          case zxwsf_a_Action_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_Action(c);
            el->g.n = &x->Action->gg.g;
            x->Action = (struct zxwsf_a_Action_s*)el;
            break;
          case zxwsf_sbf_Framework_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_sbf_Framework(c);
            el->g.n = &x->Framework->gg.g;
            x->Framework = (struct zxwsf_sbf_Framework_s*)el;
            break;
          case zxwsf_b_Framework_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_b_Framework(c);
            el->g.n = &x->b_Framework->gg.g;
            x->b_Framework = (struct zxwsf_b_Framework_s*)el;
            break;
          case zxwsf_b_Sender_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_b_Sender(c);
            el->g.n = &x->Sender->gg.g;
            x->Sender = (struct zxwsf_b_Sender_s*)el;
            break;
          case zxwsf_b_CredentialsContext_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_b_CredentialsContext(c);
            el->g.n = &x->CredentialsContext->gg.g;
            x->CredentialsContext = (struct zxwsf_b_CredentialsContext_s*)el;
            break;
          case zxwsf_b_EndpointUpdate_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_b_EndpointUpdate(c);
            el->g.n = &x->EndpointUpdate->gg.g;
            x->EndpointUpdate = (struct zxwsf_b_EndpointUpdate_s*)el;
            break;
          case zxwsf_b_Timeout_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Timeout->g;
            x->Timeout = el;
            break;
          case zxwsf_b_ProcessingContext_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_b_ProcessingContext(c);
            el->g.n = &x->ProcessingContext->gg.g;
            x->ProcessingContext = (struct zxwsf_b_ProcessingContext_s*)el;
            break;
          case zxwsf_b_ApplicationEPR_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_b_ApplicationEPR(c);
            el->g.n = &x->ApplicationEPR->gg.g;
            x->ApplicationEPR = (struct zxwsf_b_ApplicationEPR_s*)el;
            break;
          case zxwsf_b_RedirectRequest_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_b_RedirectRequest(c);
            el->g.n = &x->RedirectRequest->gg.g;
            x->RedirectRequest = (struct zxwsf_b_RedirectRequest_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_dise_detail) */

#define EL_NAME   dise_detail
#define EL_STRUCT zxwsf_dise_detail_s
#define EL_NS     dise
#define EL_TAG    detail

struct zxwsf_dise_detail_s* zxwsf_DEC_dise_detail(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_dise_detail_s* x = ZX_ZALLOC(c, struct zxwsf_dise_detail_s);
  x->gg.g.tok = zxwsf_dise_detail_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_dise_detail_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_e_Body) */

#define EL_NAME   e_Body
#define EL_STRUCT zxwsf_e_Body_s
#define EL_NS     e
#define EL_TAG    Body

struct zxwsf_e_Body_s* zxwsf_DEC_e_Body(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_e_Body_s* x = ZX_ZALLOC(c, struct zxwsf_e_Body_s);
  x->gg.g.tok = zxwsf_e_Body_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_e_Body_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di_Query_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_Query(c);
            el->g.n = &x->Query->gg.g;
            x->Query = (struct zxwsf_di_Query_s*)el;
            break;
          case zxwsf_di_QueryResponse_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di_QueryResponse(c);
            el->g.n = &x->QueryResponse->gg.g;
            x->QueryResponse = (struct zxwsf_di_QueryResponse_s*)el;
            break;
          case zxwsf_di12_Query_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di12_Query(c);
            el->g.n = &x->di12_Query->gg.g;
            x->di12_Query = (struct zxwsf_di12_Query_s*)el;
            break;
          case zxwsf_di12_QueryResponse_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di12_QueryResponse(c);
            el->g.n = &x->di12_QueryResponse->gg.g;
            x->di12_QueryResponse = (struct zxwsf_di12_QueryResponse_s*)el;
            break;
          case zxwsf_di12_Modify_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di12_Modify(c);
            el->g.n = &x->Modify->gg.g;
            x->Modify = (struct zxwsf_di12_Modify_s*)el;
            break;
          case zxwsf_di12_ModifyResponse_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di12_ModifyResponse(c);
            el->g.n = &x->ModifyResponse->gg.g;
            x->ModifyResponse = (struct zxwsf_di12_ModifyResponse_s*)el;
            break;
          case zxwsf_e_Fault_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_e_Fault(c);
            el->g.n = &x->Fault->gg.g;
            x->Fault = (struct zxwsf_e_Fault_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_e_Envelope) */

#define EL_NAME   e_Envelope
#define EL_STRUCT zxwsf_e_Envelope_s
#define EL_NS     e
#define EL_TAG    Envelope

struct zxwsf_e_Envelope_s* zxwsf_DEC_e_Envelope(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_e_Envelope_s* x = ZX_ZALLOC(c, struct zxwsf_e_Envelope_s);
  x->gg.g.tok = zxwsf_e_Envelope_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_e_Envelope_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_e_Header_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_e_Header(c);
            el->g.n = &x->Header->gg.g;
            x->Header = (struct zxwsf_e_Header_s*)el;
            break;
          case zxwsf_e_Body_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_e_Body(c);
            el->g.n = &x->Body->gg.g;
            x->Body = (struct zxwsf_e_Body_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_e_Fault) */

#define EL_NAME   e_Fault
#define EL_STRUCT zxwsf_e_Fault_s
#define EL_NS     e
#define EL_TAG    Fault

struct zxwsf_e_Fault_s* zxwsf_DEC_e_Fault(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_e_Fault_s* x = ZX_ZALLOC(c, struct zxwsf_e_Fault_s);
  x->gg.g.tok = zxwsf_e_Fault_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_e_Fault_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_e_faultcode_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->faultcode->g;
            x->faultcode = el;
            break;
          case zxwsf_e_faultstring_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->faultstring->g;
            x->faultstring = el;
            break;
          case zxwsf_e_faultactor_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->faultactor->g;
            x->faultactor = el;
            break;
          case zxwsf_e_detail_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_e_detail(c);
            el->g.n = &x->detail->gg.g;
            x->detail = (struct zxwsf_e_detail_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_e_Header) */

#define EL_NAME   e_Header
#define EL_STRUCT zxwsf_e_Header_s
#define EL_NS     e
#define EL_TAG    Header

struct zxwsf_e_Header_s* zxwsf_DEC_e_Header(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_e_Header_s* x = ZX_ZALLOC(c, struct zxwsf_e_Header_s);
  x->gg.g.tok = zxwsf_e_Header_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_e_Header_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_a_MessageID_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_MessageID(c);
            el->g.n = &x->MessageID->gg.g;
            x->MessageID = (struct zxwsf_a_MessageID_s*)el;
            break;
          case zxwsf_a_RelatesTo_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_RelatesTo(c);
            el->g.n = &x->RelatesTo->gg.g;
            x->RelatesTo = (struct zxwsf_a_RelatesTo_s*)el;
            break;
          case zxwsf_a_ReplyTo_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_ReplyTo(c);
            el->g.n = &x->ReplyTo->gg.g;
            x->ReplyTo = (struct zxwsf_a_ReplyTo_s*)el;
            break;
          case zxwsf_a_From_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_From(c);
            el->g.n = &x->From->gg.g;
            x->From = (struct zxwsf_a_From_s*)el;
            break;
          case zxwsf_a_FaultTo_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_FaultTo(c);
            el->g.n = &x->FaultTo->gg.g;
            x->FaultTo = (struct zxwsf_a_FaultTo_s*)el;
            break;
          case zxwsf_a_To_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_To(c);
            el->g.n = &x->To->gg.g;
            x->To = (struct zxwsf_a_To_s*)el;
            break;
          case zxwsf_a_Action_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_a_Action(c);
            el->g.n = &x->Action->gg.g;
            x->Action = (struct zxwsf_a_Action_s*)el;
            break;
          case zxwsf_sbf_Framework_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_sbf_Framework(c);
            el->g.n = &x->Framework->gg.g;
            x->Framework = (struct zxwsf_sbf_Framework_s*)el;
            break;
          case zxwsf_b_Framework_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_b_Framework(c);
            el->g.n = &x->b_Framework->gg.g;
            x->b_Framework = (struct zxwsf_b_Framework_s*)el;
            break;
          case zxwsf_b_Sender_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_b_Sender(c);
            el->g.n = &x->Sender->gg.g;
            x->Sender = (struct zxwsf_b_Sender_s*)el;
            break;
          case zxwsf_b_TargetIdentity_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_b_TargetIdentity(c);
            el->g.n = &x->TargetIdentity->gg.g;
            x->TargetIdentity = (struct zxwsf_b_TargetIdentity_s*)el;
            break;
          case zxwsf_b_CredentialsContext_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_b_CredentialsContext(c);
            el->g.n = &x->CredentialsContext->gg.g;
            x->CredentialsContext = (struct zxwsf_b_CredentialsContext_s*)el;
            break;
          case zxwsf_b_EndpointUpdate_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_b_EndpointUpdate(c);
            el->g.n = &x->EndpointUpdate->gg.g;
            x->EndpointUpdate = (struct zxwsf_b_EndpointUpdate_s*)el;
            break;
          case zxwsf_b_Timeout_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Timeout->g;
            x->Timeout = el;
            break;
          case zxwsf_b_ProcessingContext_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_b_ProcessingContext(c);
            el->g.n = &x->ProcessingContext->gg.g;
            x->ProcessingContext = (struct zxwsf_b_ProcessingContext_s*)el;
            break;
          case zxwsf_b_Consent_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_b_Consent(c);
            el->g.n = &x->Consent->gg.g;
            x->Consent = (struct zxwsf_b_Consent_s*)el;
            break;
          case zxwsf_b_UsageDirective_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_b_UsageDirective(c);
            el->g.n = &x->UsageDirective->gg.g;
            x->UsageDirective = (struct zxwsf_b_UsageDirective_s*)el;
            break;
          case zxwsf_b_ApplicationEPR_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_b_ApplicationEPR(c);
            el->g.n = &x->ApplicationEPR->gg.g;
            x->ApplicationEPR = (struct zxwsf_b_ApplicationEPR_s*)el;
            break;
          case zxwsf_b_UserInteraction_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_b_UserInteraction(c);
            el->g.n = &x->UserInteraction->gg.g;
            x->UserInteraction = (struct zxwsf_b_UserInteraction_s*)el;
            break;
          case zxwsf_b_RedirectRequest_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_b_RedirectRequest(c);
            el->g.n = &x->RedirectRequest->gg.g;
            x->RedirectRequest = (struct zxwsf_b_RedirectRequest_s*)el;
            break;
          case zxwsf_b12_Correlation_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_b12_Correlation(c);
            el->g.n = &x->Correlation->gg.g;
            x->Correlation = (struct zxwsf_b12_Correlation_s*)el;
            break;
          case zxwsf_b12_Provider_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_b12_Provider(c);
            el->g.n = &x->Provider->gg.g;
            x->Provider = (struct zxwsf_b12_Provider_s*)el;
            break;
          case zxwsf_b12_ProcessingContext_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_b12_ProcessingContext(c);
            el->g.n = &x->b12_ProcessingContext->gg.g;
            x->b12_ProcessingContext = (struct zxwsf_b12_ProcessingContext_s*)el;
            break;
          case zxwsf_b12_Consent_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_b12_Consent(c);
            el->g.n = &x->b12_Consent->gg.g;
            x->b12_Consent = (struct zxwsf_b12_Consent_s*)el;
            break;
          case zxwsf_b12_UsageDirective_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_b12_UsageDirective(c);
            el->g.n = &x->b12_UsageDirective->gg.g;
            x->b12_UsageDirective = (struct zxwsf_b12_UsageDirective_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_e_detail) */

#define EL_NAME   e_detail
#define EL_STRUCT zxwsf_e_detail_s
#define EL_NS     e
#define EL_TAG    detail

struct zxwsf_e_detail_s* zxwsf_DEC_e_detail(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_e_detail_s* x = ZX_ZALLOC(c, struct zxwsf_e_detail_s);
  x->gg.g.tok = zxwsf_e_detail_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_e_detail_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is12_Confirm) */

#define EL_NAME   is12_Confirm
#define EL_STRUCT zxwsf_is12_Confirm_s
#define EL_NS     is12
#define EL_TAG    Confirm

struct zxwsf_is12_Confirm_s* zxwsf_DEC_is12_Confirm(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is12_Confirm_s* x = ZX_ZALLOC(c, struct zxwsf_is12_Confirm_s);
  x->gg.g.tok = zxwsf_is12_Confirm_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is12_Confirm_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_name_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->name->g;
      x->name = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_is12_Help_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is12_Help(c);
            el->g.n = &x->Help->gg.g;
            x->Help = (struct zxwsf_is12_Help_s*)el;
            break;
          case zxwsf_is12_Hint_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Hint->g;
            x->Hint = el;
            break;
          case zxwsf_is12_Label_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Label->g;
            x->Label = el;
            break;
          case zxwsf_is12_Value_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Value->g;
            x->Value = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is12_EncryptedResourceID) */

#define EL_NAME   is12_EncryptedResourceID
#define EL_STRUCT zxwsf_is12_EncryptedResourceID_s
#define EL_NS     is12
#define EL_TAG    EncryptedResourceID

struct zxwsf_is12_EncryptedResourceID_s* zxwsf_DEC_is12_EncryptedResourceID(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is12_EncryptedResourceID_s* x = ZX_ZALLOC(c, struct zxwsf_is12_EncryptedResourceID_s);
  x->gg.g.tok = zxwsf_is12_EncryptedResourceID_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is12_EncryptedResourceID_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_xenc_EncryptedData_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->EncryptedData->g;
            x->EncryptedData = el;
            break;
          case zxwsf_xenc_EncryptedKey_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->EncryptedKey->g;
            x->EncryptedKey = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is12_Extension) */

#define EL_NAME   is12_Extension
#define EL_STRUCT zxwsf_is12_Extension_s
#define EL_NS     is12
#define EL_TAG    Extension

struct zxwsf_is12_Extension_s* zxwsf_DEC_is12_Extension(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is12_Extension_s* x = ZX_ZALLOC(c, struct zxwsf_is12_Extension_s);
  x->gg.g.tok = zxwsf_is12_Extension_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is12_Extension_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is12_Help) */

#define EL_NAME   is12_Help
#define EL_STRUCT zxwsf_is12_Help_s
#define EL_NS     is12
#define EL_TAG    Help

struct zxwsf_is12_Help_s* zxwsf_DEC_is12_Help(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is12_Help_s* x = ZX_ZALLOC(c, struct zxwsf_is12_Help_s);
  x->gg.g.tok = zxwsf_is12_Help_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is12_Help_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_label_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->label->g;
      x->label = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_link_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->link->g;
      x->link = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_moreLink_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->moreLink->g;
      x->moreLink = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is12_Inquiry) */

#define EL_NAME   is12_Inquiry
#define EL_STRUCT zxwsf_is12_Inquiry_s
#define EL_NS     is12
#define EL_TAG    Inquiry

struct zxwsf_is12_Inquiry_s* zxwsf_DEC_is12_Inquiry(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is12_Inquiry_s* x = ZX_ZALLOC(c, struct zxwsf_is12_Inquiry_s);
  x->gg.g.tok = zxwsf_is12_Inquiry_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is12_Inquiry_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->id->g;
      x->id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_title_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->title->g;
      x->title = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_is12_Help_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is12_Help(c);
            el->g.n = &x->Help->gg.g;
            x->Help = (struct zxwsf_is12_Help_s*)el;
            break;
          case zxwsf_is12_Select_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is12_Select(c);
            el->g.n = &x->Select->gg.g;
            x->Select = (struct zxwsf_is12_Select_s*)el;
            break;
          case zxwsf_is12_Confirm_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is12_Confirm(c);
            el->g.n = &x->Confirm->gg.g;
            x->Confirm = (struct zxwsf_is12_Confirm_s*)el;
            break;
          case zxwsf_is12_Text_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is12_Text(c);
            el->g.n = &x->Text->gg.g;
            x->Text = (struct zxwsf_is12_Text_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is12_InteractionRequest) */

#define EL_NAME   is12_InteractionRequest
#define EL_STRUCT zxwsf_is12_InteractionRequest_s
#define EL_NS     is12
#define EL_TAG    InteractionRequest

struct zxwsf_is12_InteractionRequest_s* zxwsf_DEC_is12_InteractionRequest(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is12_InteractionRequest_s* x = ZX_ZALLOC(c, struct zxwsf_is12_InteractionRequest_s);
  x->gg.g.tok = zxwsf_is12_InteractionRequest_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is12_InteractionRequest_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->id->g;
      x->id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_language_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->language->g;
      x->language = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_maxInteractTime_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->maxInteractTime->g;
      x->maxInteractTime = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_signed_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->signed_is_c_keyword->g;
      x->signed_is_c_keyword = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_is12_Inquiry_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is12_Inquiry(c);
            el->g.n = &x->Inquiry->gg.g;
            x->Inquiry = (struct zxwsf_is12_Inquiry_s*)el;
            break;
          case zxwsf_ds_KeyInfo_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->KeyInfo->g;
            x->KeyInfo = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is12_InteractionResponse) */

#define EL_NAME   is12_InteractionResponse
#define EL_STRUCT zxwsf_is12_InteractionResponse_s
#define EL_NS     is12
#define EL_TAG    InteractionResponse

struct zxwsf_is12_InteractionResponse_s* zxwsf_DEC_is12_InteractionResponse(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is12_InteractionResponse_s* x = ZX_ZALLOC(c, struct zxwsf_is12_InteractionResponse_s);
  x->gg.g.tok = zxwsf_is12_InteractionResponse_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is12_InteractionResponse_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_is12_Status_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is12_Status(c);
            el->g.n = &x->Status->gg.g;
            x->Status = (struct zxwsf_is12_Status_s*)el;
            break;
          case zxwsf_is12_InteractionStatement_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is12_InteractionStatement(c);
            el->g.n = &x->InteractionStatement->gg.g;
            x->InteractionStatement = (struct zxwsf_is12_InteractionStatement_s*)el;
            break;
          case zxwsf_is12_Parameter_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is12_Parameter(c);
            el->g.n = &x->Parameter->gg.g;
            x->Parameter = (struct zxwsf_is12_Parameter_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is12_InteractionService) */

#define EL_NAME   is12_InteractionService
#define EL_STRUCT zxwsf_is12_InteractionService_s
#define EL_NS     is12
#define EL_TAG    InteractionService

struct zxwsf_is12_InteractionService_s* zxwsf_DEC_is12_InteractionService(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is12_InteractionService_s* x = ZX_ZALLOC(c, struct zxwsf_is12_InteractionService_s);
  x->gg.g.tok = zxwsf_is12_InteractionService_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is12_InteractionService_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_entryID_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->entryID->g;
      x->entryID = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_di12_ServiceInstance_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di12_ServiceInstance(c);
            el->g.n = &x->ServiceInstance->gg.g;
            x->ServiceInstance = (struct zxwsf_di12_ServiceInstance_s*)el;
            break;
          case zxwsf_di12_Options_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_di12_Options(c);
            el->g.n = &x->Options->gg.g;
            x->Options = (struct zxwsf_di12_Options_s*)el;
            break;
          case zxwsf_di12_Abstract_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Abstract->g;
            x->Abstract = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is12_InteractionStatement) */

#define EL_NAME   is12_InteractionStatement
#define EL_STRUCT zxwsf_is12_InteractionStatement_s
#define EL_NS     is12
#define EL_TAG    InteractionStatement

struct zxwsf_is12_InteractionStatement_s* zxwsf_DEC_is12_InteractionStatement(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is12_InteractionStatement_s* x = ZX_ZALLOC(c, struct zxwsf_is12_InteractionStatement_s);
  x->gg.g.tok = zxwsf_is12_InteractionStatement_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is12_InteractionStatement_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_is12_Inquiry_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is12_Inquiry(c);
            el->g.n = &x->Inquiry->gg.g;
            x->Inquiry = (struct zxwsf_is12_Inquiry_s*)el;
            break;
          case zxwsf_ds_Signature_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Signature->g;
            x->Signature = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is12_Item) */

#define EL_NAME   is12_Item
#define EL_STRUCT zxwsf_is12_Item_s
#define EL_NS     is12
#define EL_TAG    Item

struct zxwsf_is12_Item_s* zxwsf_DEC_is12_Item(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is12_Item_s* x = ZX_ZALLOC(c, struct zxwsf_is12_Item_s);
  x->gg.g.tok = zxwsf_is12_Item_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is12_Item_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_label_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->label->g;
      x->label = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_value_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->value->g;
      x->value = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_is12_Hint_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Hint->g;
            x->Hint = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is12_Parameter) */

#define EL_NAME   is12_Parameter
#define EL_STRUCT zxwsf_is12_Parameter_s
#define EL_NS     is12
#define EL_TAG    Parameter

struct zxwsf_is12_Parameter_s* zxwsf_DEC_is12_Parameter(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is12_Parameter_s* x = ZX_ZALLOC(c, struct zxwsf_is12_Parameter_s);
  x->gg.g.tok = zxwsf_is12_Parameter_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is12_Parameter_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_name_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->name->g;
      x->name = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_value_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->value->g;
      x->value = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is12_RedirectRequest) */

#define EL_NAME   is12_RedirectRequest
#define EL_STRUCT zxwsf_is12_RedirectRequest_s
#define EL_NS     is12
#define EL_TAG    RedirectRequest

struct zxwsf_is12_RedirectRequest_s* zxwsf_DEC_is12_RedirectRequest(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is12_RedirectRequest_s* x = ZX_ZALLOC(c, struct zxwsf_is12_RedirectRequest_s);
  x->gg.g.tok = zxwsf_is12_RedirectRequest_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is12_RedirectRequest_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_redirectURL_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->redirectURL->g;
      x->redirectURL = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is12_ResourceID) */

#define EL_NAME   is12_ResourceID
#define EL_STRUCT zxwsf_is12_ResourceID_s
#define EL_NS     is12
#define EL_TAG    ResourceID

struct zxwsf_is12_ResourceID_s* zxwsf_DEC_is12_ResourceID(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is12_ResourceID_s* x = ZX_ZALLOC(c, struct zxwsf_is12_ResourceID_s);
  x->gg.g.tok = zxwsf_is12_ResourceID_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is12_ResourceID_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_id_ATTR:
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is12_Select) */

#define EL_NAME   is12_Select
#define EL_STRUCT zxwsf_is12_Select_s
#define EL_NS     is12
#define EL_TAG    Select

struct zxwsf_is12_Select_s* zxwsf_DEC_is12_Select(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is12_Select_s* x = ZX_ZALLOC(c, struct zxwsf_is12_Select_s);
  x->gg.g.tok = zxwsf_is12_Select_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is12_Select_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_name_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->name->g;
      x->name = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_multiple_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->multiple->g;
      x->multiple = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_is12_Help_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is12_Help(c);
            el->g.n = &x->Help->gg.g;
            x->Help = (struct zxwsf_is12_Help_s*)el;
            break;
          case zxwsf_is12_Hint_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Hint->g;
            x->Hint = el;
            break;
          case zxwsf_is12_Label_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Label->g;
            x->Label = el;
            break;
          case zxwsf_is12_Value_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Value->g;
            x->Value = el;
            break;
          case zxwsf_is12_Item_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is12_Item(c);
            el->g.n = &x->Item->gg.g;
            x->Item = (struct zxwsf_is12_Item_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is12_Status) */

#define EL_NAME   is12_Status
#define EL_STRUCT zxwsf_is12_Status_s
#define EL_NS     is12
#define EL_TAG    Status

struct zxwsf_is12_Status_s* zxwsf_DEC_is12_Status(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is12_Status_s* x = ZX_ZALLOC(c, struct zxwsf_is12_Status_s);
  x->gg.g.tok = zxwsf_is12_Status_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is12_Status_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_code_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->code->g;
      x->code = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_ref_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ref->g;
      x->ref = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_comment_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->comment->g;
      x->comment = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_is12_Status_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is12_Status(c);
            el->g.n = &x->Status->gg.g;
            x->Status = (struct zxwsf_is12_Status_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is12_Text) */

#define EL_NAME   is12_Text
#define EL_STRUCT zxwsf_is12_Text_s
#define EL_NS     is12
#define EL_TAG    Text

struct zxwsf_is12_Text_s* zxwsf_DEC_is12_Text(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is12_Text_s* x = ZX_ZALLOC(c, struct zxwsf_is12_Text_s);
  x->gg.g.tok = zxwsf_is12_Text_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is12_Text_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_name_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->name->g;
      x->name = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_minChars_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->minChars->g;
      x->minChars = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_maxChars_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->maxChars->g;
      x->maxChars = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_format_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->format->g;
      x->format = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_is12_Help_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is12_Help(c);
            el->g.n = &x->Help->gg.g;
            x->Help = (struct zxwsf_is12_Help_s*)el;
            break;
          case zxwsf_is12_Hint_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Hint->g;
            x->Hint = el;
            break;
          case zxwsf_is12_Label_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Label->g;
            x->Label = el;
            break;
          case zxwsf_is12_Value_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Value->g;
            x->Value = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is12_UserInteraction) */

#define EL_NAME   is12_UserInteraction
#define EL_STRUCT zxwsf_is12_UserInteraction_s
#define EL_NS     is12
#define EL_TAG    UserInteraction

struct zxwsf_is12_UserInteraction_s* zxwsf_DEC_is12_UserInteraction(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is12_UserInteraction_s* x = ZX_ZALLOC(c, struct zxwsf_is12_UserInteraction_s);
  x->gg.g.tok = zxwsf_is12_UserInteraction_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is12_UserInteraction_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->id->g;
      x->id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_interact_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->interact->g;
      x->interact = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_language_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->language->g;
      x->language = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_redirect_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->redirect->g;
      x->redirect = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_maxInteractTime_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->maxInteractTime->g;
      x->maxInteractTime = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_e_actor_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->actor->g;
      x->actor = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_e_mustUnderstand_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->mustUnderstand->g;
      x->mustUnderstand = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_is12_InteractionService_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is12_InteractionService(c);
            el->g.n = &x->InteractionService->gg.g;
            x->InteractionService = (struct zxwsf_is12_InteractionService_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is_Confirm) */

#define EL_NAME   is_Confirm
#define EL_STRUCT zxwsf_is_Confirm_s
#define EL_NS     is
#define EL_TAG    Confirm

struct zxwsf_is_Confirm_s* zxwsf_DEC_is_Confirm(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is_Confirm_s* x = ZX_ZALLOC(c, struct zxwsf_is_Confirm_s);
  x->gg.g.tok = zxwsf_is_Confirm_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is_Confirm_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_name_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->name->g;
      x->name = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_is_Help_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is_Help(c);
            el->g.n = &x->Help->gg.g;
            x->Help = (struct zxwsf_is_Help_s*)el;
            break;
          case zxwsf_is_Hint_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Hint->g;
            x->Hint = el;
            break;
          case zxwsf_is_Label_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Label->g;
            x->Label = el;
            break;
          case zxwsf_is_Value_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Value->g;
            x->Value = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is_Help) */

#define EL_NAME   is_Help
#define EL_STRUCT zxwsf_is_Help_s
#define EL_NS     is
#define EL_TAG    Help

struct zxwsf_is_Help_s* zxwsf_DEC_is_Help(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is_Help_s* x = ZX_ZALLOC(c, struct zxwsf_is_Help_s);
  x->gg.g.tok = zxwsf_is_Help_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is_Help_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_label_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->label->g;
      x->label = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_link_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->link->g;
      x->link = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_moreLink_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->moreLink->g;
      x->moreLink = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is_Inquiry) */

#define EL_NAME   is_Inquiry
#define EL_STRUCT zxwsf_is_Inquiry_s
#define EL_NS     is
#define EL_TAG    Inquiry

struct zxwsf_is_Inquiry_s* zxwsf_DEC_is_Inquiry(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is_Inquiry_s* x = ZX_ZALLOC(c, struct zxwsf_is_Inquiry_s);
  x->gg.g.tok = zxwsf_is_Inquiry_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is_Inquiry_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->id->g;
      x->id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_title_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->title->g;
      x->title = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_is_Help_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is_Help(c);
            el->g.n = &x->Help->gg.g;
            x->Help = (struct zxwsf_is_Help_s*)el;
            break;
          case zxwsf_is_Select_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is_Select(c);
            el->g.n = &x->Select->gg.g;
            x->Select = (struct zxwsf_is_Select_s*)el;
            break;
          case zxwsf_is_Confirm_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is_Confirm(c);
            el->g.n = &x->Confirm->gg.g;
            x->Confirm = (struct zxwsf_is_Confirm_s*)el;
            break;
          case zxwsf_is_Text_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is_Text(c);
            el->g.n = &x->Text->gg.g;
            x->Text = (struct zxwsf_is_Text_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is_InteractionRequest) */

#define EL_NAME   is_InteractionRequest
#define EL_STRUCT zxwsf_is_InteractionRequest_s
#define EL_NS     is
#define EL_TAG    InteractionRequest

struct zxwsf_is_InteractionRequest_s* zxwsf_DEC_is_InteractionRequest(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is_InteractionRequest_s* x = ZX_ZALLOC(c, struct zxwsf_is_InteractionRequest_s);
  x->gg.g.tok = zxwsf_is_InteractionRequest_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is_InteractionRequest_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->id->g;
      x->id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_language_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->language->g;
      x->language = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_maxInteractTime_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->maxInteractTime->g;
      x->maxInteractTime = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_signed_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->signed_is_c_keyword->g;
      x->signed_is_c_keyword = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_is_Inquiry_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is_Inquiry(c);
            el->g.n = &x->Inquiry->gg.g;
            x->Inquiry = (struct zxwsf_is_Inquiry_s*)el;
            break;
          case zxwsf_ds_KeyInfo_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->KeyInfo->g;
            x->KeyInfo = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is_InteractionResponse) */

#define EL_NAME   is_InteractionResponse
#define EL_STRUCT zxwsf_is_InteractionResponse_s
#define EL_NS     is
#define EL_TAG    InteractionResponse

struct zxwsf_is_InteractionResponse_s* zxwsf_DEC_is_InteractionResponse(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is_InteractionResponse_s* x = ZX_ZALLOC(c, struct zxwsf_is_InteractionResponse_s);
  x->gg.g.tok = zxwsf_is_InteractionResponse_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is_InteractionResponse_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_lu_Status_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_lu_Status(c);
            el->g.n = &x->Status->gg.g;
            x->Status = (struct zxwsf_lu_Status_s*)el;
            break;
          case zxwsf_is_InteractionStatement_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is_InteractionStatement(c);
            el->g.n = &x->InteractionStatement->gg.g;
            x->InteractionStatement = (struct zxwsf_is_InteractionStatement_s*)el;
            break;
          case zxwsf_is_Parameter_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is_Parameter(c);
            el->g.n = &x->Parameter->gg.g;
            x->Parameter = (struct zxwsf_is_Parameter_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is_InteractionStatement) */

#define EL_NAME   is_InteractionStatement
#define EL_STRUCT zxwsf_is_InteractionStatement_s
#define EL_NS     is
#define EL_TAG    InteractionStatement

struct zxwsf_is_InteractionStatement_s* zxwsf_DEC_is_InteractionStatement(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is_InteractionStatement_s* x = ZX_ZALLOC(c, struct zxwsf_is_InteractionStatement_s);
  x->gg.g.tok = zxwsf_is_InteractionStatement_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is_InteractionStatement_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_is_Inquiry_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is_Inquiry(c);
            el->g.n = &x->Inquiry->gg.g;
            x->Inquiry = (struct zxwsf_is_Inquiry_s*)el;
            break;
          case zxwsf_ds_Signature_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Signature->g;
            x->Signature = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is_Item) */

#define EL_NAME   is_Item
#define EL_STRUCT zxwsf_is_Item_s
#define EL_NS     is
#define EL_TAG    Item

struct zxwsf_is_Item_s* zxwsf_DEC_is_Item(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is_Item_s* x = ZX_ZALLOC(c, struct zxwsf_is_Item_s);
  x->gg.g.tok = zxwsf_is_Item_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is_Item_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_label_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->label->g;
      x->label = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_value_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->value->g;
      x->value = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_is_Hint_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Hint->g;
            x->Hint = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is_Parameter) */

#define EL_NAME   is_Parameter
#define EL_STRUCT zxwsf_is_Parameter_s
#define EL_NS     is
#define EL_TAG    Parameter

struct zxwsf_is_Parameter_s* zxwsf_DEC_is_Parameter(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is_Parameter_s* x = ZX_ZALLOC(c, struct zxwsf_is_Parameter_s);
  x->gg.g.tok = zxwsf_is_Parameter_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is_Parameter_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_name_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->name->g;
      x->name = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_value_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->value->g;
      x->value = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is_Select) */

#define EL_NAME   is_Select
#define EL_STRUCT zxwsf_is_Select_s
#define EL_NS     is
#define EL_TAG    Select

struct zxwsf_is_Select_s* zxwsf_DEC_is_Select(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is_Select_s* x = ZX_ZALLOC(c, struct zxwsf_is_Select_s);
  x->gg.g.tok = zxwsf_is_Select_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is_Select_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_name_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->name->g;
      x->name = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_multiple_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->multiple->g;
      x->multiple = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_is_Help_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is_Help(c);
            el->g.n = &x->Help->gg.g;
            x->Help = (struct zxwsf_is_Help_s*)el;
            break;
          case zxwsf_is_Hint_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Hint->g;
            x->Hint = el;
            break;
          case zxwsf_is_Label_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Label->g;
            x->Label = el;
            break;
          case zxwsf_is_Value_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Value->g;
            x->Value = el;
            break;
          case zxwsf_is_Item_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is_Item(c);
            el->g.n = &x->Item->gg.g;
            x->Item = (struct zxwsf_is_Item_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_is_Text) */

#define EL_NAME   is_Text
#define EL_STRUCT zxwsf_is_Text_s
#define EL_NS     is
#define EL_TAG    Text

struct zxwsf_is_Text_s* zxwsf_DEC_is_Text(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_is_Text_s* x = ZX_ZALLOC(c, struct zxwsf_is_Text_s);
  x->gg.g.tok = zxwsf_is_Text_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_is_Text_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_name_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->name->g;
      x->name = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_minChars_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->minChars->g;
      x->minChars = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_maxChars_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->maxChars->g;
      x->maxChars = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_format_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->format->g;
      x->format = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_is_Help_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_is_Help(c);
            el->g.n = &x->Help->gg.g;
            x->Help = (struct zxwsf_is_Help_s*)el;
            break;
          case zxwsf_is_Hint_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Hint->g;
            x->Hint = el;
            break;
          case zxwsf_is_Label_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Label->g;
            x->Label = el;
            break;
          case zxwsf_is_Value_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Value->g;
            x->Value = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_lu_Extension) */

#define EL_NAME   lu_Extension
#define EL_STRUCT zxwsf_lu_Extension_s
#define EL_NS     lu
#define EL_TAG    Extension

struct zxwsf_lu_Extension_s* zxwsf_DEC_lu_Extension(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_lu_Extension_s* x = ZX_ZALLOC(c, struct zxwsf_lu_Extension_s);
  x->gg.g.tok = zxwsf_lu_Extension_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_lu_Extension_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_lu_Status) */

#define EL_NAME   lu_Status
#define EL_STRUCT zxwsf_lu_Status_s
#define EL_NS     lu
#define EL_TAG    Status

struct zxwsf_lu_Status_s* zxwsf_DEC_lu_Status(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_lu_Status_s* x = ZX_ZALLOC(c, struct zxwsf_lu_Status_s);
  x->gg.g.tok = zxwsf_lu_Status_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_lu_Status_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_code_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->code->g;
      x->code = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_ref_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ref->g;
      x->ref = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_comment_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->comment->g;
      x->comment = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_lu_Status_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_lu_Status(c);
            el->g.n = &x->Status->gg.g;
            x->Status = (struct zxwsf_lu_Status_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_lu_TestResult) */

#define EL_NAME   lu_TestResult
#define EL_STRUCT zxwsf_lu_TestResult_s
#define EL_NS     lu
#define EL_TAG    TestResult

struct zxwsf_lu_TestResult_s* zxwsf_DEC_lu_TestResult(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_lu_TestResult_s* x = ZX_ZALLOC(c, struct zxwsf_lu_TestResult_s);
  x->gg.g.tok = zxwsf_lu_TestResult_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_lu_TestResult_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_itemIDRef_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->itemIDRef->g;
      x->itemIDRef = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_sbf_Framework) */

#define EL_NAME   sbf_Framework
#define EL_STRUCT zxwsf_sbf_Framework_s
#define EL_NS     sbf
#define EL_TAG    Framework

struct zxwsf_sbf_Framework_s* zxwsf_DEC_sbf_Framework(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_sbf_Framework_s* x = ZX_ZALLOC(c, struct zxwsf_sbf_Framework_s);
  x->gg.g.tok = zxwsf_sbf_Framework_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_sbf_Framework_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_version_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->version->g;
      x->version = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_sec12_ProxyInfoConfirmationData) */

#define EL_NAME   sec12_ProxyInfoConfirmationData
#define EL_STRUCT zxwsf_sec12_ProxyInfoConfirmationData_s
#define EL_NS     sec12
#define EL_TAG    ProxyInfoConfirmationData

struct zxwsf_sec12_ProxyInfoConfirmationData_s* zxwsf_DEC_sec12_ProxyInfoConfirmationData(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_sec12_ProxyInfoConfirmationData_s* x = ZX_ZALLOC(c, struct zxwsf_sec12_ProxyInfoConfirmationData_s);
  x->gg.g.tok = zxwsf_sec12_ProxyInfoConfirmationData_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_sec12_ProxyInfoConfirmationData_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_id_ATTR:
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_sa11_AssertionIDReference_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->AssertionIDReference->g;
            x->AssertionIDReference = el;
            break;
          case zxwsf_sec12_Issuer_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Issuer->g;
            x->Issuer = el;
            break;
          case zxwsf_sec12_IssueInstant_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->IssueInstant->g;
            x->IssueInstant = el;
            break;
          case zxwsf_ds_Signature_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->Signature->g;
            x->Signature = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_sec12_ResourceAccessStatement) */

#define EL_NAME   sec12_ResourceAccessStatement
#define EL_STRUCT zxwsf_sec12_ResourceAccessStatement_s
#define EL_NS     sec12
#define EL_TAG    ResourceAccessStatement

struct zxwsf_sec12_ResourceAccessStatement_s* zxwsf_DEC_sec12_ResourceAccessStatement(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_sec12_ResourceAccessStatement_s* x = ZX_ZALLOC(c, struct zxwsf_sec12_ResourceAccessStatement_s);
  x->gg.g.tok = zxwsf_sec12_ResourceAccessStatement_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_sec12_ResourceAccessStatement_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_sec12_ProxySubject_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->ProxySubject->g;
            x->ProxySubject = el;
            break;
          case zxwsf_sec12_SessionContext_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_sec12_SessionContext(c);
            el->g.n = &x->SessionContext->gg.g;
            x->SessionContext = (struct zxwsf_sec12_SessionContext_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_sec12_SessionContext) */

#define EL_NAME   sec12_SessionContext
#define EL_STRUCT zxwsf_sec12_SessionContext_s
#define EL_NS     sec12
#define EL_TAG    SessionContext

struct zxwsf_sec12_SessionContext_s* zxwsf_DEC_sec12_SessionContext(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_sec12_SessionContext_s* x = ZX_ZALLOC(c, struct zxwsf_sec12_SessionContext_s);
  x->gg.g.tok = zxwsf_sec12_SessionContext_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_sec12_SessionContext_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_SessionIndex_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->SessionIndex->g;
      x->SessionIndex = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_AuthenticationInstant_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->AuthenticationInstant->g;
      x->AuthenticationInstant = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_AssertionIssueInstant_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->AssertionIssueInstant->g;
      x->AssertionIssueInstant = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_sec12_SessionSubject_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->SessionSubject->g;
            x->SessionSubject = el;
            break;
          case zxwsf_sec12_ProviderID_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->ProviderID->g;
            x->ProviderID = el;
            break;
          case zxwsf_ff12_RequestAuthnContext_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->RequestAuthnContext->g;
            x->RequestAuthnContext = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_sec12_SessionContextStatement) */

#define EL_NAME   sec12_SessionContextStatement
#define EL_STRUCT zxwsf_sec12_SessionContextStatement_s
#define EL_NS     sec12
#define EL_TAG    SessionContextStatement

struct zxwsf_sec12_SessionContextStatement_s* zxwsf_DEC_sec12_SessionContextStatement(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_sec12_SessionContextStatement_s* x = ZX_ZALLOC(c, struct zxwsf_sec12_SessionContextStatement_s);
  x->gg.g.tok = zxwsf_sec12_SessionContextStatement_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_sec12_SessionContextStatement_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_sec12_ProxySubject_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->ProxySubject->g;
            x->ProxySubject = el;
            break;
          case zxwsf_sec12_SessionContext_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_sec12_SessionContext(c);
            el->g.n = &x->SessionContext->gg.g;
            x->SessionContext = (struct zxwsf_sec12_SessionContext_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_sec12_ValidityRestrictionCondition) */

#define EL_NAME   sec12_ValidityRestrictionCondition
#define EL_STRUCT zxwsf_sec12_ValidityRestrictionCondition_s
#define EL_NS     sec12
#define EL_TAG    ValidityRestrictionCondition

struct zxwsf_sec12_ValidityRestrictionCondition_s* zxwsf_DEC_sec12_ValidityRestrictionCondition(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_sec12_ValidityRestrictionCondition_s* x = ZX_ZALLOC(c, struct zxwsf_sec12_ValidityRestrictionCondition_s);
  x->gg.g.tok = zxwsf_sec12_ValidityRestrictionCondition_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_sec12_ValidityRestrictionCondition_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_sec12_NumberOfUses_ELEM:
            el = zxwsf_DEC_simple_elem(c, tok);
            el->g.n = &x->NumberOfUses->g;
            x->NumberOfUses = el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_sec_Token) */

#define EL_NAME   sec_Token
#define EL_STRUCT zxwsf_sec_Token_s
#define EL_NS     sec
#define EL_TAG    Token

struct zxwsf_sec_Token_s* zxwsf_DEC_sec_Token(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_sec_Token_s* x = ZX_ZALLOC(c, struct zxwsf_sec_Token_s);
  x->gg.g.tok = zxwsf_sec_Token_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_sec_Token_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->id->g;
      x->id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_ref_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ref->g;
      x->ref = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_usage_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->usage->g;
      x->usage = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_sec_TokenPolicy) */

#define EL_NAME   sec_TokenPolicy
#define EL_STRUCT zxwsf_sec_TokenPolicy_s
#define EL_NS     sec
#define EL_TAG    TokenPolicy

struct zxwsf_sec_TokenPolicy_s* zxwsf_DEC_sec_TokenPolicy(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_sec_TokenPolicy_s* x = ZX_ZALLOC(c, struct zxwsf_sec_TokenPolicy_s);
  x->gg.g.tok = zxwsf_sec_TokenPolicy_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_sec_TokenPolicy_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_validUntil_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->validUntil->g;
      x->validUntil = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_issueTo_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->issueTo->g;
      x->issueTo = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_type_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->type->g;
      x->type = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_wantDSEPR_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->wantDSEPR->g;
      x->wantDSEPR = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_sec_TransitedProvider) */

#define EL_NAME   sec_TransitedProvider
#define EL_STRUCT zxwsf_sec_TransitedProvider_s
#define EL_NS     sec
#define EL_TAG    TransitedProvider

struct zxwsf_sec_TransitedProvider_s* zxwsf_DEC_sec_TransitedProvider(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_sec_TransitedProvider_s* x = ZX_ZALLOC(c, struct zxwsf_sec_TransitedProvider_s);
  x->gg.g.tok = zxwsf_sec_TransitedProvider_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_sec_TransitedProvider_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_timeStamp_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->timeStamp->g;
      x->timeStamp = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_confirmationURI_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->confirmationURI->g;
      x->confirmationURI = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_sec_TransitedProviderPath) */

#define EL_NAME   sec_TransitedProviderPath
#define EL_STRUCT zxwsf_sec_TransitedProviderPath_s
#define EL_NS     sec
#define EL_TAG    TransitedProviderPath

struct zxwsf_sec_TransitedProviderPath_s* zxwsf_DEC_sec_TransitedProviderPath(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_sec_TransitedProviderPath_s* x = ZX_ZALLOC(c, struct zxwsf_sec_TransitedProviderPath_s);
  x->gg.g.tok = zxwsf_sec_TransitedProviderPath_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_sec_TransitedProviderPath_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_sec_TransitedProvider_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_sec_TransitedProvider(c);
            el->g.n = &x->TransitedProvider->gg.g;
            x->TransitedProvider = (struct zxwsf_sec_TransitedProvider_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_wsse_BinarySecurityToken) */

#define EL_NAME   wsse_BinarySecurityToken
#define EL_STRUCT zxwsf_wsse_BinarySecurityToken_s
#define EL_NS     wsse
#define EL_TAG    BinarySecurityToken

struct zxwsf_wsse_BinarySecurityToken_s* zxwsf_DEC_wsse_BinarySecurityToken(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_wsse_BinarySecurityToken_s* x = ZX_ZALLOC(c, struct zxwsf_wsse_BinarySecurityToken_s);
  x->gg.g.tok = zxwsf_wsse_BinarySecurityToken_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_wsse_BinarySecurityToken_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_wsu_Id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Id->g;
      x->Id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_EncodingType_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->EncodingType->g;
      x->EncodingType = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_ValueType_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ValueType->g;
      x->ValueType = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_wsse_Embedded) */

#define EL_NAME   wsse_Embedded
#define EL_STRUCT zxwsf_wsse_Embedded_s
#define EL_NS     wsse
#define EL_TAG    Embedded

struct zxwsf_wsse_Embedded_s* zxwsf_DEC_wsse_Embedded(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_wsse_Embedded_s* x = ZX_ZALLOC(c, struct zxwsf_wsse_Embedded_s);
  x->gg.g.tok = zxwsf_wsse_Embedded_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_wsse_Embedded_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_ValueType_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ValueType->g;
      x->ValueType = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_wsse_KeyIdentifier) */

#define EL_NAME   wsse_KeyIdentifier
#define EL_STRUCT zxwsf_wsse_KeyIdentifier_s
#define EL_NS     wsse
#define EL_TAG    KeyIdentifier

struct zxwsf_wsse_KeyIdentifier_s* zxwsf_DEC_wsse_KeyIdentifier(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_wsse_KeyIdentifier_s* x = ZX_ZALLOC(c, struct zxwsf_wsse_KeyIdentifier_s);
  x->gg.g.tok = zxwsf_wsse_KeyIdentifier_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_wsse_KeyIdentifier_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_wsu_Id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Id->g;
      x->Id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_EncodingType_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->EncodingType->g;
      x->EncodingType = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_ValueType_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ValueType->g;
      x->ValueType = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_wsse_Nonce) */

#define EL_NAME   wsse_Nonce
#define EL_STRUCT zxwsf_wsse_Nonce_s
#define EL_NS     wsse
#define EL_TAG    Nonce

struct zxwsf_wsse_Nonce_s* zxwsf_DEC_wsse_Nonce(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_wsse_Nonce_s* x = ZX_ZALLOC(c, struct zxwsf_wsse_Nonce_s);
  x->gg.g.tok = zxwsf_wsse_Nonce_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_wsse_Nonce_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_wsu_Id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Id->g;
      x->Id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_EncodingType_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->EncodingType->g;
      x->EncodingType = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_wsse_Password) */

#define EL_NAME   wsse_Password
#define EL_STRUCT zxwsf_wsse_Password_s
#define EL_NS     wsse
#define EL_TAG    Password

struct zxwsf_wsse_Password_s* zxwsf_DEC_wsse_Password(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_wsse_Password_s* x = ZX_ZALLOC(c, struct zxwsf_wsse_Password_s);
  x->gg.g.tok = zxwsf_wsse_Password_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_wsse_Password_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_wsu_Id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Id->g;
      x->Id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_Type_ATTR:
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_wsse_Reference) */

#define EL_NAME   wsse_Reference
#define EL_STRUCT zxwsf_wsse_Reference_s
#define EL_NS     wsse
#define EL_TAG    Reference

struct zxwsf_wsse_Reference_s* zxwsf_DEC_wsse_Reference(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_wsse_Reference_s* x = ZX_ZALLOC(c, struct zxwsf_wsse_Reference_s);
  x->gg.g.tok = zxwsf_wsse_Reference_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_wsse_Reference_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_URI_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->URI->g;
      x->URI = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_ValueType_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->ValueType->g;
      x->ValueType = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_wsse_Security) */

#define EL_NAME   wsse_Security
#define EL_STRUCT zxwsf_wsse_Security_s
#define EL_NS     wsse
#define EL_TAG    Security

struct zxwsf_wsse_Security_s* zxwsf_DEC_wsse_Security(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_wsse_Security_s* x = ZX_ZALLOC(c, struct zxwsf_wsse_Security_s);
  x->gg.g.tok = zxwsf_wsse_Security_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_wsse_Security_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_wsse_SecurityTokenReference) */

#define EL_NAME   wsse_SecurityTokenReference
#define EL_STRUCT zxwsf_wsse_SecurityTokenReference_s
#define EL_NS     wsse
#define EL_TAG    SecurityTokenReference

struct zxwsf_wsse_SecurityTokenReference_s* zxwsf_DEC_wsse_SecurityTokenReference(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_wsse_SecurityTokenReference_s* x = ZX_ZALLOC(c, struct zxwsf_wsse_SecurityTokenReference_s);
  x->gg.g.tok = zxwsf_wsse_SecurityTokenReference_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_wsse_SecurityTokenReference_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_wsu_Id_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Id->g;
      x->Id = ss;
      ZX_ATTR_DEC_EXT(ss);
      break;
    case zxwsf_wsse_Usage_ATTR:
      ss = ZX_ZALLOC(c, struct zx_str_s);
      ss->g.n = &x->Usage->g;
      x->Usage = ss;
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_wsse_TransformationParameters) */

#define EL_NAME   wsse_TransformationParameters
#define EL_STRUCT zxwsf_wsse_TransformationParameters_s
#define EL_NS     wsse
#define EL_TAG    TransformationParameters

struct zxwsf_wsse_TransformationParameters_s* zxwsf_DEC_wsse_TransformationParameters(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_wsse_TransformationParameters_s* x = ZX_ZALLOC(c, struct zxwsf_wsse_TransformationParameters_s);
  x->gg.g.tok = zxwsf_wsse_TransformationParameters_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_wsse_TransformationParameters_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_wsse_Username) */

#define EL_NAME   wsse_Username
#define EL_STRUCT zxwsf_wsse_Username_s
#define EL_NS     wsse
#define EL_TAG    Username

struct zxwsf_wsse_Username_s* zxwsf_DEC_wsse_Username(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_wsse_Username_s* x = ZX_ZALLOC(c, struct zxwsf_wsse_Username_s);
  x->gg.g.tok = zxwsf_wsse_Username_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_wsse_Username_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_wsu_Id_ATTR:
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_wsse_UsernameToken) */

#define EL_NAME   wsse_UsernameToken
#define EL_STRUCT zxwsf_wsse_UsernameToken_s
#define EL_NS     wsse
#define EL_TAG    UsernameToken

struct zxwsf_wsse_UsernameToken_s* zxwsf_DEC_wsse_UsernameToken(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_wsse_UsernameToken_s* x = ZX_ZALLOC(c, struct zxwsf_wsse_UsernameToken_s);
  x->gg.g.tok = zxwsf_wsse_UsernameToken_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_wsse_UsernameToken_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_wsu_Id_ATTR:
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_wsse_Username_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_wsse_Username(c);
            el->g.n = &x->Username->gg.g;
            x->Username = (struct zxwsf_wsse_Username_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_wsu_Created) */

#define EL_NAME   wsu_Created
#define EL_STRUCT zxwsf_wsu_Created_s
#define EL_NS     wsu
#define EL_TAG    Created

struct zxwsf_wsu_Created_s* zxwsf_DEC_wsu_Created(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_wsu_Created_s* x = ZX_ZALLOC(c, struct zxwsf_wsu_Created_s);
  x->gg.g.tok = zxwsf_wsu_Created_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_wsu_Created_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_wsu_Id_ATTR:
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_wsu_Expires) */

#define EL_NAME   wsu_Expires
#define EL_STRUCT zxwsf_wsu_Expires_s
#define EL_NS     wsu
#define EL_TAG    Expires

struct zxwsf_wsu_Expires_s* zxwsf_DEC_wsu_Expires(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_wsu_Expires_s* x = ZX_ZALLOC(c, struct zxwsf_wsu_Expires_s);
  x->gg.g.tok = zxwsf_wsu_Expires_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_wsu_Expires_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_wsu_Id_ATTR:
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_wsu_Timestamp) */

#define EL_NAME   wsu_Timestamp
#define EL_STRUCT zxwsf_wsu_Timestamp_s
#define EL_NS     wsu
#define EL_TAG    Timestamp

struct zxwsf_wsu_Timestamp_s* zxwsf_DEC_wsu_Timestamp(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_wsu_Timestamp_s* x = ZX_ZALLOC(c, struct zxwsf_wsu_Timestamp_s);
  x->gg.g.tok = zxwsf_wsu_Timestamp_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_wsu_Timestamp_ELEM].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
    switch (tok) {
    case zxwsf_wsu_Id_ATTR:
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_wsu_Created_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_wsu_Created(c);
            el->g.n = &x->Created->gg.g;
            x->Created = (struct zxwsf_wsu_Created_s*)el;
            break;
          case zxwsf_wsu_Expires_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_wsu_Expires(c);
            el->g.n = &x->Expires->gg.g;
            x->Expires = (struct zxwsf_wsu_Expires_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_root) */

#define EL_NAME   root
#define EL_STRUCT zxwsf_root_s
#define EL_NS     
#define EL_TAG    root

struct zxwsf_root_s* zxwsf_DEC_root(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct zxwsf_root_s* x = ZX_ZALLOC(c, struct zxwsf_root_s);
  x->gg.g.tok = zxwsf_root_ELEM;
  x->gg.g.ns = zxwsf_elems[zxwsf_root_ELEM].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {
          case zxwsf_e_Envelope_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_e_Envelope(c);
            el->g.n = &x->Envelope->gg.g;
            x->Envelope = (struct zxwsf_e_Envelope_s*)el;
            if (--x->gg.g.tok) break; else { x->gg.g.tok = tok; return x; };
          case zxwsf_dise_Envelope_ELEM:
            el = (struct zx_elem_s*)zxwsf_DEC_dise_Envelope(c);
            el->g.n = &x->dise_Envelope->gg.g;
            x->dise_Envelope = (struct zxwsf_dise_Envelope_s*)el;
            if (--x->gg.g.tok) break; else { x->gg.g.tok = tok; return x; };

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_simple_elem) */

#define EL_NAME   simple_elem
#define EL_STRUCT zx_elem_s
#define EL_NS     
#define EL_TAG    simple_elem

struct zx_elem_s* zxwsf_DEC_simple_elem(struct zx_ctx* c, int toke)
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
  x->g.ns = zxwsf_elems[toke].ns;
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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






/* FUNC(zxwsf_DEC_wrong_elem) */

#define EL_NAME   wrong_elem
#define EL_STRUCT zx_any_elem_s
#define EL_NS     
#define EL_TAG    wrong_elem

struct zx_any_elem_s* zxwsf_DEC_wrong_elem(struct zx_ctx* c, char* nam, int namlen)
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
    
    tok = zxwsf_attr_lookup(c, name, data-2);
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
    ss->g.ns = zxwsf_attrs[tok].ns;
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
	tok = zxwsf_elem_lookup(c, name, c->p);
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
	  tok = zxwsf_elem_lookup(c, name, c->p);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = zxwsf_DEC_wrong_elem(c, name, c->p - name);
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

/* FUNC(zxwsf_attr_lookup) */

/* Tokenize a string.
 * Lookup functions to convert a namespace qualified string to integer token.
 * One of each (attr and elem) is needed for every prefix used in code generation.
 * The ...2tok() functions come from code generation via gperf. */

int zxwsf_attr_lookup(struct zx_ctx* c, char* name, char* lim)
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
  zt = zxwsf_attr2tok(name, lim-name);
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
      return ztt - zxwsf_attrs;
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
  return zt - zxwsf_attrs;
}

/* FUNC(zxwsf_elem_lookup) */

int zxwsf_elem_lookup(struct zx_ctx* c, char* name, char* lim)
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
  zt = zxwsf_elem2tok(name, lim-name);
  if (!zt)
    return ZX_TOK_NOT_FOUND;
  
  /* The token hash can have duplicate entries (see -D flag to gperf). We differentiate
   * between them by looking at the namespace prefix. If none of the tokens in the
   * table match the namespace, we pick the first one (which, given hashing, is
   * difficult to predict and should not be depended on), whether it's right or wrong. */
  
  for (ztt = zt; ; ++ztt) {
    if (zx_is_ns_prefix(ztt->ns, prefix ? (name-1)-prefix : 0, prefix))
      return ztt - zxwsf_elems;
    /* *** Following check can overflow the token table if zt is already last. Usually
     * token table is followed by other constant tables so this should not be
     * a problem. Easiest fix would be to add to toke table a trailer element,
     * but that would mean altering gperf or sedding its output. */
    if (memcmp(ztt[1].name, name, lim-name))
      break;
  }
  D("No matching namespace found for elem(%.*s:%.*s)", prefix ? (name-1)-prefix : 0, prefix, lim-name, name);
  return zt - zxwsf_elems;
}

/* EOF -- c/wsf-dec.c */
