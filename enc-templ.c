/** enc-templ.c  -  XML encoder template, used in code generation
 ** Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing. See file COPYING.
 ** $Id: enc-templ.c,v 1.21 2006/10/01 19:35:50 sampo Exp $
 **
 ** 30.5.2006, created, Sampo Kellomaki (sampo@iki.fi)
 ** 6.8.2006,  factored data structure walking to aux-templ.c --Sampo
 ** 8.8.2006,  reworked namespace handling --Sampo
 ** 26.8.2006, some CSE --Sampo
 ** 23.9.2006, added WO logic --Sampo
 **
 ** N.B: wo=wire order (needed for exc-c14n), so=schema order
 ** N.B2: This template is meant to be processed by pd/xsd2sg.pl. Beware
 ** of special markers that xsd2sg.pl expects to find and understand.
 **/

#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   ELNAME
#define EL_STRUCT ELSTRUCT
#define EL_NS     ELNS
#define EL_TAG    ELTAG

/* FUNC(TXLEN_SO_ELNAME) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int TXLEN_SO_ELNAME(struct zx_ctx* c, struct ELSTRUCT* x SIMPLELENNS)
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<ELNSCELTAG")-1 + 1 + sizeof("</ELNSCELTAG>")-1;
XMLNS_SO_LEN;
ATTRS_SO_LEN;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
ELEMS_SO_LEN;

  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(TXLEN_WO_ELNAME) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int TXLEN_WO_ELNAME(struct zx_ctx* c, struct ELSTRUCT* x SIMPLELEN)
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ELTAG")-1 + 1 + 2 + sizeof("ELTAG")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

XMLNS_WO_LEN;
ATTRS_WO_LEN;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
ELEMS_WO_LEN;

  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(TXENC_SO_ELNAME) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* TXENC_SO_ELNAME(struct zx_ctx* c, struct ELSTRUCT* x, char* p SIMPLETAGLENNS)
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<ELNSCELTAG");
XMLNS_SO_ENC;
ATTRS_SO_ENC;
  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
ELEMS_SO_ENC;
  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</ELNSCELTAG>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(TXENC_WO_ELNAME) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* TXENC_WO_ELNAME(struct zx_ctx* c, struct ELSTRUCT* x, char* p SIMPLETAGLEN)
{
  struct zx_elem_s* kid;
#if 1 /* NORMALMODE */
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ELTAG", sizeof("ELTAG")-1);
  qq = p;
XMLNS_WO_ENC;
  p = zx_enc_seen(p, pop_seen); 
ATTRS_WO_ENC;
  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = TXENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(TXEASY_ENC_SO_ELNAME) */

struct zx_str* TXEASY_ENC_SO_ELNAME(struct zx_ctx* c, struct ELSTRUCT* x SIMPLETAGLENNS)
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(TXns_tab));
  memcpy(c->ns_tab, TXns_tab, sizeof(TXns_tab));
  len = TXLEN_SO_ELNAME(c, x SIMPLELENNSARG);
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, TXENC_SO_ELNAME(c, x, buf SIMPLETAGLENNSARG), buf, len);
}

/* FUNC(TXEASY_ENC_WO_ELNAME) */

struct zx_str* TXEASY_ENC_WO_ELNAME(struct zx_ctx* c, struct ELSTRUCT* x SIMPLETAGLEN)
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(TXns_tab));
  memcpy(c->ns_tab, TXns_tab, sizeof(TXns_tab));
  len = TXLEN_WO_ELNAME(c, x SIMPLELENARG);
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, TXENC_WO_ELNAME(c, x, buf SIMPLETAGLENARG), buf, len);
}

#if 1 /* ENC_WO_SUBTEMPL */

/* FUNC(TXENC_WO_any_elem) */

int TXLEN_WO_any_elem(struct zx_ctx* c, struct zx_elem_s* x)
{
  int len;
  struct zx_elem_s* kid;
  switch (x->g.tok) {
ANYELEM_WO_LEN;
  case ZX_TOK_NOT_FOUND:
    len = 1 + sizeof("ELTAG")-1 + 1 + 2 + sizeof("ELTAG")-1 + 1;
    if (x->g.ns && x->g.ns->prefix_len)
      len += (x->g.ns->prefix_len + 1) * 2;
    len += zx_len_wo_common(c, x);
    return len;
  case ZX_TOK_DATA:
    return ((struct zx_str*)x)->len;
    break;
  default:
    NEVER("Impossible token(%d)", x->g.tok);
  }
  return 0;
}

/* FUNC(TXENC_WO_any_elem) */

char* TXENC_WO_any_elem(struct zx_ctx* c, struct zx_elem_s* x, char* p)
{
  struct zx_elem_s* kid;
  switch (x->g.tok) {
ANYELEM_WO_ENC;
  case ZX_TOK_NOT_FOUND:
    ZX_OUT_CH(p, '<');
    if (x->g.ns && x->g.ns->prefix_len) {
      ZX_OUT_MEM(p, x->g.ns->prefix, x->g.ns->prefix_len);
      ZX_OUT_CH(p, ':');
    }
    ZX_OUT_MEM(p, ZX_ANY_EL(x)->name, ZX_ANY_EL(x)->name_len);

    /* *** xmlns specs */ 
    p = zx_enc_unknown_attrs(p, ZX_ANY_EL(x)->gg.any_attr);
  
    for (kid = x->kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
      p = TXENC_WO_any_elem(c, kid, p);
  
    ZX_OUT_CH(p, '<');
    ZX_OUT_CH(p, '/');
    if (x->g.ns && x->g.ns->prefix_len) {
      ZX_OUT_MEM(p, x->g.ns->prefix, x->g.ns->prefix_len);
      ZX_OUT_CH(p, ':');
    }
    ZX_OUT_MEM(p, ZX_ANY_EL(x)->name, ZX_ANY_EL(x)->name_len);
    ZX_OUT_CH(p, '>');
    break;
  case ZX_TOK_DATA:
    ZX_OUT_STR(p, x);
    break;
  default:
    NEVER("Impossible token(%d)", x->g.tok);
  }
  return p;
}

/* FUNC(TXEASY_ENC_WO_any_elem) */

struct zx_str* TXEASY_ENC_WO_any_elem(struct zx_ctx* c, struct zx_elem_s* x)
{
  int len = TXLEN_WO_any_elem(c, x);
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, TXENC_WO_any_elem(c, x, buf), buf, len);
}

#endif

/* EOF */
