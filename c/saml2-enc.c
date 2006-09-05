/* c/saml2-enc.c - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id: saml2-enc.c,v 1.26 2006/09/05 05:09:38 sampo Exp $ */
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


