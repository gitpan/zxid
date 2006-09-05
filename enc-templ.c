/** enc-templ.c  -  XML encoder template, used in code generation
 ** Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing. See file COPYING.
 ** $Id: enc-templ.c,v 1.13 2006/08/28 05:23:23 sampo Exp $
 **
 ** 30.5.2006, created, Sampo Kellomaki (sampo@iki.fi)
 ** 6.8.2006,  factored data structure walking to aux-templ.c --Sampo
 ** 8.8.2006,  reworked namespace handling --Sampo
 ** 26.8.2006, some CSE --Sampo
 **
 ** N.B: wo=wire order (needed for exc-c14n), so=schema order
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

/* FUNC(TXLEN_ELNAME) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int TXLEN_ELNAME(struct ELSTRUCT* x SIMPLELEN)
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ELTAG") - 1 + 1 + 2 + sizeof("ELTAG") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

ATTRS_LEN;
ELEMS_LEN;

  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(TXENC_SO_ELNAME) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* TXENC_SO_ELNAME(struct ELSTRUCT* x, char* p SIMPLETAGLEN)
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ELTAG", sizeof("ELTAG") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

ATTRS_ENC_SO;

  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
ELEMS_ENC_SO;

  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ELTAG", sizeof("ELTAG") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(TXENC_WO_ELNAME) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* TXENC_WO_ELNAME(struct ELSTRUCT* x, char* p SIMPLETAGLEN)
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(TXEASY_ENC_SO_ELNAME) */

struct zx_str_s* TXEASY_ENC_SO_ELNAME(struct zx_ctx* c, struct ELSTRUCT* x SIMPLETAGLEN)
{
  int len = TXLEN_ELNAME(x SIMPLELENARG);
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, TXENC_SO_ELNAME(x, buf SIMPLETAGLENARG), buf, len);
}

/* FUNC(TXEASY_ENC_WO_ELNAME) */

struct zx_str_s* TXEASY_ENC_WO_ELNAME(struct zx_ctx* c, struct ELSTRUCT* x SIMPLETAGLEN)
{
  int len = TXLEN_ELNAME(x SIMPLELENARG);
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, TXENC_WO_ELNAME(x, buf SIMPLETAGLENARG), buf, len);
}

/* EOF */
