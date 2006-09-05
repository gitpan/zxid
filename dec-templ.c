/** dec-templ.c  -  XML decoder template, used in code generation
 ** Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing. See file COPYING.
 ** $Id: dec-templ.c,v 1.13 2006/08/28 05:23:23 sampo Exp $
 **
 ** 28.5.2006, created, Sampo Kellomaki (sampo@iki.fi)
 ** 8.8.2006,  reworked namespace handling --Sampo
 ** 12.8.2006, added special scanning of xmlns to avoid backtracking elem recognition --Sampo
 **/

/* FUNC(TXDEC_ELNAME) */

#define EL_NAME   ELNAME
#define EL_STRUCT ELSTRUCT
#define EL_NS     ELNS
#define EL_TAG    ELTAG

struct ELSTRUCT* TXDEC_ELNAME(struct zx_ctx* c)
{
  int tok;
  struct zx_elem_s* el;
  struct zx_str_s* ss;
  struct zx_any_attr_s* attr;
  struct zx_any_elem_s* elem;
  char* name;
  char* data;
  char quote;
  struct ELSTRUCT* x = ZX_ZALLOC(c, struct ELSTRUCT);
  x->gg.g.tok = TXELNAME_ELEM;
  x->gg.g.ns = TXelems[TXELNAME_ELEM].ns;
  ZX_START_DEC_EXT(x);

#if 1 /* NORMALMODE */
  x->gg.g.err |= ZXERR_TAG_NOT_CLOSED;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for (; 1; ++c->p) {
    ZX_SKIP_WS(c,x);
    if (ONE_OF_2(*c->p, '>', '/'))
      break;
    name = c->p;
    ZX_LOOK_FOR(c,'=',x);
    
    ++c->p;
    if (!ONE_OF_2(*c->p, '"', '\''))
      return 0;
    quote = *c->p;
    ++c->p;
    data = c->p;	
    
    ZX_LOOK_FOR(c,quote,x);
    
    tok = TXattr_lookup(c, name, data-2);
    switch (tok) {
ATTRS;
    case ZX_TOK_XMLNS:
      ZX_XMLNS_DEC_EXT(ss);
      goto next_attr;
    default:
      D("known attribute(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
      tok = ZX_TOK_NOT_FOUND;
      /* fall thru to classify it as anyAttr extension */
    case ZX_TOK_NOT_FOUND:
      attr = ZX_ZALLOC(c, struct zx_any_attr_s);
      attr->name_len = data - name - 2;
      attr->name = name;
      attr->ss.g.n = &x->gg.any_attr->ss.g;
      x->gg.any_attr = attr;
      ss = &attr->ss;
      /* *** namespace handling for unknown element? */
      ZX_UNKNOWN_ATTR_DEC_EXT(attr);
      goto set_attr_val;
    }
    ss->g.ns = TXattrs[tok].ns;
set_attr_val:
    ss->g.tok = tok;
    ss->len = c->p - data;
    ss->s = data;
next_attr:
    continue;
  }
  ++c->p;
  if (c->p[-1] == '/' && c->p[0] == '>') {  /* Tag without content */
    ++c->p;
    x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
    ZX_END_DEC_EXT(x);
    return x;
  }
#endif

  /* Process contents until '</' */
  
  ZX_START_BODY_DEC_EXT(x);
  
  while (1) {
  next_elem:
    ZX_SKIP_WS(c,x);
    if (*c->p == '<') {
    potential_tag:
      ++c->p;
      switch (*c->p) {
      case '?':  /* processing instruction */
	ERR("Processing instructions not supported. %d",0);
	ZX_PI_DEC_EXT(pi);
	return 0;
      case '!':  /* comment */
	ERR("Comments not supported. %d",0);
	ZX_COMMENT_DEC_EXT(comment);
	return 0;
      case '/':  /* close tag */
	++c->p;
	name = c->p;
	ZX_LOOK_FOR(c,'>',x);
	tok = TXelem_lookup(c, name, c->p);
	if (tok != x->gg.g.tok) {
	  ERR("Mismatching close tag(%.*s)", c->p-name, name);
	  x->gg.g.err |= ZXERR_MISMATCH_CLOSE;
	  ++c->p;
	  return x;
	}
	/* Legitimate close tag. Normal exit from this function. */
	++c->p;
	x->gg.g.err &= ~ZXERR_TAG_NOT_CLOSED;
	ZX_END_DEC_EXT(x);
	return x;
      default:
	if (A_Z_a_z_(*c->p)) {
	  name = c->p;
	  for (++c->p; *c->p && !ONE_OF_6(*c->p, ' ', '>', '/', '\n', '\r', '\t'); ++c->p) ;
	  if (!c->p)
	    return 0;
	  zx_scan_xmlns(c);  /* Prescan namespaces so that token can be correctly recognized. */
	  tok = TXelem_lookup(c, name, c->p);
	  switch (tok) {
ELEMS;
	  default:
	    D("known element(%.*s) tok(%d) in wrong context(%d)", c->p - name, name, tok, x->gg.g.tok);
	    tok = ZX_TOK_NOT_FOUND;
	    /* fall thru to classify it as any extension */
	  case ZX_TOK_NOT_FOUND:
	    elem = TXDEC_wrong_elem(c, name, c->p - name);
	    elem->gg.g.n = &x->gg.any_elem->gg.g;
	    x->gg.any_elem = elem;
	    ZX_UNKNOWN_ELEM_DEC_EXT(elem);
	    break;
	  }
	  goto next_elem;
	}
      }
      /* false alarm <, fall thru */
    }
    /* Data */
    name = c->p;
    ZX_LOOK_FOR(c,'<',x);
    ss = ZX_ZALLOC(c, struct zx_str_s);
    ss->len = c->p - name;
    ss->s = name;
    ss->g.tok = ZX_TOK_DATA;
    ss->g.n = &x->gg.content->g;
    x->gg.content = ss;
    ZX_CONTENT_DEC(ss);
    goto potential_tag;
  }
}

#undef EL_NAME
#undef EL_STRUCT
#undef EL_NS
#undef EL_TAG

#if 1 /* DEC_LOOKUP_SUBTEMPL */

/* This subtemplate is only expanded once (i.e. not per element) */

/* FUNC(TXattr_lookup) */

/* Tokenize a string.
 * Lookup functions to convert a namespace qualified string to integer token.
 * One of each (attr and elem) is needed for every prefix used in code generation.
 * The ...2tok() functions come from code generation via gperf. */

int TXattr_lookup(struct zx_ctx* c, char* name, char* lim)
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
  zt = TXattr2tok(name, lim-name);
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
      return ztt - TXattrs;
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
  return zt - TXattrs;
}

/* FUNC(TXelem_lookup) */

int TXelem_lookup(struct zx_ctx* c, char* name, char* lim)
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
  zt = TXelem2tok(name, lim-name);
  if (!zt)
    return ZX_TOK_NOT_FOUND;
  
  /* The token hash can have duplicate entries (see -D flag to gperf). We differentiate
   * between them by looking at the namespace prefix. If none of the tokens in the
   * table match the namespace, we pick the first one (which, given hashing, is
   * difficult to predict and should not be depended on), whether it's right or wrong. */
  
  for (ztt = zt; ; ++ztt) {
    if (zx_is_ns_prefix(ztt->ns, prefix ? (name-1)-prefix : 0, prefix))
      return ztt - TXelems;
    /* *** Following check can overflow the token table if zt is already last. Usually
     * token table is followed by other constant tables so this should not be
     * a problem. Easiest fix would be to add to toke table a trailer element,
     * but that would mean altering gperf or sedding its output. */
    if (memcmp(ztt[1].name, name, lim-name))
      break;
  }
  D("No matching namespace found for elem(%.*s:%.*s)", prefix ? (name-1)-prefix : 0, prefix, lim-name, name);
  return zt - TXelems;
}

#endif

/* EOF */
