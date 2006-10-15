/* c/zx-dise-dec.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
 ** Id: dec-templ.c,v 1.19 2006/09/30 06:24:49 sampo Exp $
 **
 ** 28.5.2006, created, Sampo Kellomaki (sampo@iki.fi)
 ** 8.8.2006,  reworked namespace handling --Sampo
 ** 12.8.2006, added special scanning of xmlns to avoid backtracking elem recognition --Sampo
 ** 23.9.2006, added collection of WO information --Sampo
 **
 ** N.B: This template is meant to be processed by pd/xsd2sg.pl. Beware
 ** of special markers that xsd2sg.pl expects to find and understand.
 **/

#include "errmac.h"
#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"
#include "c/zx-dise-data.h"

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



/* FUNC(zx_DEC_dise_Body) */

#define EL_NAME   dise_Body
#define EL_STRUCT zx_dise_Body_s
#define EL_NS     dise
#define EL_TAG    Body

struct zx_dise_Body_s* zx_DEC_dise_Body(struct zx_ctx* c, struct zx_ns_s* ns )
{
  int tok;
  struct zx_elem_s* iternode;
  struct zx_elem_s* el;
  struct zx_str* ss;
  struct zx_any_attr_s* attr;
  struct zx_ns_s* pop_seen;
  char* name;
  char* data;
  char quote;
  struct zx_dise_Body_s* x = ZX_ZALLOC(c, struct zx_dise_Body_s);
  x->gg.g.tok = zx_dise_Body_ELEM;
  x->gg.g.ns = ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zx_attr_lookup(c, name, data-2, &ns);
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
    ss->g.ns = ns;
set_attr_val:
    ss->g.tok = tok;
    ss->g.err |= ZXERR_ATTR_FLAG;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    goto out;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zx_elem_lookup(c, name, c->p, &ns);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	goto out;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  pop_seen = zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zx_elem_lookup(c, name, c->p, &ns);
	  switch (tok) {
          case zx_di_SvcMDAssociationAdd_ELEM:
            el = (struct zx_elem_s*)zx_DEC_di_SvcMDAssociationAdd(c, ns);
            el->g.n = &x->SvcMDAssociationAdd->gg.g;
            x->SvcMDAssociationAdd = (struct zx_di_SvcMDAssociationAdd_s*)el;
            break;
          case zx_di_SvcMDAssociationAddResponse_ELEM:
            el = (struct zx_elem_s*)zx_DEC_di_SvcMDAssociationAddResponse(c, ns);
            el->g.n = &x->SvcMDAssociationAddResponse->gg.g;
            x->SvcMDAssociationAddResponse = (struct zx_di_SvcMDAssociationAddResponse_s*)el;
            break;
          case zx_di_SvcMDAssociationDelete_ELEM:
            el = (struct zx_elem_s*)zx_DEC_di_SvcMDAssociationDelete(c, ns);
            el->g.n = &x->SvcMDAssociationDelete->gg.g;
            x->SvcMDAssociationDelete = (struct zx_di_SvcMDAssociationDelete_s*)el;
            break;
          case zx_di_SvcMDAssociationDeleteResponse_ELEM:
            el = (struct zx_elem_s*)zx_DEC_di_SvcMDAssociationDeleteResponse(c, ns);
            el->g.n = &x->SvcMDAssociationDeleteResponse->gg.g;
            x->SvcMDAssociationDeleteResponse = (struct zx_di_SvcMDAssociationDeleteResponse_s*)el;
            break;
          case zx_di_SvcMDAssociationQuery_ELEM:
            el = (struct zx_elem_s*)zx_DEC_di_SvcMDAssociationQuery(c, ns);
            el->g.n = &x->SvcMDAssociationQuery->gg.g;
            x->SvcMDAssociationQuery = (struct zx_di_SvcMDAssociationQuery_s*)el;
            break;
          case zx_di_SvcMDAssociationQueryResponse_ELEM:
            el = (struct zx_elem_s*)zx_DEC_di_SvcMDAssociationQueryResponse(c, ns);
            el->g.n = &x->SvcMDAssociationQueryResponse->gg.g;
            x->SvcMDAssociationQueryResponse = (struct zx_di_SvcMDAssociationQueryResponse_s*)el;
            break;
          case zx_di_SvcMDRegister_ELEM:
            el = (struct zx_elem_s*)zx_DEC_di_SvcMDRegister(c, ns);
            el->g.n = &x->SvcMDRegister->gg.g;
            x->SvcMDRegister = (struct zx_di_SvcMDRegister_s*)el;
            break;
          case zx_di_SvcMDRegisterResponse_ELEM:
            el = (struct zx_elem_s*)zx_DEC_di_SvcMDRegisterResponse(c, ns);
            el->g.n = &x->SvcMDRegisterResponse->gg.g;
            x->SvcMDRegisterResponse = (struct zx_di_SvcMDRegisterResponse_s*)el;
            break;
          case zx_di_SvcMDDelete_ELEM:
            el = (struct zx_elem_s*)zx_DEC_di_SvcMDDelete(c, ns);
            el->g.n = &x->SvcMDDelete->gg.g;
            x->SvcMDDelete = (struct zx_di_SvcMDDelete_s*)el;
            break;
          case zx_di_SvcMDDeleteResponse_ELEM:
            el = (struct zx_elem_s*)zx_DEC_di_SvcMDDeleteResponse(c, ns);
            el->g.n = &x->SvcMDDeleteResponse->gg.g;
            x->SvcMDDeleteResponse = (struct zx_di_SvcMDDeleteResponse_s*)el;
            break;
          case zx_di_SvcMDQuery_ELEM:
            el = (struct zx_elem_s*)zx_DEC_di_SvcMDQuery(c, ns);
            el->g.n = &x->SvcMDQuery->gg.g;
            x->SvcMDQuery = (struct zx_di_SvcMDQuery_s*)el;
            break;
          case zx_di_SvcMDQueryResponse_ELEM:
            el = (struct zx_elem_s*)zx_DEC_di_SvcMDQueryResponse(c, ns);
            el->g.n = &x->SvcMDQueryResponse->gg.g;
            x->SvcMDQueryResponse = (struct zx_di_SvcMDQueryResponse_s*)el;
            break;
          case zx_di_SvcMDReplace_ELEM:
            el = (struct zx_elem_s*)zx_DEC_di_SvcMDReplace(c, ns);
            el->g.n = &x->SvcMDReplace->gg.g;
            x->SvcMDReplace = (struct zx_di_SvcMDReplace_s*)el;
            break;
          case zx_di_SvcMDReplaceResponse_ELEM:
            el = (struct zx_elem_s*)zx_DEC_di_SvcMDReplaceResponse(c, ns);
            el->g.n = &x->SvcMDReplaceResponse->gg.g;
            x->SvcMDReplaceResponse = (struct zx_di_SvcMDReplaceResponse_s*)el;
            break;
          case zx_dise_Fault_ELEM:
            el = (struct zx_elem_s*)zx_DEC_dise_Fault(c, ns);
            el->g.n = &x->Fault->gg.g;
            x->Fault = (struct zx_dise_Fault_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    el = (struct zx_elem_s*)zx_DEC_wrong_elem(c, ns, name, c->p - name);
	    el->g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = (struct zx_any_elem_s*)el;
	    ZX_UNKNOWN_ELEM_DEC_EXT(el);
	    break;
	  }
          el->g.wo = &x->gg.kids->g;
          x->gg.kids = el;
	  zx_pop_seen(pop_seen);
	  
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ss->g.wo = &x->gg.kids->g;
    x->gg.kids = (struct zx_elem_s*)ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
 out:
  iternode = x->gg.kids;
  REVERSE_LIST_NEXT(x->gg.kids, iternode, g.wo);
  ZX_END_DEC_EXT(x);
  return x;
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zx_DEC_dise_Envelope) */

#define EL_NAME   dise_Envelope
#define EL_STRUCT zx_dise_Envelope_s
#define EL_NS     dise
#define EL_TAG    Envelope

struct zx_dise_Envelope_s* zx_DEC_dise_Envelope(struct zx_ctx* c, struct zx_ns_s* ns )
{
  int tok;
  struct zx_elem_s* iternode;
  struct zx_elem_s* el;
  struct zx_str* ss;
  struct zx_any_attr_s* attr;
  struct zx_ns_s* pop_seen;
  char* name;
  char* data;
  char quote;
  struct zx_dise_Envelope_s* x = ZX_ZALLOC(c, struct zx_dise_Envelope_s);
  x->gg.g.tok = zx_dise_Envelope_ELEM;
  x->gg.g.ns = ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zx_attr_lookup(c, name, data-2, &ns);
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
    ss->g.ns = ns;
set_attr_val:
    ss->g.tok = tok;
    ss->g.err |= ZXERR_ATTR_FLAG;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    goto out;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zx_elem_lookup(c, name, c->p, &ns);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	goto out;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  pop_seen = zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zx_elem_lookup(c, name, c->p, &ns);
	  switch (tok) {
          case zx_dise_Header_ELEM:
            el = (struct zx_elem_s*)zx_DEC_dise_Header(c, ns);
            el->g.n = &x->Header->gg.g;
            x->Header = (struct zx_dise_Header_s*)el;
            break;
          case zx_dise_Body_ELEM:
            el = (struct zx_elem_s*)zx_DEC_dise_Body(c, ns);
            el->g.n = &x->Body->gg.g;
            x->Body = (struct zx_dise_Body_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    el = (struct zx_elem_s*)zx_DEC_wrong_elem(c, ns, name, c->p - name);
	    el->g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = (struct zx_any_elem_s*)el;
	    ZX_UNKNOWN_ELEM_DEC_EXT(el);
	    break;
	  }
          el->g.wo = &x->gg.kids->g;
          x->gg.kids = el;
	  zx_pop_seen(pop_seen);
	  
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ss->g.wo = &x->gg.kids->g;
    x->gg.kids = (struct zx_elem_s*)ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
 out:
  iternode = x->gg.kids;
  REVERSE_LIST_NEXT(x->gg.kids, iternode, g.wo);
  ZX_END_DEC_EXT(x);
  return x;
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zx_DEC_dise_Fault) */

#define EL_NAME   dise_Fault
#define EL_STRUCT zx_dise_Fault_s
#define EL_NS     dise
#define EL_TAG    Fault

struct zx_dise_Fault_s* zx_DEC_dise_Fault(struct zx_ctx* c, struct zx_ns_s* ns )
{
  int tok;
  struct zx_elem_s* iternode;
  struct zx_elem_s* el;
  struct zx_str* ss;
  struct zx_any_attr_s* attr;
  struct zx_ns_s* pop_seen;
  char* name;
  char* data;
  char quote;
  struct zx_dise_Fault_s* x = ZX_ZALLOC(c, struct zx_dise_Fault_s);
  x->gg.g.tok = zx_dise_Fault_ELEM;
  x->gg.g.ns = ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zx_attr_lookup(c, name, data-2, &ns);
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
    ss->g.ns = ns;
set_attr_val:
    ss->g.tok = tok;
    ss->g.err |= ZXERR_ATTR_FLAG;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    goto out;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zx_elem_lookup(c, name, c->p, &ns);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	goto out;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  pop_seen = zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zx_elem_lookup(c, name, c->p, &ns);
	  switch (tok) {
          case zx_dise_faultcode_ELEM:
            el = zx_DEC_simple_elem(c, ns, tok);
            el->g.n = &x->faultcode->g;
            x->faultcode = el;
            break;
          case zx_dise_faultstring_ELEM:
            el = zx_DEC_simple_elem(c, ns, tok);
            el->g.n = &x->faultstring->g;
            x->faultstring = el;
            break;
          case zx_dise_faultactor_ELEM:
            el = zx_DEC_simple_elem(c, ns, tok);
            el->g.n = &x->faultactor->g;
            x->faultactor = el;
            break;
          case zx_dise_detail_ELEM:
            el = (struct zx_elem_s*)zx_DEC_dise_detail(c, ns);
            el->g.n = &x->detail->gg.g;
            x->detail = (struct zx_dise_detail_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    el = (struct zx_elem_s*)zx_DEC_wrong_elem(c, ns, name, c->p - name);
	    el->g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = (struct zx_any_elem_s*)el;
	    ZX_UNKNOWN_ELEM_DEC_EXT(el);
	    break;
	  }
          el->g.wo = &x->gg.kids->g;
          x->gg.kids = el;
	  zx_pop_seen(pop_seen);
	  
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ss->g.wo = &x->gg.kids->g;
    x->gg.kids = (struct zx_elem_s*)ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
 out:
  iternode = x->gg.kids;
  REVERSE_LIST_NEXT(x->gg.kids, iternode, g.wo);
  ZX_END_DEC_EXT(x);
  return x;
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zx_DEC_dise_Header) */

#define EL_NAME   dise_Header
#define EL_STRUCT zx_dise_Header_s
#define EL_NS     dise
#define EL_TAG    Header

struct zx_dise_Header_s* zx_DEC_dise_Header(struct zx_ctx* c, struct zx_ns_s* ns )
{
  int tok;
  struct zx_elem_s* iternode;
  struct zx_elem_s* el;
  struct zx_str* ss;
  struct zx_any_attr_s* attr;
  struct zx_ns_s* pop_seen;
  char* name;
  char* data;
  char quote;
  struct zx_dise_Header_s* x = ZX_ZALLOC(c, struct zx_dise_Header_s);
  x->gg.g.tok = zx_dise_Header_ELEM;
  x->gg.g.ns = ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zx_attr_lookup(c, name, data-2, &ns);
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
    ss->g.ns = ns;
set_attr_val:
    ss->g.tok = tok;
    ss->g.err |= ZXERR_ATTR_FLAG;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    goto out;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zx_elem_lookup(c, name, c->p, &ns);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	goto out;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  pop_seen = zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zx_elem_lookup(c, name, c->p, &ns);
	  switch (tok) {
          case zx_a_MessageID_ELEM:
            el = (struct zx_elem_s*)zx_DEC_a_MessageID(c, ns);
            el->g.n = &x->MessageID->gg.g;
            x->MessageID = (struct zx_a_MessageID_s*)el;
            break;
          case zx_a_RelatesTo_ELEM:
            el = (struct zx_elem_s*)zx_DEC_a_RelatesTo(c, ns);
            el->g.n = &x->RelatesTo->gg.g;
            x->RelatesTo = (struct zx_a_RelatesTo_s*)el;
            break;
          case zx_a_ReplyTo_ELEM:
            el = (struct zx_elem_s*)zx_DEC_a_ReplyTo(c, ns);
            el->g.n = &x->ReplyTo->gg.g;
            x->ReplyTo = (struct zx_a_ReplyTo_s*)el;
            break;
          case zx_a_From_ELEM:
            el = (struct zx_elem_s*)zx_DEC_a_From(c, ns);
            el->g.n = &x->From->gg.g;
            x->From = (struct zx_a_From_s*)el;
            break;
          case zx_a_FaultTo_ELEM:
            el = (struct zx_elem_s*)zx_DEC_a_FaultTo(c, ns);
            el->g.n = &x->FaultTo->gg.g;
            x->FaultTo = (struct zx_a_FaultTo_s*)el;
            break;
          case zx_a_To_ELEM:
            el = (struct zx_elem_s*)zx_DEC_a_To(c, ns);
            el->g.n = &x->To->gg.g;
            x->To = (struct zx_a_To_s*)el;
            break;
          case zx_a_Action_ELEM:
            el = (struct zx_elem_s*)zx_DEC_a_Action(c, ns);
            el->g.n = &x->Action->gg.g;
            x->Action = (struct zx_a_Action_s*)el;
            break;
          case zx_sbf_Framework_ELEM:
            el = (struct zx_elem_s*)zx_DEC_sbf_Framework(c, ns);
            el->g.n = &x->Framework->gg.g;
            x->Framework = (struct zx_sbf_Framework_s*)el;
            break;
          case zx_b_Framework_ELEM:
            el = (struct zx_elem_s*)zx_DEC_b_Framework(c, ns);
            el->g.n = &x->b_Framework->gg.g;
            x->b_Framework = (struct zx_b_Framework_s*)el;
            break;
          case zx_b_Sender_ELEM:
            el = (struct zx_elem_s*)zx_DEC_b_Sender(c, ns);
            el->g.n = &x->Sender->gg.g;
            x->Sender = (struct zx_b_Sender_s*)el;
            break;
          case zx_b_CredentialsContext_ELEM:
            el = (struct zx_elem_s*)zx_DEC_b_CredentialsContext(c, ns);
            el->g.n = &x->CredentialsContext->gg.g;
            x->CredentialsContext = (struct zx_b_CredentialsContext_s*)el;
            break;
          case zx_b_EndpointUpdate_ELEM:
            el = (struct zx_elem_s*)zx_DEC_b_EndpointUpdate(c, ns);
            el->g.n = &x->EndpointUpdate->gg.g;
            x->EndpointUpdate = (struct zx_b_EndpointUpdate_s*)el;
            break;
          case zx_b_Timeout_ELEM:
            el = zx_DEC_simple_elem(c, ns, tok);
            el->g.n = &x->Timeout->g;
            x->Timeout = el;
            break;
          case zx_b_ProcessingContext_ELEM:
            el = (struct zx_elem_s*)zx_DEC_b_ProcessingContext(c, ns);
            el->g.n = &x->ProcessingContext->gg.g;
            x->ProcessingContext = (struct zx_b_ProcessingContext_s*)el;
            break;
          case zx_b_ApplicationEPR_ELEM:
            el = (struct zx_elem_s*)zx_DEC_b_ApplicationEPR(c, ns);
            el->g.n = &x->ApplicationEPR->gg.g;
            x->ApplicationEPR = (struct zx_b_ApplicationEPR_s*)el;
            break;
          case zx_b_RedirectRequest_ELEM:
            el = (struct zx_elem_s*)zx_DEC_b_RedirectRequest(c, ns);
            el->g.n = &x->RedirectRequest->gg.g;
            x->RedirectRequest = (struct zx_b_RedirectRequest_s*)el;
            break;

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    el = (struct zx_elem_s*)zx_DEC_wrong_elem(c, ns, name, c->p - name);
	    el->g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = (struct zx_any_elem_s*)el;
	    ZX_UNKNOWN_ELEM_DEC_EXT(el);
	    break;
	  }
          el->g.wo = &x->gg.kids->g;
          x->gg.kids = el;
	  zx_pop_seen(pop_seen);
	  
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ss->g.wo = &x->gg.kids->g;
    x->gg.kids = (struct zx_elem_s*)ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
 out:
  iternode = x->gg.kids;
  REVERSE_LIST_NEXT(x->gg.kids, iternode, g.wo);
  ZX_END_DEC_EXT(x);
  return x;
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG






/* FUNC(zx_DEC_dise_detail) */

#define EL_NAME   dise_detail
#define EL_STRUCT zx_dise_detail_s
#define EL_NS     dise
#define EL_TAG    detail

struct zx_dise_detail_s* zx_DEC_dise_detail(struct zx_ctx* c, struct zx_ns_s* ns )
{
  int tok;
  struct zx_elem_s* iternode;
  struct zx_elem_s* el;
  struct zx_str* ss;
  struct zx_any_attr_s* attr;
  struct zx_ns_s* pop_seen;
  char* name;
  char* data;
  char quote;
  struct zx_dise_detail_s* x = ZX_ZALLOC(c, struct zx_dise_detail_s);
  x->gg.g.tok = zx_dise_detail_ELEM;
  x->gg.g.ns = ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = zx_attr_lookup(c, name, data-2, &ns);
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
    ss->g.ns = ns;
set_attr_val:
    ss->g.tok = tok;
    ss->g.err |= ZXERR_ATTR_FLAG;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    goto out;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = zx_elem_lookup(c, name, c->p, &ns);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	goto out;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  pop_seen = zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = zx_elem_lookup(c, name, c->p, &ns);
	  switch (tok) {

	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    el = (struct zx_elem_s*)zx_DEC_wrong_elem(c, ns, name, c->p - name);
	    el->g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = (struct zx_any_elem_s*)el;
	    ZX_UNKNOWN_ELEM_DEC_EXT(el);
	    break;
	  }
          el->g.wo = &x->gg.kids->g;
          x->gg.kids = el;
	  zx_pop_seen(pop_seen);
	  
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ss->g.wo = &x->gg.kids->g;
    x->gg.kids = (struct zx_elem_s*)ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
 out:
  iternode = x->gg.kids;
  REVERSE_LIST_NEXT(x->gg.kids, iternode, g.wo);
  ZX_END_DEC_EXT(x);
  return x;
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG




/* EOF -- c/zx-dise-dec.c */
