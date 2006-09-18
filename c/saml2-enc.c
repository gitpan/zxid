/* c/saml2-enc.c - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Code generation design Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for terms and conditions
 * of use. Some aspects of code generation were driven by schema
 * descriptions that were used as input and may be subject to their own copyright.
 * Code generation uses a template, whose copyright statement follows. */

/** enc-templ.c  -  XML encoder template, used in code generation
 ** Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing. See file COPYING.
 ** Id: enc-templ.c,v 1.13 2006/08/28 05:23:23 sampo Exp $
 **
 ** 30.5.2006, created, Sampo Kellomaki (sampo@iki.fi)
 ** 6.8.2006,  factored data structure walking to aux-templ.c --Sampo
 ** 8.8.2006,  reworked namespace handling --Sampo
 ** 26.8.2006, some CSE --Sampo
 **
 ** N.B: wo=wire order (needed for exc-c14n), so=schema order
 **/

#include <memory.h>
#include "errmac.h"
#include "zx.h"
#include "c/saml2-const.h"
#include "c/saml2-data.h"



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

#define EL_NAME   ac_ActivationLimit
#define EL_STRUCT zx_ac_ActivationLimit_s
#define EL_NS     ac
#define EL_TAG    ActivationLimit

/* FUNC(zx_LEN_ac_ActivationLimit) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_ActivationLimit(struct zx_ac_ActivationLimit_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ActivationLimit") - 1 + 1 + 2 + sizeof("ActivationLimit") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_ActivationLimitDuration_s* e;
      for (e = x->ActivationLimitDuration; e; e = (struct zx_ac_ActivationLimitDuration_s*)e->gg.g.n)
	  len += zx_LEN_ac_ActivationLimitDuration(e);
  }
  {
      struct zx_ac_ActivationLimitUsages_s* e;
      for (e = x->ActivationLimitUsages; e; e = (struct zx_ac_ActivationLimitUsages_s*)e->gg.g.n)
	  len += zx_LEN_ac_ActivationLimitUsages(e);
  }
  for (se = x->ActivationLimitSession; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("ActivationLimitSession") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_ActivationLimit) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_ActivationLimit(struct zx_ac_ActivationLimit_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ActivationLimit", sizeof("ActivationLimit") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_ActivationLimitDuration_s* e;
      for (e = x->ActivationLimitDuration; e; e = (struct zx_ac_ActivationLimitDuration_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_ActivationLimitDuration(e, p);
  }
  {
      struct zx_ac_ActivationLimitUsages_s* e;
      for (e = x->ActivationLimitUsages; e; e = (struct zx_ac_ActivationLimitUsages_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_ActivationLimitUsages(e, p);
  }
  for (se = x->ActivationLimitSession; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "ActivationLimitSession", sizeof("ActivationLimitSession") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ActivationLimit", sizeof("ActivationLimit") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_ActivationLimit) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_ActivationLimit(struct zx_ac_ActivationLimit_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_ActivationLimit) */

struct zx_str_s* zx_EASY_ENC_SO_ac_ActivationLimit(struct zx_ctx* c, struct zx_ac_ActivationLimit_s* x )
{
  int len = zx_LEN_ac_ActivationLimit(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_ActivationLimit(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_ActivationLimit) */

struct zx_str_s* zx_EASY_ENC_WO_ac_ActivationLimit(struct zx_ctx* c, struct zx_ac_ActivationLimit_s* x )
{
  int len = zx_LEN_ac_ActivationLimit(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_ActivationLimit(x, buf ), buf, len);
}




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

#define EL_NAME   ac_ActivationLimitDuration
#define EL_STRUCT zx_ac_ActivationLimitDuration_s
#define EL_NS     ac
#define EL_TAG    ActivationLimitDuration

/* FUNC(zx_LEN_ac_ActivationLimitDuration) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_ActivationLimitDuration(struct zx_ac_ActivationLimitDuration_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ActivationLimitDuration") - 1 + 1 + 2 + sizeof("ActivationLimitDuration") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->duration, sizeof("duration"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_ActivationLimitDuration) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_ActivationLimitDuration(struct zx_ac_ActivationLimitDuration_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ActivationLimitDuration", sizeof("ActivationLimitDuration") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->duration, "duration", sizeof("duration")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ActivationLimitDuration", sizeof("ActivationLimitDuration") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_ActivationLimitDuration) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_ActivationLimitDuration(struct zx_ac_ActivationLimitDuration_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_ActivationLimitDuration) */

struct zx_str_s* zx_EASY_ENC_SO_ac_ActivationLimitDuration(struct zx_ctx* c, struct zx_ac_ActivationLimitDuration_s* x )
{
  int len = zx_LEN_ac_ActivationLimitDuration(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_ActivationLimitDuration(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_ActivationLimitDuration) */

struct zx_str_s* zx_EASY_ENC_WO_ac_ActivationLimitDuration(struct zx_ctx* c, struct zx_ac_ActivationLimitDuration_s* x )
{
  int len = zx_LEN_ac_ActivationLimitDuration(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_ActivationLimitDuration(x, buf ), buf, len);
}




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

#define EL_NAME   ac_ActivationLimitUsages
#define EL_STRUCT zx_ac_ActivationLimitUsages_s
#define EL_NS     ac
#define EL_TAG    ActivationLimitUsages

/* FUNC(zx_LEN_ac_ActivationLimitUsages) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_ActivationLimitUsages(struct zx_ac_ActivationLimitUsages_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ActivationLimitUsages") - 1 + 1 + 2 + sizeof("ActivationLimitUsages") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->number, sizeof("number"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_ActivationLimitUsages) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_ActivationLimitUsages(struct zx_ac_ActivationLimitUsages_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ActivationLimitUsages", sizeof("ActivationLimitUsages") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->number, "number", sizeof("number")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ActivationLimitUsages", sizeof("ActivationLimitUsages") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_ActivationLimitUsages) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_ActivationLimitUsages(struct zx_ac_ActivationLimitUsages_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_ActivationLimitUsages) */

struct zx_str_s* zx_EASY_ENC_SO_ac_ActivationLimitUsages(struct zx_ctx* c, struct zx_ac_ActivationLimitUsages_s* x )
{
  int len = zx_LEN_ac_ActivationLimitUsages(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_ActivationLimitUsages(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_ActivationLimitUsages) */

struct zx_str_s* zx_EASY_ENC_WO_ac_ActivationLimitUsages(struct zx_ctx* c, struct zx_ac_ActivationLimitUsages_s* x )
{
  int len = zx_LEN_ac_ActivationLimitUsages(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_ActivationLimitUsages(x, buf ), buf, len);
}




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

#define EL_NAME   ac_ActivationPin
#define EL_STRUCT zx_ac_ActivationPin_s
#define EL_NS     ac
#define EL_TAG    ActivationPin

/* FUNC(zx_LEN_ac_ActivationPin) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_ActivationPin(struct zx_ac_ActivationPin_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ActivationPin") - 1 + 1 + 2 + sizeof("ActivationPin") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_Length_s* e;
      for (e = x->Length; e; e = (struct zx_ac_Length_s*)e->gg.g.n)
	  len += zx_LEN_ac_Length(e);
  }
  {
      struct zx_ac_Alphabet_s* e;
      for (e = x->Alphabet; e; e = (struct zx_ac_Alphabet_s*)e->gg.g.n)
	  len += zx_LEN_ac_Alphabet(e);
  }
  {
      struct zx_ac_Generation_s* e;
      for (e = x->Generation; e; e = (struct zx_ac_Generation_s*)e->gg.g.n)
	  len += zx_LEN_ac_Generation(e);
  }
  {
      struct zx_ac_ActivationLimit_s* e;
      for (e = x->ActivationLimit; e; e = (struct zx_ac_ActivationLimit_s*)e->gg.g.n)
	  len += zx_LEN_ac_ActivationLimit(e);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_ActivationPin) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_ActivationPin(struct zx_ac_ActivationPin_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ActivationPin", sizeof("ActivationPin") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_Length_s* e;
      for (e = x->Length; e; e = (struct zx_ac_Length_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Length(e, p);
  }
  {
      struct zx_ac_Alphabet_s* e;
      for (e = x->Alphabet; e; e = (struct zx_ac_Alphabet_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Alphabet(e, p);
  }
  {
      struct zx_ac_Generation_s* e;
      for (e = x->Generation; e; e = (struct zx_ac_Generation_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Generation(e, p);
  }
  {
      struct zx_ac_ActivationLimit_s* e;
      for (e = x->ActivationLimit; e; e = (struct zx_ac_ActivationLimit_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_ActivationLimit(e, p);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ActivationPin", sizeof("ActivationPin") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_ActivationPin) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_ActivationPin(struct zx_ac_ActivationPin_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_ActivationPin) */

struct zx_str_s* zx_EASY_ENC_SO_ac_ActivationPin(struct zx_ctx* c, struct zx_ac_ActivationPin_s* x )
{
  int len = zx_LEN_ac_ActivationPin(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_ActivationPin(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_ActivationPin) */

struct zx_str_s* zx_EASY_ENC_WO_ac_ActivationPin(struct zx_ctx* c, struct zx_ac_ActivationPin_s* x )
{
  int len = zx_LEN_ac_ActivationPin(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_ActivationPin(x, buf ), buf, len);
}




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

#define EL_NAME   ac_Alphabet
#define EL_STRUCT zx_ac_Alphabet_s
#define EL_NS     ac
#define EL_TAG    Alphabet

/* FUNC(zx_LEN_ac_Alphabet) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_Alphabet(struct zx_ac_Alphabet_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Alphabet") - 1 + 1 + 2 + sizeof("Alphabet") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->requiredChars, sizeof("requiredChars"));
  len += zx_attr_len(x->excludedChars, sizeof("excludedChars"));
  len += zx_attr_len(x->case_is_c_keyword, sizeof("case"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_Alphabet) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_Alphabet(struct zx_ac_Alphabet_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Alphabet", sizeof("Alphabet") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->requiredChars, "requiredChars", sizeof("requiredChars")-1);
  p = zx_attr_enc(p, x->excludedChars, "excludedChars", sizeof("excludedChars")-1);
  p = zx_attr_enc(p, x->case_is_c_keyword, "case", sizeof("case")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Alphabet", sizeof("Alphabet") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_Alphabet) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_Alphabet(struct zx_ac_Alphabet_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_Alphabet) */

struct zx_str_s* zx_EASY_ENC_SO_ac_Alphabet(struct zx_ctx* c, struct zx_ac_Alphabet_s* x )
{
  int len = zx_LEN_ac_Alphabet(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_Alphabet(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_Alphabet) */

struct zx_str_s* zx_EASY_ENC_WO_ac_Alphabet(struct zx_ctx* c, struct zx_ac_Alphabet_s* x )
{
  int len = zx_LEN_ac_Alphabet(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_Alphabet(x, buf ), buf, len);
}




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

#define EL_NAME   ac_AsymmetricDecryption
#define EL_STRUCT zx_ac_AsymmetricDecryption_s
#define EL_NS     ac
#define EL_TAG    AsymmetricDecryption

/* FUNC(zx_LEN_ac_AsymmetricDecryption) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_AsymmetricDecryption(struct zx_ac_AsymmetricDecryption_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AsymmetricDecryption") - 1 + 1 + 2 + sizeof("AsymmetricDecryption") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_AsymmetricDecryption) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_AsymmetricDecryption(struct zx_ac_AsymmetricDecryption_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AsymmetricDecryption", sizeof("AsymmetricDecryption") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AsymmetricDecryption", sizeof("AsymmetricDecryption") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_AsymmetricDecryption) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_AsymmetricDecryption(struct zx_ac_AsymmetricDecryption_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_AsymmetricDecryption) */

struct zx_str_s* zx_EASY_ENC_SO_ac_AsymmetricDecryption(struct zx_ctx* c, struct zx_ac_AsymmetricDecryption_s* x )
{
  int len = zx_LEN_ac_AsymmetricDecryption(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_AsymmetricDecryption(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_AsymmetricDecryption) */

struct zx_str_s* zx_EASY_ENC_WO_ac_AsymmetricDecryption(struct zx_ctx* c, struct zx_ac_AsymmetricDecryption_s* x )
{
  int len = zx_LEN_ac_AsymmetricDecryption(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_AsymmetricDecryption(x, buf ), buf, len);
}




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

#define EL_NAME   ac_AsymmetricKeyAgreement
#define EL_STRUCT zx_ac_AsymmetricKeyAgreement_s
#define EL_NS     ac
#define EL_TAG    AsymmetricKeyAgreement

/* FUNC(zx_LEN_ac_AsymmetricKeyAgreement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_AsymmetricKeyAgreement(struct zx_ac_AsymmetricKeyAgreement_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AsymmetricKeyAgreement") - 1 + 1 + 2 + sizeof("AsymmetricKeyAgreement") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_AsymmetricKeyAgreement) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_AsymmetricKeyAgreement(struct zx_ac_AsymmetricKeyAgreement_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AsymmetricKeyAgreement", sizeof("AsymmetricKeyAgreement") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AsymmetricKeyAgreement", sizeof("AsymmetricKeyAgreement") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_AsymmetricKeyAgreement) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_AsymmetricKeyAgreement(struct zx_ac_AsymmetricKeyAgreement_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_AsymmetricKeyAgreement) */

struct zx_str_s* zx_EASY_ENC_SO_ac_AsymmetricKeyAgreement(struct zx_ctx* c, struct zx_ac_AsymmetricKeyAgreement_s* x )
{
  int len = zx_LEN_ac_AsymmetricKeyAgreement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_AsymmetricKeyAgreement(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_AsymmetricKeyAgreement) */

struct zx_str_s* zx_EASY_ENC_WO_ac_AsymmetricKeyAgreement(struct zx_ctx* c, struct zx_ac_AsymmetricKeyAgreement_s* x )
{
  int len = zx_LEN_ac_AsymmetricKeyAgreement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_AsymmetricKeyAgreement(x, buf ), buf, len);
}




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

#define EL_NAME   ac_AuthenticatingAuthority
#define EL_STRUCT zx_ac_AuthenticatingAuthority_s
#define EL_NS     ac
#define EL_TAG    AuthenticatingAuthority

/* FUNC(zx_LEN_ac_AuthenticatingAuthority) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_AuthenticatingAuthority(struct zx_ac_AuthenticatingAuthority_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthenticatingAuthority") - 1 + 1 + 2 + sizeof("AuthenticatingAuthority") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ID, sizeof("ID"));

  {
      struct zx_ac_GoverningAgreements_s* e;
      for (e = x->GoverningAgreements; e; e = (struct zx_ac_GoverningAgreements_s*)e->gg.g.n)
	  len += zx_LEN_ac_GoverningAgreements(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_AuthenticatingAuthority) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_AuthenticatingAuthority(struct zx_ac_AuthenticatingAuthority_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthenticatingAuthority", sizeof("AuthenticatingAuthority") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_GoverningAgreements_s* e;
      for (e = x->GoverningAgreements; e; e = (struct zx_ac_GoverningAgreements_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_GoverningAgreements(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthenticatingAuthority", sizeof("AuthenticatingAuthority") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_AuthenticatingAuthority) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_AuthenticatingAuthority(struct zx_ac_AuthenticatingAuthority_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_AuthenticatingAuthority) */

struct zx_str_s* zx_EASY_ENC_SO_ac_AuthenticatingAuthority(struct zx_ctx* c, struct zx_ac_AuthenticatingAuthority_s* x )
{
  int len = zx_LEN_ac_AuthenticatingAuthority(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_AuthenticatingAuthority(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_AuthenticatingAuthority) */

struct zx_str_s* zx_EASY_ENC_WO_ac_AuthenticatingAuthority(struct zx_ctx* c, struct zx_ac_AuthenticatingAuthority_s* x )
{
  int len = zx_LEN_ac_AuthenticatingAuthority(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_AuthenticatingAuthority(x, buf ), buf, len);
}




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

#define EL_NAME   ac_AuthenticationContextStatement
#define EL_STRUCT zx_ac_AuthenticationContextStatement_s
#define EL_NS     ac
#define EL_TAG    AuthenticationContextStatement

/* FUNC(zx_LEN_ac_AuthenticationContextStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_AuthenticationContextStatement(struct zx_ac_AuthenticationContextStatement_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthenticationContextStatement") - 1 + 1 + 2 + sizeof("AuthenticationContextStatement") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ID, sizeof("ID"));

  {
      struct zx_ac_Identification_s* e;
      for (e = x->Identification; e; e = (struct zx_ac_Identification_s*)e->gg.g.n)
	  len += zx_LEN_ac_Identification(e);
  }
  {
      struct zx_ac_TechnicalProtection_s* e;
      for (e = x->TechnicalProtection; e; e = (struct zx_ac_TechnicalProtection_s*)e->gg.g.n)
	  len += zx_LEN_ac_TechnicalProtection(e);
  }
  {
      struct zx_ac_OperationalProtection_s* e;
      for (e = x->OperationalProtection; e; e = (struct zx_ac_OperationalProtection_s*)e->gg.g.n)
	  len += zx_LEN_ac_OperationalProtection(e);
  }
  {
      struct zx_ac_AuthenticationMethod_s* e;
      for (e = x->AuthenticationMethod; e; e = (struct zx_ac_AuthenticationMethod_s*)e->gg.g.n)
	  len += zx_LEN_ac_AuthenticationMethod(e);
  }
  {
      struct zx_ac_GoverningAgreements_s* e;
      for (e = x->GoverningAgreements; e; e = (struct zx_ac_GoverningAgreements_s*)e->gg.g.n)
	  len += zx_LEN_ac_GoverningAgreements(e);
  }
  {
      struct zx_ac_AuthenticatingAuthority_s* e;
      for (e = x->AuthenticatingAuthority; e; e = (struct zx_ac_AuthenticatingAuthority_s*)e->gg.g.n)
	  len += zx_LEN_ac_AuthenticatingAuthority(e);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_AuthenticationContextStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_AuthenticationContextStatement(struct zx_ac_AuthenticationContextStatement_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthenticationContextStatement", sizeof("AuthenticationContextStatement") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_Identification_s* e;
      for (e = x->Identification; e; e = (struct zx_ac_Identification_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Identification(e, p);
  }
  {
      struct zx_ac_TechnicalProtection_s* e;
      for (e = x->TechnicalProtection; e; e = (struct zx_ac_TechnicalProtection_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_TechnicalProtection(e, p);
  }
  {
      struct zx_ac_OperationalProtection_s* e;
      for (e = x->OperationalProtection; e; e = (struct zx_ac_OperationalProtection_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_OperationalProtection(e, p);
  }
  {
      struct zx_ac_AuthenticationMethod_s* e;
      for (e = x->AuthenticationMethod; e; e = (struct zx_ac_AuthenticationMethod_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_AuthenticationMethod(e, p);
  }
  {
      struct zx_ac_GoverningAgreements_s* e;
      for (e = x->GoverningAgreements; e; e = (struct zx_ac_GoverningAgreements_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_GoverningAgreements(e, p);
  }
  {
      struct zx_ac_AuthenticatingAuthority_s* e;
      for (e = x->AuthenticatingAuthority; e; e = (struct zx_ac_AuthenticatingAuthority_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_AuthenticatingAuthority(e, p);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthenticationContextStatement", sizeof("AuthenticationContextStatement") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_AuthenticationContextStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_AuthenticationContextStatement(struct zx_ac_AuthenticationContextStatement_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_AuthenticationContextStatement) */

struct zx_str_s* zx_EASY_ENC_SO_ac_AuthenticationContextStatement(struct zx_ctx* c, struct zx_ac_AuthenticationContextStatement_s* x )
{
  int len = zx_LEN_ac_AuthenticationContextStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_AuthenticationContextStatement(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_AuthenticationContextStatement) */

struct zx_str_s* zx_EASY_ENC_WO_ac_AuthenticationContextStatement(struct zx_ctx* c, struct zx_ac_AuthenticationContextStatement_s* x )
{
  int len = zx_LEN_ac_AuthenticationContextStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_AuthenticationContextStatement(x, buf ), buf, len);
}




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

#define EL_NAME   ac_AuthenticationMethod
#define EL_STRUCT zx_ac_AuthenticationMethod_s
#define EL_NS     ac
#define EL_TAG    AuthenticationMethod

/* FUNC(zx_LEN_ac_AuthenticationMethod) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_AuthenticationMethod(struct zx_ac_AuthenticationMethod_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthenticationMethod") - 1 + 1 + 2 + sizeof("AuthenticationMethod") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_PrincipalAuthenticationMechanism_s* e;
      for (e = x->PrincipalAuthenticationMechanism; e; e = (struct zx_ac_PrincipalAuthenticationMechanism_s*)e->gg.g.n)
	  len += zx_LEN_ac_PrincipalAuthenticationMechanism(e);
  }
  {
      struct zx_ac_Authenticator_s* e;
      for (e = x->Authenticator; e; e = (struct zx_ac_Authenticator_s*)e->gg.g.n)
	  len += zx_LEN_ac_Authenticator(e);
  }
  {
      struct zx_ac_AuthenticatorTransportProtocol_s* e;
      for (e = x->AuthenticatorTransportProtocol; e; e = (struct zx_ac_AuthenticatorTransportProtocol_s*)e->gg.g.n)
	  len += zx_LEN_ac_AuthenticatorTransportProtocol(e);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_AuthenticationMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_AuthenticationMethod(struct zx_ac_AuthenticationMethod_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthenticationMethod", sizeof("AuthenticationMethod") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_PrincipalAuthenticationMechanism_s* e;
      for (e = x->PrincipalAuthenticationMechanism; e; e = (struct zx_ac_PrincipalAuthenticationMechanism_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_PrincipalAuthenticationMechanism(e, p);
  }
  {
      struct zx_ac_Authenticator_s* e;
      for (e = x->Authenticator; e; e = (struct zx_ac_Authenticator_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Authenticator(e, p);
  }
  {
      struct zx_ac_AuthenticatorTransportProtocol_s* e;
      for (e = x->AuthenticatorTransportProtocol; e; e = (struct zx_ac_AuthenticatorTransportProtocol_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_AuthenticatorTransportProtocol(e, p);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthenticationMethod", sizeof("AuthenticationMethod") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_AuthenticationMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_AuthenticationMethod(struct zx_ac_AuthenticationMethod_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_AuthenticationMethod) */

struct zx_str_s* zx_EASY_ENC_SO_ac_AuthenticationMethod(struct zx_ctx* c, struct zx_ac_AuthenticationMethod_s* x )
{
  int len = zx_LEN_ac_AuthenticationMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_AuthenticationMethod(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_AuthenticationMethod) */

struct zx_str_s* zx_EASY_ENC_WO_ac_AuthenticationMethod(struct zx_ctx* c, struct zx_ac_AuthenticationMethod_s* x )
{
  int len = zx_LEN_ac_AuthenticationMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_AuthenticationMethod(x, buf ), buf, len);
}




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

#define EL_NAME   ac_Authenticator
#define EL_STRUCT zx_ac_Authenticator_s
#define EL_NS     ac
#define EL_TAG    Authenticator

/* FUNC(zx_LEN_ac_Authenticator) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_Authenticator(struct zx_ac_Authenticator_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Authenticator") - 1 + 1 + 2 + sizeof("Authenticator") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_PreviousSession_s* e;
      for (e = x->PreviousSession; e; e = (struct zx_ac_PreviousSession_s*)e->gg.g.n)
	  len += zx_LEN_ac_PreviousSession(e);
  }
  {
      struct zx_ac_ResumeSession_s* e;
      for (e = x->ResumeSession; e; e = (struct zx_ac_ResumeSession_s*)e->gg.g.n)
	  len += zx_LEN_ac_ResumeSession(e);
  }
  {
      struct zx_ac_DigSig_s* e;
      for (e = x->DigSig; e; e = (struct zx_ac_DigSig_s*)e->gg.g.n)
	  len += zx_LEN_ac_DigSig(e);
  }
  {
      struct zx_ac_Password_s* e;
      for (e = x->Password; e; e = (struct zx_ac_Password_s*)e->gg.g.n)
	  len += zx_LEN_ac_Password(e);
  }
  {
      struct zx_ac_ZeroKnowledge_s* e;
      for (e = x->ZeroKnowledge; e; e = (struct zx_ac_ZeroKnowledge_s*)e->gg.g.n)
	  len += zx_LEN_ac_ZeroKnowledge(e);
  }
  {
      struct zx_ac_SharedSecretChallengeResponse_s* e;
      for (e = x->SharedSecretChallengeResponse; e; e = (struct zx_ac_SharedSecretChallengeResponse_s*)e->gg.g.n)
	  len += zx_LEN_ac_SharedSecretChallengeResponse(e);
  }
  {
      struct zx_ac_SharedSecretDynamicPlaintext_s* e;
      for (e = x->SharedSecretDynamicPlaintext; e; e = (struct zx_ac_SharedSecretDynamicPlaintext_s*)e->gg.g.n)
	  len += zx_LEN_ac_SharedSecretDynamicPlaintext(e);
  }
  {
      struct zx_ac_IPAddress_s* e;
      for (e = x->IPAddress; e; e = (struct zx_ac_IPAddress_s*)e->gg.g.n)
	  len += zx_LEN_ac_IPAddress(e);
  }
  {
      struct zx_ac_AsymmetricDecryption_s* e;
      for (e = x->AsymmetricDecryption; e; e = (struct zx_ac_AsymmetricDecryption_s*)e->gg.g.n)
	  len += zx_LEN_ac_AsymmetricDecryption(e);
  }
  {
      struct zx_ac_AsymmetricKeyAgreement_s* e;
      for (e = x->AsymmetricKeyAgreement; e; e = (struct zx_ac_AsymmetricKeyAgreement_s*)e->gg.g.n)
	  len += zx_LEN_ac_AsymmetricKeyAgreement(e);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_Authenticator) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_Authenticator(struct zx_ac_Authenticator_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Authenticator", sizeof("Authenticator") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_PreviousSession_s* e;
      for (e = x->PreviousSession; e; e = (struct zx_ac_PreviousSession_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_PreviousSession(e, p);
  }
  {
      struct zx_ac_ResumeSession_s* e;
      for (e = x->ResumeSession; e; e = (struct zx_ac_ResumeSession_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_ResumeSession(e, p);
  }
  {
      struct zx_ac_DigSig_s* e;
      for (e = x->DigSig; e; e = (struct zx_ac_DigSig_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_DigSig(e, p);
  }
  {
      struct zx_ac_Password_s* e;
      for (e = x->Password; e; e = (struct zx_ac_Password_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Password(e, p);
  }
  {
      struct zx_ac_ZeroKnowledge_s* e;
      for (e = x->ZeroKnowledge; e; e = (struct zx_ac_ZeroKnowledge_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_ZeroKnowledge(e, p);
  }
  {
      struct zx_ac_SharedSecretChallengeResponse_s* e;
      for (e = x->SharedSecretChallengeResponse; e; e = (struct zx_ac_SharedSecretChallengeResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_SharedSecretChallengeResponse(e, p);
  }
  {
      struct zx_ac_SharedSecretDynamicPlaintext_s* e;
      for (e = x->SharedSecretDynamicPlaintext; e; e = (struct zx_ac_SharedSecretDynamicPlaintext_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_SharedSecretDynamicPlaintext(e, p);
  }
  {
      struct zx_ac_IPAddress_s* e;
      for (e = x->IPAddress; e; e = (struct zx_ac_IPAddress_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_IPAddress(e, p);
  }
  {
      struct zx_ac_AsymmetricDecryption_s* e;
      for (e = x->AsymmetricDecryption; e; e = (struct zx_ac_AsymmetricDecryption_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_AsymmetricDecryption(e, p);
  }
  {
      struct zx_ac_AsymmetricKeyAgreement_s* e;
      for (e = x->AsymmetricKeyAgreement; e; e = (struct zx_ac_AsymmetricKeyAgreement_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_AsymmetricKeyAgreement(e, p);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Authenticator", sizeof("Authenticator") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_Authenticator) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_Authenticator(struct zx_ac_Authenticator_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_Authenticator) */

struct zx_str_s* zx_EASY_ENC_SO_ac_Authenticator(struct zx_ctx* c, struct zx_ac_Authenticator_s* x )
{
  int len = zx_LEN_ac_Authenticator(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_Authenticator(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_Authenticator) */

struct zx_str_s* zx_EASY_ENC_WO_ac_Authenticator(struct zx_ctx* c, struct zx_ac_Authenticator_s* x )
{
  int len = zx_LEN_ac_Authenticator(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_Authenticator(x, buf ), buf, len);
}




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

#define EL_NAME   ac_AuthenticatorTransportProtocol
#define EL_STRUCT zx_ac_AuthenticatorTransportProtocol_s
#define EL_NS     ac
#define EL_TAG    AuthenticatorTransportProtocol

/* FUNC(zx_LEN_ac_AuthenticatorTransportProtocol) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_AuthenticatorTransportProtocol(struct zx_ac_AuthenticatorTransportProtocol_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthenticatorTransportProtocol") - 1 + 1 + 2 + sizeof("AuthenticatorTransportProtocol") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_HTTP_s* e;
      for (e = x->HTTP; e; e = (struct zx_ac_HTTP_s*)e->gg.g.n)
	  len += zx_LEN_ac_HTTP(e);
  }
  {
      struct zx_ac_SSL_s* e;
      for (e = x->SSL; e; e = (struct zx_ac_SSL_s*)e->gg.g.n)
	  len += zx_LEN_ac_SSL(e);
  }
  {
      struct zx_ac_MobileNetworkNoEncryption_s* e;
      for (e = x->MobileNetworkNoEncryption; e; e = (struct zx_ac_MobileNetworkNoEncryption_s*)e->gg.g.n)
	  len += zx_LEN_ac_MobileNetworkNoEncryption(e);
  }
  {
      struct zx_ac_MobileNetworkRadioEncryption_s* e;
      for (e = x->MobileNetworkRadioEncryption; e; e = (struct zx_ac_MobileNetworkRadioEncryption_s*)e->gg.g.n)
	  len += zx_LEN_ac_MobileNetworkRadioEncryption(e);
  }
  {
      struct zx_ac_MobileNetworkEndToEndEncryption_s* e;
      for (e = x->MobileNetworkEndToEndEncryption; e; e = (struct zx_ac_MobileNetworkEndToEndEncryption_s*)e->gg.g.n)
	  len += zx_LEN_ac_MobileNetworkEndToEndEncryption(e);
  }
  {
      struct zx_ac_WTLS_s* e;
      for (e = x->WTLS; e; e = (struct zx_ac_WTLS_s*)e->gg.g.n)
	  len += zx_LEN_ac_WTLS(e);
  }
  {
      struct zx_ac_IPSec_s* e;
      for (e = x->IPSec; e; e = (struct zx_ac_IPSec_s*)e->gg.g.n)
	  len += zx_LEN_ac_IPSec(e);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_AuthenticatorTransportProtocol) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_AuthenticatorTransportProtocol(struct zx_ac_AuthenticatorTransportProtocol_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthenticatorTransportProtocol", sizeof("AuthenticatorTransportProtocol") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_HTTP_s* e;
      for (e = x->HTTP; e; e = (struct zx_ac_HTTP_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_HTTP(e, p);
  }
  {
      struct zx_ac_SSL_s* e;
      for (e = x->SSL; e; e = (struct zx_ac_SSL_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_SSL(e, p);
  }
  {
      struct zx_ac_MobileNetworkNoEncryption_s* e;
      for (e = x->MobileNetworkNoEncryption; e; e = (struct zx_ac_MobileNetworkNoEncryption_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_MobileNetworkNoEncryption(e, p);
  }
  {
      struct zx_ac_MobileNetworkRadioEncryption_s* e;
      for (e = x->MobileNetworkRadioEncryption; e; e = (struct zx_ac_MobileNetworkRadioEncryption_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_MobileNetworkRadioEncryption(e, p);
  }
  {
      struct zx_ac_MobileNetworkEndToEndEncryption_s* e;
      for (e = x->MobileNetworkEndToEndEncryption; e; e = (struct zx_ac_MobileNetworkEndToEndEncryption_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_MobileNetworkEndToEndEncryption(e, p);
  }
  {
      struct zx_ac_WTLS_s* e;
      for (e = x->WTLS; e; e = (struct zx_ac_WTLS_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_WTLS(e, p);
  }
  {
      struct zx_ac_IPSec_s* e;
      for (e = x->IPSec; e; e = (struct zx_ac_IPSec_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_IPSec(e, p);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthenticatorTransportProtocol", sizeof("AuthenticatorTransportProtocol") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_AuthenticatorTransportProtocol) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_AuthenticatorTransportProtocol(struct zx_ac_AuthenticatorTransportProtocol_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_AuthenticatorTransportProtocol) */

struct zx_str_s* zx_EASY_ENC_SO_ac_AuthenticatorTransportProtocol(struct zx_ctx* c, struct zx_ac_AuthenticatorTransportProtocol_s* x )
{
  int len = zx_LEN_ac_AuthenticatorTransportProtocol(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_AuthenticatorTransportProtocol(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_AuthenticatorTransportProtocol) */

struct zx_str_s* zx_EASY_ENC_WO_ac_AuthenticatorTransportProtocol(struct zx_ctx* c, struct zx_ac_AuthenticatorTransportProtocol_s* x )
{
  int len = zx_LEN_ac_AuthenticatorTransportProtocol(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_AuthenticatorTransportProtocol(x, buf ), buf, len);
}




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

#define EL_NAME   ac_DeactivationCallCenter
#define EL_STRUCT zx_ac_DeactivationCallCenter_s
#define EL_NS     ac
#define EL_TAG    DeactivationCallCenter

/* FUNC(zx_LEN_ac_DeactivationCallCenter) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_DeactivationCallCenter(struct zx_ac_DeactivationCallCenter_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("DeactivationCallCenter") - 1 + 1 + 2 + sizeof("DeactivationCallCenter") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_DeactivationCallCenter) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_DeactivationCallCenter(struct zx_ac_DeactivationCallCenter_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "DeactivationCallCenter", sizeof("DeactivationCallCenter") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "DeactivationCallCenter", sizeof("DeactivationCallCenter") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_DeactivationCallCenter) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_DeactivationCallCenter(struct zx_ac_DeactivationCallCenter_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_DeactivationCallCenter) */

struct zx_str_s* zx_EASY_ENC_SO_ac_DeactivationCallCenter(struct zx_ctx* c, struct zx_ac_DeactivationCallCenter_s* x )
{
  int len = zx_LEN_ac_DeactivationCallCenter(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_DeactivationCallCenter(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_DeactivationCallCenter) */

struct zx_str_s* zx_EASY_ENC_WO_ac_DeactivationCallCenter(struct zx_ctx* c, struct zx_ac_DeactivationCallCenter_s* x )
{
  int len = zx_LEN_ac_DeactivationCallCenter(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_DeactivationCallCenter(x, buf ), buf, len);
}




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

#define EL_NAME   ac_DigSig
#define EL_STRUCT zx_ac_DigSig_s
#define EL_NS     ac
#define EL_TAG    DigSig

/* FUNC(zx_LEN_ac_DigSig) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_DigSig(struct zx_ac_DigSig_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("DigSig") - 1 + 1 + 2 + sizeof("DigSig") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_DigSig) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_DigSig(struct zx_ac_DigSig_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "DigSig", sizeof("DigSig") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "DigSig", sizeof("DigSig") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_DigSig) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_DigSig(struct zx_ac_DigSig_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_DigSig) */

struct zx_str_s* zx_EASY_ENC_SO_ac_DigSig(struct zx_ctx* c, struct zx_ac_DigSig_s* x )
{
  int len = zx_LEN_ac_DigSig(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_DigSig(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_DigSig) */

struct zx_str_s* zx_EASY_ENC_WO_ac_DigSig(struct zx_ctx* c, struct zx_ac_DigSig_s* x )
{
  int len = zx_LEN_ac_DigSig(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_DigSig(x, buf ), buf, len);
}




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

#define EL_NAME   ac_Extension
#define EL_STRUCT zx_ac_Extension_s
#define EL_NS     ac
#define EL_TAG    Extension

/* FUNC(zx_LEN_ac_Extension) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_Extension(struct zx_ac_Extension_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Extension") - 1 + 1 + 2 + sizeof("Extension") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */




  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_Extension) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_Extension(struct zx_ac_Extension_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Extension", sizeof("Extension") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Extension", sizeof("Extension") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_Extension) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_Extension(struct zx_ac_Extension_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_Extension) */

struct zx_str_s* zx_EASY_ENC_SO_ac_Extension(struct zx_ctx* c, struct zx_ac_Extension_s* x )
{
  int len = zx_LEN_ac_Extension(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_Extension(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_Extension) */

struct zx_str_s* zx_EASY_ENC_WO_ac_Extension(struct zx_ctx* c, struct zx_ac_Extension_s* x )
{
  int len = zx_LEN_ac_Extension(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_Extension(x, buf ), buf, len);
}




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

#define EL_NAME   ac_Generation
#define EL_STRUCT zx_ac_Generation_s
#define EL_NS     ac
#define EL_TAG    Generation

/* FUNC(zx_LEN_ac_Generation) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_Generation(struct zx_ac_Generation_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Generation") - 1 + 1 + 2 + sizeof("Generation") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->mechanism, sizeof("mechanism"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_Generation) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_Generation(struct zx_ac_Generation_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Generation", sizeof("Generation") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->mechanism, "mechanism", sizeof("mechanism")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Generation", sizeof("Generation") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_Generation) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_Generation(struct zx_ac_Generation_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_Generation) */

struct zx_str_s* zx_EASY_ENC_SO_ac_Generation(struct zx_ctx* c, struct zx_ac_Generation_s* x )
{
  int len = zx_LEN_ac_Generation(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_Generation(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_Generation) */

struct zx_str_s* zx_EASY_ENC_WO_ac_Generation(struct zx_ctx* c, struct zx_ac_Generation_s* x )
{
  int len = zx_LEN_ac_Generation(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_Generation(x, buf ), buf, len);
}




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

#define EL_NAME   ac_GoverningAgreementRef
#define EL_STRUCT zx_ac_GoverningAgreementRef_s
#define EL_NS     ac
#define EL_TAG    GoverningAgreementRef

/* FUNC(zx_LEN_ac_GoverningAgreementRef) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_GoverningAgreementRef(struct zx_ac_GoverningAgreementRef_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("GoverningAgreementRef") - 1 + 1 + 2 + sizeof("GoverningAgreementRef") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->governingAgreementRef, sizeof("governingAgreementRef"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_GoverningAgreementRef) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_GoverningAgreementRef(struct zx_ac_GoverningAgreementRef_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "GoverningAgreementRef", sizeof("GoverningAgreementRef") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->governingAgreementRef, "governingAgreementRef", sizeof("governingAgreementRef")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "GoverningAgreementRef", sizeof("GoverningAgreementRef") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_GoverningAgreementRef) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_GoverningAgreementRef(struct zx_ac_GoverningAgreementRef_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_GoverningAgreementRef) */

struct zx_str_s* zx_EASY_ENC_SO_ac_GoverningAgreementRef(struct zx_ctx* c, struct zx_ac_GoverningAgreementRef_s* x )
{
  int len = zx_LEN_ac_GoverningAgreementRef(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_GoverningAgreementRef(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_GoverningAgreementRef) */

struct zx_str_s* zx_EASY_ENC_WO_ac_GoverningAgreementRef(struct zx_ctx* c, struct zx_ac_GoverningAgreementRef_s* x )
{
  int len = zx_LEN_ac_GoverningAgreementRef(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_GoverningAgreementRef(x, buf ), buf, len);
}




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

#define EL_NAME   ac_GoverningAgreements
#define EL_STRUCT zx_ac_GoverningAgreements_s
#define EL_NS     ac
#define EL_TAG    GoverningAgreements

/* FUNC(zx_LEN_ac_GoverningAgreements) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_GoverningAgreements(struct zx_ac_GoverningAgreements_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("GoverningAgreements") - 1 + 1 + 2 + sizeof("GoverningAgreements") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_GoverningAgreementRef_s* e;
      for (e = x->GoverningAgreementRef; e; e = (struct zx_ac_GoverningAgreementRef_s*)e->gg.g.n)
	  len += zx_LEN_ac_GoverningAgreementRef(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_GoverningAgreements) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_GoverningAgreements(struct zx_ac_GoverningAgreements_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "GoverningAgreements", sizeof("GoverningAgreements") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_GoverningAgreementRef_s* e;
      for (e = x->GoverningAgreementRef; e; e = (struct zx_ac_GoverningAgreementRef_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_GoverningAgreementRef(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "GoverningAgreements", sizeof("GoverningAgreements") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_GoverningAgreements) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_GoverningAgreements(struct zx_ac_GoverningAgreements_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_GoverningAgreements) */

struct zx_str_s* zx_EASY_ENC_SO_ac_GoverningAgreements(struct zx_ctx* c, struct zx_ac_GoverningAgreements_s* x )
{
  int len = zx_LEN_ac_GoverningAgreements(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_GoverningAgreements(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_GoverningAgreements) */

struct zx_str_s* zx_EASY_ENC_WO_ac_GoverningAgreements(struct zx_ctx* c, struct zx_ac_GoverningAgreements_s* x )
{
  int len = zx_LEN_ac_GoverningAgreements(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_GoverningAgreements(x, buf ), buf, len);
}




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

#define EL_NAME   ac_HTTP
#define EL_STRUCT zx_ac_HTTP_s
#define EL_NS     ac
#define EL_TAG    HTTP

/* FUNC(zx_LEN_ac_HTTP) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_HTTP(struct zx_ac_HTTP_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("HTTP") - 1 + 1 + 2 + sizeof("HTTP") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_HTTP) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_HTTP(struct zx_ac_HTTP_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "HTTP", sizeof("HTTP") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "HTTP", sizeof("HTTP") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_HTTP) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_HTTP(struct zx_ac_HTTP_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_HTTP) */

struct zx_str_s* zx_EASY_ENC_SO_ac_HTTP(struct zx_ctx* c, struct zx_ac_HTTP_s* x )
{
  int len = zx_LEN_ac_HTTP(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_HTTP(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_HTTP) */

struct zx_str_s* zx_EASY_ENC_WO_ac_HTTP(struct zx_ctx* c, struct zx_ac_HTTP_s* x )
{
  int len = zx_LEN_ac_HTTP(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_HTTP(x, buf ), buf, len);
}




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

#define EL_NAME   ac_IPAddress
#define EL_STRUCT zx_ac_IPAddress_s
#define EL_NS     ac
#define EL_TAG    IPAddress

/* FUNC(zx_LEN_ac_IPAddress) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_IPAddress(struct zx_ac_IPAddress_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("IPAddress") - 1 + 1 + 2 + sizeof("IPAddress") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_IPAddress) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_IPAddress(struct zx_ac_IPAddress_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "IPAddress", sizeof("IPAddress") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "IPAddress", sizeof("IPAddress") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_IPAddress) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_IPAddress(struct zx_ac_IPAddress_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_IPAddress) */

struct zx_str_s* zx_EASY_ENC_SO_ac_IPAddress(struct zx_ctx* c, struct zx_ac_IPAddress_s* x )
{
  int len = zx_LEN_ac_IPAddress(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_IPAddress(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_IPAddress) */

struct zx_str_s* zx_EASY_ENC_WO_ac_IPAddress(struct zx_ctx* c, struct zx_ac_IPAddress_s* x )
{
  int len = zx_LEN_ac_IPAddress(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_IPAddress(x, buf ), buf, len);
}




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

#define EL_NAME   ac_IPSec
#define EL_STRUCT zx_ac_IPSec_s
#define EL_NS     ac
#define EL_TAG    IPSec

/* FUNC(zx_LEN_ac_IPSec) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_IPSec(struct zx_ac_IPSec_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("IPSec") - 1 + 1 + 2 + sizeof("IPSec") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_IPSec) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_IPSec(struct zx_ac_IPSec_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "IPSec", sizeof("IPSec") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "IPSec", sizeof("IPSec") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_IPSec) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_IPSec(struct zx_ac_IPSec_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_IPSec) */

struct zx_str_s* zx_EASY_ENC_SO_ac_IPSec(struct zx_ctx* c, struct zx_ac_IPSec_s* x )
{
  int len = zx_LEN_ac_IPSec(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_IPSec(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_IPSec) */

struct zx_str_s* zx_EASY_ENC_WO_ac_IPSec(struct zx_ctx* c, struct zx_ac_IPSec_s* x )
{
  int len = zx_LEN_ac_IPSec(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_IPSec(x, buf ), buf, len);
}




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

#define EL_NAME   ac_Identification
#define EL_STRUCT zx_ac_Identification_s
#define EL_NS     ac
#define EL_TAG    Identification

/* FUNC(zx_LEN_ac_Identification) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_Identification(struct zx_ac_Identification_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Identification") - 1 + 1 + 2 + sizeof("Identification") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->nym, sizeof("nym"));

  {
      struct zx_ac_PhysicalVerification_s* e;
      for (e = x->PhysicalVerification; e; e = (struct zx_ac_PhysicalVerification_s*)e->gg.g.n)
	  len += zx_LEN_ac_PhysicalVerification(e);
  }
  {
      struct zx_ac_WrittenConsent_s* e;
      for (e = x->WrittenConsent; e; e = (struct zx_ac_WrittenConsent_s*)e->gg.g.n)
	  len += zx_LEN_ac_WrittenConsent(e);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_Identification) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_Identification(struct zx_ac_Identification_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Identification", sizeof("Identification") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->nym, "nym", sizeof("nym")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_PhysicalVerification_s* e;
      for (e = x->PhysicalVerification; e; e = (struct zx_ac_PhysicalVerification_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_PhysicalVerification(e, p);
  }
  {
      struct zx_ac_WrittenConsent_s* e;
      for (e = x->WrittenConsent; e; e = (struct zx_ac_WrittenConsent_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_WrittenConsent(e, p);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Identification", sizeof("Identification") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_Identification) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_Identification(struct zx_ac_Identification_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_Identification) */

struct zx_str_s* zx_EASY_ENC_SO_ac_Identification(struct zx_ctx* c, struct zx_ac_Identification_s* x )
{
  int len = zx_LEN_ac_Identification(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_Identification(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_Identification) */

struct zx_str_s* zx_EASY_ENC_WO_ac_Identification(struct zx_ctx* c, struct zx_ac_Identification_s* x )
{
  int len = zx_LEN_ac_Identification(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_Identification(x, buf ), buf, len);
}




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

#define EL_NAME   ac_KeyActivation
#define EL_STRUCT zx_ac_KeyActivation_s
#define EL_NS     ac
#define EL_TAG    KeyActivation

/* FUNC(zx_LEN_ac_KeyActivation) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_KeyActivation(struct zx_ac_KeyActivation_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("KeyActivation") - 1 + 1 + 2 + sizeof("KeyActivation") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_ActivationPin_s* e;
      for (e = x->ActivationPin; e; e = (struct zx_ac_ActivationPin_s*)e->gg.g.n)
	  len += zx_LEN_ac_ActivationPin(e);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_KeyActivation) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_KeyActivation(struct zx_ac_KeyActivation_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "KeyActivation", sizeof("KeyActivation") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_ActivationPin_s* e;
      for (e = x->ActivationPin; e; e = (struct zx_ac_ActivationPin_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_ActivationPin(e, p);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "KeyActivation", sizeof("KeyActivation") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_KeyActivation) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_KeyActivation(struct zx_ac_KeyActivation_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_KeyActivation) */

struct zx_str_s* zx_EASY_ENC_SO_ac_KeyActivation(struct zx_ctx* c, struct zx_ac_KeyActivation_s* x )
{
  int len = zx_LEN_ac_KeyActivation(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_KeyActivation(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_KeyActivation) */

struct zx_str_s* zx_EASY_ENC_WO_ac_KeyActivation(struct zx_ctx* c, struct zx_ac_KeyActivation_s* x )
{
  int len = zx_LEN_ac_KeyActivation(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_KeyActivation(x, buf ), buf, len);
}




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

#define EL_NAME   ac_KeySharing
#define EL_STRUCT zx_ac_KeySharing_s
#define EL_NS     ac
#define EL_TAG    KeySharing

/* FUNC(zx_LEN_ac_KeySharing) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_KeySharing(struct zx_ac_KeySharing_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("KeySharing") - 1 + 1 + 2 + sizeof("KeySharing") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->sharing, sizeof("sharing"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_KeySharing) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_KeySharing(struct zx_ac_KeySharing_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "KeySharing", sizeof("KeySharing") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->sharing, "sharing", sizeof("sharing")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "KeySharing", sizeof("KeySharing") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_KeySharing) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_KeySharing(struct zx_ac_KeySharing_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_KeySharing) */

struct zx_str_s* zx_EASY_ENC_SO_ac_KeySharing(struct zx_ctx* c, struct zx_ac_KeySharing_s* x )
{
  int len = zx_LEN_ac_KeySharing(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_KeySharing(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_KeySharing) */

struct zx_str_s* zx_EASY_ENC_WO_ac_KeySharing(struct zx_ctx* c, struct zx_ac_KeySharing_s* x )
{
  int len = zx_LEN_ac_KeySharing(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_KeySharing(x, buf ), buf, len);
}




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

#define EL_NAME   ac_KeyStorage
#define EL_STRUCT zx_ac_KeyStorage_s
#define EL_NS     ac
#define EL_TAG    KeyStorage

/* FUNC(zx_LEN_ac_KeyStorage) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_KeyStorage(struct zx_ac_KeyStorage_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("KeyStorage") - 1 + 1 + 2 + sizeof("KeyStorage") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->medium, sizeof("medium"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_KeyStorage) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_KeyStorage(struct zx_ac_KeyStorage_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "KeyStorage", sizeof("KeyStorage") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->medium, "medium", sizeof("medium")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "KeyStorage", sizeof("KeyStorage") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_KeyStorage) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_KeyStorage(struct zx_ac_KeyStorage_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_KeyStorage) */

struct zx_str_s* zx_EASY_ENC_SO_ac_KeyStorage(struct zx_ctx* c, struct zx_ac_KeyStorage_s* x )
{
  int len = zx_LEN_ac_KeyStorage(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_KeyStorage(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_KeyStorage) */

struct zx_str_s* zx_EASY_ENC_WO_ac_KeyStorage(struct zx_ctx* c, struct zx_ac_KeyStorage_s* x )
{
  int len = zx_LEN_ac_KeyStorage(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_KeyStorage(x, buf ), buf, len);
}




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

#define EL_NAME   ac_Length
#define EL_STRUCT zx_ac_Length_s
#define EL_NS     ac
#define EL_TAG    Length

/* FUNC(zx_LEN_ac_Length) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_Length(struct zx_ac_Length_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Length") - 1 + 1 + 2 + sizeof("Length") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->min, sizeof("min"));
  len += zx_attr_len(x->max, sizeof("max"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_Length) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_Length(struct zx_ac_Length_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Length", sizeof("Length") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->min, "min", sizeof("min")-1);
  p = zx_attr_enc(p, x->max, "max", sizeof("max")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Length", sizeof("Length") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_Length) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_Length(struct zx_ac_Length_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_Length) */

struct zx_str_s* zx_EASY_ENC_SO_ac_Length(struct zx_ctx* c, struct zx_ac_Length_s* x )
{
  int len = zx_LEN_ac_Length(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_Length(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_Length) */

struct zx_str_s* zx_EASY_ENC_WO_ac_Length(struct zx_ctx* c, struct zx_ac_Length_s* x )
{
  int len = zx_LEN_ac_Length(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_Length(x, buf ), buf, len);
}




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

#define EL_NAME   ac_MobileNetworkEndToEndEncryption
#define EL_STRUCT zx_ac_MobileNetworkEndToEndEncryption_s
#define EL_NS     ac
#define EL_TAG    MobileNetworkEndToEndEncryption

/* FUNC(zx_LEN_ac_MobileNetworkEndToEndEncryption) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_MobileNetworkEndToEndEncryption(struct zx_ac_MobileNetworkEndToEndEncryption_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("MobileNetworkEndToEndEncryption") - 1 + 1 + 2 + sizeof("MobileNetworkEndToEndEncryption") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_MobileNetworkEndToEndEncryption) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_MobileNetworkEndToEndEncryption(struct zx_ac_MobileNetworkEndToEndEncryption_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "MobileNetworkEndToEndEncryption", sizeof("MobileNetworkEndToEndEncryption") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "MobileNetworkEndToEndEncryption", sizeof("MobileNetworkEndToEndEncryption") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_MobileNetworkEndToEndEncryption) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_MobileNetworkEndToEndEncryption(struct zx_ac_MobileNetworkEndToEndEncryption_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_MobileNetworkEndToEndEncryption) */

struct zx_str_s* zx_EASY_ENC_SO_ac_MobileNetworkEndToEndEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkEndToEndEncryption_s* x )
{
  int len = zx_LEN_ac_MobileNetworkEndToEndEncryption(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_MobileNetworkEndToEndEncryption(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_MobileNetworkEndToEndEncryption) */

struct zx_str_s* zx_EASY_ENC_WO_ac_MobileNetworkEndToEndEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkEndToEndEncryption_s* x )
{
  int len = zx_LEN_ac_MobileNetworkEndToEndEncryption(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_MobileNetworkEndToEndEncryption(x, buf ), buf, len);
}




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

#define EL_NAME   ac_MobileNetworkNoEncryption
#define EL_STRUCT zx_ac_MobileNetworkNoEncryption_s
#define EL_NS     ac
#define EL_TAG    MobileNetworkNoEncryption

/* FUNC(zx_LEN_ac_MobileNetworkNoEncryption) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_MobileNetworkNoEncryption(struct zx_ac_MobileNetworkNoEncryption_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("MobileNetworkNoEncryption") - 1 + 1 + 2 + sizeof("MobileNetworkNoEncryption") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_MobileNetworkNoEncryption) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_MobileNetworkNoEncryption(struct zx_ac_MobileNetworkNoEncryption_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "MobileNetworkNoEncryption", sizeof("MobileNetworkNoEncryption") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "MobileNetworkNoEncryption", sizeof("MobileNetworkNoEncryption") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_MobileNetworkNoEncryption) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_MobileNetworkNoEncryption(struct zx_ac_MobileNetworkNoEncryption_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_MobileNetworkNoEncryption) */

struct zx_str_s* zx_EASY_ENC_SO_ac_MobileNetworkNoEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkNoEncryption_s* x )
{
  int len = zx_LEN_ac_MobileNetworkNoEncryption(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_MobileNetworkNoEncryption(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_MobileNetworkNoEncryption) */

struct zx_str_s* zx_EASY_ENC_WO_ac_MobileNetworkNoEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkNoEncryption_s* x )
{
  int len = zx_LEN_ac_MobileNetworkNoEncryption(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_MobileNetworkNoEncryption(x, buf ), buf, len);
}




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

#define EL_NAME   ac_MobileNetworkRadioEncryption
#define EL_STRUCT zx_ac_MobileNetworkRadioEncryption_s
#define EL_NS     ac
#define EL_TAG    MobileNetworkRadioEncryption

/* FUNC(zx_LEN_ac_MobileNetworkRadioEncryption) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_MobileNetworkRadioEncryption(struct zx_ac_MobileNetworkRadioEncryption_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("MobileNetworkRadioEncryption") - 1 + 1 + 2 + sizeof("MobileNetworkRadioEncryption") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_MobileNetworkRadioEncryption) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_MobileNetworkRadioEncryption(struct zx_ac_MobileNetworkRadioEncryption_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "MobileNetworkRadioEncryption", sizeof("MobileNetworkRadioEncryption") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "MobileNetworkRadioEncryption", sizeof("MobileNetworkRadioEncryption") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_MobileNetworkRadioEncryption) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_MobileNetworkRadioEncryption(struct zx_ac_MobileNetworkRadioEncryption_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_MobileNetworkRadioEncryption) */

struct zx_str_s* zx_EASY_ENC_SO_ac_MobileNetworkRadioEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkRadioEncryption_s* x )
{
  int len = zx_LEN_ac_MobileNetworkRadioEncryption(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_MobileNetworkRadioEncryption(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_MobileNetworkRadioEncryption) */

struct zx_str_s* zx_EASY_ENC_WO_ac_MobileNetworkRadioEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkRadioEncryption_s* x )
{
  int len = zx_LEN_ac_MobileNetworkRadioEncryption(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_MobileNetworkRadioEncryption(x, buf ), buf, len);
}




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

#define EL_NAME   ac_OperationalProtection
#define EL_STRUCT zx_ac_OperationalProtection_s
#define EL_NS     ac
#define EL_TAG    OperationalProtection

/* FUNC(zx_LEN_ac_OperationalProtection) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_OperationalProtection(struct zx_ac_OperationalProtection_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("OperationalProtection") - 1 + 1 + 2 + sizeof("OperationalProtection") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_SecurityAudit_s* e;
      for (e = x->SecurityAudit; e; e = (struct zx_ac_SecurityAudit_s*)e->gg.g.n)
	  len += zx_LEN_ac_SecurityAudit(e);
  }
  {
      struct zx_ac_DeactivationCallCenter_s* e;
      for (e = x->DeactivationCallCenter; e; e = (struct zx_ac_DeactivationCallCenter_s*)e->gg.g.n)
	  len += zx_LEN_ac_DeactivationCallCenter(e);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_OperationalProtection) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_OperationalProtection(struct zx_ac_OperationalProtection_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "OperationalProtection", sizeof("OperationalProtection") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_SecurityAudit_s* e;
      for (e = x->SecurityAudit; e; e = (struct zx_ac_SecurityAudit_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_SecurityAudit(e, p);
  }
  {
      struct zx_ac_DeactivationCallCenter_s* e;
      for (e = x->DeactivationCallCenter; e; e = (struct zx_ac_DeactivationCallCenter_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_DeactivationCallCenter(e, p);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "OperationalProtection", sizeof("OperationalProtection") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_OperationalProtection) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_OperationalProtection(struct zx_ac_OperationalProtection_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_OperationalProtection) */

struct zx_str_s* zx_EASY_ENC_SO_ac_OperationalProtection(struct zx_ctx* c, struct zx_ac_OperationalProtection_s* x )
{
  int len = zx_LEN_ac_OperationalProtection(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_OperationalProtection(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_OperationalProtection) */

struct zx_str_s* zx_EASY_ENC_WO_ac_OperationalProtection(struct zx_ctx* c, struct zx_ac_OperationalProtection_s* x )
{
  int len = zx_LEN_ac_OperationalProtection(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_OperationalProtection(x, buf ), buf, len);
}




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

#define EL_NAME   ac_Password
#define EL_STRUCT zx_ac_Password_s
#define EL_NS     ac
#define EL_TAG    Password

/* FUNC(zx_LEN_ac_Password) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_Password(struct zx_ac_Password_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Password") - 1 + 1 + 2 + sizeof("Password") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_Length_s* e;
      for (e = x->Length; e; e = (struct zx_ac_Length_s*)e->gg.g.n)
	  len += zx_LEN_ac_Length(e);
  }
  {
      struct zx_ac_Alphabet_s* e;
      for (e = x->Alphabet; e; e = (struct zx_ac_Alphabet_s*)e->gg.g.n)
	  len += zx_LEN_ac_Alphabet(e);
  }
  {
      struct zx_ac_Generation_s* e;
      for (e = x->Generation; e; e = (struct zx_ac_Generation_s*)e->gg.g.n)
	  len += zx_LEN_ac_Generation(e);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_Password) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_Password(struct zx_ac_Password_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Password", sizeof("Password") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_Length_s* e;
      for (e = x->Length; e; e = (struct zx_ac_Length_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Length(e, p);
  }
  {
      struct zx_ac_Alphabet_s* e;
      for (e = x->Alphabet; e; e = (struct zx_ac_Alphabet_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Alphabet(e, p);
  }
  {
      struct zx_ac_Generation_s* e;
      for (e = x->Generation; e; e = (struct zx_ac_Generation_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Generation(e, p);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Password", sizeof("Password") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_Password) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_Password(struct zx_ac_Password_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_Password) */

struct zx_str_s* zx_EASY_ENC_SO_ac_Password(struct zx_ctx* c, struct zx_ac_Password_s* x )
{
  int len = zx_LEN_ac_Password(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_Password(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_Password) */

struct zx_str_s* zx_EASY_ENC_WO_ac_Password(struct zx_ctx* c, struct zx_ac_Password_s* x )
{
  int len = zx_LEN_ac_Password(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_Password(x, buf ), buf, len);
}




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

#define EL_NAME   ac_PhysicalVerification
#define EL_STRUCT zx_ac_PhysicalVerification_s
#define EL_NS     ac
#define EL_TAG    PhysicalVerification

/* FUNC(zx_LEN_ac_PhysicalVerification) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_PhysicalVerification(struct zx_ac_PhysicalVerification_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("PhysicalVerification") - 1 + 1 + 2 + sizeof("PhysicalVerification") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->credentialLevel, sizeof("credentialLevel"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_PhysicalVerification) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_PhysicalVerification(struct zx_ac_PhysicalVerification_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "PhysicalVerification", sizeof("PhysicalVerification") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->credentialLevel, "credentialLevel", sizeof("credentialLevel")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "PhysicalVerification", sizeof("PhysicalVerification") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_PhysicalVerification) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_PhysicalVerification(struct zx_ac_PhysicalVerification_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_PhysicalVerification) */

struct zx_str_s* zx_EASY_ENC_SO_ac_PhysicalVerification(struct zx_ctx* c, struct zx_ac_PhysicalVerification_s* x )
{
  int len = zx_LEN_ac_PhysicalVerification(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_PhysicalVerification(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_PhysicalVerification) */

struct zx_str_s* zx_EASY_ENC_WO_ac_PhysicalVerification(struct zx_ctx* c, struct zx_ac_PhysicalVerification_s* x )
{
  int len = zx_LEN_ac_PhysicalVerification(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_PhysicalVerification(x, buf ), buf, len);
}




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

#define EL_NAME   ac_PreviousSession
#define EL_STRUCT zx_ac_PreviousSession_s
#define EL_NS     ac
#define EL_TAG    PreviousSession

/* FUNC(zx_LEN_ac_PreviousSession) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_PreviousSession(struct zx_ac_PreviousSession_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("PreviousSession") - 1 + 1 + 2 + sizeof("PreviousSession") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_PreviousSession) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_PreviousSession(struct zx_ac_PreviousSession_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "PreviousSession", sizeof("PreviousSession") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "PreviousSession", sizeof("PreviousSession") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_PreviousSession) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_PreviousSession(struct zx_ac_PreviousSession_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_PreviousSession) */

struct zx_str_s* zx_EASY_ENC_SO_ac_PreviousSession(struct zx_ctx* c, struct zx_ac_PreviousSession_s* x )
{
  int len = zx_LEN_ac_PreviousSession(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_PreviousSession(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_PreviousSession) */

struct zx_str_s* zx_EASY_ENC_WO_ac_PreviousSession(struct zx_ctx* c, struct zx_ac_PreviousSession_s* x )
{
  int len = zx_LEN_ac_PreviousSession(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_PreviousSession(x, buf ), buf, len);
}




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

#define EL_NAME   ac_PrincipalAuthenticationMechanism
#define EL_STRUCT zx_ac_PrincipalAuthenticationMechanism_s
#define EL_NS     ac
#define EL_TAG    PrincipalAuthenticationMechanism

/* FUNC(zx_LEN_ac_PrincipalAuthenticationMechanism) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_PrincipalAuthenticationMechanism(struct zx_ac_PrincipalAuthenticationMechanism_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("PrincipalAuthenticationMechanism") - 1 + 1 + 2 + sizeof("PrincipalAuthenticationMechanism") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_Password_s* e;
      for (e = x->Password; e; e = (struct zx_ac_Password_s*)e->gg.g.n)
	  len += zx_LEN_ac_Password(e);
  }
  {
      struct zx_ac_Token_s* e;
      for (e = x->Token; e; e = (struct zx_ac_Token_s*)e->gg.g.n)
	  len += zx_LEN_ac_Token(e);
  }
  {
      struct zx_ac_Smartcard_s* e;
      for (e = x->Smartcard; e; e = (struct zx_ac_Smartcard_s*)e->gg.g.n)
	  len += zx_LEN_ac_Smartcard(e);
  }
  {
      struct zx_ac_ActivationPin_s* e;
      for (e = x->ActivationPin; e; e = (struct zx_ac_ActivationPin_s*)e->gg.g.n)
	  len += zx_LEN_ac_ActivationPin(e);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_PrincipalAuthenticationMechanism) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_PrincipalAuthenticationMechanism(struct zx_ac_PrincipalAuthenticationMechanism_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "PrincipalAuthenticationMechanism", sizeof("PrincipalAuthenticationMechanism") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_Password_s* e;
      for (e = x->Password; e; e = (struct zx_ac_Password_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Password(e, p);
  }
  {
      struct zx_ac_Token_s* e;
      for (e = x->Token; e; e = (struct zx_ac_Token_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Token(e, p);
  }
  {
      struct zx_ac_Smartcard_s* e;
      for (e = x->Smartcard; e; e = (struct zx_ac_Smartcard_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Smartcard(e, p);
  }
  {
      struct zx_ac_ActivationPin_s* e;
      for (e = x->ActivationPin; e; e = (struct zx_ac_ActivationPin_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_ActivationPin(e, p);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "PrincipalAuthenticationMechanism", sizeof("PrincipalAuthenticationMechanism") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_PrincipalAuthenticationMechanism) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_PrincipalAuthenticationMechanism(struct zx_ac_PrincipalAuthenticationMechanism_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_PrincipalAuthenticationMechanism) */

struct zx_str_s* zx_EASY_ENC_SO_ac_PrincipalAuthenticationMechanism(struct zx_ctx* c, struct zx_ac_PrincipalAuthenticationMechanism_s* x )
{
  int len = zx_LEN_ac_PrincipalAuthenticationMechanism(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_PrincipalAuthenticationMechanism(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_PrincipalAuthenticationMechanism) */

struct zx_str_s* zx_EASY_ENC_WO_ac_PrincipalAuthenticationMechanism(struct zx_ctx* c, struct zx_ac_PrincipalAuthenticationMechanism_s* x )
{
  int len = zx_LEN_ac_PrincipalAuthenticationMechanism(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_PrincipalAuthenticationMechanism(x, buf ), buf, len);
}




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

#define EL_NAME   ac_PrivateKeyProtection
#define EL_STRUCT zx_ac_PrivateKeyProtection_s
#define EL_NS     ac
#define EL_TAG    PrivateKeyProtection

/* FUNC(zx_LEN_ac_PrivateKeyProtection) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_PrivateKeyProtection(struct zx_ac_PrivateKeyProtection_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("PrivateKeyProtection") - 1 + 1 + 2 + sizeof("PrivateKeyProtection") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_KeyActivation_s* e;
      for (e = x->KeyActivation; e; e = (struct zx_ac_KeyActivation_s*)e->gg.g.n)
	  len += zx_LEN_ac_KeyActivation(e);
  }
  {
      struct zx_ac_KeyStorage_s* e;
      for (e = x->KeyStorage; e; e = (struct zx_ac_KeyStorage_s*)e->gg.g.n)
	  len += zx_LEN_ac_KeyStorage(e);
  }
  {
      struct zx_ac_KeySharing_s* e;
      for (e = x->KeySharing; e; e = (struct zx_ac_KeySharing_s*)e->gg.g.n)
	  len += zx_LEN_ac_KeySharing(e);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_PrivateKeyProtection) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_PrivateKeyProtection(struct zx_ac_PrivateKeyProtection_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "PrivateKeyProtection", sizeof("PrivateKeyProtection") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_KeyActivation_s* e;
      for (e = x->KeyActivation; e; e = (struct zx_ac_KeyActivation_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_KeyActivation(e, p);
  }
  {
      struct zx_ac_KeyStorage_s* e;
      for (e = x->KeyStorage; e; e = (struct zx_ac_KeyStorage_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_KeyStorage(e, p);
  }
  {
      struct zx_ac_KeySharing_s* e;
      for (e = x->KeySharing; e; e = (struct zx_ac_KeySharing_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_KeySharing(e, p);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "PrivateKeyProtection", sizeof("PrivateKeyProtection") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_PrivateKeyProtection) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_PrivateKeyProtection(struct zx_ac_PrivateKeyProtection_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_PrivateKeyProtection) */

struct zx_str_s* zx_EASY_ENC_SO_ac_PrivateKeyProtection(struct zx_ctx* c, struct zx_ac_PrivateKeyProtection_s* x )
{
  int len = zx_LEN_ac_PrivateKeyProtection(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_PrivateKeyProtection(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_PrivateKeyProtection) */

struct zx_str_s* zx_EASY_ENC_WO_ac_PrivateKeyProtection(struct zx_ctx* c, struct zx_ac_PrivateKeyProtection_s* x )
{
  int len = zx_LEN_ac_PrivateKeyProtection(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_PrivateKeyProtection(x, buf ), buf, len);
}




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

#define EL_NAME   ac_ResumeSession
#define EL_STRUCT zx_ac_ResumeSession_s
#define EL_NS     ac
#define EL_TAG    ResumeSession

/* FUNC(zx_LEN_ac_ResumeSession) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_ResumeSession(struct zx_ac_ResumeSession_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ResumeSession") - 1 + 1 + 2 + sizeof("ResumeSession") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_ResumeSession) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_ResumeSession(struct zx_ac_ResumeSession_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ResumeSession", sizeof("ResumeSession") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ResumeSession", sizeof("ResumeSession") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_ResumeSession) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_ResumeSession(struct zx_ac_ResumeSession_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_ResumeSession) */

struct zx_str_s* zx_EASY_ENC_SO_ac_ResumeSession(struct zx_ctx* c, struct zx_ac_ResumeSession_s* x )
{
  int len = zx_LEN_ac_ResumeSession(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_ResumeSession(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_ResumeSession) */

struct zx_str_s* zx_EASY_ENC_WO_ac_ResumeSession(struct zx_ctx* c, struct zx_ac_ResumeSession_s* x )
{
  int len = zx_LEN_ac_ResumeSession(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_ResumeSession(x, buf ), buf, len);
}




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

#define EL_NAME   ac_SSL
#define EL_STRUCT zx_ac_SSL_s
#define EL_NS     ac
#define EL_TAG    SSL

/* FUNC(zx_LEN_ac_SSL) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_SSL(struct zx_ac_SSL_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SSL") - 1 + 1 + 2 + sizeof("SSL") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_SSL) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_SSL(struct zx_ac_SSL_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SSL", sizeof("SSL") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SSL", sizeof("SSL") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_SSL) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_SSL(struct zx_ac_SSL_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_SSL) */

struct zx_str_s* zx_EASY_ENC_SO_ac_SSL(struct zx_ctx* c, struct zx_ac_SSL_s* x )
{
  int len = zx_LEN_ac_SSL(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_SSL(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_SSL) */

struct zx_str_s* zx_EASY_ENC_WO_ac_SSL(struct zx_ctx* c, struct zx_ac_SSL_s* x )
{
  int len = zx_LEN_ac_SSL(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_SSL(x, buf ), buf, len);
}




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

#define EL_NAME   ac_SecretKeyProtection
#define EL_STRUCT zx_ac_SecretKeyProtection_s
#define EL_NS     ac
#define EL_TAG    SecretKeyProtection

/* FUNC(zx_LEN_ac_SecretKeyProtection) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_SecretKeyProtection(struct zx_ac_SecretKeyProtection_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SecretKeyProtection") - 1 + 1 + 2 + sizeof("SecretKeyProtection") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_KeyActivation_s* e;
      for (e = x->KeyActivation; e; e = (struct zx_ac_KeyActivation_s*)e->gg.g.n)
	  len += zx_LEN_ac_KeyActivation(e);
  }
  {
      struct zx_ac_KeyStorage_s* e;
      for (e = x->KeyStorage; e; e = (struct zx_ac_KeyStorage_s*)e->gg.g.n)
	  len += zx_LEN_ac_KeyStorage(e);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_SecretKeyProtection) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_SecretKeyProtection(struct zx_ac_SecretKeyProtection_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SecretKeyProtection", sizeof("SecretKeyProtection") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_KeyActivation_s* e;
      for (e = x->KeyActivation; e; e = (struct zx_ac_KeyActivation_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_KeyActivation(e, p);
  }
  {
      struct zx_ac_KeyStorage_s* e;
      for (e = x->KeyStorage; e; e = (struct zx_ac_KeyStorage_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_KeyStorage(e, p);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SecretKeyProtection", sizeof("SecretKeyProtection") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_SecretKeyProtection) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_SecretKeyProtection(struct zx_ac_SecretKeyProtection_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_SecretKeyProtection) */

struct zx_str_s* zx_EASY_ENC_SO_ac_SecretKeyProtection(struct zx_ctx* c, struct zx_ac_SecretKeyProtection_s* x )
{
  int len = zx_LEN_ac_SecretKeyProtection(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_SecretKeyProtection(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_SecretKeyProtection) */

struct zx_str_s* zx_EASY_ENC_WO_ac_SecretKeyProtection(struct zx_ctx* c, struct zx_ac_SecretKeyProtection_s* x )
{
  int len = zx_LEN_ac_SecretKeyProtection(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_SecretKeyProtection(x, buf ), buf, len);
}




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

#define EL_NAME   ac_SecurityAudit
#define EL_STRUCT zx_ac_SecurityAudit_s
#define EL_NS     ac
#define EL_TAG    SecurityAudit

/* FUNC(zx_LEN_ac_SecurityAudit) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_SecurityAudit(struct zx_ac_SecurityAudit_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SecurityAudit") - 1 + 1 + 2 + sizeof("SecurityAudit") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_SwitchAudit_s* e;
      for (e = x->SwitchAudit; e; e = (struct zx_ac_SwitchAudit_s*)e->gg.g.n)
	  len += zx_LEN_ac_SwitchAudit(e);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_SecurityAudit) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_SecurityAudit(struct zx_ac_SecurityAudit_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SecurityAudit", sizeof("SecurityAudit") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_SwitchAudit_s* e;
      for (e = x->SwitchAudit; e; e = (struct zx_ac_SwitchAudit_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_SwitchAudit(e, p);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SecurityAudit", sizeof("SecurityAudit") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_SecurityAudit) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_SecurityAudit(struct zx_ac_SecurityAudit_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_SecurityAudit) */

struct zx_str_s* zx_EASY_ENC_SO_ac_SecurityAudit(struct zx_ctx* c, struct zx_ac_SecurityAudit_s* x )
{
  int len = zx_LEN_ac_SecurityAudit(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_SecurityAudit(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_SecurityAudit) */

struct zx_str_s* zx_EASY_ENC_WO_ac_SecurityAudit(struct zx_ctx* c, struct zx_ac_SecurityAudit_s* x )
{
  int len = zx_LEN_ac_SecurityAudit(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_SecurityAudit(x, buf ), buf, len);
}




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

#define EL_NAME   ac_SharedSecretChallengeResponse
#define EL_STRUCT zx_ac_SharedSecretChallengeResponse_s
#define EL_NS     ac
#define EL_TAG    SharedSecretChallengeResponse

/* FUNC(zx_LEN_ac_SharedSecretChallengeResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_SharedSecretChallengeResponse(struct zx_ac_SharedSecretChallengeResponse_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SharedSecretChallengeResponse") - 1 + 1 + 2 + sizeof("SharedSecretChallengeResponse") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_SharedSecretChallengeResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_SharedSecretChallengeResponse(struct zx_ac_SharedSecretChallengeResponse_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SharedSecretChallengeResponse", sizeof("SharedSecretChallengeResponse") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SharedSecretChallengeResponse", sizeof("SharedSecretChallengeResponse") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_SharedSecretChallengeResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_SharedSecretChallengeResponse(struct zx_ac_SharedSecretChallengeResponse_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_SharedSecretChallengeResponse) */

struct zx_str_s* zx_EASY_ENC_SO_ac_SharedSecretChallengeResponse(struct zx_ctx* c, struct zx_ac_SharedSecretChallengeResponse_s* x )
{
  int len = zx_LEN_ac_SharedSecretChallengeResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_SharedSecretChallengeResponse(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_SharedSecretChallengeResponse) */

struct zx_str_s* zx_EASY_ENC_WO_ac_SharedSecretChallengeResponse(struct zx_ctx* c, struct zx_ac_SharedSecretChallengeResponse_s* x )
{
  int len = zx_LEN_ac_SharedSecretChallengeResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_SharedSecretChallengeResponse(x, buf ), buf, len);
}




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

#define EL_NAME   ac_SharedSecretDynamicPlaintext
#define EL_STRUCT zx_ac_SharedSecretDynamicPlaintext_s
#define EL_NS     ac
#define EL_TAG    SharedSecretDynamicPlaintext

/* FUNC(zx_LEN_ac_SharedSecretDynamicPlaintext) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_SharedSecretDynamicPlaintext(struct zx_ac_SharedSecretDynamicPlaintext_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SharedSecretDynamicPlaintext") - 1 + 1 + 2 + sizeof("SharedSecretDynamicPlaintext") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_SharedSecretDynamicPlaintext) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_SharedSecretDynamicPlaintext(struct zx_ac_SharedSecretDynamicPlaintext_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SharedSecretDynamicPlaintext", sizeof("SharedSecretDynamicPlaintext") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SharedSecretDynamicPlaintext", sizeof("SharedSecretDynamicPlaintext") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_SharedSecretDynamicPlaintext) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_SharedSecretDynamicPlaintext(struct zx_ac_SharedSecretDynamicPlaintext_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_SharedSecretDynamicPlaintext) */

struct zx_str_s* zx_EASY_ENC_SO_ac_SharedSecretDynamicPlaintext(struct zx_ctx* c, struct zx_ac_SharedSecretDynamicPlaintext_s* x )
{
  int len = zx_LEN_ac_SharedSecretDynamicPlaintext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_SharedSecretDynamicPlaintext(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_SharedSecretDynamicPlaintext) */

struct zx_str_s* zx_EASY_ENC_WO_ac_SharedSecretDynamicPlaintext(struct zx_ctx* c, struct zx_ac_SharedSecretDynamicPlaintext_s* x )
{
  int len = zx_LEN_ac_SharedSecretDynamicPlaintext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_SharedSecretDynamicPlaintext(x, buf ), buf, len);
}




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

#define EL_NAME   ac_Smartcard
#define EL_STRUCT zx_ac_Smartcard_s
#define EL_NS     ac
#define EL_TAG    Smartcard

/* FUNC(zx_LEN_ac_Smartcard) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_Smartcard(struct zx_ac_Smartcard_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Smartcard") - 1 + 1 + 2 + sizeof("Smartcard") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_Smartcard) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_Smartcard(struct zx_ac_Smartcard_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Smartcard", sizeof("Smartcard") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Smartcard", sizeof("Smartcard") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_Smartcard) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_Smartcard(struct zx_ac_Smartcard_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_Smartcard) */

struct zx_str_s* zx_EASY_ENC_SO_ac_Smartcard(struct zx_ctx* c, struct zx_ac_Smartcard_s* x )
{
  int len = zx_LEN_ac_Smartcard(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_Smartcard(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_Smartcard) */

struct zx_str_s* zx_EASY_ENC_WO_ac_Smartcard(struct zx_ctx* c, struct zx_ac_Smartcard_s* x )
{
  int len = zx_LEN_ac_Smartcard(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_Smartcard(x, buf ), buf, len);
}




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

#define EL_NAME   ac_SwitchAudit
#define EL_STRUCT zx_ac_SwitchAudit_s
#define EL_NS     ac
#define EL_TAG    SwitchAudit

/* FUNC(zx_LEN_ac_SwitchAudit) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_SwitchAudit(struct zx_ac_SwitchAudit_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SwitchAudit") - 1 + 1 + 2 + sizeof("SwitchAudit") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_SwitchAudit) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_SwitchAudit(struct zx_ac_SwitchAudit_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SwitchAudit", sizeof("SwitchAudit") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SwitchAudit", sizeof("SwitchAudit") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_SwitchAudit) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_SwitchAudit(struct zx_ac_SwitchAudit_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_SwitchAudit) */

struct zx_str_s* zx_EASY_ENC_SO_ac_SwitchAudit(struct zx_ctx* c, struct zx_ac_SwitchAudit_s* x )
{
  int len = zx_LEN_ac_SwitchAudit(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_SwitchAudit(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_SwitchAudit) */

struct zx_str_s* zx_EASY_ENC_WO_ac_SwitchAudit(struct zx_ctx* c, struct zx_ac_SwitchAudit_s* x )
{
  int len = zx_LEN_ac_SwitchAudit(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_SwitchAudit(x, buf ), buf, len);
}




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

#define EL_NAME   ac_TechnicalProtection
#define EL_STRUCT zx_ac_TechnicalProtection_s
#define EL_NS     ac
#define EL_TAG    TechnicalProtection

/* FUNC(zx_LEN_ac_TechnicalProtection) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_TechnicalProtection(struct zx_ac_TechnicalProtection_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("TechnicalProtection") - 1 + 1 + 2 + sizeof("TechnicalProtection") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_PrivateKeyProtection_s* e;
      for (e = x->PrivateKeyProtection; e; e = (struct zx_ac_PrivateKeyProtection_s*)e->gg.g.n)
	  len += zx_LEN_ac_PrivateKeyProtection(e);
  }
  {
      struct zx_ac_SecretKeyProtection_s* e;
      for (e = x->SecretKeyProtection; e; e = (struct zx_ac_SecretKeyProtection_s*)e->gg.g.n)
	  len += zx_LEN_ac_SecretKeyProtection(e);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_TechnicalProtection) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_TechnicalProtection(struct zx_ac_TechnicalProtection_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "TechnicalProtection", sizeof("TechnicalProtection") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_PrivateKeyProtection_s* e;
      for (e = x->PrivateKeyProtection; e; e = (struct zx_ac_PrivateKeyProtection_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_PrivateKeyProtection(e, p);
  }
  {
      struct zx_ac_SecretKeyProtection_s* e;
      for (e = x->SecretKeyProtection; e; e = (struct zx_ac_SecretKeyProtection_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_SecretKeyProtection(e, p);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "TechnicalProtection", sizeof("TechnicalProtection") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_TechnicalProtection) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_TechnicalProtection(struct zx_ac_TechnicalProtection_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_TechnicalProtection) */

struct zx_str_s* zx_EASY_ENC_SO_ac_TechnicalProtection(struct zx_ctx* c, struct zx_ac_TechnicalProtection_s* x )
{
  int len = zx_LEN_ac_TechnicalProtection(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_TechnicalProtection(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_TechnicalProtection) */

struct zx_str_s* zx_EASY_ENC_WO_ac_TechnicalProtection(struct zx_ctx* c, struct zx_ac_TechnicalProtection_s* x )
{
  int len = zx_LEN_ac_TechnicalProtection(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_TechnicalProtection(x, buf ), buf, len);
}




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

#define EL_NAME   ac_TimeSyncToken
#define EL_STRUCT zx_ac_TimeSyncToken_s
#define EL_NS     ac
#define EL_TAG    TimeSyncToken

/* FUNC(zx_LEN_ac_TimeSyncToken) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_TimeSyncToken(struct zx_ac_TimeSyncToken_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("TimeSyncToken") - 1 + 1 + 2 + sizeof("TimeSyncToken") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->DeviceType, sizeof("DeviceType"));
  len += zx_attr_len(x->SeedLength, sizeof("SeedLength"));
  len += zx_attr_len(x->DeviceInHand, sizeof("DeviceInHand"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_TimeSyncToken) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_TimeSyncToken(struct zx_ac_TimeSyncToken_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "TimeSyncToken", sizeof("TimeSyncToken") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->DeviceType, "DeviceType", sizeof("DeviceType")-1);
  p = zx_attr_enc(p, x->SeedLength, "SeedLength", sizeof("SeedLength")-1);
  p = zx_attr_enc(p, x->DeviceInHand, "DeviceInHand", sizeof("DeviceInHand")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "TimeSyncToken", sizeof("TimeSyncToken") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_TimeSyncToken) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_TimeSyncToken(struct zx_ac_TimeSyncToken_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_TimeSyncToken) */

struct zx_str_s* zx_EASY_ENC_SO_ac_TimeSyncToken(struct zx_ctx* c, struct zx_ac_TimeSyncToken_s* x )
{
  int len = zx_LEN_ac_TimeSyncToken(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_TimeSyncToken(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_TimeSyncToken) */

struct zx_str_s* zx_EASY_ENC_WO_ac_TimeSyncToken(struct zx_ctx* c, struct zx_ac_TimeSyncToken_s* x )
{
  int len = zx_LEN_ac_TimeSyncToken(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_TimeSyncToken(x, buf ), buf, len);
}




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

#define EL_NAME   ac_Token
#define EL_STRUCT zx_ac_Token_s
#define EL_NS     ac
#define EL_TAG    Token

/* FUNC(zx_LEN_ac_Token) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_Token(struct zx_ac_Token_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Token") - 1 + 1 + 2 + sizeof("Token") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_TimeSyncToken_s* e;
      for (e = x->TimeSyncToken; e; e = (struct zx_ac_TimeSyncToken_s*)e->gg.g.n)
	  len += zx_LEN_ac_TimeSyncToken(e);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_Token) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_Token(struct zx_ac_Token_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Token", sizeof("Token") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_TimeSyncToken_s* e;
      for (e = x->TimeSyncToken; e; e = (struct zx_ac_TimeSyncToken_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_TimeSyncToken(e, p);
  }
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Token", sizeof("Token") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_Token) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_Token(struct zx_ac_Token_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_Token) */

struct zx_str_s* zx_EASY_ENC_SO_ac_Token(struct zx_ctx* c, struct zx_ac_Token_s* x )
{
  int len = zx_LEN_ac_Token(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_Token(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_Token) */

struct zx_str_s* zx_EASY_ENC_WO_ac_Token(struct zx_ctx* c, struct zx_ac_Token_s* x )
{
  int len = zx_LEN_ac_Token(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_Token(x, buf ), buf, len);
}




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

#define EL_NAME   ac_WTLS
#define EL_STRUCT zx_ac_WTLS_s
#define EL_NS     ac
#define EL_TAG    WTLS

/* FUNC(zx_LEN_ac_WTLS) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_WTLS(struct zx_ac_WTLS_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("WTLS") - 1 + 1 + 2 + sizeof("WTLS") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_WTLS) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_WTLS(struct zx_ac_WTLS_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "WTLS", sizeof("WTLS") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "WTLS", sizeof("WTLS") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_WTLS) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_WTLS(struct zx_ac_WTLS_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_WTLS) */

struct zx_str_s* zx_EASY_ENC_SO_ac_WTLS(struct zx_ctx* c, struct zx_ac_WTLS_s* x )
{
  int len = zx_LEN_ac_WTLS(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_WTLS(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_WTLS) */

struct zx_str_s* zx_EASY_ENC_WO_ac_WTLS(struct zx_ctx* c, struct zx_ac_WTLS_s* x )
{
  int len = zx_LEN_ac_WTLS(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_WTLS(x, buf ), buf, len);
}




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

#define EL_NAME   ac_WrittenConsent
#define EL_STRUCT zx_ac_WrittenConsent_s
#define EL_NS     ac
#define EL_TAG    WrittenConsent

/* FUNC(zx_LEN_ac_WrittenConsent) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_WrittenConsent(struct zx_ac_WrittenConsent_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("WrittenConsent") - 1 + 1 + 2 + sizeof("WrittenConsent") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_WrittenConsent) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_WrittenConsent(struct zx_ac_WrittenConsent_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "WrittenConsent", sizeof("WrittenConsent") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "WrittenConsent", sizeof("WrittenConsent") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_WrittenConsent) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_WrittenConsent(struct zx_ac_WrittenConsent_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_WrittenConsent) */

struct zx_str_s* zx_EASY_ENC_SO_ac_WrittenConsent(struct zx_ctx* c, struct zx_ac_WrittenConsent_s* x )
{
  int len = zx_LEN_ac_WrittenConsent(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_WrittenConsent(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_WrittenConsent) */

struct zx_str_s* zx_EASY_ENC_WO_ac_WrittenConsent(struct zx_ctx* c, struct zx_ac_WrittenConsent_s* x )
{
  int len = zx_LEN_ac_WrittenConsent(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_WrittenConsent(x, buf ), buf, len);
}




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

#define EL_NAME   ac_ZeroKnowledge
#define EL_STRUCT zx_ac_ZeroKnowledge_s
#define EL_NS     ac
#define EL_TAG    ZeroKnowledge

/* FUNC(zx_LEN_ac_ZeroKnowledge) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ac_ZeroKnowledge(struct zx_ac_ZeroKnowledge_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ZeroKnowledge") - 1 + 1 + 2 + sizeof("ZeroKnowledge") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ac_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ac_ZeroKnowledge) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ac_ZeroKnowledge(struct zx_ac_ZeroKnowledge_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ZeroKnowledge", sizeof("ZeroKnowledge") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ac_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ac_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ZeroKnowledge", sizeof("ZeroKnowledge") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ac_ZeroKnowledge) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ac_ZeroKnowledge(struct zx_ac_ZeroKnowledge_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ac_ZeroKnowledge) */

struct zx_str_s* zx_EASY_ENC_SO_ac_ZeroKnowledge(struct zx_ctx* c, struct zx_ac_ZeroKnowledge_s* x )
{
  int len = zx_LEN_ac_ZeroKnowledge(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ac_ZeroKnowledge(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ac_ZeroKnowledge) */

struct zx_str_s* zx_EASY_ENC_WO_ac_ZeroKnowledge(struct zx_ctx* c, struct zx_ac_ZeroKnowledge_s* x )
{
  int len = zx_LEN_ac_ZeroKnowledge(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ac_ZeroKnowledge(x, buf ), buf, len);
}




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

#define EL_NAME   ds_CanonicalizationMethod
#define EL_STRUCT zx_ds_CanonicalizationMethod_s
#define EL_NS     ds
#define EL_TAG    CanonicalizationMethod

/* FUNC(zx_LEN_ds_CanonicalizationMethod) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ds_CanonicalizationMethod(struct zx_ds_CanonicalizationMethod_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("CanonicalizationMethod") - 1 + 1 + 2 + sizeof("CanonicalizationMethod") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Algorithm, sizeof("Algorithm"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ds_CanonicalizationMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ds_CanonicalizationMethod(struct zx_ds_CanonicalizationMethod_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "CanonicalizationMethod", sizeof("CanonicalizationMethod") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Algorithm, "Algorithm", sizeof("Algorithm")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "CanonicalizationMethod", sizeof("CanonicalizationMethod") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ds_CanonicalizationMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ds_CanonicalizationMethod(struct zx_ds_CanonicalizationMethod_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ds_CanonicalizationMethod) */

struct zx_str_s* zx_EASY_ENC_SO_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ds_CanonicalizationMethod_s* x )
{
  int len = zx_LEN_ds_CanonicalizationMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ds_CanonicalizationMethod(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ds_CanonicalizationMethod) */

struct zx_str_s* zx_EASY_ENC_WO_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ds_CanonicalizationMethod_s* x )
{
  int len = zx_LEN_ds_CanonicalizationMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ds_CanonicalizationMethod(x, buf ), buf, len);
}




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

#define EL_NAME   ds_DSAKeyValue
#define EL_STRUCT zx_ds_DSAKeyValue_s
#define EL_NS     ds
#define EL_TAG    DSAKeyValue

/* FUNC(zx_LEN_ds_DSAKeyValue) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ds_DSAKeyValue(struct zx_ds_DSAKeyValue_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("DSAKeyValue") - 1 + 1 + 2 + sizeof("DSAKeyValue") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->P; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("P") - 1);
  for (se = x->Q; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("Q") - 1);
  for (se = x->G; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("G") - 1);
  for (se = x->Y; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("Y") - 1);
  for (se = x->J; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("J") - 1);
  for (se = x->Seed; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("Seed") - 1);
  for (se = x->PgenCounter; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("PgenCounter") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ds_DSAKeyValue) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ds_DSAKeyValue(struct zx_ds_DSAKeyValue_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "DSAKeyValue", sizeof("DSAKeyValue") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->P; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "P", sizeof("P") - 1);
  for (se = x->Q; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "Q", sizeof("Q") - 1);
  for (se = x->G; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "G", sizeof("G") - 1);
  for (se = x->Y; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "Y", sizeof("Y") - 1);
  for (se = x->J; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "J", sizeof("J") - 1);
  for (se = x->Seed; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "Seed", sizeof("Seed") - 1);
  for (se = x->PgenCounter; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "PgenCounter", sizeof("PgenCounter") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "DSAKeyValue", sizeof("DSAKeyValue") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ds_DSAKeyValue) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ds_DSAKeyValue(struct zx_ds_DSAKeyValue_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ds_DSAKeyValue) */

struct zx_str_s* zx_EASY_ENC_SO_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ds_DSAKeyValue_s* x )
{
  int len = zx_LEN_ds_DSAKeyValue(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ds_DSAKeyValue(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ds_DSAKeyValue) */

struct zx_str_s* zx_EASY_ENC_WO_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ds_DSAKeyValue_s* x )
{
  int len = zx_LEN_ds_DSAKeyValue(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ds_DSAKeyValue(x, buf ), buf, len);
}




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

#define EL_NAME   ds_DigestMethod
#define EL_STRUCT zx_ds_DigestMethod_s
#define EL_NS     ds
#define EL_TAG    DigestMethod

/* FUNC(zx_LEN_ds_DigestMethod) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ds_DigestMethod(struct zx_ds_DigestMethod_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("DigestMethod") - 1 + 1 + 2 + sizeof("DigestMethod") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Algorithm, sizeof("Algorithm"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ds_DigestMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ds_DigestMethod(struct zx_ds_DigestMethod_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "DigestMethod", sizeof("DigestMethod") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Algorithm, "Algorithm", sizeof("Algorithm")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "DigestMethod", sizeof("DigestMethod") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ds_DigestMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ds_DigestMethod(struct zx_ds_DigestMethod_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ds_DigestMethod) */

struct zx_str_s* zx_EASY_ENC_SO_ds_DigestMethod(struct zx_ctx* c, struct zx_ds_DigestMethod_s* x )
{
  int len = zx_LEN_ds_DigestMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ds_DigestMethod(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ds_DigestMethod) */

struct zx_str_s* zx_EASY_ENC_WO_ds_DigestMethod(struct zx_ctx* c, struct zx_ds_DigestMethod_s* x )
{
  int len = zx_LEN_ds_DigestMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ds_DigestMethod(x, buf ), buf, len);
}




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

#define EL_NAME   ds_KeyInfo
#define EL_STRUCT zx_ds_KeyInfo_s
#define EL_NS     ds
#define EL_TAG    KeyInfo

/* FUNC(zx_LEN_ds_KeyInfo) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ds_KeyInfo(struct zx_ds_KeyInfo_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("KeyInfo") - 1 + 1 + 2 + sizeof("KeyInfo") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Id, sizeof("Id"));

  for (se = x->KeyName; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("KeyName") - 1);
  {
      struct zx_ds_KeyValue_s* e;
      for (e = x->KeyValue; e; e = (struct zx_ds_KeyValue_s*)e->gg.g.n)
	  len += zx_LEN_ds_KeyValue(e);
  }
  {
      struct zx_ds_RetrievalMethod_s* e;
      for (e = x->RetrievalMethod; e; e = (struct zx_ds_RetrievalMethod_s*)e->gg.g.n)
	  len += zx_LEN_ds_RetrievalMethod(e);
  }
  {
      struct zx_ds_X509Data_s* e;
      for (e = x->X509Data; e; e = (struct zx_ds_X509Data_s*)e->gg.g.n)
	  len += zx_LEN_ds_X509Data(e);
  }
  {
      struct zx_ds_PGPData_s* e;
      for (e = x->PGPData; e; e = (struct zx_ds_PGPData_s*)e->gg.g.n)
	  len += zx_LEN_ds_PGPData(e);
  }
  {
      struct zx_ds_SPKIData_s* e;
      for (e = x->SPKIData; e; e = (struct zx_ds_SPKIData_s*)e->gg.g.n)
	  len += zx_LEN_ds_SPKIData(e);
  }
  for (se = x->MgmtData; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("MgmtData") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ds_KeyInfo) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ds_KeyInfo(struct zx_ds_KeyInfo_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "KeyInfo", sizeof("KeyInfo") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Id, "Id", sizeof("Id")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->KeyName; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "KeyName", sizeof("KeyName") - 1);
  {
      struct zx_ds_KeyValue_s* e;
      for (e = x->KeyValue; e; e = (struct zx_ds_KeyValue_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_KeyValue(e, p);
  }
  {
      struct zx_ds_RetrievalMethod_s* e;
      for (e = x->RetrievalMethod; e; e = (struct zx_ds_RetrievalMethod_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_RetrievalMethod(e, p);
  }
  {
      struct zx_ds_X509Data_s* e;
      for (e = x->X509Data; e; e = (struct zx_ds_X509Data_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_X509Data(e, p);
  }
  {
      struct zx_ds_PGPData_s* e;
      for (e = x->PGPData; e; e = (struct zx_ds_PGPData_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_PGPData(e, p);
  }
  {
      struct zx_ds_SPKIData_s* e;
      for (e = x->SPKIData; e; e = (struct zx_ds_SPKIData_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_SPKIData(e, p);
  }
  for (se = x->MgmtData; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "MgmtData", sizeof("MgmtData") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "KeyInfo", sizeof("KeyInfo") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ds_KeyInfo) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ds_KeyInfo(struct zx_ds_KeyInfo_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ds_KeyInfo) */

struct zx_str_s* zx_EASY_ENC_SO_ds_KeyInfo(struct zx_ctx* c, struct zx_ds_KeyInfo_s* x )
{
  int len = zx_LEN_ds_KeyInfo(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ds_KeyInfo(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ds_KeyInfo) */

struct zx_str_s* zx_EASY_ENC_WO_ds_KeyInfo(struct zx_ctx* c, struct zx_ds_KeyInfo_s* x )
{
  int len = zx_LEN_ds_KeyInfo(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ds_KeyInfo(x, buf ), buf, len);
}




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

#define EL_NAME   ds_KeyValue
#define EL_STRUCT zx_ds_KeyValue_s
#define EL_NS     ds
#define EL_TAG    KeyValue

/* FUNC(zx_LEN_ds_KeyValue) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ds_KeyValue(struct zx_ds_KeyValue_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("KeyValue") - 1 + 1 + 2 + sizeof("KeyValue") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ds_DSAKeyValue_s* e;
      for (e = x->DSAKeyValue; e; e = (struct zx_ds_DSAKeyValue_s*)e->gg.g.n)
	  len += zx_LEN_ds_DSAKeyValue(e);
  }
  {
      struct zx_ds_RSAKeyValue_s* e;
      for (e = x->RSAKeyValue; e; e = (struct zx_ds_RSAKeyValue_s*)e->gg.g.n)
	  len += zx_LEN_ds_RSAKeyValue(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ds_KeyValue) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ds_KeyValue(struct zx_ds_KeyValue_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "KeyValue", sizeof("KeyValue") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ds_DSAKeyValue_s* e;
      for (e = x->DSAKeyValue; e; e = (struct zx_ds_DSAKeyValue_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_DSAKeyValue(e, p);
  }
  {
      struct zx_ds_RSAKeyValue_s* e;
      for (e = x->RSAKeyValue; e; e = (struct zx_ds_RSAKeyValue_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_RSAKeyValue(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "KeyValue", sizeof("KeyValue") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ds_KeyValue) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ds_KeyValue(struct zx_ds_KeyValue_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ds_KeyValue) */

struct zx_str_s* zx_EASY_ENC_SO_ds_KeyValue(struct zx_ctx* c, struct zx_ds_KeyValue_s* x )
{
  int len = zx_LEN_ds_KeyValue(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ds_KeyValue(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ds_KeyValue) */

struct zx_str_s* zx_EASY_ENC_WO_ds_KeyValue(struct zx_ctx* c, struct zx_ds_KeyValue_s* x )
{
  int len = zx_LEN_ds_KeyValue(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ds_KeyValue(x, buf ), buf, len);
}




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

#define EL_NAME   ds_Manifest
#define EL_STRUCT zx_ds_Manifest_s
#define EL_NS     ds
#define EL_TAG    Manifest

/* FUNC(zx_LEN_ds_Manifest) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ds_Manifest(struct zx_ds_Manifest_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Manifest") - 1 + 1 + 2 + sizeof("Manifest") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Id, sizeof("Id"));

  {
      struct zx_ds_Reference_s* e;
      for (e = x->Reference; e; e = (struct zx_ds_Reference_s*)e->gg.g.n)
	  len += zx_LEN_ds_Reference(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ds_Manifest) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ds_Manifest(struct zx_ds_Manifest_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Manifest", sizeof("Manifest") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Id, "Id", sizeof("Id")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ds_Reference_s* e;
      for (e = x->Reference; e; e = (struct zx_ds_Reference_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Reference(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Manifest", sizeof("Manifest") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ds_Manifest) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ds_Manifest(struct zx_ds_Manifest_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ds_Manifest) */

struct zx_str_s* zx_EASY_ENC_SO_ds_Manifest(struct zx_ctx* c, struct zx_ds_Manifest_s* x )
{
  int len = zx_LEN_ds_Manifest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ds_Manifest(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ds_Manifest) */

struct zx_str_s* zx_EASY_ENC_WO_ds_Manifest(struct zx_ctx* c, struct zx_ds_Manifest_s* x )
{
  int len = zx_LEN_ds_Manifest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ds_Manifest(x, buf ), buf, len);
}




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

#define EL_NAME   ds_Object
#define EL_STRUCT zx_ds_Object_s
#define EL_NS     ds
#define EL_TAG    Object

/* FUNC(zx_LEN_ds_Object) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ds_Object(struct zx_ds_Object_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Object") - 1 + 1 + 2 + sizeof("Object") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Id, sizeof("Id"));
  len += zx_attr_len(x->MimeType, sizeof("MimeType"));
  len += zx_attr_len(x->Encoding, sizeof("Encoding"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ds_Object) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ds_Object(struct zx_ds_Object_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Object", sizeof("Object") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Id, "Id", sizeof("Id")-1);
  p = zx_attr_enc(p, x->MimeType, "MimeType", sizeof("MimeType")-1);
  p = zx_attr_enc(p, x->Encoding, "Encoding", sizeof("Encoding")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Object", sizeof("Object") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ds_Object) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ds_Object(struct zx_ds_Object_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ds_Object) */

struct zx_str_s* zx_EASY_ENC_SO_ds_Object(struct zx_ctx* c, struct zx_ds_Object_s* x )
{
  int len = zx_LEN_ds_Object(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ds_Object(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ds_Object) */

struct zx_str_s* zx_EASY_ENC_WO_ds_Object(struct zx_ctx* c, struct zx_ds_Object_s* x )
{
  int len = zx_LEN_ds_Object(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ds_Object(x, buf ), buf, len);
}




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

#define EL_NAME   ds_PGPData
#define EL_STRUCT zx_ds_PGPData_s
#define EL_NS     ds
#define EL_TAG    PGPData

/* FUNC(zx_LEN_ds_PGPData) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ds_PGPData(struct zx_ds_PGPData_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("PGPData") - 1 + 1 + 2 + sizeof("PGPData") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->PGPKeyID; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("PGPKeyID") - 1);
  for (se = x->PGPKeyPacket; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("PGPKeyPacket") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ds_PGPData) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ds_PGPData(struct zx_ds_PGPData_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "PGPData", sizeof("PGPData") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->PGPKeyID; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "PGPKeyID", sizeof("PGPKeyID") - 1);
  for (se = x->PGPKeyPacket; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "PGPKeyPacket", sizeof("PGPKeyPacket") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "PGPData", sizeof("PGPData") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ds_PGPData) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ds_PGPData(struct zx_ds_PGPData_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ds_PGPData) */

struct zx_str_s* zx_EASY_ENC_SO_ds_PGPData(struct zx_ctx* c, struct zx_ds_PGPData_s* x )
{
  int len = zx_LEN_ds_PGPData(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ds_PGPData(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ds_PGPData) */

struct zx_str_s* zx_EASY_ENC_WO_ds_PGPData(struct zx_ctx* c, struct zx_ds_PGPData_s* x )
{
  int len = zx_LEN_ds_PGPData(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ds_PGPData(x, buf ), buf, len);
}




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

#define EL_NAME   ds_RSAKeyValue
#define EL_STRUCT zx_ds_RSAKeyValue_s
#define EL_NS     ds
#define EL_TAG    RSAKeyValue

/* FUNC(zx_LEN_ds_RSAKeyValue) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ds_RSAKeyValue(struct zx_ds_RSAKeyValue_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("RSAKeyValue") - 1 + 1 + 2 + sizeof("RSAKeyValue") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->Modulus; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("Modulus") - 1);
  for (se = x->Exponent; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("Exponent") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ds_RSAKeyValue) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ds_RSAKeyValue(struct zx_ds_RSAKeyValue_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RSAKeyValue", sizeof("RSAKeyValue") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->Modulus; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "Modulus", sizeof("Modulus") - 1);
  for (se = x->Exponent; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "Exponent", sizeof("Exponent") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RSAKeyValue", sizeof("RSAKeyValue") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ds_RSAKeyValue) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ds_RSAKeyValue(struct zx_ds_RSAKeyValue_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ds_RSAKeyValue) */

struct zx_str_s* zx_EASY_ENC_SO_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ds_RSAKeyValue_s* x )
{
  int len = zx_LEN_ds_RSAKeyValue(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ds_RSAKeyValue(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ds_RSAKeyValue) */

struct zx_str_s* zx_EASY_ENC_WO_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ds_RSAKeyValue_s* x )
{
  int len = zx_LEN_ds_RSAKeyValue(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ds_RSAKeyValue(x, buf ), buf, len);
}




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

#define EL_NAME   ds_Reference
#define EL_STRUCT zx_ds_Reference_s
#define EL_NS     ds
#define EL_TAG    Reference

/* FUNC(zx_LEN_ds_Reference) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ds_Reference(struct zx_ds_Reference_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Reference") - 1 + 1 + 2 + sizeof("Reference") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Id, sizeof("Id"));
  len += zx_attr_len(x->URI, sizeof("URI"));
  len += zx_attr_len(x->Type, sizeof("Type"));

  {
      struct zx_ds_Transforms_s* e;
      for (e = x->Transforms; e; e = (struct zx_ds_Transforms_s*)e->gg.g.n)
	  len += zx_LEN_ds_Transforms(e);
  }
  {
      struct zx_ds_DigestMethod_s* e;
      for (e = x->DigestMethod; e; e = (struct zx_ds_DigestMethod_s*)e->gg.g.n)
	  len += zx_LEN_ds_DigestMethod(e);
  }
  for (se = x->DigestValue; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("DigestValue") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ds_Reference) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ds_Reference(struct zx_ds_Reference_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Reference", sizeof("Reference") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Id, "Id", sizeof("Id")-1);
  p = zx_attr_enc(p, x->URI, "URI", sizeof("URI")-1);
  p = zx_attr_enc(p, x->Type, "Type", sizeof("Type")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ds_Transforms_s* e;
      for (e = x->Transforms; e; e = (struct zx_ds_Transforms_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Transforms(e, p);
  }
  {
      struct zx_ds_DigestMethod_s* e;
      for (e = x->DigestMethod; e; e = (struct zx_ds_DigestMethod_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_DigestMethod(e, p);
  }
  for (se = x->DigestValue; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "DigestValue", sizeof("DigestValue") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Reference", sizeof("Reference") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ds_Reference) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ds_Reference(struct zx_ds_Reference_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ds_Reference) */

struct zx_str_s* zx_EASY_ENC_SO_ds_Reference(struct zx_ctx* c, struct zx_ds_Reference_s* x )
{
  int len = zx_LEN_ds_Reference(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ds_Reference(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ds_Reference) */

struct zx_str_s* zx_EASY_ENC_WO_ds_Reference(struct zx_ctx* c, struct zx_ds_Reference_s* x )
{
  int len = zx_LEN_ds_Reference(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ds_Reference(x, buf ), buf, len);
}




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

#define EL_NAME   ds_RetrievalMethod
#define EL_STRUCT zx_ds_RetrievalMethod_s
#define EL_NS     ds
#define EL_TAG    RetrievalMethod

/* FUNC(zx_LEN_ds_RetrievalMethod) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ds_RetrievalMethod(struct zx_ds_RetrievalMethod_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("RetrievalMethod") - 1 + 1 + 2 + sizeof("RetrievalMethod") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->URI, sizeof("URI"));
  len += zx_attr_len(x->Type, sizeof("Type"));

  {
      struct zx_ds_Transforms_s* e;
      for (e = x->Transforms; e; e = (struct zx_ds_Transforms_s*)e->gg.g.n)
	  len += zx_LEN_ds_Transforms(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ds_RetrievalMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ds_RetrievalMethod(struct zx_ds_RetrievalMethod_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RetrievalMethod", sizeof("RetrievalMethod") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->URI, "URI", sizeof("URI")-1);
  p = zx_attr_enc(p, x->Type, "Type", sizeof("Type")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ds_Transforms_s* e;
      for (e = x->Transforms; e; e = (struct zx_ds_Transforms_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Transforms(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RetrievalMethod", sizeof("RetrievalMethod") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ds_RetrievalMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ds_RetrievalMethod(struct zx_ds_RetrievalMethod_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ds_RetrievalMethod) */

struct zx_str_s* zx_EASY_ENC_SO_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ds_RetrievalMethod_s* x )
{
  int len = zx_LEN_ds_RetrievalMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ds_RetrievalMethod(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ds_RetrievalMethod) */

struct zx_str_s* zx_EASY_ENC_WO_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ds_RetrievalMethod_s* x )
{
  int len = zx_LEN_ds_RetrievalMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ds_RetrievalMethod(x, buf ), buf, len);
}




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

#define EL_NAME   ds_SPKIData
#define EL_STRUCT zx_ds_SPKIData_s
#define EL_NS     ds
#define EL_TAG    SPKIData

/* FUNC(zx_LEN_ds_SPKIData) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ds_SPKIData(struct zx_ds_SPKIData_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SPKIData") - 1 + 1 + 2 + sizeof("SPKIData") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->SPKISexp; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("SPKISexp") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ds_SPKIData) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ds_SPKIData(struct zx_ds_SPKIData_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SPKIData", sizeof("SPKIData") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->SPKISexp; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "SPKISexp", sizeof("SPKISexp") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SPKIData", sizeof("SPKIData") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ds_SPKIData) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ds_SPKIData(struct zx_ds_SPKIData_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ds_SPKIData) */

struct zx_str_s* zx_EASY_ENC_SO_ds_SPKIData(struct zx_ctx* c, struct zx_ds_SPKIData_s* x )
{
  int len = zx_LEN_ds_SPKIData(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ds_SPKIData(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ds_SPKIData) */

struct zx_str_s* zx_EASY_ENC_WO_ds_SPKIData(struct zx_ctx* c, struct zx_ds_SPKIData_s* x )
{
  int len = zx_LEN_ds_SPKIData(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ds_SPKIData(x, buf ), buf, len);
}




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

#define EL_NAME   ds_Signature
#define EL_STRUCT zx_ds_Signature_s
#define EL_NS     ds
#define EL_TAG    Signature

/* FUNC(zx_LEN_ds_Signature) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ds_Signature(struct zx_ds_Signature_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Signature") - 1 + 1 + 2 + sizeof("Signature") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Id, sizeof("Id"));

  {
      struct zx_ds_SignedInfo_s* e;
      for (e = x->SignedInfo; e; e = (struct zx_ds_SignedInfo_s*)e->gg.g.n)
	  len += zx_LEN_ds_SignedInfo(e);
  }
  {
      struct zx_ds_SignatureValue_s* e;
      for (e = x->SignatureValue; e; e = (struct zx_ds_SignatureValue_s*)e->gg.g.n)
	  len += zx_LEN_ds_SignatureValue(e);
  }
  {
      struct zx_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n)
	  len += zx_LEN_ds_KeyInfo(e);
  }
  {
      struct zx_ds_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ds_Object_s*)e->gg.g.n)
	  len += zx_LEN_ds_Object(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ds_Signature) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ds_Signature(struct zx_ds_Signature_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Signature", sizeof("Signature") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Id, "Id", sizeof("Id")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ds_SignedInfo_s* e;
      for (e = x->SignedInfo; e; e = (struct zx_ds_SignedInfo_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_SignedInfo(e, p);
  }
  {
      struct zx_ds_SignatureValue_s* e;
      for (e = x->SignatureValue; e; e = (struct zx_ds_SignatureValue_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_SignatureValue(e, p);
  }
  {
      struct zx_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_KeyInfo(e, p);
  }
  {
      struct zx_ds_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ds_Object_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Object(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Signature", sizeof("Signature") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ds_Signature) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ds_Signature(struct zx_ds_Signature_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ds_Signature) */

struct zx_str_s* zx_EASY_ENC_SO_ds_Signature(struct zx_ctx* c, struct zx_ds_Signature_s* x )
{
  int len = zx_LEN_ds_Signature(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ds_Signature(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ds_Signature) */

struct zx_str_s* zx_EASY_ENC_WO_ds_Signature(struct zx_ctx* c, struct zx_ds_Signature_s* x )
{
  int len = zx_LEN_ds_Signature(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ds_Signature(x, buf ), buf, len);
}




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

#define EL_NAME   ds_SignatureMethod
#define EL_STRUCT zx_ds_SignatureMethod_s
#define EL_NS     ds
#define EL_TAG    SignatureMethod

/* FUNC(zx_LEN_ds_SignatureMethod) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ds_SignatureMethod(struct zx_ds_SignatureMethod_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SignatureMethod") - 1 + 1 + 2 + sizeof("SignatureMethod") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Algorithm, sizeof("Algorithm"));

  for (se = x->HMACOutputLength; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("HMACOutputLength") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ds_SignatureMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ds_SignatureMethod(struct zx_ds_SignatureMethod_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SignatureMethod", sizeof("SignatureMethod") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Algorithm, "Algorithm", sizeof("Algorithm")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->HMACOutputLength; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "HMACOutputLength", sizeof("HMACOutputLength") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SignatureMethod", sizeof("SignatureMethod") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ds_SignatureMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ds_SignatureMethod(struct zx_ds_SignatureMethod_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ds_SignatureMethod) */

struct zx_str_s* zx_EASY_ENC_SO_ds_SignatureMethod(struct zx_ctx* c, struct zx_ds_SignatureMethod_s* x )
{
  int len = zx_LEN_ds_SignatureMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ds_SignatureMethod(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ds_SignatureMethod) */

struct zx_str_s* zx_EASY_ENC_WO_ds_SignatureMethod(struct zx_ctx* c, struct zx_ds_SignatureMethod_s* x )
{
  int len = zx_LEN_ds_SignatureMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ds_SignatureMethod(x, buf ), buf, len);
}




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

#define EL_NAME   ds_SignatureProperties
#define EL_STRUCT zx_ds_SignatureProperties_s
#define EL_NS     ds
#define EL_TAG    SignatureProperties

/* FUNC(zx_LEN_ds_SignatureProperties) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ds_SignatureProperties(struct zx_ds_SignatureProperties_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SignatureProperties") - 1 + 1 + 2 + sizeof("SignatureProperties") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Id, sizeof("Id"));

  {
      struct zx_ds_SignatureProperty_s* e;
      for (e = x->SignatureProperty; e; e = (struct zx_ds_SignatureProperty_s*)e->gg.g.n)
	  len += zx_LEN_ds_SignatureProperty(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ds_SignatureProperties) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ds_SignatureProperties(struct zx_ds_SignatureProperties_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SignatureProperties", sizeof("SignatureProperties") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Id, "Id", sizeof("Id")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ds_SignatureProperty_s* e;
      for (e = x->SignatureProperty; e; e = (struct zx_ds_SignatureProperty_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_SignatureProperty(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SignatureProperties", sizeof("SignatureProperties") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ds_SignatureProperties) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ds_SignatureProperties(struct zx_ds_SignatureProperties_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ds_SignatureProperties) */

struct zx_str_s* zx_EASY_ENC_SO_ds_SignatureProperties(struct zx_ctx* c, struct zx_ds_SignatureProperties_s* x )
{
  int len = zx_LEN_ds_SignatureProperties(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ds_SignatureProperties(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ds_SignatureProperties) */

struct zx_str_s* zx_EASY_ENC_WO_ds_SignatureProperties(struct zx_ctx* c, struct zx_ds_SignatureProperties_s* x )
{
  int len = zx_LEN_ds_SignatureProperties(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ds_SignatureProperties(x, buf ), buf, len);
}




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

#define EL_NAME   ds_SignatureProperty
#define EL_STRUCT zx_ds_SignatureProperty_s
#define EL_NS     ds
#define EL_TAG    SignatureProperty

/* FUNC(zx_LEN_ds_SignatureProperty) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ds_SignatureProperty(struct zx_ds_SignatureProperty_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SignatureProperty") - 1 + 1 + 2 + sizeof("SignatureProperty") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Target, sizeof("Target"));
  len += zx_attr_len(x->Id, sizeof("Id"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ds_SignatureProperty) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ds_SignatureProperty(struct zx_ds_SignatureProperty_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SignatureProperty", sizeof("SignatureProperty") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Target, "Target", sizeof("Target")-1);
  p = zx_attr_enc(p, x->Id, "Id", sizeof("Id")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SignatureProperty", sizeof("SignatureProperty") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ds_SignatureProperty) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ds_SignatureProperty(struct zx_ds_SignatureProperty_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ds_SignatureProperty) */

struct zx_str_s* zx_EASY_ENC_SO_ds_SignatureProperty(struct zx_ctx* c, struct zx_ds_SignatureProperty_s* x )
{
  int len = zx_LEN_ds_SignatureProperty(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ds_SignatureProperty(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ds_SignatureProperty) */

struct zx_str_s* zx_EASY_ENC_WO_ds_SignatureProperty(struct zx_ctx* c, struct zx_ds_SignatureProperty_s* x )
{
  int len = zx_LEN_ds_SignatureProperty(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ds_SignatureProperty(x, buf ), buf, len);
}




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

#define EL_NAME   ds_SignatureValue
#define EL_STRUCT zx_ds_SignatureValue_s
#define EL_NS     ds
#define EL_TAG    SignatureValue

/* FUNC(zx_LEN_ds_SignatureValue) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ds_SignatureValue(struct zx_ds_SignatureValue_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SignatureValue") - 1 + 1 + 2 + sizeof("SignatureValue") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Id, sizeof("Id"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ds_SignatureValue) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ds_SignatureValue(struct zx_ds_SignatureValue_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SignatureValue", sizeof("SignatureValue") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Id, "Id", sizeof("Id")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SignatureValue", sizeof("SignatureValue") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ds_SignatureValue) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ds_SignatureValue(struct zx_ds_SignatureValue_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ds_SignatureValue) */

struct zx_str_s* zx_EASY_ENC_SO_ds_SignatureValue(struct zx_ctx* c, struct zx_ds_SignatureValue_s* x )
{
  int len = zx_LEN_ds_SignatureValue(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ds_SignatureValue(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ds_SignatureValue) */

struct zx_str_s* zx_EASY_ENC_WO_ds_SignatureValue(struct zx_ctx* c, struct zx_ds_SignatureValue_s* x )
{
  int len = zx_LEN_ds_SignatureValue(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ds_SignatureValue(x, buf ), buf, len);
}




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

#define EL_NAME   ds_SignedInfo
#define EL_STRUCT zx_ds_SignedInfo_s
#define EL_NS     ds
#define EL_TAG    SignedInfo

/* FUNC(zx_LEN_ds_SignedInfo) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ds_SignedInfo(struct zx_ds_SignedInfo_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SignedInfo") - 1 + 1 + 2 + sizeof("SignedInfo") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Id, sizeof("Id"));

  {
      struct zx_ds_CanonicalizationMethod_s* e;
      for (e = x->CanonicalizationMethod; e; e = (struct zx_ds_CanonicalizationMethod_s*)e->gg.g.n)
	  len += zx_LEN_ds_CanonicalizationMethod(e);
  }
  {
      struct zx_ds_SignatureMethod_s* e;
      for (e = x->SignatureMethod; e; e = (struct zx_ds_SignatureMethod_s*)e->gg.g.n)
	  len += zx_LEN_ds_SignatureMethod(e);
  }
  {
      struct zx_ds_Reference_s* e;
      for (e = x->Reference; e; e = (struct zx_ds_Reference_s*)e->gg.g.n)
	  len += zx_LEN_ds_Reference(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ds_SignedInfo) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ds_SignedInfo(struct zx_ds_SignedInfo_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SignedInfo", sizeof("SignedInfo") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Id, "Id", sizeof("Id")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ds_CanonicalizationMethod_s* e;
      for (e = x->CanonicalizationMethod; e; e = (struct zx_ds_CanonicalizationMethod_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_CanonicalizationMethod(e, p);
  }
  {
      struct zx_ds_SignatureMethod_s* e;
      for (e = x->SignatureMethod; e; e = (struct zx_ds_SignatureMethod_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_SignatureMethod(e, p);
  }
  {
      struct zx_ds_Reference_s* e;
      for (e = x->Reference; e; e = (struct zx_ds_Reference_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Reference(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SignedInfo", sizeof("SignedInfo") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ds_SignedInfo) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ds_SignedInfo(struct zx_ds_SignedInfo_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ds_SignedInfo) */

struct zx_str_s* zx_EASY_ENC_SO_ds_SignedInfo(struct zx_ctx* c, struct zx_ds_SignedInfo_s* x )
{
  int len = zx_LEN_ds_SignedInfo(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ds_SignedInfo(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ds_SignedInfo) */

struct zx_str_s* zx_EASY_ENC_WO_ds_SignedInfo(struct zx_ctx* c, struct zx_ds_SignedInfo_s* x )
{
  int len = zx_LEN_ds_SignedInfo(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ds_SignedInfo(x, buf ), buf, len);
}




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

#define EL_NAME   ds_Transform
#define EL_STRUCT zx_ds_Transform_s
#define EL_NS     ds
#define EL_TAG    Transform

/* FUNC(zx_LEN_ds_Transform) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ds_Transform(struct zx_ds_Transform_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Transform") - 1 + 1 + 2 + sizeof("Transform") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Algorithm, sizeof("Algorithm"));

  for (se = x->XPath; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("XPath") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ds_Transform) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ds_Transform(struct zx_ds_Transform_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Transform", sizeof("Transform") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Algorithm, "Algorithm", sizeof("Algorithm")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->XPath; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "XPath", sizeof("XPath") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Transform", sizeof("Transform") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ds_Transform) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ds_Transform(struct zx_ds_Transform_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ds_Transform) */

struct zx_str_s* zx_EASY_ENC_SO_ds_Transform(struct zx_ctx* c, struct zx_ds_Transform_s* x )
{
  int len = zx_LEN_ds_Transform(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ds_Transform(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ds_Transform) */

struct zx_str_s* zx_EASY_ENC_WO_ds_Transform(struct zx_ctx* c, struct zx_ds_Transform_s* x )
{
  int len = zx_LEN_ds_Transform(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ds_Transform(x, buf ), buf, len);
}




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

#define EL_NAME   ds_Transforms
#define EL_STRUCT zx_ds_Transforms_s
#define EL_NS     ds
#define EL_TAG    Transforms

/* FUNC(zx_LEN_ds_Transforms) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ds_Transforms(struct zx_ds_Transforms_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Transforms") - 1 + 1 + 2 + sizeof("Transforms") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ds_Transform_s* e;
      for (e = x->Transform; e; e = (struct zx_ds_Transform_s*)e->gg.g.n)
	  len += zx_LEN_ds_Transform(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ds_Transforms) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ds_Transforms(struct zx_ds_Transforms_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Transforms", sizeof("Transforms") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ds_Transform_s* e;
      for (e = x->Transform; e; e = (struct zx_ds_Transform_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Transform(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Transforms", sizeof("Transforms") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ds_Transforms) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ds_Transforms(struct zx_ds_Transforms_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ds_Transforms) */

struct zx_str_s* zx_EASY_ENC_SO_ds_Transforms(struct zx_ctx* c, struct zx_ds_Transforms_s* x )
{
  int len = zx_LEN_ds_Transforms(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ds_Transforms(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ds_Transforms) */

struct zx_str_s* zx_EASY_ENC_WO_ds_Transforms(struct zx_ctx* c, struct zx_ds_Transforms_s* x )
{
  int len = zx_LEN_ds_Transforms(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ds_Transforms(x, buf ), buf, len);
}




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

#define EL_NAME   ds_X509Data
#define EL_STRUCT zx_ds_X509Data_s
#define EL_NS     ds
#define EL_TAG    X509Data

/* FUNC(zx_LEN_ds_X509Data) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ds_X509Data(struct zx_ds_X509Data_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("X509Data") - 1 + 1 + 2 + sizeof("X509Data") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ds_X509IssuerSerial_s* e;
      for (e = x->X509IssuerSerial; e; e = (struct zx_ds_X509IssuerSerial_s*)e->gg.g.n)
	  len += zx_LEN_ds_X509IssuerSerial(e);
  }
  for (se = x->X509SKI; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("X509SKI") - 1);
  for (se = x->X509SubjectName; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("X509SubjectName") - 1);
  for (se = x->X509Certificate; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("X509Certificate") - 1);
  for (se = x->X509CRL; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("X509CRL") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ds_X509Data) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ds_X509Data(struct zx_ds_X509Data_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "X509Data", sizeof("X509Data") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ds_X509IssuerSerial_s* e;
      for (e = x->X509IssuerSerial; e; e = (struct zx_ds_X509IssuerSerial_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_X509IssuerSerial(e, p);
  }
  for (se = x->X509SKI; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "X509SKI", sizeof("X509SKI") - 1);
  for (se = x->X509SubjectName; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "X509SubjectName", sizeof("X509SubjectName") - 1);
  for (se = x->X509Certificate; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "X509Certificate", sizeof("X509Certificate") - 1);
  for (se = x->X509CRL; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "X509CRL", sizeof("X509CRL") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "X509Data", sizeof("X509Data") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ds_X509Data) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ds_X509Data(struct zx_ds_X509Data_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ds_X509Data) */

struct zx_str_s* zx_EASY_ENC_SO_ds_X509Data(struct zx_ctx* c, struct zx_ds_X509Data_s* x )
{
  int len = zx_LEN_ds_X509Data(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ds_X509Data(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ds_X509Data) */

struct zx_str_s* zx_EASY_ENC_WO_ds_X509Data(struct zx_ctx* c, struct zx_ds_X509Data_s* x )
{
  int len = zx_LEN_ds_X509Data(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ds_X509Data(x, buf ), buf, len);
}




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

#define EL_NAME   ds_X509IssuerSerial
#define EL_STRUCT zx_ds_X509IssuerSerial_s
#define EL_NS     ds
#define EL_TAG    X509IssuerSerial

/* FUNC(zx_LEN_ds_X509IssuerSerial) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ds_X509IssuerSerial(struct zx_ds_X509IssuerSerial_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("X509IssuerSerial") - 1 + 1 + 2 + sizeof("X509IssuerSerial") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->X509IssuerName; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("X509IssuerName") - 1);
  for (se = x->X509SerialNumber; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("X509SerialNumber") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ds_X509IssuerSerial) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ds_X509IssuerSerial(struct zx_ds_X509IssuerSerial_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "X509IssuerSerial", sizeof("X509IssuerSerial") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->X509IssuerName; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "X509IssuerName", sizeof("X509IssuerName") - 1);
  for (se = x->X509SerialNumber; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "X509SerialNumber", sizeof("X509SerialNumber") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "X509IssuerSerial", sizeof("X509IssuerSerial") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ds_X509IssuerSerial) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ds_X509IssuerSerial(struct zx_ds_X509IssuerSerial_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ds_X509IssuerSerial) */

struct zx_str_s* zx_EASY_ENC_SO_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ds_X509IssuerSerial_s* x )
{
  int len = zx_LEN_ds_X509IssuerSerial(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ds_X509IssuerSerial(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ds_X509IssuerSerial) */

struct zx_str_s* zx_EASY_ENC_WO_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ds_X509IssuerSerial_s* x )
{
  int len = zx_LEN_ds_X509IssuerSerial(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ds_X509IssuerSerial(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_Assertion
#define EL_STRUCT zx_ff12_Assertion_s
#define EL_NS     ff12
#define EL_TAG    Assertion

/* FUNC(zx_LEN_ff12_Assertion) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_Assertion(struct zx_ff12_Assertion_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Assertion") - 1 + 1 + 2 + sizeof("Assertion") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->MajorVersion, sizeof("MajorVersion"));
  len += zx_attr_len(x->MinorVersion, sizeof("MinorVersion"));
  len += zx_attr_len(x->AssertionID, sizeof("AssertionID"));
  len += zx_attr_len(x->Issuer, sizeof("Issuer"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->InResponseTo, sizeof("InResponseTo"));

  {
      struct zx_sa11_Conditions_s* e;
      for (e = x->Conditions; e; e = (struct zx_sa11_Conditions_s*)e->gg.g.n)
	  len += zx_LEN_sa11_Conditions(e);
  }
  {
      struct zx_sa11_Advice_s* e;
      for (e = x->Advice; e; e = (struct zx_sa11_Advice_s*)e->gg.g.n)
	  len += zx_LEN_sa11_Advice(e);
  }
  for (se = x->Statement; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("Statement") - 1);
  {
      struct zx_sa11_SubjectStatement_s* e;
      for (e = x->SubjectStatement; e; e = (struct zx_sa11_SubjectStatement_s*)e->gg.g.n)
	  len += zx_LEN_sa11_SubjectStatement(e);
  }
  {
      struct zx_sa11_AuthenticationStatement_s* e;
      for (e = x->AuthenticationStatement; e; e = (struct zx_sa11_AuthenticationStatement_s*)e->gg.g.n)
	  len += zx_LEN_sa11_AuthenticationStatement(e);
  }
  {
      struct zx_sa11_AuthorizationDecisionStatement_s* e;
      for (e = x->AuthorizationDecisionStatement; e; e = (struct zx_sa11_AuthorizationDecisionStatement_s*)e->gg.g.n)
	  len += zx_LEN_sa11_AuthorizationDecisionStatement(e);
  }
  {
      struct zx_sa11_AttributeStatement_s* e;
      for (e = x->AttributeStatement; e; e = (struct zx_sa11_AttributeStatement_s*)e->gg.g.n)
	  len += zx_LEN_sa11_AttributeStatement(e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_Assertion) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_Assertion(struct zx_ff12_Assertion_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Assertion", sizeof("Assertion") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->MajorVersion, "MajorVersion", sizeof("MajorVersion")-1);
  p = zx_attr_enc(p, x->MinorVersion, "MinorVersion", sizeof("MinorVersion")-1);
  p = zx_attr_enc(p, x->AssertionID, "AssertionID", sizeof("AssertionID")-1);
  p = zx_attr_enc(p, x->Issuer, "Issuer", sizeof("Issuer")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->InResponseTo, "InResponseTo", sizeof("InResponseTo")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa11_Conditions_s* e;
      for (e = x->Conditions; e; e = (struct zx_sa11_Conditions_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Conditions(e, p);
  }
  {
      struct zx_sa11_Advice_s* e;
      for (e = x->Advice; e; e = (struct zx_sa11_Advice_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Advice(e, p);
  }
  for (se = x->Statement; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "Statement", sizeof("Statement") - 1);
  {
      struct zx_sa11_SubjectStatement_s* e;
      for (e = x->SubjectStatement; e; e = (struct zx_sa11_SubjectStatement_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_SubjectStatement(e, p);
  }
  {
      struct zx_sa11_AuthenticationStatement_s* e;
      for (e = x->AuthenticationStatement; e; e = (struct zx_sa11_AuthenticationStatement_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_AuthenticationStatement(e, p);
  }
  {
      struct zx_sa11_AuthorizationDecisionStatement_s* e;
      for (e = x->AuthorizationDecisionStatement; e; e = (struct zx_sa11_AuthorizationDecisionStatement_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_AuthorizationDecisionStatement(e, p);
  }
  {
      struct zx_sa11_AttributeStatement_s* e;
      for (e = x->AttributeStatement; e; e = (struct zx_sa11_AttributeStatement_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_AttributeStatement(e, p);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Assertion", sizeof("Assertion") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_Assertion) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_Assertion(struct zx_ff12_Assertion_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_Assertion) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_Assertion(struct zx_ctx* c, struct zx_ff12_Assertion_s* x )
{
  int len = zx_LEN_ff12_Assertion(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_Assertion(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_Assertion) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_Assertion(struct zx_ctx* c, struct zx_ff12_Assertion_s* x )
{
  int len = zx_LEN_ff12_Assertion(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_Assertion(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_AuthenticationStatement
#define EL_STRUCT zx_ff12_AuthenticationStatement_s
#define EL_NS     ff12
#define EL_TAG    AuthenticationStatement

/* FUNC(zx_LEN_ff12_AuthenticationStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_AuthenticationStatement(struct zx_ff12_AuthenticationStatement_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthenticationStatement") - 1 + 1 + 2 + sizeof("AuthenticationStatement") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->AuthenticationMethod, sizeof("AuthenticationMethod"));
  len += zx_attr_len(x->AuthenticationInstant, sizeof("AuthenticationInstant"));
  len += zx_attr_len(x->ReauthenticateOnOrAfter, sizeof("ReauthenticateOnOrAfter"));
  len += zx_attr_len(x->SessionIndex, sizeof("SessionIndex"));

  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  len += zx_LEN_sa11_Subject(e);
  }
  {
      struct zx_sa11_SubjectLocality_s* e;
      for (e = x->SubjectLocality; e; e = (struct zx_sa11_SubjectLocality_s*)e->gg.g.n)
	  len += zx_LEN_sa11_SubjectLocality(e);
  }
  {
      struct zx_sa11_AuthorityBinding_s* e;
      for (e = x->AuthorityBinding; e; e = (struct zx_sa11_AuthorityBinding_s*)e->gg.g.n)
	  len += zx_LEN_sa11_AuthorityBinding(e);
  }
  {
      struct zx_ff12_AuthnContext_s* e;
      for (e = x->AuthnContext; e; e = (struct zx_ff12_AuthnContext_s*)e->gg.g.n)
	  len += zx_LEN_ff12_AuthnContext(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_AuthenticationStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_AuthenticationStatement(struct zx_ff12_AuthenticationStatement_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthenticationStatement", sizeof("AuthenticationStatement") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->AuthenticationMethod, "AuthenticationMethod", sizeof("AuthenticationMethod")-1);
  p = zx_attr_enc(p, x->AuthenticationInstant, "AuthenticationInstant", sizeof("AuthenticationInstant")-1);
  p = zx_attr_enc(p, x->ReauthenticateOnOrAfter, "ReauthenticateOnOrAfter", sizeof("ReauthenticateOnOrAfter")-1);
  p = zx_attr_enc(p, x->SessionIndex, "SessionIndex", sizeof("SessionIndex")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Subject(e, p);
  }
  {
      struct zx_sa11_SubjectLocality_s* e;
      for (e = x->SubjectLocality; e; e = (struct zx_sa11_SubjectLocality_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_SubjectLocality(e, p);
  }
  {
      struct zx_sa11_AuthorityBinding_s* e;
      for (e = x->AuthorityBinding; e; e = (struct zx_sa11_AuthorityBinding_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_AuthorityBinding(e, p);
  }
  {
      struct zx_ff12_AuthnContext_s* e;
      for (e = x->AuthnContext; e; e = (struct zx_ff12_AuthnContext_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_AuthnContext(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthenticationStatement", sizeof("AuthenticationStatement") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_AuthenticationStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_AuthenticationStatement(struct zx_ff12_AuthenticationStatement_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_AuthenticationStatement) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_AuthenticationStatement(struct zx_ctx* c, struct zx_ff12_AuthenticationStatement_s* x )
{
  int len = zx_LEN_ff12_AuthenticationStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_AuthenticationStatement(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_AuthenticationStatement) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_AuthenticationStatement(struct zx_ctx* c, struct zx_ff12_AuthenticationStatement_s* x )
{
  int len = zx_LEN_ff12_AuthenticationStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_AuthenticationStatement(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_AuthnContext
#define EL_STRUCT zx_ff12_AuthnContext_s
#define EL_NS     ff12
#define EL_TAG    AuthnContext

/* FUNC(zx_LEN_ff12_AuthnContext) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_AuthnContext(struct zx_ff12_AuthnContext_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthnContext") - 1 + 1 + 2 + sizeof("AuthnContext") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->AuthnContextClassRef; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AuthnContextClassRef") - 1);
  {
      struct zx_ac_AuthenticationContextStatement_s* e;
      for (e = x->AuthenticationContextStatement; e; e = (struct zx_ac_AuthenticationContextStatement_s*)e->gg.g.n)
	  len += zx_LEN_ac_AuthenticationContextStatement(e);
  }
  for (se = x->AuthnContextStatementRef; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AuthnContextStatementRef") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_AuthnContext) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_AuthnContext(struct zx_ff12_AuthnContext_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthnContext", sizeof("AuthnContext") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->AuthnContextClassRef; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AuthnContextClassRef", sizeof("AuthnContextClassRef") - 1);
  {
      struct zx_ac_AuthenticationContextStatement_s* e;
      for (e = x->AuthenticationContextStatement; e; e = (struct zx_ac_AuthenticationContextStatement_s*)e->gg.g.n)
	  p = zx_ENC_SO_ac_AuthenticationContextStatement(e, p);
  }
  for (se = x->AuthnContextStatementRef; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AuthnContextStatementRef", sizeof("AuthnContextStatementRef") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthnContext", sizeof("AuthnContext") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_AuthnContext) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_AuthnContext(struct zx_ff12_AuthnContext_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_AuthnContext) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_AuthnContext(struct zx_ctx* c, struct zx_ff12_AuthnContext_s* x )
{
  int len = zx_LEN_ff12_AuthnContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_AuthnContext(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_AuthnContext) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_AuthnContext(struct zx_ctx* c, struct zx_ff12_AuthnContext_s* x )
{
  int len = zx_LEN_ff12_AuthnContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_AuthnContext(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_AuthnRequest
#define EL_STRUCT zx_ff12_AuthnRequest_s
#define EL_NS     ff12
#define EL_TAG    AuthnRequest

/* FUNC(zx_LEN_ff12_AuthnRequest) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_AuthnRequest(struct zx_ff12_AuthnRequest_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthnRequest") - 1 + 1 + 2 + sizeof("AuthnRequest") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->RequestID, sizeof("RequestID"));
  len += zx_attr_len(x->MajorVersion, sizeof("MajorVersion"));
  len += zx_attr_len(x->MinorVersion, sizeof("MinorVersion"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->consent, sizeof("consent"));

  for (se = x->RespondWith; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("RespondWith") - 1);
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_ff12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ff12_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ff12_Extension(e);
  }
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("ProviderID") - 1);
  for (se = x->AffiliationID; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AffiliationID") - 1);
  for (se = x->NameIDPolicy; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("NameIDPolicy") - 1);
  for (se = x->ForceAuthn; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("ForceAuthn") - 1);
  for (se = x->IsPassive; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("IsPassive") - 1);
  for (se = x->ProtocolProfile; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("ProtocolProfile") - 1);
  for (se = x->AssertionConsumerServiceID; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AssertionConsumerServiceID") - 1);
  {
      struct zx_ff12_RequestAuthnContext_s* e;
      for (e = x->RequestAuthnContext; e; e = (struct zx_ff12_RequestAuthnContext_s*)e->gg.g.n)
	  len += zx_LEN_ff12_RequestAuthnContext(e);
  }
  for (se = x->RelayState; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("RelayState") - 1);
  {
      struct zx_ff12_Scoping_s* e;
      for (e = x->Scoping; e; e = (struct zx_ff12_Scoping_s*)e->gg.g.n)
	  len += zx_LEN_ff12_Scoping(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_AuthnRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_AuthnRequest(struct zx_ff12_AuthnRequest_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthnRequest", sizeof("AuthnRequest") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->RequestID, "RequestID", sizeof("RequestID")-1);
  p = zx_attr_enc(p, x->MajorVersion, "MajorVersion", sizeof("MajorVersion")-1);
  p = zx_attr_enc(p, x->MinorVersion, "MinorVersion", sizeof("MinorVersion")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->consent, "consent", sizeof("consent")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->RespondWith; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "RespondWith", sizeof("RespondWith") - 1);
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_ff12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ff12_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_Extension(e, p);
  }
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "ProviderID", sizeof("ProviderID") - 1);
  for (se = x->AffiliationID; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AffiliationID", sizeof("AffiliationID") - 1);
  for (se = x->NameIDPolicy; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "NameIDPolicy", sizeof("NameIDPolicy") - 1);
  for (se = x->ForceAuthn; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "ForceAuthn", sizeof("ForceAuthn") - 1);
  for (se = x->IsPassive; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "IsPassive", sizeof("IsPassive") - 1);
  for (se = x->ProtocolProfile; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "ProtocolProfile", sizeof("ProtocolProfile") - 1);
  for (se = x->AssertionConsumerServiceID; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AssertionConsumerServiceID", sizeof("AssertionConsumerServiceID") - 1);
  {
      struct zx_ff12_RequestAuthnContext_s* e;
      for (e = x->RequestAuthnContext; e; e = (struct zx_ff12_RequestAuthnContext_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_RequestAuthnContext(e, p);
  }
  for (se = x->RelayState; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "RelayState", sizeof("RelayState") - 1);
  {
      struct zx_ff12_Scoping_s* e;
      for (e = x->Scoping; e; e = (struct zx_ff12_Scoping_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_Scoping(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthnRequest", sizeof("AuthnRequest") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_AuthnRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_AuthnRequest(struct zx_ff12_AuthnRequest_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_AuthnRequest) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_AuthnRequest(struct zx_ctx* c, struct zx_ff12_AuthnRequest_s* x )
{
  int len = zx_LEN_ff12_AuthnRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_AuthnRequest(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_AuthnRequest) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_AuthnRequest(struct zx_ctx* c, struct zx_ff12_AuthnRequest_s* x )
{
  int len = zx_LEN_ff12_AuthnRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_AuthnRequest(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_AuthnRequestEnvelope
#define EL_STRUCT zx_ff12_AuthnRequestEnvelope_s
#define EL_NS     ff12
#define EL_TAG    AuthnRequestEnvelope

/* FUNC(zx_LEN_ff12_AuthnRequestEnvelope) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_AuthnRequestEnvelope(struct zx_ff12_AuthnRequestEnvelope_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthnRequestEnvelope") - 1 + 1 + 2 + sizeof("AuthnRequestEnvelope") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ff12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ff12_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ff12_Extension(e);
  }
  {
      struct zx_ff12_AuthnRequest_s* e;
      for (e = x->AuthnRequest; e; e = (struct zx_ff12_AuthnRequest_s*)e->gg.g.n)
	  len += zx_LEN_ff12_AuthnRequest(e);
  }
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("ProviderID") - 1);
  for (se = x->ProviderName; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("ProviderName") - 1);
  for (se = x->AssertionConsumerServiceURL; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AssertionConsumerServiceURL") - 1);
  {
      struct zx_ff12_IDPList_s* e;
      for (e = x->IDPList; e; e = (struct zx_ff12_IDPList_s*)e->gg.g.n)
	  len += zx_LEN_ff12_IDPList(e);
  }
  for (se = x->IsPassive; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("IsPassive") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_AuthnRequestEnvelope) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_AuthnRequestEnvelope(struct zx_ff12_AuthnRequestEnvelope_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthnRequestEnvelope", sizeof("AuthnRequestEnvelope") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ff12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ff12_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_Extension(e, p);
  }
  {
      struct zx_ff12_AuthnRequest_s* e;
      for (e = x->AuthnRequest; e; e = (struct zx_ff12_AuthnRequest_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_AuthnRequest(e, p);
  }
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "ProviderID", sizeof("ProviderID") - 1);
  for (se = x->ProviderName; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "ProviderName", sizeof("ProviderName") - 1);
  for (se = x->AssertionConsumerServiceURL; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AssertionConsumerServiceURL", sizeof("AssertionConsumerServiceURL") - 1);
  {
      struct zx_ff12_IDPList_s* e;
      for (e = x->IDPList; e; e = (struct zx_ff12_IDPList_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_IDPList(e, p);
  }
  for (se = x->IsPassive; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "IsPassive", sizeof("IsPassive") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthnRequestEnvelope", sizeof("AuthnRequestEnvelope") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_AuthnRequestEnvelope) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_AuthnRequestEnvelope(struct zx_ff12_AuthnRequestEnvelope_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_AuthnRequestEnvelope) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_AuthnRequestEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnRequestEnvelope_s* x )
{
  int len = zx_LEN_ff12_AuthnRequestEnvelope(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_AuthnRequestEnvelope(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_AuthnRequestEnvelope) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_AuthnRequestEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnRequestEnvelope_s* x )
{
  int len = zx_LEN_ff12_AuthnRequestEnvelope(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_AuthnRequestEnvelope(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_AuthnResponse
#define EL_STRUCT zx_ff12_AuthnResponse_s
#define EL_NS     ff12
#define EL_TAG    AuthnResponse

/* FUNC(zx_LEN_ff12_AuthnResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_AuthnResponse(struct zx_ff12_AuthnResponse_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthnResponse") - 1 + 1 + 2 + sizeof("AuthnResponse") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ResponseID, sizeof("ResponseID"));
  len += zx_attr_len(x->InResponseTo, sizeof("InResponseTo"));
  len += zx_attr_len(x->MajorVersion, sizeof("MajorVersion"));
  len += zx_attr_len(x->MinorVersion, sizeof("MinorVersion"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->Recipient, sizeof("Recipient"));
  len += zx_attr_len(x->consent, sizeof("consent"));

  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_sp11_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp11_Status_s*)e->gg.g.n)
	  len += zx_LEN_sp11_Status(e);
  }
  {
      struct zx_sa11_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa11_Assertion_s*)e->gg.g.n)
	  len += zx_LEN_sa11_Assertion(e);
  }
  {
      struct zx_ff12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ff12_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ff12_Extension(e);
  }
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("ProviderID") - 1);
  for (se = x->RelayState; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("RelayState") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_AuthnResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_AuthnResponse(struct zx_ff12_AuthnResponse_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthnResponse", sizeof("AuthnResponse") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ResponseID, "ResponseID", sizeof("ResponseID")-1);
  p = zx_attr_enc(p, x->InResponseTo, "InResponseTo", sizeof("InResponseTo")-1);
  p = zx_attr_enc(p, x->MajorVersion, "MajorVersion", sizeof("MajorVersion")-1);
  p = zx_attr_enc(p, x->MinorVersion, "MinorVersion", sizeof("MinorVersion")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->Recipient, "Recipient", sizeof("Recipient")-1);
  p = zx_attr_enc(p, x->consent, "consent", sizeof("consent")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_sp11_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp11_Status_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp11_Status(e, p);
  }
  {
      struct zx_sa11_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa11_Assertion_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Assertion(e, p);
  }
  {
      struct zx_ff12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ff12_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_Extension(e, p);
  }
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "ProviderID", sizeof("ProviderID") - 1);
  for (se = x->RelayState; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "RelayState", sizeof("RelayState") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthnResponse", sizeof("AuthnResponse") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_AuthnResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_AuthnResponse(struct zx_ff12_AuthnResponse_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_AuthnResponse) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_AuthnResponse(struct zx_ctx* c, struct zx_ff12_AuthnResponse_s* x )
{
  int len = zx_LEN_ff12_AuthnResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_AuthnResponse(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_AuthnResponse) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_AuthnResponse(struct zx_ctx* c, struct zx_ff12_AuthnResponse_s* x )
{
  int len = zx_LEN_ff12_AuthnResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_AuthnResponse(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_AuthnResponseEnvelope
#define EL_STRUCT zx_ff12_AuthnResponseEnvelope_s
#define EL_NS     ff12
#define EL_TAG    AuthnResponseEnvelope

/* FUNC(zx_LEN_ff12_AuthnResponseEnvelope) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_AuthnResponseEnvelope(struct zx_ff12_AuthnResponseEnvelope_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthnResponseEnvelope") - 1 + 1 + 2 + sizeof("AuthnResponseEnvelope") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ff12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ff12_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ff12_Extension(e);
  }
  {
      struct zx_ff12_AuthnResponse_s* e;
      for (e = x->AuthnResponse; e; e = (struct zx_ff12_AuthnResponse_s*)e->gg.g.n)
	  len += zx_LEN_ff12_AuthnResponse(e);
  }
  for (se = x->AssertionConsumerServiceURL; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AssertionConsumerServiceURL") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_AuthnResponseEnvelope) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_AuthnResponseEnvelope(struct zx_ff12_AuthnResponseEnvelope_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthnResponseEnvelope", sizeof("AuthnResponseEnvelope") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ff12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ff12_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_Extension(e, p);
  }
  {
      struct zx_ff12_AuthnResponse_s* e;
      for (e = x->AuthnResponse; e; e = (struct zx_ff12_AuthnResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_AuthnResponse(e, p);
  }
  for (se = x->AssertionConsumerServiceURL; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AssertionConsumerServiceURL", sizeof("AssertionConsumerServiceURL") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthnResponseEnvelope", sizeof("AuthnResponseEnvelope") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_AuthnResponseEnvelope) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_AuthnResponseEnvelope(struct zx_ff12_AuthnResponseEnvelope_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_AuthnResponseEnvelope) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_AuthnResponseEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnResponseEnvelope_s* x )
{
  int len = zx_LEN_ff12_AuthnResponseEnvelope(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_AuthnResponseEnvelope(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_AuthnResponseEnvelope) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_AuthnResponseEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnResponseEnvelope_s* x )
{
  int len = zx_LEN_ff12_AuthnResponseEnvelope(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_AuthnResponseEnvelope(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_EncryptableNameIdentifier
#define EL_STRUCT zx_ff12_EncryptableNameIdentifier_s
#define EL_NS     ff12
#define EL_TAG    EncryptableNameIdentifier

/* FUNC(zx_LEN_ff12_EncryptableNameIdentifier) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_EncryptableNameIdentifier(struct zx_ff12_EncryptableNameIdentifier_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("EncryptableNameIdentifier") - 1 + 1 + 2 + sizeof("EncryptableNameIdentifier") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->NameQualifier, sizeof("NameQualifier"));
  len += zx_attr_len(x->Format, sizeof("Format"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->Nonce, sizeof("Nonce"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_EncryptableNameIdentifier) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_EncryptableNameIdentifier(struct zx_ff12_EncryptableNameIdentifier_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EncryptableNameIdentifier", sizeof("EncryptableNameIdentifier") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->NameQualifier, "NameQualifier", sizeof("NameQualifier")-1);
  p = zx_attr_enc(p, x->Format, "Format", sizeof("Format")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->Nonce, "Nonce", sizeof("Nonce")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EncryptableNameIdentifier", sizeof("EncryptableNameIdentifier") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_EncryptableNameIdentifier) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_EncryptableNameIdentifier(struct zx_ff12_EncryptableNameIdentifier_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_EncryptableNameIdentifier) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_EncryptableNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptableNameIdentifier_s* x )
{
  int len = zx_LEN_ff12_EncryptableNameIdentifier(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_EncryptableNameIdentifier(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_EncryptableNameIdentifier) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_EncryptableNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptableNameIdentifier_s* x )
{
  int len = zx_LEN_ff12_EncryptableNameIdentifier(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_EncryptableNameIdentifier(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_EncryptedNameIdentifier
#define EL_STRUCT zx_ff12_EncryptedNameIdentifier_s
#define EL_NS     ff12
#define EL_TAG    EncryptedNameIdentifier

/* FUNC(zx_LEN_ff12_EncryptedNameIdentifier) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_EncryptedNameIdentifier(struct zx_ff12_EncryptedNameIdentifier_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("EncryptedNameIdentifier") - 1 + 1 + 2 + sizeof("EncryptedNameIdentifier") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zx_xenc_EncryptedData_s*)e->gg.g.n)
	  len += zx_LEN_xenc_EncryptedData(e);
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n)
	  len += zx_LEN_xenc_EncryptedKey(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_EncryptedNameIdentifier) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_EncryptedNameIdentifier(struct zx_ff12_EncryptedNameIdentifier_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EncryptedNameIdentifier", sizeof("EncryptedNameIdentifier") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zx_xenc_EncryptedData_s*)e->gg.g.n)
	  p = zx_ENC_SO_xenc_EncryptedData(e, p);
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n)
	  p = zx_ENC_SO_xenc_EncryptedKey(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EncryptedNameIdentifier", sizeof("EncryptedNameIdentifier") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_EncryptedNameIdentifier) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_EncryptedNameIdentifier(struct zx_ff12_EncryptedNameIdentifier_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_EncryptedNameIdentifier) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_EncryptedNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptedNameIdentifier_s* x )
{
  int len = zx_LEN_ff12_EncryptedNameIdentifier(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_EncryptedNameIdentifier(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_EncryptedNameIdentifier) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_EncryptedNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptedNameIdentifier_s* x )
{
  int len = zx_LEN_ff12_EncryptedNameIdentifier(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_EncryptedNameIdentifier(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_Extension
#define EL_STRUCT zx_ff12_Extension_s
#define EL_NS     ff12
#define EL_TAG    Extension

/* FUNC(zx_LEN_ff12_Extension) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_Extension(struct zx_ff12_Extension_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Extension") - 1 + 1 + 2 + sizeof("Extension") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */




  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_Extension) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_Extension(struct zx_ff12_Extension_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Extension", sizeof("Extension") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Extension", sizeof("Extension") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_Extension) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_Extension(struct zx_ff12_Extension_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_Extension) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_Extension(struct zx_ctx* c, struct zx_ff12_Extension_s* x )
{
  int len = zx_LEN_ff12_Extension(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_Extension(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_Extension) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_Extension(struct zx_ctx* c, struct zx_ff12_Extension_s* x )
{
  int len = zx_LEN_ff12_Extension(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_Extension(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_FederationTerminationNotification
#define EL_STRUCT zx_ff12_FederationTerminationNotification_s
#define EL_NS     ff12
#define EL_TAG    FederationTerminationNotification

/* FUNC(zx_LEN_ff12_FederationTerminationNotification) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_FederationTerminationNotification(struct zx_ff12_FederationTerminationNotification_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("FederationTerminationNotification") - 1 + 1 + 2 + sizeof("FederationTerminationNotification") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->RequestID, sizeof("RequestID"));
  len += zx_attr_len(x->MajorVersion, sizeof("MajorVersion"));
  len += zx_attr_len(x->MinorVersion, sizeof("MinorVersion"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->consent, sizeof("consent"));

  for (se = x->RespondWith; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("RespondWith") - 1);
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_ff12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ff12_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ff12_Extension(e);
  }
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("ProviderID") - 1);
  {
      struct zx_sa11_NameIdentifier_s* e;
      for (e = x->NameIdentifier; e; e = (struct zx_sa11_NameIdentifier_s*)e->gg.g.n)
	  len += zx_LEN_sa11_NameIdentifier(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_FederationTerminationNotification) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_FederationTerminationNotification(struct zx_ff12_FederationTerminationNotification_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "FederationTerminationNotification", sizeof("FederationTerminationNotification") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->RequestID, "RequestID", sizeof("RequestID")-1);
  p = zx_attr_enc(p, x->MajorVersion, "MajorVersion", sizeof("MajorVersion")-1);
  p = zx_attr_enc(p, x->MinorVersion, "MinorVersion", sizeof("MinorVersion")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->consent, "consent", sizeof("consent")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->RespondWith; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "RespondWith", sizeof("RespondWith") - 1);
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_ff12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ff12_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_Extension(e, p);
  }
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "ProviderID", sizeof("ProviderID") - 1);
  {
      struct zx_sa11_NameIdentifier_s* e;
      for (e = x->NameIdentifier; e; e = (struct zx_sa11_NameIdentifier_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_NameIdentifier(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "FederationTerminationNotification", sizeof("FederationTerminationNotification") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_FederationTerminationNotification) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_FederationTerminationNotification(struct zx_ff12_FederationTerminationNotification_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_FederationTerminationNotification) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_FederationTerminationNotification(struct zx_ctx* c, struct zx_ff12_FederationTerminationNotification_s* x )
{
  int len = zx_LEN_ff12_FederationTerminationNotification(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_FederationTerminationNotification(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_FederationTerminationNotification) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_FederationTerminationNotification(struct zx_ctx* c, struct zx_ff12_FederationTerminationNotification_s* x )
{
  int len = zx_LEN_ff12_FederationTerminationNotification(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_FederationTerminationNotification(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_IDPEntries
#define EL_STRUCT zx_ff12_IDPEntries_s
#define EL_NS     ff12
#define EL_TAG    IDPEntries

/* FUNC(zx_LEN_ff12_IDPEntries) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_IDPEntries(struct zx_ff12_IDPEntries_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("IDPEntries") - 1 + 1 + 2 + sizeof("IDPEntries") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ff12_IDPEntry_s* e;
      for (e = x->IDPEntry; e; e = (struct zx_ff12_IDPEntry_s*)e->gg.g.n)
	  len += zx_LEN_ff12_IDPEntry(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_IDPEntries) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_IDPEntries(struct zx_ff12_IDPEntries_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "IDPEntries", sizeof("IDPEntries") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ff12_IDPEntry_s* e;
      for (e = x->IDPEntry; e; e = (struct zx_ff12_IDPEntry_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_IDPEntry(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "IDPEntries", sizeof("IDPEntries") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_IDPEntries) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_IDPEntries(struct zx_ff12_IDPEntries_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_IDPEntries) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_IDPEntries(struct zx_ctx* c, struct zx_ff12_IDPEntries_s* x )
{
  int len = zx_LEN_ff12_IDPEntries(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_IDPEntries(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_IDPEntries) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_IDPEntries(struct zx_ctx* c, struct zx_ff12_IDPEntries_s* x )
{
  int len = zx_LEN_ff12_IDPEntries(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_IDPEntries(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_IDPEntry
#define EL_STRUCT zx_ff12_IDPEntry_s
#define EL_NS     ff12
#define EL_TAG    IDPEntry

/* FUNC(zx_LEN_ff12_IDPEntry) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_IDPEntry(struct zx_ff12_IDPEntry_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("IDPEntry") - 1 + 1 + 2 + sizeof("IDPEntry") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("ProviderID") - 1);
  for (se = x->ProviderName; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("ProviderName") - 1);
  for (se = x->Loc; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("Loc") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_IDPEntry) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_IDPEntry(struct zx_ff12_IDPEntry_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "IDPEntry", sizeof("IDPEntry") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "ProviderID", sizeof("ProviderID") - 1);
  for (se = x->ProviderName; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "ProviderName", sizeof("ProviderName") - 1);
  for (se = x->Loc; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "Loc", sizeof("Loc") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "IDPEntry", sizeof("IDPEntry") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_IDPEntry) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_IDPEntry(struct zx_ff12_IDPEntry_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_IDPEntry) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_IDPEntry(struct zx_ctx* c, struct zx_ff12_IDPEntry_s* x )
{
  int len = zx_LEN_ff12_IDPEntry(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_IDPEntry(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_IDPEntry) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_IDPEntry(struct zx_ctx* c, struct zx_ff12_IDPEntry_s* x )
{
  int len = zx_LEN_ff12_IDPEntry(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_IDPEntry(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_IDPList
#define EL_STRUCT zx_ff12_IDPList_s
#define EL_NS     ff12
#define EL_TAG    IDPList

/* FUNC(zx_LEN_ff12_IDPList) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_IDPList(struct zx_ff12_IDPList_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("IDPList") - 1 + 1 + 2 + sizeof("IDPList") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ff12_IDPEntries_s* e;
      for (e = x->IDPEntries; e; e = (struct zx_ff12_IDPEntries_s*)e->gg.g.n)
	  len += zx_LEN_ff12_IDPEntries(e);
  }
  for (se = x->GetComplete; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("GetComplete") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_IDPList) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_IDPList(struct zx_ff12_IDPList_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "IDPList", sizeof("IDPList") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ff12_IDPEntries_s* e;
      for (e = x->IDPEntries; e; e = (struct zx_ff12_IDPEntries_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_IDPEntries(e, p);
  }
  for (se = x->GetComplete; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "GetComplete", sizeof("GetComplete") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "IDPList", sizeof("IDPList") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_IDPList) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_IDPList(struct zx_ff12_IDPList_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_IDPList) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_IDPList(struct zx_ctx* c, struct zx_ff12_IDPList_s* x )
{
  int len = zx_LEN_ff12_IDPList(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_IDPList(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_IDPList) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_IDPList(struct zx_ctx* c, struct zx_ff12_IDPList_s* x )
{
  int len = zx_LEN_ff12_IDPList(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_IDPList(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_IDPProvidedNameIdentifier
#define EL_STRUCT zx_ff12_IDPProvidedNameIdentifier_s
#define EL_NS     ff12
#define EL_TAG    IDPProvidedNameIdentifier

/* FUNC(zx_LEN_ff12_IDPProvidedNameIdentifier) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_IDPProvidedNameIdentifier(struct zx_ff12_IDPProvidedNameIdentifier_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("IDPProvidedNameIdentifier") - 1 + 1 + 2 + sizeof("IDPProvidedNameIdentifier") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->NameQualifier, sizeof("NameQualifier"));
  len += zx_attr_len(x->Format, sizeof("Format"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_IDPProvidedNameIdentifier) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_IDPProvidedNameIdentifier(struct zx_ff12_IDPProvidedNameIdentifier_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "IDPProvidedNameIdentifier", sizeof("IDPProvidedNameIdentifier") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->NameQualifier, "NameQualifier", sizeof("NameQualifier")-1);
  p = zx_attr_enc(p, x->Format, "Format", sizeof("Format")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "IDPProvidedNameIdentifier", sizeof("IDPProvidedNameIdentifier") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_IDPProvidedNameIdentifier) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_IDPProvidedNameIdentifier(struct zx_ff12_IDPProvidedNameIdentifier_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_IDPProvidedNameIdentifier) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_IDPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_IDPProvidedNameIdentifier_s* x )
{
  int len = zx_LEN_ff12_IDPProvidedNameIdentifier(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_IDPProvidedNameIdentifier(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_IDPProvidedNameIdentifier) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_IDPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_IDPProvidedNameIdentifier_s* x )
{
  int len = zx_LEN_ff12_IDPProvidedNameIdentifier(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_IDPProvidedNameIdentifier(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_LogoutRequest
#define EL_STRUCT zx_ff12_LogoutRequest_s
#define EL_NS     ff12
#define EL_TAG    LogoutRequest

/* FUNC(zx_LEN_ff12_LogoutRequest) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_LogoutRequest(struct zx_ff12_LogoutRequest_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("LogoutRequest") - 1 + 1 + 2 + sizeof("LogoutRequest") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->RequestID, sizeof("RequestID"));
  len += zx_attr_len(x->MajorVersion, sizeof("MajorVersion"));
  len += zx_attr_len(x->MinorVersion, sizeof("MinorVersion"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->consent, sizeof("consent"));
  len += zx_attr_len(x->NotOnOrAfter, sizeof("NotOnOrAfter"));

  for (se = x->RespondWith; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("RespondWith") - 1);
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_ff12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ff12_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ff12_Extension(e);
  }
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("ProviderID") - 1);
  {
      struct zx_sa11_NameIdentifier_s* e;
      for (e = x->NameIdentifier; e; e = (struct zx_sa11_NameIdentifier_s*)e->gg.g.n)
	  len += zx_LEN_sa11_NameIdentifier(e);
  }
  for (se = x->SessionIndex; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("SessionIndex") - 1);
  for (se = x->RelayState; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("RelayState") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_LogoutRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_LogoutRequest(struct zx_ff12_LogoutRequest_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "LogoutRequest", sizeof("LogoutRequest") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->RequestID, "RequestID", sizeof("RequestID")-1);
  p = zx_attr_enc(p, x->MajorVersion, "MajorVersion", sizeof("MajorVersion")-1);
  p = zx_attr_enc(p, x->MinorVersion, "MinorVersion", sizeof("MinorVersion")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->consent, "consent", sizeof("consent")-1);
  p = zx_attr_enc(p, x->NotOnOrAfter, "NotOnOrAfter", sizeof("NotOnOrAfter")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->RespondWith; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "RespondWith", sizeof("RespondWith") - 1);
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_ff12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ff12_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_Extension(e, p);
  }
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "ProviderID", sizeof("ProviderID") - 1);
  {
      struct zx_sa11_NameIdentifier_s* e;
      for (e = x->NameIdentifier; e; e = (struct zx_sa11_NameIdentifier_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_NameIdentifier(e, p);
  }
  for (se = x->SessionIndex; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "SessionIndex", sizeof("SessionIndex") - 1);
  for (se = x->RelayState; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "RelayState", sizeof("RelayState") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "LogoutRequest", sizeof("LogoutRequest") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_LogoutRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_LogoutRequest(struct zx_ff12_LogoutRequest_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_LogoutRequest) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_LogoutRequest(struct zx_ctx* c, struct zx_ff12_LogoutRequest_s* x )
{
  int len = zx_LEN_ff12_LogoutRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_LogoutRequest(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_LogoutRequest) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_LogoutRequest(struct zx_ctx* c, struct zx_ff12_LogoutRequest_s* x )
{
  int len = zx_LEN_ff12_LogoutRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_LogoutRequest(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_LogoutResponse
#define EL_STRUCT zx_ff12_LogoutResponse_s
#define EL_NS     ff12
#define EL_TAG    LogoutResponse

/* FUNC(zx_LEN_ff12_LogoutResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_LogoutResponse(struct zx_ff12_LogoutResponse_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("LogoutResponse") - 1 + 1 + 2 + sizeof("LogoutResponse") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ResponseID, sizeof("ResponseID"));
  len += zx_attr_len(x->InResponseTo, sizeof("InResponseTo"));
  len += zx_attr_len(x->MajorVersion, sizeof("MajorVersion"));
  len += zx_attr_len(x->MinorVersion, sizeof("MinorVersion"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->Recipient, sizeof("Recipient"));

  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_ff12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ff12_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ff12_Extension(e);
  }
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("ProviderID") - 1);
  {
      struct zx_sp11_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp11_Status_s*)e->gg.g.n)
	  len += zx_LEN_sp11_Status(e);
  }
  for (se = x->RelayState; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("RelayState") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_LogoutResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_LogoutResponse(struct zx_ff12_LogoutResponse_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "LogoutResponse", sizeof("LogoutResponse") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ResponseID, "ResponseID", sizeof("ResponseID")-1);
  p = zx_attr_enc(p, x->InResponseTo, "InResponseTo", sizeof("InResponseTo")-1);
  p = zx_attr_enc(p, x->MajorVersion, "MajorVersion", sizeof("MajorVersion")-1);
  p = zx_attr_enc(p, x->MinorVersion, "MinorVersion", sizeof("MinorVersion")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->Recipient, "Recipient", sizeof("Recipient")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_ff12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ff12_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_Extension(e, p);
  }
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "ProviderID", sizeof("ProviderID") - 1);
  {
      struct zx_sp11_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp11_Status_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp11_Status(e, p);
  }
  for (se = x->RelayState; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "RelayState", sizeof("RelayState") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "LogoutResponse", sizeof("LogoutResponse") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_LogoutResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_LogoutResponse(struct zx_ff12_LogoutResponse_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_LogoutResponse) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_LogoutResponse(struct zx_ctx* c, struct zx_ff12_LogoutResponse_s* x )
{
  int len = zx_LEN_ff12_LogoutResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_LogoutResponse(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_LogoutResponse) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_LogoutResponse(struct zx_ctx* c, struct zx_ff12_LogoutResponse_s* x )
{
  int len = zx_LEN_ff12_LogoutResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_LogoutResponse(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_NameIdentifierMappingRequest
#define EL_STRUCT zx_ff12_NameIdentifierMappingRequest_s
#define EL_NS     ff12
#define EL_TAG    NameIdentifierMappingRequest

/* FUNC(zx_LEN_ff12_NameIdentifierMappingRequest) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_NameIdentifierMappingRequest(struct zx_ff12_NameIdentifierMappingRequest_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("NameIdentifierMappingRequest") - 1 + 1 + 2 + sizeof("NameIdentifierMappingRequest") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->RequestID, sizeof("RequestID"));
  len += zx_attr_len(x->MajorVersion, sizeof("MajorVersion"));
  len += zx_attr_len(x->MinorVersion, sizeof("MinorVersion"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->consent, sizeof("consent"));

  for (se = x->RespondWith; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("RespondWith") - 1);
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_ff12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ff12_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ff12_Extension(e);
  }
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("ProviderID") - 1);
  {
      struct zx_sa11_NameIdentifier_s* e;
      for (e = x->NameIdentifier; e; e = (struct zx_sa11_NameIdentifier_s*)e->gg.g.n)
	  len += zx_LEN_sa11_NameIdentifier(e);
  }
  for (se = x->TargetNamespace; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("TargetNamespace") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_NameIdentifierMappingRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_NameIdentifierMappingRequest(struct zx_ff12_NameIdentifierMappingRequest_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "NameIdentifierMappingRequest", sizeof("NameIdentifierMappingRequest") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->RequestID, "RequestID", sizeof("RequestID")-1);
  p = zx_attr_enc(p, x->MajorVersion, "MajorVersion", sizeof("MajorVersion")-1);
  p = zx_attr_enc(p, x->MinorVersion, "MinorVersion", sizeof("MinorVersion")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->consent, "consent", sizeof("consent")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->RespondWith; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "RespondWith", sizeof("RespondWith") - 1);
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_ff12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ff12_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_Extension(e, p);
  }
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "ProviderID", sizeof("ProviderID") - 1);
  {
      struct zx_sa11_NameIdentifier_s* e;
      for (e = x->NameIdentifier; e; e = (struct zx_sa11_NameIdentifier_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_NameIdentifier(e, p);
  }
  for (se = x->TargetNamespace; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "TargetNamespace", sizeof("TargetNamespace") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "NameIdentifierMappingRequest", sizeof("NameIdentifierMappingRequest") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_NameIdentifierMappingRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_NameIdentifierMappingRequest(struct zx_ff12_NameIdentifierMappingRequest_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_NameIdentifierMappingRequest) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_NameIdentifierMappingRequest(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingRequest_s* x )
{
  int len = zx_LEN_ff12_NameIdentifierMappingRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_NameIdentifierMappingRequest(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_NameIdentifierMappingRequest) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_NameIdentifierMappingRequest(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingRequest_s* x )
{
  int len = zx_LEN_ff12_NameIdentifierMappingRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_NameIdentifierMappingRequest(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_NameIdentifierMappingResponse
#define EL_STRUCT zx_ff12_NameIdentifierMappingResponse_s
#define EL_NS     ff12
#define EL_TAG    NameIdentifierMappingResponse

/* FUNC(zx_LEN_ff12_NameIdentifierMappingResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_NameIdentifierMappingResponse(struct zx_ff12_NameIdentifierMappingResponse_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("NameIdentifierMappingResponse") - 1 + 1 + 2 + sizeof("NameIdentifierMappingResponse") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ResponseID, sizeof("ResponseID"));
  len += zx_attr_len(x->InResponseTo, sizeof("InResponseTo"));
  len += zx_attr_len(x->MajorVersion, sizeof("MajorVersion"));
  len += zx_attr_len(x->MinorVersion, sizeof("MinorVersion"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->Recipient, sizeof("Recipient"));

  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_ff12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ff12_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ff12_Extension(e);
  }
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("ProviderID") - 1);
  {
      struct zx_sp11_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp11_Status_s*)e->gg.g.n)
	  len += zx_LEN_sp11_Status(e);
  }
  {
      struct zx_sa11_NameIdentifier_s* e;
      for (e = x->NameIdentifier; e; e = (struct zx_sa11_NameIdentifier_s*)e->gg.g.n)
	  len += zx_LEN_sa11_NameIdentifier(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_NameIdentifierMappingResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_NameIdentifierMappingResponse(struct zx_ff12_NameIdentifierMappingResponse_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "NameIdentifierMappingResponse", sizeof("NameIdentifierMappingResponse") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ResponseID, "ResponseID", sizeof("ResponseID")-1);
  p = zx_attr_enc(p, x->InResponseTo, "InResponseTo", sizeof("InResponseTo")-1);
  p = zx_attr_enc(p, x->MajorVersion, "MajorVersion", sizeof("MajorVersion")-1);
  p = zx_attr_enc(p, x->MinorVersion, "MinorVersion", sizeof("MinorVersion")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->Recipient, "Recipient", sizeof("Recipient")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_ff12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ff12_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_Extension(e, p);
  }
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "ProviderID", sizeof("ProviderID") - 1);
  {
      struct zx_sp11_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp11_Status_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp11_Status(e, p);
  }
  {
      struct zx_sa11_NameIdentifier_s* e;
      for (e = x->NameIdentifier; e; e = (struct zx_sa11_NameIdentifier_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_NameIdentifier(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "NameIdentifierMappingResponse", sizeof("NameIdentifierMappingResponse") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_NameIdentifierMappingResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_NameIdentifierMappingResponse(struct zx_ff12_NameIdentifierMappingResponse_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_NameIdentifierMappingResponse) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_NameIdentifierMappingResponse(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingResponse_s* x )
{
  int len = zx_LEN_ff12_NameIdentifierMappingResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_NameIdentifierMappingResponse(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_NameIdentifierMappingResponse) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_NameIdentifierMappingResponse(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingResponse_s* x )
{
  int len = zx_LEN_ff12_NameIdentifierMappingResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_NameIdentifierMappingResponse(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_OldProvidedNameIdentifier
#define EL_STRUCT zx_ff12_OldProvidedNameIdentifier_s
#define EL_NS     ff12
#define EL_TAG    OldProvidedNameIdentifier

/* FUNC(zx_LEN_ff12_OldProvidedNameIdentifier) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_OldProvidedNameIdentifier(struct zx_ff12_OldProvidedNameIdentifier_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("OldProvidedNameIdentifier") - 1 + 1 + 2 + sizeof("OldProvidedNameIdentifier") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->NameQualifier, sizeof("NameQualifier"));
  len += zx_attr_len(x->Format, sizeof("Format"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_OldProvidedNameIdentifier) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_OldProvidedNameIdentifier(struct zx_ff12_OldProvidedNameIdentifier_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "OldProvidedNameIdentifier", sizeof("OldProvidedNameIdentifier") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->NameQualifier, "NameQualifier", sizeof("NameQualifier")-1);
  p = zx_attr_enc(p, x->Format, "Format", sizeof("Format")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "OldProvidedNameIdentifier", sizeof("OldProvidedNameIdentifier") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_OldProvidedNameIdentifier) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_OldProvidedNameIdentifier(struct zx_ff12_OldProvidedNameIdentifier_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_OldProvidedNameIdentifier) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_OldProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_OldProvidedNameIdentifier_s* x )
{
  int len = zx_LEN_ff12_OldProvidedNameIdentifier(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_OldProvidedNameIdentifier(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_OldProvidedNameIdentifier) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_OldProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_OldProvidedNameIdentifier_s* x )
{
  int len = zx_LEN_ff12_OldProvidedNameIdentifier(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_OldProvidedNameIdentifier(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_RegisterNameIdentifierRequest
#define EL_STRUCT zx_ff12_RegisterNameIdentifierRequest_s
#define EL_NS     ff12
#define EL_TAG    RegisterNameIdentifierRequest

/* FUNC(zx_LEN_ff12_RegisterNameIdentifierRequest) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_RegisterNameIdentifierRequest(struct zx_ff12_RegisterNameIdentifierRequest_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("RegisterNameIdentifierRequest") - 1 + 1 + 2 + sizeof("RegisterNameIdentifierRequest") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->RequestID, sizeof("RequestID"));
  len += zx_attr_len(x->MajorVersion, sizeof("MajorVersion"));
  len += zx_attr_len(x->MinorVersion, sizeof("MinorVersion"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));

  for (se = x->RespondWith; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("RespondWith") - 1);
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_ff12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ff12_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ff12_Extension(e);
  }
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("ProviderID") - 1);
  {
      struct zx_ff12_IDPProvidedNameIdentifier_s* e;
      for (e = x->IDPProvidedNameIdentifier; e; e = (struct zx_ff12_IDPProvidedNameIdentifier_s*)e->gg.g.n)
	  len += zx_LEN_ff12_IDPProvidedNameIdentifier(e);
  }
  {
      struct zx_ff12_SPProvidedNameIdentifier_s* e;
      for (e = x->SPProvidedNameIdentifier; e; e = (struct zx_ff12_SPProvidedNameIdentifier_s*)e->gg.g.n)
	  len += zx_LEN_ff12_SPProvidedNameIdentifier(e);
  }
  {
      struct zx_ff12_OldProvidedNameIdentifier_s* e;
      for (e = x->OldProvidedNameIdentifier; e; e = (struct zx_ff12_OldProvidedNameIdentifier_s*)e->gg.g.n)
	  len += zx_LEN_ff12_OldProvidedNameIdentifier(e);
  }
  for (se = x->RelayState; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("RelayState") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_RegisterNameIdentifierRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_RegisterNameIdentifierRequest(struct zx_ff12_RegisterNameIdentifierRequest_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RegisterNameIdentifierRequest", sizeof("RegisterNameIdentifierRequest") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->RequestID, "RequestID", sizeof("RequestID")-1);
  p = zx_attr_enc(p, x->MajorVersion, "MajorVersion", sizeof("MajorVersion")-1);
  p = zx_attr_enc(p, x->MinorVersion, "MinorVersion", sizeof("MinorVersion")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->RespondWith; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "RespondWith", sizeof("RespondWith") - 1);
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_ff12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ff12_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_Extension(e, p);
  }
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "ProviderID", sizeof("ProviderID") - 1);
  {
      struct zx_ff12_IDPProvidedNameIdentifier_s* e;
      for (e = x->IDPProvidedNameIdentifier; e; e = (struct zx_ff12_IDPProvidedNameIdentifier_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_IDPProvidedNameIdentifier(e, p);
  }
  {
      struct zx_ff12_SPProvidedNameIdentifier_s* e;
      for (e = x->SPProvidedNameIdentifier; e; e = (struct zx_ff12_SPProvidedNameIdentifier_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_SPProvidedNameIdentifier(e, p);
  }
  {
      struct zx_ff12_OldProvidedNameIdentifier_s* e;
      for (e = x->OldProvidedNameIdentifier; e; e = (struct zx_ff12_OldProvidedNameIdentifier_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_OldProvidedNameIdentifier(e, p);
  }
  for (se = x->RelayState; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "RelayState", sizeof("RelayState") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RegisterNameIdentifierRequest", sizeof("RegisterNameIdentifierRequest") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_RegisterNameIdentifierRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_RegisterNameIdentifierRequest(struct zx_ff12_RegisterNameIdentifierRequest_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_RegisterNameIdentifierRequest) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_RegisterNameIdentifierRequest(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierRequest_s* x )
{
  int len = zx_LEN_ff12_RegisterNameIdentifierRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_RegisterNameIdentifierRequest(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_RegisterNameIdentifierRequest) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_RegisterNameIdentifierRequest(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierRequest_s* x )
{
  int len = zx_LEN_ff12_RegisterNameIdentifierRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_RegisterNameIdentifierRequest(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_RegisterNameIdentifierResponse
#define EL_STRUCT zx_ff12_RegisterNameIdentifierResponse_s
#define EL_NS     ff12
#define EL_TAG    RegisterNameIdentifierResponse

/* FUNC(zx_LEN_ff12_RegisterNameIdentifierResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_RegisterNameIdentifierResponse(struct zx_ff12_RegisterNameIdentifierResponse_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("RegisterNameIdentifierResponse") - 1 + 1 + 2 + sizeof("RegisterNameIdentifierResponse") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ResponseID, sizeof("ResponseID"));
  len += zx_attr_len(x->InResponseTo, sizeof("InResponseTo"));
  len += zx_attr_len(x->MajorVersion, sizeof("MajorVersion"));
  len += zx_attr_len(x->MinorVersion, sizeof("MinorVersion"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->Recipient, sizeof("Recipient"));

  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_ff12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ff12_Extension_s*)e->gg.g.n)
	  len += zx_LEN_ff12_Extension(e);
  }
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("ProviderID") - 1);
  {
      struct zx_sp11_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp11_Status_s*)e->gg.g.n)
	  len += zx_LEN_sp11_Status(e);
  }
  for (se = x->RelayState; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("RelayState") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_RegisterNameIdentifierResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_RegisterNameIdentifierResponse(struct zx_ff12_RegisterNameIdentifierResponse_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RegisterNameIdentifierResponse", sizeof("RegisterNameIdentifierResponse") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ResponseID, "ResponseID", sizeof("ResponseID")-1);
  p = zx_attr_enc(p, x->InResponseTo, "InResponseTo", sizeof("InResponseTo")-1);
  p = zx_attr_enc(p, x->MajorVersion, "MajorVersion", sizeof("MajorVersion")-1);
  p = zx_attr_enc(p, x->MinorVersion, "MinorVersion", sizeof("MinorVersion")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->Recipient, "Recipient", sizeof("Recipient")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_ff12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_ff12_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_Extension(e, p);
  }
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "ProviderID", sizeof("ProviderID") - 1);
  {
      struct zx_sp11_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp11_Status_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp11_Status(e, p);
  }
  for (se = x->RelayState; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "RelayState", sizeof("RelayState") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RegisterNameIdentifierResponse", sizeof("RegisterNameIdentifierResponse") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_RegisterNameIdentifierResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_RegisterNameIdentifierResponse(struct zx_ff12_RegisterNameIdentifierResponse_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_RegisterNameIdentifierResponse) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_RegisterNameIdentifierResponse(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierResponse_s* x )
{
  int len = zx_LEN_ff12_RegisterNameIdentifierResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_RegisterNameIdentifierResponse(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_RegisterNameIdentifierResponse) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_RegisterNameIdentifierResponse(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierResponse_s* x )
{
  int len = zx_LEN_ff12_RegisterNameIdentifierResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_RegisterNameIdentifierResponse(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_RequestAuthnContext
#define EL_STRUCT zx_ff12_RequestAuthnContext_s
#define EL_NS     ff12
#define EL_TAG    RequestAuthnContext

/* FUNC(zx_LEN_ff12_RequestAuthnContext) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_RequestAuthnContext(struct zx_ff12_RequestAuthnContext_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("RequestAuthnContext") - 1 + 1 + 2 + sizeof("RequestAuthnContext") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->AuthnContextClassRef; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AuthnContextClassRef") - 1);
  for (se = x->AuthnContextStatementRef; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AuthnContextStatementRef") - 1);
  for (se = x->AuthnContextComparison; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AuthnContextComparison") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_RequestAuthnContext) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_RequestAuthnContext(struct zx_ff12_RequestAuthnContext_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RequestAuthnContext", sizeof("RequestAuthnContext") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->AuthnContextClassRef; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AuthnContextClassRef", sizeof("AuthnContextClassRef") - 1);
  for (se = x->AuthnContextStatementRef; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AuthnContextStatementRef", sizeof("AuthnContextStatementRef") - 1);
  for (se = x->AuthnContextComparison; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AuthnContextComparison", sizeof("AuthnContextComparison") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RequestAuthnContext", sizeof("RequestAuthnContext") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_RequestAuthnContext) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_RequestAuthnContext(struct zx_ff12_RequestAuthnContext_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_RequestAuthnContext) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_RequestAuthnContext(struct zx_ctx* c, struct zx_ff12_RequestAuthnContext_s* x )
{
  int len = zx_LEN_ff12_RequestAuthnContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_RequestAuthnContext(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_RequestAuthnContext) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_RequestAuthnContext(struct zx_ctx* c, struct zx_ff12_RequestAuthnContext_s* x )
{
  int len = zx_LEN_ff12_RequestAuthnContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_RequestAuthnContext(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_SPProvidedNameIdentifier
#define EL_STRUCT zx_ff12_SPProvidedNameIdentifier_s
#define EL_NS     ff12
#define EL_TAG    SPProvidedNameIdentifier

/* FUNC(zx_LEN_ff12_SPProvidedNameIdentifier) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_SPProvidedNameIdentifier(struct zx_ff12_SPProvidedNameIdentifier_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SPProvidedNameIdentifier") - 1 + 1 + 2 + sizeof("SPProvidedNameIdentifier") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->NameQualifier, sizeof("NameQualifier"));
  len += zx_attr_len(x->Format, sizeof("Format"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_SPProvidedNameIdentifier) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_SPProvidedNameIdentifier(struct zx_ff12_SPProvidedNameIdentifier_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SPProvidedNameIdentifier", sizeof("SPProvidedNameIdentifier") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->NameQualifier, "NameQualifier", sizeof("NameQualifier")-1);
  p = zx_attr_enc(p, x->Format, "Format", sizeof("Format")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SPProvidedNameIdentifier", sizeof("SPProvidedNameIdentifier") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_SPProvidedNameIdentifier) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_SPProvidedNameIdentifier(struct zx_ff12_SPProvidedNameIdentifier_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_SPProvidedNameIdentifier) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_SPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_SPProvidedNameIdentifier_s* x )
{
  int len = zx_LEN_ff12_SPProvidedNameIdentifier(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_SPProvidedNameIdentifier(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_SPProvidedNameIdentifier) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_SPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_SPProvidedNameIdentifier_s* x )
{
  int len = zx_LEN_ff12_SPProvidedNameIdentifier(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_SPProvidedNameIdentifier(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_Scoping
#define EL_STRUCT zx_ff12_Scoping_s
#define EL_NS     ff12
#define EL_TAG    Scoping

/* FUNC(zx_LEN_ff12_Scoping) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_Scoping(struct zx_ff12_Scoping_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Scoping") - 1 + 1 + 2 + sizeof("Scoping") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->ProxyCount; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("ProxyCount") - 1);
  {
      struct zx_ff12_IDPList_s* e;
      for (e = x->IDPList; e; e = (struct zx_ff12_IDPList_s*)e->gg.g.n)
	  len += zx_LEN_ff12_IDPList(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_Scoping) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_Scoping(struct zx_ff12_Scoping_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Scoping", sizeof("Scoping") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->ProxyCount; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "ProxyCount", sizeof("ProxyCount") - 1);
  {
      struct zx_ff12_IDPList_s* e;
      for (e = x->IDPList; e; e = (struct zx_ff12_IDPList_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_IDPList(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Scoping", sizeof("Scoping") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_Scoping) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_Scoping(struct zx_ff12_Scoping_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_Scoping) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_Scoping(struct zx_ctx* c, struct zx_ff12_Scoping_s* x )
{
  int len = zx_LEN_ff12_Scoping(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_Scoping(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_Scoping) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_Scoping(struct zx_ctx* c, struct zx_ff12_Scoping_s* x )
{
  int len = zx_LEN_ff12_Scoping(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_Scoping(x, buf ), buf, len);
}




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

#define EL_NAME   ff12_Subject
#define EL_STRUCT zx_ff12_Subject_s
#define EL_NS     ff12
#define EL_TAG    Subject

/* FUNC(zx_LEN_ff12_Subject) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_ff12_Subject(struct zx_ff12_Subject_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Subject") - 1 + 1 + 2 + sizeof("Subject") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sa11_NameIdentifier_s* e;
      for (e = x->NameIdentifier; e; e = (struct zx_sa11_NameIdentifier_s*)e->gg.g.n)
	  len += zx_LEN_sa11_NameIdentifier(e);
  }
  {
      struct zx_sa11_SubjectConfirmation_s* e;
      for (e = x->SubjectConfirmation; e; e = (struct zx_sa11_SubjectConfirmation_s*)e->gg.g.n)
	  len += zx_LEN_sa11_SubjectConfirmation(e);
  }
  {
      struct zx_ff12_IDPProvidedNameIdentifier_s* e;
      for (e = x->IDPProvidedNameIdentifier; e; e = (struct zx_ff12_IDPProvidedNameIdentifier_s*)e->gg.g.n)
	  len += zx_LEN_ff12_IDPProvidedNameIdentifier(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_ff12_Subject) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_ff12_Subject(struct zx_ff12_Subject_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Subject", sizeof("Subject") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa11_NameIdentifier_s* e;
      for (e = x->NameIdentifier; e; e = (struct zx_sa11_NameIdentifier_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_NameIdentifier(e, p);
  }
  {
      struct zx_sa11_SubjectConfirmation_s* e;
      for (e = x->SubjectConfirmation; e; e = (struct zx_sa11_SubjectConfirmation_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_SubjectConfirmation(e, p);
  }
  {
      struct zx_ff12_IDPProvidedNameIdentifier_s* e;
      for (e = x->IDPProvidedNameIdentifier; e; e = (struct zx_ff12_IDPProvidedNameIdentifier_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_IDPProvidedNameIdentifier(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Subject", sizeof("Subject") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_ff12_Subject) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_ff12_Subject(struct zx_ff12_Subject_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_ff12_Subject) */

struct zx_str_s* zx_EASY_ENC_SO_ff12_Subject(struct zx_ctx* c, struct zx_ff12_Subject_s* x )
{
  int len = zx_LEN_ff12_Subject(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_ff12_Subject(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_ff12_Subject) */

struct zx_str_s* zx_EASY_ENC_WO_ff12_Subject(struct zx_ctx* c, struct zx_ff12_Subject_s* x )
{
  int len = zx_LEN_ff12_Subject(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_ff12_Subject(x, buf ), buf, len);
}




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

#define EL_NAME   sa11_Action
#define EL_STRUCT zx_sa11_Action_s
#define EL_NS     sa11
#define EL_TAG    Action

/* FUNC(zx_LEN_sa11_Action) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa11_Action(struct zx_sa11_Action_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Action") - 1 + 1 + 2 + sizeof("Action") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Namespace, sizeof("Namespace"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa11_Action) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa11_Action(struct zx_sa11_Action_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Action", sizeof("Action") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Namespace, "Namespace", sizeof("Namespace")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Action", sizeof("Action") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa11_Action) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa11_Action(struct zx_sa11_Action_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa11_Action) */

struct zx_str_s* zx_EASY_ENC_SO_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x )
{
  int len = zx_LEN_sa11_Action(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_Action(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_Action) */

struct zx_str_s* zx_EASY_ENC_WO_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x )
{
  int len = zx_LEN_sa11_Action(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_Action(x, buf ), buf, len);
}




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

#define EL_NAME   sa11_Advice
#define EL_STRUCT zx_sa11_Advice_s
#define EL_NS     sa11
#define EL_TAG    Advice

/* FUNC(zx_LEN_sa11_Advice) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa11_Advice(struct zx_sa11_Advice_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Advice") - 1 + 1 + 2 + sizeof("Advice") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->AssertionIDReference; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AssertionIDReference") - 1);
  {
      struct zx_sa11_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa11_Assertion_s*)e->gg.g.n)
	  len += zx_LEN_sa11_Assertion(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa11_Advice) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa11_Advice(struct zx_sa11_Advice_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Advice", sizeof("Advice") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->AssertionIDReference; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AssertionIDReference", sizeof("AssertionIDReference") - 1);
  {
      struct zx_sa11_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa11_Assertion_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Assertion(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Advice", sizeof("Advice") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa11_Advice) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa11_Advice(struct zx_sa11_Advice_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa11_Advice) */

struct zx_str_s* zx_EASY_ENC_SO_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x )
{
  int len = zx_LEN_sa11_Advice(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_Advice(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_Advice) */

struct zx_str_s* zx_EASY_ENC_WO_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x )
{
  int len = zx_LEN_sa11_Advice(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_Advice(x, buf ), buf, len);
}




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

#define EL_NAME   sa11_Assertion
#define EL_STRUCT zx_sa11_Assertion_s
#define EL_NS     sa11
#define EL_TAG    Assertion

/* FUNC(zx_LEN_sa11_Assertion) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa11_Assertion(struct zx_sa11_Assertion_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Assertion") - 1 + 1 + 2 + sizeof("Assertion") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->MajorVersion, sizeof("MajorVersion"));
  len += zx_attr_len(x->MinorVersion, sizeof("MinorVersion"));
  len += zx_attr_len(x->AssertionID, sizeof("AssertionID"));
  len += zx_attr_len(x->Issuer, sizeof("Issuer"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));

  {
      struct zx_sa11_Conditions_s* e;
      for (e = x->Conditions; e; e = (struct zx_sa11_Conditions_s*)e->gg.g.n)
	  len += zx_LEN_sa11_Conditions(e);
  }
  {
      struct zx_sa11_Advice_s* e;
      for (e = x->Advice; e; e = (struct zx_sa11_Advice_s*)e->gg.g.n)
	  len += zx_LEN_sa11_Advice(e);
  }
  for (se = x->Statement; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("Statement") - 1);
  {
      struct zx_sa11_SubjectStatement_s* e;
      for (e = x->SubjectStatement; e; e = (struct zx_sa11_SubjectStatement_s*)e->gg.g.n)
	  len += zx_LEN_sa11_SubjectStatement(e);
  }
  {
      struct zx_sa11_AuthenticationStatement_s* e;
      for (e = x->AuthenticationStatement; e; e = (struct zx_sa11_AuthenticationStatement_s*)e->gg.g.n)
	  len += zx_LEN_sa11_AuthenticationStatement(e);
  }
  {
      struct zx_sa11_AuthorizationDecisionStatement_s* e;
      for (e = x->AuthorizationDecisionStatement; e; e = (struct zx_sa11_AuthorizationDecisionStatement_s*)e->gg.g.n)
	  len += zx_LEN_sa11_AuthorizationDecisionStatement(e);
  }
  {
      struct zx_sa11_AttributeStatement_s* e;
      for (e = x->AttributeStatement; e; e = (struct zx_sa11_AttributeStatement_s*)e->gg.g.n)
	  len += zx_LEN_sa11_AttributeStatement(e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa11_Assertion) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa11_Assertion(struct zx_sa11_Assertion_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Assertion", sizeof("Assertion") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->MajorVersion, "MajorVersion", sizeof("MajorVersion")-1);
  p = zx_attr_enc(p, x->MinorVersion, "MinorVersion", sizeof("MinorVersion")-1);
  p = zx_attr_enc(p, x->AssertionID, "AssertionID", sizeof("AssertionID")-1);
  p = zx_attr_enc(p, x->Issuer, "Issuer", sizeof("Issuer")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa11_Conditions_s* e;
      for (e = x->Conditions; e; e = (struct zx_sa11_Conditions_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Conditions(e, p);
  }
  {
      struct zx_sa11_Advice_s* e;
      for (e = x->Advice; e; e = (struct zx_sa11_Advice_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Advice(e, p);
  }
  for (se = x->Statement; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "Statement", sizeof("Statement") - 1);
  {
      struct zx_sa11_SubjectStatement_s* e;
      for (e = x->SubjectStatement; e; e = (struct zx_sa11_SubjectStatement_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_SubjectStatement(e, p);
  }
  {
      struct zx_sa11_AuthenticationStatement_s* e;
      for (e = x->AuthenticationStatement; e; e = (struct zx_sa11_AuthenticationStatement_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_AuthenticationStatement(e, p);
  }
  {
      struct zx_sa11_AuthorizationDecisionStatement_s* e;
      for (e = x->AuthorizationDecisionStatement; e; e = (struct zx_sa11_AuthorizationDecisionStatement_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_AuthorizationDecisionStatement(e, p);
  }
  {
      struct zx_sa11_AttributeStatement_s* e;
      for (e = x->AttributeStatement; e; e = (struct zx_sa11_AttributeStatement_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_AttributeStatement(e, p);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Assertion", sizeof("Assertion") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa11_Assertion) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa11_Assertion(struct zx_sa11_Assertion_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa11_Assertion) */

struct zx_str_s* zx_EASY_ENC_SO_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x )
{
  int len = zx_LEN_sa11_Assertion(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_Assertion(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_Assertion) */

struct zx_str_s* zx_EASY_ENC_WO_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x )
{
  int len = zx_LEN_sa11_Assertion(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_Assertion(x, buf ), buf, len);
}




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

#define EL_NAME   sa11_Attribute
#define EL_STRUCT zx_sa11_Attribute_s
#define EL_NS     sa11
#define EL_TAG    Attribute

/* FUNC(zx_LEN_sa11_Attribute) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa11_Attribute(struct zx_sa11_Attribute_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Attribute") - 1 + 1 + 2 + sizeof("Attribute") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->AttributeName, sizeof("AttributeName"));
  len += zx_attr_len(x->AttributeNamespace, sizeof("AttributeNamespace"));

  for (se = x->AttributeValue; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AttributeValue") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa11_Attribute) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa11_Attribute(struct zx_sa11_Attribute_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Attribute", sizeof("Attribute") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->AttributeName, "AttributeName", sizeof("AttributeName")-1);
  p = zx_attr_enc(p, x->AttributeNamespace, "AttributeNamespace", sizeof("AttributeNamespace")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->AttributeValue; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AttributeValue", sizeof("AttributeValue") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Attribute", sizeof("Attribute") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa11_Attribute) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa11_Attribute(struct zx_sa11_Attribute_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa11_Attribute) */

struct zx_str_s* zx_EASY_ENC_SO_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x )
{
  int len = zx_LEN_sa11_Attribute(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_Attribute(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_Attribute) */

struct zx_str_s* zx_EASY_ENC_WO_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x )
{
  int len = zx_LEN_sa11_Attribute(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_Attribute(x, buf ), buf, len);
}




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

#define EL_NAME   sa11_AttributeDesignator
#define EL_STRUCT zx_sa11_AttributeDesignator_s
#define EL_NS     sa11
#define EL_TAG    AttributeDesignator

/* FUNC(zx_LEN_sa11_AttributeDesignator) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa11_AttributeDesignator(struct zx_sa11_AttributeDesignator_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AttributeDesignator") - 1 + 1 + 2 + sizeof("AttributeDesignator") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->AttributeName, sizeof("AttributeName"));
  len += zx_attr_len(x->AttributeNamespace, sizeof("AttributeNamespace"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa11_AttributeDesignator) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa11_AttributeDesignator(struct zx_sa11_AttributeDesignator_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AttributeDesignator", sizeof("AttributeDesignator") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->AttributeName, "AttributeName", sizeof("AttributeName")-1);
  p = zx_attr_enc(p, x->AttributeNamespace, "AttributeNamespace", sizeof("AttributeNamespace")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AttributeDesignator", sizeof("AttributeDesignator") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa11_AttributeDesignator) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa11_AttributeDesignator(struct zx_sa11_AttributeDesignator_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa11_AttributeDesignator) */

struct zx_str_s* zx_EASY_ENC_SO_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x )
{
  int len = zx_LEN_sa11_AttributeDesignator(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_AttributeDesignator(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_AttributeDesignator) */

struct zx_str_s* zx_EASY_ENC_WO_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x )
{
  int len = zx_LEN_sa11_AttributeDesignator(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_AttributeDesignator(x, buf ), buf, len);
}




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

#define EL_NAME   sa11_AttributeStatement
#define EL_STRUCT zx_sa11_AttributeStatement_s
#define EL_NS     sa11
#define EL_TAG    AttributeStatement

/* FUNC(zx_LEN_sa11_AttributeStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa11_AttributeStatement(struct zx_sa11_AttributeStatement_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AttributeStatement") - 1 + 1 + 2 + sizeof("AttributeStatement") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  len += zx_LEN_sa11_Subject(e);
  }
  {
      struct zx_sa11_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zx_sa11_Attribute_s*)e->gg.g.n)
	  len += zx_LEN_sa11_Attribute(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa11_AttributeStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa11_AttributeStatement(struct zx_sa11_AttributeStatement_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AttributeStatement", sizeof("AttributeStatement") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Subject(e, p);
  }
  {
      struct zx_sa11_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zx_sa11_Attribute_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Attribute(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AttributeStatement", sizeof("AttributeStatement") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa11_AttributeStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa11_AttributeStatement(struct zx_sa11_AttributeStatement_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa11_AttributeStatement) */

struct zx_str_s* zx_EASY_ENC_SO_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x )
{
  int len = zx_LEN_sa11_AttributeStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_AttributeStatement(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_AttributeStatement) */

struct zx_str_s* zx_EASY_ENC_WO_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x )
{
  int len = zx_LEN_sa11_AttributeStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_AttributeStatement(x, buf ), buf, len);
}




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

#define EL_NAME   sa11_AudienceRestrictionCondition
#define EL_STRUCT zx_sa11_AudienceRestrictionCondition_s
#define EL_NS     sa11
#define EL_TAG    AudienceRestrictionCondition

/* FUNC(zx_LEN_sa11_AudienceRestrictionCondition) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa11_AudienceRestrictionCondition(struct zx_sa11_AudienceRestrictionCondition_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AudienceRestrictionCondition") - 1 + 1 + 2 + sizeof("AudienceRestrictionCondition") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->Audience; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("Audience") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa11_AudienceRestrictionCondition) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa11_AudienceRestrictionCondition(struct zx_sa11_AudienceRestrictionCondition_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AudienceRestrictionCondition", sizeof("AudienceRestrictionCondition") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->Audience; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "Audience", sizeof("Audience") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AudienceRestrictionCondition", sizeof("AudienceRestrictionCondition") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa11_AudienceRestrictionCondition) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa11_AudienceRestrictionCondition(struct zx_sa11_AudienceRestrictionCondition_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa11_AudienceRestrictionCondition) */

struct zx_str_s* zx_EASY_ENC_SO_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x )
{
  int len = zx_LEN_sa11_AudienceRestrictionCondition(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_AudienceRestrictionCondition(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_AudienceRestrictionCondition) */

struct zx_str_s* zx_EASY_ENC_WO_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x )
{
  int len = zx_LEN_sa11_AudienceRestrictionCondition(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_AudienceRestrictionCondition(x, buf ), buf, len);
}




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

#define EL_NAME   sa11_AuthenticationStatement
#define EL_STRUCT zx_sa11_AuthenticationStatement_s
#define EL_NS     sa11
#define EL_TAG    AuthenticationStatement

/* FUNC(zx_LEN_sa11_AuthenticationStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa11_AuthenticationStatement(struct zx_sa11_AuthenticationStatement_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthenticationStatement") - 1 + 1 + 2 + sizeof("AuthenticationStatement") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->AuthenticationMethod, sizeof("AuthenticationMethod"));
  len += zx_attr_len(x->AuthenticationInstant, sizeof("AuthenticationInstant"));

  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  len += zx_LEN_sa11_Subject(e);
  }
  {
      struct zx_sa11_SubjectLocality_s* e;
      for (e = x->SubjectLocality; e; e = (struct zx_sa11_SubjectLocality_s*)e->gg.g.n)
	  len += zx_LEN_sa11_SubjectLocality(e);
  }
  {
      struct zx_sa11_AuthorityBinding_s* e;
      for (e = x->AuthorityBinding; e; e = (struct zx_sa11_AuthorityBinding_s*)e->gg.g.n)
	  len += zx_LEN_sa11_AuthorityBinding(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa11_AuthenticationStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa11_AuthenticationStatement(struct zx_sa11_AuthenticationStatement_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthenticationStatement", sizeof("AuthenticationStatement") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->AuthenticationMethod, "AuthenticationMethod", sizeof("AuthenticationMethod")-1);
  p = zx_attr_enc(p, x->AuthenticationInstant, "AuthenticationInstant", sizeof("AuthenticationInstant")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Subject(e, p);
  }
  {
      struct zx_sa11_SubjectLocality_s* e;
      for (e = x->SubjectLocality; e; e = (struct zx_sa11_SubjectLocality_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_SubjectLocality(e, p);
  }
  {
      struct zx_sa11_AuthorityBinding_s* e;
      for (e = x->AuthorityBinding; e; e = (struct zx_sa11_AuthorityBinding_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_AuthorityBinding(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthenticationStatement", sizeof("AuthenticationStatement") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa11_AuthenticationStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa11_AuthenticationStatement(struct zx_sa11_AuthenticationStatement_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa11_AuthenticationStatement) */

struct zx_str_s* zx_EASY_ENC_SO_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x )
{
  int len = zx_LEN_sa11_AuthenticationStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_AuthenticationStatement(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_AuthenticationStatement) */

struct zx_str_s* zx_EASY_ENC_WO_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x )
{
  int len = zx_LEN_sa11_AuthenticationStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_AuthenticationStatement(x, buf ), buf, len);
}




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

#define EL_NAME   sa11_AuthorityBinding
#define EL_STRUCT zx_sa11_AuthorityBinding_s
#define EL_NS     sa11
#define EL_TAG    AuthorityBinding

/* FUNC(zx_LEN_sa11_AuthorityBinding) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa11_AuthorityBinding(struct zx_sa11_AuthorityBinding_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthorityBinding") - 1 + 1 + 2 + sizeof("AuthorityBinding") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->AuthorityKind, sizeof("AuthorityKind"));
  len += zx_attr_len(x->Location, sizeof("Location"));
  len += zx_attr_len(x->Binding, sizeof("Binding"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa11_AuthorityBinding) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa11_AuthorityBinding(struct zx_sa11_AuthorityBinding_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthorityBinding", sizeof("AuthorityBinding") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->AuthorityKind, "AuthorityKind", sizeof("AuthorityKind")-1);
  p = zx_attr_enc(p, x->Location, "Location", sizeof("Location")-1);
  p = zx_attr_enc(p, x->Binding, "Binding", sizeof("Binding")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthorityBinding", sizeof("AuthorityBinding") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa11_AuthorityBinding) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa11_AuthorityBinding(struct zx_sa11_AuthorityBinding_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa11_AuthorityBinding) */

struct zx_str_s* zx_EASY_ENC_SO_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x )
{
  int len = zx_LEN_sa11_AuthorityBinding(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_AuthorityBinding(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_AuthorityBinding) */

struct zx_str_s* zx_EASY_ENC_WO_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x )
{
  int len = zx_LEN_sa11_AuthorityBinding(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_AuthorityBinding(x, buf ), buf, len);
}




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

#define EL_NAME   sa11_AuthorizationDecisionStatement
#define EL_STRUCT zx_sa11_AuthorizationDecisionStatement_s
#define EL_NS     sa11
#define EL_TAG    AuthorizationDecisionStatement

/* FUNC(zx_LEN_sa11_AuthorizationDecisionStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa11_AuthorizationDecisionStatement(struct zx_sa11_AuthorizationDecisionStatement_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthorizationDecisionStatement") - 1 + 1 + 2 + sizeof("AuthorizationDecisionStatement") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Resource, sizeof("Resource"));
  len += zx_attr_len(x->Decision, sizeof("Decision"));

  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  len += zx_LEN_sa11_Subject(e);
  }
  {
      struct zx_sa11_Action_s* e;
      for (e = x->Action; e; e = (struct zx_sa11_Action_s*)e->gg.g.n)
	  len += zx_LEN_sa11_Action(e);
  }
  {
      struct zx_sa11_Evidence_s* e;
      for (e = x->Evidence; e; e = (struct zx_sa11_Evidence_s*)e->gg.g.n)
	  len += zx_LEN_sa11_Evidence(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa11_AuthorizationDecisionStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa11_AuthorizationDecisionStatement(struct zx_sa11_AuthorizationDecisionStatement_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthorizationDecisionStatement", sizeof("AuthorizationDecisionStatement") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Resource, "Resource", sizeof("Resource")-1);
  p = zx_attr_enc(p, x->Decision, "Decision", sizeof("Decision")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Subject(e, p);
  }
  {
      struct zx_sa11_Action_s* e;
      for (e = x->Action; e; e = (struct zx_sa11_Action_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Action(e, p);
  }
  {
      struct zx_sa11_Evidence_s* e;
      for (e = x->Evidence; e; e = (struct zx_sa11_Evidence_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Evidence(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthorizationDecisionStatement", sizeof("AuthorizationDecisionStatement") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa11_AuthorizationDecisionStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa11_AuthorizationDecisionStatement(struct zx_sa11_AuthorizationDecisionStatement_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa11_AuthorizationDecisionStatement) */

struct zx_str_s* zx_EASY_ENC_SO_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x )
{
  int len = zx_LEN_sa11_AuthorizationDecisionStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_AuthorizationDecisionStatement(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_AuthorizationDecisionStatement) */

struct zx_str_s* zx_EASY_ENC_WO_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x )
{
  int len = zx_LEN_sa11_AuthorizationDecisionStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_AuthorizationDecisionStatement(x, buf ), buf, len);
}




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

#define EL_NAME   sa11_Conditions
#define EL_STRUCT zx_sa11_Conditions_s
#define EL_NS     sa11
#define EL_TAG    Conditions

/* FUNC(zx_LEN_sa11_Conditions) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa11_Conditions(struct zx_sa11_Conditions_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Conditions") - 1 + 1 + 2 + sizeof("Conditions") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->NotBefore, sizeof("NotBefore"));
  len += zx_attr_len(x->NotOnOrAfter, sizeof("NotOnOrAfter"));

  {
      struct zx_sa11_AudienceRestrictionCondition_s* e;
      for (e = x->AudienceRestrictionCondition; e; e = (struct zx_sa11_AudienceRestrictionCondition_s*)e->gg.g.n)
	  len += zx_LEN_sa11_AudienceRestrictionCondition(e);
  }
  {
      struct zx_sa11_DoNotCacheCondition_s* e;
      for (e = x->DoNotCacheCondition; e; e = (struct zx_sa11_DoNotCacheCondition_s*)e->gg.g.n)
	  len += zx_LEN_sa11_DoNotCacheCondition(e);
  }
  for (se = x->Condition; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("Condition") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa11_Conditions) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa11_Conditions(struct zx_sa11_Conditions_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Conditions", sizeof("Conditions") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->NotBefore, "NotBefore", sizeof("NotBefore")-1);
  p = zx_attr_enc(p, x->NotOnOrAfter, "NotOnOrAfter", sizeof("NotOnOrAfter")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa11_AudienceRestrictionCondition_s* e;
      for (e = x->AudienceRestrictionCondition; e; e = (struct zx_sa11_AudienceRestrictionCondition_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_AudienceRestrictionCondition(e, p);
  }
  {
      struct zx_sa11_DoNotCacheCondition_s* e;
      for (e = x->DoNotCacheCondition; e; e = (struct zx_sa11_DoNotCacheCondition_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_DoNotCacheCondition(e, p);
  }
  for (se = x->Condition; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "Condition", sizeof("Condition") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Conditions", sizeof("Conditions") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa11_Conditions) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa11_Conditions(struct zx_sa11_Conditions_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa11_Conditions) */

struct zx_str_s* zx_EASY_ENC_SO_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x )
{
  int len = zx_LEN_sa11_Conditions(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_Conditions(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_Conditions) */

struct zx_str_s* zx_EASY_ENC_WO_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x )
{
  int len = zx_LEN_sa11_Conditions(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_Conditions(x, buf ), buf, len);
}




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

#define EL_NAME   sa11_DoNotCacheCondition
#define EL_STRUCT zx_sa11_DoNotCacheCondition_s
#define EL_NS     sa11
#define EL_TAG    DoNotCacheCondition

/* FUNC(zx_LEN_sa11_DoNotCacheCondition) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa11_DoNotCacheCondition(struct zx_sa11_DoNotCacheCondition_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("DoNotCacheCondition") - 1 + 1 + 2 + sizeof("DoNotCacheCondition") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */




  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa11_DoNotCacheCondition) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa11_DoNotCacheCondition(struct zx_sa11_DoNotCacheCondition_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "DoNotCacheCondition", sizeof("DoNotCacheCondition") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "DoNotCacheCondition", sizeof("DoNotCacheCondition") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa11_DoNotCacheCondition) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa11_DoNotCacheCondition(struct zx_sa11_DoNotCacheCondition_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa11_DoNotCacheCondition) */

struct zx_str_s* zx_EASY_ENC_SO_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x )
{
  int len = zx_LEN_sa11_DoNotCacheCondition(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_DoNotCacheCondition(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_DoNotCacheCondition) */

struct zx_str_s* zx_EASY_ENC_WO_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x )
{
  int len = zx_LEN_sa11_DoNotCacheCondition(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_DoNotCacheCondition(x, buf ), buf, len);
}




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

#define EL_NAME   sa11_Evidence
#define EL_STRUCT zx_sa11_Evidence_s
#define EL_NS     sa11
#define EL_TAG    Evidence

/* FUNC(zx_LEN_sa11_Evidence) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa11_Evidence(struct zx_sa11_Evidence_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Evidence") - 1 + 1 + 2 + sizeof("Evidence") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->AssertionIDReference; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AssertionIDReference") - 1);
  {
      struct zx_sa11_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa11_Assertion_s*)e->gg.g.n)
	  len += zx_LEN_sa11_Assertion(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa11_Evidence) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa11_Evidence(struct zx_sa11_Evidence_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Evidence", sizeof("Evidence") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->AssertionIDReference; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AssertionIDReference", sizeof("AssertionIDReference") - 1);
  {
      struct zx_sa11_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa11_Assertion_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Assertion(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Evidence", sizeof("Evidence") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa11_Evidence) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa11_Evidence(struct zx_sa11_Evidence_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa11_Evidence) */

struct zx_str_s* zx_EASY_ENC_SO_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x )
{
  int len = zx_LEN_sa11_Evidence(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_Evidence(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_Evidence) */

struct zx_str_s* zx_EASY_ENC_WO_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x )
{
  int len = zx_LEN_sa11_Evidence(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_Evidence(x, buf ), buf, len);
}




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

#define EL_NAME   sa11_NameIdentifier
#define EL_STRUCT zx_sa11_NameIdentifier_s
#define EL_NS     sa11
#define EL_TAG    NameIdentifier

/* FUNC(zx_LEN_sa11_NameIdentifier) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa11_NameIdentifier(struct zx_sa11_NameIdentifier_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("NameIdentifier") - 1 + 1 + 2 + sizeof("NameIdentifier") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->NameQualifier, sizeof("NameQualifier"));
  len += zx_attr_len(x->Format, sizeof("Format"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa11_NameIdentifier) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa11_NameIdentifier(struct zx_sa11_NameIdentifier_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "NameIdentifier", sizeof("NameIdentifier") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->NameQualifier, "NameQualifier", sizeof("NameQualifier")-1);
  p = zx_attr_enc(p, x->Format, "Format", sizeof("Format")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "NameIdentifier", sizeof("NameIdentifier") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa11_NameIdentifier) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa11_NameIdentifier(struct zx_sa11_NameIdentifier_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa11_NameIdentifier) */

struct zx_str_s* zx_EASY_ENC_SO_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x )
{
  int len = zx_LEN_sa11_NameIdentifier(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_NameIdentifier(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_NameIdentifier) */

struct zx_str_s* zx_EASY_ENC_WO_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x )
{
  int len = zx_LEN_sa11_NameIdentifier(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_NameIdentifier(x, buf ), buf, len);
}




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

#define EL_NAME   sa11_Subject
#define EL_STRUCT zx_sa11_Subject_s
#define EL_NS     sa11
#define EL_TAG    Subject

/* FUNC(zx_LEN_sa11_Subject) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa11_Subject(struct zx_sa11_Subject_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Subject") - 1 + 1 + 2 + sizeof("Subject") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sa11_NameIdentifier_s* e;
      for (e = x->NameIdentifier; e; e = (struct zx_sa11_NameIdentifier_s*)e->gg.g.n)
	  len += zx_LEN_sa11_NameIdentifier(e);
  }
  {
      struct zx_sa11_SubjectConfirmation_s* e;
      for (e = x->SubjectConfirmation; e; e = (struct zx_sa11_SubjectConfirmation_s*)e->gg.g.n)
	  len += zx_LEN_sa11_SubjectConfirmation(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa11_Subject) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa11_Subject(struct zx_sa11_Subject_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Subject", sizeof("Subject") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa11_NameIdentifier_s* e;
      for (e = x->NameIdentifier; e; e = (struct zx_sa11_NameIdentifier_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_NameIdentifier(e, p);
  }
  {
      struct zx_sa11_SubjectConfirmation_s* e;
      for (e = x->SubjectConfirmation; e; e = (struct zx_sa11_SubjectConfirmation_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_SubjectConfirmation(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Subject", sizeof("Subject") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa11_Subject) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa11_Subject(struct zx_sa11_Subject_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa11_Subject) */

struct zx_str_s* zx_EASY_ENC_SO_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x )
{
  int len = zx_LEN_sa11_Subject(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_Subject(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_Subject) */

struct zx_str_s* zx_EASY_ENC_WO_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x )
{
  int len = zx_LEN_sa11_Subject(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_Subject(x, buf ), buf, len);
}




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

#define EL_NAME   sa11_SubjectConfirmation
#define EL_STRUCT zx_sa11_SubjectConfirmation_s
#define EL_NS     sa11
#define EL_TAG    SubjectConfirmation

/* FUNC(zx_LEN_sa11_SubjectConfirmation) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa11_SubjectConfirmation(struct zx_sa11_SubjectConfirmation_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SubjectConfirmation") - 1 + 1 + 2 + sizeof("SubjectConfirmation") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->ConfirmationMethod; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("ConfirmationMethod") - 1);
  for (se = x->SubjectConfirmationData; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("SubjectConfirmationData") - 1);
  {
      struct zx_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n)
	  len += zx_LEN_ds_KeyInfo(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa11_SubjectConfirmation) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa11_SubjectConfirmation(struct zx_sa11_SubjectConfirmation_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SubjectConfirmation", sizeof("SubjectConfirmation") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->ConfirmationMethod; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "ConfirmationMethod", sizeof("ConfirmationMethod") - 1);
  for (se = x->SubjectConfirmationData; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "SubjectConfirmationData", sizeof("SubjectConfirmationData") - 1);
  {
      struct zx_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_KeyInfo(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SubjectConfirmation", sizeof("SubjectConfirmation") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa11_SubjectConfirmation) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa11_SubjectConfirmation(struct zx_sa11_SubjectConfirmation_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa11_SubjectConfirmation) */

struct zx_str_s* zx_EASY_ENC_SO_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x )
{
  int len = zx_LEN_sa11_SubjectConfirmation(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_SubjectConfirmation(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_SubjectConfirmation) */

struct zx_str_s* zx_EASY_ENC_WO_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x )
{
  int len = zx_LEN_sa11_SubjectConfirmation(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_SubjectConfirmation(x, buf ), buf, len);
}




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

#define EL_NAME   sa11_SubjectLocality
#define EL_STRUCT zx_sa11_SubjectLocality_s
#define EL_NS     sa11
#define EL_TAG    SubjectLocality

/* FUNC(zx_LEN_sa11_SubjectLocality) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa11_SubjectLocality(struct zx_sa11_SubjectLocality_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SubjectLocality") - 1 + 1 + 2 + sizeof("SubjectLocality") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->IPAddress, sizeof("IPAddress"));
  len += zx_attr_len(x->DNSAddress, sizeof("DNSAddress"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa11_SubjectLocality) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa11_SubjectLocality(struct zx_sa11_SubjectLocality_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SubjectLocality", sizeof("SubjectLocality") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->IPAddress, "IPAddress", sizeof("IPAddress")-1);
  p = zx_attr_enc(p, x->DNSAddress, "DNSAddress", sizeof("DNSAddress")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SubjectLocality", sizeof("SubjectLocality") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa11_SubjectLocality) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa11_SubjectLocality(struct zx_sa11_SubjectLocality_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa11_SubjectLocality) */

struct zx_str_s* zx_EASY_ENC_SO_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x )
{
  int len = zx_LEN_sa11_SubjectLocality(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_SubjectLocality(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_SubjectLocality) */

struct zx_str_s* zx_EASY_ENC_WO_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x )
{
  int len = zx_LEN_sa11_SubjectLocality(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_SubjectLocality(x, buf ), buf, len);
}




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

#define EL_NAME   sa11_SubjectStatement
#define EL_STRUCT zx_sa11_SubjectStatement_s
#define EL_NS     sa11
#define EL_TAG    SubjectStatement

/* FUNC(zx_LEN_sa11_SubjectStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa11_SubjectStatement(struct zx_sa11_SubjectStatement_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SubjectStatement") - 1 + 1 + 2 + sizeof("SubjectStatement") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  len += zx_LEN_sa11_Subject(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa11_SubjectStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa11_SubjectStatement(struct zx_sa11_SubjectStatement_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SubjectStatement", sizeof("SubjectStatement") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Subject(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SubjectStatement", sizeof("SubjectStatement") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa11_SubjectStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa11_SubjectStatement(struct zx_sa11_SubjectStatement_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa11_SubjectStatement) */

struct zx_str_s* zx_EASY_ENC_SO_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x )
{
  int len = zx_LEN_sa11_SubjectStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_SubjectStatement(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_SubjectStatement) */

struct zx_str_s* zx_EASY_ENC_WO_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x )
{
  int len = zx_LEN_sa11_SubjectStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_SubjectStatement(x, buf ), buf, len);
}




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

#define EL_NAME   sa_Action
#define EL_STRUCT zx_sa_Action_s
#define EL_NS     sa
#define EL_TAG    Action

/* FUNC(zx_LEN_sa_Action) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa_Action(struct zx_sa_Action_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Action") - 1 + 1 + 2 + sizeof("Action") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Namespace, sizeof("Namespace"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa_Action) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa_Action(struct zx_sa_Action_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Action", sizeof("Action") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Namespace, "Namespace", sizeof("Namespace")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Action", sizeof("Action") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa_Action) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa_Action(struct zx_sa_Action_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa_Action) */

struct zx_str_s* zx_EASY_ENC_SO_sa_Action(struct zx_ctx* c, struct zx_sa_Action_s* x )
{
  int len = zx_LEN_sa_Action(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa_Action(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa_Action) */

struct zx_str_s* zx_EASY_ENC_WO_sa_Action(struct zx_ctx* c, struct zx_sa_Action_s* x )
{
  int len = zx_LEN_sa_Action(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa_Action(x, buf ), buf, len);
}




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

#define EL_NAME   sa_Advice
#define EL_STRUCT zx_sa_Advice_s
#define EL_NS     sa
#define EL_TAG    Advice

/* FUNC(zx_LEN_sa_Advice) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa_Advice(struct zx_sa_Advice_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Advice") - 1 + 1 + 2 + sizeof("Advice") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->AssertionIDRef; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AssertionIDRef") - 1);
  for (se = x->AssertionURIRef; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AssertionURIRef") - 1);
  {
      struct zx_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n)
	  len += zx_LEN_sa_Assertion(e);
  }
  {
      struct zx_sa_EncryptedAssertion_s* e;
      for (e = x->EncryptedAssertion; e; e = (struct zx_sa_EncryptedAssertion_s*)e->gg.g.n)
	  len += zx_LEN_sa_EncryptedAssertion(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa_Advice) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa_Advice(struct zx_sa_Advice_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Advice", sizeof("Advice") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->AssertionIDRef; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AssertionIDRef", sizeof("AssertionIDRef") - 1);
  for (se = x->AssertionURIRef; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AssertionURIRef", sizeof("AssertionURIRef") - 1);
  {
      struct zx_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Assertion(e, p);
  }
  {
      struct zx_sa_EncryptedAssertion_s* e;
      for (e = x->EncryptedAssertion; e; e = (struct zx_sa_EncryptedAssertion_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_EncryptedAssertion(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Advice", sizeof("Advice") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa_Advice) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa_Advice(struct zx_sa_Advice_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa_Advice) */

struct zx_str_s* zx_EASY_ENC_SO_sa_Advice(struct zx_ctx* c, struct zx_sa_Advice_s* x )
{
  int len = zx_LEN_sa_Advice(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa_Advice(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa_Advice) */

struct zx_str_s* zx_EASY_ENC_WO_sa_Advice(struct zx_ctx* c, struct zx_sa_Advice_s* x )
{
  int len = zx_LEN_sa_Advice(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa_Advice(x, buf ), buf, len);
}




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

#define EL_NAME   sa_Assertion
#define EL_STRUCT zx_sa_Assertion_s
#define EL_NS     sa
#define EL_TAG    Assertion

/* FUNC(zx_LEN_sa_Assertion) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa_Assertion(struct zx_sa_Assertion_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Assertion") - 1 + 1 + 2 + sizeof("Assertion") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Version, sizeof("Version"));
  len += zx_attr_len(x->ID, sizeof("ID"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  len += zx_LEN_sa_Issuer(e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n)
	  len += zx_LEN_sa_Subject(e);
  }
  {
      struct zx_sa_Conditions_s* e;
      for (e = x->Conditions; e; e = (struct zx_sa_Conditions_s*)e->gg.g.n)
	  len += zx_LEN_sa_Conditions(e);
  }
  {
      struct zx_sa_Advice_s* e;
      for (e = x->Advice; e; e = (struct zx_sa_Advice_s*)e->gg.g.n)
	  len += zx_LEN_sa_Advice(e);
  }
  for (se = x->Statement; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("Statement") - 1);
  {
      struct zx_sa_AuthnStatement_s* e;
      for (e = x->AuthnStatement; e; e = (struct zx_sa_AuthnStatement_s*)e->gg.g.n)
	  len += zx_LEN_sa_AuthnStatement(e);
  }
  {
      struct zx_sa_AuthzDecisionStatement_s* e;
      for (e = x->AuthzDecisionStatement; e; e = (struct zx_sa_AuthzDecisionStatement_s*)e->gg.g.n)
	  len += zx_LEN_sa_AuthzDecisionStatement(e);
  }
  {
      struct zx_sa_AttributeStatement_s* e;
      for (e = x->AttributeStatement; e; e = (struct zx_sa_AttributeStatement_s*)e->gg.g.n)
	  len += zx_LEN_sa_AttributeStatement(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa_Assertion) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa_Assertion(struct zx_sa_Assertion_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Assertion", sizeof("Assertion") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Version, "Version", sizeof("Version")-1);
  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Issuer(e, p);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Subject(e, p);
  }
  {
      struct zx_sa_Conditions_s* e;
      for (e = x->Conditions; e; e = (struct zx_sa_Conditions_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Conditions(e, p);
  }
  {
      struct zx_sa_Advice_s* e;
      for (e = x->Advice; e; e = (struct zx_sa_Advice_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Advice(e, p);
  }
  for (se = x->Statement; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "Statement", sizeof("Statement") - 1);
  {
      struct zx_sa_AuthnStatement_s* e;
      for (e = x->AuthnStatement; e; e = (struct zx_sa_AuthnStatement_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_AuthnStatement(e, p);
  }
  {
      struct zx_sa_AuthzDecisionStatement_s* e;
      for (e = x->AuthzDecisionStatement; e; e = (struct zx_sa_AuthzDecisionStatement_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_AuthzDecisionStatement(e, p);
  }
  {
      struct zx_sa_AttributeStatement_s* e;
      for (e = x->AttributeStatement; e; e = (struct zx_sa_AttributeStatement_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_AttributeStatement(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Assertion", sizeof("Assertion") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa_Assertion) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa_Assertion(struct zx_sa_Assertion_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa_Assertion) */

struct zx_str_s* zx_EASY_ENC_SO_sa_Assertion(struct zx_ctx* c, struct zx_sa_Assertion_s* x )
{
  int len = zx_LEN_sa_Assertion(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa_Assertion(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa_Assertion) */

struct zx_str_s* zx_EASY_ENC_WO_sa_Assertion(struct zx_ctx* c, struct zx_sa_Assertion_s* x )
{
  int len = zx_LEN_sa_Assertion(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa_Assertion(x, buf ), buf, len);
}




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

#define EL_NAME   sa_Attribute
#define EL_STRUCT zx_sa_Attribute_s
#define EL_NS     sa
#define EL_TAG    Attribute

/* FUNC(zx_LEN_sa_Attribute) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa_Attribute(struct zx_sa_Attribute_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Attribute") - 1 + 1 + 2 + sizeof("Attribute") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Name, sizeof("Name"));
  len += zx_attr_len(x->NameFormat, sizeof("NameFormat"));
  len += zx_attr_len(x->FriendlyName, sizeof("FriendlyName"));

  for (se = x->AttributeValue; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AttributeValue") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa_Attribute) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa_Attribute(struct zx_sa_Attribute_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Attribute", sizeof("Attribute") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Name, "Name", sizeof("Name")-1);
  p = zx_attr_enc(p, x->NameFormat, "NameFormat", sizeof("NameFormat")-1);
  p = zx_attr_enc(p, x->FriendlyName, "FriendlyName", sizeof("FriendlyName")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->AttributeValue; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AttributeValue", sizeof("AttributeValue") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Attribute", sizeof("Attribute") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa_Attribute) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa_Attribute(struct zx_sa_Attribute_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa_Attribute) */

struct zx_str_s* zx_EASY_ENC_SO_sa_Attribute(struct zx_ctx* c, struct zx_sa_Attribute_s* x )
{
  int len = zx_LEN_sa_Attribute(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa_Attribute(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa_Attribute) */

struct zx_str_s* zx_EASY_ENC_WO_sa_Attribute(struct zx_ctx* c, struct zx_sa_Attribute_s* x )
{
  int len = zx_LEN_sa_Attribute(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa_Attribute(x, buf ), buf, len);
}




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

#define EL_NAME   sa_AttributeStatement
#define EL_STRUCT zx_sa_AttributeStatement_s
#define EL_NS     sa
#define EL_TAG    AttributeStatement

/* FUNC(zx_LEN_sa_AttributeStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa_AttributeStatement(struct zx_sa_AttributeStatement_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AttributeStatement") - 1 + 1 + 2 + sizeof("AttributeStatement") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sa_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zx_sa_Attribute_s*)e->gg.g.n)
	  len += zx_LEN_sa_Attribute(e);
  }
  {
      struct zx_sa_EncryptedAttribute_s* e;
      for (e = x->EncryptedAttribute; e; e = (struct zx_sa_EncryptedAttribute_s*)e->gg.g.n)
	  len += zx_LEN_sa_EncryptedAttribute(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa_AttributeStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa_AttributeStatement(struct zx_sa_AttributeStatement_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AttributeStatement", sizeof("AttributeStatement") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zx_sa_Attribute_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Attribute(e, p);
  }
  {
      struct zx_sa_EncryptedAttribute_s* e;
      for (e = x->EncryptedAttribute; e; e = (struct zx_sa_EncryptedAttribute_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_EncryptedAttribute(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AttributeStatement", sizeof("AttributeStatement") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa_AttributeStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa_AttributeStatement(struct zx_sa_AttributeStatement_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa_AttributeStatement) */

struct zx_str_s* zx_EASY_ENC_SO_sa_AttributeStatement(struct zx_ctx* c, struct zx_sa_AttributeStatement_s* x )
{
  int len = zx_LEN_sa_AttributeStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa_AttributeStatement(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa_AttributeStatement) */

struct zx_str_s* zx_EASY_ENC_WO_sa_AttributeStatement(struct zx_ctx* c, struct zx_sa_AttributeStatement_s* x )
{
  int len = zx_LEN_sa_AttributeStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa_AttributeStatement(x, buf ), buf, len);
}




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

#define EL_NAME   sa_AudienceRestriction
#define EL_STRUCT zx_sa_AudienceRestriction_s
#define EL_NS     sa
#define EL_TAG    AudienceRestriction

/* FUNC(zx_LEN_sa_AudienceRestriction) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa_AudienceRestriction(struct zx_sa_AudienceRestriction_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AudienceRestriction") - 1 + 1 + 2 + sizeof("AudienceRestriction") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->Audience; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("Audience") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa_AudienceRestriction) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa_AudienceRestriction(struct zx_sa_AudienceRestriction_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AudienceRestriction", sizeof("AudienceRestriction") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->Audience; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "Audience", sizeof("Audience") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AudienceRestriction", sizeof("AudienceRestriction") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa_AudienceRestriction) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa_AudienceRestriction(struct zx_sa_AudienceRestriction_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa_AudienceRestriction) */

struct zx_str_s* zx_EASY_ENC_SO_sa_AudienceRestriction(struct zx_ctx* c, struct zx_sa_AudienceRestriction_s* x )
{
  int len = zx_LEN_sa_AudienceRestriction(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa_AudienceRestriction(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa_AudienceRestriction) */

struct zx_str_s* zx_EASY_ENC_WO_sa_AudienceRestriction(struct zx_ctx* c, struct zx_sa_AudienceRestriction_s* x )
{
  int len = zx_LEN_sa_AudienceRestriction(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa_AudienceRestriction(x, buf ), buf, len);
}




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

#define EL_NAME   sa_AuthnContext
#define EL_STRUCT zx_sa_AuthnContext_s
#define EL_NS     sa
#define EL_TAG    AuthnContext

/* FUNC(zx_LEN_sa_AuthnContext) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa_AuthnContext(struct zx_sa_AuthnContext_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthnContext") - 1 + 1 + 2 + sizeof("AuthnContext") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->AuthnContextClassRef; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AuthnContextClassRef") - 1);
  for (se = x->AuthnContextDecl; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AuthnContextDecl") - 1);
  for (se = x->AuthnContextDeclRef; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AuthnContextDeclRef") - 1);
  for (se = x->AuthenticatingAuthority; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AuthenticatingAuthority") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa_AuthnContext) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa_AuthnContext(struct zx_sa_AuthnContext_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthnContext", sizeof("AuthnContext") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->AuthnContextClassRef; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AuthnContextClassRef", sizeof("AuthnContextClassRef") - 1);
  for (se = x->AuthnContextDecl; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AuthnContextDecl", sizeof("AuthnContextDecl") - 1);
  for (se = x->AuthnContextDeclRef; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AuthnContextDeclRef", sizeof("AuthnContextDeclRef") - 1);
  for (se = x->AuthenticatingAuthority; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AuthenticatingAuthority", sizeof("AuthenticatingAuthority") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthnContext", sizeof("AuthnContext") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa_AuthnContext) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa_AuthnContext(struct zx_sa_AuthnContext_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa_AuthnContext) */

struct zx_str_s* zx_EASY_ENC_SO_sa_AuthnContext(struct zx_ctx* c, struct zx_sa_AuthnContext_s* x )
{
  int len = zx_LEN_sa_AuthnContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa_AuthnContext(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa_AuthnContext) */

struct zx_str_s* zx_EASY_ENC_WO_sa_AuthnContext(struct zx_ctx* c, struct zx_sa_AuthnContext_s* x )
{
  int len = zx_LEN_sa_AuthnContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa_AuthnContext(x, buf ), buf, len);
}




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

#define EL_NAME   sa_AuthnStatement
#define EL_STRUCT zx_sa_AuthnStatement_s
#define EL_NS     sa
#define EL_TAG    AuthnStatement

/* FUNC(zx_LEN_sa_AuthnStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa_AuthnStatement(struct zx_sa_AuthnStatement_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthnStatement") - 1 + 1 + 2 + sizeof("AuthnStatement") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->AuthnInstant, sizeof("AuthnInstant"));
  len += zx_attr_len(x->SessionIndex, sizeof("SessionIndex"));
  len += zx_attr_len(x->SessionNotOnOrAfter, sizeof("SessionNotOnOrAfter"));

  {
      struct zx_sa_SubjectLocality_s* e;
      for (e = x->SubjectLocality; e; e = (struct zx_sa_SubjectLocality_s*)e->gg.g.n)
	  len += zx_LEN_sa_SubjectLocality(e);
  }
  {
      struct zx_sa_AuthnContext_s* e;
      for (e = x->AuthnContext; e; e = (struct zx_sa_AuthnContext_s*)e->gg.g.n)
	  len += zx_LEN_sa_AuthnContext(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa_AuthnStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa_AuthnStatement(struct zx_sa_AuthnStatement_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthnStatement", sizeof("AuthnStatement") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->AuthnInstant, "AuthnInstant", sizeof("AuthnInstant")-1);
  p = zx_attr_enc(p, x->SessionIndex, "SessionIndex", sizeof("SessionIndex")-1);
  p = zx_attr_enc(p, x->SessionNotOnOrAfter, "SessionNotOnOrAfter", sizeof("SessionNotOnOrAfter")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa_SubjectLocality_s* e;
      for (e = x->SubjectLocality; e; e = (struct zx_sa_SubjectLocality_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_SubjectLocality(e, p);
  }
  {
      struct zx_sa_AuthnContext_s* e;
      for (e = x->AuthnContext; e; e = (struct zx_sa_AuthnContext_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_AuthnContext(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthnStatement", sizeof("AuthnStatement") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa_AuthnStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa_AuthnStatement(struct zx_sa_AuthnStatement_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa_AuthnStatement) */

struct zx_str_s* zx_EASY_ENC_SO_sa_AuthnStatement(struct zx_ctx* c, struct zx_sa_AuthnStatement_s* x )
{
  int len = zx_LEN_sa_AuthnStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa_AuthnStatement(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa_AuthnStatement) */

struct zx_str_s* zx_EASY_ENC_WO_sa_AuthnStatement(struct zx_ctx* c, struct zx_sa_AuthnStatement_s* x )
{
  int len = zx_LEN_sa_AuthnStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa_AuthnStatement(x, buf ), buf, len);
}




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

#define EL_NAME   sa_AuthzDecisionStatement
#define EL_STRUCT zx_sa_AuthzDecisionStatement_s
#define EL_NS     sa
#define EL_TAG    AuthzDecisionStatement

/* FUNC(zx_LEN_sa_AuthzDecisionStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa_AuthzDecisionStatement(struct zx_sa_AuthzDecisionStatement_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthzDecisionStatement") - 1 + 1 + 2 + sizeof("AuthzDecisionStatement") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Resource, sizeof("Resource"));
  len += zx_attr_len(x->Decision, sizeof("Decision"));

  {
      struct zx_sa_Action_s* e;
      for (e = x->Action; e; e = (struct zx_sa_Action_s*)e->gg.g.n)
	  len += zx_LEN_sa_Action(e);
  }
  {
      struct zx_sa_Evidence_s* e;
      for (e = x->Evidence; e; e = (struct zx_sa_Evidence_s*)e->gg.g.n)
	  len += zx_LEN_sa_Evidence(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa_AuthzDecisionStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa_AuthzDecisionStatement(struct zx_sa_AuthzDecisionStatement_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthzDecisionStatement", sizeof("AuthzDecisionStatement") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Resource, "Resource", sizeof("Resource")-1);
  p = zx_attr_enc(p, x->Decision, "Decision", sizeof("Decision")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa_Action_s* e;
      for (e = x->Action; e; e = (struct zx_sa_Action_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Action(e, p);
  }
  {
      struct zx_sa_Evidence_s* e;
      for (e = x->Evidence; e; e = (struct zx_sa_Evidence_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Evidence(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthzDecisionStatement", sizeof("AuthzDecisionStatement") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa_AuthzDecisionStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa_AuthzDecisionStatement(struct zx_sa_AuthzDecisionStatement_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa_AuthzDecisionStatement) */

struct zx_str_s* zx_EASY_ENC_SO_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_sa_AuthzDecisionStatement_s* x )
{
  int len = zx_LEN_sa_AuthzDecisionStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa_AuthzDecisionStatement(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa_AuthzDecisionStatement) */

struct zx_str_s* zx_EASY_ENC_WO_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_sa_AuthzDecisionStatement_s* x )
{
  int len = zx_LEN_sa_AuthzDecisionStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa_AuthzDecisionStatement(x, buf ), buf, len);
}




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

#define EL_NAME   sa_BaseID
#define EL_STRUCT zx_sa_BaseID_s
#define EL_NS     sa
#define EL_TAG    BaseID

/* FUNC(zx_LEN_sa_BaseID) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa_BaseID(struct zx_sa_BaseID_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("BaseID") - 1 + 1 + 2 + sizeof("BaseID") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->NameQualifier, sizeof("NameQualifier"));
  len += zx_attr_len(x->SPNameQualifier, sizeof("SPNameQualifier"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa_BaseID) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa_BaseID(struct zx_sa_BaseID_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "BaseID", sizeof("BaseID") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->NameQualifier, "NameQualifier", sizeof("NameQualifier")-1);
  p = zx_attr_enc(p, x->SPNameQualifier, "SPNameQualifier", sizeof("SPNameQualifier")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "BaseID", sizeof("BaseID") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa_BaseID) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa_BaseID(struct zx_sa_BaseID_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa_BaseID) */

struct zx_str_s* zx_EASY_ENC_SO_sa_BaseID(struct zx_ctx* c, struct zx_sa_BaseID_s* x )
{
  int len = zx_LEN_sa_BaseID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa_BaseID(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa_BaseID) */

struct zx_str_s* zx_EASY_ENC_WO_sa_BaseID(struct zx_ctx* c, struct zx_sa_BaseID_s* x )
{
  int len = zx_LEN_sa_BaseID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa_BaseID(x, buf ), buf, len);
}




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

#define EL_NAME   sa_Conditions
#define EL_STRUCT zx_sa_Conditions_s
#define EL_NS     sa
#define EL_TAG    Conditions

/* FUNC(zx_LEN_sa_Conditions) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa_Conditions(struct zx_sa_Conditions_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Conditions") - 1 + 1 + 2 + sizeof("Conditions") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->NotBefore, sizeof("NotBefore"));
  len += zx_attr_len(x->NotOnOrAfter, sizeof("NotOnOrAfter"));

  for (se = x->Condition; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("Condition") - 1);
  {
      struct zx_sa_AudienceRestriction_s* e;
      for (e = x->AudienceRestriction; e; e = (struct zx_sa_AudienceRestriction_s*)e->gg.g.n)
	  len += zx_LEN_sa_AudienceRestriction(e);
  }
  {
      struct zx_sa_OneTimeUse_s* e;
      for (e = x->OneTimeUse; e; e = (struct zx_sa_OneTimeUse_s*)e->gg.g.n)
	  len += zx_LEN_sa_OneTimeUse(e);
  }
  {
      struct zx_sa_ProxyRestriction_s* e;
      for (e = x->ProxyRestriction; e; e = (struct zx_sa_ProxyRestriction_s*)e->gg.g.n)
	  len += zx_LEN_sa_ProxyRestriction(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa_Conditions) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa_Conditions(struct zx_sa_Conditions_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Conditions", sizeof("Conditions") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->NotBefore, "NotBefore", sizeof("NotBefore")-1);
  p = zx_attr_enc(p, x->NotOnOrAfter, "NotOnOrAfter", sizeof("NotOnOrAfter")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->Condition; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "Condition", sizeof("Condition") - 1);
  {
      struct zx_sa_AudienceRestriction_s* e;
      for (e = x->AudienceRestriction; e; e = (struct zx_sa_AudienceRestriction_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_AudienceRestriction(e, p);
  }
  {
      struct zx_sa_OneTimeUse_s* e;
      for (e = x->OneTimeUse; e; e = (struct zx_sa_OneTimeUse_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_OneTimeUse(e, p);
  }
  {
      struct zx_sa_ProxyRestriction_s* e;
      for (e = x->ProxyRestriction; e; e = (struct zx_sa_ProxyRestriction_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_ProxyRestriction(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Conditions", sizeof("Conditions") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa_Conditions) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa_Conditions(struct zx_sa_Conditions_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa_Conditions) */

struct zx_str_s* zx_EASY_ENC_SO_sa_Conditions(struct zx_ctx* c, struct zx_sa_Conditions_s* x )
{
  int len = zx_LEN_sa_Conditions(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa_Conditions(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa_Conditions) */

struct zx_str_s* zx_EASY_ENC_WO_sa_Conditions(struct zx_ctx* c, struct zx_sa_Conditions_s* x )
{
  int len = zx_LEN_sa_Conditions(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa_Conditions(x, buf ), buf, len);
}




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

#define EL_NAME   sa_EncryptedAssertion
#define EL_STRUCT zx_sa_EncryptedAssertion_s
#define EL_NS     sa
#define EL_TAG    EncryptedAssertion

/* FUNC(zx_LEN_sa_EncryptedAssertion) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa_EncryptedAssertion(struct zx_sa_EncryptedAssertion_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("EncryptedAssertion") - 1 + 1 + 2 + sizeof("EncryptedAssertion") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zx_xenc_EncryptedData_s*)e->gg.g.n)
	  len += zx_LEN_xenc_EncryptedData(e);
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n)
	  len += zx_LEN_xenc_EncryptedKey(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa_EncryptedAssertion) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa_EncryptedAssertion(struct zx_sa_EncryptedAssertion_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EncryptedAssertion", sizeof("EncryptedAssertion") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zx_xenc_EncryptedData_s*)e->gg.g.n)
	  p = zx_ENC_SO_xenc_EncryptedData(e, p);
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n)
	  p = zx_ENC_SO_xenc_EncryptedKey(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EncryptedAssertion", sizeof("EncryptedAssertion") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa_EncryptedAssertion) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa_EncryptedAssertion(struct zx_sa_EncryptedAssertion_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa_EncryptedAssertion) */

struct zx_str_s* zx_EASY_ENC_SO_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_sa_EncryptedAssertion_s* x )
{
  int len = zx_LEN_sa_EncryptedAssertion(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa_EncryptedAssertion(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa_EncryptedAssertion) */

struct zx_str_s* zx_EASY_ENC_WO_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_sa_EncryptedAssertion_s* x )
{
  int len = zx_LEN_sa_EncryptedAssertion(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa_EncryptedAssertion(x, buf ), buf, len);
}




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

#define EL_NAME   sa_EncryptedAttribute
#define EL_STRUCT zx_sa_EncryptedAttribute_s
#define EL_NS     sa
#define EL_TAG    EncryptedAttribute

/* FUNC(zx_LEN_sa_EncryptedAttribute) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa_EncryptedAttribute(struct zx_sa_EncryptedAttribute_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("EncryptedAttribute") - 1 + 1 + 2 + sizeof("EncryptedAttribute") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zx_xenc_EncryptedData_s*)e->gg.g.n)
	  len += zx_LEN_xenc_EncryptedData(e);
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n)
	  len += zx_LEN_xenc_EncryptedKey(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa_EncryptedAttribute) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa_EncryptedAttribute(struct zx_sa_EncryptedAttribute_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EncryptedAttribute", sizeof("EncryptedAttribute") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zx_xenc_EncryptedData_s*)e->gg.g.n)
	  p = zx_ENC_SO_xenc_EncryptedData(e, p);
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n)
	  p = zx_ENC_SO_xenc_EncryptedKey(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EncryptedAttribute", sizeof("EncryptedAttribute") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa_EncryptedAttribute) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa_EncryptedAttribute(struct zx_sa_EncryptedAttribute_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa_EncryptedAttribute) */

struct zx_str_s* zx_EASY_ENC_SO_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_sa_EncryptedAttribute_s* x )
{
  int len = zx_LEN_sa_EncryptedAttribute(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa_EncryptedAttribute(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa_EncryptedAttribute) */

struct zx_str_s* zx_EASY_ENC_WO_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_sa_EncryptedAttribute_s* x )
{
  int len = zx_LEN_sa_EncryptedAttribute(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa_EncryptedAttribute(x, buf ), buf, len);
}




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

#define EL_NAME   sa_EncryptedID
#define EL_STRUCT zx_sa_EncryptedID_s
#define EL_NS     sa
#define EL_TAG    EncryptedID

/* FUNC(zx_LEN_sa_EncryptedID) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa_EncryptedID(struct zx_sa_EncryptedID_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("EncryptedID") - 1 + 1 + 2 + sizeof("EncryptedID") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zx_xenc_EncryptedData_s*)e->gg.g.n)
	  len += zx_LEN_xenc_EncryptedData(e);
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n)
	  len += zx_LEN_xenc_EncryptedKey(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa_EncryptedID) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa_EncryptedID(struct zx_sa_EncryptedID_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EncryptedID", sizeof("EncryptedID") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zx_xenc_EncryptedData_s*)e->gg.g.n)
	  p = zx_ENC_SO_xenc_EncryptedData(e, p);
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n)
	  p = zx_ENC_SO_xenc_EncryptedKey(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EncryptedID", sizeof("EncryptedID") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa_EncryptedID) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa_EncryptedID(struct zx_sa_EncryptedID_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa_EncryptedID) */

struct zx_str_s* zx_EASY_ENC_SO_sa_EncryptedID(struct zx_ctx* c, struct zx_sa_EncryptedID_s* x )
{
  int len = zx_LEN_sa_EncryptedID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa_EncryptedID(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa_EncryptedID) */

struct zx_str_s* zx_EASY_ENC_WO_sa_EncryptedID(struct zx_ctx* c, struct zx_sa_EncryptedID_s* x )
{
  int len = zx_LEN_sa_EncryptedID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa_EncryptedID(x, buf ), buf, len);
}




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

#define EL_NAME   sa_Evidence
#define EL_STRUCT zx_sa_Evidence_s
#define EL_NS     sa
#define EL_TAG    Evidence

/* FUNC(zx_LEN_sa_Evidence) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa_Evidence(struct zx_sa_Evidence_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Evidence") - 1 + 1 + 2 + sizeof("Evidence") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->AssertionIDRef; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AssertionIDRef") - 1);
  for (se = x->AssertionURIRef; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AssertionURIRef") - 1);
  {
      struct zx_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n)
	  len += zx_LEN_sa_Assertion(e);
  }
  {
      struct zx_sa_EncryptedAssertion_s* e;
      for (e = x->EncryptedAssertion; e; e = (struct zx_sa_EncryptedAssertion_s*)e->gg.g.n)
	  len += zx_LEN_sa_EncryptedAssertion(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa_Evidence) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa_Evidence(struct zx_sa_Evidence_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Evidence", sizeof("Evidence") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->AssertionIDRef; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AssertionIDRef", sizeof("AssertionIDRef") - 1);
  for (se = x->AssertionURIRef; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AssertionURIRef", sizeof("AssertionURIRef") - 1);
  {
      struct zx_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Assertion(e, p);
  }
  {
      struct zx_sa_EncryptedAssertion_s* e;
      for (e = x->EncryptedAssertion; e; e = (struct zx_sa_EncryptedAssertion_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_EncryptedAssertion(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Evidence", sizeof("Evidence") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa_Evidence) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa_Evidence(struct zx_sa_Evidence_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa_Evidence) */

struct zx_str_s* zx_EASY_ENC_SO_sa_Evidence(struct zx_ctx* c, struct zx_sa_Evidence_s* x )
{
  int len = zx_LEN_sa_Evidence(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa_Evidence(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa_Evidence) */

struct zx_str_s* zx_EASY_ENC_WO_sa_Evidence(struct zx_ctx* c, struct zx_sa_Evidence_s* x )
{
  int len = zx_LEN_sa_Evidence(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa_Evidence(x, buf ), buf, len);
}




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

#define EL_NAME   sa_Issuer
#define EL_STRUCT zx_sa_Issuer_s
#define EL_NS     sa
#define EL_TAG    Issuer

/* FUNC(zx_LEN_sa_Issuer) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa_Issuer(struct zx_sa_Issuer_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Issuer") - 1 + 1 + 2 + sizeof("Issuer") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->NameQualifier, sizeof("NameQualifier"));
  len += zx_attr_len(x->SPNameQualifier, sizeof("SPNameQualifier"));
  len += zx_attr_len(x->Format, sizeof("Format"));
  len += zx_attr_len(x->SPProvidedID, sizeof("SPProvidedID"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa_Issuer) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa_Issuer(struct zx_sa_Issuer_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Issuer", sizeof("Issuer") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->NameQualifier, "NameQualifier", sizeof("NameQualifier")-1);
  p = zx_attr_enc(p, x->SPNameQualifier, "SPNameQualifier", sizeof("SPNameQualifier")-1);
  p = zx_attr_enc(p, x->Format, "Format", sizeof("Format")-1);
  p = zx_attr_enc(p, x->SPProvidedID, "SPProvidedID", sizeof("SPProvidedID")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Issuer", sizeof("Issuer") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa_Issuer) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa_Issuer(struct zx_sa_Issuer_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa_Issuer) */

struct zx_str_s* zx_EASY_ENC_SO_sa_Issuer(struct zx_ctx* c, struct zx_sa_Issuer_s* x )
{
  int len = zx_LEN_sa_Issuer(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa_Issuer(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa_Issuer) */

struct zx_str_s* zx_EASY_ENC_WO_sa_Issuer(struct zx_ctx* c, struct zx_sa_Issuer_s* x )
{
  int len = zx_LEN_sa_Issuer(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa_Issuer(x, buf ), buf, len);
}




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

#define EL_NAME   sa_NameID
#define EL_STRUCT zx_sa_NameID_s
#define EL_NS     sa
#define EL_TAG    NameID

/* FUNC(zx_LEN_sa_NameID) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa_NameID(struct zx_sa_NameID_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("NameID") - 1 + 1 + 2 + sizeof("NameID") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->NameQualifier, sizeof("NameQualifier"));
  len += zx_attr_len(x->SPNameQualifier, sizeof("SPNameQualifier"));
  len += zx_attr_len(x->Format, sizeof("Format"));
  len += zx_attr_len(x->SPProvidedID, sizeof("SPProvidedID"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa_NameID) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa_NameID(struct zx_sa_NameID_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "NameID", sizeof("NameID") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->NameQualifier, "NameQualifier", sizeof("NameQualifier")-1);
  p = zx_attr_enc(p, x->SPNameQualifier, "SPNameQualifier", sizeof("SPNameQualifier")-1);
  p = zx_attr_enc(p, x->Format, "Format", sizeof("Format")-1);
  p = zx_attr_enc(p, x->SPProvidedID, "SPProvidedID", sizeof("SPProvidedID")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "NameID", sizeof("NameID") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa_NameID) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa_NameID(struct zx_sa_NameID_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa_NameID) */

struct zx_str_s* zx_EASY_ENC_SO_sa_NameID(struct zx_ctx* c, struct zx_sa_NameID_s* x )
{
  int len = zx_LEN_sa_NameID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa_NameID(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa_NameID) */

struct zx_str_s* zx_EASY_ENC_WO_sa_NameID(struct zx_ctx* c, struct zx_sa_NameID_s* x )
{
  int len = zx_LEN_sa_NameID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa_NameID(x, buf ), buf, len);
}




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

#define EL_NAME   sa_OneTimeUse
#define EL_STRUCT zx_sa_OneTimeUse_s
#define EL_NS     sa
#define EL_TAG    OneTimeUse

/* FUNC(zx_LEN_sa_OneTimeUse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa_OneTimeUse(struct zx_sa_OneTimeUse_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("OneTimeUse") - 1 + 1 + 2 + sizeof("OneTimeUse") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */




  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa_OneTimeUse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa_OneTimeUse(struct zx_sa_OneTimeUse_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "OneTimeUse", sizeof("OneTimeUse") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "OneTimeUse", sizeof("OneTimeUse") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa_OneTimeUse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa_OneTimeUse(struct zx_sa_OneTimeUse_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa_OneTimeUse) */

struct zx_str_s* zx_EASY_ENC_SO_sa_OneTimeUse(struct zx_ctx* c, struct zx_sa_OneTimeUse_s* x )
{
  int len = zx_LEN_sa_OneTimeUse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa_OneTimeUse(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa_OneTimeUse) */

struct zx_str_s* zx_EASY_ENC_WO_sa_OneTimeUse(struct zx_ctx* c, struct zx_sa_OneTimeUse_s* x )
{
  int len = zx_LEN_sa_OneTimeUse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa_OneTimeUse(x, buf ), buf, len);
}




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

#define EL_NAME   sa_ProxyRestriction
#define EL_STRUCT zx_sa_ProxyRestriction_s
#define EL_NS     sa
#define EL_TAG    ProxyRestriction

/* FUNC(zx_LEN_sa_ProxyRestriction) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa_ProxyRestriction(struct zx_sa_ProxyRestriction_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ProxyRestriction") - 1 + 1 + 2 + sizeof("ProxyRestriction") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Count, sizeof("Count"));

  for (se = x->Audience; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("Audience") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa_ProxyRestriction) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa_ProxyRestriction(struct zx_sa_ProxyRestriction_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ProxyRestriction", sizeof("ProxyRestriction") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Count, "Count", sizeof("Count")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->Audience; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "Audience", sizeof("Audience") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ProxyRestriction", sizeof("ProxyRestriction") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa_ProxyRestriction) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa_ProxyRestriction(struct zx_sa_ProxyRestriction_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa_ProxyRestriction) */

struct zx_str_s* zx_EASY_ENC_SO_sa_ProxyRestriction(struct zx_ctx* c, struct zx_sa_ProxyRestriction_s* x )
{
  int len = zx_LEN_sa_ProxyRestriction(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa_ProxyRestriction(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa_ProxyRestriction) */

struct zx_str_s* zx_EASY_ENC_WO_sa_ProxyRestriction(struct zx_ctx* c, struct zx_sa_ProxyRestriction_s* x )
{
  int len = zx_LEN_sa_ProxyRestriction(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa_ProxyRestriction(x, buf ), buf, len);
}




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

#define EL_NAME   sa_Subject
#define EL_STRUCT zx_sa_Subject_s
#define EL_NS     sa
#define EL_TAG    Subject

/* FUNC(zx_LEN_sa_Subject) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa_Subject(struct zx_sa_Subject_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Subject") - 1 + 1 + 2 + sizeof("Subject") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sa_BaseID_s* e;
      for (e = x->BaseID; e; e = (struct zx_sa_BaseID_s*)e->gg.g.n)
	  len += zx_LEN_sa_BaseID(e);
  }
  {
      struct zx_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n)
	  len += zx_LEN_sa_NameID(e);
  }
  {
      struct zx_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n)
	  len += zx_LEN_sa_EncryptedID(e);
  }
  {
      struct zx_sa_SubjectConfirmation_s* e;
      for (e = x->SubjectConfirmation; e; e = (struct zx_sa_SubjectConfirmation_s*)e->gg.g.n)
	  len += zx_LEN_sa_SubjectConfirmation(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa_Subject) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa_Subject(struct zx_sa_Subject_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Subject", sizeof("Subject") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa_BaseID_s* e;
      for (e = x->BaseID; e; e = (struct zx_sa_BaseID_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_BaseID(e, p);
  }
  {
      struct zx_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_NameID(e, p);
  }
  {
      struct zx_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_EncryptedID(e, p);
  }
  {
      struct zx_sa_SubjectConfirmation_s* e;
      for (e = x->SubjectConfirmation; e; e = (struct zx_sa_SubjectConfirmation_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_SubjectConfirmation(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Subject", sizeof("Subject") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa_Subject) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa_Subject(struct zx_sa_Subject_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa_Subject) */

struct zx_str_s* zx_EASY_ENC_SO_sa_Subject(struct zx_ctx* c, struct zx_sa_Subject_s* x )
{
  int len = zx_LEN_sa_Subject(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa_Subject(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa_Subject) */

struct zx_str_s* zx_EASY_ENC_WO_sa_Subject(struct zx_ctx* c, struct zx_sa_Subject_s* x )
{
  int len = zx_LEN_sa_Subject(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa_Subject(x, buf ), buf, len);
}




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

#define EL_NAME   sa_SubjectConfirmation
#define EL_STRUCT zx_sa_SubjectConfirmation_s
#define EL_NS     sa
#define EL_TAG    SubjectConfirmation

/* FUNC(zx_LEN_sa_SubjectConfirmation) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa_SubjectConfirmation(struct zx_sa_SubjectConfirmation_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SubjectConfirmation") - 1 + 1 + 2 + sizeof("SubjectConfirmation") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Method, sizeof("Method"));

  {
      struct zx_sa_BaseID_s* e;
      for (e = x->BaseID; e; e = (struct zx_sa_BaseID_s*)e->gg.g.n)
	  len += zx_LEN_sa_BaseID(e);
  }
  {
      struct zx_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n)
	  len += zx_LEN_sa_NameID(e);
  }
  {
      struct zx_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n)
	  len += zx_LEN_sa_EncryptedID(e);
  }
  {
      struct zx_sa_SubjectConfirmationData_s* e;
      for (e = x->SubjectConfirmationData; e; e = (struct zx_sa_SubjectConfirmationData_s*)e->gg.g.n)
	  len += zx_LEN_sa_SubjectConfirmationData(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa_SubjectConfirmation) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa_SubjectConfirmation(struct zx_sa_SubjectConfirmation_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SubjectConfirmation", sizeof("SubjectConfirmation") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Method, "Method", sizeof("Method")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa_BaseID_s* e;
      for (e = x->BaseID; e; e = (struct zx_sa_BaseID_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_BaseID(e, p);
  }
  {
      struct zx_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_NameID(e, p);
  }
  {
      struct zx_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_EncryptedID(e, p);
  }
  {
      struct zx_sa_SubjectConfirmationData_s* e;
      for (e = x->SubjectConfirmationData; e; e = (struct zx_sa_SubjectConfirmationData_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_SubjectConfirmationData(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SubjectConfirmation", sizeof("SubjectConfirmation") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa_SubjectConfirmation) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa_SubjectConfirmation(struct zx_sa_SubjectConfirmation_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa_SubjectConfirmation) */

struct zx_str_s* zx_EASY_ENC_SO_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_sa_SubjectConfirmation_s* x )
{
  int len = zx_LEN_sa_SubjectConfirmation(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa_SubjectConfirmation(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa_SubjectConfirmation) */

struct zx_str_s* zx_EASY_ENC_WO_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_sa_SubjectConfirmation_s* x )
{
  int len = zx_LEN_sa_SubjectConfirmation(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa_SubjectConfirmation(x, buf ), buf, len);
}




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

#define EL_NAME   sa_SubjectConfirmationData
#define EL_STRUCT zx_sa_SubjectConfirmationData_s
#define EL_NS     sa
#define EL_TAG    SubjectConfirmationData

/* FUNC(zx_LEN_sa_SubjectConfirmationData) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa_SubjectConfirmationData(struct zx_sa_SubjectConfirmationData_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SubjectConfirmationData") - 1 + 1 + 2 + sizeof("SubjectConfirmationData") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->NotBefore, sizeof("NotBefore"));
  len += zx_attr_len(x->NotOnOrAfter, sizeof("NotOnOrAfter"));
  len += zx_attr_len(x->Recipient, sizeof("Recipient"));
  len += zx_attr_len(x->InResponseTo, sizeof("InResponseTo"));
  len += zx_attr_len(x->Address, sizeof("Address"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa_SubjectConfirmationData) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa_SubjectConfirmationData(struct zx_sa_SubjectConfirmationData_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SubjectConfirmationData", sizeof("SubjectConfirmationData") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->NotBefore, "NotBefore", sizeof("NotBefore")-1);
  p = zx_attr_enc(p, x->NotOnOrAfter, "NotOnOrAfter", sizeof("NotOnOrAfter")-1);
  p = zx_attr_enc(p, x->Recipient, "Recipient", sizeof("Recipient")-1);
  p = zx_attr_enc(p, x->InResponseTo, "InResponseTo", sizeof("InResponseTo")-1);
  p = zx_attr_enc(p, x->Address, "Address", sizeof("Address")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SubjectConfirmationData", sizeof("SubjectConfirmationData") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa_SubjectConfirmationData) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa_SubjectConfirmationData(struct zx_sa_SubjectConfirmationData_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa_SubjectConfirmationData) */

struct zx_str_s* zx_EASY_ENC_SO_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_sa_SubjectConfirmationData_s* x )
{
  int len = zx_LEN_sa_SubjectConfirmationData(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa_SubjectConfirmationData(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa_SubjectConfirmationData) */

struct zx_str_s* zx_EASY_ENC_WO_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_sa_SubjectConfirmationData_s* x )
{
  int len = zx_LEN_sa_SubjectConfirmationData(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa_SubjectConfirmationData(x, buf ), buf, len);
}




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

#define EL_NAME   sa_SubjectLocality
#define EL_STRUCT zx_sa_SubjectLocality_s
#define EL_NS     sa
#define EL_TAG    SubjectLocality

/* FUNC(zx_LEN_sa_SubjectLocality) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa_SubjectLocality(struct zx_sa_SubjectLocality_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SubjectLocality") - 1 + 1 + 2 + sizeof("SubjectLocality") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Address, sizeof("Address"));
  len += zx_attr_len(x->DNSName, sizeof("DNSName"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa_SubjectLocality) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa_SubjectLocality(struct zx_sa_SubjectLocality_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SubjectLocality", sizeof("SubjectLocality") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Address, "Address", sizeof("Address")-1);
  p = zx_attr_enc(p, x->DNSName, "DNSName", sizeof("DNSName")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SubjectLocality", sizeof("SubjectLocality") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa_SubjectLocality) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa_SubjectLocality(struct zx_sa_SubjectLocality_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa_SubjectLocality) */

struct zx_str_s* zx_EASY_ENC_SO_sa_SubjectLocality(struct zx_ctx* c, struct zx_sa_SubjectLocality_s* x )
{
  int len = zx_LEN_sa_SubjectLocality(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa_SubjectLocality(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa_SubjectLocality) */

struct zx_str_s* zx_EASY_ENC_WO_sa_SubjectLocality(struct zx_ctx* c, struct zx_sa_SubjectLocality_s* x )
{
  int len = zx_LEN_sa_SubjectLocality(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa_SubjectLocality(x, buf ), buf, len);
}




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

#define EL_NAME   sa_TestElem
#define EL_STRUCT zx_sa_TestElem_s
#define EL_NS     sa
#define EL_TAG    TestElem

/* FUNC(zx_LEN_sa_TestElem) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sa_TestElem(struct zx_sa_TestElem_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("TestElem") - 1 + 1 + 2 + sizeof("TestElem") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->AttributeValue; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AttributeValue") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sa_TestElem) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sa_TestElem(struct zx_sa_TestElem_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "TestElem", sizeof("TestElem") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->AttributeValue; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AttributeValue", sizeof("AttributeValue") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "TestElem", sizeof("TestElem") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sa_TestElem) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sa_TestElem(struct zx_sa_TestElem_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sa_TestElem) */

struct zx_str_s* zx_EASY_ENC_SO_sa_TestElem(struct zx_ctx* c, struct zx_sa_TestElem_s* x )
{
  int len = zx_LEN_sa_TestElem(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa_TestElem(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa_TestElem) */

struct zx_str_s* zx_EASY_ENC_WO_sa_TestElem(struct zx_ctx* c, struct zx_sa_TestElem_s* x )
{
  int len = zx_LEN_sa_TestElem(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa_TestElem(x, buf ), buf, len);
}




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

#define EL_NAME   se_Body
#define EL_STRUCT zx_se_Body_s
#define EL_NS     se
#define EL_TAG    Body

/* FUNC(zx_LEN_se_Body) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_se_Body(struct zx_se_Body_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Body") - 1 + 1 + 2 + sizeof("Body") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sp_ArtifactResolve_s* e;
      for (e = x->ArtifactResolve; e; e = (struct zx_sp_ArtifactResolve_s*)e->gg.g.n)
	  len += zx_LEN_sp_ArtifactResolve(e);
  }
  {
      struct zx_sp_ArtifactResponse_s* e;
      for (e = x->ArtifactResponse; e; e = (struct zx_sp_ArtifactResponse_s*)e->gg.g.n)
	  len += zx_LEN_sp_ArtifactResponse(e);
  }
  {
      struct zx_sp_ManageNameIDRequest_s* e;
      for (e = x->ManageNameIDRequest; e; e = (struct zx_sp_ManageNameIDRequest_s*)e->gg.g.n)
	  len += zx_LEN_sp_ManageNameIDRequest(e);
  }
  {
      struct zx_sp_ManageNameIDResponse_s* e;
      for (e = x->ManageNameIDResponse; e; e = (struct zx_sp_ManageNameIDResponse_s*)e->gg.g.n)
	  len += zx_LEN_sp_ManageNameIDResponse(e);
  }
  {
      struct zx_sp_LogoutRequest_s* e;
      for (e = x->LogoutRequest; e; e = (struct zx_sp_LogoutRequest_s*)e->gg.g.n)
	  len += zx_LEN_sp_LogoutRequest(e);
  }
  {
      struct zx_sp_LogoutResponse_s* e;
      for (e = x->LogoutResponse; e; e = (struct zx_sp_LogoutResponse_s*)e->gg.g.n)
	  len += zx_LEN_sp_LogoutResponse(e);
  }
  {
      struct zx_sp_NameIDMappingRequest_s* e;
      for (e = x->NameIDMappingRequest; e; e = (struct zx_sp_NameIDMappingRequest_s*)e->gg.g.n)
	  len += zx_LEN_sp_NameIDMappingRequest(e);
  }
  {
      struct zx_sp_NameIDMappingResponse_s* e;
      for (e = x->NameIDMappingResponse; e; e = (struct zx_sp_NameIDMappingResponse_s*)e->gg.g.n)
	  len += zx_LEN_sp_NameIDMappingResponse(e);
  }
  {
      struct zx_sp_AttributeQuery_s* e;
      for (e = x->AttributeQuery; e; e = (struct zx_sp_AttributeQuery_s*)e->gg.g.n)
	  len += zx_LEN_sp_AttributeQuery(e);
  }
  {
      struct zx_sp_AuthnQuery_s* e;
      for (e = x->AuthnQuery; e; e = (struct zx_sp_AuthnQuery_s*)e->gg.g.n)
	  len += zx_LEN_sp_AuthnQuery(e);
  }
  {
      struct zx_sp_AuthzDecisionQuery_s* e;
      for (e = x->AuthzDecisionQuery; e; e = (struct zx_sp_AuthzDecisionQuery_s*)e->gg.g.n)
	  len += zx_LEN_sp_AuthzDecisionQuery(e);
  }
  {
      struct zx_sp_AssertionIDRequest_s* e;
      for (e = x->AssertionIDRequest; e; e = (struct zx_sp_AssertionIDRequest_s*)e->gg.g.n)
	  len += zx_LEN_sp_AssertionIDRequest(e);
  }
  {
      struct zx_sp_Response_s* e;
      for (e = x->Response; e; e = (struct zx_sp_Response_s*)e->gg.g.n)
	  len += zx_LEN_sp_Response(e);
  }
  {
      struct zx_sp11_Request_s* e;
      for (e = x->Request; e; e = (struct zx_sp11_Request_s*)e->gg.g.n)
	  len += zx_LEN_sp11_Request(e);
  }
  {
      struct zx_sp11_Response_s* e;
      for (e = x->sp11_Response; e; e = (struct zx_sp11_Response_s*)e->gg.g.n)
	  len += zx_LEN_sp11_Response(e);
  }
  {
      struct zx_ff12_RegisterNameIdentifierRequest_s* e;
      for (e = x->RegisterNameIdentifierRequest; e; e = (struct zx_ff12_RegisterNameIdentifierRequest_s*)e->gg.g.n)
	  len += zx_LEN_ff12_RegisterNameIdentifierRequest(e);
  }
  {
      struct zx_ff12_RegisterNameIdentifierResponse_s* e;
      for (e = x->RegisterNameIdentifierResponse; e; e = (struct zx_ff12_RegisterNameIdentifierResponse_s*)e->gg.g.n)
	  len += zx_LEN_ff12_RegisterNameIdentifierResponse(e);
  }
  {
      struct zx_ff12_FederationTerminationNotification_s* e;
      for (e = x->FederationTerminationNotification; e; e = (struct zx_ff12_FederationTerminationNotification_s*)e->gg.g.n)
	  len += zx_LEN_ff12_FederationTerminationNotification(e);
  }
  {
      struct zx_ff12_LogoutRequest_s* e;
      for (e = x->ff12_LogoutRequest; e; e = (struct zx_ff12_LogoutRequest_s*)e->gg.g.n)
	  len += zx_LEN_ff12_LogoutRequest(e);
  }
  {
      struct zx_ff12_LogoutResponse_s* e;
      for (e = x->ff12_LogoutResponse; e; e = (struct zx_ff12_LogoutResponse_s*)e->gg.g.n)
	  len += zx_LEN_ff12_LogoutResponse(e);
  }
  {
      struct zx_ff12_NameIdentifierMappingRequest_s* e;
      for (e = x->NameIdentifierMappingRequest; e; e = (struct zx_ff12_NameIdentifierMappingRequest_s*)e->gg.g.n)
	  len += zx_LEN_ff12_NameIdentifierMappingRequest(e);
  }
  {
      struct zx_ff12_NameIdentifierMappingResponse_s* e;
      for (e = x->NameIdentifierMappingResponse; e; e = (struct zx_ff12_NameIdentifierMappingResponse_s*)e->gg.g.n)
	  len += zx_LEN_ff12_NameIdentifierMappingResponse(e);
  }
  {
      struct zx_se_Fault_s* e;
      for (e = x->Fault; e; e = (struct zx_se_Fault_s*)e->gg.g.n)
	  len += zx_LEN_se_Fault(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_se_Body) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_se_Body(struct zx_se_Body_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Body", sizeof("Body") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sp_ArtifactResolve_s* e;
      for (e = x->ArtifactResolve; e; e = (struct zx_sp_ArtifactResolve_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_ArtifactResolve(e, p);
  }
  {
      struct zx_sp_ArtifactResponse_s* e;
      for (e = x->ArtifactResponse; e; e = (struct zx_sp_ArtifactResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_ArtifactResponse(e, p);
  }
  {
      struct zx_sp_ManageNameIDRequest_s* e;
      for (e = x->ManageNameIDRequest; e; e = (struct zx_sp_ManageNameIDRequest_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_ManageNameIDRequest(e, p);
  }
  {
      struct zx_sp_ManageNameIDResponse_s* e;
      for (e = x->ManageNameIDResponse; e; e = (struct zx_sp_ManageNameIDResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_ManageNameIDResponse(e, p);
  }
  {
      struct zx_sp_LogoutRequest_s* e;
      for (e = x->LogoutRequest; e; e = (struct zx_sp_LogoutRequest_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_LogoutRequest(e, p);
  }
  {
      struct zx_sp_LogoutResponse_s* e;
      for (e = x->LogoutResponse; e; e = (struct zx_sp_LogoutResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_LogoutResponse(e, p);
  }
  {
      struct zx_sp_NameIDMappingRequest_s* e;
      for (e = x->NameIDMappingRequest; e; e = (struct zx_sp_NameIDMappingRequest_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_NameIDMappingRequest(e, p);
  }
  {
      struct zx_sp_NameIDMappingResponse_s* e;
      for (e = x->NameIDMappingResponse; e; e = (struct zx_sp_NameIDMappingResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_NameIDMappingResponse(e, p);
  }
  {
      struct zx_sp_AttributeQuery_s* e;
      for (e = x->AttributeQuery; e; e = (struct zx_sp_AttributeQuery_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_AttributeQuery(e, p);
  }
  {
      struct zx_sp_AuthnQuery_s* e;
      for (e = x->AuthnQuery; e; e = (struct zx_sp_AuthnQuery_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_AuthnQuery(e, p);
  }
  {
      struct zx_sp_AuthzDecisionQuery_s* e;
      for (e = x->AuthzDecisionQuery; e; e = (struct zx_sp_AuthzDecisionQuery_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_AuthzDecisionQuery(e, p);
  }
  {
      struct zx_sp_AssertionIDRequest_s* e;
      for (e = x->AssertionIDRequest; e; e = (struct zx_sp_AssertionIDRequest_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_AssertionIDRequest(e, p);
  }
  {
      struct zx_sp_Response_s* e;
      for (e = x->Response; e; e = (struct zx_sp_Response_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Response(e, p);
  }
  {
      struct zx_sp11_Request_s* e;
      for (e = x->Request; e; e = (struct zx_sp11_Request_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp11_Request(e, p);
  }
  {
      struct zx_sp11_Response_s* e;
      for (e = x->sp11_Response; e; e = (struct zx_sp11_Response_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp11_Response(e, p);
  }
  {
      struct zx_ff12_RegisterNameIdentifierRequest_s* e;
      for (e = x->RegisterNameIdentifierRequest; e; e = (struct zx_ff12_RegisterNameIdentifierRequest_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_RegisterNameIdentifierRequest(e, p);
  }
  {
      struct zx_ff12_RegisterNameIdentifierResponse_s* e;
      for (e = x->RegisterNameIdentifierResponse; e; e = (struct zx_ff12_RegisterNameIdentifierResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_RegisterNameIdentifierResponse(e, p);
  }
  {
      struct zx_ff12_FederationTerminationNotification_s* e;
      for (e = x->FederationTerminationNotification; e; e = (struct zx_ff12_FederationTerminationNotification_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_FederationTerminationNotification(e, p);
  }
  {
      struct zx_ff12_LogoutRequest_s* e;
      for (e = x->ff12_LogoutRequest; e; e = (struct zx_ff12_LogoutRequest_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_LogoutRequest(e, p);
  }
  {
      struct zx_ff12_LogoutResponse_s* e;
      for (e = x->ff12_LogoutResponse; e; e = (struct zx_ff12_LogoutResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_LogoutResponse(e, p);
  }
  {
      struct zx_ff12_NameIdentifierMappingRequest_s* e;
      for (e = x->NameIdentifierMappingRequest; e; e = (struct zx_ff12_NameIdentifierMappingRequest_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_NameIdentifierMappingRequest(e, p);
  }
  {
      struct zx_ff12_NameIdentifierMappingResponse_s* e;
      for (e = x->NameIdentifierMappingResponse; e; e = (struct zx_ff12_NameIdentifierMappingResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_NameIdentifierMappingResponse(e, p);
  }
  {
      struct zx_se_Fault_s* e;
      for (e = x->Fault; e; e = (struct zx_se_Fault_s*)e->gg.g.n)
	  p = zx_ENC_SO_se_Fault(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Body", sizeof("Body") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_se_Body) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_se_Body(struct zx_se_Body_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_se_Body) */

struct zx_str_s* zx_EASY_ENC_SO_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x )
{
  int len = zx_LEN_se_Body(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_se_Body(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_se_Body) */

struct zx_str_s* zx_EASY_ENC_WO_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x )
{
  int len = zx_LEN_se_Body(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_se_Body(x, buf ), buf, len);
}




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

#define EL_NAME   se_Envelope
#define EL_STRUCT zx_se_Envelope_s
#define EL_NS     se
#define EL_TAG    Envelope

/* FUNC(zx_LEN_se_Envelope) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_se_Envelope(struct zx_se_Envelope_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Envelope") - 1 + 1 + 2 + sizeof("Envelope") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_se_Header_s* e;
      for (e = x->Header; e; e = (struct zx_se_Header_s*)e->gg.g.n)
	  len += zx_LEN_se_Header(e);
  }
  {
      struct zx_se_Body_s* e;
      for (e = x->Body; e; e = (struct zx_se_Body_s*)e->gg.g.n)
	  len += zx_LEN_se_Body(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_se_Envelope) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_se_Envelope(struct zx_se_Envelope_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Envelope", sizeof("Envelope") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_se_Header_s* e;
      for (e = x->Header; e; e = (struct zx_se_Header_s*)e->gg.g.n)
	  p = zx_ENC_SO_se_Header(e, p);
  }
  {
      struct zx_se_Body_s* e;
      for (e = x->Body; e; e = (struct zx_se_Body_s*)e->gg.g.n)
	  p = zx_ENC_SO_se_Body(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Envelope", sizeof("Envelope") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_se_Envelope) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_se_Envelope(struct zx_se_Envelope_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_se_Envelope) */

struct zx_str_s* zx_EASY_ENC_SO_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x )
{
  int len = zx_LEN_se_Envelope(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_se_Envelope(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_se_Envelope) */

struct zx_str_s* zx_EASY_ENC_WO_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x )
{
  int len = zx_LEN_se_Envelope(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_se_Envelope(x, buf ), buf, len);
}




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

#define EL_NAME   se_Fault
#define EL_STRUCT zx_se_Fault_s
#define EL_NS     se
#define EL_TAG    Fault

/* FUNC(zx_LEN_se_Fault) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_se_Fault(struct zx_se_Fault_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Fault") - 1 + 1 + 2 + sizeof("Fault") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->faultcode; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("faultcode") - 1);
  for (se = x->faultstring; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("faultstring") - 1);
  for (se = x->faultactor; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("faultactor") - 1);
  {
      struct zx_se_detail_s* e;
      for (e = x->detail; e; e = (struct zx_se_detail_s*)e->gg.g.n)
	  len += zx_LEN_se_detail(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_se_Fault) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_se_Fault(struct zx_se_Fault_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Fault", sizeof("Fault") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->faultcode; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "faultcode", sizeof("faultcode") - 1);
  for (se = x->faultstring; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "faultstring", sizeof("faultstring") - 1);
  for (se = x->faultactor; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "faultactor", sizeof("faultactor") - 1);
  {
      struct zx_se_detail_s* e;
      for (e = x->detail; e; e = (struct zx_se_detail_s*)e->gg.g.n)
	  p = zx_ENC_SO_se_detail(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Fault", sizeof("Fault") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_se_Fault) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_se_Fault(struct zx_se_Fault_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_se_Fault) */

struct zx_str_s* zx_EASY_ENC_SO_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x )
{
  int len = zx_LEN_se_Fault(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_se_Fault(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_se_Fault) */

struct zx_str_s* zx_EASY_ENC_WO_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x )
{
  int len = zx_LEN_se_Fault(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_se_Fault(x, buf ), buf, len);
}




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

#define EL_NAME   se_Header
#define EL_STRUCT zx_se_Header_s
#define EL_NS     se
#define EL_TAG    Header

/* FUNC(zx_LEN_se_Header) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_se_Header(struct zx_se_Header_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Header") - 1 + 1 + 2 + sizeof("Header") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */




  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_se_Header) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_se_Header(struct zx_se_Header_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Header", sizeof("Header") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Header", sizeof("Header") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_se_Header) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_se_Header(struct zx_se_Header_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_se_Header) */

struct zx_str_s* zx_EASY_ENC_SO_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x )
{
  int len = zx_LEN_se_Header(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_se_Header(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_se_Header) */

struct zx_str_s* zx_EASY_ENC_WO_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x )
{
  int len = zx_LEN_se_Header(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_se_Header(x, buf ), buf, len);
}




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

#define EL_NAME   se_detail
#define EL_STRUCT zx_se_detail_s
#define EL_NS     se
#define EL_TAG    detail

/* FUNC(zx_LEN_se_detail) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_se_detail(struct zx_se_detail_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("detail") - 1 + 1 + 2 + sizeof("detail") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */




  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_se_detail) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_se_detail(struct zx_se_detail_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "detail", sizeof("detail") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "detail", sizeof("detail") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_se_detail) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_se_detail(struct zx_se_detail_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_se_detail) */

struct zx_str_s* zx_EASY_ENC_SO_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x )
{
  int len = zx_LEN_se_detail(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_se_detail(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_se_detail) */

struct zx_str_s* zx_EASY_ENC_WO_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x )
{
  int len = zx_LEN_se_detail(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_se_detail(x, buf ), buf, len);
}




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

#define EL_NAME   sp11_AttributeQuery
#define EL_STRUCT zx_sp11_AttributeQuery_s
#define EL_NS     sp11
#define EL_TAG    AttributeQuery

/* FUNC(zx_LEN_sp11_AttributeQuery) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp11_AttributeQuery(struct zx_sp11_AttributeQuery_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AttributeQuery") - 1 + 1 + 2 + sizeof("AttributeQuery") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Resource, sizeof("Resource"));

  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  len += zx_LEN_sa11_Subject(e);
  }
  {
      struct zx_sa11_AttributeDesignator_s* e;
      for (e = x->AttributeDesignator; e; e = (struct zx_sa11_AttributeDesignator_s*)e->gg.g.n)
	  len += zx_LEN_sa11_AttributeDesignator(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp11_AttributeQuery) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp11_AttributeQuery(struct zx_sp11_AttributeQuery_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AttributeQuery", sizeof("AttributeQuery") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Resource, "Resource", sizeof("Resource")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Subject(e, p);
  }
  {
      struct zx_sa11_AttributeDesignator_s* e;
      for (e = x->AttributeDesignator; e; e = (struct zx_sa11_AttributeDesignator_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_AttributeDesignator(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AttributeQuery", sizeof("AttributeQuery") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp11_AttributeQuery) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp11_AttributeQuery(struct zx_sp11_AttributeQuery_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp11_AttributeQuery) */

struct zx_str_s* zx_EASY_ENC_SO_sp11_AttributeQuery(struct zx_ctx* c, struct zx_sp11_AttributeQuery_s* x )
{
  int len = zx_LEN_sp11_AttributeQuery(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp11_AttributeQuery(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp11_AttributeQuery) */

struct zx_str_s* zx_EASY_ENC_WO_sp11_AttributeQuery(struct zx_ctx* c, struct zx_sp11_AttributeQuery_s* x )
{
  int len = zx_LEN_sp11_AttributeQuery(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp11_AttributeQuery(x, buf ), buf, len);
}




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

#define EL_NAME   sp11_AuthenticationQuery
#define EL_STRUCT zx_sp11_AuthenticationQuery_s
#define EL_NS     sp11
#define EL_TAG    AuthenticationQuery

/* FUNC(zx_LEN_sp11_AuthenticationQuery) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp11_AuthenticationQuery(struct zx_sp11_AuthenticationQuery_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthenticationQuery") - 1 + 1 + 2 + sizeof("AuthenticationQuery") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->AuthenticationMethod, sizeof("AuthenticationMethod"));

  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  len += zx_LEN_sa11_Subject(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp11_AuthenticationQuery) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp11_AuthenticationQuery(struct zx_sp11_AuthenticationQuery_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthenticationQuery", sizeof("AuthenticationQuery") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->AuthenticationMethod, "AuthenticationMethod", sizeof("AuthenticationMethod")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Subject(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthenticationQuery", sizeof("AuthenticationQuery") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp11_AuthenticationQuery) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp11_AuthenticationQuery(struct zx_sp11_AuthenticationQuery_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp11_AuthenticationQuery) */

struct zx_str_s* zx_EASY_ENC_SO_sp11_AuthenticationQuery(struct zx_ctx* c, struct zx_sp11_AuthenticationQuery_s* x )
{
  int len = zx_LEN_sp11_AuthenticationQuery(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp11_AuthenticationQuery(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp11_AuthenticationQuery) */

struct zx_str_s* zx_EASY_ENC_WO_sp11_AuthenticationQuery(struct zx_ctx* c, struct zx_sp11_AuthenticationQuery_s* x )
{
  int len = zx_LEN_sp11_AuthenticationQuery(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp11_AuthenticationQuery(x, buf ), buf, len);
}




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

#define EL_NAME   sp11_AuthorizationDecisionQuery
#define EL_STRUCT zx_sp11_AuthorizationDecisionQuery_s
#define EL_NS     sp11
#define EL_TAG    AuthorizationDecisionQuery

/* FUNC(zx_LEN_sp11_AuthorizationDecisionQuery) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp11_AuthorizationDecisionQuery(struct zx_sp11_AuthorizationDecisionQuery_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthorizationDecisionQuery") - 1 + 1 + 2 + sizeof("AuthorizationDecisionQuery") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Resource, sizeof("Resource"));

  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  len += zx_LEN_sa11_Subject(e);
  }
  {
      struct zx_sa11_Action_s* e;
      for (e = x->Action; e; e = (struct zx_sa11_Action_s*)e->gg.g.n)
	  len += zx_LEN_sa11_Action(e);
  }
  {
      struct zx_sa11_Evidence_s* e;
      for (e = x->Evidence; e; e = (struct zx_sa11_Evidence_s*)e->gg.g.n)
	  len += zx_LEN_sa11_Evidence(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp11_AuthorizationDecisionQuery) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp11_AuthorizationDecisionQuery(struct zx_sp11_AuthorizationDecisionQuery_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthorizationDecisionQuery", sizeof("AuthorizationDecisionQuery") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Resource, "Resource", sizeof("Resource")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Subject(e, p);
  }
  {
      struct zx_sa11_Action_s* e;
      for (e = x->Action; e; e = (struct zx_sa11_Action_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Action(e, p);
  }
  {
      struct zx_sa11_Evidence_s* e;
      for (e = x->Evidence; e; e = (struct zx_sa11_Evidence_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Evidence(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthorizationDecisionQuery", sizeof("AuthorizationDecisionQuery") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp11_AuthorizationDecisionQuery) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp11_AuthorizationDecisionQuery(struct zx_sp11_AuthorizationDecisionQuery_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp11_AuthorizationDecisionQuery) */

struct zx_str_s* zx_EASY_ENC_SO_sp11_AuthorizationDecisionQuery(struct zx_ctx* c, struct zx_sp11_AuthorizationDecisionQuery_s* x )
{
  int len = zx_LEN_sp11_AuthorizationDecisionQuery(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp11_AuthorizationDecisionQuery(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp11_AuthorizationDecisionQuery) */

struct zx_str_s* zx_EASY_ENC_WO_sp11_AuthorizationDecisionQuery(struct zx_ctx* c, struct zx_sp11_AuthorizationDecisionQuery_s* x )
{
  int len = zx_LEN_sp11_AuthorizationDecisionQuery(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp11_AuthorizationDecisionQuery(x, buf ), buf, len);
}




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

#define EL_NAME   sp11_Request
#define EL_STRUCT zx_sp11_Request_s
#define EL_NS     sp11
#define EL_TAG    Request

/* FUNC(zx_LEN_sp11_Request) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp11_Request(struct zx_sp11_Request_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Request") - 1 + 1 + 2 + sizeof("Request") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->RequestID, sizeof("RequestID"));
  len += zx_attr_len(x->MajorVersion, sizeof("MajorVersion"));
  len += zx_attr_len(x->MinorVersion, sizeof("MinorVersion"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));

  for (se = x->RespondWith; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("RespondWith") - 1);
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  for (se = x->Query; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("Query") - 1);
  {
      struct zx_sp11_SubjectQuery_s* e;
      for (e = x->SubjectQuery; e; e = (struct zx_sp11_SubjectQuery_s*)e->gg.g.n)
	  len += zx_LEN_sp11_SubjectQuery(e);
  }
  {
      struct zx_sp11_AuthenticationQuery_s* e;
      for (e = x->AuthenticationQuery; e; e = (struct zx_sp11_AuthenticationQuery_s*)e->gg.g.n)
	  len += zx_LEN_sp11_AuthenticationQuery(e);
  }
  {
      struct zx_sp11_AttributeQuery_s* e;
      for (e = x->AttributeQuery; e; e = (struct zx_sp11_AttributeQuery_s*)e->gg.g.n)
	  len += zx_LEN_sp11_AttributeQuery(e);
  }
  {
      struct zx_sp11_AuthorizationDecisionQuery_s* e;
      for (e = x->AuthorizationDecisionQuery; e; e = (struct zx_sp11_AuthorizationDecisionQuery_s*)e->gg.g.n)
	  len += zx_LEN_sp11_AuthorizationDecisionQuery(e);
  }
  for (se = x->AssertionIDReference; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AssertionIDReference") - 1);
  for (se = x->AssertionArtifact; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AssertionArtifact") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp11_Request) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp11_Request(struct zx_sp11_Request_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Request", sizeof("Request") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->RequestID, "RequestID", sizeof("RequestID")-1);
  p = zx_attr_enc(p, x->MajorVersion, "MajorVersion", sizeof("MajorVersion")-1);
  p = zx_attr_enc(p, x->MinorVersion, "MinorVersion", sizeof("MinorVersion")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->RespondWith; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "RespondWith", sizeof("RespondWith") - 1);
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  for (se = x->Query; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "Query", sizeof("Query") - 1);
  {
      struct zx_sp11_SubjectQuery_s* e;
      for (e = x->SubjectQuery; e; e = (struct zx_sp11_SubjectQuery_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp11_SubjectQuery(e, p);
  }
  {
      struct zx_sp11_AuthenticationQuery_s* e;
      for (e = x->AuthenticationQuery; e; e = (struct zx_sp11_AuthenticationQuery_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp11_AuthenticationQuery(e, p);
  }
  {
      struct zx_sp11_AttributeQuery_s* e;
      for (e = x->AttributeQuery; e; e = (struct zx_sp11_AttributeQuery_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp11_AttributeQuery(e, p);
  }
  {
      struct zx_sp11_AuthorizationDecisionQuery_s* e;
      for (e = x->AuthorizationDecisionQuery; e; e = (struct zx_sp11_AuthorizationDecisionQuery_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp11_AuthorizationDecisionQuery(e, p);
  }
  for (se = x->AssertionIDReference; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AssertionIDReference", sizeof("AssertionIDReference") - 1);
  for (se = x->AssertionArtifact; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AssertionArtifact", sizeof("AssertionArtifact") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Request", sizeof("Request") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp11_Request) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp11_Request(struct zx_sp11_Request_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp11_Request) */

struct zx_str_s* zx_EASY_ENC_SO_sp11_Request(struct zx_ctx* c, struct zx_sp11_Request_s* x )
{
  int len = zx_LEN_sp11_Request(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp11_Request(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp11_Request) */

struct zx_str_s* zx_EASY_ENC_WO_sp11_Request(struct zx_ctx* c, struct zx_sp11_Request_s* x )
{
  int len = zx_LEN_sp11_Request(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp11_Request(x, buf ), buf, len);
}




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

#define EL_NAME   sp11_Response
#define EL_STRUCT zx_sp11_Response_s
#define EL_NS     sp11
#define EL_TAG    Response

/* FUNC(zx_LEN_sp11_Response) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp11_Response(struct zx_sp11_Response_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Response") - 1 + 1 + 2 + sizeof("Response") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ResponseID, sizeof("ResponseID"));
  len += zx_attr_len(x->InResponseTo, sizeof("InResponseTo"));
  len += zx_attr_len(x->MajorVersion, sizeof("MajorVersion"));
  len += zx_attr_len(x->MinorVersion, sizeof("MinorVersion"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->Recipient, sizeof("Recipient"));

  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_sp11_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp11_Status_s*)e->gg.g.n)
	  len += zx_LEN_sp11_Status(e);
  }
  {
      struct zx_sa11_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa11_Assertion_s*)e->gg.g.n)
	  len += zx_LEN_sa11_Assertion(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp11_Response) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp11_Response(struct zx_sp11_Response_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Response", sizeof("Response") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ResponseID, "ResponseID", sizeof("ResponseID")-1);
  p = zx_attr_enc(p, x->InResponseTo, "InResponseTo", sizeof("InResponseTo")-1);
  p = zx_attr_enc(p, x->MajorVersion, "MajorVersion", sizeof("MajorVersion")-1);
  p = zx_attr_enc(p, x->MinorVersion, "MinorVersion", sizeof("MinorVersion")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->Recipient, "Recipient", sizeof("Recipient")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_sp11_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp11_Status_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp11_Status(e, p);
  }
  {
      struct zx_sa11_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa11_Assertion_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Assertion(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Response", sizeof("Response") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp11_Response) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp11_Response(struct zx_sp11_Response_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp11_Response) */

struct zx_str_s* zx_EASY_ENC_SO_sp11_Response(struct zx_ctx* c, struct zx_sp11_Response_s* x )
{
  int len = zx_LEN_sp11_Response(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp11_Response(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp11_Response) */

struct zx_str_s* zx_EASY_ENC_WO_sp11_Response(struct zx_ctx* c, struct zx_sp11_Response_s* x )
{
  int len = zx_LEN_sp11_Response(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp11_Response(x, buf ), buf, len);
}




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

#define EL_NAME   sp11_Status
#define EL_STRUCT zx_sp11_Status_s
#define EL_NS     sp11
#define EL_TAG    Status

/* FUNC(zx_LEN_sp11_Status) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp11_Status(struct zx_sp11_Status_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Status") - 1 + 1 + 2 + sizeof("Status") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sp11_StatusCode_s* e;
      for (e = x->StatusCode; e; e = (struct zx_sp11_StatusCode_s*)e->gg.g.n)
	  len += zx_LEN_sp11_StatusCode(e);
  }
  for (se = x->StatusMessage; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("StatusMessage") - 1);
  {
      struct zx_sp11_StatusDetail_s* e;
      for (e = x->StatusDetail; e; e = (struct zx_sp11_StatusDetail_s*)e->gg.g.n)
	  len += zx_LEN_sp11_StatusDetail(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp11_Status) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp11_Status(struct zx_sp11_Status_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Status", sizeof("Status") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sp11_StatusCode_s* e;
      for (e = x->StatusCode; e; e = (struct zx_sp11_StatusCode_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp11_StatusCode(e, p);
  }
  for (se = x->StatusMessage; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "StatusMessage", sizeof("StatusMessage") - 1);
  {
      struct zx_sp11_StatusDetail_s* e;
      for (e = x->StatusDetail; e; e = (struct zx_sp11_StatusDetail_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp11_StatusDetail(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Status", sizeof("Status") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp11_Status) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp11_Status(struct zx_sp11_Status_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp11_Status) */

struct zx_str_s* zx_EASY_ENC_SO_sp11_Status(struct zx_ctx* c, struct zx_sp11_Status_s* x )
{
  int len = zx_LEN_sp11_Status(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp11_Status(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp11_Status) */

struct zx_str_s* zx_EASY_ENC_WO_sp11_Status(struct zx_ctx* c, struct zx_sp11_Status_s* x )
{
  int len = zx_LEN_sp11_Status(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp11_Status(x, buf ), buf, len);
}




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

#define EL_NAME   sp11_StatusCode
#define EL_STRUCT zx_sp11_StatusCode_s
#define EL_NS     sp11
#define EL_TAG    StatusCode

/* FUNC(zx_LEN_sp11_StatusCode) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp11_StatusCode(struct zx_sp11_StatusCode_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("StatusCode") - 1 + 1 + 2 + sizeof("StatusCode") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Value, sizeof("Value"));

  {
      struct zx_sp11_StatusCode_s* e;
      for (e = x->StatusCode; e; e = (struct zx_sp11_StatusCode_s*)e->gg.g.n)
	  len += zx_LEN_sp11_StatusCode(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp11_StatusCode) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp11_StatusCode(struct zx_sp11_StatusCode_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "StatusCode", sizeof("StatusCode") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Value, "Value", sizeof("Value")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sp11_StatusCode_s* e;
      for (e = x->StatusCode; e; e = (struct zx_sp11_StatusCode_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp11_StatusCode(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "StatusCode", sizeof("StatusCode") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp11_StatusCode) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp11_StatusCode(struct zx_sp11_StatusCode_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp11_StatusCode) */

struct zx_str_s* zx_EASY_ENC_SO_sp11_StatusCode(struct zx_ctx* c, struct zx_sp11_StatusCode_s* x )
{
  int len = zx_LEN_sp11_StatusCode(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp11_StatusCode(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp11_StatusCode) */

struct zx_str_s* zx_EASY_ENC_WO_sp11_StatusCode(struct zx_ctx* c, struct zx_sp11_StatusCode_s* x )
{
  int len = zx_LEN_sp11_StatusCode(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp11_StatusCode(x, buf ), buf, len);
}




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

#define EL_NAME   sp11_StatusDetail
#define EL_STRUCT zx_sp11_StatusDetail_s
#define EL_NS     sp11
#define EL_TAG    StatusDetail

/* FUNC(zx_LEN_sp11_StatusDetail) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp11_StatusDetail(struct zx_sp11_StatusDetail_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("StatusDetail") - 1 + 1 + 2 + sizeof("StatusDetail") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */




  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp11_StatusDetail) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp11_StatusDetail(struct zx_sp11_StatusDetail_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "StatusDetail", sizeof("StatusDetail") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "StatusDetail", sizeof("StatusDetail") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp11_StatusDetail) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp11_StatusDetail(struct zx_sp11_StatusDetail_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp11_StatusDetail) */

struct zx_str_s* zx_EASY_ENC_SO_sp11_StatusDetail(struct zx_ctx* c, struct zx_sp11_StatusDetail_s* x )
{
  int len = zx_LEN_sp11_StatusDetail(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp11_StatusDetail(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp11_StatusDetail) */

struct zx_str_s* zx_EASY_ENC_WO_sp11_StatusDetail(struct zx_ctx* c, struct zx_sp11_StatusDetail_s* x )
{
  int len = zx_LEN_sp11_StatusDetail(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp11_StatusDetail(x, buf ), buf, len);
}




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

#define EL_NAME   sp11_SubjectQuery
#define EL_STRUCT zx_sp11_SubjectQuery_s
#define EL_NS     sp11
#define EL_TAG    SubjectQuery

/* FUNC(zx_LEN_sp11_SubjectQuery) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp11_SubjectQuery(struct zx_sp11_SubjectQuery_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SubjectQuery") - 1 + 1 + 2 + sizeof("SubjectQuery") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  len += zx_LEN_sa11_Subject(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp11_SubjectQuery) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp11_SubjectQuery(struct zx_sp11_SubjectQuery_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SubjectQuery", sizeof("SubjectQuery") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Subject(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SubjectQuery", sizeof("SubjectQuery") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp11_SubjectQuery) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp11_SubjectQuery(struct zx_sp11_SubjectQuery_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp11_SubjectQuery) */

struct zx_str_s* zx_EASY_ENC_SO_sp11_SubjectQuery(struct zx_ctx* c, struct zx_sp11_SubjectQuery_s* x )
{
  int len = zx_LEN_sp11_SubjectQuery(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp11_SubjectQuery(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp11_SubjectQuery) */

struct zx_str_s* zx_EASY_ENC_WO_sp11_SubjectQuery(struct zx_ctx* c, struct zx_sp11_SubjectQuery_s* x )
{
  int len = zx_LEN_sp11_SubjectQuery(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp11_SubjectQuery(x, buf ), buf, len);
}




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

#define EL_NAME   sp_ArtifactResolve
#define EL_STRUCT zx_sp_ArtifactResolve_s
#define EL_NS     sp
#define EL_TAG    ArtifactResolve

/* FUNC(zx_LEN_sp_ArtifactResolve) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp_ArtifactResolve(struct zx_sp_ArtifactResolve_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ArtifactResolve") - 1 + 1 + 2 + sizeof("ArtifactResolve") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ID, sizeof("ID"));
  len += zx_attr_len(x->Version, sizeof("Version"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->Destination, sizeof("Destination"));
  len += zx_attr_len(x->Consent, sizeof("Consent"));

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  len += zx_LEN_sa_Issuer(e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  len += zx_LEN_sp_Extensions(e);
  }
  for (se = x->Artifact; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("Artifact") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp_ArtifactResolve) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp_ArtifactResolve(struct zx_sp_ArtifactResolve_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ArtifactResolve", sizeof("ArtifactResolve") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);
  p = zx_attr_enc(p, x->Version, "Version", sizeof("Version")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->Destination, "Destination", sizeof("Destination")-1);
  p = zx_attr_enc(p, x->Consent, "Consent", sizeof("Consent")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Issuer(e, p);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Extensions(e, p);
  }
  for (se = x->Artifact; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "Artifact", sizeof("Artifact") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ArtifactResolve", sizeof("ArtifactResolve") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp_ArtifactResolve) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp_ArtifactResolve(struct zx_sp_ArtifactResolve_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp_ArtifactResolve) */

struct zx_str_s* zx_EASY_ENC_SO_sp_ArtifactResolve(struct zx_ctx* c, struct zx_sp_ArtifactResolve_s* x )
{
  int len = zx_LEN_sp_ArtifactResolve(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp_ArtifactResolve(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp_ArtifactResolve) */

struct zx_str_s* zx_EASY_ENC_WO_sp_ArtifactResolve(struct zx_ctx* c, struct zx_sp_ArtifactResolve_s* x )
{
  int len = zx_LEN_sp_ArtifactResolve(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp_ArtifactResolve(x, buf ), buf, len);
}




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

#define EL_NAME   sp_ArtifactResponse
#define EL_STRUCT zx_sp_ArtifactResponse_s
#define EL_NS     sp
#define EL_TAG    ArtifactResponse

/* FUNC(zx_LEN_sp_ArtifactResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp_ArtifactResponse(struct zx_sp_ArtifactResponse_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ArtifactResponse") - 1 + 1 + 2 + sizeof("ArtifactResponse") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ID, sizeof("ID"));
  len += zx_attr_len(x->InResponseTo, sizeof("InResponseTo"));
  len += zx_attr_len(x->Version, sizeof("Version"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->Destination, sizeof("Destination"));
  len += zx_attr_len(x->Consent, sizeof("Consent"));

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  len += zx_LEN_sa_Issuer(e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  len += zx_LEN_sp_Extensions(e);
  }
  {
      struct zx_sp_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp_Status_s*)e->gg.g.n)
	  len += zx_LEN_sp_Status(e);
  }
  {
      struct zx_sp_Response_s* e;
      for (e = x->Response; e; e = (struct zx_sp_Response_s*)e->gg.g.n)
	  len += zx_LEN_sp_Response(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp_ArtifactResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp_ArtifactResponse(struct zx_sp_ArtifactResponse_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ArtifactResponse", sizeof("ArtifactResponse") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);
  p = zx_attr_enc(p, x->InResponseTo, "InResponseTo", sizeof("InResponseTo")-1);
  p = zx_attr_enc(p, x->Version, "Version", sizeof("Version")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->Destination, "Destination", sizeof("Destination")-1);
  p = zx_attr_enc(p, x->Consent, "Consent", sizeof("Consent")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Issuer(e, p);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Extensions(e, p);
  }
  {
      struct zx_sp_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp_Status_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Status(e, p);
  }
  {
      struct zx_sp_Response_s* e;
      for (e = x->Response; e; e = (struct zx_sp_Response_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Response(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ArtifactResponse", sizeof("ArtifactResponse") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp_ArtifactResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp_ArtifactResponse(struct zx_sp_ArtifactResponse_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp_ArtifactResponse) */

struct zx_str_s* zx_EASY_ENC_SO_sp_ArtifactResponse(struct zx_ctx* c, struct zx_sp_ArtifactResponse_s* x )
{
  int len = zx_LEN_sp_ArtifactResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp_ArtifactResponse(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp_ArtifactResponse) */

struct zx_str_s* zx_EASY_ENC_WO_sp_ArtifactResponse(struct zx_ctx* c, struct zx_sp_ArtifactResponse_s* x )
{
  int len = zx_LEN_sp_ArtifactResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp_ArtifactResponse(x, buf ), buf, len);
}




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

#define EL_NAME   sp_AssertionIDRequest
#define EL_STRUCT zx_sp_AssertionIDRequest_s
#define EL_NS     sp
#define EL_TAG    AssertionIDRequest

/* FUNC(zx_LEN_sp_AssertionIDRequest) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp_AssertionIDRequest(struct zx_sp_AssertionIDRequest_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AssertionIDRequest") - 1 + 1 + 2 + sizeof("AssertionIDRequest") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ID, sizeof("ID"));
  len += zx_attr_len(x->Version, sizeof("Version"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->Destination, sizeof("Destination"));
  len += zx_attr_len(x->Consent, sizeof("Consent"));

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  len += zx_LEN_sa_Issuer(e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  len += zx_LEN_sp_Extensions(e);
  }
  for (se = x->AssertionIDRef; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AssertionIDRef") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp_AssertionIDRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp_AssertionIDRequest(struct zx_sp_AssertionIDRequest_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AssertionIDRequest", sizeof("AssertionIDRequest") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);
  p = zx_attr_enc(p, x->Version, "Version", sizeof("Version")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->Destination, "Destination", sizeof("Destination")-1);
  p = zx_attr_enc(p, x->Consent, "Consent", sizeof("Consent")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Issuer(e, p);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Extensions(e, p);
  }
  for (se = x->AssertionIDRef; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AssertionIDRef", sizeof("AssertionIDRef") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AssertionIDRequest", sizeof("AssertionIDRequest") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp_AssertionIDRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp_AssertionIDRequest(struct zx_sp_AssertionIDRequest_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp_AssertionIDRequest) */

struct zx_str_s* zx_EASY_ENC_SO_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_sp_AssertionIDRequest_s* x )
{
  int len = zx_LEN_sp_AssertionIDRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp_AssertionIDRequest(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp_AssertionIDRequest) */

struct zx_str_s* zx_EASY_ENC_WO_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_sp_AssertionIDRequest_s* x )
{
  int len = zx_LEN_sp_AssertionIDRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp_AssertionIDRequest(x, buf ), buf, len);
}




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

#define EL_NAME   sp_AttributeQuery
#define EL_STRUCT zx_sp_AttributeQuery_s
#define EL_NS     sp
#define EL_TAG    AttributeQuery

/* FUNC(zx_LEN_sp_AttributeQuery) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp_AttributeQuery(struct zx_sp_AttributeQuery_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AttributeQuery") - 1 + 1 + 2 + sizeof("AttributeQuery") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ID, sizeof("ID"));
  len += zx_attr_len(x->Version, sizeof("Version"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->Destination, sizeof("Destination"));
  len += zx_attr_len(x->Consent, sizeof("Consent"));

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  len += zx_LEN_sa_Issuer(e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  len += zx_LEN_sp_Extensions(e);
  }
  {
      struct zx_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n)
	  len += zx_LEN_sa_Subject(e);
  }
  {
      struct zx_sa_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zx_sa_Attribute_s*)e->gg.g.n)
	  len += zx_LEN_sa_Attribute(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp_AttributeQuery) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp_AttributeQuery(struct zx_sp_AttributeQuery_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AttributeQuery", sizeof("AttributeQuery") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);
  p = zx_attr_enc(p, x->Version, "Version", sizeof("Version")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->Destination, "Destination", sizeof("Destination")-1);
  p = zx_attr_enc(p, x->Consent, "Consent", sizeof("Consent")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Issuer(e, p);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Extensions(e, p);
  }
  {
      struct zx_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Subject(e, p);
  }
  {
      struct zx_sa_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zx_sa_Attribute_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Attribute(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AttributeQuery", sizeof("AttributeQuery") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp_AttributeQuery) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp_AttributeQuery(struct zx_sp_AttributeQuery_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp_AttributeQuery) */

struct zx_str_s* zx_EASY_ENC_SO_sp_AttributeQuery(struct zx_ctx* c, struct zx_sp_AttributeQuery_s* x )
{
  int len = zx_LEN_sp_AttributeQuery(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp_AttributeQuery(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp_AttributeQuery) */

struct zx_str_s* zx_EASY_ENC_WO_sp_AttributeQuery(struct zx_ctx* c, struct zx_sp_AttributeQuery_s* x )
{
  int len = zx_LEN_sp_AttributeQuery(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp_AttributeQuery(x, buf ), buf, len);
}




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

#define EL_NAME   sp_AuthnQuery
#define EL_STRUCT zx_sp_AuthnQuery_s
#define EL_NS     sp
#define EL_TAG    AuthnQuery

/* FUNC(zx_LEN_sp_AuthnQuery) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp_AuthnQuery(struct zx_sp_AuthnQuery_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthnQuery") - 1 + 1 + 2 + sizeof("AuthnQuery") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ID, sizeof("ID"));
  len += zx_attr_len(x->Version, sizeof("Version"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->Destination, sizeof("Destination"));
  len += zx_attr_len(x->Consent, sizeof("Consent"));
  len += zx_attr_len(x->SessionIndex, sizeof("SessionIndex"));

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  len += zx_LEN_sa_Issuer(e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  len += zx_LEN_sp_Extensions(e);
  }
  {
      struct zx_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n)
	  len += zx_LEN_sa_Subject(e);
  }
  {
      struct zx_sp_RequestedAuthnContext_s* e;
      for (e = x->RequestedAuthnContext; e; e = (struct zx_sp_RequestedAuthnContext_s*)e->gg.g.n)
	  len += zx_LEN_sp_RequestedAuthnContext(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp_AuthnQuery) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp_AuthnQuery(struct zx_sp_AuthnQuery_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthnQuery", sizeof("AuthnQuery") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);
  p = zx_attr_enc(p, x->Version, "Version", sizeof("Version")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->Destination, "Destination", sizeof("Destination")-1);
  p = zx_attr_enc(p, x->Consent, "Consent", sizeof("Consent")-1);
  p = zx_attr_enc(p, x->SessionIndex, "SessionIndex", sizeof("SessionIndex")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Issuer(e, p);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Extensions(e, p);
  }
  {
      struct zx_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Subject(e, p);
  }
  {
      struct zx_sp_RequestedAuthnContext_s* e;
      for (e = x->RequestedAuthnContext; e; e = (struct zx_sp_RequestedAuthnContext_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_RequestedAuthnContext(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthnQuery", sizeof("AuthnQuery") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp_AuthnQuery) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp_AuthnQuery(struct zx_sp_AuthnQuery_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp_AuthnQuery) */

struct zx_str_s* zx_EASY_ENC_SO_sp_AuthnQuery(struct zx_ctx* c, struct zx_sp_AuthnQuery_s* x )
{
  int len = zx_LEN_sp_AuthnQuery(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp_AuthnQuery(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp_AuthnQuery) */

struct zx_str_s* zx_EASY_ENC_WO_sp_AuthnQuery(struct zx_ctx* c, struct zx_sp_AuthnQuery_s* x )
{
  int len = zx_LEN_sp_AuthnQuery(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp_AuthnQuery(x, buf ), buf, len);
}




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

#define EL_NAME   sp_AuthnRequest
#define EL_STRUCT zx_sp_AuthnRequest_s
#define EL_NS     sp
#define EL_TAG    AuthnRequest

/* FUNC(zx_LEN_sp_AuthnRequest) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp_AuthnRequest(struct zx_sp_AuthnRequest_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthnRequest") - 1 + 1 + 2 + sizeof("AuthnRequest") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ID, sizeof("ID"));
  len += zx_attr_len(x->Version, sizeof("Version"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->Destination, sizeof("Destination"));
  len += zx_attr_len(x->Consent, sizeof("Consent"));
  len += zx_attr_len(x->ForceAuthn, sizeof("ForceAuthn"));
  len += zx_attr_len(x->IsPassive, sizeof("IsPassive"));
  len += zx_attr_len(x->ProtocolBinding, sizeof("ProtocolBinding"));
  len += zx_attr_len(x->AssertionConsumerServiceIndex, sizeof("AssertionConsumerServiceIndex"));
  len += zx_attr_len(x->AssertionConsumerServiceURL, sizeof("AssertionConsumerServiceURL"));
  len += zx_attr_len(x->AttributeConsumingServiceIndex, sizeof("AttributeConsumingServiceIndex"));
  len += zx_attr_len(x->ProviderName, sizeof("ProviderName"));

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  len += zx_LEN_sa_Issuer(e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  len += zx_LEN_sp_Extensions(e);
  }
  {
      struct zx_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n)
	  len += zx_LEN_sa_Subject(e);
  }
  {
      struct zx_sp_NameIDPolicy_s* e;
      for (e = x->NameIDPolicy; e; e = (struct zx_sp_NameIDPolicy_s*)e->gg.g.n)
	  len += zx_LEN_sp_NameIDPolicy(e);
  }
  {
      struct zx_sa_Conditions_s* e;
      for (e = x->Conditions; e; e = (struct zx_sa_Conditions_s*)e->gg.g.n)
	  len += zx_LEN_sa_Conditions(e);
  }
  {
      struct zx_sp_RequestedAuthnContext_s* e;
      for (e = x->RequestedAuthnContext; e; e = (struct zx_sp_RequestedAuthnContext_s*)e->gg.g.n)
	  len += zx_LEN_sp_RequestedAuthnContext(e);
  }
  {
      struct zx_sp_Scoping_s* e;
      for (e = x->Scoping; e; e = (struct zx_sp_Scoping_s*)e->gg.g.n)
	  len += zx_LEN_sp_Scoping(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp_AuthnRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp_AuthnRequest(struct zx_sp_AuthnRequest_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthnRequest", sizeof("AuthnRequest") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);
  p = zx_attr_enc(p, x->Version, "Version", sizeof("Version")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->Destination, "Destination", sizeof("Destination")-1);
  p = zx_attr_enc(p, x->Consent, "Consent", sizeof("Consent")-1);
  p = zx_attr_enc(p, x->ForceAuthn, "ForceAuthn", sizeof("ForceAuthn")-1);
  p = zx_attr_enc(p, x->IsPassive, "IsPassive", sizeof("IsPassive")-1);
  p = zx_attr_enc(p, x->ProtocolBinding, "ProtocolBinding", sizeof("ProtocolBinding")-1);
  p = zx_attr_enc(p, x->AssertionConsumerServiceIndex, "AssertionConsumerServiceIndex", sizeof("AssertionConsumerServiceIndex")-1);
  p = zx_attr_enc(p, x->AssertionConsumerServiceURL, "AssertionConsumerServiceURL", sizeof("AssertionConsumerServiceURL")-1);
  p = zx_attr_enc(p, x->AttributeConsumingServiceIndex, "AttributeConsumingServiceIndex", sizeof("AttributeConsumingServiceIndex")-1);
  p = zx_attr_enc(p, x->ProviderName, "ProviderName", sizeof("ProviderName")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Issuer(e, p);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Extensions(e, p);
  }
  {
      struct zx_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Subject(e, p);
  }
  {
      struct zx_sp_NameIDPolicy_s* e;
      for (e = x->NameIDPolicy; e; e = (struct zx_sp_NameIDPolicy_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_NameIDPolicy(e, p);
  }
  {
      struct zx_sa_Conditions_s* e;
      for (e = x->Conditions; e; e = (struct zx_sa_Conditions_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Conditions(e, p);
  }
  {
      struct zx_sp_RequestedAuthnContext_s* e;
      for (e = x->RequestedAuthnContext; e; e = (struct zx_sp_RequestedAuthnContext_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_RequestedAuthnContext(e, p);
  }
  {
      struct zx_sp_Scoping_s* e;
      for (e = x->Scoping; e; e = (struct zx_sp_Scoping_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Scoping(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthnRequest", sizeof("AuthnRequest") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp_AuthnRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp_AuthnRequest(struct zx_sp_AuthnRequest_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp_AuthnRequest) */

struct zx_str_s* zx_EASY_ENC_SO_sp_AuthnRequest(struct zx_ctx* c, struct zx_sp_AuthnRequest_s* x )
{
  int len = zx_LEN_sp_AuthnRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp_AuthnRequest(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp_AuthnRequest) */

struct zx_str_s* zx_EASY_ENC_WO_sp_AuthnRequest(struct zx_ctx* c, struct zx_sp_AuthnRequest_s* x )
{
  int len = zx_LEN_sp_AuthnRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp_AuthnRequest(x, buf ), buf, len);
}




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

#define EL_NAME   sp_AuthzDecisionQuery
#define EL_STRUCT zx_sp_AuthzDecisionQuery_s
#define EL_NS     sp
#define EL_TAG    AuthzDecisionQuery

/* FUNC(zx_LEN_sp_AuthzDecisionQuery) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp_AuthzDecisionQuery(struct zx_sp_AuthzDecisionQuery_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthzDecisionQuery") - 1 + 1 + 2 + sizeof("AuthzDecisionQuery") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ID, sizeof("ID"));
  len += zx_attr_len(x->Version, sizeof("Version"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->Destination, sizeof("Destination"));
  len += zx_attr_len(x->Consent, sizeof("Consent"));
  len += zx_attr_len(x->Resource, sizeof("Resource"));

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  len += zx_LEN_sa_Issuer(e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  len += zx_LEN_sp_Extensions(e);
  }
  {
      struct zx_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n)
	  len += zx_LEN_sa_Subject(e);
  }
  {
      struct zx_sa_Action_s* e;
      for (e = x->Action; e; e = (struct zx_sa_Action_s*)e->gg.g.n)
	  len += zx_LEN_sa_Action(e);
  }
  {
      struct zx_sa_Evidence_s* e;
      for (e = x->Evidence; e; e = (struct zx_sa_Evidence_s*)e->gg.g.n)
	  len += zx_LEN_sa_Evidence(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp_AuthzDecisionQuery) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp_AuthzDecisionQuery(struct zx_sp_AuthzDecisionQuery_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthzDecisionQuery", sizeof("AuthzDecisionQuery") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);
  p = zx_attr_enc(p, x->Version, "Version", sizeof("Version")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->Destination, "Destination", sizeof("Destination")-1);
  p = zx_attr_enc(p, x->Consent, "Consent", sizeof("Consent")-1);
  p = zx_attr_enc(p, x->Resource, "Resource", sizeof("Resource")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Issuer(e, p);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Extensions(e, p);
  }
  {
      struct zx_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Subject(e, p);
  }
  {
      struct zx_sa_Action_s* e;
      for (e = x->Action; e; e = (struct zx_sa_Action_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Action(e, p);
  }
  {
      struct zx_sa_Evidence_s* e;
      for (e = x->Evidence; e; e = (struct zx_sa_Evidence_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Evidence(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthzDecisionQuery", sizeof("AuthzDecisionQuery") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp_AuthzDecisionQuery) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp_AuthzDecisionQuery(struct zx_sp_AuthzDecisionQuery_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp_AuthzDecisionQuery) */

struct zx_str_s* zx_EASY_ENC_SO_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_sp_AuthzDecisionQuery_s* x )
{
  int len = zx_LEN_sp_AuthzDecisionQuery(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp_AuthzDecisionQuery(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp_AuthzDecisionQuery) */

struct zx_str_s* zx_EASY_ENC_WO_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_sp_AuthzDecisionQuery_s* x )
{
  int len = zx_LEN_sp_AuthzDecisionQuery(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp_AuthzDecisionQuery(x, buf ), buf, len);
}




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

#define EL_NAME   sp_Extensions
#define EL_STRUCT zx_sp_Extensions_s
#define EL_NS     sp
#define EL_TAG    Extensions

/* FUNC(zx_LEN_sp_Extensions) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp_Extensions(struct zx_sp_Extensions_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Extensions") - 1 + 1 + 2 + sizeof("Extensions") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */




  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp_Extensions) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp_Extensions(struct zx_sp_Extensions_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Extensions", sizeof("Extensions") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Extensions", sizeof("Extensions") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp_Extensions) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp_Extensions(struct zx_sp_Extensions_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp_Extensions) */

struct zx_str_s* zx_EASY_ENC_SO_sp_Extensions(struct zx_ctx* c, struct zx_sp_Extensions_s* x )
{
  int len = zx_LEN_sp_Extensions(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp_Extensions(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp_Extensions) */

struct zx_str_s* zx_EASY_ENC_WO_sp_Extensions(struct zx_ctx* c, struct zx_sp_Extensions_s* x )
{
  int len = zx_LEN_sp_Extensions(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp_Extensions(x, buf ), buf, len);
}




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

#define EL_NAME   sp_IDPEntry
#define EL_STRUCT zx_sp_IDPEntry_s
#define EL_NS     sp
#define EL_TAG    IDPEntry

/* FUNC(zx_LEN_sp_IDPEntry) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp_IDPEntry(struct zx_sp_IDPEntry_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("IDPEntry") - 1 + 1 + 2 + sizeof("IDPEntry") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ProviderID, sizeof("ProviderID"));
  len += zx_attr_len(x->Name, sizeof("Name"));
  len += zx_attr_len(x->Loc, sizeof("Loc"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp_IDPEntry) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp_IDPEntry(struct zx_sp_IDPEntry_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "IDPEntry", sizeof("IDPEntry") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ProviderID, "ProviderID", sizeof("ProviderID")-1);
  p = zx_attr_enc(p, x->Name, "Name", sizeof("Name")-1);
  p = zx_attr_enc(p, x->Loc, "Loc", sizeof("Loc")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "IDPEntry", sizeof("IDPEntry") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp_IDPEntry) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp_IDPEntry(struct zx_sp_IDPEntry_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp_IDPEntry) */

struct zx_str_s* zx_EASY_ENC_SO_sp_IDPEntry(struct zx_ctx* c, struct zx_sp_IDPEntry_s* x )
{
  int len = zx_LEN_sp_IDPEntry(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp_IDPEntry(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp_IDPEntry) */

struct zx_str_s* zx_EASY_ENC_WO_sp_IDPEntry(struct zx_ctx* c, struct zx_sp_IDPEntry_s* x )
{
  int len = zx_LEN_sp_IDPEntry(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp_IDPEntry(x, buf ), buf, len);
}




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

#define EL_NAME   sp_IDPList
#define EL_STRUCT zx_sp_IDPList_s
#define EL_NS     sp
#define EL_TAG    IDPList

/* FUNC(zx_LEN_sp_IDPList) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp_IDPList(struct zx_sp_IDPList_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("IDPList") - 1 + 1 + 2 + sizeof("IDPList") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sp_IDPEntry_s* e;
      for (e = x->IDPEntry; e; e = (struct zx_sp_IDPEntry_s*)e->gg.g.n)
	  len += zx_LEN_sp_IDPEntry(e);
  }
  for (se = x->GetComplete; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("GetComplete") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp_IDPList) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp_IDPList(struct zx_sp_IDPList_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "IDPList", sizeof("IDPList") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sp_IDPEntry_s* e;
      for (e = x->IDPEntry; e; e = (struct zx_sp_IDPEntry_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_IDPEntry(e, p);
  }
  for (se = x->GetComplete; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "GetComplete", sizeof("GetComplete") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "IDPList", sizeof("IDPList") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp_IDPList) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp_IDPList(struct zx_sp_IDPList_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp_IDPList) */

struct zx_str_s* zx_EASY_ENC_SO_sp_IDPList(struct zx_ctx* c, struct zx_sp_IDPList_s* x )
{
  int len = zx_LEN_sp_IDPList(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp_IDPList(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp_IDPList) */

struct zx_str_s* zx_EASY_ENC_WO_sp_IDPList(struct zx_ctx* c, struct zx_sp_IDPList_s* x )
{
  int len = zx_LEN_sp_IDPList(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp_IDPList(x, buf ), buf, len);
}




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

#define EL_NAME   sp_LogoutRequest
#define EL_STRUCT zx_sp_LogoutRequest_s
#define EL_NS     sp
#define EL_TAG    LogoutRequest

/* FUNC(zx_LEN_sp_LogoutRequest) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp_LogoutRequest(struct zx_sp_LogoutRequest_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("LogoutRequest") - 1 + 1 + 2 + sizeof("LogoutRequest") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ID, sizeof("ID"));
  len += zx_attr_len(x->Version, sizeof("Version"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->Destination, sizeof("Destination"));
  len += zx_attr_len(x->Consent, sizeof("Consent"));
  len += zx_attr_len(x->Reason, sizeof("Reason"));
  len += zx_attr_len(x->NotOnOrAfter, sizeof("NotOnOrAfter"));

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  len += zx_LEN_sa_Issuer(e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  len += zx_LEN_sp_Extensions(e);
  }
  {
      struct zx_sa_BaseID_s* e;
      for (e = x->BaseID; e; e = (struct zx_sa_BaseID_s*)e->gg.g.n)
	  len += zx_LEN_sa_BaseID(e);
  }
  {
      struct zx_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n)
	  len += zx_LEN_sa_NameID(e);
  }
  {
      struct zx_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n)
	  len += zx_LEN_sa_EncryptedID(e);
  }
  for (se = x->SessionIndex; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("SessionIndex") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp_LogoutRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp_LogoutRequest(struct zx_sp_LogoutRequest_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "LogoutRequest", sizeof("LogoutRequest") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);
  p = zx_attr_enc(p, x->Version, "Version", sizeof("Version")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->Destination, "Destination", sizeof("Destination")-1);
  p = zx_attr_enc(p, x->Consent, "Consent", sizeof("Consent")-1);
  p = zx_attr_enc(p, x->Reason, "Reason", sizeof("Reason")-1);
  p = zx_attr_enc(p, x->NotOnOrAfter, "NotOnOrAfter", sizeof("NotOnOrAfter")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Issuer(e, p);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Extensions(e, p);
  }
  {
      struct zx_sa_BaseID_s* e;
      for (e = x->BaseID; e; e = (struct zx_sa_BaseID_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_BaseID(e, p);
  }
  {
      struct zx_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_NameID(e, p);
  }
  {
      struct zx_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_EncryptedID(e, p);
  }
  for (se = x->SessionIndex; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "SessionIndex", sizeof("SessionIndex") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "LogoutRequest", sizeof("LogoutRequest") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp_LogoutRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp_LogoutRequest(struct zx_sp_LogoutRequest_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp_LogoutRequest) */

struct zx_str_s* zx_EASY_ENC_SO_sp_LogoutRequest(struct zx_ctx* c, struct zx_sp_LogoutRequest_s* x )
{
  int len = zx_LEN_sp_LogoutRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp_LogoutRequest(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp_LogoutRequest) */

struct zx_str_s* zx_EASY_ENC_WO_sp_LogoutRequest(struct zx_ctx* c, struct zx_sp_LogoutRequest_s* x )
{
  int len = zx_LEN_sp_LogoutRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp_LogoutRequest(x, buf ), buf, len);
}




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

#define EL_NAME   sp_LogoutResponse
#define EL_STRUCT zx_sp_LogoutResponse_s
#define EL_NS     sp
#define EL_TAG    LogoutResponse

/* FUNC(zx_LEN_sp_LogoutResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp_LogoutResponse(struct zx_sp_LogoutResponse_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("LogoutResponse") - 1 + 1 + 2 + sizeof("LogoutResponse") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ID, sizeof("ID"));
  len += zx_attr_len(x->InResponseTo, sizeof("InResponseTo"));
  len += zx_attr_len(x->Version, sizeof("Version"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->Destination, sizeof("Destination"));
  len += zx_attr_len(x->Consent, sizeof("Consent"));

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  len += zx_LEN_sa_Issuer(e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  len += zx_LEN_sp_Extensions(e);
  }
  {
      struct zx_sp_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp_Status_s*)e->gg.g.n)
	  len += zx_LEN_sp_Status(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp_LogoutResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp_LogoutResponse(struct zx_sp_LogoutResponse_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "LogoutResponse", sizeof("LogoutResponse") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);
  p = zx_attr_enc(p, x->InResponseTo, "InResponseTo", sizeof("InResponseTo")-1);
  p = zx_attr_enc(p, x->Version, "Version", sizeof("Version")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->Destination, "Destination", sizeof("Destination")-1);
  p = zx_attr_enc(p, x->Consent, "Consent", sizeof("Consent")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Issuer(e, p);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Extensions(e, p);
  }
  {
      struct zx_sp_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp_Status_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Status(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "LogoutResponse", sizeof("LogoutResponse") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp_LogoutResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp_LogoutResponse(struct zx_sp_LogoutResponse_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp_LogoutResponse) */

struct zx_str_s* zx_EASY_ENC_SO_sp_LogoutResponse(struct zx_ctx* c, struct zx_sp_LogoutResponse_s* x )
{
  int len = zx_LEN_sp_LogoutResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp_LogoutResponse(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp_LogoutResponse) */

struct zx_str_s* zx_EASY_ENC_WO_sp_LogoutResponse(struct zx_ctx* c, struct zx_sp_LogoutResponse_s* x )
{
  int len = zx_LEN_sp_LogoutResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp_LogoutResponse(x, buf ), buf, len);
}




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

#define EL_NAME   sp_ManageNameIDRequest
#define EL_STRUCT zx_sp_ManageNameIDRequest_s
#define EL_NS     sp
#define EL_TAG    ManageNameIDRequest

/* FUNC(zx_LEN_sp_ManageNameIDRequest) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp_ManageNameIDRequest(struct zx_sp_ManageNameIDRequest_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ManageNameIDRequest") - 1 + 1 + 2 + sizeof("ManageNameIDRequest") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ID, sizeof("ID"));
  len += zx_attr_len(x->Version, sizeof("Version"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->Destination, sizeof("Destination"));
  len += zx_attr_len(x->Consent, sizeof("Consent"));

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  len += zx_LEN_sa_Issuer(e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  len += zx_LEN_sp_Extensions(e);
  }
  {
      struct zx_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n)
	  len += zx_LEN_sa_NameID(e);
  }
  {
      struct zx_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n)
	  len += zx_LEN_sa_EncryptedID(e);
  }
  for (se = x->NewID; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("NewID") - 1);
  {
      struct zx_sp_NewEncryptedID_s* e;
      for (e = x->NewEncryptedID; e; e = (struct zx_sp_NewEncryptedID_s*)e->gg.g.n)
	  len += zx_LEN_sp_NewEncryptedID(e);
  }
  for (se = x->Terminate; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("Terminate") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp_ManageNameIDRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp_ManageNameIDRequest(struct zx_sp_ManageNameIDRequest_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ManageNameIDRequest", sizeof("ManageNameIDRequest") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);
  p = zx_attr_enc(p, x->Version, "Version", sizeof("Version")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->Destination, "Destination", sizeof("Destination")-1);
  p = zx_attr_enc(p, x->Consent, "Consent", sizeof("Consent")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Issuer(e, p);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Extensions(e, p);
  }
  {
      struct zx_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_NameID(e, p);
  }
  {
      struct zx_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_EncryptedID(e, p);
  }
  for (se = x->NewID; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "NewID", sizeof("NewID") - 1);
  {
      struct zx_sp_NewEncryptedID_s* e;
      for (e = x->NewEncryptedID; e; e = (struct zx_sp_NewEncryptedID_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_NewEncryptedID(e, p);
  }
  for (se = x->Terminate; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "Terminate", sizeof("Terminate") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ManageNameIDRequest", sizeof("ManageNameIDRequest") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp_ManageNameIDRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp_ManageNameIDRequest(struct zx_sp_ManageNameIDRequest_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp_ManageNameIDRequest) */

struct zx_str_s* zx_EASY_ENC_SO_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_sp_ManageNameIDRequest_s* x )
{
  int len = zx_LEN_sp_ManageNameIDRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp_ManageNameIDRequest(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp_ManageNameIDRequest) */

struct zx_str_s* zx_EASY_ENC_WO_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_sp_ManageNameIDRequest_s* x )
{
  int len = zx_LEN_sp_ManageNameIDRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp_ManageNameIDRequest(x, buf ), buf, len);
}




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

#define EL_NAME   sp_ManageNameIDResponse
#define EL_STRUCT zx_sp_ManageNameIDResponse_s
#define EL_NS     sp
#define EL_TAG    ManageNameIDResponse

/* FUNC(zx_LEN_sp_ManageNameIDResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp_ManageNameIDResponse(struct zx_sp_ManageNameIDResponse_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ManageNameIDResponse") - 1 + 1 + 2 + sizeof("ManageNameIDResponse") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ID, sizeof("ID"));
  len += zx_attr_len(x->InResponseTo, sizeof("InResponseTo"));
  len += zx_attr_len(x->Version, sizeof("Version"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->Destination, sizeof("Destination"));
  len += zx_attr_len(x->Consent, sizeof("Consent"));

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  len += zx_LEN_sa_Issuer(e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  len += zx_LEN_sp_Extensions(e);
  }
  {
      struct zx_sp_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp_Status_s*)e->gg.g.n)
	  len += zx_LEN_sp_Status(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp_ManageNameIDResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp_ManageNameIDResponse(struct zx_sp_ManageNameIDResponse_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ManageNameIDResponse", sizeof("ManageNameIDResponse") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);
  p = zx_attr_enc(p, x->InResponseTo, "InResponseTo", sizeof("InResponseTo")-1);
  p = zx_attr_enc(p, x->Version, "Version", sizeof("Version")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->Destination, "Destination", sizeof("Destination")-1);
  p = zx_attr_enc(p, x->Consent, "Consent", sizeof("Consent")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Issuer(e, p);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Extensions(e, p);
  }
  {
      struct zx_sp_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp_Status_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Status(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ManageNameIDResponse", sizeof("ManageNameIDResponse") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp_ManageNameIDResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp_ManageNameIDResponse(struct zx_sp_ManageNameIDResponse_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp_ManageNameIDResponse) */

struct zx_str_s* zx_EASY_ENC_SO_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_sp_ManageNameIDResponse_s* x )
{
  int len = zx_LEN_sp_ManageNameIDResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp_ManageNameIDResponse(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp_ManageNameIDResponse) */

struct zx_str_s* zx_EASY_ENC_WO_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_sp_ManageNameIDResponse_s* x )
{
  int len = zx_LEN_sp_ManageNameIDResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp_ManageNameIDResponse(x, buf ), buf, len);
}




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

#define EL_NAME   sp_NameIDMappingRequest
#define EL_STRUCT zx_sp_NameIDMappingRequest_s
#define EL_NS     sp
#define EL_TAG    NameIDMappingRequest

/* FUNC(zx_LEN_sp_NameIDMappingRequest) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp_NameIDMappingRequest(struct zx_sp_NameIDMappingRequest_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("NameIDMappingRequest") - 1 + 1 + 2 + sizeof("NameIDMappingRequest") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ID, sizeof("ID"));
  len += zx_attr_len(x->Version, sizeof("Version"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->Destination, sizeof("Destination"));
  len += zx_attr_len(x->Consent, sizeof("Consent"));

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  len += zx_LEN_sa_Issuer(e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  len += zx_LEN_sp_Extensions(e);
  }
  {
      struct zx_sa_BaseID_s* e;
      for (e = x->BaseID; e; e = (struct zx_sa_BaseID_s*)e->gg.g.n)
	  len += zx_LEN_sa_BaseID(e);
  }
  {
      struct zx_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n)
	  len += zx_LEN_sa_NameID(e);
  }
  {
      struct zx_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n)
	  len += zx_LEN_sa_EncryptedID(e);
  }
  {
      struct zx_sp_NameIDPolicy_s* e;
      for (e = x->NameIDPolicy; e; e = (struct zx_sp_NameIDPolicy_s*)e->gg.g.n)
	  len += zx_LEN_sp_NameIDPolicy(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp_NameIDMappingRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp_NameIDMappingRequest(struct zx_sp_NameIDMappingRequest_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "NameIDMappingRequest", sizeof("NameIDMappingRequest") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);
  p = zx_attr_enc(p, x->Version, "Version", sizeof("Version")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->Destination, "Destination", sizeof("Destination")-1);
  p = zx_attr_enc(p, x->Consent, "Consent", sizeof("Consent")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Issuer(e, p);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Extensions(e, p);
  }
  {
      struct zx_sa_BaseID_s* e;
      for (e = x->BaseID; e; e = (struct zx_sa_BaseID_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_BaseID(e, p);
  }
  {
      struct zx_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_NameID(e, p);
  }
  {
      struct zx_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_EncryptedID(e, p);
  }
  {
      struct zx_sp_NameIDPolicy_s* e;
      for (e = x->NameIDPolicy; e; e = (struct zx_sp_NameIDPolicy_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_NameIDPolicy(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "NameIDMappingRequest", sizeof("NameIDMappingRequest") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp_NameIDMappingRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp_NameIDMappingRequest(struct zx_sp_NameIDMappingRequest_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp_NameIDMappingRequest) */

struct zx_str_s* zx_EASY_ENC_SO_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_sp_NameIDMappingRequest_s* x )
{
  int len = zx_LEN_sp_NameIDMappingRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp_NameIDMappingRequest(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp_NameIDMappingRequest) */

struct zx_str_s* zx_EASY_ENC_WO_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_sp_NameIDMappingRequest_s* x )
{
  int len = zx_LEN_sp_NameIDMappingRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp_NameIDMappingRequest(x, buf ), buf, len);
}




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

#define EL_NAME   sp_NameIDMappingResponse
#define EL_STRUCT zx_sp_NameIDMappingResponse_s
#define EL_NS     sp
#define EL_TAG    NameIDMappingResponse

/* FUNC(zx_LEN_sp_NameIDMappingResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp_NameIDMappingResponse(struct zx_sp_NameIDMappingResponse_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("NameIDMappingResponse") - 1 + 1 + 2 + sizeof("NameIDMappingResponse") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ID, sizeof("ID"));
  len += zx_attr_len(x->InResponseTo, sizeof("InResponseTo"));
  len += zx_attr_len(x->Version, sizeof("Version"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->Destination, sizeof("Destination"));
  len += zx_attr_len(x->Consent, sizeof("Consent"));

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  len += zx_LEN_sa_Issuer(e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  len += zx_LEN_sp_Extensions(e);
  }
  {
      struct zx_sp_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp_Status_s*)e->gg.g.n)
	  len += zx_LEN_sp_Status(e);
  }
  {
      struct zx_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n)
	  len += zx_LEN_sa_NameID(e);
  }
  {
      struct zx_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n)
	  len += zx_LEN_sa_EncryptedID(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp_NameIDMappingResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp_NameIDMappingResponse(struct zx_sp_NameIDMappingResponse_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "NameIDMappingResponse", sizeof("NameIDMappingResponse") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);
  p = zx_attr_enc(p, x->InResponseTo, "InResponseTo", sizeof("InResponseTo")-1);
  p = zx_attr_enc(p, x->Version, "Version", sizeof("Version")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->Destination, "Destination", sizeof("Destination")-1);
  p = zx_attr_enc(p, x->Consent, "Consent", sizeof("Consent")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Issuer(e, p);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Extensions(e, p);
  }
  {
      struct zx_sp_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp_Status_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Status(e, p);
  }
  {
      struct zx_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_NameID(e, p);
  }
  {
      struct zx_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_EncryptedID(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "NameIDMappingResponse", sizeof("NameIDMappingResponse") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp_NameIDMappingResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp_NameIDMappingResponse(struct zx_sp_NameIDMappingResponse_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp_NameIDMappingResponse) */

struct zx_str_s* zx_EASY_ENC_SO_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_sp_NameIDMappingResponse_s* x )
{
  int len = zx_LEN_sp_NameIDMappingResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp_NameIDMappingResponse(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp_NameIDMappingResponse) */

struct zx_str_s* zx_EASY_ENC_WO_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_sp_NameIDMappingResponse_s* x )
{
  int len = zx_LEN_sp_NameIDMappingResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp_NameIDMappingResponse(x, buf ), buf, len);
}




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

#define EL_NAME   sp_NameIDPolicy
#define EL_STRUCT zx_sp_NameIDPolicy_s
#define EL_NS     sp
#define EL_TAG    NameIDPolicy

/* FUNC(zx_LEN_sp_NameIDPolicy) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp_NameIDPolicy(struct zx_sp_NameIDPolicy_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("NameIDPolicy") - 1 + 1 + 2 + sizeof("NameIDPolicy") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Format, sizeof("Format"));
  len += zx_attr_len(x->SPNameQualifier, sizeof("SPNameQualifier"));
  len += zx_attr_len(x->AllowCreate, sizeof("AllowCreate"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp_NameIDPolicy) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp_NameIDPolicy(struct zx_sp_NameIDPolicy_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "NameIDPolicy", sizeof("NameIDPolicy") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Format, "Format", sizeof("Format")-1);
  p = zx_attr_enc(p, x->SPNameQualifier, "SPNameQualifier", sizeof("SPNameQualifier")-1);
  p = zx_attr_enc(p, x->AllowCreate, "AllowCreate", sizeof("AllowCreate")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "NameIDPolicy", sizeof("NameIDPolicy") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp_NameIDPolicy) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp_NameIDPolicy(struct zx_sp_NameIDPolicy_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp_NameIDPolicy) */

struct zx_str_s* zx_EASY_ENC_SO_sp_NameIDPolicy(struct zx_ctx* c, struct zx_sp_NameIDPolicy_s* x )
{
  int len = zx_LEN_sp_NameIDPolicy(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp_NameIDPolicy(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp_NameIDPolicy) */

struct zx_str_s* zx_EASY_ENC_WO_sp_NameIDPolicy(struct zx_ctx* c, struct zx_sp_NameIDPolicy_s* x )
{
  int len = zx_LEN_sp_NameIDPolicy(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp_NameIDPolicy(x, buf ), buf, len);
}




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

#define EL_NAME   sp_NewEncryptedID
#define EL_STRUCT zx_sp_NewEncryptedID_s
#define EL_NS     sp
#define EL_TAG    NewEncryptedID

/* FUNC(zx_LEN_sp_NewEncryptedID) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp_NewEncryptedID(struct zx_sp_NewEncryptedID_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("NewEncryptedID") - 1 + 1 + 2 + sizeof("NewEncryptedID") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zx_xenc_EncryptedData_s*)e->gg.g.n)
	  len += zx_LEN_xenc_EncryptedData(e);
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n)
	  len += zx_LEN_xenc_EncryptedKey(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp_NewEncryptedID) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp_NewEncryptedID(struct zx_sp_NewEncryptedID_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "NewEncryptedID", sizeof("NewEncryptedID") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zx_xenc_EncryptedData_s*)e->gg.g.n)
	  p = zx_ENC_SO_xenc_EncryptedData(e, p);
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n)
	  p = zx_ENC_SO_xenc_EncryptedKey(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "NewEncryptedID", sizeof("NewEncryptedID") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp_NewEncryptedID) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp_NewEncryptedID(struct zx_sp_NewEncryptedID_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp_NewEncryptedID) */

struct zx_str_s* zx_EASY_ENC_SO_sp_NewEncryptedID(struct zx_ctx* c, struct zx_sp_NewEncryptedID_s* x )
{
  int len = zx_LEN_sp_NewEncryptedID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp_NewEncryptedID(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp_NewEncryptedID) */

struct zx_str_s* zx_EASY_ENC_WO_sp_NewEncryptedID(struct zx_ctx* c, struct zx_sp_NewEncryptedID_s* x )
{
  int len = zx_LEN_sp_NewEncryptedID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp_NewEncryptedID(x, buf ), buf, len);
}




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

#define EL_NAME   sp_RequestedAuthnContext
#define EL_STRUCT zx_sp_RequestedAuthnContext_s
#define EL_NS     sp
#define EL_TAG    RequestedAuthnContext

/* FUNC(zx_LEN_sp_RequestedAuthnContext) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp_RequestedAuthnContext(struct zx_sp_RequestedAuthnContext_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("RequestedAuthnContext") - 1 + 1 + 2 + sizeof("RequestedAuthnContext") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Comparison, sizeof("Comparison"));

  for (se = x->AuthnContextClassRef; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AuthnContextClassRef") - 1);
  for (se = x->AuthnContextDeclRef; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("AuthnContextDeclRef") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp_RequestedAuthnContext) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp_RequestedAuthnContext(struct zx_sp_RequestedAuthnContext_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RequestedAuthnContext", sizeof("RequestedAuthnContext") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Comparison, "Comparison", sizeof("Comparison")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->AuthnContextClassRef; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AuthnContextClassRef", sizeof("AuthnContextClassRef") - 1);
  for (se = x->AuthnContextDeclRef; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "AuthnContextDeclRef", sizeof("AuthnContextDeclRef") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RequestedAuthnContext", sizeof("RequestedAuthnContext") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp_RequestedAuthnContext) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp_RequestedAuthnContext(struct zx_sp_RequestedAuthnContext_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp_RequestedAuthnContext) */

struct zx_str_s* zx_EASY_ENC_SO_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_sp_RequestedAuthnContext_s* x )
{
  int len = zx_LEN_sp_RequestedAuthnContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp_RequestedAuthnContext(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp_RequestedAuthnContext) */

struct zx_str_s* zx_EASY_ENC_WO_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_sp_RequestedAuthnContext_s* x )
{
  int len = zx_LEN_sp_RequestedAuthnContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp_RequestedAuthnContext(x, buf ), buf, len);
}




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

#define EL_NAME   sp_Response
#define EL_STRUCT zx_sp_Response_s
#define EL_NS     sp
#define EL_TAG    Response

/* FUNC(zx_LEN_sp_Response) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp_Response(struct zx_sp_Response_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Response") - 1 + 1 + 2 + sizeof("Response") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ID, sizeof("ID"));
  len += zx_attr_len(x->InResponseTo, sizeof("InResponseTo"));
  len += zx_attr_len(x->Version, sizeof("Version"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->Destination, sizeof("Destination"));
  len += zx_attr_len(x->Consent, sizeof("Consent"));

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  len += zx_LEN_sa_Issuer(e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  len += zx_LEN_sp_Extensions(e);
  }
  {
      struct zx_sp_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp_Status_s*)e->gg.g.n)
	  len += zx_LEN_sp_Status(e);
  }
  {
      struct zx_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n)
	  len += zx_LEN_sa_Assertion(e);
  }
  {
      struct zx_sa_EncryptedAssertion_s* e;
      for (e = x->EncryptedAssertion; e; e = (struct zx_sa_EncryptedAssertion_s*)e->gg.g.n)
	  len += zx_LEN_sa_EncryptedAssertion(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp_Response) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp_Response(struct zx_sp_Response_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Response", sizeof("Response") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);
  p = zx_attr_enc(p, x->InResponseTo, "InResponseTo", sizeof("InResponseTo")-1);
  p = zx_attr_enc(p, x->Version, "Version", sizeof("Version")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->Destination, "Destination", sizeof("Destination")-1);
  p = zx_attr_enc(p, x->Consent, "Consent", sizeof("Consent")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Issuer(e, p);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Extensions(e, p);
  }
  {
      struct zx_sp_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp_Status_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Status(e, p);
  }
  {
      struct zx_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Assertion(e, p);
  }
  {
      struct zx_sa_EncryptedAssertion_s* e;
      for (e = x->EncryptedAssertion; e; e = (struct zx_sa_EncryptedAssertion_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_EncryptedAssertion(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Response", sizeof("Response") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp_Response) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp_Response(struct zx_sp_Response_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp_Response) */

struct zx_str_s* zx_EASY_ENC_SO_sp_Response(struct zx_ctx* c, struct zx_sp_Response_s* x )
{
  int len = zx_LEN_sp_Response(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp_Response(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp_Response) */

struct zx_str_s* zx_EASY_ENC_WO_sp_Response(struct zx_ctx* c, struct zx_sp_Response_s* x )
{
  int len = zx_LEN_sp_Response(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp_Response(x, buf ), buf, len);
}




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

#define EL_NAME   sp_Scoping
#define EL_STRUCT zx_sp_Scoping_s
#define EL_NS     sp
#define EL_TAG    Scoping

/* FUNC(zx_LEN_sp_Scoping) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp_Scoping(struct zx_sp_Scoping_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Scoping") - 1 + 1 + 2 + sizeof("Scoping") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ProxyCount, sizeof("ProxyCount"));

  {
      struct zx_sp_IDPList_s* e;
      for (e = x->IDPList; e; e = (struct zx_sp_IDPList_s*)e->gg.g.n)
	  len += zx_LEN_sp_IDPList(e);
  }
  for (se = x->RequesterID; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("RequesterID") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp_Scoping) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp_Scoping(struct zx_sp_Scoping_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Scoping", sizeof("Scoping") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ProxyCount, "ProxyCount", sizeof("ProxyCount")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sp_IDPList_s* e;
      for (e = x->IDPList; e; e = (struct zx_sp_IDPList_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_IDPList(e, p);
  }
  for (se = x->RequesterID; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "RequesterID", sizeof("RequesterID") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Scoping", sizeof("Scoping") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp_Scoping) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp_Scoping(struct zx_sp_Scoping_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp_Scoping) */

struct zx_str_s* zx_EASY_ENC_SO_sp_Scoping(struct zx_ctx* c, struct zx_sp_Scoping_s* x )
{
  int len = zx_LEN_sp_Scoping(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp_Scoping(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp_Scoping) */

struct zx_str_s* zx_EASY_ENC_WO_sp_Scoping(struct zx_ctx* c, struct zx_sp_Scoping_s* x )
{
  int len = zx_LEN_sp_Scoping(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp_Scoping(x, buf ), buf, len);
}




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

#define EL_NAME   sp_Status
#define EL_STRUCT zx_sp_Status_s
#define EL_NS     sp
#define EL_TAG    Status

/* FUNC(zx_LEN_sp_Status) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp_Status(struct zx_sp_Status_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Status") - 1 + 1 + 2 + sizeof("Status") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sp_StatusCode_s* e;
      for (e = x->StatusCode; e; e = (struct zx_sp_StatusCode_s*)e->gg.g.n)
	  len += zx_LEN_sp_StatusCode(e);
  }
  for (se = x->StatusMessage; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("StatusMessage") - 1);
  {
      struct zx_sp_StatusDetail_s* e;
      for (e = x->StatusDetail; e; e = (struct zx_sp_StatusDetail_s*)e->gg.g.n)
	  len += zx_LEN_sp_StatusDetail(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp_Status) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp_Status(struct zx_sp_Status_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Status", sizeof("Status") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sp_StatusCode_s* e;
      for (e = x->StatusCode; e; e = (struct zx_sp_StatusCode_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_StatusCode(e, p);
  }
  for (se = x->StatusMessage; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "StatusMessage", sizeof("StatusMessage") - 1);
  {
      struct zx_sp_StatusDetail_s* e;
      for (e = x->StatusDetail; e; e = (struct zx_sp_StatusDetail_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_StatusDetail(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Status", sizeof("Status") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp_Status) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp_Status(struct zx_sp_Status_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp_Status) */

struct zx_str_s* zx_EASY_ENC_SO_sp_Status(struct zx_ctx* c, struct zx_sp_Status_s* x )
{
  int len = zx_LEN_sp_Status(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp_Status(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp_Status) */

struct zx_str_s* zx_EASY_ENC_WO_sp_Status(struct zx_ctx* c, struct zx_sp_Status_s* x )
{
  int len = zx_LEN_sp_Status(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp_Status(x, buf ), buf, len);
}




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

#define EL_NAME   sp_StatusCode
#define EL_STRUCT zx_sp_StatusCode_s
#define EL_NS     sp
#define EL_TAG    StatusCode

/* FUNC(zx_LEN_sp_StatusCode) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp_StatusCode(struct zx_sp_StatusCode_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("StatusCode") - 1 + 1 + 2 + sizeof("StatusCode") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Value, sizeof("Value"));

  {
      struct zx_sp_StatusCode_s* e;
      for (e = x->StatusCode; e; e = (struct zx_sp_StatusCode_s*)e->gg.g.n)
	  len += zx_LEN_sp_StatusCode(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp_StatusCode) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp_StatusCode(struct zx_sp_StatusCode_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "StatusCode", sizeof("StatusCode") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Value, "Value", sizeof("Value")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sp_StatusCode_s* e;
      for (e = x->StatusCode; e; e = (struct zx_sp_StatusCode_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_StatusCode(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "StatusCode", sizeof("StatusCode") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp_StatusCode) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp_StatusCode(struct zx_sp_StatusCode_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp_StatusCode) */

struct zx_str_s* zx_EASY_ENC_SO_sp_StatusCode(struct zx_ctx* c, struct zx_sp_StatusCode_s* x )
{
  int len = zx_LEN_sp_StatusCode(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp_StatusCode(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp_StatusCode) */

struct zx_str_s* zx_EASY_ENC_WO_sp_StatusCode(struct zx_ctx* c, struct zx_sp_StatusCode_s* x )
{
  int len = zx_LEN_sp_StatusCode(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp_StatusCode(x, buf ), buf, len);
}




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

#define EL_NAME   sp_StatusDetail
#define EL_STRUCT zx_sp_StatusDetail_s
#define EL_NS     sp
#define EL_TAG    StatusDetail

/* FUNC(zx_LEN_sp_StatusDetail) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp_StatusDetail(struct zx_sp_StatusDetail_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("StatusDetail") - 1 + 1 + 2 + sizeof("StatusDetail") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */




  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp_StatusDetail) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp_StatusDetail(struct zx_sp_StatusDetail_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "StatusDetail", sizeof("StatusDetail") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "StatusDetail", sizeof("StatusDetail") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp_StatusDetail) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp_StatusDetail(struct zx_sp_StatusDetail_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp_StatusDetail) */

struct zx_str_s* zx_EASY_ENC_SO_sp_StatusDetail(struct zx_ctx* c, struct zx_sp_StatusDetail_s* x )
{
  int len = zx_LEN_sp_StatusDetail(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp_StatusDetail(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp_StatusDetail) */

struct zx_str_s* zx_EASY_ENC_WO_sp_StatusDetail(struct zx_ctx* c, struct zx_sp_StatusDetail_s* x )
{
  int len = zx_LEN_sp_StatusDetail(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp_StatusDetail(x, buf ), buf, len);
}




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

#define EL_NAME   sp_SubjectQuery
#define EL_STRUCT zx_sp_SubjectQuery_s
#define EL_NS     sp
#define EL_TAG    SubjectQuery

/* FUNC(zx_LEN_sp_SubjectQuery) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_sp_SubjectQuery(struct zx_sp_SubjectQuery_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SubjectQuery") - 1 + 1 + 2 + sizeof("SubjectQuery") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ID, sizeof("ID"));
  len += zx_attr_len(x->Version, sizeof("Version"));
  len += zx_attr_len(x->IssueInstant, sizeof("IssueInstant"));
  len += zx_attr_len(x->Destination, sizeof("Destination"));
  len += zx_attr_len(x->Consent, sizeof("Consent"));

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  len += zx_LEN_sa_Issuer(e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  len += zx_LEN_ds_Signature(e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  len += zx_LEN_sp_Extensions(e);
  }
  {
      struct zx_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n)
	  len += zx_LEN_sa_Subject(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_sp_SubjectQuery) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_sp_SubjectQuery(struct zx_sp_SubjectQuery_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SubjectQuery", sizeof("SubjectQuery") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);
  p = zx_attr_enc(p, x->Version, "Version", sizeof("Version")-1);
  p = zx_attr_enc(p, x->IssueInstant, "IssueInstant", sizeof("IssueInstant")-1);
  p = zx_attr_enc(p, x->Destination, "Destination", sizeof("Destination")-1);
  p = zx_attr_enc(p, x->Consent, "Consent", sizeof("Consent")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Issuer(e, p);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Extensions(e, p);
  }
  {
      struct zx_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Subject(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SubjectQuery", sizeof("SubjectQuery") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_sp_SubjectQuery) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_sp_SubjectQuery(struct zx_sp_SubjectQuery_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_sp_SubjectQuery) */

struct zx_str_s* zx_EASY_ENC_SO_sp_SubjectQuery(struct zx_ctx* c, struct zx_sp_SubjectQuery_s* x )
{
  int len = zx_LEN_sp_SubjectQuery(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sp_SubjectQuery(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sp_SubjectQuery) */

struct zx_str_s* zx_EASY_ENC_WO_sp_SubjectQuery(struct zx_ctx* c, struct zx_sp_SubjectQuery_s* x )
{
  int len = zx_LEN_sp_SubjectQuery(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sp_SubjectQuery(x, buf ), buf, len);
}




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

#define EL_NAME   xenc_AgreementMethod
#define EL_STRUCT zx_xenc_AgreementMethod_s
#define EL_NS     xenc
#define EL_TAG    AgreementMethod

/* FUNC(zx_LEN_xenc_AgreementMethod) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_xenc_AgreementMethod(struct zx_xenc_AgreementMethod_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AgreementMethod") - 1 + 1 + 2 + sizeof("AgreementMethod") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Algorithm, sizeof("Algorithm"));

  for (se = x->KA_Nonce; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("KA_Nonce") - 1);
  {
      struct zx_xenc_OriginatorKeyInfo_s* e;
      for (e = x->OriginatorKeyInfo; e; e = (struct zx_xenc_OriginatorKeyInfo_s*)e->gg.g.n)
	  len += zx_LEN_xenc_OriginatorKeyInfo(e);
  }
  {
      struct zx_xenc_RecipientKeyInfo_s* e;
      for (e = x->RecipientKeyInfo; e; e = (struct zx_xenc_RecipientKeyInfo_s*)e->gg.g.n)
	  len += zx_LEN_xenc_RecipientKeyInfo(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_xenc_AgreementMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_xenc_AgreementMethod(struct zx_xenc_AgreementMethod_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AgreementMethod", sizeof("AgreementMethod") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Algorithm, "Algorithm", sizeof("Algorithm")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->KA_Nonce; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "KA_Nonce", sizeof("KA_Nonce") - 1);
  {
      struct zx_xenc_OriginatorKeyInfo_s* e;
      for (e = x->OriginatorKeyInfo; e; e = (struct zx_xenc_OriginatorKeyInfo_s*)e->gg.g.n)
	  p = zx_ENC_SO_xenc_OriginatorKeyInfo(e, p);
  }
  {
      struct zx_xenc_RecipientKeyInfo_s* e;
      for (e = x->RecipientKeyInfo; e; e = (struct zx_xenc_RecipientKeyInfo_s*)e->gg.g.n)
	  p = zx_ENC_SO_xenc_RecipientKeyInfo(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AgreementMethod", sizeof("AgreementMethod") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_xenc_AgreementMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_xenc_AgreementMethod(struct zx_xenc_AgreementMethod_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_xenc_AgreementMethod) */

struct zx_str_s* zx_EASY_ENC_SO_xenc_AgreementMethod(struct zx_ctx* c, struct zx_xenc_AgreementMethod_s* x )
{
  int len = zx_LEN_xenc_AgreementMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_xenc_AgreementMethod(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_xenc_AgreementMethod) */

struct zx_str_s* zx_EASY_ENC_WO_xenc_AgreementMethod(struct zx_ctx* c, struct zx_xenc_AgreementMethod_s* x )
{
  int len = zx_LEN_xenc_AgreementMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_xenc_AgreementMethod(x, buf ), buf, len);
}




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

#define EL_NAME   xenc_CipherData
#define EL_STRUCT zx_xenc_CipherData_s
#define EL_NS     xenc
#define EL_TAG    CipherData

/* FUNC(zx_LEN_xenc_CipherData) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_xenc_CipherData(struct zx_xenc_CipherData_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("CipherData") - 1 + 1 + 2 + sizeof("CipherData") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->CipherValue; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("CipherValue") - 1);
  {
      struct zx_xenc_CipherReference_s* e;
      for (e = x->CipherReference; e; e = (struct zx_xenc_CipherReference_s*)e->gg.g.n)
	  len += zx_LEN_xenc_CipherReference(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_xenc_CipherData) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_xenc_CipherData(struct zx_xenc_CipherData_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "CipherData", sizeof("CipherData") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->CipherValue; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "CipherValue", sizeof("CipherValue") - 1);
  {
      struct zx_xenc_CipherReference_s* e;
      for (e = x->CipherReference; e; e = (struct zx_xenc_CipherReference_s*)e->gg.g.n)
	  p = zx_ENC_SO_xenc_CipherReference(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "CipherData", sizeof("CipherData") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_xenc_CipherData) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_xenc_CipherData(struct zx_xenc_CipherData_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_xenc_CipherData) */

struct zx_str_s* zx_EASY_ENC_SO_xenc_CipherData(struct zx_ctx* c, struct zx_xenc_CipherData_s* x )
{
  int len = zx_LEN_xenc_CipherData(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_xenc_CipherData(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_xenc_CipherData) */

struct zx_str_s* zx_EASY_ENC_WO_xenc_CipherData(struct zx_ctx* c, struct zx_xenc_CipherData_s* x )
{
  int len = zx_LEN_xenc_CipherData(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_xenc_CipherData(x, buf ), buf, len);
}




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

#define EL_NAME   xenc_CipherReference
#define EL_STRUCT zx_xenc_CipherReference_s
#define EL_NS     xenc
#define EL_TAG    CipherReference

/* FUNC(zx_LEN_xenc_CipherReference) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_xenc_CipherReference(struct zx_xenc_CipherReference_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("CipherReference") - 1 + 1 + 2 + sizeof("CipherReference") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->URI, sizeof("URI"));

  {
      struct zx_xenc_Transforms_s* e;
      for (e = x->Transforms; e; e = (struct zx_xenc_Transforms_s*)e->gg.g.n)
	  len += zx_LEN_xenc_Transforms(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_xenc_CipherReference) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_xenc_CipherReference(struct zx_xenc_CipherReference_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "CipherReference", sizeof("CipherReference") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->URI, "URI", sizeof("URI")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_xenc_Transforms_s* e;
      for (e = x->Transforms; e; e = (struct zx_xenc_Transforms_s*)e->gg.g.n)
	  p = zx_ENC_SO_xenc_Transforms(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "CipherReference", sizeof("CipherReference") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_xenc_CipherReference) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_xenc_CipherReference(struct zx_xenc_CipherReference_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_xenc_CipherReference) */

struct zx_str_s* zx_EASY_ENC_SO_xenc_CipherReference(struct zx_ctx* c, struct zx_xenc_CipherReference_s* x )
{
  int len = zx_LEN_xenc_CipherReference(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_xenc_CipherReference(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_xenc_CipherReference) */

struct zx_str_s* zx_EASY_ENC_WO_xenc_CipherReference(struct zx_ctx* c, struct zx_xenc_CipherReference_s* x )
{
  int len = zx_LEN_xenc_CipherReference(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_xenc_CipherReference(x, buf ), buf, len);
}




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

#define EL_NAME   xenc_DataReference
#define EL_STRUCT zx_xenc_DataReference_s
#define EL_NS     xenc
#define EL_TAG    DataReference

/* FUNC(zx_LEN_xenc_DataReference) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_xenc_DataReference(struct zx_xenc_DataReference_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("DataReference") - 1 + 1 + 2 + sizeof("DataReference") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->URI, sizeof("URI"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_xenc_DataReference) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_xenc_DataReference(struct zx_xenc_DataReference_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "DataReference", sizeof("DataReference") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->URI, "URI", sizeof("URI")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "DataReference", sizeof("DataReference") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_xenc_DataReference) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_xenc_DataReference(struct zx_xenc_DataReference_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_xenc_DataReference) */

struct zx_str_s* zx_EASY_ENC_SO_xenc_DataReference(struct zx_ctx* c, struct zx_xenc_DataReference_s* x )
{
  int len = zx_LEN_xenc_DataReference(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_xenc_DataReference(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_xenc_DataReference) */

struct zx_str_s* zx_EASY_ENC_WO_xenc_DataReference(struct zx_ctx* c, struct zx_xenc_DataReference_s* x )
{
  int len = zx_LEN_xenc_DataReference(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_xenc_DataReference(x, buf ), buf, len);
}




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

#define EL_NAME   xenc_EncryptedData
#define EL_STRUCT zx_xenc_EncryptedData_s
#define EL_NS     xenc
#define EL_TAG    EncryptedData

/* FUNC(zx_LEN_xenc_EncryptedData) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_xenc_EncryptedData(struct zx_xenc_EncryptedData_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("EncryptedData") - 1 + 1 + 2 + sizeof("EncryptedData") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Id, sizeof("Id"));
  len += zx_attr_len(x->Type, sizeof("Type"));
  len += zx_attr_len(x->MimeType, sizeof("MimeType"));
  len += zx_attr_len(x->Encoding, sizeof("Encoding"));

  {
      struct zx_xenc_EncryptionMethod_s* e;
      for (e = x->EncryptionMethod; e; e = (struct zx_xenc_EncryptionMethod_s*)e->gg.g.n)
	  len += zx_LEN_xenc_EncryptionMethod(e);
  }
  {
      struct zx_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n)
	  len += zx_LEN_ds_KeyInfo(e);
  }
  {
      struct zx_xenc_CipherData_s* e;
      for (e = x->CipherData; e; e = (struct zx_xenc_CipherData_s*)e->gg.g.n)
	  len += zx_LEN_xenc_CipherData(e);
  }
  {
      struct zx_xenc_EncryptionProperties_s* e;
      for (e = x->EncryptionProperties; e; e = (struct zx_xenc_EncryptionProperties_s*)e->gg.g.n)
	  len += zx_LEN_xenc_EncryptionProperties(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_xenc_EncryptedData) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_xenc_EncryptedData(struct zx_xenc_EncryptedData_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EncryptedData", sizeof("EncryptedData") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Id, "Id", sizeof("Id")-1);
  p = zx_attr_enc(p, x->Type, "Type", sizeof("Type")-1);
  p = zx_attr_enc(p, x->MimeType, "MimeType", sizeof("MimeType")-1);
  p = zx_attr_enc(p, x->Encoding, "Encoding", sizeof("Encoding")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_xenc_EncryptionMethod_s* e;
      for (e = x->EncryptionMethod; e; e = (struct zx_xenc_EncryptionMethod_s*)e->gg.g.n)
	  p = zx_ENC_SO_xenc_EncryptionMethod(e, p);
  }
  {
      struct zx_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_KeyInfo(e, p);
  }
  {
      struct zx_xenc_CipherData_s* e;
      for (e = x->CipherData; e; e = (struct zx_xenc_CipherData_s*)e->gg.g.n)
	  p = zx_ENC_SO_xenc_CipherData(e, p);
  }
  {
      struct zx_xenc_EncryptionProperties_s* e;
      for (e = x->EncryptionProperties; e; e = (struct zx_xenc_EncryptionProperties_s*)e->gg.g.n)
	  p = zx_ENC_SO_xenc_EncryptionProperties(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EncryptedData", sizeof("EncryptedData") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_xenc_EncryptedData) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_xenc_EncryptedData(struct zx_xenc_EncryptedData_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_xenc_EncryptedData) */

struct zx_str_s* zx_EASY_ENC_SO_xenc_EncryptedData(struct zx_ctx* c, struct zx_xenc_EncryptedData_s* x )
{
  int len = zx_LEN_xenc_EncryptedData(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_xenc_EncryptedData(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_xenc_EncryptedData) */

struct zx_str_s* zx_EASY_ENC_WO_xenc_EncryptedData(struct zx_ctx* c, struct zx_xenc_EncryptedData_s* x )
{
  int len = zx_LEN_xenc_EncryptedData(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_xenc_EncryptedData(x, buf ), buf, len);
}




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

#define EL_NAME   xenc_EncryptedKey
#define EL_STRUCT zx_xenc_EncryptedKey_s
#define EL_NS     xenc
#define EL_TAG    EncryptedKey

/* FUNC(zx_LEN_xenc_EncryptedKey) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_xenc_EncryptedKey(struct zx_xenc_EncryptedKey_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("EncryptedKey") - 1 + 1 + 2 + sizeof("EncryptedKey") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Id, sizeof("Id"));
  len += zx_attr_len(x->Type, sizeof("Type"));
  len += zx_attr_len(x->MimeType, sizeof("MimeType"));
  len += zx_attr_len(x->Encoding, sizeof("Encoding"));
  len += zx_attr_len(x->Recipient, sizeof("Recipient"));

  {
      struct zx_xenc_EncryptionMethod_s* e;
      for (e = x->EncryptionMethod; e; e = (struct zx_xenc_EncryptionMethod_s*)e->gg.g.n)
	  len += zx_LEN_xenc_EncryptionMethod(e);
  }
  {
      struct zx_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n)
	  len += zx_LEN_ds_KeyInfo(e);
  }
  {
      struct zx_xenc_CipherData_s* e;
      for (e = x->CipherData; e; e = (struct zx_xenc_CipherData_s*)e->gg.g.n)
	  len += zx_LEN_xenc_CipherData(e);
  }
  {
      struct zx_xenc_EncryptionProperties_s* e;
      for (e = x->EncryptionProperties; e; e = (struct zx_xenc_EncryptionProperties_s*)e->gg.g.n)
	  len += zx_LEN_xenc_EncryptionProperties(e);
  }
  {
      struct zx_xenc_ReferenceList_s* e;
      for (e = x->ReferenceList; e; e = (struct zx_xenc_ReferenceList_s*)e->gg.g.n)
	  len += zx_LEN_xenc_ReferenceList(e);
  }
  for (se = x->CarriedKeyName; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("CarriedKeyName") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_xenc_EncryptedKey) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_xenc_EncryptedKey(struct zx_xenc_EncryptedKey_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EncryptedKey", sizeof("EncryptedKey") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Id, "Id", sizeof("Id")-1);
  p = zx_attr_enc(p, x->Type, "Type", sizeof("Type")-1);
  p = zx_attr_enc(p, x->MimeType, "MimeType", sizeof("MimeType")-1);
  p = zx_attr_enc(p, x->Encoding, "Encoding", sizeof("Encoding")-1);
  p = zx_attr_enc(p, x->Recipient, "Recipient", sizeof("Recipient")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_xenc_EncryptionMethod_s* e;
      for (e = x->EncryptionMethod; e; e = (struct zx_xenc_EncryptionMethod_s*)e->gg.g.n)
	  p = zx_ENC_SO_xenc_EncryptionMethod(e, p);
  }
  {
      struct zx_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_KeyInfo(e, p);
  }
  {
      struct zx_xenc_CipherData_s* e;
      for (e = x->CipherData; e; e = (struct zx_xenc_CipherData_s*)e->gg.g.n)
	  p = zx_ENC_SO_xenc_CipherData(e, p);
  }
  {
      struct zx_xenc_EncryptionProperties_s* e;
      for (e = x->EncryptionProperties; e; e = (struct zx_xenc_EncryptionProperties_s*)e->gg.g.n)
	  p = zx_ENC_SO_xenc_EncryptionProperties(e, p);
  }
  {
      struct zx_xenc_ReferenceList_s* e;
      for (e = x->ReferenceList; e; e = (struct zx_xenc_ReferenceList_s*)e->gg.g.n)
	  p = zx_ENC_SO_xenc_ReferenceList(e, p);
  }
  for (se = x->CarriedKeyName; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "CarriedKeyName", sizeof("CarriedKeyName") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EncryptedKey", sizeof("EncryptedKey") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_xenc_EncryptedKey) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_xenc_EncryptedKey(struct zx_xenc_EncryptedKey_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_xenc_EncryptedKey) */

struct zx_str_s* zx_EASY_ENC_SO_xenc_EncryptedKey(struct zx_ctx* c, struct zx_xenc_EncryptedKey_s* x )
{
  int len = zx_LEN_xenc_EncryptedKey(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_xenc_EncryptedKey(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_xenc_EncryptedKey) */

struct zx_str_s* zx_EASY_ENC_WO_xenc_EncryptedKey(struct zx_ctx* c, struct zx_xenc_EncryptedKey_s* x )
{
  int len = zx_LEN_xenc_EncryptedKey(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_xenc_EncryptedKey(x, buf ), buf, len);
}




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

#define EL_NAME   xenc_EncryptionMethod
#define EL_STRUCT zx_xenc_EncryptionMethod_s
#define EL_NS     xenc
#define EL_TAG    EncryptionMethod

/* FUNC(zx_LEN_xenc_EncryptionMethod) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_xenc_EncryptionMethod(struct zx_xenc_EncryptionMethod_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("EncryptionMethod") - 1 + 1 + 2 + sizeof("EncryptionMethod") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Algorithm, sizeof("Algorithm"));

  for (se = x->KeySize; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("KeySize") - 1);
  for (se = x->OAEPparams; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("OAEPparams") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_xenc_EncryptionMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_xenc_EncryptionMethod(struct zx_xenc_EncryptionMethod_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EncryptionMethod", sizeof("EncryptionMethod") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Algorithm, "Algorithm", sizeof("Algorithm")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->KeySize; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "KeySize", sizeof("KeySize") - 1);
  for (se = x->OAEPparams; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "OAEPparams", sizeof("OAEPparams") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EncryptionMethod", sizeof("EncryptionMethod") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_xenc_EncryptionMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_xenc_EncryptionMethod(struct zx_xenc_EncryptionMethod_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_xenc_EncryptionMethod) */

struct zx_str_s* zx_EASY_ENC_SO_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_xenc_EncryptionMethod_s* x )
{
  int len = zx_LEN_xenc_EncryptionMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_xenc_EncryptionMethod(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_xenc_EncryptionMethod) */

struct zx_str_s* zx_EASY_ENC_WO_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_xenc_EncryptionMethod_s* x )
{
  int len = zx_LEN_xenc_EncryptionMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_xenc_EncryptionMethod(x, buf ), buf, len);
}




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

#define EL_NAME   xenc_EncryptionProperties
#define EL_STRUCT zx_xenc_EncryptionProperties_s
#define EL_NS     xenc
#define EL_TAG    EncryptionProperties

/* FUNC(zx_LEN_xenc_EncryptionProperties) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_xenc_EncryptionProperties(struct zx_xenc_EncryptionProperties_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("EncryptionProperties") - 1 + 1 + 2 + sizeof("EncryptionProperties") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Id, sizeof("Id"));

  {
      struct zx_xenc_EncryptionProperty_s* e;
      for (e = x->EncryptionProperty; e; e = (struct zx_xenc_EncryptionProperty_s*)e->gg.g.n)
	  len += zx_LEN_xenc_EncryptionProperty(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_xenc_EncryptionProperties) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_xenc_EncryptionProperties(struct zx_xenc_EncryptionProperties_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EncryptionProperties", sizeof("EncryptionProperties") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Id, "Id", sizeof("Id")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_xenc_EncryptionProperty_s* e;
      for (e = x->EncryptionProperty; e; e = (struct zx_xenc_EncryptionProperty_s*)e->gg.g.n)
	  p = zx_ENC_SO_xenc_EncryptionProperty(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EncryptionProperties", sizeof("EncryptionProperties") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_xenc_EncryptionProperties) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_xenc_EncryptionProperties(struct zx_xenc_EncryptionProperties_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_xenc_EncryptionProperties) */

struct zx_str_s* zx_EASY_ENC_SO_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_xenc_EncryptionProperties_s* x )
{
  int len = zx_LEN_xenc_EncryptionProperties(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_xenc_EncryptionProperties(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_xenc_EncryptionProperties) */

struct zx_str_s* zx_EASY_ENC_WO_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_xenc_EncryptionProperties_s* x )
{
  int len = zx_LEN_xenc_EncryptionProperties(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_xenc_EncryptionProperties(x, buf ), buf, len);
}




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

#define EL_NAME   xenc_EncryptionProperty
#define EL_STRUCT zx_xenc_EncryptionProperty_s
#define EL_NS     xenc
#define EL_TAG    EncryptionProperty

/* FUNC(zx_LEN_xenc_EncryptionProperty) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_xenc_EncryptionProperty(struct zx_xenc_EncryptionProperty_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("EncryptionProperty") - 1 + 1 + 2 + sizeof("EncryptionProperty") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Target, sizeof("Target"));
  len += zx_attr_len(x->Id, sizeof("Id"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_xenc_EncryptionProperty) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_xenc_EncryptionProperty(struct zx_xenc_EncryptionProperty_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EncryptionProperty", sizeof("EncryptionProperty") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Target, "Target", sizeof("Target")-1);
  p = zx_attr_enc(p, x->Id, "Id", sizeof("Id")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EncryptionProperty", sizeof("EncryptionProperty") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_xenc_EncryptionProperty) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_xenc_EncryptionProperty(struct zx_xenc_EncryptionProperty_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_xenc_EncryptionProperty) */

struct zx_str_s* zx_EASY_ENC_SO_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_xenc_EncryptionProperty_s* x )
{
  int len = zx_LEN_xenc_EncryptionProperty(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_xenc_EncryptionProperty(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_xenc_EncryptionProperty) */

struct zx_str_s* zx_EASY_ENC_WO_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_xenc_EncryptionProperty_s* x )
{
  int len = zx_LEN_xenc_EncryptionProperty(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_xenc_EncryptionProperty(x, buf ), buf, len);
}




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

#define EL_NAME   xenc_KeyReference
#define EL_STRUCT zx_xenc_KeyReference_s
#define EL_NS     xenc
#define EL_TAG    KeyReference

/* FUNC(zx_LEN_xenc_KeyReference) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_xenc_KeyReference(struct zx_xenc_KeyReference_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("KeyReference") - 1 + 1 + 2 + sizeof("KeyReference") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->URI, sizeof("URI"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_xenc_KeyReference) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_xenc_KeyReference(struct zx_xenc_KeyReference_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "KeyReference", sizeof("KeyReference") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->URI, "URI", sizeof("URI")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "KeyReference", sizeof("KeyReference") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_xenc_KeyReference) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_xenc_KeyReference(struct zx_xenc_KeyReference_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_xenc_KeyReference) */

struct zx_str_s* zx_EASY_ENC_SO_xenc_KeyReference(struct zx_ctx* c, struct zx_xenc_KeyReference_s* x )
{
  int len = zx_LEN_xenc_KeyReference(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_xenc_KeyReference(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_xenc_KeyReference) */

struct zx_str_s* zx_EASY_ENC_WO_xenc_KeyReference(struct zx_ctx* c, struct zx_xenc_KeyReference_s* x )
{
  int len = zx_LEN_xenc_KeyReference(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_xenc_KeyReference(x, buf ), buf, len);
}




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

#define EL_NAME   xenc_OriginatorKeyInfo
#define EL_STRUCT zx_xenc_OriginatorKeyInfo_s
#define EL_NS     xenc
#define EL_TAG    OriginatorKeyInfo

/* FUNC(zx_LEN_xenc_OriginatorKeyInfo) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_xenc_OriginatorKeyInfo(struct zx_xenc_OriginatorKeyInfo_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("OriginatorKeyInfo") - 1 + 1 + 2 + sizeof("OriginatorKeyInfo") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Id, sizeof("Id"));

  for (se = x->KeyName; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("KeyName") - 1);
  {
      struct zx_ds_KeyValue_s* e;
      for (e = x->KeyValue; e; e = (struct zx_ds_KeyValue_s*)e->gg.g.n)
	  len += zx_LEN_ds_KeyValue(e);
  }
  {
      struct zx_ds_RetrievalMethod_s* e;
      for (e = x->RetrievalMethod; e; e = (struct zx_ds_RetrievalMethod_s*)e->gg.g.n)
	  len += zx_LEN_ds_RetrievalMethod(e);
  }
  {
      struct zx_ds_X509Data_s* e;
      for (e = x->X509Data; e; e = (struct zx_ds_X509Data_s*)e->gg.g.n)
	  len += zx_LEN_ds_X509Data(e);
  }
  {
      struct zx_ds_PGPData_s* e;
      for (e = x->PGPData; e; e = (struct zx_ds_PGPData_s*)e->gg.g.n)
	  len += zx_LEN_ds_PGPData(e);
  }
  {
      struct zx_ds_SPKIData_s* e;
      for (e = x->SPKIData; e; e = (struct zx_ds_SPKIData_s*)e->gg.g.n)
	  len += zx_LEN_ds_SPKIData(e);
  }
  for (se = x->MgmtData; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("MgmtData") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_xenc_OriginatorKeyInfo) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_xenc_OriginatorKeyInfo(struct zx_xenc_OriginatorKeyInfo_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "OriginatorKeyInfo", sizeof("OriginatorKeyInfo") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Id, "Id", sizeof("Id")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->KeyName; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "KeyName", sizeof("KeyName") - 1);
  {
      struct zx_ds_KeyValue_s* e;
      for (e = x->KeyValue; e; e = (struct zx_ds_KeyValue_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_KeyValue(e, p);
  }
  {
      struct zx_ds_RetrievalMethod_s* e;
      for (e = x->RetrievalMethod; e; e = (struct zx_ds_RetrievalMethod_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_RetrievalMethod(e, p);
  }
  {
      struct zx_ds_X509Data_s* e;
      for (e = x->X509Data; e; e = (struct zx_ds_X509Data_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_X509Data(e, p);
  }
  {
      struct zx_ds_PGPData_s* e;
      for (e = x->PGPData; e; e = (struct zx_ds_PGPData_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_PGPData(e, p);
  }
  {
      struct zx_ds_SPKIData_s* e;
      for (e = x->SPKIData; e; e = (struct zx_ds_SPKIData_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_SPKIData(e, p);
  }
  for (se = x->MgmtData; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "MgmtData", sizeof("MgmtData") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "OriginatorKeyInfo", sizeof("OriginatorKeyInfo") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_xenc_OriginatorKeyInfo) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_xenc_OriginatorKeyInfo(struct zx_xenc_OriginatorKeyInfo_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_xenc_OriginatorKeyInfo) */

struct zx_str_s* zx_EASY_ENC_SO_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_xenc_OriginatorKeyInfo_s* x )
{
  int len = zx_LEN_xenc_OriginatorKeyInfo(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_xenc_OriginatorKeyInfo(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_xenc_OriginatorKeyInfo) */

struct zx_str_s* zx_EASY_ENC_WO_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_xenc_OriginatorKeyInfo_s* x )
{
  int len = zx_LEN_xenc_OriginatorKeyInfo(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_xenc_OriginatorKeyInfo(x, buf ), buf, len);
}




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

#define EL_NAME   xenc_RecipientKeyInfo
#define EL_STRUCT zx_xenc_RecipientKeyInfo_s
#define EL_NS     xenc
#define EL_TAG    RecipientKeyInfo

/* FUNC(zx_LEN_xenc_RecipientKeyInfo) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_xenc_RecipientKeyInfo(struct zx_xenc_RecipientKeyInfo_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("RecipientKeyInfo") - 1 + 1 + 2 + sizeof("RecipientKeyInfo") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Id, sizeof("Id"));

  for (se = x->KeyName; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("KeyName") - 1);
  {
      struct zx_ds_KeyValue_s* e;
      for (e = x->KeyValue; e; e = (struct zx_ds_KeyValue_s*)e->gg.g.n)
	  len += zx_LEN_ds_KeyValue(e);
  }
  {
      struct zx_ds_RetrievalMethod_s* e;
      for (e = x->RetrievalMethod; e; e = (struct zx_ds_RetrievalMethod_s*)e->gg.g.n)
	  len += zx_LEN_ds_RetrievalMethod(e);
  }
  {
      struct zx_ds_X509Data_s* e;
      for (e = x->X509Data; e; e = (struct zx_ds_X509Data_s*)e->gg.g.n)
	  len += zx_LEN_ds_X509Data(e);
  }
  {
      struct zx_ds_PGPData_s* e;
      for (e = x->PGPData; e; e = (struct zx_ds_PGPData_s*)e->gg.g.n)
	  len += zx_LEN_ds_PGPData(e);
  }
  {
      struct zx_ds_SPKIData_s* e;
      for (e = x->SPKIData; e; e = (struct zx_ds_SPKIData_s*)e->gg.g.n)
	  len += zx_LEN_ds_SPKIData(e);
  }
  for (se = x->MgmtData; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_simple_elem(se, sizeof("MgmtData") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_xenc_RecipientKeyInfo) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_xenc_RecipientKeyInfo(struct zx_xenc_RecipientKeyInfo_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RecipientKeyInfo", sizeof("RecipientKeyInfo") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Id, "Id", sizeof("Id")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->KeyName; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "KeyName", sizeof("KeyName") - 1);
  {
      struct zx_ds_KeyValue_s* e;
      for (e = x->KeyValue; e; e = (struct zx_ds_KeyValue_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_KeyValue(e, p);
  }
  {
      struct zx_ds_RetrievalMethod_s* e;
      for (e = x->RetrievalMethod; e; e = (struct zx_ds_RetrievalMethod_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_RetrievalMethod(e, p);
  }
  {
      struct zx_ds_X509Data_s* e;
      for (e = x->X509Data; e; e = (struct zx_ds_X509Data_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_X509Data(e, p);
  }
  {
      struct zx_ds_PGPData_s* e;
      for (e = x->PGPData; e; e = (struct zx_ds_PGPData_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_PGPData(e, p);
  }
  {
      struct zx_ds_SPKIData_s* e;
      for (e = x->SPKIData; e; e = (struct zx_ds_SPKIData_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_SPKIData(e, p);
  }
  for (se = x->MgmtData; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, "MgmtData", sizeof("MgmtData") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RecipientKeyInfo", sizeof("RecipientKeyInfo") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_xenc_RecipientKeyInfo) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_xenc_RecipientKeyInfo(struct zx_xenc_RecipientKeyInfo_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_xenc_RecipientKeyInfo) */

struct zx_str_s* zx_EASY_ENC_SO_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_xenc_RecipientKeyInfo_s* x )
{
  int len = zx_LEN_xenc_RecipientKeyInfo(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_xenc_RecipientKeyInfo(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_xenc_RecipientKeyInfo) */

struct zx_str_s* zx_EASY_ENC_WO_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_xenc_RecipientKeyInfo_s* x )
{
  int len = zx_LEN_xenc_RecipientKeyInfo(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_xenc_RecipientKeyInfo(x, buf ), buf, len);
}




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

#define EL_NAME   xenc_ReferenceList
#define EL_STRUCT zx_xenc_ReferenceList_s
#define EL_NS     xenc
#define EL_TAG    ReferenceList

/* FUNC(zx_LEN_xenc_ReferenceList) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_xenc_ReferenceList(struct zx_xenc_ReferenceList_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ReferenceList") - 1 + 1 + 2 + sizeof("ReferenceList") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xenc_DataReference_s* e;
      for (e = x->DataReference; e; e = (struct zx_xenc_DataReference_s*)e->gg.g.n)
	  len += zx_LEN_xenc_DataReference(e);
  }
  {
      struct zx_xenc_KeyReference_s* e;
      for (e = x->KeyReference; e; e = (struct zx_xenc_KeyReference_s*)e->gg.g.n)
	  len += zx_LEN_xenc_KeyReference(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_xenc_ReferenceList) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_xenc_ReferenceList(struct zx_xenc_ReferenceList_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ReferenceList", sizeof("ReferenceList") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_xenc_DataReference_s* e;
      for (e = x->DataReference; e; e = (struct zx_xenc_DataReference_s*)e->gg.g.n)
	  p = zx_ENC_SO_xenc_DataReference(e, p);
  }
  {
      struct zx_xenc_KeyReference_s* e;
      for (e = x->KeyReference; e; e = (struct zx_xenc_KeyReference_s*)e->gg.g.n)
	  p = zx_ENC_SO_xenc_KeyReference(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ReferenceList", sizeof("ReferenceList") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_xenc_ReferenceList) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_xenc_ReferenceList(struct zx_xenc_ReferenceList_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_xenc_ReferenceList) */

struct zx_str_s* zx_EASY_ENC_SO_xenc_ReferenceList(struct zx_ctx* c, struct zx_xenc_ReferenceList_s* x )
{
  int len = zx_LEN_xenc_ReferenceList(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_xenc_ReferenceList(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_xenc_ReferenceList) */

struct zx_str_s* zx_EASY_ENC_WO_xenc_ReferenceList(struct zx_ctx* c, struct zx_xenc_ReferenceList_s* x )
{
  int len = zx_LEN_xenc_ReferenceList(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_xenc_ReferenceList(x, buf ), buf, len);
}




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

#define EL_NAME   xenc_Transforms
#define EL_STRUCT zx_xenc_Transforms_s
#define EL_NS     xenc
#define EL_TAG    Transforms

/* FUNC(zx_LEN_xenc_Transforms) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_xenc_Transforms(struct zx_xenc_Transforms_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Transforms") - 1 + 1 + 2 + sizeof("Transforms") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ds_Transform_s* e;
      for (e = x->Transform; e; e = (struct zx_ds_Transform_s*)e->gg.g.n)
	  len += zx_LEN_ds_Transform(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_xenc_Transforms) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_xenc_Transforms(struct zx_xenc_Transforms_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Transforms", sizeof("Transforms") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_ds_Transform_s* e;
      for (e = x->Transform; e; e = (struct zx_ds_Transform_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_Transform(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Transforms", sizeof("Transforms") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_xenc_Transforms) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_xenc_Transforms(struct zx_xenc_Transforms_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_xenc_Transforms) */

struct zx_str_s* zx_EASY_ENC_SO_xenc_Transforms(struct zx_ctx* c, struct zx_xenc_Transforms_s* x )
{
  int len = zx_LEN_xenc_Transforms(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_xenc_Transforms(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_xenc_Transforms) */

struct zx_str_s* zx_EASY_ENC_WO_xenc_Transforms(struct zx_ctx* c, struct zx_xenc_Transforms_s* x )
{
  int len = zx_LEN_xenc_Transforms(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_xenc_Transforms(x, buf ), buf, len);
}




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

#define EL_NAME   root
#define EL_STRUCT zx_root_s
#define EL_NS     
#define EL_TAG    root

/* FUNC(zx_LEN_root) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_root(struct zx_root_s* x )
{
  struct zx_elem_s* se;

  /* root node has no begin tag */
  int len = 0;

  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n)
	  len += zx_LEN_sa_Assertion(e);
  }
  {
      struct zx_sp_AuthnRequest_s* e;
      for (e = x->AuthnRequest; e; e = (struct zx_sp_AuthnRequest_s*)e->gg.g.n)
	  len += zx_LEN_sp_AuthnRequest(e);
  }
  {
      struct zx_sp_Response_s* e;
      for (e = x->Response; e; e = (struct zx_sp_Response_s*)e->gg.g.n)
	  len += zx_LEN_sp_Response(e);
  }
  {
      struct zx_sp_LogoutRequest_s* e;
      for (e = x->LogoutRequest; e; e = (struct zx_sp_LogoutRequest_s*)e->gg.g.n)
	  len += zx_LEN_sp_LogoutRequest(e);
  }
  {
      struct zx_sp_LogoutResponse_s* e;
      for (e = x->LogoutResponse; e; e = (struct zx_sp_LogoutResponse_s*)e->gg.g.n)
	  len += zx_LEN_sp_LogoutResponse(e);
  }
  {
      struct zx_sp_ManageNameIDRequest_s* e;
      for (e = x->ManageNameIDRequest; e; e = (struct zx_sp_ManageNameIDRequest_s*)e->gg.g.n)
	  len += zx_LEN_sp_ManageNameIDRequest(e);
  }
  {
      struct zx_sp_ManageNameIDResponse_s* e;
      for (e = x->ManageNameIDResponse; e; e = (struct zx_sp_ManageNameIDResponse_s*)e->gg.g.n)
	  len += zx_LEN_sp_ManageNameIDResponse(e);
  }
  {
      struct zx_se_Envelope_s* e;
      for (e = x->Envelope; e; e = (struct zx_se_Envelope_s*)e->gg.g.n)
	  len += zx_LEN_se_Envelope(e);
  }
  {
      struct zx_sa11_Assertion_s* e;
      for (e = x->sa11_Assertion; e; e = (struct zx_sa11_Assertion_s*)e->gg.g.n)
	  len += zx_LEN_sa11_Assertion(e);
  }
  {
      struct zx_sp11_Request_s* e;
      for (e = x->Request; e; e = (struct zx_sp11_Request_s*)e->gg.g.n)
	  len += zx_LEN_sp11_Request(e);
  }
  {
      struct zx_sp11_Response_s* e;
      for (e = x->sp11_Response; e; e = (struct zx_sp11_Response_s*)e->gg.g.n)
	  len += zx_LEN_sp11_Response(e);
  }
  {
      struct zx_ff12_Assertion_s* e;
      for (e = x->ff12_Assertion; e; e = (struct zx_ff12_Assertion_s*)e->gg.g.n)
	  len += zx_LEN_ff12_Assertion(e);
  }
  {
      struct zx_ff12_AuthnRequest_s* e;
      for (e = x->ff12_AuthnRequest; e; e = (struct zx_ff12_AuthnRequest_s*)e->gg.g.n)
	  len += zx_LEN_ff12_AuthnRequest(e);
  }
  {
      struct zx_ff12_AuthnResponse_s* e;
      for (e = x->AuthnResponse; e; e = (struct zx_ff12_AuthnResponse_s*)e->gg.g.n)
	  len += zx_LEN_ff12_AuthnResponse(e);
  }
  {
      struct zx_ff12_AuthnRequestEnvelope_s* e;
      for (e = x->AuthnRequestEnvelope; e; e = (struct zx_ff12_AuthnRequestEnvelope_s*)e->gg.g.n)
	  len += zx_LEN_ff12_AuthnRequestEnvelope(e);
  }
  {
      struct zx_ff12_AuthnResponseEnvelope_s* e;
      for (e = x->AuthnResponseEnvelope; e; e = (struct zx_ff12_AuthnResponseEnvelope_s*)e->gg.g.n)
	  len += zx_LEN_ff12_AuthnResponseEnvelope(e);
  }
  {
      struct zx_ff12_RegisterNameIdentifierRequest_s* e;
      for (e = x->RegisterNameIdentifierRequest; e; e = (struct zx_ff12_RegisterNameIdentifierRequest_s*)e->gg.g.n)
	  len += zx_LEN_ff12_RegisterNameIdentifierRequest(e);
  }
  {
      struct zx_ff12_RegisterNameIdentifierResponse_s* e;
      for (e = x->RegisterNameIdentifierResponse; e; e = (struct zx_ff12_RegisterNameIdentifierResponse_s*)e->gg.g.n)
	  len += zx_LEN_ff12_RegisterNameIdentifierResponse(e);
  }
  {
      struct zx_ff12_FederationTerminationNotification_s* e;
      for (e = x->FederationTerminationNotification; e; e = (struct zx_ff12_FederationTerminationNotification_s*)e->gg.g.n)
	  len += zx_LEN_ff12_FederationTerminationNotification(e);
  }
  {
      struct zx_ff12_LogoutRequest_s* e;
      for (e = x->ff12_LogoutRequest; e; e = (struct zx_ff12_LogoutRequest_s*)e->gg.g.n)
	  len += zx_LEN_ff12_LogoutRequest(e);
  }
  {
      struct zx_ff12_LogoutResponse_s* e;
      for (e = x->ff12_LogoutResponse; e; e = (struct zx_ff12_LogoutResponse_s*)e->gg.g.n)
	  len += zx_LEN_ff12_LogoutResponse(e);
  }
  {
      struct zx_ff12_NameIdentifierMappingRequest_s* e;
      for (e = x->NameIdentifierMappingRequest; e; e = (struct zx_ff12_NameIdentifierMappingRequest_s*)e->gg.g.n)
	  len += zx_LEN_ff12_NameIdentifierMappingRequest(e);
  }
  {
      struct zx_ff12_NameIdentifierMappingResponse_s* e;
      for (e = x->NameIdentifierMappingResponse; e; e = (struct zx_ff12_NameIdentifierMappingResponse_s*)e->gg.g.n)
	  len += zx_LEN_ff12_NameIdentifierMappingResponse(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zx_ENC_SO_root) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_root(struct zx_root_s* x, char* p )
{
  struct zx_elem_s* se;

  /* root node has no begin tag */

  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);


  /* root node has no begin tag */

  
  {
      struct zx_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Assertion(e, p);
  }
  {
      struct zx_sp_AuthnRequest_s* e;
      for (e = x->AuthnRequest; e; e = (struct zx_sp_AuthnRequest_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_AuthnRequest(e, p);
  }
  {
      struct zx_sp_Response_s* e;
      for (e = x->Response; e; e = (struct zx_sp_Response_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Response(e, p);
  }
  {
      struct zx_sp_LogoutRequest_s* e;
      for (e = x->LogoutRequest; e; e = (struct zx_sp_LogoutRequest_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_LogoutRequest(e, p);
  }
  {
      struct zx_sp_LogoutResponse_s* e;
      for (e = x->LogoutResponse; e; e = (struct zx_sp_LogoutResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_LogoutResponse(e, p);
  }
  {
      struct zx_sp_ManageNameIDRequest_s* e;
      for (e = x->ManageNameIDRequest; e; e = (struct zx_sp_ManageNameIDRequest_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_ManageNameIDRequest(e, p);
  }
  {
      struct zx_sp_ManageNameIDResponse_s* e;
      for (e = x->ManageNameIDResponse; e; e = (struct zx_sp_ManageNameIDResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_ManageNameIDResponse(e, p);
  }
  {
      struct zx_se_Envelope_s* e;
      for (e = x->Envelope; e; e = (struct zx_se_Envelope_s*)e->gg.g.n)
	  p = zx_ENC_SO_se_Envelope(e, p);
  }
  {
      struct zx_sa11_Assertion_s* e;
      for (e = x->sa11_Assertion; e; e = (struct zx_sa11_Assertion_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Assertion(e, p);
  }
  {
      struct zx_sp11_Request_s* e;
      for (e = x->Request; e; e = (struct zx_sp11_Request_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp11_Request(e, p);
  }
  {
      struct zx_sp11_Response_s* e;
      for (e = x->sp11_Response; e; e = (struct zx_sp11_Response_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp11_Response(e, p);
  }
  {
      struct zx_ff12_Assertion_s* e;
      for (e = x->ff12_Assertion; e; e = (struct zx_ff12_Assertion_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_Assertion(e, p);
  }
  {
      struct zx_ff12_AuthnRequest_s* e;
      for (e = x->ff12_AuthnRequest; e; e = (struct zx_ff12_AuthnRequest_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_AuthnRequest(e, p);
  }
  {
      struct zx_ff12_AuthnResponse_s* e;
      for (e = x->AuthnResponse; e; e = (struct zx_ff12_AuthnResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_AuthnResponse(e, p);
  }
  {
      struct zx_ff12_AuthnRequestEnvelope_s* e;
      for (e = x->AuthnRequestEnvelope; e; e = (struct zx_ff12_AuthnRequestEnvelope_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_AuthnRequestEnvelope(e, p);
  }
  {
      struct zx_ff12_AuthnResponseEnvelope_s* e;
      for (e = x->AuthnResponseEnvelope; e; e = (struct zx_ff12_AuthnResponseEnvelope_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_AuthnResponseEnvelope(e, p);
  }
  {
      struct zx_ff12_RegisterNameIdentifierRequest_s* e;
      for (e = x->RegisterNameIdentifierRequest; e; e = (struct zx_ff12_RegisterNameIdentifierRequest_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_RegisterNameIdentifierRequest(e, p);
  }
  {
      struct zx_ff12_RegisterNameIdentifierResponse_s* e;
      for (e = x->RegisterNameIdentifierResponse; e; e = (struct zx_ff12_RegisterNameIdentifierResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_RegisterNameIdentifierResponse(e, p);
  }
  {
      struct zx_ff12_FederationTerminationNotification_s* e;
      for (e = x->FederationTerminationNotification; e; e = (struct zx_ff12_FederationTerminationNotification_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_FederationTerminationNotification(e, p);
  }
  {
      struct zx_ff12_LogoutRequest_s* e;
      for (e = x->ff12_LogoutRequest; e; e = (struct zx_ff12_LogoutRequest_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_LogoutRequest(e, p);
  }
  {
      struct zx_ff12_LogoutResponse_s* e;
      for (e = x->ff12_LogoutResponse; e; e = (struct zx_ff12_LogoutResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_LogoutResponse(e, p);
  }
  {
      struct zx_ff12_NameIdentifierMappingRequest_s* e;
      for (e = x->NameIdentifierMappingRequest; e; e = (struct zx_ff12_NameIdentifierMappingRequest_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_NameIdentifierMappingRequest(e, p);
  }
  {
      struct zx_ff12_NameIdentifierMappingResponse_s* e;
      for (e = x->NameIdentifierMappingResponse; e; e = (struct zx_ff12_NameIdentifierMappingResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_NameIdentifierMappingResponse(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  

  /* root node has no end tag ither */

  return p;
}

/* FUNC(zx_ENC_WO_root) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_root(struct zx_root_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_root) */

struct zx_str_s* zx_EASY_ENC_SO_root(struct zx_ctx* c, struct zx_root_s* x )
{
  int len = zx_LEN_root(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_root(x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_root) */

struct zx_str_s* zx_EASY_ENC_WO_root(struct zx_ctx* c, struct zx_root_s* x )
{
  int len = zx_LEN_root(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_root(x, buf ), buf, len);
}




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

#define EL_NAME   simple_elem
#define EL_STRUCT zx_elem_s
#define EL_NS     
#define EL_TAG    simple_elem

/* FUNC(zx_LEN_simple_elem) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zx_LEN_simple_elem(struct zx_elem_s* x , int simplelen)
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + simplelen + 1 + 2 + simplelen + 1;
  
  if (x->g.ns && x->g.ns->prefix_len)
    len += (x->g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */




  len += zx_len_common(x); 
  return len;
}

/* FUNC(zx_ENC_SO_simple_elem) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_simple_elem(struct zx_elem_s* x, char* p , char* simpletag, int simplelen)
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->g.ns && x->g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->g.ns->prefix, x->g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, simpletag, simplelen);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  


  p = zx_enc_so_unknown_elems_and_content(p, x);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->g.ns && x->g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->g.ns->prefix, x->g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, simpletag, simplelen);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_simple_elem) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_simple_elem(struct zx_elem_s* x, char* p , char* simpletag, int simplelen)
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zx_EASY_ENC_SO_simple_elem) */

struct zx_str_s* zx_EASY_ENC_SO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x , char* simpletag, int simplelen)
{
  int len = zx_LEN_simple_elem(x , simplelen);
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_simple_elem(x, buf , simpletag, simplelen), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_simple_elem) */

struct zx_str_s* zx_EASY_ENC_WO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x , char* simpletag, int simplelen)
{
  int len = zx_LEN_simple_elem(x , simplelen);
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_simple_elem(x, buf , simpletag, simplelen), buf, len);
}


