/* c/saml2md-enc.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/saml2md-const.h"
#include "c/saml2md-data.h"



#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_ds_CanonicalizationMethod_s
#define EL_NS     ds
#define EL_TAG    CanonicalizationMethod

/* FUNC(zxmd_LEN_ds_CanonicalizationMethod) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_ds_CanonicalizationMethod(struct zxmd_ds_CanonicalizationMethod_s* x )
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

/* FUNC(zxmd_ENC_SO_ds_CanonicalizationMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_ds_CanonicalizationMethod(struct zxmd_ds_CanonicalizationMethod_s* x, char* p )
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

/* FUNC(zxmd_ENC_WO_ds_CanonicalizationMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_ds_CanonicalizationMethod(struct zxmd_ds_CanonicalizationMethod_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_ds_CanonicalizationMethod) */

struct zx_str_s* zxmd_EASY_ENC_SO_ds_CanonicalizationMethod(struct zx_ctx* c, struct zxmd_ds_CanonicalizationMethod_s* x )
{
  int len = zxmd_LEN_ds_CanonicalizationMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_ds_CanonicalizationMethod(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_ds_CanonicalizationMethod) */

struct zx_str_s* zxmd_EASY_ENC_WO_ds_CanonicalizationMethod(struct zx_ctx* c, struct zxmd_ds_CanonicalizationMethod_s* x )
{
  int len = zxmd_LEN_ds_CanonicalizationMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_ds_CanonicalizationMethod(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_ds_DSAKeyValue_s
#define EL_NS     ds
#define EL_TAG    DSAKeyValue

/* FUNC(zxmd_LEN_ds_DSAKeyValue) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_ds_DSAKeyValue(struct zxmd_ds_DSAKeyValue_s* x )
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
    len += zxmd_LEN_simple_elem(se, sizeof("P") - 1);
  for (se = x->Q; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("Q") - 1);
  for (se = x->G; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("G") - 1);
  for (se = x->Y; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("Y") - 1);
  for (se = x->J; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("J") - 1);
  for (se = x->Seed; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("Seed") - 1);
  for (se = x->PgenCounter; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("PgenCounter") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_ds_DSAKeyValue) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_ds_DSAKeyValue(struct zxmd_ds_DSAKeyValue_s* x, char* p )
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
    p = zxmd_ENC_SO_simple_elem(se, p, "P", sizeof("P") - 1);
  for (se = x->Q; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "Q", sizeof("Q") - 1);
  for (se = x->G; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "G", sizeof("G") - 1);
  for (se = x->Y; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "Y", sizeof("Y") - 1);
  for (se = x->J; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "J", sizeof("J") - 1);
  for (se = x->Seed; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "Seed", sizeof("Seed") - 1);
  for (se = x->PgenCounter; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "PgenCounter", sizeof("PgenCounter") - 1);


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

/* FUNC(zxmd_ENC_WO_ds_DSAKeyValue) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_ds_DSAKeyValue(struct zxmd_ds_DSAKeyValue_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_ds_DSAKeyValue) */

struct zx_str_s* zxmd_EASY_ENC_SO_ds_DSAKeyValue(struct zx_ctx* c, struct zxmd_ds_DSAKeyValue_s* x )
{
  int len = zxmd_LEN_ds_DSAKeyValue(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_ds_DSAKeyValue(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_ds_DSAKeyValue) */

struct zx_str_s* zxmd_EASY_ENC_WO_ds_DSAKeyValue(struct zx_ctx* c, struct zxmd_ds_DSAKeyValue_s* x )
{
  int len = zxmd_LEN_ds_DSAKeyValue(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_ds_DSAKeyValue(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_ds_DigestMethod_s
#define EL_NS     ds
#define EL_TAG    DigestMethod

/* FUNC(zxmd_LEN_ds_DigestMethod) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_ds_DigestMethod(struct zxmd_ds_DigestMethod_s* x )
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

/* FUNC(zxmd_ENC_SO_ds_DigestMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_ds_DigestMethod(struct zxmd_ds_DigestMethod_s* x, char* p )
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

/* FUNC(zxmd_ENC_WO_ds_DigestMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_ds_DigestMethod(struct zxmd_ds_DigestMethod_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_ds_DigestMethod) */

struct zx_str_s* zxmd_EASY_ENC_SO_ds_DigestMethod(struct zx_ctx* c, struct zxmd_ds_DigestMethod_s* x )
{
  int len = zxmd_LEN_ds_DigestMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_ds_DigestMethod(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_ds_DigestMethod) */

struct zx_str_s* zxmd_EASY_ENC_WO_ds_DigestMethod(struct zx_ctx* c, struct zxmd_ds_DigestMethod_s* x )
{
  int len = zxmd_LEN_ds_DigestMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_ds_DigestMethod(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_ds_KeyInfo_s
#define EL_NS     ds
#define EL_TAG    KeyInfo

/* FUNC(zxmd_LEN_ds_KeyInfo) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_ds_KeyInfo(struct zxmd_ds_KeyInfo_s* x )
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
    len += zxmd_LEN_simple_elem(se, sizeof("KeyName") - 1);
  {
      struct zxmd_ds_KeyValue_s* e;
      for (e = x->KeyValue; e; e = (struct zxmd_ds_KeyValue_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_KeyValue(e);
  }
  {
      struct zxmd_ds_RetrievalMethod_s* e;
      for (e = x->RetrievalMethod; e; e = (struct zxmd_ds_RetrievalMethod_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_RetrievalMethod(e);
  }
  {
      struct zxmd_ds_X509Data_s* e;
      for (e = x->X509Data; e; e = (struct zxmd_ds_X509Data_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_X509Data(e);
  }
  {
      struct zxmd_ds_PGPData_s* e;
      for (e = x->PGPData; e; e = (struct zxmd_ds_PGPData_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_PGPData(e);
  }
  {
      struct zxmd_ds_SPKIData_s* e;
      for (e = x->SPKIData; e; e = (struct zxmd_ds_SPKIData_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_SPKIData(e);
  }
  for (se = x->MgmtData; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("MgmtData") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_ds_KeyInfo) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_ds_KeyInfo(struct zxmd_ds_KeyInfo_s* x, char* p )
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
    p = zxmd_ENC_SO_simple_elem(se, p, "KeyName", sizeof("KeyName") - 1);
  {
      struct zxmd_ds_KeyValue_s* e;
      for (e = x->KeyValue; e; e = (struct zxmd_ds_KeyValue_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_KeyValue(e, p);
  }
  {
      struct zxmd_ds_RetrievalMethod_s* e;
      for (e = x->RetrievalMethod; e; e = (struct zxmd_ds_RetrievalMethod_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_RetrievalMethod(e, p);
  }
  {
      struct zxmd_ds_X509Data_s* e;
      for (e = x->X509Data; e; e = (struct zxmd_ds_X509Data_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_X509Data(e, p);
  }
  {
      struct zxmd_ds_PGPData_s* e;
      for (e = x->PGPData; e; e = (struct zxmd_ds_PGPData_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_PGPData(e, p);
  }
  {
      struct zxmd_ds_SPKIData_s* e;
      for (e = x->SPKIData; e; e = (struct zxmd_ds_SPKIData_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_SPKIData(e, p);
  }
  for (se = x->MgmtData; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "MgmtData", sizeof("MgmtData") - 1);


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

/* FUNC(zxmd_ENC_WO_ds_KeyInfo) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_ds_KeyInfo(struct zxmd_ds_KeyInfo_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_ds_KeyInfo) */

struct zx_str_s* zxmd_EASY_ENC_SO_ds_KeyInfo(struct zx_ctx* c, struct zxmd_ds_KeyInfo_s* x )
{
  int len = zxmd_LEN_ds_KeyInfo(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_ds_KeyInfo(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_ds_KeyInfo) */

struct zx_str_s* zxmd_EASY_ENC_WO_ds_KeyInfo(struct zx_ctx* c, struct zxmd_ds_KeyInfo_s* x )
{
  int len = zxmd_LEN_ds_KeyInfo(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_ds_KeyInfo(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_ds_KeyValue_s
#define EL_NS     ds
#define EL_TAG    KeyValue

/* FUNC(zxmd_LEN_ds_KeyValue) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_ds_KeyValue(struct zxmd_ds_KeyValue_s* x )
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
      struct zxmd_ds_DSAKeyValue_s* e;
      for (e = x->DSAKeyValue; e; e = (struct zxmd_ds_DSAKeyValue_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_DSAKeyValue(e);
  }
  {
      struct zxmd_ds_RSAKeyValue_s* e;
      for (e = x->RSAKeyValue; e; e = (struct zxmd_ds_RSAKeyValue_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_RSAKeyValue(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_ds_KeyValue) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_ds_KeyValue(struct zxmd_ds_KeyValue_s* x, char* p )
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
      struct zxmd_ds_DSAKeyValue_s* e;
      for (e = x->DSAKeyValue; e; e = (struct zxmd_ds_DSAKeyValue_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_DSAKeyValue(e, p);
  }
  {
      struct zxmd_ds_RSAKeyValue_s* e;
      for (e = x->RSAKeyValue; e; e = (struct zxmd_ds_RSAKeyValue_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_RSAKeyValue(e, p);
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

/* FUNC(zxmd_ENC_WO_ds_KeyValue) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_ds_KeyValue(struct zxmd_ds_KeyValue_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_ds_KeyValue) */

struct zx_str_s* zxmd_EASY_ENC_SO_ds_KeyValue(struct zx_ctx* c, struct zxmd_ds_KeyValue_s* x )
{
  int len = zxmd_LEN_ds_KeyValue(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_ds_KeyValue(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_ds_KeyValue) */

struct zx_str_s* zxmd_EASY_ENC_WO_ds_KeyValue(struct zx_ctx* c, struct zxmd_ds_KeyValue_s* x )
{
  int len = zxmd_LEN_ds_KeyValue(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_ds_KeyValue(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_ds_Manifest_s
#define EL_NS     ds
#define EL_TAG    Manifest

/* FUNC(zxmd_LEN_ds_Manifest) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_ds_Manifest(struct zxmd_ds_Manifest_s* x )
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
      struct zxmd_ds_Reference_s* e;
      for (e = x->Reference; e; e = (struct zxmd_ds_Reference_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_Reference(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_ds_Manifest) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_ds_Manifest(struct zxmd_ds_Manifest_s* x, char* p )
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
      struct zxmd_ds_Reference_s* e;
      for (e = x->Reference; e; e = (struct zxmd_ds_Reference_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_Reference(e, p);
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

/* FUNC(zxmd_ENC_WO_ds_Manifest) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_ds_Manifest(struct zxmd_ds_Manifest_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_ds_Manifest) */

struct zx_str_s* zxmd_EASY_ENC_SO_ds_Manifest(struct zx_ctx* c, struct zxmd_ds_Manifest_s* x )
{
  int len = zxmd_LEN_ds_Manifest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_ds_Manifest(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_ds_Manifest) */

struct zx_str_s* zxmd_EASY_ENC_WO_ds_Manifest(struct zx_ctx* c, struct zxmd_ds_Manifest_s* x )
{
  int len = zxmd_LEN_ds_Manifest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_ds_Manifest(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_ds_Object_s
#define EL_NS     ds
#define EL_TAG    Object

/* FUNC(zxmd_LEN_ds_Object) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_ds_Object(struct zxmd_ds_Object_s* x )
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

/* FUNC(zxmd_ENC_SO_ds_Object) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_ds_Object(struct zxmd_ds_Object_s* x, char* p )
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

/* FUNC(zxmd_ENC_WO_ds_Object) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_ds_Object(struct zxmd_ds_Object_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_ds_Object) */

struct zx_str_s* zxmd_EASY_ENC_SO_ds_Object(struct zx_ctx* c, struct zxmd_ds_Object_s* x )
{
  int len = zxmd_LEN_ds_Object(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_ds_Object(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_ds_Object) */

struct zx_str_s* zxmd_EASY_ENC_WO_ds_Object(struct zx_ctx* c, struct zxmd_ds_Object_s* x )
{
  int len = zxmd_LEN_ds_Object(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_ds_Object(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_ds_PGPData_s
#define EL_NS     ds
#define EL_TAG    PGPData

/* FUNC(zxmd_LEN_ds_PGPData) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_ds_PGPData(struct zxmd_ds_PGPData_s* x )
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
    len += zxmd_LEN_simple_elem(se, sizeof("PGPKeyID") - 1);
  for (se = x->PGPKeyPacket; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("PGPKeyPacket") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_ds_PGPData) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_ds_PGPData(struct zxmd_ds_PGPData_s* x, char* p )
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
    p = zxmd_ENC_SO_simple_elem(se, p, "PGPKeyID", sizeof("PGPKeyID") - 1);
  for (se = x->PGPKeyPacket; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "PGPKeyPacket", sizeof("PGPKeyPacket") - 1);


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

/* FUNC(zxmd_ENC_WO_ds_PGPData) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_ds_PGPData(struct zxmd_ds_PGPData_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_ds_PGPData) */

struct zx_str_s* zxmd_EASY_ENC_SO_ds_PGPData(struct zx_ctx* c, struct zxmd_ds_PGPData_s* x )
{
  int len = zxmd_LEN_ds_PGPData(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_ds_PGPData(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_ds_PGPData) */

struct zx_str_s* zxmd_EASY_ENC_WO_ds_PGPData(struct zx_ctx* c, struct zxmd_ds_PGPData_s* x )
{
  int len = zxmd_LEN_ds_PGPData(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_ds_PGPData(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_ds_RSAKeyValue_s
#define EL_NS     ds
#define EL_TAG    RSAKeyValue

/* FUNC(zxmd_LEN_ds_RSAKeyValue) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_ds_RSAKeyValue(struct zxmd_ds_RSAKeyValue_s* x )
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
    len += zxmd_LEN_simple_elem(se, sizeof("Modulus") - 1);
  for (se = x->Exponent; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("Exponent") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_ds_RSAKeyValue) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_ds_RSAKeyValue(struct zxmd_ds_RSAKeyValue_s* x, char* p )
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
    p = zxmd_ENC_SO_simple_elem(se, p, "Modulus", sizeof("Modulus") - 1);
  for (se = x->Exponent; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "Exponent", sizeof("Exponent") - 1);


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

/* FUNC(zxmd_ENC_WO_ds_RSAKeyValue) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_ds_RSAKeyValue(struct zxmd_ds_RSAKeyValue_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_ds_RSAKeyValue) */

struct zx_str_s* zxmd_EASY_ENC_SO_ds_RSAKeyValue(struct zx_ctx* c, struct zxmd_ds_RSAKeyValue_s* x )
{
  int len = zxmd_LEN_ds_RSAKeyValue(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_ds_RSAKeyValue(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_ds_RSAKeyValue) */

struct zx_str_s* zxmd_EASY_ENC_WO_ds_RSAKeyValue(struct zx_ctx* c, struct zxmd_ds_RSAKeyValue_s* x )
{
  int len = zxmd_LEN_ds_RSAKeyValue(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_ds_RSAKeyValue(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_ds_Reference_s
#define EL_NS     ds
#define EL_TAG    Reference

/* FUNC(zxmd_LEN_ds_Reference) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_ds_Reference(struct zxmd_ds_Reference_s* x )
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
      struct zxmd_ds_Transforms_s* e;
      for (e = x->Transforms; e; e = (struct zxmd_ds_Transforms_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_Transforms(e);
  }
  {
      struct zxmd_ds_DigestMethod_s* e;
      for (e = x->DigestMethod; e; e = (struct zxmd_ds_DigestMethod_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_DigestMethod(e);
  }
  for (se = x->DigestValue; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("DigestValue") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_ds_Reference) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_ds_Reference(struct zxmd_ds_Reference_s* x, char* p )
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
      struct zxmd_ds_Transforms_s* e;
      for (e = x->Transforms; e; e = (struct zxmd_ds_Transforms_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_Transforms(e, p);
  }
  {
      struct zxmd_ds_DigestMethod_s* e;
      for (e = x->DigestMethod; e; e = (struct zxmd_ds_DigestMethod_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_DigestMethod(e, p);
  }
  for (se = x->DigestValue; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "DigestValue", sizeof("DigestValue") - 1);


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

/* FUNC(zxmd_ENC_WO_ds_Reference) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_ds_Reference(struct zxmd_ds_Reference_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_ds_Reference) */

struct zx_str_s* zxmd_EASY_ENC_SO_ds_Reference(struct zx_ctx* c, struct zxmd_ds_Reference_s* x )
{
  int len = zxmd_LEN_ds_Reference(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_ds_Reference(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_ds_Reference) */

struct zx_str_s* zxmd_EASY_ENC_WO_ds_Reference(struct zx_ctx* c, struct zxmd_ds_Reference_s* x )
{
  int len = zxmd_LEN_ds_Reference(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_ds_Reference(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_ds_RetrievalMethod_s
#define EL_NS     ds
#define EL_TAG    RetrievalMethod

/* FUNC(zxmd_LEN_ds_RetrievalMethod) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_ds_RetrievalMethod(struct zxmd_ds_RetrievalMethod_s* x )
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
      struct zxmd_ds_Transforms_s* e;
      for (e = x->Transforms; e; e = (struct zxmd_ds_Transforms_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_Transforms(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_ds_RetrievalMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_ds_RetrievalMethod(struct zxmd_ds_RetrievalMethod_s* x, char* p )
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
      struct zxmd_ds_Transforms_s* e;
      for (e = x->Transforms; e; e = (struct zxmd_ds_Transforms_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_Transforms(e, p);
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

/* FUNC(zxmd_ENC_WO_ds_RetrievalMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_ds_RetrievalMethod(struct zxmd_ds_RetrievalMethod_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_ds_RetrievalMethod) */

struct zx_str_s* zxmd_EASY_ENC_SO_ds_RetrievalMethod(struct zx_ctx* c, struct zxmd_ds_RetrievalMethod_s* x )
{
  int len = zxmd_LEN_ds_RetrievalMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_ds_RetrievalMethod(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_ds_RetrievalMethod) */

struct zx_str_s* zxmd_EASY_ENC_WO_ds_RetrievalMethod(struct zx_ctx* c, struct zxmd_ds_RetrievalMethod_s* x )
{
  int len = zxmd_LEN_ds_RetrievalMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_ds_RetrievalMethod(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_ds_SPKIData_s
#define EL_NS     ds
#define EL_TAG    SPKIData

/* FUNC(zxmd_LEN_ds_SPKIData) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_ds_SPKIData(struct zxmd_ds_SPKIData_s* x )
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
    len += zxmd_LEN_simple_elem(se, sizeof("SPKISexp") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_ds_SPKIData) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_ds_SPKIData(struct zxmd_ds_SPKIData_s* x, char* p )
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
    p = zxmd_ENC_SO_simple_elem(se, p, "SPKISexp", sizeof("SPKISexp") - 1);


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

/* FUNC(zxmd_ENC_WO_ds_SPKIData) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_ds_SPKIData(struct zxmd_ds_SPKIData_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_ds_SPKIData) */

struct zx_str_s* zxmd_EASY_ENC_SO_ds_SPKIData(struct zx_ctx* c, struct zxmd_ds_SPKIData_s* x )
{
  int len = zxmd_LEN_ds_SPKIData(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_ds_SPKIData(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_ds_SPKIData) */

struct zx_str_s* zxmd_EASY_ENC_WO_ds_SPKIData(struct zx_ctx* c, struct zxmd_ds_SPKIData_s* x )
{
  int len = zxmd_LEN_ds_SPKIData(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_ds_SPKIData(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_ds_Signature_s
#define EL_NS     ds
#define EL_TAG    Signature

/* FUNC(zxmd_LEN_ds_Signature) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_ds_Signature(struct zxmd_ds_Signature_s* x )
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
      struct zxmd_ds_SignedInfo_s* e;
      for (e = x->SignedInfo; e; e = (struct zxmd_ds_SignedInfo_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_SignedInfo(e);
  }
  {
      struct zxmd_ds_SignatureValue_s* e;
      for (e = x->SignatureValue; e; e = (struct zxmd_ds_SignatureValue_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_SignatureValue(e);
  }
  {
      struct zxmd_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_KeyInfo(e);
  }
  {
      struct zxmd_ds_Object_s* e;
      for (e = x->Object; e; e = (struct zxmd_ds_Object_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_Object(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_ds_Signature) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_ds_Signature(struct zxmd_ds_Signature_s* x, char* p )
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
      struct zxmd_ds_SignedInfo_s* e;
      for (e = x->SignedInfo; e; e = (struct zxmd_ds_SignedInfo_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_SignedInfo(e, p);
  }
  {
      struct zxmd_ds_SignatureValue_s* e;
      for (e = x->SignatureValue; e; e = (struct zxmd_ds_SignatureValue_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_SignatureValue(e, p);
  }
  {
      struct zxmd_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_KeyInfo(e, p);
  }
  {
      struct zxmd_ds_Object_s* e;
      for (e = x->Object; e; e = (struct zxmd_ds_Object_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_Object(e, p);
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

/* FUNC(zxmd_ENC_WO_ds_Signature) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_ds_Signature(struct zxmd_ds_Signature_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_ds_Signature) */

struct zx_str_s* zxmd_EASY_ENC_SO_ds_Signature(struct zx_ctx* c, struct zxmd_ds_Signature_s* x )
{
  int len = zxmd_LEN_ds_Signature(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_ds_Signature(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_ds_Signature) */

struct zx_str_s* zxmd_EASY_ENC_WO_ds_Signature(struct zx_ctx* c, struct zxmd_ds_Signature_s* x )
{
  int len = zxmd_LEN_ds_Signature(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_ds_Signature(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_ds_SignatureMethod_s
#define EL_NS     ds
#define EL_TAG    SignatureMethod

/* FUNC(zxmd_LEN_ds_SignatureMethod) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_ds_SignatureMethod(struct zxmd_ds_SignatureMethod_s* x )
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
    len += zxmd_LEN_simple_elem(se, sizeof("HMACOutputLength") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_ds_SignatureMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_ds_SignatureMethod(struct zxmd_ds_SignatureMethod_s* x, char* p )
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
    p = zxmd_ENC_SO_simple_elem(se, p, "HMACOutputLength", sizeof("HMACOutputLength") - 1);


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

/* FUNC(zxmd_ENC_WO_ds_SignatureMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_ds_SignatureMethod(struct zxmd_ds_SignatureMethod_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_ds_SignatureMethod) */

struct zx_str_s* zxmd_EASY_ENC_SO_ds_SignatureMethod(struct zx_ctx* c, struct zxmd_ds_SignatureMethod_s* x )
{
  int len = zxmd_LEN_ds_SignatureMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_ds_SignatureMethod(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_ds_SignatureMethod) */

struct zx_str_s* zxmd_EASY_ENC_WO_ds_SignatureMethod(struct zx_ctx* c, struct zxmd_ds_SignatureMethod_s* x )
{
  int len = zxmd_LEN_ds_SignatureMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_ds_SignatureMethod(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_ds_SignatureProperties_s
#define EL_NS     ds
#define EL_TAG    SignatureProperties

/* FUNC(zxmd_LEN_ds_SignatureProperties) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_ds_SignatureProperties(struct zxmd_ds_SignatureProperties_s* x )
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
      struct zxmd_ds_SignatureProperty_s* e;
      for (e = x->SignatureProperty; e; e = (struct zxmd_ds_SignatureProperty_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_SignatureProperty(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_ds_SignatureProperties) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_ds_SignatureProperties(struct zxmd_ds_SignatureProperties_s* x, char* p )
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
      struct zxmd_ds_SignatureProperty_s* e;
      for (e = x->SignatureProperty; e; e = (struct zxmd_ds_SignatureProperty_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_SignatureProperty(e, p);
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

/* FUNC(zxmd_ENC_WO_ds_SignatureProperties) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_ds_SignatureProperties(struct zxmd_ds_SignatureProperties_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_ds_SignatureProperties) */

struct zx_str_s* zxmd_EASY_ENC_SO_ds_SignatureProperties(struct zx_ctx* c, struct zxmd_ds_SignatureProperties_s* x )
{
  int len = zxmd_LEN_ds_SignatureProperties(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_ds_SignatureProperties(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_ds_SignatureProperties) */

struct zx_str_s* zxmd_EASY_ENC_WO_ds_SignatureProperties(struct zx_ctx* c, struct zxmd_ds_SignatureProperties_s* x )
{
  int len = zxmd_LEN_ds_SignatureProperties(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_ds_SignatureProperties(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_ds_SignatureProperty_s
#define EL_NS     ds
#define EL_TAG    SignatureProperty

/* FUNC(zxmd_LEN_ds_SignatureProperty) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_ds_SignatureProperty(struct zxmd_ds_SignatureProperty_s* x )
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

/* FUNC(zxmd_ENC_SO_ds_SignatureProperty) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_ds_SignatureProperty(struct zxmd_ds_SignatureProperty_s* x, char* p )
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

/* FUNC(zxmd_ENC_WO_ds_SignatureProperty) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_ds_SignatureProperty(struct zxmd_ds_SignatureProperty_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_ds_SignatureProperty) */

struct zx_str_s* zxmd_EASY_ENC_SO_ds_SignatureProperty(struct zx_ctx* c, struct zxmd_ds_SignatureProperty_s* x )
{
  int len = zxmd_LEN_ds_SignatureProperty(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_ds_SignatureProperty(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_ds_SignatureProperty) */

struct zx_str_s* zxmd_EASY_ENC_WO_ds_SignatureProperty(struct zx_ctx* c, struct zxmd_ds_SignatureProperty_s* x )
{
  int len = zxmd_LEN_ds_SignatureProperty(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_ds_SignatureProperty(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_ds_SignatureValue_s
#define EL_NS     ds
#define EL_TAG    SignatureValue

/* FUNC(zxmd_LEN_ds_SignatureValue) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_ds_SignatureValue(struct zxmd_ds_SignatureValue_s* x )
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

/* FUNC(zxmd_ENC_SO_ds_SignatureValue) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_ds_SignatureValue(struct zxmd_ds_SignatureValue_s* x, char* p )
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

/* FUNC(zxmd_ENC_WO_ds_SignatureValue) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_ds_SignatureValue(struct zxmd_ds_SignatureValue_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_ds_SignatureValue) */

struct zx_str_s* zxmd_EASY_ENC_SO_ds_SignatureValue(struct zx_ctx* c, struct zxmd_ds_SignatureValue_s* x )
{
  int len = zxmd_LEN_ds_SignatureValue(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_ds_SignatureValue(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_ds_SignatureValue) */

struct zx_str_s* zxmd_EASY_ENC_WO_ds_SignatureValue(struct zx_ctx* c, struct zxmd_ds_SignatureValue_s* x )
{
  int len = zxmd_LEN_ds_SignatureValue(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_ds_SignatureValue(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_ds_SignedInfo_s
#define EL_NS     ds
#define EL_TAG    SignedInfo

/* FUNC(zxmd_LEN_ds_SignedInfo) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_ds_SignedInfo(struct zxmd_ds_SignedInfo_s* x )
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
      struct zxmd_ds_CanonicalizationMethod_s* e;
      for (e = x->CanonicalizationMethod; e; e = (struct zxmd_ds_CanonicalizationMethod_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_CanonicalizationMethod(e);
  }
  {
      struct zxmd_ds_SignatureMethod_s* e;
      for (e = x->SignatureMethod; e; e = (struct zxmd_ds_SignatureMethod_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_SignatureMethod(e);
  }
  {
      struct zxmd_ds_Reference_s* e;
      for (e = x->Reference; e; e = (struct zxmd_ds_Reference_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_Reference(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_ds_SignedInfo) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_ds_SignedInfo(struct zxmd_ds_SignedInfo_s* x, char* p )
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
      struct zxmd_ds_CanonicalizationMethod_s* e;
      for (e = x->CanonicalizationMethod; e; e = (struct zxmd_ds_CanonicalizationMethod_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_CanonicalizationMethod(e, p);
  }
  {
      struct zxmd_ds_SignatureMethod_s* e;
      for (e = x->SignatureMethod; e; e = (struct zxmd_ds_SignatureMethod_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_SignatureMethod(e, p);
  }
  {
      struct zxmd_ds_Reference_s* e;
      for (e = x->Reference; e; e = (struct zxmd_ds_Reference_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_Reference(e, p);
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

/* FUNC(zxmd_ENC_WO_ds_SignedInfo) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_ds_SignedInfo(struct zxmd_ds_SignedInfo_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_ds_SignedInfo) */

struct zx_str_s* zxmd_EASY_ENC_SO_ds_SignedInfo(struct zx_ctx* c, struct zxmd_ds_SignedInfo_s* x )
{
  int len = zxmd_LEN_ds_SignedInfo(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_ds_SignedInfo(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_ds_SignedInfo) */

struct zx_str_s* zxmd_EASY_ENC_WO_ds_SignedInfo(struct zx_ctx* c, struct zxmd_ds_SignedInfo_s* x )
{
  int len = zxmd_LEN_ds_SignedInfo(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_ds_SignedInfo(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_ds_Transform_s
#define EL_NS     ds
#define EL_TAG    Transform

/* FUNC(zxmd_LEN_ds_Transform) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_ds_Transform(struct zxmd_ds_Transform_s* x )
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
    len += zxmd_LEN_simple_elem(se, sizeof("XPath") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_ds_Transform) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_ds_Transform(struct zxmd_ds_Transform_s* x, char* p )
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
    p = zxmd_ENC_SO_simple_elem(se, p, "XPath", sizeof("XPath") - 1);


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

/* FUNC(zxmd_ENC_WO_ds_Transform) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_ds_Transform(struct zxmd_ds_Transform_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_ds_Transform) */

struct zx_str_s* zxmd_EASY_ENC_SO_ds_Transform(struct zx_ctx* c, struct zxmd_ds_Transform_s* x )
{
  int len = zxmd_LEN_ds_Transform(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_ds_Transform(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_ds_Transform) */

struct zx_str_s* zxmd_EASY_ENC_WO_ds_Transform(struct zx_ctx* c, struct zxmd_ds_Transform_s* x )
{
  int len = zxmd_LEN_ds_Transform(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_ds_Transform(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_ds_Transforms_s
#define EL_NS     ds
#define EL_TAG    Transforms

/* FUNC(zxmd_LEN_ds_Transforms) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_ds_Transforms(struct zxmd_ds_Transforms_s* x )
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
      struct zxmd_ds_Transform_s* e;
      for (e = x->Transform; e; e = (struct zxmd_ds_Transform_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_Transform(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_ds_Transforms) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_ds_Transforms(struct zxmd_ds_Transforms_s* x, char* p )
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
      struct zxmd_ds_Transform_s* e;
      for (e = x->Transform; e; e = (struct zxmd_ds_Transform_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_Transform(e, p);
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

/* FUNC(zxmd_ENC_WO_ds_Transforms) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_ds_Transforms(struct zxmd_ds_Transforms_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_ds_Transforms) */

struct zx_str_s* zxmd_EASY_ENC_SO_ds_Transforms(struct zx_ctx* c, struct zxmd_ds_Transforms_s* x )
{
  int len = zxmd_LEN_ds_Transforms(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_ds_Transforms(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_ds_Transforms) */

struct zx_str_s* zxmd_EASY_ENC_WO_ds_Transforms(struct zx_ctx* c, struct zxmd_ds_Transforms_s* x )
{
  int len = zxmd_LEN_ds_Transforms(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_ds_Transforms(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_ds_X509Data_s
#define EL_NS     ds
#define EL_TAG    X509Data

/* FUNC(zxmd_LEN_ds_X509Data) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_ds_X509Data(struct zxmd_ds_X509Data_s* x )
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
      struct zxmd_ds_X509IssuerSerial_s* e;
      for (e = x->X509IssuerSerial; e; e = (struct zxmd_ds_X509IssuerSerial_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_X509IssuerSerial(e);
  }
  for (se = x->X509SKI; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("X509SKI") - 1);
  for (se = x->X509SubjectName; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("X509SubjectName") - 1);
  for (se = x->X509Certificate; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("X509Certificate") - 1);
  for (se = x->X509CRL; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("X509CRL") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_ds_X509Data) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_ds_X509Data(struct zxmd_ds_X509Data_s* x, char* p )
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
      struct zxmd_ds_X509IssuerSerial_s* e;
      for (e = x->X509IssuerSerial; e; e = (struct zxmd_ds_X509IssuerSerial_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_X509IssuerSerial(e, p);
  }
  for (se = x->X509SKI; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "X509SKI", sizeof("X509SKI") - 1);
  for (se = x->X509SubjectName; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "X509SubjectName", sizeof("X509SubjectName") - 1);
  for (se = x->X509Certificate; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "X509Certificate", sizeof("X509Certificate") - 1);
  for (se = x->X509CRL; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "X509CRL", sizeof("X509CRL") - 1);


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

/* FUNC(zxmd_ENC_WO_ds_X509Data) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_ds_X509Data(struct zxmd_ds_X509Data_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_ds_X509Data) */

struct zx_str_s* zxmd_EASY_ENC_SO_ds_X509Data(struct zx_ctx* c, struct zxmd_ds_X509Data_s* x )
{
  int len = zxmd_LEN_ds_X509Data(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_ds_X509Data(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_ds_X509Data) */

struct zx_str_s* zxmd_EASY_ENC_WO_ds_X509Data(struct zx_ctx* c, struct zxmd_ds_X509Data_s* x )
{
  int len = zxmd_LEN_ds_X509Data(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_ds_X509Data(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_ds_X509IssuerSerial_s
#define EL_NS     ds
#define EL_TAG    X509IssuerSerial

/* FUNC(zxmd_LEN_ds_X509IssuerSerial) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_ds_X509IssuerSerial(struct zxmd_ds_X509IssuerSerial_s* x )
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
    len += zxmd_LEN_simple_elem(se, sizeof("X509IssuerName") - 1);
  for (se = x->X509SerialNumber; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("X509SerialNumber") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_ds_X509IssuerSerial) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_ds_X509IssuerSerial(struct zxmd_ds_X509IssuerSerial_s* x, char* p )
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
    p = zxmd_ENC_SO_simple_elem(se, p, "X509IssuerName", sizeof("X509IssuerName") - 1);
  for (se = x->X509SerialNumber; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "X509SerialNumber", sizeof("X509SerialNumber") - 1);


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

/* FUNC(zxmd_ENC_WO_ds_X509IssuerSerial) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_ds_X509IssuerSerial(struct zxmd_ds_X509IssuerSerial_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_ds_X509IssuerSerial) */

struct zx_str_s* zxmd_EASY_ENC_SO_ds_X509IssuerSerial(struct zx_ctx* c, struct zxmd_ds_X509IssuerSerial_s* x )
{
  int len = zxmd_LEN_ds_X509IssuerSerial(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_ds_X509IssuerSerial(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_ds_X509IssuerSerial) */

struct zx_str_s* zxmd_EASY_ENC_WO_ds_X509IssuerSerial(struct zx_ctx* c, struct zxmd_ds_X509IssuerSerial_s* x )
{
  int len = zxmd_LEN_ds_X509IssuerSerial(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_ds_X509IssuerSerial(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   m20_AdditionalMetaLocation
#define EL_STRUCT zxmd_m20_AdditionalMetaLocation_s
#define EL_NS     m20
#define EL_TAG    AdditionalMetaLocation

/* FUNC(zxmd_LEN_m20_AdditionalMetaLocation) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_m20_AdditionalMetaLocation(struct zxmd_m20_AdditionalMetaLocation_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AdditionalMetaLocation") - 1 + 1 + 2 + sizeof("AdditionalMetaLocation") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->namespace, sizeof("namespace"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_m20_AdditionalMetaLocation) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_m20_AdditionalMetaLocation(struct zxmd_m20_AdditionalMetaLocation_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AdditionalMetaLocation", sizeof("AdditionalMetaLocation") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->namespace, "namespace", sizeof("namespace")-1);


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
  ZX_OUT_MEM(p, "AdditionalMetaLocation", sizeof("AdditionalMetaLocation") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_m20_AdditionalMetaLocation) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_m20_AdditionalMetaLocation(struct zxmd_m20_AdditionalMetaLocation_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_m20_AdditionalMetaLocation) */

struct zx_str_s* zxmd_EASY_ENC_SO_m20_AdditionalMetaLocation(struct zx_ctx* c, struct zxmd_m20_AdditionalMetaLocation_s* x )
{
  int len = zxmd_LEN_m20_AdditionalMetaLocation(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_m20_AdditionalMetaLocation(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_m20_AdditionalMetaLocation) */

struct zx_str_s* zxmd_EASY_ENC_WO_m20_AdditionalMetaLocation(struct zx_ctx* c, struct zxmd_m20_AdditionalMetaLocation_s* x )
{
  int len = zxmd_LEN_m20_AdditionalMetaLocation(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_m20_AdditionalMetaLocation(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   m20_AffiliationDescriptor
#define EL_STRUCT zxmd_m20_AffiliationDescriptor_s
#define EL_NS     m20
#define EL_TAG    AffiliationDescriptor

/* FUNC(zxmd_LEN_m20_AffiliationDescriptor) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_m20_AffiliationDescriptor(struct zxmd_m20_AffiliationDescriptor_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AffiliationDescriptor") - 1 + 1 + 2 + sizeof("AffiliationDescriptor") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->affiliationOwnerID, sizeof("affiliationOwnerID"));
  len += zx_attr_len(x->validUntil, sizeof("validUntil"));
  len += zx_attr_len(x->cacheDuration, sizeof("cacheDuration"));
  len += zx_attr_len(x->id, sizeof("id"));

  for (se = x->AffiliateMember; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("AffiliateMember") - 1);
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_Extension(e);
  }
  {
      struct zxmd_m20_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_m20_KeyDescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_KeyDescriptor(e);
  }
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_Signature(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_m20_AffiliationDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_m20_AffiliationDescriptor(struct zxmd_m20_AffiliationDescriptor_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AffiliationDescriptor", sizeof("AffiliationDescriptor") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->affiliationOwnerID, "affiliationOwnerID", sizeof("affiliationOwnerID")-1);
  p = zx_attr_enc(p, x->validUntil, "validUntil", sizeof("validUntil")-1);
  p = zx_attr_enc(p, x->cacheDuration, "cacheDuration", sizeof("cacheDuration")-1);
  p = zx_attr_enc(p, x->id, "id", sizeof("id")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->AffiliateMember; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "AffiliateMember", sizeof("AffiliateMember") - 1);
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_Extension(e, p);
  }
  {
      struct zxmd_m20_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_m20_KeyDescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_KeyDescriptor(e, p);
  }
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_Signature(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AffiliationDescriptor", sizeof("AffiliationDescriptor") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_m20_AffiliationDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_m20_AffiliationDescriptor(struct zxmd_m20_AffiliationDescriptor_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_m20_AffiliationDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_SO_m20_AffiliationDescriptor(struct zx_ctx* c, struct zxmd_m20_AffiliationDescriptor_s* x )
{
  int len = zxmd_LEN_m20_AffiliationDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_m20_AffiliationDescriptor(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_m20_AffiliationDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_WO_m20_AffiliationDescriptor(struct zx_ctx* c, struct zxmd_m20_AffiliationDescriptor_s* x )
{
  int len = zxmd_LEN_m20_AffiliationDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_m20_AffiliationDescriptor(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   m20_AssertionConsumerServiceURL
#define EL_STRUCT zxmd_m20_AssertionConsumerServiceURL_s
#define EL_NS     m20
#define EL_TAG    AssertionConsumerServiceURL

/* FUNC(zxmd_LEN_m20_AssertionConsumerServiceURL) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_m20_AssertionConsumerServiceURL(struct zxmd_m20_AssertionConsumerServiceURL_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AssertionConsumerServiceURL") - 1 + 1 + 2 + sizeof("AssertionConsumerServiceURL") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->id, sizeof("id"));
  len += zx_attr_len(x->isDefault, sizeof("isDefault"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_m20_AssertionConsumerServiceURL) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_m20_AssertionConsumerServiceURL(struct zxmd_m20_AssertionConsumerServiceURL_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AssertionConsumerServiceURL", sizeof("AssertionConsumerServiceURL") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->id, "id", sizeof("id")-1);
  p = zx_attr_enc(p, x->isDefault, "isDefault", sizeof("isDefault")-1);


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
  ZX_OUT_MEM(p, "AssertionConsumerServiceURL", sizeof("AssertionConsumerServiceURL") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_m20_AssertionConsumerServiceURL) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_m20_AssertionConsumerServiceURL(struct zxmd_m20_AssertionConsumerServiceURL_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_m20_AssertionConsumerServiceURL) */

struct zx_str_s* zxmd_EASY_ENC_SO_m20_AssertionConsumerServiceURL(struct zx_ctx* c, struct zxmd_m20_AssertionConsumerServiceURL_s* x )
{
  int len = zxmd_LEN_m20_AssertionConsumerServiceURL(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_m20_AssertionConsumerServiceURL(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_m20_AssertionConsumerServiceURL) */

struct zx_str_s* zxmd_EASY_ENC_WO_m20_AssertionConsumerServiceURL(struct zx_ctx* c, struct zxmd_m20_AssertionConsumerServiceURL_s* x )
{
  int len = zxmd_LEN_m20_AssertionConsumerServiceURL(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_m20_AssertionConsumerServiceURL(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   m20_ContactPerson
#define EL_STRUCT zxmd_m20_ContactPerson_s
#define EL_NS     m20
#define EL_TAG    ContactPerson

/* FUNC(zxmd_LEN_m20_ContactPerson) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_m20_ContactPerson(struct zxmd_m20_ContactPerson_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ContactPerson") - 1 + 1 + 2 + sizeof("ContactPerson") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->libertyPrincipalIdentifier, sizeof("libertyPrincipalIdentifier"));
  len += zx_attr_len(x->contactType, sizeof("contactType"));

  for (se = x->Company; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("Company") - 1);
  for (se = x->GivenName; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("GivenName") - 1);
  for (se = x->SurName; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("SurName") - 1);
  for (se = x->EmailAddress; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("EmailAddress") - 1);
  for (se = x->TelephoneNumber; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("TelephoneNumber") - 1);
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_m20_ContactPerson) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_m20_ContactPerson(struct zxmd_m20_ContactPerson_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ContactPerson", sizeof("ContactPerson") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->libertyPrincipalIdentifier, "libertyPrincipalIdentifier", sizeof("libertyPrincipalIdentifier")-1);
  p = zx_attr_enc(p, x->contactType, "contactType", sizeof("contactType")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->Company; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "Company", sizeof("Company") - 1);
  for (se = x->GivenName; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "GivenName", sizeof("GivenName") - 1);
  for (se = x->SurName; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "SurName", sizeof("SurName") - 1);
  for (se = x->EmailAddress; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "EmailAddress", sizeof("EmailAddress") - 1);
  for (se = x->TelephoneNumber; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "TelephoneNumber", sizeof("TelephoneNumber") - 1);
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ContactPerson", sizeof("ContactPerson") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_m20_ContactPerson) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_m20_ContactPerson(struct zxmd_m20_ContactPerson_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_m20_ContactPerson) */

struct zx_str_s* zxmd_EASY_ENC_SO_m20_ContactPerson(struct zx_ctx* c, struct zxmd_m20_ContactPerson_s* x )
{
  int len = zxmd_LEN_m20_ContactPerson(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_m20_ContactPerson(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_m20_ContactPerson) */

struct zx_str_s* zxmd_EASY_ENC_WO_m20_ContactPerson(struct zx_ctx* c, struct zxmd_m20_ContactPerson_s* x )
{
  int len = zxmd_LEN_m20_ContactPerson(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_m20_ContactPerson(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   m20_EntitiesDescriptor
#define EL_STRUCT zxmd_m20_EntitiesDescriptor_s
#define EL_NS     m20
#define EL_TAG    EntitiesDescriptor

/* FUNC(zxmd_LEN_m20_EntitiesDescriptor) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_m20_EntitiesDescriptor(struct zxmd_m20_EntitiesDescriptor_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("EntitiesDescriptor") - 1 + 1 + 2 + sizeof("EntitiesDescriptor") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_m20_EntityDescriptor_s* e;
      for (e = x->EntityDescriptor; e; e = (struct zxmd_m20_EntityDescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_EntityDescriptor(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_m20_EntitiesDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_m20_EntitiesDescriptor(struct zxmd_m20_EntitiesDescriptor_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EntitiesDescriptor", sizeof("EntitiesDescriptor") - 1);
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
      struct zxmd_m20_EntityDescriptor_s* e;
      for (e = x->EntityDescriptor; e; e = (struct zxmd_m20_EntityDescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_EntityDescriptor(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EntitiesDescriptor", sizeof("EntitiesDescriptor") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_m20_EntitiesDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_m20_EntitiesDescriptor(struct zxmd_m20_EntitiesDescriptor_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_m20_EntitiesDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_SO_m20_EntitiesDescriptor(struct zx_ctx* c, struct zxmd_m20_EntitiesDescriptor_s* x )
{
  int len = zxmd_LEN_m20_EntitiesDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_m20_EntitiesDescriptor(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_m20_EntitiesDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_WO_m20_EntitiesDescriptor(struct zx_ctx* c, struct zxmd_m20_EntitiesDescriptor_s* x )
{
  int len = zxmd_LEN_m20_EntitiesDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_m20_EntitiesDescriptor(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   m20_EntityDescriptor
#define EL_STRUCT zxmd_m20_EntityDescriptor_s
#define EL_NS     m20
#define EL_TAG    EntityDescriptor

/* FUNC(zxmd_LEN_m20_EntityDescriptor) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_m20_EntityDescriptor(struct zxmd_m20_EntityDescriptor_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("EntityDescriptor") - 1 + 1 + 2 + sizeof("EntityDescriptor") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->providerID, sizeof("providerID"));
  len += zx_attr_len(x->id, sizeof("id"));
  len += zx_attr_len(x->validUntil, sizeof("validUntil"));
  len += zx_attr_len(x->cacheDuration, sizeof("cacheDuration"));

  {
      struct zxmd_m20_IDPDescriptor_s* e;
      for (e = x->IDPDescriptor; e; e = (struct zxmd_m20_IDPDescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_IDPDescriptor(e);
  }
  {
      struct zxmd_m20_SPDescriptor_s* e;
      for (e = x->SPDescriptor; e; e = (struct zxmd_m20_SPDescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_SPDescriptor(e);
  }
  {
      struct zxmd_m20_AffiliationDescriptor_s* e;
      for (e = x->AffiliationDescriptor; e; e = (struct zxmd_m20_AffiliationDescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_AffiliationDescriptor(e);
  }
  {
      struct zxmd_m20_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_m20_ContactPerson_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_ContactPerson(e);
  }
  {
      struct zxmd_m20_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_m20_Organization_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_Organization(e);
  }
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_Extension(e);
  }
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_Signature(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_m20_EntityDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_m20_EntityDescriptor(struct zxmd_m20_EntityDescriptor_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EntityDescriptor", sizeof("EntityDescriptor") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->providerID, "providerID", sizeof("providerID")-1);
  p = zx_attr_enc(p, x->id, "id", sizeof("id")-1);
  p = zx_attr_enc(p, x->validUntil, "validUntil", sizeof("validUntil")-1);
  p = zx_attr_enc(p, x->cacheDuration, "cacheDuration", sizeof("cacheDuration")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxmd_m20_IDPDescriptor_s* e;
      for (e = x->IDPDescriptor; e; e = (struct zxmd_m20_IDPDescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_IDPDescriptor(e, p);
  }
  {
      struct zxmd_m20_SPDescriptor_s* e;
      for (e = x->SPDescriptor; e; e = (struct zxmd_m20_SPDescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_SPDescriptor(e, p);
  }
  {
      struct zxmd_m20_AffiliationDescriptor_s* e;
      for (e = x->AffiliationDescriptor; e; e = (struct zxmd_m20_AffiliationDescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_AffiliationDescriptor(e, p);
  }
  {
      struct zxmd_m20_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_m20_ContactPerson_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_ContactPerson(e, p);
  }
  {
      struct zxmd_m20_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_m20_Organization_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_Organization(e, p);
  }
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_Extension(e, p);
  }
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_Signature(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EntityDescriptor", sizeof("EntityDescriptor") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_m20_EntityDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_m20_EntityDescriptor(struct zxmd_m20_EntityDescriptor_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_m20_EntityDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_SO_m20_EntityDescriptor(struct zx_ctx* c, struct zxmd_m20_EntityDescriptor_s* x )
{
  int len = zxmd_LEN_m20_EntityDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_m20_EntityDescriptor(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_m20_EntityDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_WO_m20_EntityDescriptor(struct zx_ctx* c, struct zxmd_m20_EntityDescriptor_s* x )
{
  int len = zxmd_LEN_m20_EntityDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_m20_EntityDescriptor(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   m20_Extension
#define EL_STRUCT zxmd_m20_Extension_s
#define EL_NS     m20
#define EL_TAG    Extension

/* FUNC(zxmd_LEN_m20_Extension) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_m20_Extension(struct zxmd_m20_Extension_s* x )
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

/* FUNC(zxmd_ENC_SO_m20_Extension) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_m20_Extension(struct zxmd_m20_Extension_s* x, char* p )
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

/* FUNC(zxmd_ENC_WO_m20_Extension) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_m20_Extension(struct zxmd_m20_Extension_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_m20_Extension) */

struct zx_str_s* zxmd_EASY_ENC_SO_m20_Extension(struct zx_ctx* c, struct zxmd_m20_Extension_s* x )
{
  int len = zxmd_LEN_m20_Extension(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_m20_Extension(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_m20_Extension) */

struct zx_str_s* zxmd_EASY_ENC_WO_m20_Extension(struct zx_ctx* c, struct zxmd_m20_Extension_s* x )
{
  int len = zxmd_LEN_m20_Extension(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_m20_Extension(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   m20_IDPDescriptor
#define EL_STRUCT zxmd_m20_IDPDescriptor_s
#define EL_NS     m20
#define EL_TAG    IDPDescriptor

/* FUNC(zxmd_LEN_m20_IDPDescriptor) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_m20_IDPDescriptor(struct zxmd_m20_IDPDescriptor_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("IDPDescriptor") - 1 + 1 + 2 + sizeof("IDPDescriptor") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->protocolSupportEnumeration, sizeof("protocolSupportEnumeration"));
  len += zx_attr_len(x->id, sizeof("id"));
  len += zx_attr_len(x->validUntil, sizeof("validUntil"));
  len += zx_attr_len(x->cacheDuration, sizeof("cacheDuration"));

  {
      struct zxmd_m20_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_m20_KeyDescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_KeyDescriptor(e);
  }
  for (se = x->SoapEndpoint; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("SoapEndpoint") - 1);
  for (se = x->SingleLogoutServiceURL; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("SingleLogoutServiceURL") - 1);
  for (se = x->SingleLogoutServiceReturnURL; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("SingleLogoutServiceReturnURL") - 1);
  for (se = x->FederationTerminationServiceURL; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("FederationTerminationServiceURL") - 1);
  for (se = x->FederationTerminationServiceReturnURL; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("FederationTerminationServiceReturnURL") - 1);
  for (se = x->FederationTerminationNotificationProtocolProfile; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("FederationTerminationNotificationProtocolProfile") - 1);
  for (se = x->SingleLogoutProtocolProfile; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("SingleLogoutProtocolProfile") - 1);
  for (se = x->RegisterNameIdentifierProtocolProfile; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("RegisterNameIdentifierProtocolProfile") - 1);
  for (se = x->RegisterNameIdentifierServiceURL; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("RegisterNameIdentifierServiceURL") - 1);
  for (se = x->RegisterNameIdentifierServiceReturnURL; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("RegisterNameIdentifierServiceReturnURL") - 1);
  for (se = x->NameIdentifierMappingProtocolProfile; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("NameIdentifierMappingProtocolProfile") - 1);
  for (se = x->NameIdentifierMappingEncryptionProfile; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("NameIdentifierMappingEncryptionProfile") - 1);
  {
      struct zxmd_m20_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_m20_Organization_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_Organization(e);
  }
  {
      struct zxmd_m20_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_m20_ContactPerson_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_ContactPerson(e);
  }
  {
      struct zxmd_m20_AdditionalMetaLocation_s* e;
      for (e = x->AdditionalMetaLocation; e; e = (struct zxmd_m20_AdditionalMetaLocation_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_AdditionalMetaLocation(e);
  }
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_Extension(e);
  }
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_Signature(e);
  }
  for (se = x->SingleSignOnServiceURL; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("SingleSignOnServiceURL") - 1);
  for (se = x->SingleSignOnProtocolProfile; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("SingleSignOnProtocolProfile") - 1);
  for (se = x->AuthnServiceURL; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("AuthnServiceURL") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_m20_IDPDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_m20_IDPDescriptor(struct zxmd_m20_IDPDescriptor_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "IDPDescriptor", sizeof("IDPDescriptor") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->protocolSupportEnumeration, "protocolSupportEnumeration", sizeof("protocolSupportEnumeration")-1);
  p = zx_attr_enc(p, x->id, "id", sizeof("id")-1);
  p = zx_attr_enc(p, x->validUntil, "validUntil", sizeof("validUntil")-1);
  p = zx_attr_enc(p, x->cacheDuration, "cacheDuration", sizeof("cacheDuration")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxmd_m20_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_m20_KeyDescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_KeyDescriptor(e, p);
  }
  for (se = x->SoapEndpoint; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "SoapEndpoint", sizeof("SoapEndpoint") - 1);
  for (se = x->SingleLogoutServiceURL; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "SingleLogoutServiceURL", sizeof("SingleLogoutServiceURL") - 1);
  for (se = x->SingleLogoutServiceReturnURL; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "SingleLogoutServiceReturnURL", sizeof("SingleLogoutServiceReturnURL") - 1);
  for (se = x->FederationTerminationServiceURL; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "FederationTerminationServiceURL", sizeof("FederationTerminationServiceURL") - 1);
  for (se = x->FederationTerminationServiceReturnURL; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "FederationTerminationServiceReturnURL", sizeof("FederationTerminationServiceReturnURL") - 1);
  for (se = x->FederationTerminationNotificationProtocolProfile; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "FederationTerminationNotificationProtocolProfile", sizeof("FederationTerminationNotificationProtocolProfile") - 1);
  for (se = x->SingleLogoutProtocolProfile; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "SingleLogoutProtocolProfile", sizeof("SingleLogoutProtocolProfile") - 1);
  for (se = x->RegisterNameIdentifierProtocolProfile; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "RegisterNameIdentifierProtocolProfile", sizeof("RegisterNameIdentifierProtocolProfile") - 1);
  for (se = x->RegisterNameIdentifierServiceURL; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "RegisterNameIdentifierServiceURL", sizeof("RegisterNameIdentifierServiceURL") - 1);
  for (se = x->RegisterNameIdentifierServiceReturnURL; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "RegisterNameIdentifierServiceReturnURL", sizeof("RegisterNameIdentifierServiceReturnURL") - 1);
  for (se = x->NameIdentifierMappingProtocolProfile; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "NameIdentifierMappingProtocolProfile", sizeof("NameIdentifierMappingProtocolProfile") - 1);
  for (se = x->NameIdentifierMappingEncryptionProfile; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "NameIdentifierMappingEncryptionProfile", sizeof("NameIdentifierMappingEncryptionProfile") - 1);
  {
      struct zxmd_m20_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_m20_Organization_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_Organization(e, p);
  }
  {
      struct zxmd_m20_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_m20_ContactPerson_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_ContactPerson(e, p);
  }
  {
      struct zxmd_m20_AdditionalMetaLocation_s* e;
      for (e = x->AdditionalMetaLocation; e; e = (struct zxmd_m20_AdditionalMetaLocation_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_AdditionalMetaLocation(e, p);
  }
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_Extension(e, p);
  }
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_Signature(e, p);
  }
  for (se = x->SingleSignOnServiceURL; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "SingleSignOnServiceURL", sizeof("SingleSignOnServiceURL") - 1);
  for (se = x->SingleSignOnProtocolProfile; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "SingleSignOnProtocolProfile", sizeof("SingleSignOnProtocolProfile") - 1);
  for (se = x->AuthnServiceURL; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "AuthnServiceURL", sizeof("AuthnServiceURL") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "IDPDescriptor", sizeof("IDPDescriptor") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_m20_IDPDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_m20_IDPDescriptor(struct zxmd_m20_IDPDescriptor_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_m20_IDPDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_SO_m20_IDPDescriptor(struct zx_ctx* c, struct zxmd_m20_IDPDescriptor_s* x )
{
  int len = zxmd_LEN_m20_IDPDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_m20_IDPDescriptor(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_m20_IDPDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_WO_m20_IDPDescriptor(struct zx_ctx* c, struct zxmd_m20_IDPDescriptor_s* x )
{
  int len = zxmd_LEN_m20_IDPDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_m20_IDPDescriptor(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   m20_KeyDescriptor
#define EL_STRUCT zxmd_m20_KeyDescriptor_s
#define EL_NS     m20
#define EL_TAG    KeyDescriptor

/* FUNC(zxmd_LEN_m20_KeyDescriptor) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_m20_KeyDescriptor(struct zxmd_m20_KeyDescriptor_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("KeyDescriptor") - 1 + 1 + 2 + sizeof("KeyDescriptor") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->use, sizeof("use"));

  for (se = x->EncryptionMethod; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("EncryptionMethod") - 1);
  for (se = x->KeySize; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("KeySize") - 1);
  {
      struct zxmd_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_KeyInfo(e);
  }
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_m20_KeyDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_m20_KeyDescriptor(struct zxmd_m20_KeyDescriptor_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "KeyDescriptor", sizeof("KeyDescriptor") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->use, "use", sizeof("use")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->EncryptionMethod; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "EncryptionMethod", sizeof("EncryptionMethod") - 1);
  for (se = x->KeySize; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "KeySize", sizeof("KeySize") - 1);
  {
      struct zxmd_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_KeyInfo(e, p);
  }
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "KeyDescriptor", sizeof("KeyDescriptor") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_m20_KeyDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_m20_KeyDescriptor(struct zxmd_m20_KeyDescriptor_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_m20_KeyDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_SO_m20_KeyDescriptor(struct zx_ctx* c, struct zxmd_m20_KeyDescriptor_s* x )
{
  int len = zxmd_LEN_m20_KeyDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_m20_KeyDescriptor(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_m20_KeyDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_WO_m20_KeyDescriptor(struct zx_ctx* c, struct zxmd_m20_KeyDescriptor_s* x )
{
  int len = zxmd_LEN_m20_KeyDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_m20_KeyDescriptor(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   m20_Organization
#define EL_STRUCT zxmd_m20_Organization_s
#define EL_NS     m20
#define EL_TAG    Organization

/* FUNC(zxmd_LEN_m20_Organization) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_m20_Organization(struct zxmd_m20_Organization_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Organization") - 1 + 1 + 2 + sizeof("Organization") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_m20_OrganizationName_s* e;
      for (e = x->OrganizationName; e; e = (struct zxmd_m20_OrganizationName_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_OrganizationName(e);
  }
  {
      struct zxmd_m20_OrganizationDisplayName_s* e;
      for (e = x->OrganizationDisplayName; e; e = (struct zxmd_m20_OrganizationDisplayName_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_OrganizationDisplayName(e);
  }
  {
      struct zxmd_m20_OrganizationURL_s* e;
      for (e = x->OrganizationURL; e; e = (struct zxmd_m20_OrganizationURL_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_OrganizationURL(e);
  }
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_m20_Organization) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_m20_Organization(struct zxmd_m20_Organization_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Organization", sizeof("Organization") - 1);
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
      struct zxmd_m20_OrganizationName_s* e;
      for (e = x->OrganizationName; e; e = (struct zxmd_m20_OrganizationName_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_OrganizationName(e, p);
  }
  {
      struct zxmd_m20_OrganizationDisplayName_s* e;
      for (e = x->OrganizationDisplayName; e; e = (struct zxmd_m20_OrganizationDisplayName_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_OrganizationDisplayName(e, p);
  }
  {
      struct zxmd_m20_OrganizationURL_s* e;
      for (e = x->OrganizationURL; e; e = (struct zxmd_m20_OrganizationURL_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_OrganizationURL(e, p);
  }
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Organization", sizeof("Organization") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_m20_Organization) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_m20_Organization(struct zxmd_m20_Organization_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_m20_Organization) */

struct zx_str_s* zxmd_EASY_ENC_SO_m20_Organization(struct zx_ctx* c, struct zxmd_m20_Organization_s* x )
{
  int len = zxmd_LEN_m20_Organization(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_m20_Organization(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_m20_Organization) */

struct zx_str_s* zxmd_EASY_ENC_WO_m20_Organization(struct zx_ctx* c, struct zxmd_m20_Organization_s* x )
{
  int len = zxmd_LEN_m20_Organization(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_m20_Organization(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   m20_OrganizationDisplayName
#define EL_STRUCT zxmd_m20_OrganizationDisplayName_s
#define EL_NS     m20
#define EL_TAG    OrganizationDisplayName

/* FUNC(zxmd_LEN_m20_OrganizationDisplayName) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_m20_OrganizationDisplayName(struct zxmd_m20_OrganizationDisplayName_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("OrganizationDisplayName") - 1 + 1 + 2 + sizeof("OrganizationDisplayName") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->lang, sizeof("lang"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_m20_OrganizationDisplayName) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_m20_OrganizationDisplayName(struct zxmd_m20_OrganizationDisplayName_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "OrganizationDisplayName", sizeof("OrganizationDisplayName") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->lang, "lang", sizeof("lang")-1);


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
  ZX_OUT_MEM(p, "OrganizationDisplayName", sizeof("OrganizationDisplayName") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_m20_OrganizationDisplayName) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_m20_OrganizationDisplayName(struct zxmd_m20_OrganizationDisplayName_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_m20_OrganizationDisplayName) */

struct zx_str_s* zxmd_EASY_ENC_SO_m20_OrganizationDisplayName(struct zx_ctx* c, struct zxmd_m20_OrganizationDisplayName_s* x )
{
  int len = zxmd_LEN_m20_OrganizationDisplayName(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_m20_OrganizationDisplayName(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_m20_OrganizationDisplayName) */

struct zx_str_s* zxmd_EASY_ENC_WO_m20_OrganizationDisplayName(struct zx_ctx* c, struct zxmd_m20_OrganizationDisplayName_s* x )
{
  int len = zxmd_LEN_m20_OrganizationDisplayName(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_m20_OrganizationDisplayName(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   m20_OrganizationName
#define EL_STRUCT zxmd_m20_OrganizationName_s
#define EL_NS     m20
#define EL_TAG    OrganizationName

/* FUNC(zxmd_LEN_m20_OrganizationName) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_m20_OrganizationName(struct zxmd_m20_OrganizationName_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("OrganizationName") - 1 + 1 + 2 + sizeof("OrganizationName") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->lang, sizeof("lang"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_m20_OrganizationName) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_m20_OrganizationName(struct zxmd_m20_OrganizationName_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "OrganizationName", sizeof("OrganizationName") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->lang, "lang", sizeof("lang")-1);


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
  ZX_OUT_MEM(p, "OrganizationName", sizeof("OrganizationName") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_m20_OrganizationName) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_m20_OrganizationName(struct zxmd_m20_OrganizationName_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_m20_OrganizationName) */

struct zx_str_s* zxmd_EASY_ENC_SO_m20_OrganizationName(struct zx_ctx* c, struct zxmd_m20_OrganizationName_s* x )
{
  int len = zxmd_LEN_m20_OrganizationName(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_m20_OrganizationName(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_m20_OrganizationName) */

struct zx_str_s* zxmd_EASY_ENC_WO_m20_OrganizationName(struct zx_ctx* c, struct zxmd_m20_OrganizationName_s* x )
{
  int len = zxmd_LEN_m20_OrganizationName(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_m20_OrganizationName(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   m20_OrganizationURL
#define EL_STRUCT zxmd_m20_OrganizationURL_s
#define EL_NS     m20
#define EL_TAG    OrganizationURL

/* FUNC(zxmd_LEN_m20_OrganizationURL) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_m20_OrganizationURL(struct zxmd_m20_OrganizationURL_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("OrganizationURL") - 1 + 1 + 2 + sizeof("OrganizationURL") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->lang, sizeof("lang"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_m20_OrganizationURL) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_m20_OrganizationURL(struct zxmd_m20_OrganizationURL_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "OrganizationURL", sizeof("OrganizationURL") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->lang, "lang", sizeof("lang")-1);


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
  ZX_OUT_MEM(p, "OrganizationURL", sizeof("OrganizationURL") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_m20_OrganizationURL) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_m20_OrganizationURL(struct zxmd_m20_OrganizationURL_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_m20_OrganizationURL) */

struct zx_str_s* zxmd_EASY_ENC_SO_m20_OrganizationURL(struct zx_ctx* c, struct zxmd_m20_OrganizationURL_s* x )
{
  int len = zxmd_LEN_m20_OrganizationURL(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_m20_OrganizationURL(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_m20_OrganizationURL) */

struct zx_str_s* zxmd_EASY_ENC_WO_m20_OrganizationURL(struct zx_ctx* c, struct zxmd_m20_OrganizationURL_s* x )
{
  int len = zxmd_LEN_m20_OrganizationURL(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_m20_OrganizationURL(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   m20_SPDescriptor
#define EL_STRUCT zxmd_m20_SPDescriptor_s
#define EL_NS     m20
#define EL_TAG    SPDescriptor

/* FUNC(zxmd_LEN_m20_SPDescriptor) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_m20_SPDescriptor(struct zxmd_m20_SPDescriptor_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SPDescriptor") - 1 + 1 + 2 + sizeof("SPDescriptor") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->protocolSupportEnumeration, sizeof("protocolSupportEnumeration"));
  len += zx_attr_len(x->id, sizeof("id"));
  len += zx_attr_len(x->validUntil, sizeof("validUntil"));
  len += zx_attr_len(x->cacheDuration, sizeof("cacheDuration"));

  {
      struct zxmd_m20_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_m20_KeyDescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_KeyDescriptor(e);
  }
  for (se = x->SoapEndpoint; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("SoapEndpoint") - 1);
  for (se = x->SingleLogoutServiceURL; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("SingleLogoutServiceURL") - 1);
  for (se = x->SingleLogoutServiceReturnURL; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("SingleLogoutServiceReturnURL") - 1);
  for (se = x->FederationTerminationServiceURL; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("FederationTerminationServiceURL") - 1);
  for (se = x->FederationTerminationServiceReturnURL; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("FederationTerminationServiceReturnURL") - 1);
  for (se = x->FederationTerminationNotificationProtocolProfile; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("FederationTerminationNotificationProtocolProfile") - 1);
  for (se = x->SingleLogoutProtocolProfile; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("SingleLogoutProtocolProfile") - 1);
  for (se = x->RegisterNameIdentifierProtocolProfile; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("RegisterNameIdentifierProtocolProfile") - 1);
  for (se = x->RegisterNameIdentifierServiceURL; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("RegisterNameIdentifierServiceURL") - 1);
  for (se = x->RegisterNameIdentifierServiceReturnURL; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("RegisterNameIdentifierServiceReturnURL") - 1);
  for (se = x->NameIdentifierMappingProtocolProfile; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("NameIdentifierMappingProtocolProfile") - 1);
  for (se = x->NameIdentifierMappingEncryptionProfile; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("NameIdentifierMappingEncryptionProfile") - 1);
  {
      struct zxmd_m20_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_m20_Organization_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_Organization(e);
  }
  {
      struct zxmd_m20_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_m20_ContactPerson_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_ContactPerson(e);
  }
  {
      struct zxmd_m20_AdditionalMetaLocation_s* e;
      for (e = x->AdditionalMetaLocation; e; e = (struct zxmd_m20_AdditionalMetaLocation_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_AdditionalMetaLocation(e);
  }
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_Extension(e);
  }
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_Signature(e);
  }
  {
      struct zxmd_m20_AssertionConsumerServiceURL_s* e;
      for (e = x->AssertionConsumerServiceURL; e; e = (struct zxmd_m20_AssertionConsumerServiceURL_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_AssertionConsumerServiceURL(e);
  }
  for (se = x->AuthnRequestsSigned; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("AuthnRequestsSigned") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_m20_SPDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_m20_SPDescriptor(struct zxmd_m20_SPDescriptor_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SPDescriptor", sizeof("SPDescriptor") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->protocolSupportEnumeration, "protocolSupportEnumeration", sizeof("protocolSupportEnumeration")-1);
  p = zx_attr_enc(p, x->id, "id", sizeof("id")-1);
  p = zx_attr_enc(p, x->validUntil, "validUntil", sizeof("validUntil")-1);
  p = zx_attr_enc(p, x->cacheDuration, "cacheDuration", sizeof("cacheDuration")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxmd_m20_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_m20_KeyDescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_KeyDescriptor(e, p);
  }
  for (se = x->SoapEndpoint; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "SoapEndpoint", sizeof("SoapEndpoint") - 1);
  for (se = x->SingleLogoutServiceURL; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "SingleLogoutServiceURL", sizeof("SingleLogoutServiceURL") - 1);
  for (se = x->SingleLogoutServiceReturnURL; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "SingleLogoutServiceReturnURL", sizeof("SingleLogoutServiceReturnURL") - 1);
  for (se = x->FederationTerminationServiceURL; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "FederationTerminationServiceURL", sizeof("FederationTerminationServiceURL") - 1);
  for (se = x->FederationTerminationServiceReturnURL; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "FederationTerminationServiceReturnURL", sizeof("FederationTerminationServiceReturnURL") - 1);
  for (se = x->FederationTerminationNotificationProtocolProfile; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "FederationTerminationNotificationProtocolProfile", sizeof("FederationTerminationNotificationProtocolProfile") - 1);
  for (se = x->SingleLogoutProtocolProfile; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "SingleLogoutProtocolProfile", sizeof("SingleLogoutProtocolProfile") - 1);
  for (se = x->RegisterNameIdentifierProtocolProfile; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "RegisterNameIdentifierProtocolProfile", sizeof("RegisterNameIdentifierProtocolProfile") - 1);
  for (se = x->RegisterNameIdentifierServiceURL; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "RegisterNameIdentifierServiceURL", sizeof("RegisterNameIdentifierServiceURL") - 1);
  for (se = x->RegisterNameIdentifierServiceReturnURL; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "RegisterNameIdentifierServiceReturnURL", sizeof("RegisterNameIdentifierServiceReturnURL") - 1);
  for (se = x->NameIdentifierMappingProtocolProfile; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "NameIdentifierMappingProtocolProfile", sizeof("NameIdentifierMappingProtocolProfile") - 1);
  for (se = x->NameIdentifierMappingEncryptionProfile; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "NameIdentifierMappingEncryptionProfile", sizeof("NameIdentifierMappingEncryptionProfile") - 1);
  {
      struct zxmd_m20_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_m20_Organization_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_Organization(e, p);
  }
  {
      struct zxmd_m20_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_m20_ContactPerson_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_ContactPerson(e, p);
  }
  {
      struct zxmd_m20_AdditionalMetaLocation_s* e;
      for (e = x->AdditionalMetaLocation; e; e = (struct zxmd_m20_AdditionalMetaLocation_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_AdditionalMetaLocation(e, p);
  }
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_Extension(e, p);
  }
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zxmd_m20_AssertionConsumerServiceURL_s* e;
      for (e = x->AssertionConsumerServiceURL; e; e = (struct zxmd_m20_AssertionConsumerServiceURL_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_AssertionConsumerServiceURL(e, p);
  }
  for (se = x->AuthnRequestsSigned; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "AuthnRequestsSigned", sizeof("AuthnRequestsSigned") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SPDescriptor", sizeof("SPDescriptor") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_m20_SPDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_m20_SPDescriptor(struct zxmd_m20_SPDescriptor_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_m20_SPDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_SO_m20_SPDescriptor(struct zx_ctx* c, struct zxmd_m20_SPDescriptor_s* x )
{
  int len = zxmd_LEN_m20_SPDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_m20_SPDescriptor(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_m20_SPDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_WO_m20_SPDescriptor(struct zx_ctx* c, struct zxmd_m20_SPDescriptor_s* x )
{
  int len = zxmd_LEN_m20_SPDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_m20_SPDescriptor(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_AdditionalMetadataLocation
#define EL_STRUCT zxmd_md_AdditionalMetadataLocation_s
#define EL_NS     md
#define EL_TAG    AdditionalMetadataLocation

/* FUNC(zxmd_LEN_md_AdditionalMetadataLocation) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_AdditionalMetadataLocation(struct zxmd_md_AdditionalMetadataLocation_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AdditionalMetadataLocation") - 1 + 1 + 2 + sizeof("AdditionalMetadataLocation") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->namespace, sizeof("namespace"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_AdditionalMetadataLocation) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_AdditionalMetadataLocation(struct zxmd_md_AdditionalMetadataLocation_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AdditionalMetadataLocation", sizeof("AdditionalMetadataLocation") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->namespace, "namespace", sizeof("namespace")-1);


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
  ZX_OUT_MEM(p, "AdditionalMetadataLocation", sizeof("AdditionalMetadataLocation") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_AdditionalMetadataLocation) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_AdditionalMetadataLocation(struct zxmd_md_AdditionalMetadataLocation_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_AdditionalMetadataLocation) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zxmd_md_AdditionalMetadataLocation_s* x )
{
  int len = zxmd_LEN_md_AdditionalMetadataLocation(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_AdditionalMetadataLocation(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_AdditionalMetadataLocation) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zxmd_md_AdditionalMetadataLocation_s* x )
{
  int len = zxmd_LEN_md_AdditionalMetadataLocation(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_AdditionalMetadataLocation(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_AffiliationDescriptor
#define EL_STRUCT zxmd_md_AffiliationDescriptor_s
#define EL_NS     md
#define EL_TAG    AffiliationDescriptor

/* FUNC(zxmd_LEN_md_AffiliationDescriptor) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_AffiliationDescriptor(struct zxmd_md_AffiliationDescriptor_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AffiliationDescriptor") - 1 + 1 + 2 + sizeof("AffiliationDescriptor") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->affiliationOwnerID, sizeof("affiliationOwnerID"));
  len += zx_attr_len(x->validUntil, sizeof("validUntil"));
  len += zx_attr_len(x->cacheDuration, sizeof("cacheDuration"));
  len += zx_attr_len(x->ID, sizeof("ID"));

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_Signature(e);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  len += zxmd_LEN_md_Extensions(e);
  }
  for (se = x->AffiliateMember; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("AffiliateMember") - 1);
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_md_KeyDescriptor(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_AffiliationDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_AffiliationDescriptor(struct zxmd_md_AffiliationDescriptor_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AffiliationDescriptor", sizeof("AffiliationDescriptor") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->affiliationOwnerID, "affiliationOwnerID", sizeof("affiliationOwnerID")-1);
  p = zx_attr_enc(p, x->validUntil, "validUntil", sizeof("validUntil")-1);
  p = zx_attr_enc(p, x->cacheDuration, "cacheDuration", sizeof("cacheDuration")-1);
  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_Extensions(e, p);
  }
  for (se = x->AffiliateMember; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "AffiliateMember", sizeof("AffiliateMember") - 1);
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_KeyDescriptor(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AffiliationDescriptor", sizeof("AffiliationDescriptor") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_AffiliationDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_AffiliationDescriptor(struct zxmd_md_AffiliationDescriptor_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_AffiliationDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_AffiliationDescriptor(struct zx_ctx* c, struct zxmd_md_AffiliationDescriptor_s* x )
{
  int len = zxmd_LEN_md_AffiliationDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_AffiliationDescriptor(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_AffiliationDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_AffiliationDescriptor(struct zx_ctx* c, struct zxmd_md_AffiliationDescriptor_s* x )
{
  int len = zxmd_LEN_md_AffiliationDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_AffiliationDescriptor(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_ArtifactResolutionService
#define EL_STRUCT zxmd_md_ArtifactResolutionService_s
#define EL_NS     md
#define EL_TAG    ArtifactResolutionService

/* FUNC(zxmd_LEN_md_ArtifactResolutionService) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_ArtifactResolutionService(struct zxmd_md_ArtifactResolutionService_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ArtifactResolutionService") - 1 + 1 + 2 + sizeof("ArtifactResolutionService") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Binding, sizeof("Binding"));
  len += zx_attr_len(x->Location, sizeof("Location"));
  len += zx_attr_len(x->ResponseLocation, sizeof("ResponseLocation"));
  len += zx_attr_len(x->index, sizeof("index"));
  len += zx_attr_len(x->isDefault, sizeof("isDefault"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_ArtifactResolutionService) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_ArtifactResolutionService(struct zxmd_md_ArtifactResolutionService_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ArtifactResolutionService", sizeof("ArtifactResolutionService") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Binding, "Binding", sizeof("Binding")-1);
  p = zx_attr_enc(p, x->Location, "Location", sizeof("Location")-1);
  p = zx_attr_enc(p, x->ResponseLocation, "ResponseLocation", sizeof("ResponseLocation")-1);
  p = zx_attr_enc(p, x->index, "index", sizeof("index")-1);
  p = zx_attr_enc(p, x->isDefault, "isDefault", sizeof("isDefault")-1);


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
  ZX_OUT_MEM(p, "ArtifactResolutionService", sizeof("ArtifactResolutionService") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_ArtifactResolutionService) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_ArtifactResolutionService(struct zxmd_md_ArtifactResolutionService_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_ArtifactResolutionService) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_ArtifactResolutionService(struct zx_ctx* c, struct zxmd_md_ArtifactResolutionService_s* x )
{
  int len = zxmd_LEN_md_ArtifactResolutionService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_ArtifactResolutionService(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_ArtifactResolutionService) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_ArtifactResolutionService(struct zx_ctx* c, struct zxmd_md_ArtifactResolutionService_s* x )
{
  int len = zxmd_LEN_md_ArtifactResolutionService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_ArtifactResolutionService(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_AssertionConsumerService
#define EL_STRUCT zxmd_md_AssertionConsumerService_s
#define EL_NS     md
#define EL_TAG    AssertionConsumerService

/* FUNC(zxmd_LEN_md_AssertionConsumerService) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_AssertionConsumerService(struct zxmd_md_AssertionConsumerService_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AssertionConsumerService") - 1 + 1 + 2 + sizeof("AssertionConsumerService") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Binding, sizeof("Binding"));
  len += zx_attr_len(x->Location, sizeof("Location"));
  len += zx_attr_len(x->ResponseLocation, sizeof("ResponseLocation"));
  len += zx_attr_len(x->index, sizeof("index"));
  len += zx_attr_len(x->isDefault, sizeof("isDefault"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_AssertionConsumerService) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_AssertionConsumerService(struct zxmd_md_AssertionConsumerService_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AssertionConsumerService", sizeof("AssertionConsumerService") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Binding, "Binding", sizeof("Binding")-1);
  p = zx_attr_enc(p, x->Location, "Location", sizeof("Location")-1);
  p = zx_attr_enc(p, x->ResponseLocation, "ResponseLocation", sizeof("ResponseLocation")-1);
  p = zx_attr_enc(p, x->index, "index", sizeof("index")-1);
  p = zx_attr_enc(p, x->isDefault, "isDefault", sizeof("isDefault")-1);


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
  ZX_OUT_MEM(p, "AssertionConsumerService", sizeof("AssertionConsumerService") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_AssertionConsumerService) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_AssertionConsumerService(struct zxmd_md_AssertionConsumerService_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_AssertionConsumerService) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_AssertionConsumerService(struct zx_ctx* c, struct zxmd_md_AssertionConsumerService_s* x )
{
  int len = zxmd_LEN_md_AssertionConsumerService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_AssertionConsumerService(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_AssertionConsumerService) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_AssertionConsumerService(struct zx_ctx* c, struct zxmd_md_AssertionConsumerService_s* x )
{
  int len = zxmd_LEN_md_AssertionConsumerService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_AssertionConsumerService(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_AssertionIDRequestService
#define EL_STRUCT zxmd_md_AssertionIDRequestService_s
#define EL_NS     md
#define EL_TAG    AssertionIDRequestService

/* FUNC(zxmd_LEN_md_AssertionIDRequestService) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_AssertionIDRequestService(struct zxmd_md_AssertionIDRequestService_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AssertionIDRequestService") - 1 + 1 + 2 + sizeof("AssertionIDRequestService") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Binding, sizeof("Binding"));
  len += zx_attr_len(x->Location, sizeof("Location"));
  len += zx_attr_len(x->ResponseLocation, sizeof("ResponseLocation"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_AssertionIDRequestService) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_AssertionIDRequestService(struct zxmd_md_AssertionIDRequestService_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AssertionIDRequestService", sizeof("AssertionIDRequestService") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Binding, "Binding", sizeof("Binding")-1);
  p = zx_attr_enc(p, x->Location, "Location", sizeof("Location")-1);
  p = zx_attr_enc(p, x->ResponseLocation, "ResponseLocation", sizeof("ResponseLocation")-1);


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
  ZX_OUT_MEM(p, "AssertionIDRequestService", sizeof("AssertionIDRequestService") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_AssertionIDRequestService) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_AssertionIDRequestService(struct zxmd_md_AssertionIDRequestService_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_AssertionIDRequestService) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_AssertionIDRequestService(struct zx_ctx* c, struct zxmd_md_AssertionIDRequestService_s* x )
{
  int len = zxmd_LEN_md_AssertionIDRequestService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_AssertionIDRequestService(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_AssertionIDRequestService) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_AssertionIDRequestService(struct zx_ctx* c, struct zxmd_md_AssertionIDRequestService_s* x )
{
  int len = zxmd_LEN_md_AssertionIDRequestService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_AssertionIDRequestService(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_AttributeAuthorityDescriptor
#define EL_STRUCT zxmd_md_AttributeAuthorityDescriptor_s
#define EL_NS     md
#define EL_TAG    AttributeAuthorityDescriptor

/* FUNC(zxmd_LEN_md_AttributeAuthorityDescriptor) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_AttributeAuthorityDescriptor(struct zxmd_md_AttributeAuthorityDescriptor_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AttributeAuthorityDescriptor") - 1 + 1 + 2 + sizeof("AttributeAuthorityDescriptor") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ID, sizeof("ID"));
  len += zx_attr_len(x->validUntil, sizeof("validUntil"));
  len += zx_attr_len(x->cacheDuration, sizeof("cacheDuration"));
  len += zx_attr_len(x->protocolSupportEnumeration, sizeof("protocolSupportEnumeration"));
  len += zx_attr_len(x->errorURL, sizeof("errorURL"));

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_Signature(e);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  len += zxmd_LEN_md_Extensions(e);
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_md_KeyDescriptor(e);
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n)
	  len += zxmd_LEN_md_Organization(e);
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n)
	  len += zxmd_LEN_md_ContactPerson(e);
  }
  {
      struct zxmd_md_AttributeService_s* e;
      for (e = x->AttributeService; e; e = (struct zxmd_md_AttributeService_s*)e->gg.g.n)
	  len += zxmd_LEN_md_AttributeService(e);
  }
  {
      struct zxmd_md_AssertionIDRequestService_s* e;
      for (e = x->AssertionIDRequestService; e; e = (struct zxmd_md_AssertionIDRequestService_s*)e->gg.g.n)
	  len += zxmd_LEN_md_AssertionIDRequestService(e);
  }
  for (se = x->NameIDFormat; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("NameIDFormat") - 1);
  for (se = x->AttributeProfile; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("AttributeProfile") - 1);
  {
      struct zxmd_sa_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zxmd_sa_Attribute_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_Attribute(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_AttributeAuthorityDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_AttributeAuthorityDescriptor(struct zxmd_md_AttributeAuthorityDescriptor_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AttributeAuthorityDescriptor", sizeof("AttributeAuthorityDescriptor") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);
  p = zx_attr_enc(p, x->validUntil, "validUntil", sizeof("validUntil")-1);
  p = zx_attr_enc(p, x->cacheDuration, "cacheDuration", sizeof("cacheDuration")-1);
  p = zx_attr_enc(p, x->protocolSupportEnumeration, "protocolSupportEnumeration", sizeof("protocolSupportEnumeration")-1);
  p = zx_attr_enc(p, x->errorURL, "errorURL", sizeof("errorURL")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_Extensions(e, p);
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_KeyDescriptor(e, p);
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_Organization(e, p);
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_ContactPerson(e, p);
  }
  {
      struct zxmd_md_AttributeService_s* e;
      for (e = x->AttributeService; e; e = (struct zxmd_md_AttributeService_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_AttributeService(e, p);
  }
  {
      struct zxmd_md_AssertionIDRequestService_s* e;
      for (e = x->AssertionIDRequestService; e; e = (struct zxmd_md_AssertionIDRequestService_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_AssertionIDRequestService(e, p);
  }
  for (se = x->NameIDFormat; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "NameIDFormat", sizeof("NameIDFormat") - 1);
  for (se = x->AttributeProfile; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "AttributeProfile", sizeof("AttributeProfile") - 1);
  {
      struct zxmd_sa_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zxmd_sa_Attribute_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_Attribute(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AttributeAuthorityDescriptor", sizeof("AttributeAuthorityDescriptor") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_AttributeAuthorityDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_AttributeAuthorityDescriptor(struct zxmd_md_AttributeAuthorityDescriptor_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_AttributeAuthorityDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AttributeAuthorityDescriptor_s* x )
{
  int len = zxmd_LEN_md_AttributeAuthorityDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_AttributeAuthorityDescriptor(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_AttributeAuthorityDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AttributeAuthorityDescriptor_s* x )
{
  int len = zxmd_LEN_md_AttributeAuthorityDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_AttributeAuthorityDescriptor(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_AttributeConsumingService
#define EL_STRUCT zxmd_md_AttributeConsumingService_s
#define EL_NS     md
#define EL_TAG    AttributeConsumingService

/* FUNC(zxmd_LEN_md_AttributeConsumingService) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_AttributeConsumingService(struct zxmd_md_AttributeConsumingService_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AttributeConsumingService") - 1 + 1 + 2 + sizeof("AttributeConsumingService") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->index, sizeof("index"));
  len += zx_attr_len(x->isDefault, sizeof("isDefault"));

  {
      struct zxmd_md_ServiceName_s* e;
      for (e = x->ServiceName; e; e = (struct zxmd_md_ServiceName_s*)e->gg.g.n)
	  len += zxmd_LEN_md_ServiceName(e);
  }
  {
      struct zxmd_md_ServiceDescription_s* e;
      for (e = x->ServiceDescription; e; e = (struct zxmd_md_ServiceDescription_s*)e->gg.g.n)
	  len += zxmd_LEN_md_ServiceDescription(e);
  }
  {
      struct zxmd_md_RequestedAttribute_s* e;
      for (e = x->RequestedAttribute; e; e = (struct zxmd_md_RequestedAttribute_s*)e->gg.g.n)
	  len += zxmd_LEN_md_RequestedAttribute(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_AttributeConsumingService) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_AttributeConsumingService(struct zxmd_md_AttributeConsumingService_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AttributeConsumingService", sizeof("AttributeConsumingService") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->index, "index", sizeof("index")-1);
  p = zx_attr_enc(p, x->isDefault, "isDefault", sizeof("isDefault")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxmd_md_ServiceName_s* e;
      for (e = x->ServiceName; e; e = (struct zxmd_md_ServiceName_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_ServiceName(e, p);
  }
  {
      struct zxmd_md_ServiceDescription_s* e;
      for (e = x->ServiceDescription; e; e = (struct zxmd_md_ServiceDescription_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_ServiceDescription(e, p);
  }
  {
      struct zxmd_md_RequestedAttribute_s* e;
      for (e = x->RequestedAttribute; e; e = (struct zxmd_md_RequestedAttribute_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_RequestedAttribute(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AttributeConsumingService", sizeof("AttributeConsumingService") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_AttributeConsumingService) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_AttributeConsumingService(struct zxmd_md_AttributeConsumingService_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_AttributeConsumingService) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_AttributeConsumingService(struct zx_ctx* c, struct zxmd_md_AttributeConsumingService_s* x )
{
  int len = zxmd_LEN_md_AttributeConsumingService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_AttributeConsumingService(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_AttributeConsumingService) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_AttributeConsumingService(struct zx_ctx* c, struct zxmd_md_AttributeConsumingService_s* x )
{
  int len = zxmd_LEN_md_AttributeConsumingService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_AttributeConsumingService(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_AttributeService
#define EL_STRUCT zxmd_md_AttributeService_s
#define EL_NS     md
#define EL_TAG    AttributeService

/* FUNC(zxmd_LEN_md_AttributeService) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_AttributeService(struct zxmd_md_AttributeService_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AttributeService") - 1 + 1 + 2 + sizeof("AttributeService") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Binding, sizeof("Binding"));
  len += zx_attr_len(x->Location, sizeof("Location"));
  len += zx_attr_len(x->ResponseLocation, sizeof("ResponseLocation"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_AttributeService) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_AttributeService(struct zxmd_md_AttributeService_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AttributeService", sizeof("AttributeService") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Binding, "Binding", sizeof("Binding")-1);
  p = zx_attr_enc(p, x->Location, "Location", sizeof("Location")-1);
  p = zx_attr_enc(p, x->ResponseLocation, "ResponseLocation", sizeof("ResponseLocation")-1);


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
  ZX_OUT_MEM(p, "AttributeService", sizeof("AttributeService") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_AttributeService) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_AttributeService(struct zxmd_md_AttributeService_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_AttributeService) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_AttributeService(struct zx_ctx* c, struct zxmd_md_AttributeService_s* x )
{
  int len = zxmd_LEN_md_AttributeService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_AttributeService(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_AttributeService) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_AttributeService(struct zx_ctx* c, struct zxmd_md_AttributeService_s* x )
{
  int len = zxmd_LEN_md_AttributeService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_AttributeService(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_AuthnAuthorityDescriptor
#define EL_STRUCT zxmd_md_AuthnAuthorityDescriptor_s
#define EL_NS     md
#define EL_TAG    AuthnAuthorityDescriptor

/* FUNC(zxmd_LEN_md_AuthnAuthorityDescriptor) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_AuthnAuthorityDescriptor(struct zxmd_md_AuthnAuthorityDescriptor_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthnAuthorityDescriptor") - 1 + 1 + 2 + sizeof("AuthnAuthorityDescriptor") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ID, sizeof("ID"));
  len += zx_attr_len(x->validUntil, sizeof("validUntil"));
  len += zx_attr_len(x->cacheDuration, sizeof("cacheDuration"));
  len += zx_attr_len(x->protocolSupportEnumeration, sizeof("protocolSupportEnumeration"));
  len += zx_attr_len(x->errorURL, sizeof("errorURL"));

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_Signature(e);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  len += zxmd_LEN_md_Extensions(e);
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_md_KeyDescriptor(e);
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n)
	  len += zxmd_LEN_md_Organization(e);
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n)
	  len += zxmd_LEN_md_ContactPerson(e);
  }
  {
      struct zxmd_md_AuthnQueryService_s* e;
      for (e = x->AuthnQueryService; e; e = (struct zxmd_md_AuthnQueryService_s*)e->gg.g.n)
	  len += zxmd_LEN_md_AuthnQueryService(e);
  }
  {
      struct zxmd_md_AssertionIDRequestService_s* e;
      for (e = x->AssertionIDRequestService; e; e = (struct zxmd_md_AssertionIDRequestService_s*)e->gg.g.n)
	  len += zxmd_LEN_md_AssertionIDRequestService(e);
  }
  for (se = x->NameIDFormat; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("NameIDFormat") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_AuthnAuthorityDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_AuthnAuthorityDescriptor(struct zxmd_md_AuthnAuthorityDescriptor_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthnAuthorityDescriptor", sizeof("AuthnAuthorityDescriptor") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);
  p = zx_attr_enc(p, x->validUntil, "validUntil", sizeof("validUntil")-1);
  p = zx_attr_enc(p, x->cacheDuration, "cacheDuration", sizeof("cacheDuration")-1);
  p = zx_attr_enc(p, x->protocolSupportEnumeration, "protocolSupportEnumeration", sizeof("protocolSupportEnumeration")-1);
  p = zx_attr_enc(p, x->errorURL, "errorURL", sizeof("errorURL")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_Extensions(e, p);
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_KeyDescriptor(e, p);
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_Organization(e, p);
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_ContactPerson(e, p);
  }
  {
      struct zxmd_md_AuthnQueryService_s* e;
      for (e = x->AuthnQueryService; e; e = (struct zxmd_md_AuthnQueryService_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_AuthnQueryService(e, p);
  }
  {
      struct zxmd_md_AssertionIDRequestService_s* e;
      for (e = x->AssertionIDRequestService; e; e = (struct zxmd_md_AssertionIDRequestService_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_AssertionIDRequestService(e, p);
  }
  for (se = x->NameIDFormat; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "NameIDFormat", sizeof("NameIDFormat") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthnAuthorityDescriptor", sizeof("AuthnAuthorityDescriptor") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_AuthnAuthorityDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_AuthnAuthorityDescriptor(struct zxmd_md_AuthnAuthorityDescriptor_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_AuthnAuthorityDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AuthnAuthorityDescriptor_s* x )
{
  int len = zxmd_LEN_md_AuthnAuthorityDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_AuthnAuthorityDescriptor(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_AuthnAuthorityDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AuthnAuthorityDescriptor_s* x )
{
  int len = zxmd_LEN_md_AuthnAuthorityDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_AuthnAuthorityDescriptor(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_AuthnQueryService
#define EL_STRUCT zxmd_md_AuthnQueryService_s
#define EL_NS     md
#define EL_TAG    AuthnQueryService

/* FUNC(zxmd_LEN_md_AuthnQueryService) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_AuthnQueryService(struct zxmd_md_AuthnQueryService_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthnQueryService") - 1 + 1 + 2 + sizeof("AuthnQueryService") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Binding, sizeof("Binding"));
  len += zx_attr_len(x->Location, sizeof("Location"));
  len += zx_attr_len(x->ResponseLocation, sizeof("ResponseLocation"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_AuthnQueryService) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_AuthnQueryService(struct zxmd_md_AuthnQueryService_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthnQueryService", sizeof("AuthnQueryService") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Binding, "Binding", sizeof("Binding")-1);
  p = zx_attr_enc(p, x->Location, "Location", sizeof("Location")-1);
  p = zx_attr_enc(p, x->ResponseLocation, "ResponseLocation", sizeof("ResponseLocation")-1);


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
  ZX_OUT_MEM(p, "AuthnQueryService", sizeof("AuthnQueryService") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_AuthnQueryService) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_AuthnQueryService(struct zxmd_md_AuthnQueryService_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_AuthnQueryService) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_AuthnQueryService(struct zx_ctx* c, struct zxmd_md_AuthnQueryService_s* x )
{
  int len = zxmd_LEN_md_AuthnQueryService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_AuthnQueryService(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_AuthnQueryService) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_AuthnQueryService(struct zx_ctx* c, struct zxmd_md_AuthnQueryService_s* x )
{
  int len = zxmd_LEN_md_AuthnQueryService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_AuthnQueryService(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_AuthzService
#define EL_STRUCT zxmd_md_AuthzService_s
#define EL_NS     md
#define EL_TAG    AuthzService

/* FUNC(zxmd_LEN_md_AuthzService) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_AuthzService(struct zxmd_md_AuthzService_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthzService") - 1 + 1 + 2 + sizeof("AuthzService") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Binding, sizeof("Binding"));
  len += zx_attr_len(x->Location, sizeof("Location"));
  len += zx_attr_len(x->ResponseLocation, sizeof("ResponseLocation"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_AuthzService) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_AuthzService(struct zxmd_md_AuthzService_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthzService", sizeof("AuthzService") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Binding, "Binding", sizeof("Binding")-1);
  p = zx_attr_enc(p, x->Location, "Location", sizeof("Location")-1);
  p = zx_attr_enc(p, x->ResponseLocation, "ResponseLocation", sizeof("ResponseLocation")-1);


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
  ZX_OUT_MEM(p, "AuthzService", sizeof("AuthzService") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_AuthzService) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_AuthzService(struct zxmd_md_AuthzService_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_AuthzService) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_AuthzService(struct zx_ctx* c, struct zxmd_md_AuthzService_s* x )
{
  int len = zxmd_LEN_md_AuthzService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_AuthzService(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_AuthzService) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_AuthzService(struct zx_ctx* c, struct zxmd_md_AuthzService_s* x )
{
  int len = zxmd_LEN_md_AuthzService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_AuthzService(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_ContactPerson
#define EL_STRUCT zxmd_md_ContactPerson_s
#define EL_NS     md
#define EL_TAG    ContactPerson

/* FUNC(zxmd_LEN_md_ContactPerson) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_ContactPerson(struct zxmd_md_ContactPerson_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ContactPerson") - 1 + 1 + 2 + sizeof("ContactPerson") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->contactType, sizeof("contactType"));

  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  len += zxmd_LEN_md_Extensions(e);
  }
  for (se = x->Company; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("Company") - 1);
  for (se = x->GivenName; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("GivenName") - 1);
  for (se = x->SurName; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("SurName") - 1);
  for (se = x->EmailAddress; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("EmailAddress") - 1);
  for (se = x->TelephoneNumber; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("TelephoneNumber") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_ContactPerson) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_ContactPerson(struct zxmd_md_ContactPerson_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ContactPerson", sizeof("ContactPerson") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->contactType, "contactType", sizeof("contactType")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_Extensions(e, p);
  }
  for (se = x->Company; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "Company", sizeof("Company") - 1);
  for (se = x->GivenName; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "GivenName", sizeof("GivenName") - 1);
  for (se = x->SurName; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "SurName", sizeof("SurName") - 1);
  for (se = x->EmailAddress; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "EmailAddress", sizeof("EmailAddress") - 1);
  for (se = x->TelephoneNumber; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "TelephoneNumber", sizeof("TelephoneNumber") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ContactPerson", sizeof("ContactPerson") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_ContactPerson) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_ContactPerson(struct zxmd_md_ContactPerson_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_ContactPerson) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_ContactPerson(struct zx_ctx* c, struct zxmd_md_ContactPerson_s* x )
{
  int len = zxmd_LEN_md_ContactPerson(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_ContactPerson(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_ContactPerson) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_ContactPerson(struct zx_ctx* c, struct zxmd_md_ContactPerson_s* x )
{
  int len = zxmd_LEN_md_ContactPerson(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_ContactPerson(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_EncryptionMethod
#define EL_STRUCT zxmd_md_EncryptionMethod_s
#define EL_NS     md
#define EL_TAG    EncryptionMethod

/* FUNC(zxmd_LEN_md_EncryptionMethod) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_EncryptionMethod(struct zxmd_md_EncryptionMethod_s* x )
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
    len += zxmd_LEN_simple_elem(se, sizeof("KeySize") - 1);
  for (se = x->OAEPparams; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("OAEPparams") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_EncryptionMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_EncryptionMethod(struct zxmd_md_EncryptionMethod_s* x, char* p )
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
    p = zxmd_ENC_SO_simple_elem(se, p, "KeySize", sizeof("KeySize") - 1);
  for (se = x->OAEPparams; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "OAEPparams", sizeof("OAEPparams") - 1);


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

/* FUNC(zxmd_ENC_WO_md_EncryptionMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_EncryptionMethod(struct zxmd_md_EncryptionMethod_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_EncryptionMethod) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_EncryptionMethod(struct zx_ctx* c, struct zxmd_md_EncryptionMethod_s* x )
{
  int len = zxmd_LEN_md_EncryptionMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_EncryptionMethod(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_EncryptionMethod) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_EncryptionMethod(struct zx_ctx* c, struct zxmd_md_EncryptionMethod_s* x )
{
  int len = zxmd_LEN_md_EncryptionMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_EncryptionMethod(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_EntitiesDescriptor
#define EL_STRUCT zxmd_md_EntitiesDescriptor_s
#define EL_NS     md
#define EL_TAG    EntitiesDescriptor

/* FUNC(zxmd_LEN_md_EntitiesDescriptor) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_EntitiesDescriptor(struct zxmd_md_EntitiesDescriptor_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("EntitiesDescriptor") - 1 + 1 + 2 + sizeof("EntitiesDescriptor") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->validUntil, sizeof("validUntil"));
  len += zx_attr_len(x->cacheDuration, sizeof("cacheDuration"));
  len += zx_attr_len(x->ID, sizeof("ID"));
  len += zx_attr_len(x->Name, sizeof("Name"));

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_Signature(e);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  len += zxmd_LEN_md_Extensions(e);
  }
  {
      struct zxmd_md_EntityDescriptor_s* e;
      for (e = x->EntityDescriptor; e; e = (struct zxmd_md_EntityDescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_md_EntityDescriptor(e);
  }
  {
      struct zxmd_md_EntitiesDescriptor_s* e;
      for (e = x->EntitiesDescriptor; e; e = (struct zxmd_md_EntitiesDescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_md_EntitiesDescriptor(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_EntitiesDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_EntitiesDescriptor(struct zxmd_md_EntitiesDescriptor_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EntitiesDescriptor", sizeof("EntitiesDescriptor") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->validUntil, "validUntil", sizeof("validUntil")-1);
  p = zx_attr_enc(p, x->cacheDuration, "cacheDuration", sizeof("cacheDuration")-1);
  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);
  p = zx_attr_enc(p, x->Name, "Name", sizeof("Name")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_Extensions(e, p);
  }
  {
      struct zxmd_md_EntityDescriptor_s* e;
      for (e = x->EntityDescriptor; e; e = (struct zxmd_md_EntityDescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_EntityDescriptor(e, p);
  }
  {
      struct zxmd_md_EntitiesDescriptor_s* e;
      for (e = x->EntitiesDescriptor; e; e = (struct zxmd_md_EntitiesDescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_EntitiesDescriptor(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EntitiesDescriptor", sizeof("EntitiesDescriptor") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_EntitiesDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_EntitiesDescriptor(struct zxmd_md_EntitiesDescriptor_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_EntitiesDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_EntitiesDescriptor(struct zx_ctx* c, struct zxmd_md_EntitiesDescriptor_s* x )
{
  int len = zxmd_LEN_md_EntitiesDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_EntitiesDescriptor(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_EntitiesDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_EntitiesDescriptor(struct zx_ctx* c, struct zxmd_md_EntitiesDescriptor_s* x )
{
  int len = zxmd_LEN_md_EntitiesDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_EntitiesDescriptor(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_EntityDescriptor
#define EL_STRUCT zxmd_md_EntityDescriptor_s
#define EL_NS     md
#define EL_TAG    EntityDescriptor

/* FUNC(zxmd_LEN_md_EntityDescriptor) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_EntityDescriptor(struct zxmd_md_EntityDescriptor_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("EntityDescriptor") - 1 + 1 + 2 + sizeof("EntityDescriptor") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->entityID, sizeof("entityID"));
  len += zx_attr_len(x->validUntil, sizeof("validUntil"));
  len += zx_attr_len(x->cacheDuration, sizeof("cacheDuration"));
  len += zx_attr_len(x->ID, sizeof("ID"));

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_Signature(e);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  len += zxmd_LEN_md_Extensions(e);
  }
  {
      struct zxmd_md_RoleDescriptor_s* e;
      for (e = x->RoleDescriptor; e; e = (struct zxmd_md_RoleDescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_md_RoleDescriptor(e);
  }
  {
      struct zxmd_md_IDPSSODescriptor_s* e;
      for (e = x->IDPSSODescriptor; e; e = (struct zxmd_md_IDPSSODescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_md_IDPSSODescriptor(e);
  }
  {
      struct zxmd_md_SPSSODescriptor_s* e;
      for (e = x->SPSSODescriptor; e; e = (struct zxmd_md_SPSSODescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_md_SPSSODescriptor(e);
  }
  {
      struct zxmd_md_AuthnAuthorityDescriptor_s* e;
      for (e = x->AuthnAuthorityDescriptor; e; e = (struct zxmd_md_AuthnAuthorityDescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_md_AuthnAuthorityDescriptor(e);
  }
  {
      struct zxmd_md_AttributeAuthorityDescriptor_s* e;
      for (e = x->AttributeAuthorityDescriptor; e; e = (struct zxmd_md_AttributeAuthorityDescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_md_AttributeAuthorityDescriptor(e);
  }
  {
      struct zxmd_md_PDPDescriptor_s* e;
      for (e = x->PDPDescriptor; e; e = (struct zxmd_md_PDPDescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_md_PDPDescriptor(e);
  }
  {
      struct zxmd_md_AffiliationDescriptor_s* e;
      for (e = x->AffiliationDescriptor; e; e = (struct zxmd_md_AffiliationDescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_md_AffiliationDescriptor(e);
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n)
	  len += zxmd_LEN_md_Organization(e);
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n)
	  len += zxmd_LEN_md_ContactPerson(e);
  }
  {
      struct zxmd_md_AdditionalMetadataLocation_s* e;
      for (e = x->AdditionalMetadataLocation; e; e = (struct zxmd_md_AdditionalMetadataLocation_s*)e->gg.g.n)
	  len += zxmd_LEN_md_AdditionalMetadataLocation(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_EntityDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_EntityDescriptor(struct zxmd_md_EntityDescriptor_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EntityDescriptor", sizeof("EntityDescriptor") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->entityID, "entityID", sizeof("entityID")-1);
  p = zx_attr_enc(p, x->validUntil, "validUntil", sizeof("validUntil")-1);
  p = zx_attr_enc(p, x->cacheDuration, "cacheDuration", sizeof("cacheDuration")-1);
  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_Extensions(e, p);
  }
  {
      struct zxmd_md_RoleDescriptor_s* e;
      for (e = x->RoleDescriptor; e; e = (struct zxmd_md_RoleDescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_RoleDescriptor(e, p);
  }
  {
      struct zxmd_md_IDPSSODescriptor_s* e;
      for (e = x->IDPSSODescriptor; e; e = (struct zxmd_md_IDPSSODescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_IDPSSODescriptor(e, p);
  }
  {
      struct zxmd_md_SPSSODescriptor_s* e;
      for (e = x->SPSSODescriptor; e; e = (struct zxmd_md_SPSSODescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_SPSSODescriptor(e, p);
  }
  {
      struct zxmd_md_AuthnAuthorityDescriptor_s* e;
      for (e = x->AuthnAuthorityDescriptor; e; e = (struct zxmd_md_AuthnAuthorityDescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_AuthnAuthorityDescriptor(e, p);
  }
  {
      struct zxmd_md_AttributeAuthorityDescriptor_s* e;
      for (e = x->AttributeAuthorityDescriptor; e; e = (struct zxmd_md_AttributeAuthorityDescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_AttributeAuthorityDescriptor(e, p);
  }
  {
      struct zxmd_md_PDPDescriptor_s* e;
      for (e = x->PDPDescriptor; e; e = (struct zxmd_md_PDPDescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_PDPDescriptor(e, p);
  }
  {
      struct zxmd_md_AffiliationDescriptor_s* e;
      for (e = x->AffiliationDescriptor; e; e = (struct zxmd_md_AffiliationDescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_AffiliationDescriptor(e, p);
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_Organization(e, p);
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_ContactPerson(e, p);
  }
  {
      struct zxmd_md_AdditionalMetadataLocation_s* e;
      for (e = x->AdditionalMetadataLocation; e; e = (struct zxmd_md_AdditionalMetadataLocation_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_AdditionalMetadataLocation(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EntityDescriptor", sizeof("EntityDescriptor") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_EntityDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_EntityDescriptor(struct zxmd_md_EntityDescriptor_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_EntityDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_EntityDescriptor(struct zx_ctx* c, struct zxmd_md_EntityDescriptor_s* x )
{
  int len = zxmd_LEN_md_EntityDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_EntityDescriptor(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_EntityDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_EntityDescriptor(struct zx_ctx* c, struct zxmd_md_EntityDescriptor_s* x )
{
  int len = zxmd_LEN_md_EntityDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_EntityDescriptor(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_Extensions
#define EL_STRUCT zxmd_md_Extensions_s
#define EL_NS     md
#define EL_TAG    Extensions

/* FUNC(zxmd_LEN_md_Extensions) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_Extensions(struct zxmd_md_Extensions_s* x )
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

/* FUNC(zxmd_ENC_SO_md_Extensions) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_Extensions(struct zxmd_md_Extensions_s* x, char* p )
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

/* FUNC(zxmd_ENC_WO_md_Extensions) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_Extensions(struct zxmd_md_Extensions_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_Extensions) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_Extensions(struct zx_ctx* c, struct zxmd_md_Extensions_s* x )
{
  int len = zxmd_LEN_md_Extensions(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_Extensions(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_Extensions) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_Extensions(struct zx_ctx* c, struct zxmd_md_Extensions_s* x )
{
  int len = zxmd_LEN_md_Extensions(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_Extensions(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_IDPSSODescriptor
#define EL_STRUCT zxmd_md_IDPSSODescriptor_s
#define EL_NS     md
#define EL_TAG    IDPSSODescriptor

/* FUNC(zxmd_LEN_md_IDPSSODescriptor) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_IDPSSODescriptor(struct zxmd_md_IDPSSODescriptor_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("IDPSSODescriptor") - 1 + 1 + 2 + sizeof("IDPSSODescriptor") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ID, sizeof("ID"));
  len += zx_attr_len(x->validUntil, sizeof("validUntil"));
  len += zx_attr_len(x->cacheDuration, sizeof("cacheDuration"));
  len += zx_attr_len(x->protocolSupportEnumeration, sizeof("protocolSupportEnumeration"));
  len += zx_attr_len(x->errorURL, sizeof("errorURL"));
  len += zx_attr_len(x->WantAuthnRequestsSigned, sizeof("WantAuthnRequestsSigned"));

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_Signature(e);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  len += zxmd_LEN_md_Extensions(e);
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_md_KeyDescriptor(e);
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n)
	  len += zxmd_LEN_md_Organization(e);
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n)
	  len += zxmd_LEN_md_ContactPerson(e);
  }
  {
      struct zxmd_md_ArtifactResolutionService_s* e;
      for (e = x->ArtifactResolutionService; e; e = (struct zxmd_md_ArtifactResolutionService_s*)e->gg.g.n)
	  len += zxmd_LEN_md_ArtifactResolutionService(e);
  }
  {
      struct zxmd_md_SingleLogoutService_s* e;
      for (e = x->SingleLogoutService; e; e = (struct zxmd_md_SingleLogoutService_s*)e->gg.g.n)
	  len += zxmd_LEN_md_SingleLogoutService(e);
  }
  {
      struct zxmd_md_ManageNameIDService_s* e;
      for (e = x->ManageNameIDService; e; e = (struct zxmd_md_ManageNameIDService_s*)e->gg.g.n)
	  len += zxmd_LEN_md_ManageNameIDService(e);
  }
  for (se = x->NameIDFormat; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("NameIDFormat") - 1);
  {
      struct zxmd_md_SingleSignOnService_s* e;
      for (e = x->SingleSignOnService; e; e = (struct zxmd_md_SingleSignOnService_s*)e->gg.g.n)
	  len += zxmd_LEN_md_SingleSignOnService(e);
  }
  {
      struct zxmd_md_NameIDMappingService_s* e;
      for (e = x->NameIDMappingService; e; e = (struct zxmd_md_NameIDMappingService_s*)e->gg.g.n)
	  len += zxmd_LEN_md_NameIDMappingService(e);
  }
  {
      struct zxmd_md_AssertionIDRequestService_s* e;
      for (e = x->AssertionIDRequestService; e; e = (struct zxmd_md_AssertionIDRequestService_s*)e->gg.g.n)
	  len += zxmd_LEN_md_AssertionIDRequestService(e);
  }
  for (se = x->AttributeProfile; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("AttributeProfile") - 1);
  {
      struct zxmd_sa_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zxmd_sa_Attribute_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_Attribute(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_IDPSSODescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_IDPSSODescriptor(struct zxmd_md_IDPSSODescriptor_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "IDPSSODescriptor", sizeof("IDPSSODescriptor") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);
  p = zx_attr_enc(p, x->validUntil, "validUntil", sizeof("validUntil")-1);
  p = zx_attr_enc(p, x->cacheDuration, "cacheDuration", sizeof("cacheDuration")-1);
  p = zx_attr_enc(p, x->protocolSupportEnumeration, "protocolSupportEnumeration", sizeof("protocolSupportEnumeration")-1);
  p = zx_attr_enc(p, x->errorURL, "errorURL", sizeof("errorURL")-1);
  p = zx_attr_enc(p, x->WantAuthnRequestsSigned, "WantAuthnRequestsSigned", sizeof("WantAuthnRequestsSigned")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_Extensions(e, p);
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_KeyDescriptor(e, p);
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_Organization(e, p);
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_ContactPerson(e, p);
  }
  {
      struct zxmd_md_ArtifactResolutionService_s* e;
      for (e = x->ArtifactResolutionService; e; e = (struct zxmd_md_ArtifactResolutionService_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_ArtifactResolutionService(e, p);
  }
  {
      struct zxmd_md_SingleLogoutService_s* e;
      for (e = x->SingleLogoutService; e; e = (struct zxmd_md_SingleLogoutService_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_SingleLogoutService(e, p);
  }
  {
      struct zxmd_md_ManageNameIDService_s* e;
      for (e = x->ManageNameIDService; e; e = (struct zxmd_md_ManageNameIDService_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_ManageNameIDService(e, p);
  }
  for (se = x->NameIDFormat; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "NameIDFormat", sizeof("NameIDFormat") - 1);
  {
      struct zxmd_md_SingleSignOnService_s* e;
      for (e = x->SingleSignOnService; e; e = (struct zxmd_md_SingleSignOnService_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_SingleSignOnService(e, p);
  }
  {
      struct zxmd_md_NameIDMappingService_s* e;
      for (e = x->NameIDMappingService; e; e = (struct zxmd_md_NameIDMappingService_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_NameIDMappingService(e, p);
  }
  {
      struct zxmd_md_AssertionIDRequestService_s* e;
      for (e = x->AssertionIDRequestService; e; e = (struct zxmd_md_AssertionIDRequestService_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_AssertionIDRequestService(e, p);
  }
  for (se = x->AttributeProfile; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "AttributeProfile", sizeof("AttributeProfile") - 1);
  {
      struct zxmd_sa_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zxmd_sa_Attribute_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_Attribute(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "IDPSSODescriptor", sizeof("IDPSSODescriptor") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_IDPSSODescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_IDPSSODescriptor(struct zxmd_md_IDPSSODescriptor_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_IDPSSODescriptor) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_IDPSSODescriptor(struct zx_ctx* c, struct zxmd_md_IDPSSODescriptor_s* x )
{
  int len = zxmd_LEN_md_IDPSSODescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_IDPSSODescriptor(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_IDPSSODescriptor) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_IDPSSODescriptor(struct zx_ctx* c, struct zxmd_md_IDPSSODescriptor_s* x )
{
  int len = zxmd_LEN_md_IDPSSODescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_IDPSSODescriptor(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_KeyDescriptor
#define EL_STRUCT zxmd_md_KeyDescriptor_s
#define EL_NS     md
#define EL_TAG    KeyDescriptor

/* FUNC(zxmd_LEN_md_KeyDescriptor) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_KeyDescriptor(struct zxmd_md_KeyDescriptor_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("KeyDescriptor") - 1 + 1 + 2 + sizeof("KeyDescriptor") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->use, sizeof("use"));

  {
      struct zxmd_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_KeyInfo(e);
  }
  {
      struct zxmd_md_EncryptionMethod_s* e;
      for (e = x->EncryptionMethod; e; e = (struct zxmd_md_EncryptionMethod_s*)e->gg.g.n)
	  len += zxmd_LEN_md_EncryptionMethod(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_KeyDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_KeyDescriptor(struct zxmd_md_KeyDescriptor_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "KeyDescriptor", sizeof("KeyDescriptor") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->use, "use", sizeof("use")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxmd_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_KeyInfo(e, p);
  }
  {
      struct zxmd_md_EncryptionMethod_s* e;
      for (e = x->EncryptionMethod; e; e = (struct zxmd_md_EncryptionMethod_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_EncryptionMethod(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "KeyDescriptor", sizeof("KeyDescriptor") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_KeyDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_KeyDescriptor(struct zxmd_md_KeyDescriptor_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_KeyDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_KeyDescriptor(struct zx_ctx* c, struct zxmd_md_KeyDescriptor_s* x )
{
  int len = zxmd_LEN_md_KeyDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_KeyDescriptor(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_KeyDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_KeyDescriptor(struct zx_ctx* c, struct zxmd_md_KeyDescriptor_s* x )
{
  int len = zxmd_LEN_md_KeyDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_KeyDescriptor(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_ManageNameIDService
#define EL_STRUCT zxmd_md_ManageNameIDService_s
#define EL_NS     md
#define EL_TAG    ManageNameIDService

/* FUNC(zxmd_LEN_md_ManageNameIDService) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_ManageNameIDService(struct zxmd_md_ManageNameIDService_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ManageNameIDService") - 1 + 1 + 2 + sizeof("ManageNameIDService") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Binding, sizeof("Binding"));
  len += zx_attr_len(x->Location, sizeof("Location"));
  len += zx_attr_len(x->ResponseLocation, sizeof("ResponseLocation"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_ManageNameIDService) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_ManageNameIDService(struct zxmd_md_ManageNameIDService_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ManageNameIDService", sizeof("ManageNameIDService") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Binding, "Binding", sizeof("Binding")-1);
  p = zx_attr_enc(p, x->Location, "Location", sizeof("Location")-1);
  p = zx_attr_enc(p, x->ResponseLocation, "ResponseLocation", sizeof("ResponseLocation")-1);


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
  ZX_OUT_MEM(p, "ManageNameIDService", sizeof("ManageNameIDService") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_ManageNameIDService) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_ManageNameIDService(struct zxmd_md_ManageNameIDService_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_ManageNameIDService) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_ManageNameIDService(struct zx_ctx* c, struct zxmd_md_ManageNameIDService_s* x )
{
  int len = zxmd_LEN_md_ManageNameIDService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_ManageNameIDService(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_ManageNameIDService) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_ManageNameIDService(struct zx_ctx* c, struct zxmd_md_ManageNameIDService_s* x )
{
  int len = zxmd_LEN_md_ManageNameIDService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_ManageNameIDService(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_NameIDMappingService
#define EL_STRUCT zxmd_md_NameIDMappingService_s
#define EL_NS     md
#define EL_TAG    NameIDMappingService

/* FUNC(zxmd_LEN_md_NameIDMappingService) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_NameIDMappingService(struct zxmd_md_NameIDMappingService_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("NameIDMappingService") - 1 + 1 + 2 + sizeof("NameIDMappingService") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Binding, sizeof("Binding"));
  len += zx_attr_len(x->Location, sizeof("Location"));
  len += zx_attr_len(x->ResponseLocation, sizeof("ResponseLocation"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_NameIDMappingService) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_NameIDMappingService(struct zxmd_md_NameIDMappingService_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "NameIDMappingService", sizeof("NameIDMappingService") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Binding, "Binding", sizeof("Binding")-1);
  p = zx_attr_enc(p, x->Location, "Location", sizeof("Location")-1);
  p = zx_attr_enc(p, x->ResponseLocation, "ResponseLocation", sizeof("ResponseLocation")-1);


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
  ZX_OUT_MEM(p, "NameIDMappingService", sizeof("NameIDMappingService") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_NameIDMappingService) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_NameIDMappingService(struct zxmd_md_NameIDMappingService_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_NameIDMappingService) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_NameIDMappingService(struct zx_ctx* c, struct zxmd_md_NameIDMappingService_s* x )
{
  int len = zxmd_LEN_md_NameIDMappingService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_NameIDMappingService(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_NameIDMappingService) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_NameIDMappingService(struct zx_ctx* c, struct zxmd_md_NameIDMappingService_s* x )
{
  int len = zxmd_LEN_md_NameIDMappingService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_NameIDMappingService(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_Organization
#define EL_STRUCT zxmd_md_Organization_s
#define EL_NS     md
#define EL_TAG    Organization

/* FUNC(zxmd_LEN_md_Organization) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_Organization(struct zxmd_md_Organization_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Organization") - 1 + 1 + 2 + sizeof("Organization") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  len += zxmd_LEN_md_Extensions(e);
  }
  {
      struct zxmd_md_OrganizationName_s* e;
      for (e = x->OrganizationName; e; e = (struct zxmd_md_OrganizationName_s*)e->gg.g.n)
	  len += zxmd_LEN_md_OrganizationName(e);
  }
  {
      struct zxmd_md_OrganizationDisplayName_s* e;
      for (e = x->OrganizationDisplayName; e; e = (struct zxmd_md_OrganizationDisplayName_s*)e->gg.g.n)
	  len += zxmd_LEN_md_OrganizationDisplayName(e);
  }
  {
      struct zxmd_md_OrganizationURL_s* e;
      for (e = x->OrganizationURL; e; e = (struct zxmd_md_OrganizationURL_s*)e->gg.g.n)
	  len += zxmd_LEN_md_OrganizationURL(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_Organization) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_Organization(struct zxmd_md_Organization_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Organization", sizeof("Organization") - 1);
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
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_Extensions(e, p);
  }
  {
      struct zxmd_md_OrganizationName_s* e;
      for (e = x->OrganizationName; e; e = (struct zxmd_md_OrganizationName_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_OrganizationName(e, p);
  }
  {
      struct zxmd_md_OrganizationDisplayName_s* e;
      for (e = x->OrganizationDisplayName; e; e = (struct zxmd_md_OrganizationDisplayName_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_OrganizationDisplayName(e, p);
  }
  {
      struct zxmd_md_OrganizationURL_s* e;
      for (e = x->OrganizationURL; e; e = (struct zxmd_md_OrganizationURL_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_OrganizationURL(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Organization", sizeof("Organization") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_Organization) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_Organization(struct zxmd_md_Organization_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_Organization) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_Organization(struct zx_ctx* c, struct zxmd_md_Organization_s* x )
{
  int len = zxmd_LEN_md_Organization(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_Organization(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_Organization) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_Organization(struct zx_ctx* c, struct zxmd_md_Organization_s* x )
{
  int len = zxmd_LEN_md_Organization(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_Organization(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_OrganizationDisplayName
#define EL_STRUCT zxmd_md_OrganizationDisplayName_s
#define EL_NS     md
#define EL_TAG    OrganizationDisplayName

/* FUNC(zxmd_LEN_md_OrganizationDisplayName) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_OrganizationDisplayName(struct zxmd_md_OrganizationDisplayName_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("OrganizationDisplayName") - 1 + 1 + 2 + sizeof("OrganizationDisplayName") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->lang, sizeof("lang"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_OrganizationDisplayName) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_OrganizationDisplayName(struct zxmd_md_OrganizationDisplayName_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "OrganizationDisplayName", sizeof("OrganizationDisplayName") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->lang, "lang", sizeof("lang")-1);


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
  ZX_OUT_MEM(p, "OrganizationDisplayName", sizeof("OrganizationDisplayName") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_OrganizationDisplayName) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_OrganizationDisplayName(struct zxmd_md_OrganizationDisplayName_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_OrganizationDisplayName) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_OrganizationDisplayName(struct zx_ctx* c, struct zxmd_md_OrganizationDisplayName_s* x )
{
  int len = zxmd_LEN_md_OrganizationDisplayName(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_OrganizationDisplayName(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_OrganizationDisplayName) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_OrganizationDisplayName(struct zx_ctx* c, struct zxmd_md_OrganizationDisplayName_s* x )
{
  int len = zxmd_LEN_md_OrganizationDisplayName(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_OrganizationDisplayName(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_OrganizationName
#define EL_STRUCT zxmd_md_OrganizationName_s
#define EL_NS     md
#define EL_TAG    OrganizationName

/* FUNC(zxmd_LEN_md_OrganizationName) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_OrganizationName(struct zxmd_md_OrganizationName_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("OrganizationName") - 1 + 1 + 2 + sizeof("OrganizationName") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->lang, sizeof("lang"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_OrganizationName) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_OrganizationName(struct zxmd_md_OrganizationName_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "OrganizationName", sizeof("OrganizationName") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->lang, "lang", sizeof("lang")-1);


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
  ZX_OUT_MEM(p, "OrganizationName", sizeof("OrganizationName") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_OrganizationName) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_OrganizationName(struct zxmd_md_OrganizationName_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_OrganizationName) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_OrganizationName(struct zx_ctx* c, struct zxmd_md_OrganizationName_s* x )
{
  int len = zxmd_LEN_md_OrganizationName(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_OrganizationName(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_OrganizationName) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_OrganizationName(struct zx_ctx* c, struct zxmd_md_OrganizationName_s* x )
{
  int len = zxmd_LEN_md_OrganizationName(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_OrganizationName(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_OrganizationURL
#define EL_STRUCT zxmd_md_OrganizationURL_s
#define EL_NS     md
#define EL_TAG    OrganizationURL

/* FUNC(zxmd_LEN_md_OrganizationURL) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_OrganizationURL(struct zxmd_md_OrganizationURL_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("OrganizationURL") - 1 + 1 + 2 + sizeof("OrganizationURL") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->lang, sizeof("lang"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_OrganizationURL) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_OrganizationURL(struct zxmd_md_OrganizationURL_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "OrganizationURL", sizeof("OrganizationURL") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->lang, "lang", sizeof("lang")-1);


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
  ZX_OUT_MEM(p, "OrganizationURL", sizeof("OrganizationURL") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_OrganizationURL) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_OrganizationURL(struct zxmd_md_OrganizationURL_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_OrganizationURL) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_OrganizationURL(struct zx_ctx* c, struct zxmd_md_OrganizationURL_s* x )
{
  int len = zxmd_LEN_md_OrganizationURL(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_OrganizationURL(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_OrganizationURL) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_OrganizationURL(struct zx_ctx* c, struct zxmd_md_OrganizationURL_s* x )
{
  int len = zxmd_LEN_md_OrganizationURL(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_OrganizationURL(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_PDPDescriptor
#define EL_STRUCT zxmd_md_PDPDescriptor_s
#define EL_NS     md
#define EL_TAG    PDPDescriptor

/* FUNC(zxmd_LEN_md_PDPDescriptor) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_PDPDescriptor(struct zxmd_md_PDPDescriptor_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("PDPDescriptor") - 1 + 1 + 2 + sizeof("PDPDescriptor") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ID, sizeof("ID"));
  len += zx_attr_len(x->validUntil, sizeof("validUntil"));
  len += zx_attr_len(x->cacheDuration, sizeof("cacheDuration"));
  len += zx_attr_len(x->protocolSupportEnumeration, sizeof("protocolSupportEnumeration"));
  len += zx_attr_len(x->errorURL, sizeof("errorURL"));

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_Signature(e);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  len += zxmd_LEN_md_Extensions(e);
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_md_KeyDescriptor(e);
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n)
	  len += zxmd_LEN_md_Organization(e);
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n)
	  len += zxmd_LEN_md_ContactPerson(e);
  }
  {
      struct zxmd_md_AuthzService_s* e;
      for (e = x->AuthzService; e; e = (struct zxmd_md_AuthzService_s*)e->gg.g.n)
	  len += zxmd_LEN_md_AuthzService(e);
  }
  {
      struct zxmd_md_AssertionIDRequestService_s* e;
      for (e = x->AssertionIDRequestService; e; e = (struct zxmd_md_AssertionIDRequestService_s*)e->gg.g.n)
	  len += zxmd_LEN_md_AssertionIDRequestService(e);
  }
  for (se = x->NameIDFormat; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("NameIDFormat") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_PDPDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_PDPDescriptor(struct zxmd_md_PDPDescriptor_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "PDPDescriptor", sizeof("PDPDescriptor") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);
  p = zx_attr_enc(p, x->validUntil, "validUntil", sizeof("validUntil")-1);
  p = zx_attr_enc(p, x->cacheDuration, "cacheDuration", sizeof("cacheDuration")-1);
  p = zx_attr_enc(p, x->protocolSupportEnumeration, "protocolSupportEnumeration", sizeof("protocolSupportEnumeration")-1);
  p = zx_attr_enc(p, x->errorURL, "errorURL", sizeof("errorURL")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_Extensions(e, p);
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_KeyDescriptor(e, p);
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_Organization(e, p);
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_ContactPerson(e, p);
  }
  {
      struct zxmd_md_AuthzService_s* e;
      for (e = x->AuthzService; e; e = (struct zxmd_md_AuthzService_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_AuthzService(e, p);
  }
  {
      struct zxmd_md_AssertionIDRequestService_s* e;
      for (e = x->AssertionIDRequestService; e; e = (struct zxmd_md_AssertionIDRequestService_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_AssertionIDRequestService(e, p);
  }
  for (se = x->NameIDFormat; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "NameIDFormat", sizeof("NameIDFormat") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "PDPDescriptor", sizeof("PDPDescriptor") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_PDPDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_PDPDescriptor(struct zxmd_md_PDPDescriptor_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_PDPDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_PDPDescriptor(struct zx_ctx* c, struct zxmd_md_PDPDescriptor_s* x )
{
  int len = zxmd_LEN_md_PDPDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_PDPDescriptor(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_PDPDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_PDPDescriptor(struct zx_ctx* c, struct zxmd_md_PDPDescriptor_s* x )
{
  int len = zxmd_LEN_md_PDPDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_PDPDescriptor(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_RequestedAttribute
#define EL_STRUCT zxmd_md_RequestedAttribute_s
#define EL_NS     md
#define EL_TAG    RequestedAttribute

/* FUNC(zxmd_LEN_md_RequestedAttribute) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_RequestedAttribute(struct zxmd_md_RequestedAttribute_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("RequestedAttribute") - 1 + 1 + 2 + sizeof("RequestedAttribute") - 1 + 1;
  
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
  len += zx_attr_len(x->isRequired, sizeof("isRequired"));

  for (se = x->AttributeValue; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("AttributeValue") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_RequestedAttribute) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_RequestedAttribute(struct zxmd_md_RequestedAttribute_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RequestedAttribute", sizeof("RequestedAttribute") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Name, "Name", sizeof("Name")-1);
  p = zx_attr_enc(p, x->NameFormat, "NameFormat", sizeof("NameFormat")-1);
  p = zx_attr_enc(p, x->FriendlyName, "FriendlyName", sizeof("FriendlyName")-1);
  p = zx_attr_enc(p, x->isRequired, "isRequired", sizeof("isRequired")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->AttributeValue; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "AttributeValue", sizeof("AttributeValue") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RequestedAttribute", sizeof("RequestedAttribute") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_RequestedAttribute) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_RequestedAttribute(struct zxmd_md_RequestedAttribute_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_RequestedAttribute) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_RequestedAttribute(struct zx_ctx* c, struct zxmd_md_RequestedAttribute_s* x )
{
  int len = zxmd_LEN_md_RequestedAttribute(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_RequestedAttribute(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_RequestedAttribute) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_RequestedAttribute(struct zx_ctx* c, struct zxmd_md_RequestedAttribute_s* x )
{
  int len = zxmd_LEN_md_RequestedAttribute(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_RequestedAttribute(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_RoleDescriptor
#define EL_STRUCT zxmd_md_RoleDescriptor_s
#define EL_NS     md
#define EL_TAG    RoleDescriptor

/* FUNC(zxmd_LEN_md_RoleDescriptor) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_RoleDescriptor(struct zxmd_md_RoleDescriptor_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("RoleDescriptor") - 1 + 1 + 2 + sizeof("RoleDescriptor") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ID, sizeof("ID"));
  len += zx_attr_len(x->validUntil, sizeof("validUntil"));
  len += zx_attr_len(x->cacheDuration, sizeof("cacheDuration"));
  len += zx_attr_len(x->protocolSupportEnumeration, sizeof("protocolSupportEnumeration"));
  len += zx_attr_len(x->errorURL, sizeof("errorURL"));

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_Signature(e);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  len += zxmd_LEN_md_Extensions(e);
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_md_KeyDescriptor(e);
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n)
	  len += zxmd_LEN_md_Organization(e);
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n)
	  len += zxmd_LEN_md_ContactPerson(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_RoleDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_RoleDescriptor(struct zxmd_md_RoleDescriptor_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RoleDescriptor", sizeof("RoleDescriptor") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);
  p = zx_attr_enc(p, x->validUntil, "validUntil", sizeof("validUntil")-1);
  p = zx_attr_enc(p, x->cacheDuration, "cacheDuration", sizeof("cacheDuration")-1);
  p = zx_attr_enc(p, x->protocolSupportEnumeration, "protocolSupportEnumeration", sizeof("protocolSupportEnumeration")-1);
  p = zx_attr_enc(p, x->errorURL, "errorURL", sizeof("errorURL")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_Extensions(e, p);
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_KeyDescriptor(e, p);
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_Organization(e, p);
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_ContactPerson(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RoleDescriptor", sizeof("RoleDescriptor") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_RoleDescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_RoleDescriptor(struct zxmd_md_RoleDescriptor_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_RoleDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_RoleDescriptor(struct zx_ctx* c, struct zxmd_md_RoleDescriptor_s* x )
{
  int len = zxmd_LEN_md_RoleDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_RoleDescriptor(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_RoleDescriptor) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_RoleDescriptor(struct zx_ctx* c, struct zxmd_md_RoleDescriptor_s* x )
{
  int len = zxmd_LEN_md_RoleDescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_RoleDescriptor(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_SPSSODescriptor
#define EL_STRUCT zxmd_md_SPSSODescriptor_s
#define EL_NS     md
#define EL_TAG    SPSSODescriptor

/* FUNC(zxmd_LEN_md_SPSSODescriptor) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_SPSSODescriptor(struct zxmd_md_SPSSODescriptor_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SPSSODescriptor") - 1 + 1 + 2 + sizeof("SPSSODescriptor") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ID, sizeof("ID"));
  len += zx_attr_len(x->validUntil, sizeof("validUntil"));
  len += zx_attr_len(x->cacheDuration, sizeof("cacheDuration"));
  len += zx_attr_len(x->protocolSupportEnumeration, sizeof("protocolSupportEnumeration"));
  len += zx_attr_len(x->errorURL, sizeof("errorURL"));
  len += zx_attr_len(x->AuthnRequestsSigned, sizeof("AuthnRequestsSigned"));
  len += zx_attr_len(x->WantAssertionsSigned, sizeof("WantAssertionsSigned"));

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_Signature(e);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  len += zxmd_LEN_md_Extensions(e);
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_md_KeyDescriptor(e);
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n)
	  len += zxmd_LEN_md_Organization(e);
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n)
	  len += zxmd_LEN_md_ContactPerson(e);
  }
  {
      struct zxmd_md_ArtifactResolutionService_s* e;
      for (e = x->ArtifactResolutionService; e; e = (struct zxmd_md_ArtifactResolutionService_s*)e->gg.g.n)
	  len += zxmd_LEN_md_ArtifactResolutionService(e);
  }
  {
      struct zxmd_md_SingleLogoutService_s* e;
      for (e = x->SingleLogoutService; e; e = (struct zxmd_md_SingleLogoutService_s*)e->gg.g.n)
	  len += zxmd_LEN_md_SingleLogoutService(e);
  }
  {
      struct zxmd_md_ManageNameIDService_s* e;
      for (e = x->ManageNameIDService; e; e = (struct zxmd_md_ManageNameIDService_s*)e->gg.g.n)
	  len += zxmd_LEN_md_ManageNameIDService(e);
  }
  for (se = x->NameIDFormat; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("NameIDFormat") - 1);
  {
      struct zxmd_md_AssertionConsumerService_s* e;
      for (e = x->AssertionConsumerService; e; e = (struct zxmd_md_AssertionConsumerService_s*)e->gg.g.n)
	  len += zxmd_LEN_md_AssertionConsumerService(e);
  }
  {
      struct zxmd_md_AttributeConsumingService_s* e;
      for (e = x->AttributeConsumingService; e; e = (struct zxmd_md_AttributeConsumingService_s*)e->gg.g.n)
	  len += zxmd_LEN_md_AttributeConsumingService(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_SPSSODescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_SPSSODescriptor(struct zxmd_md_SPSSODescriptor_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SPSSODescriptor", sizeof("SPSSODescriptor") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ID, "ID", sizeof("ID")-1);
  p = zx_attr_enc(p, x->validUntil, "validUntil", sizeof("validUntil")-1);
  p = zx_attr_enc(p, x->cacheDuration, "cacheDuration", sizeof("cacheDuration")-1);
  p = zx_attr_enc(p, x->protocolSupportEnumeration, "protocolSupportEnumeration", sizeof("protocolSupportEnumeration")-1);
  p = zx_attr_enc(p, x->errorURL, "errorURL", sizeof("errorURL")-1);
  p = zx_attr_enc(p, x->AuthnRequestsSigned, "AuthnRequestsSigned", sizeof("AuthnRequestsSigned")-1);
  p = zx_attr_enc(p, x->WantAssertionsSigned, "WantAssertionsSigned", sizeof("WantAssertionsSigned")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_Extensions(e, p);
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_KeyDescriptor(e, p);
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_Organization(e, p);
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_ContactPerson(e, p);
  }
  {
      struct zxmd_md_ArtifactResolutionService_s* e;
      for (e = x->ArtifactResolutionService; e; e = (struct zxmd_md_ArtifactResolutionService_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_ArtifactResolutionService(e, p);
  }
  {
      struct zxmd_md_SingleLogoutService_s* e;
      for (e = x->SingleLogoutService; e; e = (struct zxmd_md_SingleLogoutService_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_SingleLogoutService(e, p);
  }
  {
      struct zxmd_md_ManageNameIDService_s* e;
      for (e = x->ManageNameIDService; e; e = (struct zxmd_md_ManageNameIDService_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_ManageNameIDService(e, p);
  }
  for (se = x->NameIDFormat; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "NameIDFormat", sizeof("NameIDFormat") - 1);
  {
      struct zxmd_md_AssertionConsumerService_s* e;
      for (e = x->AssertionConsumerService; e; e = (struct zxmd_md_AssertionConsumerService_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_AssertionConsumerService(e, p);
  }
  {
      struct zxmd_md_AttributeConsumingService_s* e;
      for (e = x->AttributeConsumingService; e; e = (struct zxmd_md_AttributeConsumingService_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_AttributeConsumingService(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SPSSODescriptor", sizeof("SPSSODescriptor") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_SPSSODescriptor) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_SPSSODescriptor(struct zxmd_md_SPSSODescriptor_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_SPSSODescriptor) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_SPSSODescriptor(struct zx_ctx* c, struct zxmd_md_SPSSODescriptor_s* x )
{
  int len = zxmd_LEN_md_SPSSODescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_SPSSODescriptor(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_SPSSODescriptor) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_SPSSODescriptor(struct zx_ctx* c, struct zxmd_md_SPSSODescriptor_s* x )
{
  int len = zxmd_LEN_md_SPSSODescriptor(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_SPSSODescriptor(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_ServiceDescription
#define EL_STRUCT zxmd_md_ServiceDescription_s
#define EL_NS     md
#define EL_TAG    ServiceDescription

/* FUNC(zxmd_LEN_md_ServiceDescription) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_ServiceDescription(struct zxmd_md_ServiceDescription_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ServiceDescription") - 1 + 1 + 2 + sizeof("ServiceDescription") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->lang, sizeof("lang"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_ServiceDescription) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_ServiceDescription(struct zxmd_md_ServiceDescription_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ServiceDescription", sizeof("ServiceDescription") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->lang, "lang", sizeof("lang")-1);


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
  ZX_OUT_MEM(p, "ServiceDescription", sizeof("ServiceDescription") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_ServiceDescription) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_ServiceDescription(struct zxmd_md_ServiceDescription_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_ServiceDescription) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_ServiceDescription(struct zx_ctx* c, struct zxmd_md_ServiceDescription_s* x )
{
  int len = zxmd_LEN_md_ServiceDescription(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_ServiceDescription(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_ServiceDescription) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_ServiceDescription(struct zx_ctx* c, struct zxmd_md_ServiceDescription_s* x )
{
  int len = zxmd_LEN_md_ServiceDescription(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_ServiceDescription(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_ServiceName
#define EL_STRUCT zxmd_md_ServiceName_s
#define EL_NS     md
#define EL_TAG    ServiceName

/* FUNC(zxmd_LEN_md_ServiceName) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_ServiceName(struct zxmd_md_ServiceName_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ServiceName") - 1 + 1 + 2 + sizeof("ServiceName") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->lang, sizeof("lang"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_ServiceName) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_ServiceName(struct zxmd_md_ServiceName_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ServiceName", sizeof("ServiceName") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->lang, "lang", sizeof("lang")-1);


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
  ZX_OUT_MEM(p, "ServiceName", sizeof("ServiceName") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_ServiceName) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_ServiceName(struct zxmd_md_ServiceName_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_ServiceName) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_ServiceName(struct zx_ctx* c, struct zxmd_md_ServiceName_s* x )
{
  int len = zxmd_LEN_md_ServiceName(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_ServiceName(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_ServiceName) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_ServiceName(struct zx_ctx* c, struct zxmd_md_ServiceName_s* x )
{
  int len = zxmd_LEN_md_ServiceName(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_ServiceName(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_SingleLogoutService
#define EL_STRUCT zxmd_md_SingleLogoutService_s
#define EL_NS     md
#define EL_TAG    SingleLogoutService

/* FUNC(zxmd_LEN_md_SingleLogoutService) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_SingleLogoutService(struct zxmd_md_SingleLogoutService_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SingleLogoutService") - 1 + 1 + 2 + sizeof("SingleLogoutService") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Binding, sizeof("Binding"));
  len += zx_attr_len(x->Location, sizeof("Location"));
  len += zx_attr_len(x->ResponseLocation, sizeof("ResponseLocation"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_SingleLogoutService) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_SingleLogoutService(struct zxmd_md_SingleLogoutService_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SingleLogoutService", sizeof("SingleLogoutService") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Binding, "Binding", sizeof("Binding")-1);
  p = zx_attr_enc(p, x->Location, "Location", sizeof("Location")-1);
  p = zx_attr_enc(p, x->ResponseLocation, "ResponseLocation", sizeof("ResponseLocation")-1);


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
  ZX_OUT_MEM(p, "SingleLogoutService", sizeof("SingleLogoutService") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_SingleLogoutService) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_SingleLogoutService(struct zxmd_md_SingleLogoutService_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_SingleLogoutService) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_SingleLogoutService(struct zx_ctx* c, struct zxmd_md_SingleLogoutService_s* x )
{
  int len = zxmd_LEN_md_SingleLogoutService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_SingleLogoutService(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_SingleLogoutService) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_SingleLogoutService(struct zx_ctx* c, struct zxmd_md_SingleLogoutService_s* x )
{
  int len = zxmd_LEN_md_SingleLogoutService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_SingleLogoutService(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   md_SingleSignOnService
#define EL_STRUCT zxmd_md_SingleSignOnService_s
#define EL_NS     md
#define EL_TAG    SingleSignOnService

/* FUNC(zxmd_LEN_md_SingleSignOnService) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_md_SingleSignOnService(struct zxmd_md_SingleSignOnService_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SingleSignOnService") - 1 + 1 + 2 + sizeof("SingleSignOnService") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Binding, sizeof("Binding"));
  len += zx_attr_len(x->Location, sizeof("Location"));
  len += zx_attr_len(x->ResponseLocation, sizeof("ResponseLocation"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_md_SingleSignOnService) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_md_SingleSignOnService(struct zxmd_md_SingleSignOnService_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SingleSignOnService", sizeof("SingleSignOnService") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Binding, "Binding", sizeof("Binding")-1);
  p = zx_attr_enc(p, x->Location, "Location", sizeof("Location")-1);
  p = zx_attr_enc(p, x->ResponseLocation, "ResponseLocation", sizeof("ResponseLocation")-1);


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
  ZX_OUT_MEM(p, "SingleSignOnService", sizeof("SingleSignOnService") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxmd_ENC_WO_md_SingleSignOnService) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_md_SingleSignOnService(struct zxmd_md_SingleSignOnService_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_md_SingleSignOnService) */

struct zx_str_s* zxmd_EASY_ENC_SO_md_SingleSignOnService(struct zx_ctx* c, struct zxmd_md_SingleSignOnService_s* x )
{
  int len = zxmd_LEN_md_SingleSignOnService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_md_SingleSignOnService(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_md_SingleSignOnService) */

struct zx_str_s* zxmd_EASY_ENC_WO_md_SingleSignOnService(struct zx_ctx* c, struct zxmd_md_SingleSignOnService_s* x )
{
  int len = zxmd_LEN_md_SingleSignOnService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_md_SingleSignOnService(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_sa_Action_s
#define EL_NS     sa
#define EL_TAG    Action

/* FUNC(zxmd_LEN_sa_Action) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_sa_Action(struct zxmd_sa_Action_s* x )
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

/* FUNC(zxmd_ENC_SO_sa_Action) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_sa_Action(struct zxmd_sa_Action_s* x, char* p )
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

/* FUNC(zxmd_ENC_WO_sa_Action) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_sa_Action(struct zxmd_sa_Action_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_sa_Action) */

struct zx_str_s* zxmd_EASY_ENC_SO_sa_Action(struct zx_ctx* c, struct zxmd_sa_Action_s* x )
{
  int len = zxmd_LEN_sa_Action(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_sa_Action(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_sa_Action) */

struct zx_str_s* zxmd_EASY_ENC_WO_sa_Action(struct zx_ctx* c, struct zxmd_sa_Action_s* x )
{
  int len = zxmd_LEN_sa_Action(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_sa_Action(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_sa_Advice_s
#define EL_NS     sa
#define EL_TAG    Advice

/* FUNC(zxmd_LEN_sa_Advice) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_sa_Advice(struct zxmd_sa_Advice_s* x )
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
    len += zxmd_LEN_simple_elem(se, sizeof("AssertionIDRef") - 1);
  for (se = x->AssertionURIRef; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("AssertionURIRef") - 1);
  {
      struct zxmd_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zxmd_sa_Assertion_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_Assertion(e);
  }
  {
      struct zxmd_sa_EncryptedAssertion_s* e;
      for (e = x->EncryptedAssertion; e; e = (struct zxmd_sa_EncryptedAssertion_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_EncryptedAssertion(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_sa_Advice) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_sa_Advice(struct zxmd_sa_Advice_s* x, char* p )
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
    p = zxmd_ENC_SO_simple_elem(se, p, "AssertionIDRef", sizeof("AssertionIDRef") - 1);
  for (se = x->AssertionURIRef; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "AssertionURIRef", sizeof("AssertionURIRef") - 1);
  {
      struct zxmd_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zxmd_sa_Assertion_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_Assertion(e, p);
  }
  {
      struct zxmd_sa_EncryptedAssertion_s* e;
      for (e = x->EncryptedAssertion; e; e = (struct zxmd_sa_EncryptedAssertion_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_EncryptedAssertion(e, p);
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

/* FUNC(zxmd_ENC_WO_sa_Advice) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_sa_Advice(struct zxmd_sa_Advice_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_sa_Advice) */

struct zx_str_s* zxmd_EASY_ENC_SO_sa_Advice(struct zx_ctx* c, struct zxmd_sa_Advice_s* x )
{
  int len = zxmd_LEN_sa_Advice(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_sa_Advice(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_sa_Advice) */

struct zx_str_s* zxmd_EASY_ENC_WO_sa_Advice(struct zx_ctx* c, struct zxmd_sa_Advice_s* x )
{
  int len = zxmd_LEN_sa_Advice(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_sa_Advice(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_sa_Assertion_s
#define EL_NS     sa
#define EL_TAG    Assertion

/* FUNC(zxmd_LEN_sa_Assertion) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_sa_Assertion(struct zxmd_sa_Assertion_s* x )
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
      struct zxmd_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zxmd_sa_Issuer_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_Issuer(e);
  }
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_Signature(e);
  }
  {
      struct zxmd_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zxmd_sa_Subject_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_Subject(e);
  }
  {
      struct zxmd_sa_Conditions_s* e;
      for (e = x->Conditions; e; e = (struct zxmd_sa_Conditions_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_Conditions(e);
  }
  {
      struct zxmd_sa_Advice_s* e;
      for (e = x->Advice; e; e = (struct zxmd_sa_Advice_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_Advice(e);
  }
  for (se = x->Statement; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("Statement") - 1);
  {
      struct zxmd_sa_AuthnStatement_s* e;
      for (e = x->AuthnStatement; e; e = (struct zxmd_sa_AuthnStatement_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_AuthnStatement(e);
  }
  {
      struct zxmd_sa_AuthzDecisionStatement_s* e;
      for (e = x->AuthzDecisionStatement; e; e = (struct zxmd_sa_AuthzDecisionStatement_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_AuthzDecisionStatement(e);
  }
  {
      struct zxmd_sa_AttributeStatement_s* e;
      for (e = x->AttributeStatement; e; e = (struct zxmd_sa_AttributeStatement_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_AttributeStatement(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_sa_Assertion) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_sa_Assertion(struct zxmd_sa_Assertion_s* x, char* p )
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
      struct zxmd_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zxmd_sa_Issuer_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_Issuer(e, p);
  }
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_Signature(e, p);
  }
  {
      struct zxmd_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zxmd_sa_Subject_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_Subject(e, p);
  }
  {
      struct zxmd_sa_Conditions_s* e;
      for (e = x->Conditions; e; e = (struct zxmd_sa_Conditions_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_Conditions(e, p);
  }
  {
      struct zxmd_sa_Advice_s* e;
      for (e = x->Advice; e; e = (struct zxmd_sa_Advice_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_Advice(e, p);
  }
  for (se = x->Statement; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "Statement", sizeof("Statement") - 1);
  {
      struct zxmd_sa_AuthnStatement_s* e;
      for (e = x->AuthnStatement; e; e = (struct zxmd_sa_AuthnStatement_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_AuthnStatement(e, p);
  }
  {
      struct zxmd_sa_AuthzDecisionStatement_s* e;
      for (e = x->AuthzDecisionStatement; e; e = (struct zxmd_sa_AuthzDecisionStatement_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_AuthzDecisionStatement(e, p);
  }
  {
      struct zxmd_sa_AttributeStatement_s* e;
      for (e = x->AttributeStatement; e; e = (struct zxmd_sa_AttributeStatement_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_AttributeStatement(e, p);
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

/* FUNC(zxmd_ENC_WO_sa_Assertion) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_sa_Assertion(struct zxmd_sa_Assertion_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_sa_Assertion) */

struct zx_str_s* zxmd_EASY_ENC_SO_sa_Assertion(struct zx_ctx* c, struct zxmd_sa_Assertion_s* x )
{
  int len = zxmd_LEN_sa_Assertion(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_sa_Assertion(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_sa_Assertion) */

struct zx_str_s* zxmd_EASY_ENC_WO_sa_Assertion(struct zx_ctx* c, struct zxmd_sa_Assertion_s* x )
{
  int len = zxmd_LEN_sa_Assertion(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_sa_Assertion(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_sa_Attribute_s
#define EL_NS     sa
#define EL_TAG    Attribute

/* FUNC(zxmd_LEN_sa_Attribute) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_sa_Attribute(struct zxmd_sa_Attribute_s* x )
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
    len += zxmd_LEN_simple_elem(se, sizeof("AttributeValue") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_sa_Attribute) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_sa_Attribute(struct zxmd_sa_Attribute_s* x, char* p )
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
    p = zxmd_ENC_SO_simple_elem(se, p, "AttributeValue", sizeof("AttributeValue") - 1);


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

/* FUNC(zxmd_ENC_WO_sa_Attribute) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_sa_Attribute(struct zxmd_sa_Attribute_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_sa_Attribute) */

struct zx_str_s* zxmd_EASY_ENC_SO_sa_Attribute(struct zx_ctx* c, struct zxmd_sa_Attribute_s* x )
{
  int len = zxmd_LEN_sa_Attribute(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_sa_Attribute(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_sa_Attribute) */

struct zx_str_s* zxmd_EASY_ENC_WO_sa_Attribute(struct zx_ctx* c, struct zxmd_sa_Attribute_s* x )
{
  int len = zxmd_LEN_sa_Attribute(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_sa_Attribute(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_sa_AttributeStatement_s
#define EL_NS     sa
#define EL_TAG    AttributeStatement

/* FUNC(zxmd_LEN_sa_AttributeStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_sa_AttributeStatement(struct zxmd_sa_AttributeStatement_s* x )
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
      struct zxmd_sa_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zxmd_sa_Attribute_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_Attribute(e);
  }
  {
      struct zxmd_sa_EncryptedAttribute_s* e;
      for (e = x->EncryptedAttribute; e; e = (struct zxmd_sa_EncryptedAttribute_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_EncryptedAttribute(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_sa_AttributeStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_sa_AttributeStatement(struct zxmd_sa_AttributeStatement_s* x, char* p )
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
      struct zxmd_sa_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zxmd_sa_Attribute_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_Attribute(e, p);
  }
  {
      struct zxmd_sa_EncryptedAttribute_s* e;
      for (e = x->EncryptedAttribute; e; e = (struct zxmd_sa_EncryptedAttribute_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_EncryptedAttribute(e, p);
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

/* FUNC(zxmd_ENC_WO_sa_AttributeStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_sa_AttributeStatement(struct zxmd_sa_AttributeStatement_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_sa_AttributeStatement) */

struct zx_str_s* zxmd_EASY_ENC_SO_sa_AttributeStatement(struct zx_ctx* c, struct zxmd_sa_AttributeStatement_s* x )
{
  int len = zxmd_LEN_sa_AttributeStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_sa_AttributeStatement(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_sa_AttributeStatement) */

struct zx_str_s* zxmd_EASY_ENC_WO_sa_AttributeStatement(struct zx_ctx* c, struct zxmd_sa_AttributeStatement_s* x )
{
  int len = zxmd_LEN_sa_AttributeStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_sa_AttributeStatement(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_sa_AudienceRestriction_s
#define EL_NS     sa
#define EL_TAG    AudienceRestriction

/* FUNC(zxmd_LEN_sa_AudienceRestriction) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_sa_AudienceRestriction(struct zxmd_sa_AudienceRestriction_s* x )
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
    len += zxmd_LEN_simple_elem(se, sizeof("Audience") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_sa_AudienceRestriction) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_sa_AudienceRestriction(struct zxmd_sa_AudienceRestriction_s* x, char* p )
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
    p = zxmd_ENC_SO_simple_elem(se, p, "Audience", sizeof("Audience") - 1);


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

/* FUNC(zxmd_ENC_WO_sa_AudienceRestriction) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_sa_AudienceRestriction(struct zxmd_sa_AudienceRestriction_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_sa_AudienceRestriction) */

struct zx_str_s* zxmd_EASY_ENC_SO_sa_AudienceRestriction(struct zx_ctx* c, struct zxmd_sa_AudienceRestriction_s* x )
{
  int len = zxmd_LEN_sa_AudienceRestriction(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_sa_AudienceRestriction(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_sa_AudienceRestriction) */

struct zx_str_s* zxmd_EASY_ENC_WO_sa_AudienceRestriction(struct zx_ctx* c, struct zxmd_sa_AudienceRestriction_s* x )
{
  int len = zxmd_LEN_sa_AudienceRestriction(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_sa_AudienceRestriction(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_sa_AuthnContext_s
#define EL_NS     sa
#define EL_TAG    AuthnContext

/* FUNC(zxmd_LEN_sa_AuthnContext) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_sa_AuthnContext(struct zxmd_sa_AuthnContext_s* x )
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
    len += zxmd_LEN_simple_elem(se, sizeof("AuthnContextClassRef") - 1);
  for (se = x->AuthnContextDecl; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("AuthnContextDecl") - 1);
  for (se = x->AuthnContextDeclRef; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("AuthnContextDeclRef") - 1);
  for (se = x->AuthenticatingAuthority; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("AuthenticatingAuthority") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_sa_AuthnContext) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_sa_AuthnContext(struct zxmd_sa_AuthnContext_s* x, char* p )
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
    p = zxmd_ENC_SO_simple_elem(se, p, "AuthnContextClassRef", sizeof("AuthnContextClassRef") - 1);
  for (se = x->AuthnContextDecl; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "AuthnContextDecl", sizeof("AuthnContextDecl") - 1);
  for (se = x->AuthnContextDeclRef; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "AuthnContextDeclRef", sizeof("AuthnContextDeclRef") - 1);
  for (se = x->AuthenticatingAuthority; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "AuthenticatingAuthority", sizeof("AuthenticatingAuthority") - 1);


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

/* FUNC(zxmd_ENC_WO_sa_AuthnContext) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_sa_AuthnContext(struct zxmd_sa_AuthnContext_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_sa_AuthnContext) */

struct zx_str_s* zxmd_EASY_ENC_SO_sa_AuthnContext(struct zx_ctx* c, struct zxmd_sa_AuthnContext_s* x )
{
  int len = zxmd_LEN_sa_AuthnContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_sa_AuthnContext(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_sa_AuthnContext) */

struct zx_str_s* zxmd_EASY_ENC_WO_sa_AuthnContext(struct zx_ctx* c, struct zxmd_sa_AuthnContext_s* x )
{
  int len = zxmd_LEN_sa_AuthnContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_sa_AuthnContext(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_sa_AuthnStatement_s
#define EL_NS     sa
#define EL_TAG    AuthnStatement

/* FUNC(zxmd_LEN_sa_AuthnStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_sa_AuthnStatement(struct zxmd_sa_AuthnStatement_s* x )
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
      struct zxmd_sa_SubjectLocality_s* e;
      for (e = x->SubjectLocality; e; e = (struct zxmd_sa_SubjectLocality_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_SubjectLocality(e);
  }
  {
      struct zxmd_sa_AuthnContext_s* e;
      for (e = x->AuthnContext; e; e = (struct zxmd_sa_AuthnContext_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_AuthnContext(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_sa_AuthnStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_sa_AuthnStatement(struct zxmd_sa_AuthnStatement_s* x, char* p )
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
      struct zxmd_sa_SubjectLocality_s* e;
      for (e = x->SubjectLocality; e; e = (struct zxmd_sa_SubjectLocality_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_SubjectLocality(e, p);
  }
  {
      struct zxmd_sa_AuthnContext_s* e;
      for (e = x->AuthnContext; e; e = (struct zxmd_sa_AuthnContext_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_AuthnContext(e, p);
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

/* FUNC(zxmd_ENC_WO_sa_AuthnStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_sa_AuthnStatement(struct zxmd_sa_AuthnStatement_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_sa_AuthnStatement) */

struct zx_str_s* zxmd_EASY_ENC_SO_sa_AuthnStatement(struct zx_ctx* c, struct zxmd_sa_AuthnStatement_s* x )
{
  int len = zxmd_LEN_sa_AuthnStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_sa_AuthnStatement(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_sa_AuthnStatement) */

struct zx_str_s* zxmd_EASY_ENC_WO_sa_AuthnStatement(struct zx_ctx* c, struct zxmd_sa_AuthnStatement_s* x )
{
  int len = zxmd_LEN_sa_AuthnStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_sa_AuthnStatement(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_sa_AuthzDecisionStatement_s
#define EL_NS     sa
#define EL_TAG    AuthzDecisionStatement

/* FUNC(zxmd_LEN_sa_AuthzDecisionStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_sa_AuthzDecisionStatement(struct zxmd_sa_AuthzDecisionStatement_s* x )
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
      struct zxmd_sa_Action_s* e;
      for (e = x->Action; e; e = (struct zxmd_sa_Action_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_Action(e);
  }
  {
      struct zxmd_sa_Evidence_s* e;
      for (e = x->Evidence; e; e = (struct zxmd_sa_Evidence_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_Evidence(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_sa_AuthzDecisionStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_sa_AuthzDecisionStatement(struct zxmd_sa_AuthzDecisionStatement_s* x, char* p )
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
      struct zxmd_sa_Action_s* e;
      for (e = x->Action; e; e = (struct zxmd_sa_Action_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_Action(e, p);
  }
  {
      struct zxmd_sa_Evidence_s* e;
      for (e = x->Evidence; e; e = (struct zxmd_sa_Evidence_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_Evidence(e, p);
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

/* FUNC(zxmd_ENC_WO_sa_AuthzDecisionStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_sa_AuthzDecisionStatement(struct zxmd_sa_AuthzDecisionStatement_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_sa_AuthzDecisionStatement) */

struct zx_str_s* zxmd_EASY_ENC_SO_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zxmd_sa_AuthzDecisionStatement_s* x )
{
  int len = zxmd_LEN_sa_AuthzDecisionStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_sa_AuthzDecisionStatement(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_sa_AuthzDecisionStatement) */

struct zx_str_s* zxmd_EASY_ENC_WO_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zxmd_sa_AuthzDecisionStatement_s* x )
{
  int len = zxmd_LEN_sa_AuthzDecisionStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_sa_AuthzDecisionStatement(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_sa_BaseID_s
#define EL_NS     sa
#define EL_TAG    BaseID

/* FUNC(zxmd_LEN_sa_BaseID) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_sa_BaseID(struct zxmd_sa_BaseID_s* x )
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

/* FUNC(zxmd_ENC_SO_sa_BaseID) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_sa_BaseID(struct zxmd_sa_BaseID_s* x, char* p )
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

/* FUNC(zxmd_ENC_WO_sa_BaseID) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_sa_BaseID(struct zxmd_sa_BaseID_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_sa_BaseID) */

struct zx_str_s* zxmd_EASY_ENC_SO_sa_BaseID(struct zx_ctx* c, struct zxmd_sa_BaseID_s* x )
{
  int len = zxmd_LEN_sa_BaseID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_sa_BaseID(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_sa_BaseID) */

struct zx_str_s* zxmd_EASY_ENC_WO_sa_BaseID(struct zx_ctx* c, struct zxmd_sa_BaseID_s* x )
{
  int len = zxmd_LEN_sa_BaseID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_sa_BaseID(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_sa_Conditions_s
#define EL_NS     sa
#define EL_TAG    Conditions

/* FUNC(zxmd_LEN_sa_Conditions) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_sa_Conditions(struct zxmd_sa_Conditions_s* x )
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
    len += zxmd_LEN_simple_elem(se, sizeof("Condition") - 1);
  {
      struct zxmd_sa_AudienceRestriction_s* e;
      for (e = x->AudienceRestriction; e; e = (struct zxmd_sa_AudienceRestriction_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_AudienceRestriction(e);
  }
  {
      struct zxmd_sa_OneTimeUse_s* e;
      for (e = x->OneTimeUse; e; e = (struct zxmd_sa_OneTimeUse_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_OneTimeUse(e);
  }
  {
      struct zxmd_sa_ProxyRestriction_s* e;
      for (e = x->ProxyRestriction; e; e = (struct zxmd_sa_ProxyRestriction_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_ProxyRestriction(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_sa_Conditions) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_sa_Conditions(struct zxmd_sa_Conditions_s* x, char* p )
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
    p = zxmd_ENC_SO_simple_elem(se, p, "Condition", sizeof("Condition") - 1);
  {
      struct zxmd_sa_AudienceRestriction_s* e;
      for (e = x->AudienceRestriction; e; e = (struct zxmd_sa_AudienceRestriction_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_AudienceRestriction(e, p);
  }
  {
      struct zxmd_sa_OneTimeUse_s* e;
      for (e = x->OneTimeUse; e; e = (struct zxmd_sa_OneTimeUse_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_OneTimeUse(e, p);
  }
  {
      struct zxmd_sa_ProxyRestriction_s* e;
      for (e = x->ProxyRestriction; e; e = (struct zxmd_sa_ProxyRestriction_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_ProxyRestriction(e, p);
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

/* FUNC(zxmd_ENC_WO_sa_Conditions) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_sa_Conditions(struct zxmd_sa_Conditions_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_sa_Conditions) */

struct zx_str_s* zxmd_EASY_ENC_SO_sa_Conditions(struct zx_ctx* c, struct zxmd_sa_Conditions_s* x )
{
  int len = zxmd_LEN_sa_Conditions(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_sa_Conditions(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_sa_Conditions) */

struct zx_str_s* zxmd_EASY_ENC_WO_sa_Conditions(struct zx_ctx* c, struct zxmd_sa_Conditions_s* x )
{
  int len = zxmd_LEN_sa_Conditions(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_sa_Conditions(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_sa_EncryptedAssertion_s
#define EL_NS     sa
#define EL_TAG    EncryptedAssertion

/* FUNC(zxmd_LEN_sa_EncryptedAssertion) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_sa_EncryptedAssertion(struct zxmd_sa_EncryptedAssertion_s* x )
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
      struct zxmd_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zxmd_xenc_EncryptedData_s*)e->gg.g.n)
	  len += zxmd_LEN_xenc_EncryptedData(e);
  }
  {
      struct zxmd_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zxmd_xenc_EncryptedKey_s*)e->gg.g.n)
	  len += zxmd_LEN_xenc_EncryptedKey(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_sa_EncryptedAssertion) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_sa_EncryptedAssertion(struct zxmd_sa_EncryptedAssertion_s* x, char* p )
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
      struct zxmd_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zxmd_xenc_EncryptedData_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_xenc_EncryptedData(e, p);
  }
  {
      struct zxmd_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zxmd_xenc_EncryptedKey_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_xenc_EncryptedKey(e, p);
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

/* FUNC(zxmd_ENC_WO_sa_EncryptedAssertion) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_sa_EncryptedAssertion(struct zxmd_sa_EncryptedAssertion_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_sa_EncryptedAssertion) */

struct zx_str_s* zxmd_EASY_ENC_SO_sa_EncryptedAssertion(struct zx_ctx* c, struct zxmd_sa_EncryptedAssertion_s* x )
{
  int len = zxmd_LEN_sa_EncryptedAssertion(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_sa_EncryptedAssertion(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_sa_EncryptedAssertion) */

struct zx_str_s* zxmd_EASY_ENC_WO_sa_EncryptedAssertion(struct zx_ctx* c, struct zxmd_sa_EncryptedAssertion_s* x )
{
  int len = zxmd_LEN_sa_EncryptedAssertion(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_sa_EncryptedAssertion(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_sa_EncryptedAttribute_s
#define EL_NS     sa
#define EL_TAG    EncryptedAttribute

/* FUNC(zxmd_LEN_sa_EncryptedAttribute) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_sa_EncryptedAttribute(struct zxmd_sa_EncryptedAttribute_s* x )
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
      struct zxmd_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zxmd_xenc_EncryptedData_s*)e->gg.g.n)
	  len += zxmd_LEN_xenc_EncryptedData(e);
  }
  {
      struct zxmd_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zxmd_xenc_EncryptedKey_s*)e->gg.g.n)
	  len += zxmd_LEN_xenc_EncryptedKey(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_sa_EncryptedAttribute) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_sa_EncryptedAttribute(struct zxmd_sa_EncryptedAttribute_s* x, char* p )
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
      struct zxmd_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zxmd_xenc_EncryptedData_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_xenc_EncryptedData(e, p);
  }
  {
      struct zxmd_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zxmd_xenc_EncryptedKey_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_xenc_EncryptedKey(e, p);
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

/* FUNC(zxmd_ENC_WO_sa_EncryptedAttribute) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_sa_EncryptedAttribute(struct zxmd_sa_EncryptedAttribute_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_sa_EncryptedAttribute) */

struct zx_str_s* zxmd_EASY_ENC_SO_sa_EncryptedAttribute(struct zx_ctx* c, struct zxmd_sa_EncryptedAttribute_s* x )
{
  int len = zxmd_LEN_sa_EncryptedAttribute(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_sa_EncryptedAttribute(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_sa_EncryptedAttribute) */

struct zx_str_s* zxmd_EASY_ENC_WO_sa_EncryptedAttribute(struct zx_ctx* c, struct zxmd_sa_EncryptedAttribute_s* x )
{
  int len = zxmd_LEN_sa_EncryptedAttribute(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_sa_EncryptedAttribute(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_sa_EncryptedID_s
#define EL_NS     sa
#define EL_TAG    EncryptedID

/* FUNC(zxmd_LEN_sa_EncryptedID) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_sa_EncryptedID(struct zxmd_sa_EncryptedID_s* x )
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
      struct zxmd_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zxmd_xenc_EncryptedData_s*)e->gg.g.n)
	  len += zxmd_LEN_xenc_EncryptedData(e);
  }
  {
      struct zxmd_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zxmd_xenc_EncryptedKey_s*)e->gg.g.n)
	  len += zxmd_LEN_xenc_EncryptedKey(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_sa_EncryptedID) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_sa_EncryptedID(struct zxmd_sa_EncryptedID_s* x, char* p )
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
      struct zxmd_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zxmd_xenc_EncryptedData_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_xenc_EncryptedData(e, p);
  }
  {
      struct zxmd_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zxmd_xenc_EncryptedKey_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_xenc_EncryptedKey(e, p);
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

/* FUNC(zxmd_ENC_WO_sa_EncryptedID) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_sa_EncryptedID(struct zxmd_sa_EncryptedID_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_sa_EncryptedID) */

struct zx_str_s* zxmd_EASY_ENC_SO_sa_EncryptedID(struct zx_ctx* c, struct zxmd_sa_EncryptedID_s* x )
{
  int len = zxmd_LEN_sa_EncryptedID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_sa_EncryptedID(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_sa_EncryptedID) */

struct zx_str_s* zxmd_EASY_ENC_WO_sa_EncryptedID(struct zx_ctx* c, struct zxmd_sa_EncryptedID_s* x )
{
  int len = zxmd_LEN_sa_EncryptedID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_sa_EncryptedID(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_sa_Evidence_s
#define EL_NS     sa
#define EL_TAG    Evidence

/* FUNC(zxmd_LEN_sa_Evidence) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_sa_Evidence(struct zxmd_sa_Evidence_s* x )
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
    len += zxmd_LEN_simple_elem(se, sizeof("AssertionIDRef") - 1);
  for (se = x->AssertionURIRef; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("AssertionURIRef") - 1);
  {
      struct zxmd_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zxmd_sa_Assertion_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_Assertion(e);
  }
  {
      struct zxmd_sa_EncryptedAssertion_s* e;
      for (e = x->EncryptedAssertion; e; e = (struct zxmd_sa_EncryptedAssertion_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_EncryptedAssertion(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_sa_Evidence) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_sa_Evidence(struct zxmd_sa_Evidence_s* x, char* p )
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
    p = zxmd_ENC_SO_simple_elem(se, p, "AssertionIDRef", sizeof("AssertionIDRef") - 1);
  for (se = x->AssertionURIRef; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "AssertionURIRef", sizeof("AssertionURIRef") - 1);
  {
      struct zxmd_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zxmd_sa_Assertion_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_Assertion(e, p);
  }
  {
      struct zxmd_sa_EncryptedAssertion_s* e;
      for (e = x->EncryptedAssertion; e; e = (struct zxmd_sa_EncryptedAssertion_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_EncryptedAssertion(e, p);
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

/* FUNC(zxmd_ENC_WO_sa_Evidence) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_sa_Evidence(struct zxmd_sa_Evidence_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_sa_Evidence) */

struct zx_str_s* zxmd_EASY_ENC_SO_sa_Evidence(struct zx_ctx* c, struct zxmd_sa_Evidence_s* x )
{
  int len = zxmd_LEN_sa_Evidence(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_sa_Evidence(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_sa_Evidence) */

struct zx_str_s* zxmd_EASY_ENC_WO_sa_Evidence(struct zx_ctx* c, struct zxmd_sa_Evidence_s* x )
{
  int len = zxmd_LEN_sa_Evidence(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_sa_Evidence(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_sa_Issuer_s
#define EL_NS     sa
#define EL_TAG    Issuer

/* FUNC(zxmd_LEN_sa_Issuer) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_sa_Issuer(struct zxmd_sa_Issuer_s* x )
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

/* FUNC(zxmd_ENC_SO_sa_Issuer) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_sa_Issuer(struct zxmd_sa_Issuer_s* x, char* p )
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

/* FUNC(zxmd_ENC_WO_sa_Issuer) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_sa_Issuer(struct zxmd_sa_Issuer_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_sa_Issuer) */

struct zx_str_s* zxmd_EASY_ENC_SO_sa_Issuer(struct zx_ctx* c, struct zxmd_sa_Issuer_s* x )
{
  int len = zxmd_LEN_sa_Issuer(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_sa_Issuer(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_sa_Issuer) */

struct zx_str_s* zxmd_EASY_ENC_WO_sa_Issuer(struct zx_ctx* c, struct zxmd_sa_Issuer_s* x )
{
  int len = zxmd_LEN_sa_Issuer(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_sa_Issuer(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_sa_NameID_s
#define EL_NS     sa
#define EL_TAG    NameID

/* FUNC(zxmd_LEN_sa_NameID) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_sa_NameID(struct zxmd_sa_NameID_s* x )
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

/* FUNC(zxmd_ENC_SO_sa_NameID) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_sa_NameID(struct zxmd_sa_NameID_s* x, char* p )
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

/* FUNC(zxmd_ENC_WO_sa_NameID) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_sa_NameID(struct zxmd_sa_NameID_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_sa_NameID) */

struct zx_str_s* zxmd_EASY_ENC_SO_sa_NameID(struct zx_ctx* c, struct zxmd_sa_NameID_s* x )
{
  int len = zxmd_LEN_sa_NameID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_sa_NameID(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_sa_NameID) */

struct zx_str_s* zxmd_EASY_ENC_WO_sa_NameID(struct zx_ctx* c, struct zxmd_sa_NameID_s* x )
{
  int len = zxmd_LEN_sa_NameID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_sa_NameID(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_sa_OneTimeUse_s
#define EL_NS     sa
#define EL_TAG    OneTimeUse

/* FUNC(zxmd_LEN_sa_OneTimeUse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_sa_OneTimeUse(struct zxmd_sa_OneTimeUse_s* x )
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

/* FUNC(zxmd_ENC_SO_sa_OneTimeUse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_sa_OneTimeUse(struct zxmd_sa_OneTimeUse_s* x, char* p )
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

/* FUNC(zxmd_ENC_WO_sa_OneTimeUse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_sa_OneTimeUse(struct zxmd_sa_OneTimeUse_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_sa_OneTimeUse) */

struct zx_str_s* zxmd_EASY_ENC_SO_sa_OneTimeUse(struct zx_ctx* c, struct zxmd_sa_OneTimeUse_s* x )
{
  int len = zxmd_LEN_sa_OneTimeUse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_sa_OneTimeUse(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_sa_OneTimeUse) */

struct zx_str_s* zxmd_EASY_ENC_WO_sa_OneTimeUse(struct zx_ctx* c, struct zxmd_sa_OneTimeUse_s* x )
{
  int len = zxmd_LEN_sa_OneTimeUse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_sa_OneTimeUse(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_sa_ProxyRestriction_s
#define EL_NS     sa
#define EL_TAG    ProxyRestriction

/* FUNC(zxmd_LEN_sa_ProxyRestriction) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_sa_ProxyRestriction(struct zxmd_sa_ProxyRestriction_s* x )
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
    len += zxmd_LEN_simple_elem(se, sizeof("Audience") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_sa_ProxyRestriction) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_sa_ProxyRestriction(struct zxmd_sa_ProxyRestriction_s* x, char* p )
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
    p = zxmd_ENC_SO_simple_elem(se, p, "Audience", sizeof("Audience") - 1);


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

/* FUNC(zxmd_ENC_WO_sa_ProxyRestriction) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_sa_ProxyRestriction(struct zxmd_sa_ProxyRestriction_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_sa_ProxyRestriction) */

struct zx_str_s* zxmd_EASY_ENC_SO_sa_ProxyRestriction(struct zx_ctx* c, struct zxmd_sa_ProxyRestriction_s* x )
{
  int len = zxmd_LEN_sa_ProxyRestriction(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_sa_ProxyRestriction(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_sa_ProxyRestriction) */

struct zx_str_s* zxmd_EASY_ENC_WO_sa_ProxyRestriction(struct zx_ctx* c, struct zxmd_sa_ProxyRestriction_s* x )
{
  int len = zxmd_LEN_sa_ProxyRestriction(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_sa_ProxyRestriction(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_sa_Subject_s
#define EL_NS     sa
#define EL_TAG    Subject

/* FUNC(zxmd_LEN_sa_Subject) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_sa_Subject(struct zxmd_sa_Subject_s* x )
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
      struct zxmd_sa_BaseID_s* e;
      for (e = x->BaseID; e; e = (struct zxmd_sa_BaseID_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_BaseID(e);
  }
  {
      struct zxmd_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zxmd_sa_NameID_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_NameID(e);
  }
  {
      struct zxmd_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zxmd_sa_EncryptedID_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_EncryptedID(e);
  }
  {
      struct zxmd_sa_SubjectConfirmation_s* e;
      for (e = x->SubjectConfirmation; e; e = (struct zxmd_sa_SubjectConfirmation_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_SubjectConfirmation(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_sa_Subject) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_sa_Subject(struct zxmd_sa_Subject_s* x, char* p )
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
      struct zxmd_sa_BaseID_s* e;
      for (e = x->BaseID; e; e = (struct zxmd_sa_BaseID_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_BaseID(e, p);
  }
  {
      struct zxmd_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zxmd_sa_NameID_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_NameID(e, p);
  }
  {
      struct zxmd_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zxmd_sa_EncryptedID_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_EncryptedID(e, p);
  }
  {
      struct zxmd_sa_SubjectConfirmation_s* e;
      for (e = x->SubjectConfirmation; e; e = (struct zxmd_sa_SubjectConfirmation_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_SubjectConfirmation(e, p);
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

/* FUNC(zxmd_ENC_WO_sa_Subject) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_sa_Subject(struct zxmd_sa_Subject_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_sa_Subject) */

struct zx_str_s* zxmd_EASY_ENC_SO_sa_Subject(struct zx_ctx* c, struct zxmd_sa_Subject_s* x )
{
  int len = zxmd_LEN_sa_Subject(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_sa_Subject(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_sa_Subject) */

struct zx_str_s* zxmd_EASY_ENC_WO_sa_Subject(struct zx_ctx* c, struct zxmd_sa_Subject_s* x )
{
  int len = zxmd_LEN_sa_Subject(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_sa_Subject(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_sa_SubjectConfirmation_s
#define EL_NS     sa
#define EL_TAG    SubjectConfirmation

/* FUNC(zxmd_LEN_sa_SubjectConfirmation) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_sa_SubjectConfirmation(struct zxmd_sa_SubjectConfirmation_s* x )
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
      struct zxmd_sa_BaseID_s* e;
      for (e = x->BaseID; e; e = (struct zxmd_sa_BaseID_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_BaseID(e);
  }
  {
      struct zxmd_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zxmd_sa_NameID_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_NameID(e);
  }
  {
      struct zxmd_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zxmd_sa_EncryptedID_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_EncryptedID(e);
  }
  {
      struct zxmd_sa_SubjectConfirmationData_s* e;
      for (e = x->SubjectConfirmationData; e; e = (struct zxmd_sa_SubjectConfirmationData_s*)e->gg.g.n)
	  len += zxmd_LEN_sa_SubjectConfirmationData(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_sa_SubjectConfirmation) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_sa_SubjectConfirmation(struct zxmd_sa_SubjectConfirmation_s* x, char* p )
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
      struct zxmd_sa_BaseID_s* e;
      for (e = x->BaseID; e; e = (struct zxmd_sa_BaseID_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_BaseID(e, p);
  }
  {
      struct zxmd_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zxmd_sa_NameID_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_NameID(e, p);
  }
  {
      struct zxmd_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zxmd_sa_EncryptedID_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_EncryptedID(e, p);
  }
  {
      struct zxmd_sa_SubjectConfirmationData_s* e;
      for (e = x->SubjectConfirmationData; e; e = (struct zxmd_sa_SubjectConfirmationData_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_sa_SubjectConfirmationData(e, p);
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

/* FUNC(zxmd_ENC_WO_sa_SubjectConfirmation) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_sa_SubjectConfirmation(struct zxmd_sa_SubjectConfirmation_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_sa_SubjectConfirmation) */

struct zx_str_s* zxmd_EASY_ENC_SO_sa_SubjectConfirmation(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmation_s* x )
{
  int len = zxmd_LEN_sa_SubjectConfirmation(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_sa_SubjectConfirmation(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_sa_SubjectConfirmation) */

struct zx_str_s* zxmd_EASY_ENC_WO_sa_SubjectConfirmation(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmation_s* x )
{
  int len = zxmd_LEN_sa_SubjectConfirmation(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_sa_SubjectConfirmation(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_sa_SubjectConfirmationData_s
#define EL_NS     sa
#define EL_TAG    SubjectConfirmationData

/* FUNC(zxmd_LEN_sa_SubjectConfirmationData) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_sa_SubjectConfirmationData(struct zxmd_sa_SubjectConfirmationData_s* x )
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

/* FUNC(zxmd_ENC_SO_sa_SubjectConfirmationData) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_sa_SubjectConfirmationData(struct zxmd_sa_SubjectConfirmationData_s* x, char* p )
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

/* FUNC(zxmd_ENC_WO_sa_SubjectConfirmationData) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_sa_SubjectConfirmationData(struct zxmd_sa_SubjectConfirmationData_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_sa_SubjectConfirmationData) */

struct zx_str_s* zxmd_EASY_ENC_SO_sa_SubjectConfirmationData(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmationData_s* x )
{
  int len = zxmd_LEN_sa_SubjectConfirmationData(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_sa_SubjectConfirmationData(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_sa_SubjectConfirmationData) */

struct zx_str_s* zxmd_EASY_ENC_WO_sa_SubjectConfirmationData(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmationData_s* x )
{
  int len = zxmd_LEN_sa_SubjectConfirmationData(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_sa_SubjectConfirmationData(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_sa_SubjectLocality_s
#define EL_NS     sa
#define EL_TAG    SubjectLocality

/* FUNC(zxmd_LEN_sa_SubjectLocality) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_sa_SubjectLocality(struct zxmd_sa_SubjectLocality_s* x )
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

/* FUNC(zxmd_ENC_SO_sa_SubjectLocality) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_sa_SubjectLocality(struct zxmd_sa_SubjectLocality_s* x, char* p )
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

/* FUNC(zxmd_ENC_WO_sa_SubjectLocality) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_sa_SubjectLocality(struct zxmd_sa_SubjectLocality_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_sa_SubjectLocality) */

struct zx_str_s* zxmd_EASY_ENC_SO_sa_SubjectLocality(struct zx_ctx* c, struct zxmd_sa_SubjectLocality_s* x )
{
  int len = zxmd_LEN_sa_SubjectLocality(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_sa_SubjectLocality(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_sa_SubjectLocality) */

struct zx_str_s* zxmd_EASY_ENC_WO_sa_SubjectLocality(struct zx_ctx* c, struct zxmd_sa_SubjectLocality_s* x )
{
  int len = zxmd_LEN_sa_SubjectLocality(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_sa_SubjectLocality(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_sa_TestElem_s
#define EL_NS     sa
#define EL_TAG    TestElem

/* FUNC(zxmd_LEN_sa_TestElem) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_sa_TestElem(struct zxmd_sa_TestElem_s* x )
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
    len += zxmd_LEN_simple_elem(se, sizeof("AttributeValue") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_sa_TestElem) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_sa_TestElem(struct zxmd_sa_TestElem_s* x, char* p )
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
    p = zxmd_ENC_SO_simple_elem(se, p, "AttributeValue", sizeof("AttributeValue") - 1);


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

/* FUNC(zxmd_ENC_WO_sa_TestElem) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_sa_TestElem(struct zxmd_sa_TestElem_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_sa_TestElem) */

struct zx_str_s* zxmd_EASY_ENC_SO_sa_TestElem(struct zx_ctx* c, struct zxmd_sa_TestElem_s* x )
{
  int len = zxmd_LEN_sa_TestElem(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_sa_TestElem(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_sa_TestElem) */

struct zx_str_s* zxmd_EASY_ENC_WO_sa_TestElem(struct zx_ctx* c, struct zxmd_sa_TestElem_s* x )
{
  int len = zxmd_LEN_sa_TestElem(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_sa_TestElem(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_xenc_AgreementMethod_s
#define EL_NS     xenc
#define EL_TAG    AgreementMethod

/* FUNC(zxmd_LEN_xenc_AgreementMethod) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_xenc_AgreementMethod(struct zxmd_xenc_AgreementMethod_s* x )
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
    len += zxmd_LEN_simple_elem(se, sizeof("KA_Nonce") - 1);
  {
      struct zxmd_xenc_OriginatorKeyInfo_s* e;
      for (e = x->OriginatorKeyInfo; e; e = (struct zxmd_xenc_OriginatorKeyInfo_s*)e->gg.g.n)
	  len += zxmd_LEN_xenc_OriginatorKeyInfo(e);
  }
  {
      struct zxmd_xenc_RecipientKeyInfo_s* e;
      for (e = x->RecipientKeyInfo; e; e = (struct zxmd_xenc_RecipientKeyInfo_s*)e->gg.g.n)
	  len += zxmd_LEN_xenc_RecipientKeyInfo(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_xenc_AgreementMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_xenc_AgreementMethod(struct zxmd_xenc_AgreementMethod_s* x, char* p )
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
    p = zxmd_ENC_SO_simple_elem(se, p, "KA_Nonce", sizeof("KA_Nonce") - 1);
  {
      struct zxmd_xenc_OriginatorKeyInfo_s* e;
      for (e = x->OriginatorKeyInfo; e; e = (struct zxmd_xenc_OriginatorKeyInfo_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_xenc_OriginatorKeyInfo(e, p);
  }
  {
      struct zxmd_xenc_RecipientKeyInfo_s* e;
      for (e = x->RecipientKeyInfo; e; e = (struct zxmd_xenc_RecipientKeyInfo_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_xenc_RecipientKeyInfo(e, p);
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

/* FUNC(zxmd_ENC_WO_xenc_AgreementMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_xenc_AgreementMethod(struct zxmd_xenc_AgreementMethod_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_xenc_AgreementMethod) */

struct zx_str_s* zxmd_EASY_ENC_SO_xenc_AgreementMethod(struct zx_ctx* c, struct zxmd_xenc_AgreementMethod_s* x )
{
  int len = zxmd_LEN_xenc_AgreementMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_xenc_AgreementMethod(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_xenc_AgreementMethod) */

struct zx_str_s* zxmd_EASY_ENC_WO_xenc_AgreementMethod(struct zx_ctx* c, struct zxmd_xenc_AgreementMethod_s* x )
{
  int len = zxmd_LEN_xenc_AgreementMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_xenc_AgreementMethod(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_xenc_CipherData_s
#define EL_NS     xenc
#define EL_TAG    CipherData

/* FUNC(zxmd_LEN_xenc_CipherData) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_xenc_CipherData(struct zxmd_xenc_CipherData_s* x )
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
    len += zxmd_LEN_simple_elem(se, sizeof("CipherValue") - 1);
  {
      struct zxmd_xenc_CipherReference_s* e;
      for (e = x->CipherReference; e; e = (struct zxmd_xenc_CipherReference_s*)e->gg.g.n)
	  len += zxmd_LEN_xenc_CipherReference(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_xenc_CipherData) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_xenc_CipherData(struct zxmd_xenc_CipherData_s* x, char* p )
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
    p = zxmd_ENC_SO_simple_elem(se, p, "CipherValue", sizeof("CipherValue") - 1);
  {
      struct zxmd_xenc_CipherReference_s* e;
      for (e = x->CipherReference; e; e = (struct zxmd_xenc_CipherReference_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_xenc_CipherReference(e, p);
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

/* FUNC(zxmd_ENC_WO_xenc_CipherData) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_xenc_CipherData(struct zxmd_xenc_CipherData_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_xenc_CipherData) */

struct zx_str_s* zxmd_EASY_ENC_SO_xenc_CipherData(struct zx_ctx* c, struct zxmd_xenc_CipherData_s* x )
{
  int len = zxmd_LEN_xenc_CipherData(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_xenc_CipherData(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_xenc_CipherData) */

struct zx_str_s* zxmd_EASY_ENC_WO_xenc_CipherData(struct zx_ctx* c, struct zxmd_xenc_CipherData_s* x )
{
  int len = zxmd_LEN_xenc_CipherData(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_xenc_CipherData(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_xenc_CipherReference_s
#define EL_NS     xenc
#define EL_TAG    CipherReference

/* FUNC(zxmd_LEN_xenc_CipherReference) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_xenc_CipherReference(struct zxmd_xenc_CipherReference_s* x )
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
      struct zxmd_xenc_Transforms_s* e;
      for (e = x->Transforms; e; e = (struct zxmd_xenc_Transforms_s*)e->gg.g.n)
	  len += zxmd_LEN_xenc_Transforms(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_xenc_CipherReference) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_xenc_CipherReference(struct zxmd_xenc_CipherReference_s* x, char* p )
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
      struct zxmd_xenc_Transforms_s* e;
      for (e = x->Transforms; e; e = (struct zxmd_xenc_Transforms_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_xenc_Transforms(e, p);
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

/* FUNC(zxmd_ENC_WO_xenc_CipherReference) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_xenc_CipherReference(struct zxmd_xenc_CipherReference_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_xenc_CipherReference) */

struct zx_str_s* zxmd_EASY_ENC_SO_xenc_CipherReference(struct zx_ctx* c, struct zxmd_xenc_CipherReference_s* x )
{
  int len = zxmd_LEN_xenc_CipherReference(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_xenc_CipherReference(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_xenc_CipherReference) */

struct zx_str_s* zxmd_EASY_ENC_WO_xenc_CipherReference(struct zx_ctx* c, struct zxmd_xenc_CipherReference_s* x )
{
  int len = zxmd_LEN_xenc_CipherReference(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_xenc_CipherReference(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_xenc_DataReference_s
#define EL_NS     xenc
#define EL_TAG    DataReference

/* FUNC(zxmd_LEN_xenc_DataReference) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_xenc_DataReference(struct zxmd_xenc_DataReference_s* x )
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

/* FUNC(zxmd_ENC_SO_xenc_DataReference) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_xenc_DataReference(struct zxmd_xenc_DataReference_s* x, char* p )
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

/* FUNC(zxmd_ENC_WO_xenc_DataReference) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_xenc_DataReference(struct zxmd_xenc_DataReference_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_xenc_DataReference) */

struct zx_str_s* zxmd_EASY_ENC_SO_xenc_DataReference(struct zx_ctx* c, struct zxmd_xenc_DataReference_s* x )
{
  int len = zxmd_LEN_xenc_DataReference(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_xenc_DataReference(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_xenc_DataReference) */

struct zx_str_s* zxmd_EASY_ENC_WO_xenc_DataReference(struct zx_ctx* c, struct zxmd_xenc_DataReference_s* x )
{
  int len = zxmd_LEN_xenc_DataReference(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_xenc_DataReference(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_xenc_EncryptedData_s
#define EL_NS     xenc
#define EL_TAG    EncryptedData

/* FUNC(zxmd_LEN_xenc_EncryptedData) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_xenc_EncryptedData(struct zxmd_xenc_EncryptedData_s* x )
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
      struct zxmd_xenc_EncryptionMethod_s* e;
      for (e = x->EncryptionMethod; e; e = (struct zxmd_xenc_EncryptionMethod_s*)e->gg.g.n)
	  len += zxmd_LEN_xenc_EncryptionMethod(e);
  }
  {
      struct zxmd_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_KeyInfo(e);
  }
  {
      struct zxmd_xenc_CipherData_s* e;
      for (e = x->CipherData; e; e = (struct zxmd_xenc_CipherData_s*)e->gg.g.n)
	  len += zxmd_LEN_xenc_CipherData(e);
  }
  {
      struct zxmd_xenc_EncryptionProperties_s* e;
      for (e = x->EncryptionProperties; e; e = (struct zxmd_xenc_EncryptionProperties_s*)e->gg.g.n)
	  len += zxmd_LEN_xenc_EncryptionProperties(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_xenc_EncryptedData) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_xenc_EncryptedData(struct zxmd_xenc_EncryptedData_s* x, char* p )
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
      struct zxmd_xenc_EncryptionMethod_s* e;
      for (e = x->EncryptionMethod; e; e = (struct zxmd_xenc_EncryptionMethod_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_xenc_EncryptionMethod(e, p);
  }
  {
      struct zxmd_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_KeyInfo(e, p);
  }
  {
      struct zxmd_xenc_CipherData_s* e;
      for (e = x->CipherData; e; e = (struct zxmd_xenc_CipherData_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_xenc_CipherData(e, p);
  }
  {
      struct zxmd_xenc_EncryptionProperties_s* e;
      for (e = x->EncryptionProperties; e; e = (struct zxmd_xenc_EncryptionProperties_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_xenc_EncryptionProperties(e, p);
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

/* FUNC(zxmd_ENC_WO_xenc_EncryptedData) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_xenc_EncryptedData(struct zxmd_xenc_EncryptedData_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_xenc_EncryptedData) */

struct zx_str_s* zxmd_EASY_ENC_SO_xenc_EncryptedData(struct zx_ctx* c, struct zxmd_xenc_EncryptedData_s* x )
{
  int len = zxmd_LEN_xenc_EncryptedData(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_xenc_EncryptedData(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_xenc_EncryptedData) */

struct zx_str_s* zxmd_EASY_ENC_WO_xenc_EncryptedData(struct zx_ctx* c, struct zxmd_xenc_EncryptedData_s* x )
{
  int len = zxmd_LEN_xenc_EncryptedData(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_xenc_EncryptedData(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_xenc_EncryptedKey_s
#define EL_NS     xenc
#define EL_TAG    EncryptedKey

/* FUNC(zxmd_LEN_xenc_EncryptedKey) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_xenc_EncryptedKey(struct zxmd_xenc_EncryptedKey_s* x )
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
      struct zxmd_xenc_EncryptionMethod_s* e;
      for (e = x->EncryptionMethod; e; e = (struct zxmd_xenc_EncryptionMethod_s*)e->gg.g.n)
	  len += zxmd_LEN_xenc_EncryptionMethod(e);
  }
  {
      struct zxmd_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_KeyInfo(e);
  }
  {
      struct zxmd_xenc_CipherData_s* e;
      for (e = x->CipherData; e; e = (struct zxmd_xenc_CipherData_s*)e->gg.g.n)
	  len += zxmd_LEN_xenc_CipherData(e);
  }
  {
      struct zxmd_xenc_EncryptionProperties_s* e;
      for (e = x->EncryptionProperties; e; e = (struct zxmd_xenc_EncryptionProperties_s*)e->gg.g.n)
	  len += zxmd_LEN_xenc_EncryptionProperties(e);
  }
  {
      struct zxmd_xenc_ReferenceList_s* e;
      for (e = x->ReferenceList; e; e = (struct zxmd_xenc_ReferenceList_s*)e->gg.g.n)
	  len += zxmd_LEN_xenc_ReferenceList(e);
  }
  for (se = x->CarriedKeyName; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("CarriedKeyName") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_xenc_EncryptedKey) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_xenc_EncryptedKey(struct zxmd_xenc_EncryptedKey_s* x, char* p )
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
      struct zxmd_xenc_EncryptionMethod_s* e;
      for (e = x->EncryptionMethod; e; e = (struct zxmd_xenc_EncryptionMethod_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_xenc_EncryptionMethod(e, p);
  }
  {
      struct zxmd_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_KeyInfo(e, p);
  }
  {
      struct zxmd_xenc_CipherData_s* e;
      for (e = x->CipherData; e; e = (struct zxmd_xenc_CipherData_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_xenc_CipherData(e, p);
  }
  {
      struct zxmd_xenc_EncryptionProperties_s* e;
      for (e = x->EncryptionProperties; e; e = (struct zxmd_xenc_EncryptionProperties_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_xenc_EncryptionProperties(e, p);
  }
  {
      struct zxmd_xenc_ReferenceList_s* e;
      for (e = x->ReferenceList; e; e = (struct zxmd_xenc_ReferenceList_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_xenc_ReferenceList(e, p);
  }
  for (se = x->CarriedKeyName; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "CarriedKeyName", sizeof("CarriedKeyName") - 1);


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

/* FUNC(zxmd_ENC_WO_xenc_EncryptedKey) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_xenc_EncryptedKey(struct zxmd_xenc_EncryptedKey_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_xenc_EncryptedKey) */

struct zx_str_s* zxmd_EASY_ENC_SO_xenc_EncryptedKey(struct zx_ctx* c, struct zxmd_xenc_EncryptedKey_s* x )
{
  int len = zxmd_LEN_xenc_EncryptedKey(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_xenc_EncryptedKey(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_xenc_EncryptedKey) */

struct zx_str_s* zxmd_EASY_ENC_WO_xenc_EncryptedKey(struct zx_ctx* c, struct zxmd_xenc_EncryptedKey_s* x )
{
  int len = zxmd_LEN_xenc_EncryptedKey(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_xenc_EncryptedKey(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_xenc_EncryptionMethod_s
#define EL_NS     xenc
#define EL_TAG    EncryptionMethod

/* FUNC(zxmd_LEN_xenc_EncryptionMethod) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_xenc_EncryptionMethod(struct zxmd_xenc_EncryptionMethod_s* x )
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
    len += zxmd_LEN_simple_elem(se, sizeof("KeySize") - 1);
  for (se = x->OAEPparams; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("OAEPparams") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_xenc_EncryptionMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_xenc_EncryptionMethod(struct zxmd_xenc_EncryptionMethod_s* x, char* p )
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
    p = zxmd_ENC_SO_simple_elem(se, p, "KeySize", sizeof("KeySize") - 1);
  for (se = x->OAEPparams; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "OAEPparams", sizeof("OAEPparams") - 1);


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

/* FUNC(zxmd_ENC_WO_xenc_EncryptionMethod) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_xenc_EncryptionMethod(struct zxmd_xenc_EncryptionMethod_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_xenc_EncryptionMethod) */

struct zx_str_s* zxmd_EASY_ENC_SO_xenc_EncryptionMethod(struct zx_ctx* c, struct zxmd_xenc_EncryptionMethod_s* x )
{
  int len = zxmd_LEN_xenc_EncryptionMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_xenc_EncryptionMethod(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_xenc_EncryptionMethod) */

struct zx_str_s* zxmd_EASY_ENC_WO_xenc_EncryptionMethod(struct zx_ctx* c, struct zxmd_xenc_EncryptionMethod_s* x )
{
  int len = zxmd_LEN_xenc_EncryptionMethod(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_xenc_EncryptionMethod(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_xenc_EncryptionProperties_s
#define EL_NS     xenc
#define EL_TAG    EncryptionProperties

/* FUNC(zxmd_LEN_xenc_EncryptionProperties) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_xenc_EncryptionProperties(struct zxmd_xenc_EncryptionProperties_s* x )
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
      struct zxmd_xenc_EncryptionProperty_s* e;
      for (e = x->EncryptionProperty; e; e = (struct zxmd_xenc_EncryptionProperty_s*)e->gg.g.n)
	  len += zxmd_LEN_xenc_EncryptionProperty(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_xenc_EncryptionProperties) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_xenc_EncryptionProperties(struct zxmd_xenc_EncryptionProperties_s* x, char* p )
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
      struct zxmd_xenc_EncryptionProperty_s* e;
      for (e = x->EncryptionProperty; e; e = (struct zxmd_xenc_EncryptionProperty_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_xenc_EncryptionProperty(e, p);
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

/* FUNC(zxmd_ENC_WO_xenc_EncryptionProperties) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_xenc_EncryptionProperties(struct zxmd_xenc_EncryptionProperties_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_xenc_EncryptionProperties) */

struct zx_str_s* zxmd_EASY_ENC_SO_xenc_EncryptionProperties(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperties_s* x )
{
  int len = zxmd_LEN_xenc_EncryptionProperties(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_xenc_EncryptionProperties(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_xenc_EncryptionProperties) */

struct zx_str_s* zxmd_EASY_ENC_WO_xenc_EncryptionProperties(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperties_s* x )
{
  int len = zxmd_LEN_xenc_EncryptionProperties(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_xenc_EncryptionProperties(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_xenc_EncryptionProperty_s
#define EL_NS     xenc
#define EL_TAG    EncryptionProperty

/* FUNC(zxmd_LEN_xenc_EncryptionProperty) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_xenc_EncryptionProperty(struct zxmd_xenc_EncryptionProperty_s* x )
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

/* FUNC(zxmd_ENC_SO_xenc_EncryptionProperty) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_xenc_EncryptionProperty(struct zxmd_xenc_EncryptionProperty_s* x, char* p )
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

/* FUNC(zxmd_ENC_WO_xenc_EncryptionProperty) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_xenc_EncryptionProperty(struct zxmd_xenc_EncryptionProperty_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_xenc_EncryptionProperty) */

struct zx_str_s* zxmd_EASY_ENC_SO_xenc_EncryptionProperty(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperty_s* x )
{
  int len = zxmd_LEN_xenc_EncryptionProperty(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_xenc_EncryptionProperty(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_xenc_EncryptionProperty) */

struct zx_str_s* zxmd_EASY_ENC_WO_xenc_EncryptionProperty(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperty_s* x )
{
  int len = zxmd_LEN_xenc_EncryptionProperty(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_xenc_EncryptionProperty(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_xenc_KeyReference_s
#define EL_NS     xenc
#define EL_TAG    KeyReference

/* FUNC(zxmd_LEN_xenc_KeyReference) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_xenc_KeyReference(struct zxmd_xenc_KeyReference_s* x )
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

/* FUNC(zxmd_ENC_SO_xenc_KeyReference) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_xenc_KeyReference(struct zxmd_xenc_KeyReference_s* x, char* p )
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

/* FUNC(zxmd_ENC_WO_xenc_KeyReference) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_xenc_KeyReference(struct zxmd_xenc_KeyReference_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_xenc_KeyReference) */

struct zx_str_s* zxmd_EASY_ENC_SO_xenc_KeyReference(struct zx_ctx* c, struct zxmd_xenc_KeyReference_s* x )
{
  int len = zxmd_LEN_xenc_KeyReference(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_xenc_KeyReference(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_xenc_KeyReference) */

struct zx_str_s* zxmd_EASY_ENC_WO_xenc_KeyReference(struct zx_ctx* c, struct zxmd_xenc_KeyReference_s* x )
{
  int len = zxmd_LEN_xenc_KeyReference(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_xenc_KeyReference(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_xenc_OriginatorKeyInfo_s
#define EL_NS     xenc
#define EL_TAG    OriginatorKeyInfo

/* FUNC(zxmd_LEN_xenc_OriginatorKeyInfo) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_xenc_OriginatorKeyInfo(struct zxmd_xenc_OriginatorKeyInfo_s* x )
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
    len += zxmd_LEN_simple_elem(se, sizeof("KeyName") - 1);
  {
      struct zxmd_ds_KeyValue_s* e;
      for (e = x->KeyValue; e; e = (struct zxmd_ds_KeyValue_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_KeyValue(e);
  }
  {
      struct zxmd_ds_RetrievalMethod_s* e;
      for (e = x->RetrievalMethod; e; e = (struct zxmd_ds_RetrievalMethod_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_RetrievalMethod(e);
  }
  {
      struct zxmd_ds_X509Data_s* e;
      for (e = x->X509Data; e; e = (struct zxmd_ds_X509Data_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_X509Data(e);
  }
  {
      struct zxmd_ds_PGPData_s* e;
      for (e = x->PGPData; e; e = (struct zxmd_ds_PGPData_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_PGPData(e);
  }
  {
      struct zxmd_ds_SPKIData_s* e;
      for (e = x->SPKIData; e; e = (struct zxmd_ds_SPKIData_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_SPKIData(e);
  }
  for (se = x->MgmtData; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("MgmtData") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_xenc_OriginatorKeyInfo) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_xenc_OriginatorKeyInfo(struct zxmd_xenc_OriginatorKeyInfo_s* x, char* p )
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
    p = zxmd_ENC_SO_simple_elem(se, p, "KeyName", sizeof("KeyName") - 1);
  {
      struct zxmd_ds_KeyValue_s* e;
      for (e = x->KeyValue; e; e = (struct zxmd_ds_KeyValue_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_KeyValue(e, p);
  }
  {
      struct zxmd_ds_RetrievalMethod_s* e;
      for (e = x->RetrievalMethod; e; e = (struct zxmd_ds_RetrievalMethod_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_RetrievalMethod(e, p);
  }
  {
      struct zxmd_ds_X509Data_s* e;
      for (e = x->X509Data; e; e = (struct zxmd_ds_X509Data_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_X509Data(e, p);
  }
  {
      struct zxmd_ds_PGPData_s* e;
      for (e = x->PGPData; e; e = (struct zxmd_ds_PGPData_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_PGPData(e, p);
  }
  {
      struct zxmd_ds_SPKIData_s* e;
      for (e = x->SPKIData; e; e = (struct zxmd_ds_SPKIData_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_SPKIData(e, p);
  }
  for (se = x->MgmtData; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "MgmtData", sizeof("MgmtData") - 1);


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

/* FUNC(zxmd_ENC_WO_xenc_OriginatorKeyInfo) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_xenc_OriginatorKeyInfo(struct zxmd_xenc_OriginatorKeyInfo_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_xenc_OriginatorKeyInfo) */

struct zx_str_s* zxmd_EASY_ENC_SO_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zxmd_xenc_OriginatorKeyInfo_s* x )
{
  int len = zxmd_LEN_xenc_OriginatorKeyInfo(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_xenc_OriginatorKeyInfo(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_xenc_OriginatorKeyInfo) */

struct zx_str_s* zxmd_EASY_ENC_WO_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zxmd_xenc_OriginatorKeyInfo_s* x )
{
  int len = zxmd_LEN_xenc_OriginatorKeyInfo(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_xenc_OriginatorKeyInfo(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_xenc_RecipientKeyInfo_s
#define EL_NS     xenc
#define EL_TAG    RecipientKeyInfo

/* FUNC(zxmd_LEN_xenc_RecipientKeyInfo) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_xenc_RecipientKeyInfo(struct zxmd_xenc_RecipientKeyInfo_s* x )
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
    len += zxmd_LEN_simple_elem(se, sizeof("KeyName") - 1);
  {
      struct zxmd_ds_KeyValue_s* e;
      for (e = x->KeyValue; e; e = (struct zxmd_ds_KeyValue_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_KeyValue(e);
  }
  {
      struct zxmd_ds_RetrievalMethod_s* e;
      for (e = x->RetrievalMethod; e; e = (struct zxmd_ds_RetrievalMethod_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_RetrievalMethod(e);
  }
  {
      struct zxmd_ds_X509Data_s* e;
      for (e = x->X509Data; e; e = (struct zxmd_ds_X509Data_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_X509Data(e);
  }
  {
      struct zxmd_ds_PGPData_s* e;
      for (e = x->PGPData; e; e = (struct zxmd_ds_PGPData_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_PGPData(e);
  }
  {
      struct zxmd_ds_SPKIData_s* e;
      for (e = x->SPKIData; e; e = (struct zxmd_ds_SPKIData_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_SPKIData(e);
  }
  for (se = x->MgmtData; se; se = (struct zx_elem_s*)se->g.n)
    len += zxmd_LEN_simple_elem(se, sizeof("MgmtData") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_xenc_RecipientKeyInfo) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_xenc_RecipientKeyInfo(struct zxmd_xenc_RecipientKeyInfo_s* x, char* p )
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
    p = zxmd_ENC_SO_simple_elem(se, p, "KeyName", sizeof("KeyName") - 1);
  {
      struct zxmd_ds_KeyValue_s* e;
      for (e = x->KeyValue; e; e = (struct zxmd_ds_KeyValue_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_KeyValue(e, p);
  }
  {
      struct zxmd_ds_RetrievalMethod_s* e;
      for (e = x->RetrievalMethod; e; e = (struct zxmd_ds_RetrievalMethod_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_RetrievalMethod(e, p);
  }
  {
      struct zxmd_ds_X509Data_s* e;
      for (e = x->X509Data; e; e = (struct zxmd_ds_X509Data_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_X509Data(e, p);
  }
  {
      struct zxmd_ds_PGPData_s* e;
      for (e = x->PGPData; e; e = (struct zxmd_ds_PGPData_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_PGPData(e, p);
  }
  {
      struct zxmd_ds_SPKIData_s* e;
      for (e = x->SPKIData; e; e = (struct zxmd_ds_SPKIData_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_SPKIData(e, p);
  }
  for (se = x->MgmtData; se; se = (struct zx_elem_s*)se->g.n)
    p = zxmd_ENC_SO_simple_elem(se, p, "MgmtData", sizeof("MgmtData") - 1);


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

/* FUNC(zxmd_ENC_WO_xenc_RecipientKeyInfo) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_xenc_RecipientKeyInfo(struct zxmd_xenc_RecipientKeyInfo_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_xenc_RecipientKeyInfo) */

struct zx_str_s* zxmd_EASY_ENC_SO_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zxmd_xenc_RecipientKeyInfo_s* x )
{
  int len = zxmd_LEN_xenc_RecipientKeyInfo(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_xenc_RecipientKeyInfo(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_xenc_RecipientKeyInfo) */

struct zx_str_s* zxmd_EASY_ENC_WO_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zxmd_xenc_RecipientKeyInfo_s* x )
{
  int len = zxmd_LEN_xenc_RecipientKeyInfo(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_xenc_RecipientKeyInfo(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_xenc_ReferenceList_s
#define EL_NS     xenc
#define EL_TAG    ReferenceList

/* FUNC(zxmd_LEN_xenc_ReferenceList) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_xenc_ReferenceList(struct zxmd_xenc_ReferenceList_s* x )
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
      struct zxmd_xenc_DataReference_s* e;
      for (e = x->DataReference; e; e = (struct zxmd_xenc_DataReference_s*)e->gg.g.n)
	  len += zxmd_LEN_xenc_DataReference(e);
  }
  {
      struct zxmd_xenc_KeyReference_s* e;
      for (e = x->KeyReference; e; e = (struct zxmd_xenc_KeyReference_s*)e->gg.g.n)
	  len += zxmd_LEN_xenc_KeyReference(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_xenc_ReferenceList) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_xenc_ReferenceList(struct zxmd_xenc_ReferenceList_s* x, char* p )
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
      struct zxmd_xenc_DataReference_s* e;
      for (e = x->DataReference; e; e = (struct zxmd_xenc_DataReference_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_xenc_DataReference(e, p);
  }
  {
      struct zxmd_xenc_KeyReference_s* e;
      for (e = x->KeyReference; e; e = (struct zxmd_xenc_KeyReference_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_xenc_KeyReference(e, p);
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

/* FUNC(zxmd_ENC_WO_xenc_ReferenceList) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_xenc_ReferenceList(struct zxmd_xenc_ReferenceList_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_xenc_ReferenceList) */

struct zx_str_s* zxmd_EASY_ENC_SO_xenc_ReferenceList(struct zx_ctx* c, struct zxmd_xenc_ReferenceList_s* x )
{
  int len = zxmd_LEN_xenc_ReferenceList(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_xenc_ReferenceList(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_xenc_ReferenceList) */

struct zx_str_s* zxmd_EASY_ENC_WO_xenc_ReferenceList(struct zx_ctx* c, struct zxmd_xenc_ReferenceList_s* x )
{
  int len = zxmd_LEN_xenc_ReferenceList(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_xenc_ReferenceList(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_xenc_Transforms_s
#define EL_NS     xenc
#define EL_TAG    Transforms

/* FUNC(zxmd_LEN_xenc_Transforms) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_xenc_Transforms(struct zxmd_xenc_Transforms_s* x )
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
      struct zxmd_ds_Transform_s* e;
      for (e = x->Transform; e; e = (struct zxmd_ds_Transform_s*)e->gg.g.n)
	  len += zxmd_LEN_ds_Transform(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_xenc_Transforms) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_xenc_Transforms(struct zxmd_xenc_Transforms_s* x, char* p )
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
      struct zxmd_ds_Transform_s* e;
      for (e = x->Transform; e; e = (struct zxmd_ds_Transform_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_ds_Transform(e, p);
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

/* FUNC(zxmd_ENC_WO_xenc_Transforms) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_xenc_Transforms(struct zxmd_xenc_Transforms_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_xenc_Transforms) */

struct zx_str_s* zxmd_EASY_ENC_SO_xenc_Transforms(struct zx_ctx* c, struct zxmd_xenc_Transforms_s* x )
{
  int len = zxmd_LEN_xenc_Transforms(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_xenc_Transforms(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_xenc_Transforms) */

struct zx_str_s* zxmd_EASY_ENC_WO_xenc_Transforms(struct zx_ctx* c, struct zxmd_xenc_Transforms_s* x )
{
  int len = zxmd_LEN_xenc_Transforms(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_xenc_Transforms(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxmd_root_s
#define EL_NS     
#define EL_TAG    root

/* FUNC(zxmd_LEN_root) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_root(struct zxmd_root_s* x )
{
  struct zx_elem_s* se;

  /* root node has no begin tag */
  int len = 0;

  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_md_EntityDescriptor_s* e;
      for (e = x->EntityDescriptor; e; e = (struct zxmd_md_EntityDescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_md_EntityDescriptor(e);
  }
  {
      struct zxmd_md_EntitiesDescriptor_s* e;
      for (e = x->EntitiesDescriptor; e; e = (struct zxmd_md_EntitiesDescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_md_EntitiesDescriptor(e);
  }
  {
      struct zxmd_m20_EntityDescriptor_s* e;
      for (e = x->m20_EntityDescriptor; e; e = (struct zxmd_m20_EntityDescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_EntityDescriptor(e);
  }
  {
      struct zxmd_m20_EntitiesDescriptor_s* e;
      for (e = x->m20_EntitiesDescriptor; e; e = (struct zxmd_m20_EntitiesDescriptor_s*)e->gg.g.n)
	  len += zxmd_LEN_m20_EntitiesDescriptor(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxmd_ENC_SO_root) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_root(struct zxmd_root_s* x, char* p )
{
  struct zx_elem_s* se;

  /* root node has no begin tag */

  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);


  /* root node has no begin tag */

  
  {
      struct zxmd_md_EntityDescriptor_s* e;
      for (e = x->EntityDescriptor; e; e = (struct zxmd_md_EntityDescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_EntityDescriptor(e, p);
  }
  {
      struct zxmd_md_EntitiesDescriptor_s* e;
      for (e = x->EntitiesDescriptor; e; e = (struct zxmd_md_EntitiesDescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_md_EntitiesDescriptor(e, p);
  }
  {
      struct zxmd_m20_EntityDescriptor_s* e;
      for (e = x->m20_EntityDescriptor; e; e = (struct zxmd_m20_EntityDescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_EntityDescriptor(e, p);
  }
  {
      struct zxmd_m20_EntitiesDescriptor_s* e;
      for (e = x->m20_EntitiesDescriptor; e; e = (struct zxmd_m20_EntitiesDescriptor_s*)e->gg.g.n)
	  p = zxmd_ENC_SO_m20_EntitiesDescriptor(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  

  /* root node has no end tag ither */

  return p;
}

/* FUNC(zxmd_ENC_WO_root) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_root(struct zxmd_root_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_root) */

struct zx_str_s* zxmd_EASY_ENC_SO_root(struct zx_ctx* c, struct zxmd_root_s* x )
{
  int len = zxmd_LEN_root(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_root(x, buf ), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_root) */

struct zx_str_s* zxmd_EASY_ENC_WO_root(struct zx_ctx* c, struct zxmd_root_s* x )
{
  int len = zxmd_LEN_root(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_root(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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

/* FUNC(zxmd_LEN_simple_elem) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxmd_LEN_simple_elem(struct zx_elem_s* x , int simplelen)
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

/* FUNC(zxmd_ENC_SO_simple_elem) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxmd_ENC_SO_simple_elem(struct zx_elem_s* x, char* p , char* simpletag, int simplelen)
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

/* FUNC(zxmd_ENC_WO_simple_elem) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxmd_ENC_WO_simple_elem(struct zx_elem_s* x, char* p , char* simpletag, int simplelen)
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxmd_EASY_ENC_SO_simple_elem) */

struct zx_str_s* zxmd_EASY_ENC_SO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x , char* simpletag, int simplelen)
{
  int len = zxmd_LEN_simple_elem(x , simplelen);
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_SO_simple_elem(x, buf , simpletag, simplelen), buf, len);
}

/* FUNC(zxmd_EASY_ENC_WO_simple_elem) */

struct zx_str_s* zxmd_EASY_ENC_WO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x , char* simpletag, int simplelen)
{
  int len = zxmd_LEN_simple_elem(x , simplelen);
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxmd_ENC_WO_simple_elem(x, buf , simpletag, simplelen), buf, len);
}


