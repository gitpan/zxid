/* c/wsf-enc.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/wsf-const.h"
#include "c/wsf-data.h"



#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   a_Action
#define EL_STRUCT zxwsf_a_Action_s
#define EL_NS     a
#define EL_TAG    Action

/* FUNC(zxwsf_LEN_a_Action) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_a_Action(struct zxwsf_a_Action_s* x )
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




  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_a_Action) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_a_Action(struct zxwsf_a_Action_s* x, char* p )
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

/* FUNC(zxwsf_ENC_WO_a_Action) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_a_Action(struct zxwsf_a_Action_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_a_Action) */

struct zx_str_s* zxwsf_EASY_ENC_SO_a_Action(struct zx_ctx* c, struct zxwsf_a_Action_s* x )
{
  int len = zxwsf_LEN_a_Action(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_a_Action(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_a_Action) */

struct zx_str_s* zxwsf_EASY_ENC_WO_a_Action(struct zx_ctx* c, struct zxwsf_a_Action_s* x )
{
  int len = zxwsf_LEN_a_Action(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_a_Action(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   a_Address
#define EL_STRUCT zxwsf_a_Address_s
#define EL_NS     a
#define EL_TAG    Address

/* FUNC(zxwsf_LEN_a_Address) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_a_Address(struct zxwsf_a_Address_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Address") - 1 + 1 + 2 + sizeof("Address") - 1 + 1;
  
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

/* FUNC(zxwsf_ENC_SO_a_Address) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_a_Address(struct zxwsf_a_Address_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Address", sizeof("Address") - 1);
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
  ZX_OUT_MEM(p, "Address", sizeof("Address") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_a_Address) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_a_Address(struct zxwsf_a_Address_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_a_Address) */

struct zx_str_s* zxwsf_EASY_ENC_SO_a_Address(struct zx_ctx* c, struct zxwsf_a_Address_s* x )
{
  int len = zxwsf_LEN_a_Address(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_a_Address(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_a_Address) */

struct zx_str_s* zxwsf_EASY_ENC_WO_a_Address(struct zx_ctx* c, struct zxwsf_a_Address_s* x )
{
  int len = zxwsf_LEN_a_Address(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_a_Address(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   a_EndpointReference
#define EL_STRUCT zxwsf_a_EndpointReference_s
#define EL_NS     a
#define EL_TAG    EndpointReference

/* FUNC(zxwsf_LEN_a_EndpointReference) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_a_EndpointReference(struct zxwsf_a_EndpointReference_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("EndpointReference") - 1 + 1 + 2 + sizeof("EndpointReference") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_Address(e);
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_ReferenceParameters(e);
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_Metadata(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_a_EndpointReference) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_a_EndpointReference(struct zxwsf_a_EndpointReference_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EndpointReference", sizeof("EndpointReference") - 1);
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
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_Address(e, p);
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_ReferenceParameters(e, p);
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_Metadata(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EndpointReference", sizeof("EndpointReference") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_a_EndpointReference) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_a_EndpointReference(struct zxwsf_a_EndpointReference_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_a_EndpointReference) */

struct zx_str_s* zxwsf_EASY_ENC_SO_a_EndpointReference(struct zx_ctx* c, struct zxwsf_a_EndpointReference_s* x )
{
  int len = zxwsf_LEN_a_EndpointReference(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_a_EndpointReference(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_a_EndpointReference) */

struct zx_str_s* zxwsf_EASY_ENC_WO_a_EndpointReference(struct zx_ctx* c, struct zxwsf_a_EndpointReference_s* x )
{
  int len = zxwsf_LEN_a_EndpointReference(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_a_EndpointReference(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   a_FaultTo
#define EL_STRUCT zxwsf_a_FaultTo_s
#define EL_NS     a
#define EL_TAG    FaultTo

/* FUNC(zxwsf_LEN_a_FaultTo) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_a_FaultTo(struct zxwsf_a_FaultTo_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("FaultTo") - 1 + 1 + 2 + sizeof("FaultTo") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_Address(e);
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_ReferenceParameters(e);
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_Metadata(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_a_FaultTo) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_a_FaultTo(struct zxwsf_a_FaultTo_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "FaultTo", sizeof("FaultTo") - 1);
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
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_Address(e, p);
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_ReferenceParameters(e, p);
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_Metadata(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "FaultTo", sizeof("FaultTo") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_a_FaultTo) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_a_FaultTo(struct zxwsf_a_FaultTo_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_a_FaultTo) */

struct zx_str_s* zxwsf_EASY_ENC_SO_a_FaultTo(struct zx_ctx* c, struct zxwsf_a_FaultTo_s* x )
{
  int len = zxwsf_LEN_a_FaultTo(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_a_FaultTo(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_a_FaultTo) */

struct zx_str_s* zxwsf_EASY_ENC_WO_a_FaultTo(struct zx_ctx* c, struct zxwsf_a_FaultTo_s* x )
{
  int len = zxwsf_LEN_a_FaultTo(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_a_FaultTo(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   a_From
#define EL_STRUCT zxwsf_a_From_s
#define EL_NS     a
#define EL_TAG    From

/* FUNC(zxwsf_LEN_a_From) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_a_From(struct zxwsf_a_From_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("From") - 1 + 1 + 2 + sizeof("From") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_Address(e);
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_ReferenceParameters(e);
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_Metadata(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_a_From) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_a_From(struct zxwsf_a_From_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "From", sizeof("From") - 1);
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
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_Address(e, p);
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_ReferenceParameters(e, p);
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_Metadata(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "From", sizeof("From") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_a_From) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_a_From(struct zxwsf_a_From_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_a_From) */

struct zx_str_s* zxwsf_EASY_ENC_SO_a_From(struct zx_ctx* c, struct zxwsf_a_From_s* x )
{
  int len = zxwsf_LEN_a_From(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_a_From(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_a_From) */

struct zx_str_s* zxwsf_EASY_ENC_WO_a_From(struct zx_ctx* c, struct zxwsf_a_From_s* x )
{
  int len = zxwsf_LEN_a_From(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_a_From(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   a_MessageID
#define EL_STRUCT zxwsf_a_MessageID_s
#define EL_NS     a
#define EL_TAG    MessageID

/* FUNC(zxwsf_LEN_a_MessageID) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_a_MessageID(struct zxwsf_a_MessageID_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("MessageID") - 1 + 1 + 2 + sizeof("MessageID") - 1 + 1;
  
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

/* FUNC(zxwsf_ENC_SO_a_MessageID) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_a_MessageID(struct zxwsf_a_MessageID_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "MessageID", sizeof("MessageID") - 1);
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
  ZX_OUT_MEM(p, "MessageID", sizeof("MessageID") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_a_MessageID) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_a_MessageID(struct zxwsf_a_MessageID_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_a_MessageID) */

struct zx_str_s* zxwsf_EASY_ENC_SO_a_MessageID(struct zx_ctx* c, struct zxwsf_a_MessageID_s* x )
{
  int len = zxwsf_LEN_a_MessageID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_a_MessageID(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_a_MessageID) */

struct zx_str_s* zxwsf_EASY_ENC_WO_a_MessageID(struct zx_ctx* c, struct zxwsf_a_MessageID_s* x )
{
  int len = zxwsf_LEN_a_MessageID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_a_MessageID(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   a_Metadata
#define EL_STRUCT zxwsf_a_Metadata_s
#define EL_NS     a
#define EL_TAG    Metadata

/* FUNC(zxwsf_LEN_a_Metadata) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_a_Metadata(struct zxwsf_a_Metadata_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Metadata") - 1 + 1 + 2 + sizeof("Metadata") - 1 + 1;
  
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

/* FUNC(zxwsf_ENC_SO_a_Metadata) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_a_Metadata(struct zxwsf_a_Metadata_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Metadata", sizeof("Metadata") - 1);
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
  ZX_OUT_MEM(p, "Metadata", sizeof("Metadata") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_a_Metadata) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_a_Metadata(struct zxwsf_a_Metadata_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_a_Metadata) */

struct zx_str_s* zxwsf_EASY_ENC_SO_a_Metadata(struct zx_ctx* c, struct zxwsf_a_Metadata_s* x )
{
  int len = zxwsf_LEN_a_Metadata(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_a_Metadata(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_a_Metadata) */

struct zx_str_s* zxwsf_EASY_ENC_WO_a_Metadata(struct zx_ctx* c, struct zxwsf_a_Metadata_s* x )
{
  int len = zxwsf_LEN_a_Metadata(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_a_Metadata(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   a_ProblemAction
#define EL_STRUCT zxwsf_a_ProblemAction_s
#define EL_NS     a
#define EL_TAG    ProblemAction

/* FUNC(zxwsf_LEN_a_ProblemAction) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_a_ProblemAction(struct zxwsf_a_ProblemAction_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ProblemAction") - 1 + 1 + 2 + sizeof("ProblemAction") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Action_s* e;
      for (e = x->Action; e; e = (struct zxwsf_a_Action_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_Action(e);
  }
  for (se = x->SoapAction; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("SoapAction") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_a_ProblemAction) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_a_ProblemAction(struct zxwsf_a_ProblemAction_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ProblemAction", sizeof("ProblemAction") - 1);
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
      struct zxwsf_a_Action_s* e;
      for (e = x->Action; e; e = (struct zxwsf_a_Action_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_Action(e, p);
  }
  for (se = x->SoapAction; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "SoapAction", sizeof("SoapAction") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ProblemAction", sizeof("ProblemAction") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_a_ProblemAction) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_a_ProblemAction(struct zxwsf_a_ProblemAction_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_a_ProblemAction) */

struct zx_str_s* zxwsf_EASY_ENC_SO_a_ProblemAction(struct zx_ctx* c, struct zxwsf_a_ProblemAction_s* x )
{
  int len = zxwsf_LEN_a_ProblemAction(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_a_ProblemAction(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_a_ProblemAction) */

struct zx_str_s* zxwsf_EASY_ENC_WO_a_ProblemAction(struct zx_ctx* c, struct zxwsf_a_ProblemAction_s* x )
{
  int len = zxwsf_LEN_a_ProblemAction(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_a_ProblemAction(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   a_ProblemHeader
#define EL_STRUCT zxwsf_a_ProblemHeader_s
#define EL_NS     a
#define EL_TAG    ProblemHeader

/* FUNC(zxwsf_LEN_a_ProblemHeader) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_a_ProblemHeader(struct zxwsf_a_ProblemHeader_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ProblemHeader") - 1 + 1 + 2 + sizeof("ProblemHeader") - 1 + 1;
  
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

/* FUNC(zxwsf_ENC_SO_a_ProblemHeader) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_a_ProblemHeader(struct zxwsf_a_ProblemHeader_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ProblemHeader", sizeof("ProblemHeader") - 1);
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
  ZX_OUT_MEM(p, "ProblemHeader", sizeof("ProblemHeader") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_a_ProblemHeader) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_a_ProblemHeader(struct zxwsf_a_ProblemHeader_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_a_ProblemHeader) */

struct zx_str_s* zxwsf_EASY_ENC_SO_a_ProblemHeader(struct zx_ctx* c, struct zxwsf_a_ProblemHeader_s* x )
{
  int len = zxwsf_LEN_a_ProblemHeader(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_a_ProblemHeader(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_a_ProblemHeader) */

struct zx_str_s* zxwsf_EASY_ENC_WO_a_ProblemHeader(struct zx_ctx* c, struct zxwsf_a_ProblemHeader_s* x )
{
  int len = zxwsf_LEN_a_ProblemHeader(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_a_ProblemHeader(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   a_ProblemHeaderQName
#define EL_STRUCT zxwsf_a_ProblemHeaderQName_s
#define EL_NS     a
#define EL_TAG    ProblemHeaderQName

/* FUNC(zxwsf_LEN_a_ProblemHeaderQName) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_a_ProblemHeaderQName(struct zxwsf_a_ProblemHeaderQName_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ProblemHeaderQName") - 1 + 1 + 2 + sizeof("ProblemHeaderQName") - 1 + 1;
  
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

/* FUNC(zxwsf_ENC_SO_a_ProblemHeaderQName) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_a_ProblemHeaderQName(struct zxwsf_a_ProblemHeaderQName_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ProblemHeaderQName", sizeof("ProblemHeaderQName") - 1);
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
  ZX_OUT_MEM(p, "ProblemHeaderQName", sizeof("ProblemHeaderQName") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_a_ProblemHeaderQName) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_a_ProblemHeaderQName(struct zxwsf_a_ProblemHeaderQName_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_a_ProblemHeaderQName) */

struct zx_str_s* zxwsf_EASY_ENC_SO_a_ProblemHeaderQName(struct zx_ctx* c, struct zxwsf_a_ProblemHeaderQName_s* x )
{
  int len = zxwsf_LEN_a_ProblemHeaderQName(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_a_ProblemHeaderQName(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_a_ProblemHeaderQName) */

struct zx_str_s* zxwsf_EASY_ENC_WO_a_ProblemHeaderQName(struct zx_ctx* c, struct zxwsf_a_ProblemHeaderQName_s* x )
{
  int len = zxwsf_LEN_a_ProblemHeaderQName(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_a_ProblemHeaderQName(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   a_ProblemIRI
#define EL_STRUCT zxwsf_a_ProblemIRI_s
#define EL_NS     a
#define EL_TAG    ProblemIRI

/* FUNC(zxwsf_LEN_a_ProblemIRI) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_a_ProblemIRI(struct zxwsf_a_ProblemIRI_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ProblemIRI") - 1 + 1 + 2 + sizeof("ProblemIRI") - 1 + 1;
  
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

/* FUNC(zxwsf_ENC_SO_a_ProblemIRI) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_a_ProblemIRI(struct zxwsf_a_ProblemIRI_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ProblemIRI", sizeof("ProblemIRI") - 1);
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
  ZX_OUT_MEM(p, "ProblemIRI", sizeof("ProblemIRI") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_a_ProblemIRI) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_a_ProblemIRI(struct zxwsf_a_ProblemIRI_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_a_ProblemIRI) */

struct zx_str_s* zxwsf_EASY_ENC_SO_a_ProblemIRI(struct zx_ctx* c, struct zxwsf_a_ProblemIRI_s* x )
{
  int len = zxwsf_LEN_a_ProblemIRI(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_a_ProblemIRI(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_a_ProblemIRI) */

struct zx_str_s* zxwsf_EASY_ENC_WO_a_ProblemIRI(struct zx_ctx* c, struct zxwsf_a_ProblemIRI_s* x )
{
  int len = zxwsf_LEN_a_ProblemIRI(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_a_ProblemIRI(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   a_ReferenceParameters
#define EL_STRUCT zxwsf_a_ReferenceParameters_s
#define EL_NS     a
#define EL_TAG    ReferenceParameters

/* FUNC(zxwsf_LEN_a_ReferenceParameters) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_a_ReferenceParameters(struct zxwsf_a_ReferenceParameters_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ReferenceParameters") - 1 + 1 + 2 + sizeof("ReferenceParameters") - 1 + 1;
  
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

/* FUNC(zxwsf_ENC_SO_a_ReferenceParameters) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_a_ReferenceParameters(struct zxwsf_a_ReferenceParameters_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ReferenceParameters", sizeof("ReferenceParameters") - 1);
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
  ZX_OUT_MEM(p, "ReferenceParameters", sizeof("ReferenceParameters") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_a_ReferenceParameters) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_a_ReferenceParameters(struct zxwsf_a_ReferenceParameters_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_a_ReferenceParameters) */

struct zx_str_s* zxwsf_EASY_ENC_SO_a_ReferenceParameters(struct zx_ctx* c, struct zxwsf_a_ReferenceParameters_s* x )
{
  int len = zxwsf_LEN_a_ReferenceParameters(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_a_ReferenceParameters(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_a_ReferenceParameters) */

struct zx_str_s* zxwsf_EASY_ENC_WO_a_ReferenceParameters(struct zx_ctx* c, struct zxwsf_a_ReferenceParameters_s* x )
{
  int len = zxwsf_LEN_a_ReferenceParameters(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_a_ReferenceParameters(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   a_RelatesTo
#define EL_STRUCT zxwsf_a_RelatesTo_s
#define EL_NS     a
#define EL_TAG    RelatesTo

/* FUNC(zxwsf_LEN_a_RelatesTo) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_a_RelatesTo(struct zxwsf_a_RelatesTo_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("RelatesTo") - 1 + 1 + 2 + sizeof("RelatesTo") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->RelationshipType, sizeof("RelationshipType"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_a_RelatesTo) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_a_RelatesTo(struct zxwsf_a_RelatesTo_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RelatesTo", sizeof("RelatesTo") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->RelationshipType, "RelationshipType", sizeof("RelationshipType")-1);


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
  ZX_OUT_MEM(p, "RelatesTo", sizeof("RelatesTo") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_a_RelatesTo) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_a_RelatesTo(struct zxwsf_a_RelatesTo_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_a_RelatesTo) */

struct zx_str_s* zxwsf_EASY_ENC_SO_a_RelatesTo(struct zx_ctx* c, struct zxwsf_a_RelatesTo_s* x )
{
  int len = zxwsf_LEN_a_RelatesTo(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_a_RelatesTo(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_a_RelatesTo) */

struct zx_str_s* zxwsf_EASY_ENC_WO_a_RelatesTo(struct zx_ctx* c, struct zxwsf_a_RelatesTo_s* x )
{
  int len = zxwsf_LEN_a_RelatesTo(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_a_RelatesTo(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   a_ReplyTo
#define EL_STRUCT zxwsf_a_ReplyTo_s
#define EL_NS     a
#define EL_TAG    ReplyTo

/* FUNC(zxwsf_LEN_a_ReplyTo) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_a_ReplyTo(struct zxwsf_a_ReplyTo_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ReplyTo") - 1 + 1 + 2 + sizeof("ReplyTo") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_Address(e);
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_ReferenceParameters(e);
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_Metadata(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_a_ReplyTo) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_a_ReplyTo(struct zxwsf_a_ReplyTo_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ReplyTo", sizeof("ReplyTo") - 1);
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
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_Address(e, p);
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_ReferenceParameters(e, p);
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_Metadata(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ReplyTo", sizeof("ReplyTo") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_a_ReplyTo) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_a_ReplyTo(struct zxwsf_a_ReplyTo_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_a_ReplyTo) */

struct zx_str_s* zxwsf_EASY_ENC_SO_a_ReplyTo(struct zx_ctx* c, struct zxwsf_a_ReplyTo_s* x )
{
  int len = zxwsf_LEN_a_ReplyTo(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_a_ReplyTo(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_a_ReplyTo) */

struct zx_str_s* zxwsf_EASY_ENC_WO_a_ReplyTo(struct zx_ctx* c, struct zxwsf_a_ReplyTo_s* x )
{
  int len = zxwsf_LEN_a_ReplyTo(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_a_ReplyTo(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   a_RetryAfter
#define EL_STRUCT zxwsf_a_RetryAfter_s
#define EL_NS     a
#define EL_TAG    RetryAfter

/* FUNC(zxwsf_LEN_a_RetryAfter) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_a_RetryAfter(struct zxwsf_a_RetryAfter_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("RetryAfter") - 1 + 1 + 2 + sizeof("RetryAfter") - 1 + 1;
  
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

/* FUNC(zxwsf_ENC_SO_a_RetryAfter) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_a_RetryAfter(struct zxwsf_a_RetryAfter_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RetryAfter", sizeof("RetryAfter") - 1);
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
  ZX_OUT_MEM(p, "RetryAfter", sizeof("RetryAfter") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_a_RetryAfter) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_a_RetryAfter(struct zxwsf_a_RetryAfter_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_a_RetryAfter) */

struct zx_str_s* zxwsf_EASY_ENC_SO_a_RetryAfter(struct zx_ctx* c, struct zxwsf_a_RetryAfter_s* x )
{
  int len = zxwsf_LEN_a_RetryAfter(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_a_RetryAfter(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_a_RetryAfter) */

struct zx_str_s* zxwsf_EASY_ENC_WO_a_RetryAfter(struct zx_ctx* c, struct zxwsf_a_RetryAfter_s* x )
{
  int len = zxwsf_LEN_a_RetryAfter(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_a_RetryAfter(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   a_To
#define EL_STRUCT zxwsf_a_To_s
#define EL_NS     a
#define EL_TAG    To

/* FUNC(zxwsf_LEN_a_To) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_a_To(struct zxwsf_a_To_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("To") - 1 + 1 + 2 + sizeof("To") - 1 + 1;
  
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

/* FUNC(zxwsf_ENC_SO_a_To) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_a_To(struct zxwsf_a_To_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "To", sizeof("To") - 1);
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
  ZX_OUT_MEM(p, "To", sizeof("To") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_a_To) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_a_To(struct zxwsf_a_To_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_a_To) */

struct zx_str_s* zxwsf_EASY_ENC_SO_a_To(struct zx_ctx* c, struct zxwsf_a_To_s* x )
{
  int len = zxwsf_LEN_a_To(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_a_To(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_a_To) */

struct zx_str_s* zxwsf_EASY_ENC_WO_a_To(struct zx_ctx* c, struct zxwsf_a_To_s* x )
{
  int len = zxwsf_LEN_a_To(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_a_To(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   b12_Consent
#define EL_STRUCT zxwsf_b12_Consent_s
#define EL_NS     b12
#define EL_TAG    Consent

/* FUNC(zxwsf_LEN_b12_Consent) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_b12_Consent(struct zxwsf_b12_Consent_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Consent") - 1 + 1 + 2 + sizeof("Consent") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->uri, sizeof("uri"));
  len += zx_attr_len(x->timestamp, sizeof("timestamp"));
  len += zx_attr_len(x->id, sizeof("id"));
  len += zx_attr_len(x->mustUnderstand, sizeof("mustUnderstand"));
  len += zx_attr_len(x->actor, sizeof("actor"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_b12_Consent) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_b12_Consent(struct zxwsf_b12_Consent_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Consent", sizeof("Consent") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->uri, "uri", sizeof("uri")-1);
  p = zx_attr_enc(p, x->timestamp, "timestamp", sizeof("timestamp")-1);
  p = zx_attr_enc(p, x->id, "id", sizeof("id")-1);
  p = zx_attr_enc(p, x->mustUnderstand, "mustUnderstand", sizeof("mustUnderstand")-1);
  p = zx_attr_enc(p, x->actor, "actor", sizeof("actor")-1);


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
  ZX_OUT_MEM(p, "Consent", sizeof("Consent") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_b12_Consent) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_b12_Consent(struct zxwsf_b12_Consent_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_b12_Consent) */

struct zx_str_s* zxwsf_EASY_ENC_SO_b12_Consent(struct zx_ctx* c, struct zxwsf_b12_Consent_s* x )
{
  int len = zxwsf_LEN_b12_Consent(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_b12_Consent(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_b12_Consent) */

struct zx_str_s* zxwsf_EASY_ENC_WO_b12_Consent(struct zx_ctx* c, struct zxwsf_b12_Consent_s* x )
{
  int len = zxwsf_LEN_b12_Consent(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_b12_Consent(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   b12_Correlation
#define EL_STRUCT zxwsf_b12_Correlation_s
#define EL_NS     b12
#define EL_TAG    Correlation

/* FUNC(zxwsf_LEN_b12_Correlation) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_b12_Correlation(struct zxwsf_b12_Correlation_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Correlation") - 1 + 1 + 2 + sizeof("Correlation") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->messageID, sizeof("messageID"));
  len += zx_attr_len(x->refToMessageID, sizeof("refToMessageID"));
  len += zx_attr_len(x->timestamp, sizeof("timestamp"));
  len += zx_attr_len(x->id, sizeof("id"));
  len += zx_attr_len(x->mustUnderstand, sizeof("mustUnderstand"));
  len += zx_attr_len(x->actor, sizeof("actor"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_b12_Correlation) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_b12_Correlation(struct zxwsf_b12_Correlation_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Correlation", sizeof("Correlation") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->messageID, "messageID", sizeof("messageID")-1);
  p = zx_attr_enc(p, x->refToMessageID, "refToMessageID", sizeof("refToMessageID")-1);
  p = zx_attr_enc(p, x->timestamp, "timestamp", sizeof("timestamp")-1);
  p = zx_attr_enc(p, x->id, "id", sizeof("id")-1);
  p = zx_attr_enc(p, x->mustUnderstand, "mustUnderstand", sizeof("mustUnderstand")-1);
  p = zx_attr_enc(p, x->actor, "actor", sizeof("actor")-1);


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
  ZX_OUT_MEM(p, "Correlation", sizeof("Correlation") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_b12_Correlation) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_b12_Correlation(struct zxwsf_b12_Correlation_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_b12_Correlation) */

struct zx_str_s* zxwsf_EASY_ENC_SO_b12_Correlation(struct zx_ctx* c, struct zxwsf_b12_Correlation_s* x )
{
  int len = zxwsf_LEN_b12_Correlation(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_b12_Correlation(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_b12_Correlation) */

struct zx_str_s* zxwsf_EASY_ENC_WO_b12_Correlation(struct zx_ctx* c, struct zxwsf_b12_Correlation_s* x )
{
  int len = zxwsf_LEN_b12_Correlation(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_b12_Correlation(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   b12_ProcessingContext
#define EL_STRUCT zxwsf_b12_ProcessingContext_s
#define EL_NS     b12
#define EL_TAG    ProcessingContext

/* FUNC(zxwsf_LEN_b12_ProcessingContext) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_b12_ProcessingContext(struct zxwsf_b12_ProcessingContext_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ProcessingContext") - 1 + 1 + 2 + sizeof("ProcessingContext") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->id, sizeof("id"));
  len += zx_attr_len(x->mustUnderstand, sizeof("mustUnderstand"));
  len += zx_attr_len(x->actor, sizeof("actor"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_b12_ProcessingContext) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_b12_ProcessingContext(struct zxwsf_b12_ProcessingContext_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ProcessingContext", sizeof("ProcessingContext") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->id, "id", sizeof("id")-1);
  p = zx_attr_enc(p, x->mustUnderstand, "mustUnderstand", sizeof("mustUnderstand")-1);
  p = zx_attr_enc(p, x->actor, "actor", sizeof("actor")-1);


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
  ZX_OUT_MEM(p, "ProcessingContext", sizeof("ProcessingContext") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_b12_ProcessingContext) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_b12_ProcessingContext(struct zxwsf_b12_ProcessingContext_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_b12_ProcessingContext) */

struct zx_str_s* zxwsf_EASY_ENC_SO_b12_ProcessingContext(struct zx_ctx* c, struct zxwsf_b12_ProcessingContext_s* x )
{
  int len = zxwsf_LEN_b12_ProcessingContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_b12_ProcessingContext(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_b12_ProcessingContext) */

struct zx_str_s* zxwsf_EASY_ENC_WO_b12_ProcessingContext(struct zx_ctx* c, struct zxwsf_b12_ProcessingContext_s* x )
{
  int len = zxwsf_LEN_b12_ProcessingContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_b12_ProcessingContext(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   b12_Provider
#define EL_STRUCT zxwsf_b12_Provider_s
#define EL_NS     b12
#define EL_TAG    Provider

/* FUNC(zxwsf_LEN_b12_Provider) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_b12_Provider(struct zxwsf_b12_Provider_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Provider") - 1 + 1 + 2 + sizeof("Provider") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->providerID, sizeof("providerID"));
  len += zx_attr_len(x->affiliationID, sizeof("affiliationID"));
  len += zx_attr_len(x->id, sizeof("id"));
  len += zx_attr_len(x->mustUnderstand, sizeof("mustUnderstand"));
  len += zx_attr_len(x->actor, sizeof("actor"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_b12_Provider) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_b12_Provider(struct zxwsf_b12_Provider_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Provider", sizeof("Provider") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->providerID, "providerID", sizeof("providerID")-1);
  p = zx_attr_enc(p, x->affiliationID, "affiliationID", sizeof("affiliationID")-1);
  p = zx_attr_enc(p, x->id, "id", sizeof("id")-1);
  p = zx_attr_enc(p, x->mustUnderstand, "mustUnderstand", sizeof("mustUnderstand")-1);
  p = zx_attr_enc(p, x->actor, "actor", sizeof("actor")-1);


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
  ZX_OUT_MEM(p, "Provider", sizeof("Provider") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_b12_Provider) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_b12_Provider(struct zxwsf_b12_Provider_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_b12_Provider) */

struct zx_str_s* zxwsf_EASY_ENC_SO_b12_Provider(struct zx_ctx* c, struct zxwsf_b12_Provider_s* x )
{
  int len = zxwsf_LEN_b12_Provider(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_b12_Provider(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_b12_Provider) */

struct zx_str_s* zxwsf_EASY_ENC_WO_b12_Provider(struct zx_ctx* c, struct zxwsf_b12_Provider_s* x )
{
  int len = zxwsf_LEN_b12_Provider(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_b12_Provider(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   b12_UsageDirective
#define EL_STRUCT zxwsf_b12_UsageDirective_s
#define EL_NS     b12
#define EL_TAG    UsageDirective

/* FUNC(zxwsf_LEN_b12_UsageDirective) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_b12_UsageDirective(struct zxwsf_b12_UsageDirective_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("UsageDirective") - 1 + 1 + 2 + sizeof("UsageDirective") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->id, sizeof("id"));
  len += zx_attr_len(x->ref, sizeof("ref"));
  len += zx_attr_len(x->mustUnderstand, sizeof("mustUnderstand"));
  len += zx_attr_len(x->actor, sizeof("actor"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_b12_UsageDirective) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_b12_UsageDirective(struct zxwsf_b12_UsageDirective_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "UsageDirective", sizeof("UsageDirective") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->id, "id", sizeof("id")-1);
  p = zx_attr_enc(p, x->ref, "ref", sizeof("ref")-1);
  p = zx_attr_enc(p, x->mustUnderstand, "mustUnderstand", sizeof("mustUnderstand")-1);
  p = zx_attr_enc(p, x->actor, "actor", sizeof("actor")-1);


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
  ZX_OUT_MEM(p, "UsageDirective", sizeof("UsageDirective") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_b12_UsageDirective) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_b12_UsageDirective(struct zxwsf_b12_UsageDirective_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_b12_UsageDirective) */

struct zx_str_s* zxwsf_EASY_ENC_SO_b12_UsageDirective(struct zx_ctx* c, struct zxwsf_b12_UsageDirective_s* x )
{
  int len = zxwsf_LEN_b12_UsageDirective(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_b12_UsageDirective(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_b12_UsageDirective) */

struct zx_str_s* zxwsf_EASY_ENC_WO_b12_UsageDirective(struct zx_ctx* c, struct zxwsf_b12_UsageDirective_s* x )
{
  int len = zxwsf_LEN_b12_UsageDirective(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_b12_UsageDirective(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   b_ApplicationEPR
#define EL_STRUCT zxwsf_b_ApplicationEPR_s
#define EL_NS     b
#define EL_TAG    ApplicationEPR

/* FUNC(zxwsf_LEN_b_ApplicationEPR) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_b_ApplicationEPR(struct zxwsf_b_ApplicationEPR_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ApplicationEPR") - 1 + 1 + 2 + sizeof("ApplicationEPR") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_Address(e);
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_ReferenceParameters(e);
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_Metadata(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_b_ApplicationEPR) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_b_ApplicationEPR(struct zxwsf_b_ApplicationEPR_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ApplicationEPR", sizeof("ApplicationEPR") - 1);
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
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_Address(e, p);
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_ReferenceParameters(e, p);
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_Metadata(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ApplicationEPR", sizeof("ApplicationEPR") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_b_ApplicationEPR) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_b_ApplicationEPR(struct zxwsf_b_ApplicationEPR_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_b_ApplicationEPR) */

struct zx_str_s* zxwsf_EASY_ENC_SO_b_ApplicationEPR(struct zx_ctx* c, struct zxwsf_b_ApplicationEPR_s* x )
{
  int len = zxwsf_LEN_b_ApplicationEPR(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_b_ApplicationEPR(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_b_ApplicationEPR) */

struct zx_str_s* zxwsf_EASY_ENC_WO_b_ApplicationEPR(struct zx_ctx* c, struct zxwsf_b_ApplicationEPR_s* x )
{
  int len = zxwsf_LEN_b_ApplicationEPR(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_b_ApplicationEPR(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   b_Consent
#define EL_STRUCT zxwsf_b_Consent_s
#define EL_NS     b
#define EL_TAG    Consent

/* FUNC(zxwsf_LEN_b_Consent) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_b_Consent(struct zxwsf_b_Consent_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Consent") - 1 + 1 + 2 + sizeof("Consent") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->uri, sizeof("uri"));
  len += zx_attr_len(x->timestamp, sizeof("timestamp"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_b_Consent) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_b_Consent(struct zxwsf_b_Consent_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Consent", sizeof("Consent") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->uri, "uri", sizeof("uri")-1);
  p = zx_attr_enc(p, x->timestamp, "timestamp", sizeof("timestamp")-1);


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
  ZX_OUT_MEM(p, "Consent", sizeof("Consent") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_b_Consent) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_b_Consent(struct zxwsf_b_Consent_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_b_Consent) */

struct zx_str_s* zxwsf_EASY_ENC_SO_b_Consent(struct zx_ctx* c, struct zxwsf_b_Consent_s* x )
{
  int len = zxwsf_LEN_b_Consent(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_b_Consent(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_b_Consent) */

struct zx_str_s* zxwsf_EASY_ENC_WO_b_Consent(struct zx_ctx* c, struct zxwsf_b_Consent_s* x )
{
  int len = zxwsf_LEN_b_Consent(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_b_Consent(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   b_CredentialsContext
#define EL_STRUCT zxwsf_b_CredentialsContext_s
#define EL_NS     b
#define EL_TAG    CredentialsContext

/* FUNC(zxwsf_LEN_b_CredentialsContext) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_b_CredentialsContext(struct zxwsf_b_CredentialsContext_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("CredentialsContext") - 1 + 1 + 2 + sizeof("CredentialsContext") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->RequestedAuthnContext; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("RequestedAuthnContext") - 1);
  for (se = x->SecurityMechID; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("SecurityMechID") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_b_CredentialsContext) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_b_CredentialsContext(struct zxwsf_b_CredentialsContext_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "CredentialsContext", sizeof("CredentialsContext") - 1);
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
  
  for (se = x->RequestedAuthnContext; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "RequestedAuthnContext", sizeof("RequestedAuthnContext") - 1);
  for (se = x->SecurityMechID; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "SecurityMechID", sizeof("SecurityMechID") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "CredentialsContext", sizeof("CredentialsContext") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_b_CredentialsContext) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_b_CredentialsContext(struct zxwsf_b_CredentialsContext_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_b_CredentialsContext) */

struct zx_str_s* zxwsf_EASY_ENC_SO_b_CredentialsContext(struct zx_ctx* c, struct zxwsf_b_CredentialsContext_s* x )
{
  int len = zxwsf_LEN_b_CredentialsContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_b_CredentialsContext(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_b_CredentialsContext) */

struct zx_str_s* zxwsf_EASY_ENC_WO_b_CredentialsContext(struct zx_ctx* c, struct zxwsf_b_CredentialsContext_s* x )
{
  int len = zxwsf_LEN_b_CredentialsContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_b_CredentialsContext(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   b_EndpointUpdate
#define EL_STRUCT zxwsf_b_EndpointUpdate_s
#define EL_NS     b
#define EL_TAG    EndpointUpdate

/* FUNC(zxwsf_LEN_b_EndpointUpdate) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_b_EndpointUpdate(struct zxwsf_b_EndpointUpdate_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("EndpointUpdate") - 1 + 1 + 2 + sizeof("EndpointUpdate") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->updateType, sizeof("updateType"));

  {
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_Address(e);
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_ReferenceParameters(e);
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_Metadata(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_b_EndpointUpdate) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_b_EndpointUpdate(struct zxwsf_b_EndpointUpdate_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EndpointUpdate", sizeof("EndpointUpdate") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->updateType, "updateType", sizeof("updateType")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_Address(e, p);
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_ReferenceParameters(e, p);
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_Metadata(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EndpointUpdate", sizeof("EndpointUpdate") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_b_EndpointUpdate) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_b_EndpointUpdate(struct zxwsf_b_EndpointUpdate_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_b_EndpointUpdate) */

struct zx_str_s* zxwsf_EASY_ENC_SO_b_EndpointUpdate(struct zx_ctx* c, struct zxwsf_b_EndpointUpdate_s* x )
{
  int len = zxwsf_LEN_b_EndpointUpdate(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_b_EndpointUpdate(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_b_EndpointUpdate) */

struct zx_str_s* zxwsf_EASY_ENC_WO_b_EndpointUpdate(struct zx_ctx* c, struct zxwsf_b_EndpointUpdate_s* x )
{
  int len = zxwsf_LEN_b_EndpointUpdate(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_b_EndpointUpdate(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   b_Framework
#define EL_STRUCT zxwsf_b_Framework_s
#define EL_NS     b
#define EL_TAG    Framework

/* FUNC(zxwsf_LEN_b_Framework) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_b_Framework(struct zxwsf_b_Framework_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Framework") - 1 + 1 + 2 + sizeof("Framework") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->version, sizeof("version"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_b_Framework) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_b_Framework(struct zxwsf_b_Framework_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Framework", sizeof("Framework") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->version, "version", sizeof("version")-1);


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
  ZX_OUT_MEM(p, "Framework", sizeof("Framework") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_b_Framework) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_b_Framework(struct zxwsf_b_Framework_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_b_Framework) */

struct zx_str_s* zxwsf_EASY_ENC_SO_b_Framework(struct zx_ctx* c, struct zxwsf_b_Framework_s* x )
{
  int len = zxwsf_LEN_b_Framework(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_b_Framework(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_b_Framework) */

struct zx_str_s* zxwsf_EASY_ENC_WO_b_Framework(struct zx_ctx* c, struct zxwsf_b_Framework_s* x )
{
  int len = zxwsf_LEN_b_Framework(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_b_Framework(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   b_InteractionService
#define EL_STRUCT zxwsf_b_InteractionService_s
#define EL_NS     b
#define EL_TAG    InteractionService

/* FUNC(zxwsf_LEN_b_InteractionService) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_b_InteractionService(struct zxwsf_b_InteractionService_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("InteractionService") - 1 + 1 + 2 + sizeof("InteractionService") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_Address(e);
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_ReferenceParameters(e);
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_Metadata(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_b_InteractionService) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_b_InteractionService(struct zxwsf_b_InteractionService_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "InteractionService", sizeof("InteractionService") - 1);
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
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_Address(e, p);
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_ReferenceParameters(e, p);
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_Metadata(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "InteractionService", sizeof("InteractionService") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_b_InteractionService) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_b_InteractionService(struct zxwsf_b_InteractionService_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_b_InteractionService) */

struct zx_str_s* zxwsf_EASY_ENC_SO_b_InteractionService(struct zx_ctx* c, struct zxwsf_b_InteractionService_s* x )
{
  int len = zxwsf_LEN_b_InteractionService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_b_InteractionService(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_b_InteractionService) */

struct zx_str_s* zxwsf_EASY_ENC_WO_b_InteractionService(struct zx_ctx* c, struct zxwsf_b_InteractionService_s* x )
{
  int len = zxwsf_LEN_b_InteractionService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_b_InteractionService(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   b_ProcessingContext
#define EL_STRUCT zxwsf_b_ProcessingContext_s
#define EL_NS     b
#define EL_TAG    ProcessingContext

/* FUNC(zxwsf_LEN_b_ProcessingContext) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_b_ProcessingContext(struct zxwsf_b_ProcessingContext_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ProcessingContext") - 1 + 1 + 2 + sizeof("ProcessingContext") - 1 + 1;
  
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

/* FUNC(zxwsf_ENC_SO_b_ProcessingContext) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_b_ProcessingContext(struct zxwsf_b_ProcessingContext_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ProcessingContext", sizeof("ProcessingContext") - 1);
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
  ZX_OUT_MEM(p, "ProcessingContext", sizeof("ProcessingContext") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_b_ProcessingContext) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_b_ProcessingContext(struct zxwsf_b_ProcessingContext_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_b_ProcessingContext) */

struct zx_str_s* zxwsf_EASY_ENC_SO_b_ProcessingContext(struct zx_ctx* c, struct zxwsf_b_ProcessingContext_s* x )
{
  int len = zxwsf_LEN_b_ProcessingContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_b_ProcessingContext(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_b_ProcessingContext) */

struct zx_str_s* zxwsf_EASY_ENC_WO_b_ProcessingContext(struct zx_ctx* c, struct zxwsf_b_ProcessingContext_s* x )
{
  int len = zxwsf_LEN_b_ProcessingContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_b_ProcessingContext(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   b_RedirectRequest
#define EL_STRUCT zxwsf_b_RedirectRequest_s
#define EL_NS     b
#define EL_TAG    RedirectRequest

/* FUNC(zxwsf_LEN_b_RedirectRequest) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_b_RedirectRequest(struct zxwsf_b_RedirectRequest_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("RedirectRequest") - 1 + 1 + 2 + sizeof("RedirectRequest") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->redirectURL, sizeof("redirectURL"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_b_RedirectRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_b_RedirectRequest(struct zxwsf_b_RedirectRequest_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RedirectRequest", sizeof("RedirectRequest") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->redirectURL, "redirectURL", sizeof("redirectURL")-1);


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
  ZX_OUT_MEM(p, "RedirectRequest", sizeof("RedirectRequest") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_b_RedirectRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_b_RedirectRequest(struct zxwsf_b_RedirectRequest_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_b_RedirectRequest) */

struct zx_str_s* zxwsf_EASY_ENC_SO_b_RedirectRequest(struct zx_ctx* c, struct zxwsf_b_RedirectRequest_s* x )
{
  int len = zxwsf_LEN_b_RedirectRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_b_RedirectRequest(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_b_RedirectRequest) */

struct zx_str_s* zxwsf_EASY_ENC_WO_b_RedirectRequest(struct zx_ctx* c, struct zxwsf_b_RedirectRequest_s* x )
{
  int len = zxwsf_LEN_b_RedirectRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_b_RedirectRequest(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   b_Sender
#define EL_STRUCT zxwsf_b_Sender_s
#define EL_NS     b
#define EL_TAG    Sender

/* FUNC(zxwsf_LEN_b_Sender) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_b_Sender(struct zxwsf_b_Sender_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Sender") - 1 + 1 + 2 + sizeof("Sender") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->providerID, sizeof("providerID"));
  len += zx_attr_len(x->affiliationID, sizeof("affiliationID"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_b_Sender) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_b_Sender(struct zxwsf_b_Sender_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Sender", sizeof("Sender") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->providerID, "providerID", sizeof("providerID")-1);
  p = zx_attr_enc(p, x->affiliationID, "affiliationID", sizeof("affiliationID")-1);


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
  ZX_OUT_MEM(p, "Sender", sizeof("Sender") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_b_Sender) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_b_Sender(struct zxwsf_b_Sender_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_b_Sender) */

struct zx_str_s* zxwsf_EASY_ENC_SO_b_Sender(struct zx_ctx* c, struct zxwsf_b_Sender_s* x )
{
  int len = zxwsf_LEN_b_Sender(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_b_Sender(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_b_Sender) */

struct zx_str_s* zxwsf_EASY_ENC_WO_b_Sender(struct zx_ctx* c, struct zxwsf_b_Sender_s* x )
{
  int len = zxwsf_LEN_b_Sender(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_b_Sender(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   b_TargetIdentity
#define EL_STRUCT zxwsf_b_TargetIdentity_s
#define EL_NS     b
#define EL_TAG    TargetIdentity

/* FUNC(zxwsf_LEN_b_TargetIdentity) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_b_TargetIdentity(struct zxwsf_b_TargetIdentity_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("TargetIdentity") - 1 + 1 + 2 + sizeof("TargetIdentity") - 1 + 1;
  
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

/* FUNC(zxwsf_ENC_SO_b_TargetIdentity) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_b_TargetIdentity(struct zxwsf_b_TargetIdentity_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "TargetIdentity", sizeof("TargetIdentity") - 1);
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
  ZX_OUT_MEM(p, "TargetIdentity", sizeof("TargetIdentity") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_b_TargetIdentity) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_b_TargetIdentity(struct zxwsf_b_TargetIdentity_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_b_TargetIdentity) */

struct zx_str_s* zxwsf_EASY_ENC_SO_b_TargetIdentity(struct zx_ctx* c, struct zxwsf_b_TargetIdentity_s* x )
{
  int len = zxwsf_LEN_b_TargetIdentity(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_b_TargetIdentity(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_b_TargetIdentity) */

struct zx_str_s* zxwsf_EASY_ENC_WO_b_TargetIdentity(struct zx_ctx* c, struct zxwsf_b_TargetIdentity_s* x )
{
  int len = zxwsf_LEN_b_TargetIdentity(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_b_TargetIdentity(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   b_UsageDirective
#define EL_STRUCT zxwsf_b_UsageDirective_s
#define EL_NS     b
#define EL_TAG    UsageDirective

/* FUNC(zxwsf_LEN_b_UsageDirective) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_b_UsageDirective(struct zxwsf_b_UsageDirective_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("UsageDirective") - 1 + 1 + 2 + sizeof("UsageDirective") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ref, sizeof("ref"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_b_UsageDirective) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_b_UsageDirective(struct zxwsf_b_UsageDirective_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "UsageDirective", sizeof("UsageDirective") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ref, "ref", sizeof("ref")-1);


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
  ZX_OUT_MEM(p, "UsageDirective", sizeof("UsageDirective") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_b_UsageDirective) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_b_UsageDirective(struct zxwsf_b_UsageDirective_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_b_UsageDirective) */

struct zx_str_s* zxwsf_EASY_ENC_SO_b_UsageDirective(struct zx_ctx* c, struct zxwsf_b_UsageDirective_s* x )
{
  int len = zxwsf_LEN_b_UsageDirective(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_b_UsageDirective(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_b_UsageDirective) */

struct zx_str_s* zxwsf_EASY_ENC_WO_b_UsageDirective(struct zx_ctx* c, struct zxwsf_b_UsageDirective_s* x )
{
  int len = zxwsf_LEN_b_UsageDirective(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_b_UsageDirective(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   b_UserInteraction
#define EL_STRUCT zxwsf_b_UserInteraction_s
#define EL_NS     b
#define EL_TAG    UserInteraction

/* FUNC(zxwsf_LEN_b_UserInteraction) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_b_UserInteraction(struct zxwsf_b_UserInteraction_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("UserInteraction") - 1 + 1 + 2 + sizeof("UserInteraction") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->interact, sizeof("interact"));
  len += zx_attr_len(x->language, sizeof("language"));
  len += zx_attr_len(x->redirect, sizeof("redirect"));
  len += zx_attr_len(x->maxInteractTime, sizeof("maxInteractTime"));

  {
      struct zxwsf_b_InteractionService_s* e;
      for (e = x->InteractionService; e; e = (struct zxwsf_b_InteractionService_s*)e->gg.g.n)
	  len += zxwsf_LEN_b_InteractionService(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_b_UserInteraction) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_b_UserInteraction(struct zxwsf_b_UserInteraction_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "UserInteraction", sizeof("UserInteraction") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->interact, "interact", sizeof("interact")-1);
  p = zx_attr_enc(p, x->language, "language", sizeof("language")-1);
  p = zx_attr_enc(p, x->redirect, "redirect", sizeof("redirect")-1);
  p = zx_attr_enc(p, x->maxInteractTime, "maxInteractTime", sizeof("maxInteractTime")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxwsf_b_InteractionService_s* e;
      for (e = x->InteractionService; e; e = (struct zxwsf_b_InteractionService_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_b_InteractionService(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "UserInteraction", sizeof("UserInteraction") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_b_UserInteraction) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_b_UserInteraction(struct zxwsf_b_UserInteraction_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_b_UserInteraction) */

struct zx_str_s* zxwsf_EASY_ENC_SO_b_UserInteraction(struct zx_ctx* c, struct zxwsf_b_UserInteraction_s* x )
{
  int len = zxwsf_LEN_b_UserInteraction(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_b_UserInteraction(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_b_UserInteraction) */

struct zx_str_s* zxwsf_EASY_ENC_WO_b_UserInteraction(struct zx_ctx* c, struct zxwsf_b_UserInteraction_s* x )
{
  int len = zxwsf_LEN_b_UserInteraction(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_b_UserInteraction(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di12_AuthenticateRequester
#define EL_STRUCT zxwsf_di12_AuthenticateRequester_s
#define EL_NS     di12
#define EL_TAG    AuthenticateRequester

/* FUNC(zxwsf_LEN_di12_AuthenticateRequester) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di12_AuthenticateRequester(struct zxwsf_di12_AuthenticateRequester_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthenticateRequester") - 1 + 1 + 2 + sizeof("AuthenticateRequester") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->descriptionIDRefs, sizeof("descriptionIDRefs"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di12_AuthenticateRequester) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di12_AuthenticateRequester(struct zxwsf_di12_AuthenticateRequester_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthenticateRequester", sizeof("AuthenticateRequester") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->descriptionIDRefs, "descriptionIDRefs", sizeof("descriptionIDRefs")-1);


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
  ZX_OUT_MEM(p, "AuthenticateRequester", sizeof("AuthenticateRequester") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di12_AuthenticateRequester) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di12_AuthenticateRequester(struct zxwsf_di12_AuthenticateRequester_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di12_AuthenticateRequester) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di12_AuthenticateRequester(struct zx_ctx* c, struct zxwsf_di12_AuthenticateRequester_s* x )
{
  int len = zxwsf_LEN_di12_AuthenticateRequester(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di12_AuthenticateRequester(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di12_AuthenticateRequester) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di12_AuthenticateRequester(struct zx_ctx* c, struct zxwsf_di12_AuthenticateRequester_s* x )
{
  int len = zxwsf_LEN_di12_AuthenticateRequester(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di12_AuthenticateRequester(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di12_AuthenticateSessionContext
#define EL_STRUCT zxwsf_di12_AuthenticateSessionContext_s
#define EL_NS     di12
#define EL_TAG    AuthenticateSessionContext

/* FUNC(zxwsf_LEN_di12_AuthenticateSessionContext) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di12_AuthenticateSessionContext(struct zxwsf_di12_AuthenticateSessionContext_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthenticateSessionContext") - 1 + 1 + 2 + sizeof("AuthenticateSessionContext") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->descriptionIDRefs, sizeof("descriptionIDRefs"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di12_AuthenticateSessionContext) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di12_AuthenticateSessionContext(struct zxwsf_di12_AuthenticateSessionContext_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthenticateSessionContext", sizeof("AuthenticateSessionContext") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->descriptionIDRefs, "descriptionIDRefs", sizeof("descriptionIDRefs")-1);


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
  ZX_OUT_MEM(p, "AuthenticateSessionContext", sizeof("AuthenticateSessionContext") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di12_AuthenticateSessionContext) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di12_AuthenticateSessionContext(struct zxwsf_di12_AuthenticateSessionContext_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di12_AuthenticateSessionContext) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zxwsf_di12_AuthenticateSessionContext_s* x )
{
  int len = zxwsf_LEN_di12_AuthenticateSessionContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di12_AuthenticateSessionContext(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di12_AuthenticateSessionContext) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zxwsf_di12_AuthenticateSessionContext_s* x )
{
  int len = zxwsf_LEN_di12_AuthenticateSessionContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di12_AuthenticateSessionContext(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di12_AuthorizeRequester
#define EL_STRUCT zxwsf_di12_AuthorizeRequester_s
#define EL_NS     di12
#define EL_TAG    AuthorizeRequester

/* FUNC(zxwsf_LEN_di12_AuthorizeRequester) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di12_AuthorizeRequester(struct zxwsf_di12_AuthorizeRequester_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthorizeRequester") - 1 + 1 + 2 + sizeof("AuthorizeRequester") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->descriptionIDRefs, sizeof("descriptionIDRefs"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di12_AuthorizeRequester) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di12_AuthorizeRequester(struct zxwsf_di12_AuthorizeRequester_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthorizeRequester", sizeof("AuthorizeRequester") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->descriptionIDRefs, "descriptionIDRefs", sizeof("descriptionIDRefs")-1);


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
  ZX_OUT_MEM(p, "AuthorizeRequester", sizeof("AuthorizeRequester") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di12_AuthorizeRequester) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di12_AuthorizeRequester(struct zxwsf_di12_AuthorizeRequester_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di12_AuthorizeRequester) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di12_AuthorizeRequester(struct zx_ctx* c, struct zxwsf_di12_AuthorizeRequester_s* x )
{
  int len = zxwsf_LEN_di12_AuthorizeRequester(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di12_AuthorizeRequester(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di12_AuthorizeRequester) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di12_AuthorizeRequester(struct zx_ctx* c, struct zxwsf_di12_AuthorizeRequester_s* x )
{
  int len = zxwsf_LEN_di12_AuthorizeRequester(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di12_AuthorizeRequester(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di12_Credentials
#define EL_STRUCT zxwsf_di12_Credentials_s
#define EL_NS     di12
#define EL_TAG    Credentials

/* FUNC(zxwsf_LEN_di12_Credentials) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di12_Credentials(struct zxwsf_di12_Credentials_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Credentials") - 1 + 1 + 2 + sizeof("Credentials") - 1 + 1;
  
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

/* FUNC(zxwsf_ENC_SO_di12_Credentials) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di12_Credentials(struct zxwsf_di12_Credentials_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Credentials", sizeof("Credentials") - 1);
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
  ZX_OUT_MEM(p, "Credentials", sizeof("Credentials") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di12_Credentials) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di12_Credentials(struct zxwsf_di12_Credentials_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di12_Credentials) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di12_Credentials(struct zx_ctx* c, struct zxwsf_di12_Credentials_s* x )
{
  int len = zxwsf_LEN_di12_Credentials(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di12_Credentials(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di12_Credentials) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di12_Credentials(struct zx_ctx* c, struct zxwsf_di12_Credentials_s* x )
{
  int len = zxwsf_LEN_di12_Credentials(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di12_Credentials(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di12_Description
#define EL_STRUCT zxwsf_di12_Description_s
#define EL_NS     di12
#define EL_TAG    Description

/* FUNC(zxwsf_LEN_di12_Description) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di12_Description(struct zxwsf_di12_Description_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Description") - 1 + 1 + 2 + sizeof("Description") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->id, sizeof("id"));

  for (se = x->SecurityMechID; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("SecurityMechID") - 1);
  for (se = x->CredentialRef; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("CredentialRef") - 1);
  for (se = x->WsdlURI; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("WsdlURI") - 1);
  for (se = x->ServiceNameRef; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("ServiceNameRef") - 1);
  for (se = x->Endpoint; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Endpoint") - 1);
  for (se = x->SoapAction; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("SoapAction") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di12_Description) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di12_Description(struct zxwsf_di12_Description_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Description", sizeof("Description") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->id, "id", sizeof("id")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->SecurityMechID; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "SecurityMechID", sizeof("SecurityMechID") - 1);
  for (se = x->CredentialRef; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "CredentialRef", sizeof("CredentialRef") - 1);
  for (se = x->WsdlURI; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "WsdlURI", sizeof("WsdlURI") - 1);
  for (se = x->ServiceNameRef; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "ServiceNameRef", sizeof("ServiceNameRef") - 1);
  for (se = x->Endpoint; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Endpoint", sizeof("Endpoint") - 1);
  for (se = x->SoapAction; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "SoapAction", sizeof("SoapAction") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Description", sizeof("Description") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di12_Description) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di12_Description(struct zxwsf_di12_Description_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di12_Description) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di12_Description(struct zx_ctx* c, struct zxwsf_di12_Description_s* x )
{
  int len = zxwsf_LEN_di12_Description(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di12_Description(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di12_Description) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di12_Description(struct zx_ctx* c, struct zxwsf_di12_Description_s* x )
{
  int len = zxwsf_LEN_di12_Description(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di12_Description(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di12_EncryptResourceID
#define EL_STRUCT zxwsf_di12_EncryptResourceID_s
#define EL_NS     di12
#define EL_TAG    EncryptResourceID

/* FUNC(zxwsf_LEN_di12_EncryptResourceID) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di12_EncryptResourceID(struct zxwsf_di12_EncryptResourceID_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("EncryptResourceID") - 1 + 1 + 2 + sizeof("EncryptResourceID") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->descriptionIDRefs, sizeof("descriptionIDRefs"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di12_EncryptResourceID) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di12_EncryptResourceID(struct zxwsf_di12_EncryptResourceID_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EncryptResourceID", sizeof("EncryptResourceID") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->descriptionIDRefs, "descriptionIDRefs", sizeof("descriptionIDRefs")-1);


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
  ZX_OUT_MEM(p, "EncryptResourceID", sizeof("EncryptResourceID") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di12_EncryptResourceID) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di12_EncryptResourceID(struct zxwsf_di12_EncryptResourceID_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di12_EncryptResourceID) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di12_EncryptResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptResourceID_s* x )
{
  int len = zxwsf_LEN_di12_EncryptResourceID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di12_EncryptResourceID(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di12_EncryptResourceID) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di12_EncryptResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptResourceID_s* x )
{
  int len = zxwsf_LEN_di12_EncryptResourceID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di12_EncryptResourceID(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di12_EncryptedResourceID
#define EL_STRUCT zxwsf_di12_EncryptedResourceID_s
#define EL_NS     di12
#define EL_TAG    EncryptedResourceID

/* FUNC(zxwsf_LEN_di12_EncryptedResourceID) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di12_EncryptedResourceID(struct zxwsf_di12_EncryptedResourceID_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("EncryptedResourceID") - 1 + 1 + 2 + sizeof("EncryptedResourceID") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->EncryptedData; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("EncryptedData") - 1);
  for (se = x->EncryptedKey; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("EncryptedKey") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di12_EncryptedResourceID) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di12_EncryptedResourceID(struct zxwsf_di12_EncryptedResourceID_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EncryptedResourceID", sizeof("EncryptedResourceID") - 1);
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
  
  for (se = x->EncryptedData; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "EncryptedData", sizeof("EncryptedData") - 1);
  for (se = x->EncryptedKey; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "EncryptedKey", sizeof("EncryptedKey") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EncryptedResourceID", sizeof("EncryptedResourceID") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di12_EncryptedResourceID) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di12_EncryptedResourceID(struct zxwsf_di12_EncryptedResourceID_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di12_EncryptedResourceID) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptedResourceID_s* x )
{
  int len = zxwsf_LEN_di12_EncryptedResourceID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di12_EncryptedResourceID(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di12_EncryptedResourceID) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptedResourceID_s* x )
{
  int len = zxwsf_LEN_di12_EncryptedResourceID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di12_EncryptedResourceID(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di12_Extension
#define EL_STRUCT zxwsf_di12_Extension_s
#define EL_NS     di12
#define EL_TAG    Extension

/* FUNC(zxwsf_LEN_di12_Extension) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di12_Extension(struct zxwsf_di12_Extension_s* x )
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

/* FUNC(zxwsf_ENC_SO_di12_Extension) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di12_Extension(struct zxwsf_di12_Extension_s* x, char* p )
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

/* FUNC(zxwsf_ENC_WO_di12_Extension) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di12_Extension(struct zxwsf_di12_Extension_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di12_Extension) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di12_Extension(struct zx_ctx* c, struct zxwsf_di12_Extension_s* x )
{
  int len = zxwsf_LEN_di12_Extension(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di12_Extension(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di12_Extension) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di12_Extension(struct zx_ctx* c, struct zxwsf_di12_Extension_s* x )
{
  int len = zxwsf_LEN_di12_Extension(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di12_Extension(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di12_InsertEntry
#define EL_STRUCT zxwsf_di12_InsertEntry_s
#define EL_NS     di12
#define EL_TAG    InsertEntry

/* FUNC(zxwsf_LEN_di12_InsertEntry) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di12_InsertEntry(struct zxwsf_di12_InsertEntry_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("InsertEntry") - 1 + 1 + 2 + sizeof("InsertEntry") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_di12_ResourceOffering_s* e;
      for (e = x->ResourceOffering; e; e = (struct zxwsf_di12_ResourceOffering_s*)e->gg.g.n)
	  len += zxwsf_LEN_di12_ResourceOffering(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di12_InsertEntry) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di12_InsertEntry(struct zxwsf_di12_InsertEntry_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "InsertEntry", sizeof("InsertEntry") - 1);
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
      struct zxwsf_di12_ResourceOffering_s* e;
      for (e = x->ResourceOffering; e; e = (struct zxwsf_di12_ResourceOffering_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di12_ResourceOffering(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "InsertEntry", sizeof("InsertEntry") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di12_InsertEntry) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di12_InsertEntry(struct zxwsf_di12_InsertEntry_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di12_InsertEntry) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di12_InsertEntry(struct zx_ctx* c, struct zxwsf_di12_InsertEntry_s* x )
{
  int len = zxwsf_LEN_di12_InsertEntry(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di12_InsertEntry(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di12_InsertEntry) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di12_InsertEntry(struct zx_ctx* c, struct zxwsf_di12_InsertEntry_s* x )
{
  int len = zxwsf_LEN_di12_InsertEntry(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di12_InsertEntry(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di12_Modify
#define EL_STRUCT zxwsf_di12_Modify_s
#define EL_NS     di12
#define EL_TAG    Modify

/* FUNC(zxwsf_LEN_di12_Modify) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di12_Modify(struct zxwsf_di12_Modify_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Modify") - 1 + 1 + 2 + sizeof("Modify") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->id, sizeof("id"));

  {
      struct zxwsf_di12_InsertEntry_s* e;
      for (e = x->InsertEntry; e; e = (struct zxwsf_di12_InsertEntry_s*)e->gg.g.n)
	  len += zxwsf_LEN_di12_InsertEntry(e);
  }
  {
      struct zxwsf_di12_RemoveEntry_s* e;
      for (e = x->RemoveEntry; e; e = (struct zxwsf_di12_RemoveEntry_s*)e->gg.g.n)
	  len += zxwsf_LEN_di12_RemoveEntry(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di12_Modify) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di12_Modify(struct zxwsf_di12_Modify_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Modify", sizeof("Modify") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->id, "id", sizeof("id")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxwsf_di12_InsertEntry_s* e;
      for (e = x->InsertEntry; e; e = (struct zxwsf_di12_InsertEntry_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di12_InsertEntry(e, p);
  }
  {
      struct zxwsf_di12_RemoveEntry_s* e;
      for (e = x->RemoveEntry; e; e = (struct zxwsf_di12_RemoveEntry_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di12_RemoveEntry(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Modify", sizeof("Modify") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di12_Modify) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di12_Modify(struct zxwsf_di12_Modify_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di12_Modify) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di12_Modify(struct zx_ctx* c, struct zxwsf_di12_Modify_s* x )
{
  int len = zxwsf_LEN_di12_Modify(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di12_Modify(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di12_Modify) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di12_Modify(struct zx_ctx* c, struct zxwsf_di12_Modify_s* x )
{
  int len = zxwsf_LEN_di12_Modify(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di12_Modify(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di12_ModifyResponse
#define EL_STRUCT zxwsf_di12_ModifyResponse_s
#define EL_NS     di12
#define EL_TAG    ModifyResponse

/* FUNC(zxwsf_LEN_di12_ModifyResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di12_ModifyResponse(struct zxwsf_di12_ModifyResponse_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ModifyResponse") - 1 + 1 + 2 + sizeof("ModifyResponse") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->id, sizeof("id"));
  len += zx_attr_len(x->newEntryIDs, sizeof("newEntryIDs"));

  {
      struct zxwsf_di12_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_di12_Status_s*)e->gg.g.n)
	  len += zxwsf_LEN_di12_Status(e);
  }
  {
      struct zxwsf_di12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxwsf_di12_Extension_s*)e->gg.g.n)
	  len += zxwsf_LEN_di12_Extension(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di12_ModifyResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di12_ModifyResponse(struct zxwsf_di12_ModifyResponse_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ModifyResponse", sizeof("ModifyResponse") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->id, "id", sizeof("id")-1);
  p = zx_attr_enc(p, x->newEntryIDs, "newEntryIDs", sizeof("newEntryIDs")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxwsf_di12_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_di12_Status_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di12_Status(e, p);
  }
  {
      struct zxwsf_di12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxwsf_di12_Extension_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di12_Extension(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ModifyResponse", sizeof("ModifyResponse") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di12_ModifyResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di12_ModifyResponse(struct zxwsf_di12_ModifyResponse_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di12_ModifyResponse) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di12_ModifyResponse(struct zx_ctx* c, struct zxwsf_di12_ModifyResponse_s* x )
{
  int len = zxwsf_LEN_di12_ModifyResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di12_ModifyResponse(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di12_ModifyResponse) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di12_ModifyResponse(struct zx_ctx* c, struct zxwsf_di12_ModifyResponse_s* x )
{
  int len = zxwsf_LEN_di12_ModifyResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di12_ModifyResponse(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di12_Options
#define EL_STRUCT zxwsf_di12_Options_s
#define EL_NS     di12
#define EL_TAG    Options

/* FUNC(zxwsf_LEN_di12_Options) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di12_Options(struct zxwsf_di12_Options_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Options") - 1 + 1 + 2 + sizeof("Options") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->Option; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Option") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di12_Options) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di12_Options(struct zxwsf_di12_Options_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Options", sizeof("Options") - 1);
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
  
  for (se = x->Option; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Option", sizeof("Option") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Options", sizeof("Options") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di12_Options) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di12_Options(struct zxwsf_di12_Options_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di12_Options) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di12_Options(struct zx_ctx* c, struct zxwsf_di12_Options_s* x )
{
  int len = zxwsf_LEN_di12_Options(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di12_Options(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di12_Options) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di12_Options(struct zx_ctx* c, struct zxwsf_di12_Options_s* x )
{
  int len = zxwsf_LEN_di12_Options(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di12_Options(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di12_Query
#define EL_STRUCT zxwsf_di12_Query_s
#define EL_NS     di12
#define EL_TAG    Query

/* FUNC(zxwsf_LEN_di12_Query) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di12_Query(struct zxwsf_di12_Query_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Query") - 1 + 1 + 2 + sizeof("Query") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->id, sizeof("id"));

  {
      struct zxwsf_di12_RequestedServiceType_s* e;
      for (e = x->RequestedServiceType; e; e = (struct zxwsf_di12_RequestedServiceType_s*)e->gg.g.n)
	  len += zxwsf_LEN_di12_RequestedServiceType(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di12_Query) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di12_Query(struct zxwsf_di12_Query_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Query", sizeof("Query") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->id, "id", sizeof("id")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxwsf_di12_RequestedServiceType_s* e;
      for (e = x->RequestedServiceType; e; e = (struct zxwsf_di12_RequestedServiceType_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di12_RequestedServiceType(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Query", sizeof("Query") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di12_Query) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di12_Query(struct zxwsf_di12_Query_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di12_Query) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di12_Query(struct zx_ctx* c, struct zxwsf_di12_Query_s* x )
{
  int len = zxwsf_LEN_di12_Query(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di12_Query(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di12_Query) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di12_Query(struct zx_ctx* c, struct zxwsf_di12_Query_s* x )
{
  int len = zxwsf_LEN_di12_Query(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di12_Query(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di12_QueryResponse
#define EL_STRUCT zxwsf_di12_QueryResponse_s
#define EL_NS     di12
#define EL_TAG    QueryResponse

/* FUNC(zxwsf_LEN_di12_QueryResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di12_QueryResponse(struct zxwsf_di12_QueryResponse_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("QueryResponse") - 1 + 1 + 2 + sizeof("QueryResponse") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->id, sizeof("id"));

  {
      struct zxwsf_di12_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_di12_Status_s*)e->gg.g.n)
	  len += zxwsf_LEN_di12_Status(e);
  }
  {
      struct zxwsf_di12_ResourceOffering_s* e;
      for (e = x->ResourceOffering; e; e = (struct zxwsf_di12_ResourceOffering_s*)e->gg.g.n)
	  len += zxwsf_LEN_di12_ResourceOffering(e);
  }
  {
      struct zxwsf_di12_Credentials_s* e;
      for (e = x->Credentials; e; e = (struct zxwsf_di12_Credentials_s*)e->gg.g.n)
	  len += zxwsf_LEN_di12_Credentials(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di12_QueryResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di12_QueryResponse(struct zxwsf_di12_QueryResponse_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "QueryResponse", sizeof("QueryResponse") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->id, "id", sizeof("id")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxwsf_di12_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_di12_Status_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di12_Status(e, p);
  }
  {
      struct zxwsf_di12_ResourceOffering_s* e;
      for (e = x->ResourceOffering; e; e = (struct zxwsf_di12_ResourceOffering_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di12_ResourceOffering(e, p);
  }
  {
      struct zxwsf_di12_Credentials_s* e;
      for (e = x->Credentials; e; e = (struct zxwsf_di12_Credentials_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di12_Credentials(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "QueryResponse", sizeof("QueryResponse") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di12_QueryResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di12_QueryResponse(struct zxwsf_di12_QueryResponse_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di12_QueryResponse) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di12_QueryResponse(struct zx_ctx* c, struct zxwsf_di12_QueryResponse_s* x )
{
  int len = zxwsf_LEN_di12_QueryResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di12_QueryResponse(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di12_QueryResponse) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di12_QueryResponse(struct zx_ctx* c, struct zxwsf_di12_QueryResponse_s* x )
{
  int len = zxwsf_LEN_di12_QueryResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di12_QueryResponse(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di12_RemoveEntry
#define EL_STRUCT zxwsf_di12_RemoveEntry_s
#define EL_NS     di12
#define EL_TAG    RemoveEntry

/* FUNC(zxwsf_LEN_di12_RemoveEntry) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di12_RemoveEntry(struct zxwsf_di12_RemoveEntry_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("RemoveEntry") - 1 + 1 + 2 + sizeof("RemoveEntry") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->entryID, sizeof("entryID"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di12_RemoveEntry) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di12_RemoveEntry(struct zxwsf_di12_RemoveEntry_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RemoveEntry", sizeof("RemoveEntry") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->entryID, "entryID", sizeof("entryID")-1);


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
  ZX_OUT_MEM(p, "RemoveEntry", sizeof("RemoveEntry") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di12_RemoveEntry) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di12_RemoveEntry(struct zxwsf_di12_RemoveEntry_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di12_RemoveEntry) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di12_RemoveEntry(struct zx_ctx* c, struct zxwsf_di12_RemoveEntry_s* x )
{
  int len = zxwsf_LEN_di12_RemoveEntry(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di12_RemoveEntry(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di12_RemoveEntry) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di12_RemoveEntry(struct zx_ctx* c, struct zxwsf_di12_RemoveEntry_s* x )
{
  int len = zxwsf_LEN_di12_RemoveEntry(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di12_RemoveEntry(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di12_RequestedServiceType
#define EL_STRUCT zxwsf_di12_RequestedServiceType_s
#define EL_NS     di12
#define EL_TAG    RequestedServiceType

/* FUNC(zxwsf_LEN_di12_RequestedServiceType) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di12_RequestedServiceType(struct zxwsf_di12_RequestedServiceType_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("RequestedServiceType") - 1 + 1 + 2 + sizeof("RequestedServiceType") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->ServiceType; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("ServiceType") - 1);
  {
      struct zxwsf_di12_Options_s* e;
      for (e = x->Options; e; e = (struct zxwsf_di12_Options_s*)e->gg.g.n)
	  len += zxwsf_LEN_di12_Options(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di12_RequestedServiceType) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di12_RequestedServiceType(struct zxwsf_di12_RequestedServiceType_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RequestedServiceType", sizeof("RequestedServiceType") - 1);
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
  
  for (se = x->ServiceType; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "ServiceType", sizeof("ServiceType") - 1);
  {
      struct zxwsf_di12_Options_s* e;
      for (e = x->Options; e; e = (struct zxwsf_di12_Options_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di12_Options(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RequestedServiceType", sizeof("RequestedServiceType") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di12_RequestedServiceType) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di12_RequestedServiceType(struct zxwsf_di12_RequestedServiceType_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di12_RequestedServiceType) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di12_RequestedServiceType(struct zx_ctx* c, struct zxwsf_di12_RequestedServiceType_s* x )
{
  int len = zxwsf_LEN_di12_RequestedServiceType(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di12_RequestedServiceType(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di12_RequestedServiceType) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di12_RequestedServiceType(struct zx_ctx* c, struct zxwsf_di12_RequestedServiceType_s* x )
{
  int len = zxwsf_LEN_di12_RequestedServiceType(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di12_RequestedServiceType(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di12_ResourceID
#define EL_STRUCT zxwsf_di12_ResourceID_s
#define EL_NS     di12
#define EL_TAG    ResourceID

/* FUNC(zxwsf_LEN_di12_ResourceID) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di12_ResourceID(struct zxwsf_di12_ResourceID_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ResourceID") - 1 + 1 + 2 + sizeof("ResourceID") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->id, sizeof("id"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di12_ResourceID) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di12_ResourceID(struct zxwsf_di12_ResourceID_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ResourceID", sizeof("ResourceID") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->id, "id", sizeof("id")-1);


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
  ZX_OUT_MEM(p, "ResourceID", sizeof("ResourceID") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di12_ResourceID) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di12_ResourceID(struct zxwsf_di12_ResourceID_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di12_ResourceID) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di12_ResourceID(struct zx_ctx* c, struct zxwsf_di12_ResourceID_s* x )
{
  int len = zxwsf_LEN_di12_ResourceID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di12_ResourceID(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di12_ResourceID) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di12_ResourceID(struct zx_ctx* c, struct zxwsf_di12_ResourceID_s* x )
{
  int len = zxwsf_LEN_di12_ResourceID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di12_ResourceID(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di12_ResourceOffering
#define EL_STRUCT zxwsf_di12_ResourceOffering_s
#define EL_NS     di12
#define EL_TAG    ResourceOffering

/* FUNC(zxwsf_LEN_di12_ResourceOffering) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di12_ResourceOffering(struct zxwsf_di12_ResourceOffering_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ResourceOffering") - 1 + 1 + 2 + sizeof("ResourceOffering") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->entryID, sizeof("entryID"));

  {
      struct zxwsf_di12_ServiceInstance_s* e;
      for (e = x->ServiceInstance; e; e = (struct zxwsf_di12_ServiceInstance_s*)e->gg.g.n)
	  len += zxwsf_LEN_di12_ServiceInstance(e);
  }
  {
      struct zxwsf_di12_Options_s* e;
      for (e = x->Options; e; e = (struct zxwsf_di12_Options_s*)e->gg.g.n)
	  len += zxwsf_LEN_di12_Options(e);
  }
  for (se = x->Abstract; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Abstract") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di12_ResourceOffering) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di12_ResourceOffering(struct zxwsf_di12_ResourceOffering_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ResourceOffering", sizeof("ResourceOffering") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->entryID, "entryID", sizeof("entryID")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxwsf_di12_ServiceInstance_s* e;
      for (e = x->ServiceInstance; e; e = (struct zxwsf_di12_ServiceInstance_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di12_ServiceInstance(e, p);
  }
  {
      struct zxwsf_di12_Options_s* e;
      for (e = x->Options; e; e = (struct zxwsf_di12_Options_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di12_Options(e, p);
  }
  for (se = x->Abstract; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Abstract", sizeof("Abstract") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ResourceOffering", sizeof("ResourceOffering") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di12_ResourceOffering) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di12_ResourceOffering(struct zxwsf_di12_ResourceOffering_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di12_ResourceOffering) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di12_ResourceOffering(struct zx_ctx* c, struct zxwsf_di12_ResourceOffering_s* x )
{
  int len = zxwsf_LEN_di12_ResourceOffering(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di12_ResourceOffering(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di12_ResourceOffering) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di12_ResourceOffering(struct zx_ctx* c, struct zxwsf_di12_ResourceOffering_s* x )
{
  int len = zxwsf_LEN_di12_ResourceOffering(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di12_ResourceOffering(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di12_ServiceInstance
#define EL_STRUCT zxwsf_di12_ServiceInstance_s
#define EL_NS     di12
#define EL_TAG    ServiceInstance

/* FUNC(zxwsf_LEN_di12_ServiceInstance) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di12_ServiceInstance(struct zxwsf_di12_ServiceInstance_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ServiceInstance") - 1 + 1 + 2 + sizeof("ServiceInstance") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->ServiceType; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("ServiceType") - 1);
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("ProviderID") - 1);
  {
      struct zxwsf_di12_Description_s* e;
      for (e = x->Description; e; e = (struct zxwsf_di12_Description_s*)e->gg.g.n)
	  len += zxwsf_LEN_di12_Description(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di12_ServiceInstance) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di12_ServiceInstance(struct zxwsf_di12_ServiceInstance_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ServiceInstance", sizeof("ServiceInstance") - 1);
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
  
  for (se = x->ServiceType; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "ServiceType", sizeof("ServiceType") - 1);
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "ProviderID", sizeof("ProviderID") - 1);
  {
      struct zxwsf_di12_Description_s* e;
      for (e = x->Description; e; e = (struct zxwsf_di12_Description_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di12_Description(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ServiceInstance", sizeof("ServiceInstance") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di12_ServiceInstance) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di12_ServiceInstance(struct zxwsf_di12_ServiceInstance_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di12_ServiceInstance) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di12_ServiceInstance(struct zx_ctx* c, struct zxwsf_di12_ServiceInstance_s* x )
{
  int len = zxwsf_LEN_di12_ServiceInstance(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di12_ServiceInstance(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di12_ServiceInstance) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di12_ServiceInstance(struct zx_ctx* c, struct zxwsf_di12_ServiceInstance_s* x )
{
  int len = zxwsf_LEN_di12_ServiceInstance(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di12_ServiceInstance(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di12_Status
#define EL_STRUCT zxwsf_di12_Status_s
#define EL_NS     di12
#define EL_TAG    Status

/* FUNC(zxwsf_LEN_di12_Status) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di12_Status(struct zxwsf_di12_Status_s* x )
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

  len += zx_attr_len(x->code, sizeof("code"));
  len += zx_attr_len(x->ref, sizeof("ref"));
  len += zx_attr_len(x->comment, sizeof("comment"));

  {
      struct zxwsf_di12_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_di12_Status_s*)e->gg.g.n)
	  len += zxwsf_LEN_di12_Status(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di12_Status) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di12_Status(struct zxwsf_di12_Status_s* x, char* p )
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

  p = zx_attr_enc(p, x->code, "code", sizeof("code")-1);
  p = zx_attr_enc(p, x->ref, "ref", sizeof("ref")-1);
  p = zx_attr_enc(p, x->comment, "comment", sizeof("comment")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxwsf_di12_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_di12_Status_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di12_Status(e, p);
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

/* FUNC(zxwsf_ENC_WO_di12_Status) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di12_Status(struct zxwsf_di12_Status_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di12_Status) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di12_Status(struct zx_ctx* c, struct zxwsf_di12_Status_s* x )
{
  int len = zxwsf_LEN_di12_Status(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di12_Status(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di12_Status) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di12_Status(struct zx_ctx* c, struct zxwsf_di12_Status_s* x )
{
  int len = zxwsf_LEN_di12_Status(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di12_Status(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di_EndpointContext
#define EL_STRUCT zxwsf_di_EndpointContext_s
#define EL_NS     di
#define EL_TAG    EndpointContext

/* FUNC(zxwsf_LEN_di_EndpointContext) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di_EndpointContext(struct zxwsf_di_EndpointContext_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("EndpointContext") - 1 + 1 + 2 + sizeof("EndpointContext") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->Address; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Address") - 1);
  {
      struct zxwsf_sbf_Framework_s* e;
      for (e = x->Framework; e; e = (struct zxwsf_sbf_Framework_s*)e->gg.g.n)
	  len += zxwsf_LEN_sbf_Framework(e);
  }
  for (se = x->SecurityMechID; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("SecurityMechID") - 1);
  for (se = x->Action; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Action") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di_EndpointContext) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di_EndpointContext(struct zxwsf_di_EndpointContext_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EndpointContext", sizeof("EndpointContext") - 1);
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
  
  for (se = x->Address; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Address", sizeof("Address") - 1);
  {
      struct zxwsf_sbf_Framework_s* e;
      for (e = x->Framework; e; e = (struct zxwsf_sbf_Framework_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_sbf_Framework(e, p);
  }
  for (se = x->SecurityMechID; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "SecurityMechID", sizeof("SecurityMechID") - 1);
  for (se = x->Action; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Action", sizeof("Action") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EndpointContext", sizeof("EndpointContext") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di_EndpointContext) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di_EndpointContext(struct zxwsf_di_EndpointContext_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di_EndpointContext) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di_EndpointContext(struct zx_ctx* c, struct zxwsf_di_EndpointContext_s* x )
{
  int len = zxwsf_LEN_di_EndpointContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di_EndpointContext(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di_EndpointContext) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di_EndpointContext(struct zx_ctx* c, struct zxwsf_di_EndpointContext_s* x )
{
  int len = zxwsf_LEN_di_EndpointContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di_EndpointContext(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di_Framework
#define EL_STRUCT zxwsf_di_Framework_s
#define EL_NS     di
#define EL_TAG    Framework

/* FUNC(zxwsf_LEN_di_Framework) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di_Framework(struct zxwsf_di_Framework_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Framework") - 1 + 1 + 2 + sizeof("Framework") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->version, sizeof("version"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di_Framework) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di_Framework(struct zxwsf_di_Framework_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Framework", sizeof("Framework") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->version, "version", sizeof("version")-1);


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
  ZX_OUT_MEM(p, "Framework", sizeof("Framework") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di_Framework) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di_Framework(struct zxwsf_di_Framework_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di_Framework) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di_Framework(struct zx_ctx* c, struct zxwsf_di_Framework_s* x )
{
  int len = zxwsf_LEN_di_Framework(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di_Framework(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di_Framework) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di_Framework(struct zx_ctx* c, struct zxwsf_di_Framework_s* x )
{
  int len = zxwsf_LEN_di_Framework(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di_Framework(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di_Keys
#define EL_STRUCT zxwsf_di_Keys_s
#define EL_NS     di
#define EL_TAG    Keys

/* FUNC(zxwsf_LEN_di_Keys) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di_Keys(struct zxwsf_di_Keys_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Keys") - 1 + 1 + 2 + sizeof("Keys") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->KeyDescriptor; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("KeyDescriptor") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di_Keys) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di_Keys(struct zxwsf_di_Keys_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Keys", sizeof("Keys") - 1);
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
  
  for (se = x->KeyDescriptor; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "KeyDescriptor", sizeof("KeyDescriptor") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Keys", sizeof("Keys") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di_Keys) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di_Keys(struct zxwsf_di_Keys_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di_Keys) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di_Keys(struct zx_ctx* c, struct zxwsf_di_Keys_s* x )
{
  int len = zxwsf_LEN_di_Keys(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di_Keys(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di_Keys) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di_Keys(struct zx_ctx* c, struct zxwsf_di_Keys_s* x )
{
  int len = zxwsf_LEN_di_Keys(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di_Keys(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di_Options
#define EL_STRUCT zxwsf_di_Options_s
#define EL_NS     di
#define EL_TAG    Options

/* FUNC(zxwsf_LEN_di_Options) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di_Options(struct zxwsf_di_Options_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Options") - 1 + 1 + 2 + sizeof("Options") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->Option; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Option") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di_Options) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di_Options(struct zxwsf_di_Options_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Options", sizeof("Options") - 1);
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
  
  for (se = x->Option; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Option", sizeof("Option") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Options", sizeof("Options") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di_Options) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di_Options(struct zxwsf_di_Options_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di_Options) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di_Options(struct zx_ctx* c, struct zxwsf_di_Options_s* x )
{
  int len = zxwsf_LEN_di_Options(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di_Options(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di_Options) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di_Options(struct zx_ctx* c, struct zxwsf_di_Options_s* x )
{
  int len = zxwsf_LEN_di_Options(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di_Options(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di_Query
#define EL_STRUCT zxwsf_di_Query_s
#define EL_NS     di
#define EL_TAG    Query

/* FUNC(zxwsf_LEN_di_Query) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di_Query(struct zxwsf_di_Query_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Query") - 1 + 1 + 2 + sizeof("Query") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_di_RequestedService_s* e;
      for (e = x->RequestedService; e; e = (struct zxwsf_di_RequestedService_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_RequestedService(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di_Query) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di_Query(struct zxwsf_di_Query_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Query", sizeof("Query") - 1);
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
      struct zxwsf_di_RequestedService_s* e;
      for (e = x->RequestedService; e; e = (struct zxwsf_di_RequestedService_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_RequestedService(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Query", sizeof("Query") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di_Query) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di_Query(struct zxwsf_di_Query_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di_Query) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di_Query(struct zx_ctx* c, struct zxwsf_di_Query_s* x )
{
  int len = zxwsf_LEN_di_Query(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di_Query(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di_Query) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di_Query(struct zx_ctx* c, struct zxwsf_di_Query_s* x )
{
  int len = zxwsf_LEN_di_Query(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di_Query(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di_QueryResponse
#define EL_STRUCT zxwsf_di_QueryResponse_s
#define EL_NS     di
#define EL_TAG    QueryResponse

/* FUNC(zxwsf_LEN_di_QueryResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di_QueryResponse(struct zxwsf_di_QueryResponse_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("QueryResponse") - 1 + 1 + 2 + sizeof("QueryResponse") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  len += zxwsf_LEN_lu_Status(e);
  }
  {
      struct zxwsf_a_EndpointReference_s* e;
      for (e = x->EndpointReference; e; e = (struct zxwsf_a_EndpointReference_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_EndpointReference(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di_QueryResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di_QueryResponse(struct zxwsf_di_QueryResponse_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "QueryResponse", sizeof("QueryResponse") - 1);
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
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_lu_Status(e, p);
  }
  {
      struct zxwsf_a_EndpointReference_s* e;
      for (e = x->EndpointReference; e; e = (struct zxwsf_a_EndpointReference_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_EndpointReference(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "QueryResponse", sizeof("QueryResponse") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di_QueryResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di_QueryResponse(struct zxwsf_di_QueryResponse_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di_QueryResponse) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di_QueryResponse(struct zx_ctx* c, struct zxwsf_di_QueryResponse_s* x )
{
  int len = zxwsf_LEN_di_QueryResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di_QueryResponse(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di_QueryResponse) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di_QueryResponse(struct zx_ctx* c, struct zxwsf_di_QueryResponse_s* x )
{
  int len = zxwsf_LEN_di_QueryResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di_QueryResponse(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di_RequestedService
#define EL_STRUCT zxwsf_di_RequestedService_s
#define EL_NS     di
#define EL_TAG    RequestedService

/* FUNC(zxwsf_LEN_di_RequestedService) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di_RequestedService(struct zxwsf_di_RequestedService_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("RequestedService") - 1 + 1 + 2 + sizeof("RequestedService") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->reqID, sizeof("reqID"));
  len += zx_attr_len(x->resultsType, sizeof("resultsType"));

  for (se = x->ServiceType; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("ServiceType") - 1);
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("ProviderID") - 1);
  {
      struct zxwsf_di_Options_s* e;
      for (e = x->Options; e; e = (struct zxwsf_di_Options_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_Options(e);
  }
  for (se = x->SecurityMechID; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("SecurityMechID") - 1);
  {
      struct zxwsf_di_Framework_s* e;
      for (e = x->Framework; e; e = (struct zxwsf_di_Framework_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_Framework(e);
  }
  for (se = x->Action; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Action") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di_RequestedService) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di_RequestedService(struct zxwsf_di_RequestedService_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RequestedService", sizeof("RequestedService") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->reqID, "reqID", sizeof("reqID")-1);
  p = zx_attr_enc(p, x->resultsType, "resultsType", sizeof("resultsType")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->ServiceType; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "ServiceType", sizeof("ServiceType") - 1);
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "ProviderID", sizeof("ProviderID") - 1);
  {
      struct zxwsf_di_Options_s* e;
      for (e = x->Options; e; e = (struct zxwsf_di_Options_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_Options(e, p);
  }
  for (se = x->SecurityMechID; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "SecurityMechID", sizeof("SecurityMechID") - 1);
  {
      struct zxwsf_di_Framework_s* e;
      for (e = x->Framework; e; e = (struct zxwsf_di_Framework_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_Framework(e, p);
  }
  for (se = x->Action; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Action", sizeof("Action") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RequestedService", sizeof("RequestedService") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di_RequestedService) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di_RequestedService(struct zxwsf_di_RequestedService_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di_RequestedService) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di_RequestedService(struct zx_ctx* c, struct zxwsf_di_RequestedService_s* x )
{
  int len = zxwsf_LEN_di_RequestedService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di_RequestedService(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di_RequestedService) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di_RequestedService(struct zx_ctx* c, struct zxwsf_di_RequestedService_s* x )
{
  int len = zxwsf_LEN_di_RequestedService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di_RequestedService(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di_SecurityContext
#define EL_STRUCT zxwsf_di_SecurityContext_s
#define EL_NS     di
#define EL_TAG    SecurityContext

/* FUNC(zxwsf_LEN_di_SecurityContext) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di_SecurityContext(struct zxwsf_di_SecurityContext_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SecurityContext") - 1 + 1 + 2 + sizeof("SecurityContext") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->SecurityMechID; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("SecurityMechID") - 1);
  {
      struct zxwsf_sec_Token_s* e;
      for (e = x->Token; e; e = (struct zxwsf_sec_Token_s*)e->gg.g.n)
	  len += zxwsf_LEN_sec_Token(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di_SecurityContext) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di_SecurityContext(struct zxwsf_di_SecurityContext_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SecurityContext", sizeof("SecurityContext") - 1);
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
  
  for (se = x->SecurityMechID; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "SecurityMechID", sizeof("SecurityMechID") - 1);
  {
      struct zxwsf_sec_Token_s* e;
      for (e = x->Token; e; e = (struct zxwsf_sec_Token_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_sec_Token(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SecurityContext", sizeof("SecurityContext") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di_SecurityContext) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di_SecurityContext(struct zxwsf_di_SecurityContext_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di_SecurityContext) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di_SecurityContext(struct zx_ctx* c, struct zxwsf_di_SecurityContext_s* x )
{
  int len = zxwsf_LEN_di_SecurityContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di_SecurityContext(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di_SecurityContext) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di_SecurityContext(struct zx_ctx* c, struct zxwsf_di_SecurityContext_s* x )
{
  int len = zxwsf_LEN_di_SecurityContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di_SecurityContext(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di_ServiceContext
#define EL_STRUCT zxwsf_di_ServiceContext_s
#define EL_NS     di
#define EL_TAG    ServiceContext

/* FUNC(zxwsf_LEN_di_ServiceContext) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di_ServiceContext(struct zxwsf_di_ServiceContext_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ServiceContext") - 1 + 1 + 2 + sizeof("ServiceContext") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->ServiceType; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("ServiceType") - 1);
  {
      struct zxwsf_di_Options_s* e;
      for (e = x->Options; e; e = (struct zxwsf_di_Options_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_Options(e);
  }
  {
      struct zxwsf_di_EndpointContext_s* e;
      for (e = x->EndpointContext; e; e = (struct zxwsf_di_EndpointContext_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_EndpointContext(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di_ServiceContext) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di_ServiceContext(struct zxwsf_di_ServiceContext_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ServiceContext", sizeof("ServiceContext") - 1);
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
  
  for (se = x->ServiceType; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "ServiceType", sizeof("ServiceType") - 1);
  {
      struct zxwsf_di_Options_s* e;
      for (e = x->Options; e; e = (struct zxwsf_di_Options_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_Options(e, p);
  }
  {
      struct zxwsf_di_EndpointContext_s* e;
      for (e = x->EndpointContext; e; e = (struct zxwsf_di_EndpointContext_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_EndpointContext(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ServiceContext", sizeof("ServiceContext") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di_ServiceContext) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di_ServiceContext(struct zxwsf_di_ServiceContext_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di_ServiceContext) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di_ServiceContext(struct zx_ctx* c, struct zxwsf_di_ServiceContext_s* x )
{
  int len = zxwsf_LEN_di_ServiceContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di_ServiceContext(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di_ServiceContext) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di_ServiceContext(struct zx_ctx* c, struct zxwsf_di_ServiceContext_s* x )
{
  int len = zxwsf_LEN_di_ServiceContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di_ServiceContext(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di_SvcMD
#define EL_STRUCT zxwsf_di_SvcMD_s
#define EL_NS     di
#define EL_TAG    SvcMD

/* FUNC(zxwsf_LEN_di_SvcMD) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di_SvcMD(struct zxwsf_di_SvcMD_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SvcMD") - 1 + 1 + 2 + sizeof("SvcMD") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->svcMDID, sizeof("svcMDID"));

  for (se = x->Abstract; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Abstract") - 1);
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("ProviderID") - 1);
  {
      struct zxwsf_di_ServiceContext_s* e;
      for (e = x->ServiceContext; e; e = (struct zxwsf_di_ServiceContext_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_ServiceContext(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di_SvcMD) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di_SvcMD(struct zxwsf_di_SvcMD_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMD", sizeof("SvcMD") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->svcMDID, "svcMDID", sizeof("svcMDID")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->Abstract; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Abstract", sizeof("Abstract") - 1);
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "ProviderID", sizeof("ProviderID") - 1);
  {
      struct zxwsf_di_ServiceContext_s* e;
      for (e = x->ServiceContext; e; e = (struct zxwsf_di_ServiceContext_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_ServiceContext(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMD", sizeof("SvcMD") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di_SvcMD) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di_SvcMD(struct zxwsf_di_SvcMD_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di_SvcMD) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMD(struct zx_ctx* c, struct zxwsf_di_SvcMD_s* x )
{
  int len = zxwsf_LEN_di_SvcMD(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di_SvcMD(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di_SvcMD) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMD(struct zx_ctx* c, struct zxwsf_di_SvcMD_s* x )
{
  int len = zxwsf_LEN_di_SvcMD(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di_SvcMD(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di_SvcMDAssociationAdd
#define EL_STRUCT zxwsf_di_SvcMDAssociationAdd_s
#define EL_NS     di
#define EL_TAG    SvcMDAssociationAdd

/* FUNC(zxwsf_LEN_di_SvcMDAssociationAdd) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di_SvcMDAssociationAdd(struct zxwsf_di_SvcMDAssociationAdd_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SvcMDAssociationAdd") - 1 + 1 + 2 + sizeof("SvcMDAssociationAdd") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->SvcMDID; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("SvcMDID") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di_SvcMDAssociationAdd) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di_SvcMDAssociationAdd(struct zxwsf_di_SvcMDAssociationAdd_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDAssociationAdd", sizeof("SvcMDAssociationAdd") - 1);
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
  
  for (se = x->SvcMDID; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "SvcMDID", sizeof("SvcMDID") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDAssociationAdd", sizeof("SvcMDAssociationAdd") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di_SvcMDAssociationAdd) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di_SvcMDAssociationAdd(struct zxwsf_di_SvcMDAssociationAdd_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di_SvcMDAssociationAdd) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDAssociationAdd(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAdd_s* x )
{
  int len = zxwsf_LEN_di_SvcMDAssociationAdd(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di_SvcMDAssociationAdd(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di_SvcMDAssociationAdd) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDAssociationAdd(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAdd_s* x )
{
  int len = zxwsf_LEN_di_SvcMDAssociationAdd(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di_SvcMDAssociationAdd(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di_SvcMDAssociationAddResponse
#define EL_STRUCT zxwsf_di_SvcMDAssociationAddResponse_s
#define EL_NS     di
#define EL_TAG    SvcMDAssociationAddResponse

/* FUNC(zxwsf_LEN_di_SvcMDAssociationAddResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di_SvcMDAssociationAddResponse(struct zxwsf_di_SvcMDAssociationAddResponse_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SvcMDAssociationAddResponse") - 1 + 1 + 2 + sizeof("SvcMDAssociationAddResponse") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  len += zxwsf_LEN_lu_Status(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di_SvcMDAssociationAddResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di_SvcMDAssociationAddResponse(struct zxwsf_di_SvcMDAssociationAddResponse_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDAssociationAddResponse", sizeof("SvcMDAssociationAddResponse") - 1);
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
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_lu_Status(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDAssociationAddResponse", sizeof("SvcMDAssociationAddResponse") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di_SvcMDAssociationAddResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di_SvcMDAssociationAddResponse(struct zxwsf_di_SvcMDAssociationAddResponse_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di_SvcMDAssociationAddResponse) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDAssociationAddResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAddResponse_s* x )
{
  int len = zxwsf_LEN_di_SvcMDAssociationAddResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di_SvcMDAssociationAddResponse(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di_SvcMDAssociationAddResponse) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDAssociationAddResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAddResponse_s* x )
{
  int len = zxwsf_LEN_di_SvcMDAssociationAddResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di_SvcMDAssociationAddResponse(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di_SvcMDAssociationDelete
#define EL_STRUCT zxwsf_di_SvcMDAssociationDelete_s
#define EL_NS     di
#define EL_TAG    SvcMDAssociationDelete

/* FUNC(zxwsf_LEN_di_SvcMDAssociationDelete) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di_SvcMDAssociationDelete(struct zxwsf_di_SvcMDAssociationDelete_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SvcMDAssociationDelete") - 1 + 1 + 2 + sizeof("SvcMDAssociationDelete") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->SvcMDID; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("SvcMDID") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di_SvcMDAssociationDelete) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di_SvcMDAssociationDelete(struct zxwsf_di_SvcMDAssociationDelete_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDAssociationDelete", sizeof("SvcMDAssociationDelete") - 1);
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
  
  for (se = x->SvcMDID; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "SvcMDID", sizeof("SvcMDID") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDAssociationDelete", sizeof("SvcMDAssociationDelete") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di_SvcMDAssociationDelete) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di_SvcMDAssociationDelete(struct zxwsf_di_SvcMDAssociationDelete_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di_SvcMDAssociationDelete) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDAssociationDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDelete_s* x )
{
  int len = zxwsf_LEN_di_SvcMDAssociationDelete(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di_SvcMDAssociationDelete(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di_SvcMDAssociationDelete) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDAssociationDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDelete_s* x )
{
  int len = zxwsf_LEN_di_SvcMDAssociationDelete(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di_SvcMDAssociationDelete(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di_SvcMDAssociationDeleteResponse
#define EL_STRUCT zxwsf_di_SvcMDAssociationDeleteResponse_s
#define EL_NS     di
#define EL_TAG    SvcMDAssociationDeleteResponse

/* FUNC(zxwsf_LEN_di_SvcMDAssociationDeleteResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di_SvcMDAssociationDeleteResponse(struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SvcMDAssociationDeleteResponse") - 1 + 1 + 2 + sizeof("SvcMDAssociationDeleteResponse") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  len += zxwsf_LEN_lu_Status(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di_SvcMDAssociationDeleteResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di_SvcMDAssociationDeleteResponse(struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDAssociationDeleteResponse", sizeof("SvcMDAssociationDeleteResponse") - 1);
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
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_lu_Status(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDAssociationDeleteResponse", sizeof("SvcMDAssociationDeleteResponse") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di_SvcMDAssociationDeleteResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di_SvcMDAssociationDeleteResponse(struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di_SvcMDAssociationDeleteResponse) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDAssociationDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x )
{
  int len = zxwsf_LEN_di_SvcMDAssociationDeleteResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di_SvcMDAssociationDeleteResponse(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di_SvcMDAssociationDeleteResponse) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDAssociationDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x )
{
  int len = zxwsf_LEN_di_SvcMDAssociationDeleteResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di_SvcMDAssociationDeleteResponse(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di_SvcMDAssociationQuery
#define EL_STRUCT zxwsf_di_SvcMDAssociationQuery_s
#define EL_NS     di
#define EL_TAG    SvcMDAssociationQuery

/* FUNC(zxwsf_LEN_di_SvcMDAssociationQuery) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di_SvcMDAssociationQuery(struct zxwsf_di_SvcMDAssociationQuery_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SvcMDAssociationQuery") - 1 + 1 + 2 + sizeof("SvcMDAssociationQuery") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->SvcMDID; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("SvcMDID") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di_SvcMDAssociationQuery) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di_SvcMDAssociationQuery(struct zxwsf_di_SvcMDAssociationQuery_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDAssociationQuery", sizeof("SvcMDAssociationQuery") - 1);
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
  
  for (se = x->SvcMDID; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "SvcMDID", sizeof("SvcMDID") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDAssociationQuery", sizeof("SvcMDAssociationQuery") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di_SvcMDAssociationQuery) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di_SvcMDAssociationQuery(struct zxwsf_di_SvcMDAssociationQuery_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di_SvcMDAssociationQuery) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDAssociationQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQuery_s* x )
{
  int len = zxwsf_LEN_di_SvcMDAssociationQuery(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di_SvcMDAssociationQuery(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di_SvcMDAssociationQuery) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDAssociationQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQuery_s* x )
{
  int len = zxwsf_LEN_di_SvcMDAssociationQuery(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di_SvcMDAssociationQuery(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di_SvcMDAssociationQueryResponse
#define EL_STRUCT zxwsf_di_SvcMDAssociationQueryResponse_s
#define EL_NS     di
#define EL_TAG    SvcMDAssociationQueryResponse

/* FUNC(zxwsf_LEN_di_SvcMDAssociationQueryResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di_SvcMDAssociationQueryResponse(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SvcMDAssociationQueryResponse") - 1 + 1 + 2 + sizeof("SvcMDAssociationQueryResponse") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  len += zxwsf_LEN_lu_Status(e);
  }
  for (se = x->SvcMDID; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("SvcMDID") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di_SvcMDAssociationQueryResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di_SvcMDAssociationQueryResponse(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDAssociationQueryResponse", sizeof("SvcMDAssociationQueryResponse") - 1);
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
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_lu_Status(e, p);
  }
  for (se = x->SvcMDID; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "SvcMDID", sizeof("SvcMDID") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDAssociationQueryResponse", sizeof("SvcMDAssociationQueryResponse") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di_SvcMDAssociationQueryResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di_SvcMDAssociationQueryResponse(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di_SvcMDAssociationQueryResponse) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDAssociationQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQueryResponse_s* x )
{
  int len = zxwsf_LEN_di_SvcMDAssociationQueryResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di_SvcMDAssociationQueryResponse(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di_SvcMDAssociationQueryResponse) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDAssociationQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQueryResponse_s* x )
{
  int len = zxwsf_LEN_di_SvcMDAssociationQueryResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di_SvcMDAssociationQueryResponse(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di_SvcMDDelete
#define EL_STRUCT zxwsf_di_SvcMDDelete_s
#define EL_NS     di
#define EL_TAG    SvcMDDelete

/* FUNC(zxwsf_LEN_di_SvcMDDelete) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di_SvcMDDelete(struct zxwsf_di_SvcMDDelete_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SvcMDDelete") - 1 + 1 + 2 + sizeof("SvcMDDelete") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->SvcMDID; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("SvcMDID") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di_SvcMDDelete) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di_SvcMDDelete(struct zxwsf_di_SvcMDDelete_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDDelete", sizeof("SvcMDDelete") - 1);
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
  
  for (se = x->SvcMDID; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "SvcMDID", sizeof("SvcMDID") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDDelete", sizeof("SvcMDDelete") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di_SvcMDDelete) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di_SvcMDDelete(struct zxwsf_di_SvcMDDelete_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di_SvcMDDelete) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDDelete_s* x )
{
  int len = zxwsf_LEN_di_SvcMDDelete(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di_SvcMDDelete(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di_SvcMDDelete) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDDelete_s* x )
{
  int len = zxwsf_LEN_di_SvcMDDelete(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di_SvcMDDelete(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di_SvcMDDeleteResponse
#define EL_STRUCT zxwsf_di_SvcMDDeleteResponse_s
#define EL_NS     di
#define EL_TAG    SvcMDDeleteResponse

/* FUNC(zxwsf_LEN_di_SvcMDDeleteResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di_SvcMDDeleteResponse(struct zxwsf_di_SvcMDDeleteResponse_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SvcMDDeleteResponse") - 1 + 1 + 2 + sizeof("SvcMDDeleteResponse") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  len += zxwsf_LEN_lu_Status(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di_SvcMDDeleteResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di_SvcMDDeleteResponse(struct zxwsf_di_SvcMDDeleteResponse_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDDeleteResponse", sizeof("SvcMDDeleteResponse") - 1);
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
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_lu_Status(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDDeleteResponse", sizeof("SvcMDDeleteResponse") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di_SvcMDDeleteResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di_SvcMDDeleteResponse(struct zxwsf_di_SvcMDDeleteResponse_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di_SvcMDDeleteResponse) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDDeleteResponse_s* x )
{
  int len = zxwsf_LEN_di_SvcMDDeleteResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di_SvcMDDeleteResponse(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di_SvcMDDeleteResponse) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDDeleteResponse_s* x )
{
  int len = zxwsf_LEN_di_SvcMDDeleteResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di_SvcMDDeleteResponse(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di_SvcMDQuery
#define EL_STRUCT zxwsf_di_SvcMDQuery_s
#define EL_NS     di
#define EL_TAG    SvcMDQuery

/* FUNC(zxwsf_LEN_di_SvcMDQuery) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di_SvcMDQuery(struct zxwsf_di_SvcMDQuery_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SvcMDQuery") - 1 + 1 + 2 + sizeof("SvcMDQuery") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->SvcMDID; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("SvcMDID") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di_SvcMDQuery) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di_SvcMDQuery(struct zxwsf_di_SvcMDQuery_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDQuery", sizeof("SvcMDQuery") - 1);
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
  
  for (se = x->SvcMDID; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "SvcMDID", sizeof("SvcMDID") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDQuery", sizeof("SvcMDQuery") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di_SvcMDQuery) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di_SvcMDQuery(struct zxwsf_di_SvcMDQuery_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di_SvcMDQuery) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDQuery_s* x )
{
  int len = zxwsf_LEN_di_SvcMDQuery(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di_SvcMDQuery(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di_SvcMDQuery) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDQuery_s* x )
{
  int len = zxwsf_LEN_di_SvcMDQuery(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di_SvcMDQuery(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di_SvcMDQueryResponse
#define EL_STRUCT zxwsf_di_SvcMDQueryResponse_s
#define EL_NS     di
#define EL_TAG    SvcMDQueryResponse

/* FUNC(zxwsf_LEN_di_SvcMDQueryResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di_SvcMDQueryResponse(struct zxwsf_di_SvcMDQueryResponse_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SvcMDQueryResponse") - 1 + 1 + 2 + sizeof("SvcMDQueryResponse") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  len += zxwsf_LEN_lu_Status(e);
  }
  {
      struct zxwsf_di_SvcMD_s* e;
      for (e = x->SvcMD; e; e = (struct zxwsf_di_SvcMD_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_SvcMD(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di_SvcMDQueryResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di_SvcMDQueryResponse(struct zxwsf_di_SvcMDQueryResponse_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDQueryResponse", sizeof("SvcMDQueryResponse") - 1);
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
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_lu_Status(e, p);
  }
  {
      struct zxwsf_di_SvcMD_s* e;
      for (e = x->SvcMD; e; e = (struct zxwsf_di_SvcMD_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_SvcMD(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDQueryResponse", sizeof("SvcMDQueryResponse") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di_SvcMDQueryResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di_SvcMDQueryResponse(struct zxwsf_di_SvcMDQueryResponse_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di_SvcMDQueryResponse) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDQueryResponse_s* x )
{
  int len = zxwsf_LEN_di_SvcMDQueryResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di_SvcMDQueryResponse(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di_SvcMDQueryResponse) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDQueryResponse_s* x )
{
  int len = zxwsf_LEN_di_SvcMDQueryResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di_SvcMDQueryResponse(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di_SvcMDRegister
#define EL_STRUCT zxwsf_di_SvcMDRegister_s
#define EL_NS     di
#define EL_TAG    SvcMDRegister

/* FUNC(zxwsf_LEN_di_SvcMDRegister) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di_SvcMDRegister(struct zxwsf_di_SvcMDRegister_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SvcMDRegister") - 1 + 1 + 2 + sizeof("SvcMDRegister") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_di_SvcMD_s* e;
      for (e = x->SvcMD; e; e = (struct zxwsf_di_SvcMD_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_SvcMD(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di_SvcMDRegister) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di_SvcMDRegister(struct zxwsf_di_SvcMDRegister_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDRegister", sizeof("SvcMDRegister") - 1);
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
      struct zxwsf_di_SvcMD_s* e;
      for (e = x->SvcMD; e; e = (struct zxwsf_di_SvcMD_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_SvcMD(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDRegister", sizeof("SvcMDRegister") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di_SvcMDRegister) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di_SvcMDRegister(struct zxwsf_di_SvcMDRegister_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di_SvcMDRegister) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDRegister(struct zx_ctx* c, struct zxwsf_di_SvcMDRegister_s* x )
{
  int len = zxwsf_LEN_di_SvcMDRegister(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di_SvcMDRegister(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di_SvcMDRegister) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDRegister(struct zx_ctx* c, struct zxwsf_di_SvcMDRegister_s* x )
{
  int len = zxwsf_LEN_di_SvcMDRegister(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di_SvcMDRegister(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di_SvcMDRegisterResponse
#define EL_STRUCT zxwsf_di_SvcMDRegisterResponse_s
#define EL_NS     di
#define EL_TAG    SvcMDRegisterResponse

/* FUNC(zxwsf_LEN_di_SvcMDRegisterResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di_SvcMDRegisterResponse(struct zxwsf_di_SvcMDRegisterResponse_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SvcMDRegisterResponse") - 1 + 1 + 2 + sizeof("SvcMDRegisterResponse") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  len += zxwsf_LEN_lu_Status(e);
  }
  for (se = x->SvcMDID; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("SvcMDID") - 1);
  {
      struct zxwsf_di_Keys_s* e;
      for (e = x->Keys; e; e = (struct zxwsf_di_Keys_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_Keys(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di_SvcMDRegisterResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di_SvcMDRegisterResponse(struct zxwsf_di_SvcMDRegisterResponse_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDRegisterResponse", sizeof("SvcMDRegisterResponse") - 1);
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
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_lu_Status(e, p);
  }
  for (se = x->SvcMDID; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "SvcMDID", sizeof("SvcMDID") - 1);
  {
      struct zxwsf_di_Keys_s* e;
      for (e = x->Keys; e; e = (struct zxwsf_di_Keys_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_Keys(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDRegisterResponse", sizeof("SvcMDRegisterResponse") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di_SvcMDRegisterResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di_SvcMDRegisterResponse(struct zxwsf_di_SvcMDRegisterResponse_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di_SvcMDRegisterResponse) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDRegisterResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDRegisterResponse_s* x )
{
  int len = zxwsf_LEN_di_SvcMDRegisterResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di_SvcMDRegisterResponse(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di_SvcMDRegisterResponse) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDRegisterResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDRegisterResponse_s* x )
{
  int len = zxwsf_LEN_di_SvcMDRegisterResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di_SvcMDRegisterResponse(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di_SvcMDReplace
#define EL_STRUCT zxwsf_di_SvcMDReplace_s
#define EL_NS     di
#define EL_TAG    SvcMDReplace

/* FUNC(zxwsf_LEN_di_SvcMDReplace) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di_SvcMDReplace(struct zxwsf_di_SvcMDReplace_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SvcMDReplace") - 1 + 1 + 2 + sizeof("SvcMDReplace") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_di_SvcMD_s* e;
      for (e = x->SvcMD; e; e = (struct zxwsf_di_SvcMD_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_SvcMD(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di_SvcMDReplace) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di_SvcMDReplace(struct zxwsf_di_SvcMDReplace_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDReplace", sizeof("SvcMDReplace") - 1);
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
      struct zxwsf_di_SvcMD_s* e;
      for (e = x->SvcMD; e; e = (struct zxwsf_di_SvcMD_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_SvcMD(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDReplace", sizeof("SvcMDReplace") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di_SvcMDReplace) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di_SvcMDReplace(struct zxwsf_di_SvcMDReplace_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di_SvcMDReplace) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDReplace(struct zx_ctx* c, struct zxwsf_di_SvcMDReplace_s* x )
{
  int len = zxwsf_LEN_di_SvcMDReplace(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di_SvcMDReplace(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di_SvcMDReplace) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDReplace(struct zx_ctx* c, struct zxwsf_di_SvcMDReplace_s* x )
{
  int len = zxwsf_LEN_di_SvcMDReplace(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di_SvcMDReplace(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   di_SvcMDReplaceResponse
#define EL_STRUCT zxwsf_di_SvcMDReplaceResponse_s
#define EL_NS     di
#define EL_TAG    SvcMDReplaceResponse

/* FUNC(zxwsf_LEN_di_SvcMDReplaceResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_di_SvcMDReplaceResponse(struct zxwsf_di_SvcMDReplaceResponse_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SvcMDReplaceResponse") - 1 + 1 + 2 + sizeof("SvcMDReplaceResponse") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  len += zxwsf_LEN_lu_Status(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_di_SvcMDReplaceResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_di_SvcMDReplaceResponse(struct zxwsf_di_SvcMDReplaceResponse_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDReplaceResponse", sizeof("SvcMDReplaceResponse") - 1);
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
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_lu_Status(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SvcMDReplaceResponse", sizeof("SvcMDReplaceResponse") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_di_SvcMDReplaceResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_di_SvcMDReplaceResponse(struct zxwsf_di_SvcMDReplaceResponse_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_di_SvcMDReplaceResponse) */

struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDReplaceResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDReplaceResponse_s* x )
{
  int len = zxwsf_LEN_di_SvcMDReplaceResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_di_SvcMDReplaceResponse(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_di_SvcMDReplaceResponse) */

struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDReplaceResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDReplaceResponse_s* x )
{
  int len = zxwsf_LEN_di_SvcMDReplaceResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_di_SvcMDReplaceResponse(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   dise_Body
#define EL_STRUCT zxwsf_dise_Body_s
#define EL_NS     dise
#define EL_TAG    Body

/* FUNC(zxwsf_LEN_dise_Body) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_dise_Body(struct zxwsf_dise_Body_s* x )
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
      struct zxwsf_di_SvcMDAssociationAdd_s* e;
      for (e = x->SvcMDAssociationAdd; e; e = (struct zxwsf_di_SvcMDAssociationAdd_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_SvcMDAssociationAdd(e);
  }
  {
      struct zxwsf_di_SvcMDAssociationAddResponse_s* e;
      for (e = x->SvcMDAssociationAddResponse; e; e = (struct zxwsf_di_SvcMDAssociationAddResponse_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_SvcMDAssociationAddResponse(e);
  }
  {
      struct zxwsf_di_SvcMDAssociationDelete_s* e;
      for (e = x->SvcMDAssociationDelete; e; e = (struct zxwsf_di_SvcMDAssociationDelete_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_SvcMDAssociationDelete(e);
  }
  {
      struct zxwsf_di_SvcMDAssociationDeleteResponse_s* e;
      for (e = x->SvcMDAssociationDeleteResponse; e; e = (struct zxwsf_di_SvcMDAssociationDeleteResponse_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_SvcMDAssociationDeleteResponse(e);
  }
  {
      struct zxwsf_di_SvcMDAssociationQuery_s* e;
      for (e = x->SvcMDAssociationQuery; e; e = (struct zxwsf_di_SvcMDAssociationQuery_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_SvcMDAssociationQuery(e);
  }
  {
      struct zxwsf_di_SvcMDAssociationQueryResponse_s* e;
      for (e = x->SvcMDAssociationQueryResponse; e; e = (struct zxwsf_di_SvcMDAssociationQueryResponse_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_SvcMDAssociationQueryResponse(e);
  }
  {
      struct zxwsf_di_SvcMDRegister_s* e;
      for (e = x->SvcMDRegister; e; e = (struct zxwsf_di_SvcMDRegister_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_SvcMDRegister(e);
  }
  {
      struct zxwsf_di_SvcMDRegisterResponse_s* e;
      for (e = x->SvcMDRegisterResponse; e; e = (struct zxwsf_di_SvcMDRegisterResponse_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_SvcMDRegisterResponse(e);
  }
  {
      struct zxwsf_di_SvcMDDelete_s* e;
      for (e = x->SvcMDDelete; e; e = (struct zxwsf_di_SvcMDDelete_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_SvcMDDelete(e);
  }
  {
      struct zxwsf_di_SvcMDDeleteResponse_s* e;
      for (e = x->SvcMDDeleteResponse; e; e = (struct zxwsf_di_SvcMDDeleteResponse_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_SvcMDDeleteResponse(e);
  }
  {
      struct zxwsf_di_SvcMDQuery_s* e;
      for (e = x->SvcMDQuery; e; e = (struct zxwsf_di_SvcMDQuery_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_SvcMDQuery(e);
  }
  {
      struct zxwsf_di_SvcMDQueryResponse_s* e;
      for (e = x->SvcMDQueryResponse; e; e = (struct zxwsf_di_SvcMDQueryResponse_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_SvcMDQueryResponse(e);
  }
  {
      struct zxwsf_di_SvcMDReplace_s* e;
      for (e = x->SvcMDReplace; e; e = (struct zxwsf_di_SvcMDReplace_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_SvcMDReplace(e);
  }
  {
      struct zxwsf_di_SvcMDReplaceResponse_s* e;
      for (e = x->SvcMDReplaceResponse; e; e = (struct zxwsf_di_SvcMDReplaceResponse_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_SvcMDReplaceResponse(e);
  }
  {
      struct zxwsf_dise_Fault_s* e;
      for (e = x->Fault; e; e = (struct zxwsf_dise_Fault_s*)e->gg.g.n)
	  len += zxwsf_LEN_dise_Fault(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_dise_Body) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_dise_Body(struct zxwsf_dise_Body_s* x, char* p )
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
      struct zxwsf_di_SvcMDAssociationAdd_s* e;
      for (e = x->SvcMDAssociationAdd; e; e = (struct zxwsf_di_SvcMDAssociationAdd_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_SvcMDAssociationAdd(e, p);
  }
  {
      struct zxwsf_di_SvcMDAssociationAddResponse_s* e;
      for (e = x->SvcMDAssociationAddResponse; e; e = (struct zxwsf_di_SvcMDAssociationAddResponse_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_SvcMDAssociationAddResponse(e, p);
  }
  {
      struct zxwsf_di_SvcMDAssociationDelete_s* e;
      for (e = x->SvcMDAssociationDelete; e; e = (struct zxwsf_di_SvcMDAssociationDelete_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_SvcMDAssociationDelete(e, p);
  }
  {
      struct zxwsf_di_SvcMDAssociationDeleteResponse_s* e;
      for (e = x->SvcMDAssociationDeleteResponse; e; e = (struct zxwsf_di_SvcMDAssociationDeleteResponse_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_SvcMDAssociationDeleteResponse(e, p);
  }
  {
      struct zxwsf_di_SvcMDAssociationQuery_s* e;
      for (e = x->SvcMDAssociationQuery; e; e = (struct zxwsf_di_SvcMDAssociationQuery_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_SvcMDAssociationQuery(e, p);
  }
  {
      struct zxwsf_di_SvcMDAssociationQueryResponse_s* e;
      for (e = x->SvcMDAssociationQueryResponse; e; e = (struct zxwsf_di_SvcMDAssociationQueryResponse_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_SvcMDAssociationQueryResponse(e, p);
  }
  {
      struct zxwsf_di_SvcMDRegister_s* e;
      for (e = x->SvcMDRegister; e; e = (struct zxwsf_di_SvcMDRegister_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_SvcMDRegister(e, p);
  }
  {
      struct zxwsf_di_SvcMDRegisterResponse_s* e;
      for (e = x->SvcMDRegisterResponse; e; e = (struct zxwsf_di_SvcMDRegisterResponse_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_SvcMDRegisterResponse(e, p);
  }
  {
      struct zxwsf_di_SvcMDDelete_s* e;
      for (e = x->SvcMDDelete; e; e = (struct zxwsf_di_SvcMDDelete_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_SvcMDDelete(e, p);
  }
  {
      struct zxwsf_di_SvcMDDeleteResponse_s* e;
      for (e = x->SvcMDDeleteResponse; e; e = (struct zxwsf_di_SvcMDDeleteResponse_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_SvcMDDeleteResponse(e, p);
  }
  {
      struct zxwsf_di_SvcMDQuery_s* e;
      for (e = x->SvcMDQuery; e; e = (struct zxwsf_di_SvcMDQuery_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_SvcMDQuery(e, p);
  }
  {
      struct zxwsf_di_SvcMDQueryResponse_s* e;
      for (e = x->SvcMDQueryResponse; e; e = (struct zxwsf_di_SvcMDQueryResponse_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_SvcMDQueryResponse(e, p);
  }
  {
      struct zxwsf_di_SvcMDReplace_s* e;
      for (e = x->SvcMDReplace; e; e = (struct zxwsf_di_SvcMDReplace_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_SvcMDReplace(e, p);
  }
  {
      struct zxwsf_di_SvcMDReplaceResponse_s* e;
      for (e = x->SvcMDReplaceResponse; e; e = (struct zxwsf_di_SvcMDReplaceResponse_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_SvcMDReplaceResponse(e, p);
  }
  {
      struct zxwsf_dise_Fault_s* e;
      for (e = x->Fault; e; e = (struct zxwsf_dise_Fault_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_dise_Fault(e, p);
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

/* FUNC(zxwsf_ENC_WO_dise_Body) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_dise_Body(struct zxwsf_dise_Body_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_dise_Body) */

struct zx_str_s* zxwsf_EASY_ENC_SO_dise_Body(struct zx_ctx* c, struct zxwsf_dise_Body_s* x )
{
  int len = zxwsf_LEN_dise_Body(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_dise_Body(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_dise_Body) */

struct zx_str_s* zxwsf_EASY_ENC_WO_dise_Body(struct zx_ctx* c, struct zxwsf_dise_Body_s* x )
{
  int len = zxwsf_LEN_dise_Body(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_dise_Body(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   dise_Envelope
#define EL_STRUCT zxwsf_dise_Envelope_s
#define EL_NS     dise
#define EL_TAG    Envelope

/* FUNC(zxwsf_LEN_dise_Envelope) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_dise_Envelope(struct zxwsf_dise_Envelope_s* x )
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
      struct zxwsf_dise_Header_s* e;
      for (e = x->Header; e; e = (struct zxwsf_dise_Header_s*)e->gg.g.n)
	  len += zxwsf_LEN_dise_Header(e);
  }
  {
      struct zxwsf_dise_Body_s* e;
      for (e = x->Body; e; e = (struct zxwsf_dise_Body_s*)e->gg.g.n)
	  len += zxwsf_LEN_dise_Body(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_dise_Envelope) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_dise_Envelope(struct zxwsf_dise_Envelope_s* x, char* p )
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
      struct zxwsf_dise_Header_s* e;
      for (e = x->Header; e; e = (struct zxwsf_dise_Header_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_dise_Header(e, p);
  }
  {
      struct zxwsf_dise_Body_s* e;
      for (e = x->Body; e; e = (struct zxwsf_dise_Body_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_dise_Body(e, p);
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

/* FUNC(zxwsf_ENC_WO_dise_Envelope) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_dise_Envelope(struct zxwsf_dise_Envelope_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_dise_Envelope) */

struct zx_str_s* zxwsf_EASY_ENC_SO_dise_Envelope(struct zx_ctx* c, struct zxwsf_dise_Envelope_s* x )
{
  int len = zxwsf_LEN_dise_Envelope(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_dise_Envelope(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_dise_Envelope) */

struct zx_str_s* zxwsf_EASY_ENC_WO_dise_Envelope(struct zx_ctx* c, struct zxwsf_dise_Envelope_s* x )
{
  int len = zxwsf_LEN_dise_Envelope(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_dise_Envelope(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   dise_Fault
#define EL_STRUCT zxwsf_dise_Fault_s
#define EL_NS     dise
#define EL_TAG    Fault

/* FUNC(zxwsf_LEN_dise_Fault) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_dise_Fault(struct zxwsf_dise_Fault_s* x )
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
    len += zxwsf_LEN_simple_elem(se, sizeof("faultcode") - 1);
  for (se = x->faultstring; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("faultstring") - 1);
  for (se = x->faultactor; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("faultactor") - 1);
  {
      struct zxwsf_dise_detail_s* e;
      for (e = x->detail; e; e = (struct zxwsf_dise_detail_s*)e->gg.g.n)
	  len += zxwsf_LEN_dise_detail(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_dise_Fault) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_dise_Fault(struct zxwsf_dise_Fault_s* x, char* p )
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
    p = zxwsf_ENC_SO_simple_elem(se, p, "faultcode", sizeof("faultcode") - 1);
  for (se = x->faultstring; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "faultstring", sizeof("faultstring") - 1);
  for (se = x->faultactor; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "faultactor", sizeof("faultactor") - 1);
  {
      struct zxwsf_dise_detail_s* e;
      for (e = x->detail; e; e = (struct zxwsf_dise_detail_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_dise_detail(e, p);
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

/* FUNC(zxwsf_ENC_WO_dise_Fault) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_dise_Fault(struct zxwsf_dise_Fault_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_dise_Fault) */

struct zx_str_s* zxwsf_EASY_ENC_SO_dise_Fault(struct zx_ctx* c, struct zxwsf_dise_Fault_s* x )
{
  int len = zxwsf_LEN_dise_Fault(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_dise_Fault(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_dise_Fault) */

struct zx_str_s* zxwsf_EASY_ENC_WO_dise_Fault(struct zx_ctx* c, struct zxwsf_dise_Fault_s* x )
{
  int len = zxwsf_LEN_dise_Fault(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_dise_Fault(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   dise_Header
#define EL_STRUCT zxwsf_dise_Header_s
#define EL_NS     dise
#define EL_TAG    Header

/* FUNC(zxwsf_LEN_dise_Header) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_dise_Header(struct zxwsf_dise_Header_s* x )
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


  {
      struct zxwsf_a_MessageID_s* e;
      for (e = x->MessageID; e; e = (struct zxwsf_a_MessageID_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_MessageID(e);
  }
  {
      struct zxwsf_a_RelatesTo_s* e;
      for (e = x->RelatesTo; e; e = (struct zxwsf_a_RelatesTo_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_RelatesTo(e);
  }
  {
      struct zxwsf_a_ReplyTo_s* e;
      for (e = x->ReplyTo; e; e = (struct zxwsf_a_ReplyTo_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_ReplyTo(e);
  }
  {
      struct zxwsf_a_From_s* e;
      for (e = x->From; e; e = (struct zxwsf_a_From_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_From(e);
  }
  {
      struct zxwsf_a_FaultTo_s* e;
      for (e = x->FaultTo; e; e = (struct zxwsf_a_FaultTo_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_FaultTo(e);
  }
  {
      struct zxwsf_a_To_s* e;
      for (e = x->To; e; e = (struct zxwsf_a_To_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_To(e);
  }
  {
      struct zxwsf_a_Action_s* e;
      for (e = x->Action; e; e = (struct zxwsf_a_Action_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_Action(e);
  }
  {
      struct zxwsf_sbf_Framework_s* e;
      for (e = x->Framework; e; e = (struct zxwsf_sbf_Framework_s*)e->gg.g.n)
	  len += zxwsf_LEN_sbf_Framework(e);
  }
  {
      struct zxwsf_b_Framework_s* e;
      for (e = x->b_Framework; e; e = (struct zxwsf_b_Framework_s*)e->gg.g.n)
	  len += zxwsf_LEN_b_Framework(e);
  }
  {
      struct zxwsf_b_Sender_s* e;
      for (e = x->Sender; e; e = (struct zxwsf_b_Sender_s*)e->gg.g.n)
	  len += zxwsf_LEN_b_Sender(e);
  }
  {
      struct zxwsf_b_CredentialsContext_s* e;
      for (e = x->CredentialsContext; e; e = (struct zxwsf_b_CredentialsContext_s*)e->gg.g.n)
	  len += zxwsf_LEN_b_CredentialsContext(e);
  }
  {
      struct zxwsf_b_EndpointUpdate_s* e;
      for (e = x->EndpointUpdate; e; e = (struct zxwsf_b_EndpointUpdate_s*)e->gg.g.n)
	  len += zxwsf_LEN_b_EndpointUpdate(e);
  }
  for (se = x->Timeout; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Timeout") - 1);
  {
      struct zxwsf_b_ProcessingContext_s* e;
      for (e = x->ProcessingContext; e; e = (struct zxwsf_b_ProcessingContext_s*)e->gg.g.n)
	  len += zxwsf_LEN_b_ProcessingContext(e);
  }
  {
      struct zxwsf_b_ApplicationEPR_s* e;
      for (e = x->ApplicationEPR; e; e = (struct zxwsf_b_ApplicationEPR_s*)e->gg.g.n)
	  len += zxwsf_LEN_b_ApplicationEPR(e);
  }
  {
      struct zxwsf_b_RedirectRequest_s* e;
      for (e = x->RedirectRequest; e; e = (struct zxwsf_b_RedirectRequest_s*)e->gg.g.n)
	  len += zxwsf_LEN_b_RedirectRequest(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_dise_Header) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_dise_Header(struct zxwsf_dise_Header_s* x, char* p )
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
  
  {
      struct zxwsf_a_MessageID_s* e;
      for (e = x->MessageID; e; e = (struct zxwsf_a_MessageID_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_MessageID(e, p);
  }
  {
      struct zxwsf_a_RelatesTo_s* e;
      for (e = x->RelatesTo; e; e = (struct zxwsf_a_RelatesTo_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_RelatesTo(e, p);
  }
  {
      struct zxwsf_a_ReplyTo_s* e;
      for (e = x->ReplyTo; e; e = (struct zxwsf_a_ReplyTo_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_ReplyTo(e, p);
  }
  {
      struct zxwsf_a_From_s* e;
      for (e = x->From; e; e = (struct zxwsf_a_From_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_From(e, p);
  }
  {
      struct zxwsf_a_FaultTo_s* e;
      for (e = x->FaultTo; e; e = (struct zxwsf_a_FaultTo_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_FaultTo(e, p);
  }
  {
      struct zxwsf_a_To_s* e;
      for (e = x->To; e; e = (struct zxwsf_a_To_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_To(e, p);
  }
  {
      struct zxwsf_a_Action_s* e;
      for (e = x->Action; e; e = (struct zxwsf_a_Action_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_Action(e, p);
  }
  {
      struct zxwsf_sbf_Framework_s* e;
      for (e = x->Framework; e; e = (struct zxwsf_sbf_Framework_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_sbf_Framework(e, p);
  }
  {
      struct zxwsf_b_Framework_s* e;
      for (e = x->b_Framework; e; e = (struct zxwsf_b_Framework_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_b_Framework(e, p);
  }
  {
      struct zxwsf_b_Sender_s* e;
      for (e = x->Sender; e; e = (struct zxwsf_b_Sender_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_b_Sender(e, p);
  }
  {
      struct zxwsf_b_CredentialsContext_s* e;
      for (e = x->CredentialsContext; e; e = (struct zxwsf_b_CredentialsContext_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_b_CredentialsContext(e, p);
  }
  {
      struct zxwsf_b_EndpointUpdate_s* e;
      for (e = x->EndpointUpdate; e; e = (struct zxwsf_b_EndpointUpdate_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_b_EndpointUpdate(e, p);
  }
  for (se = x->Timeout; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Timeout", sizeof("Timeout") - 1);
  {
      struct zxwsf_b_ProcessingContext_s* e;
      for (e = x->ProcessingContext; e; e = (struct zxwsf_b_ProcessingContext_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_b_ProcessingContext(e, p);
  }
  {
      struct zxwsf_b_ApplicationEPR_s* e;
      for (e = x->ApplicationEPR; e; e = (struct zxwsf_b_ApplicationEPR_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_b_ApplicationEPR(e, p);
  }
  {
      struct zxwsf_b_RedirectRequest_s* e;
      for (e = x->RedirectRequest; e; e = (struct zxwsf_b_RedirectRequest_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_b_RedirectRequest(e, p);
  }


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

/* FUNC(zxwsf_ENC_WO_dise_Header) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_dise_Header(struct zxwsf_dise_Header_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_dise_Header) */

struct zx_str_s* zxwsf_EASY_ENC_SO_dise_Header(struct zx_ctx* c, struct zxwsf_dise_Header_s* x )
{
  int len = zxwsf_LEN_dise_Header(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_dise_Header(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_dise_Header) */

struct zx_str_s* zxwsf_EASY_ENC_WO_dise_Header(struct zx_ctx* c, struct zxwsf_dise_Header_s* x )
{
  int len = zxwsf_LEN_dise_Header(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_dise_Header(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   dise_detail
#define EL_STRUCT zxwsf_dise_detail_s
#define EL_NS     dise
#define EL_TAG    detail

/* FUNC(zxwsf_LEN_dise_detail) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_dise_detail(struct zxwsf_dise_detail_s* x )
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

/* FUNC(zxwsf_ENC_SO_dise_detail) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_dise_detail(struct zxwsf_dise_detail_s* x, char* p )
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

/* FUNC(zxwsf_ENC_WO_dise_detail) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_dise_detail(struct zxwsf_dise_detail_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_dise_detail) */

struct zx_str_s* zxwsf_EASY_ENC_SO_dise_detail(struct zx_ctx* c, struct zxwsf_dise_detail_s* x )
{
  int len = zxwsf_LEN_dise_detail(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_dise_detail(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_dise_detail) */

struct zx_str_s* zxwsf_EASY_ENC_WO_dise_detail(struct zx_ctx* c, struct zxwsf_dise_detail_s* x )
{
  int len = zxwsf_LEN_dise_detail(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_dise_detail(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   e_Body
#define EL_STRUCT zxwsf_e_Body_s
#define EL_NS     e
#define EL_TAG    Body

/* FUNC(zxwsf_LEN_e_Body) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_e_Body(struct zxwsf_e_Body_s* x )
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
      struct zxwsf_di_Query_s* e;
      for (e = x->Query; e; e = (struct zxwsf_di_Query_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_Query(e);
  }
  {
      struct zxwsf_di_QueryResponse_s* e;
      for (e = x->QueryResponse; e; e = (struct zxwsf_di_QueryResponse_s*)e->gg.g.n)
	  len += zxwsf_LEN_di_QueryResponse(e);
  }
  {
      struct zxwsf_di12_Query_s* e;
      for (e = x->di12_Query; e; e = (struct zxwsf_di12_Query_s*)e->gg.g.n)
	  len += zxwsf_LEN_di12_Query(e);
  }
  {
      struct zxwsf_di12_QueryResponse_s* e;
      for (e = x->di12_QueryResponse; e; e = (struct zxwsf_di12_QueryResponse_s*)e->gg.g.n)
	  len += zxwsf_LEN_di12_QueryResponse(e);
  }
  {
      struct zxwsf_di12_Modify_s* e;
      for (e = x->Modify; e; e = (struct zxwsf_di12_Modify_s*)e->gg.g.n)
	  len += zxwsf_LEN_di12_Modify(e);
  }
  {
      struct zxwsf_di12_ModifyResponse_s* e;
      for (e = x->ModifyResponse; e; e = (struct zxwsf_di12_ModifyResponse_s*)e->gg.g.n)
	  len += zxwsf_LEN_di12_ModifyResponse(e);
  }
  {
      struct zxwsf_e_Fault_s* e;
      for (e = x->Fault; e; e = (struct zxwsf_e_Fault_s*)e->gg.g.n)
	  len += zxwsf_LEN_e_Fault(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_e_Body) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_e_Body(struct zxwsf_e_Body_s* x, char* p )
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
      struct zxwsf_di_Query_s* e;
      for (e = x->Query; e; e = (struct zxwsf_di_Query_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_Query(e, p);
  }
  {
      struct zxwsf_di_QueryResponse_s* e;
      for (e = x->QueryResponse; e; e = (struct zxwsf_di_QueryResponse_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di_QueryResponse(e, p);
  }
  {
      struct zxwsf_di12_Query_s* e;
      for (e = x->di12_Query; e; e = (struct zxwsf_di12_Query_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di12_Query(e, p);
  }
  {
      struct zxwsf_di12_QueryResponse_s* e;
      for (e = x->di12_QueryResponse; e; e = (struct zxwsf_di12_QueryResponse_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di12_QueryResponse(e, p);
  }
  {
      struct zxwsf_di12_Modify_s* e;
      for (e = x->Modify; e; e = (struct zxwsf_di12_Modify_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di12_Modify(e, p);
  }
  {
      struct zxwsf_di12_ModifyResponse_s* e;
      for (e = x->ModifyResponse; e; e = (struct zxwsf_di12_ModifyResponse_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di12_ModifyResponse(e, p);
  }
  {
      struct zxwsf_e_Fault_s* e;
      for (e = x->Fault; e; e = (struct zxwsf_e_Fault_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_e_Fault(e, p);
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

/* FUNC(zxwsf_ENC_WO_e_Body) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_e_Body(struct zxwsf_e_Body_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_e_Body) */

struct zx_str_s* zxwsf_EASY_ENC_SO_e_Body(struct zx_ctx* c, struct zxwsf_e_Body_s* x )
{
  int len = zxwsf_LEN_e_Body(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_e_Body(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_e_Body) */

struct zx_str_s* zxwsf_EASY_ENC_WO_e_Body(struct zx_ctx* c, struct zxwsf_e_Body_s* x )
{
  int len = zxwsf_LEN_e_Body(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_e_Body(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   e_Envelope
#define EL_STRUCT zxwsf_e_Envelope_s
#define EL_NS     e
#define EL_TAG    Envelope

/* FUNC(zxwsf_LEN_e_Envelope) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_e_Envelope(struct zxwsf_e_Envelope_s* x )
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
      struct zxwsf_e_Header_s* e;
      for (e = x->Header; e; e = (struct zxwsf_e_Header_s*)e->gg.g.n)
	  len += zxwsf_LEN_e_Header(e);
  }
  {
      struct zxwsf_e_Body_s* e;
      for (e = x->Body; e; e = (struct zxwsf_e_Body_s*)e->gg.g.n)
	  len += zxwsf_LEN_e_Body(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_e_Envelope) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_e_Envelope(struct zxwsf_e_Envelope_s* x, char* p )
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
      struct zxwsf_e_Header_s* e;
      for (e = x->Header; e; e = (struct zxwsf_e_Header_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_e_Header(e, p);
  }
  {
      struct zxwsf_e_Body_s* e;
      for (e = x->Body; e; e = (struct zxwsf_e_Body_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_e_Body(e, p);
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

/* FUNC(zxwsf_ENC_WO_e_Envelope) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_e_Envelope(struct zxwsf_e_Envelope_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_e_Envelope) */

struct zx_str_s* zxwsf_EASY_ENC_SO_e_Envelope(struct zx_ctx* c, struct zxwsf_e_Envelope_s* x )
{
  int len = zxwsf_LEN_e_Envelope(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_e_Envelope(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_e_Envelope) */

struct zx_str_s* zxwsf_EASY_ENC_WO_e_Envelope(struct zx_ctx* c, struct zxwsf_e_Envelope_s* x )
{
  int len = zxwsf_LEN_e_Envelope(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_e_Envelope(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   e_Fault
#define EL_STRUCT zxwsf_e_Fault_s
#define EL_NS     e
#define EL_TAG    Fault

/* FUNC(zxwsf_LEN_e_Fault) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_e_Fault(struct zxwsf_e_Fault_s* x )
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
    len += zxwsf_LEN_simple_elem(se, sizeof("faultcode") - 1);
  for (se = x->faultstring; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("faultstring") - 1);
  for (se = x->faultactor; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("faultactor") - 1);
  {
      struct zxwsf_e_detail_s* e;
      for (e = x->detail; e; e = (struct zxwsf_e_detail_s*)e->gg.g.n)
	  len += zxwsf_LEN_e_detail(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_e_Fault) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_e_Fault(struct zxwsf_e_Fault_s* x, char* p )
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
    p = zxwsf_ENC_SO_simple_elem(se, p, "faultcode", sizeof("faultcode") - 1);
  for (se = x->faultstring; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "faultstring", sizeof("faultstring") - 1);
  for (se = x->faultactor; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "faultactor", sizeof("faultactor") - 1);
  {
      struct zxwsf_e_detail_s* e;
      for (e = x->detail; e; e = (struct zxwsf_e_detail_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_e_detail(e, p);
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

/* FUNC(zxwsf_ENC_WO_e_Fault) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_e_Fault(struct zxwsf_e_Fault_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_e_Fault) */

struct zx_str_s* zxwsf_EASY_ENC_SO_e_Fault(struct zx_ctx* c, struct zxwsf_e_Fault_s* x )
{
  int len = zxwsf_LEN_e_Fault(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_e_Fault(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_e_Fault) */

struct zx_str_s* zxwsf_EASY_ENC_WO_e_Fault(struct zx_ctx* c, struct zxwsf_e_Fault_s* x )
{
  int len = zxwsf_LEN_e_Fault(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_e_Fault(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   e_Header
#define EL_STRUCT zxwsf_e_Header_s
#define EL_NS     e
#define EL_TAG    Header

/* FUNC(zxwsf_LEN_e_Header) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_e_Header(struct zxwsf_e_Header_s* x )
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


  {
      struct zxwsf_a_MessageID_s* e;
      for (e = x->MessageID; e; e = (struct zxwsf_a_MessageID_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_MessageID(e);
  }
  {
      struct zxwsf_a_RelatesTo_s* e;
      for (e = x->RelatesTo; e; e = (struct zxwsf_a_RelatesTo_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_RelatesTo(e);
  }
  {
      struct zxwsf_a_ReplyTo_s* e;
      for (e = x->ReplyTo; e; e = (struct zxwsf_a_ReplyTo_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_ReplyTo(e);
  }
  {
      struct zxwsf_a_From_s* e;
      for (e = x->From; e; e = (struct zxwsf_a_From_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_From(e);
  }
  {
      struct zxwsf_a_FaultTo_s* e;
      for (e = x->FaultTo; e; e = (struct zxwsf_a_FaultTo_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_FaultTo(e);
  }
  {
      struct zxwsf_a_To_s* e;
      for (e = x->To; e; e = (struct zxwsf_a_To_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_To(e);
  }
  {
      struct zxwsf_a_Action_s* e;
      for (e = x->Action; e; e = (struct zxwsf_a_Action_s*)e->gg.g.n)
	  len += zxwsf_LEN_a_Action(e);
  }
  {
      struct zxwsf_sbf_Framework_s* e;
      for (e = x->Framework; e; e = (struct zxwsf_sbf_Framework_s*)e->gg.g.n)
	  len += zxwsf_LEN_sbf_Framework(e);
  }
  {
      struct zxwsf_b_Framework_s* e;
      for (e = x->b_Framework; e; e = (struct zxwsf_b_Framework_s*)e->gg.g.n)
	  len += zxwsf_LEN_b_Framework(e);
  }
  {
      struct zxwsf_b_Sender_s* e;
      for (e = x->Sender; e; e = (struct zxwsf_b_Sender_s*)e->gg.g.n)
	  len += zxwsf_LEN_b_Sender(e);
  }
  {
      struct zxwsf_b_TargetIdentity_s* e;
      for (e = x->TargetIdentity; e; e = (struct zxwsf_b_TargetIdentity_s*)e->gg.g.n)
	  len += zxwsf_LEN_b_TargetIdentity(e);
  }
  {
      struct zxwsf_b_CredentialsContext_s* e;
      for (e = x->CredentialsContext; e; e = (struct zxwsf_b_CredentialsContext_s*)e->gg.g.n)
	  len += zxwsf_LEN_b_CredentialsContext(e);
  }
  {
      struct zxwsf_b_EndpointUpdate_s* e;
      for (e = x->EndpointUpdate; e; e = (struct zxwsf_b_EndpointUpdate_s*)e->gg.g.n)
	  len += zxwsf_LEN_b_EndpointUpdate(e);
  }
  for (se = x->Timeout; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Timeout") - 1);
  {
      struct zxwsf_b_ProcessingContext_s* e;
      for (e = x->ProcessingContext; e; e = (struct zxwsf_b_ProcessingContext_s*)e->gg.g.n)
	  len += zxwsf_LEN_b_ProcessingContext(e);
  }
  {
      struct zxwsf_b_Consent_s* e;
      for (e = x->Consent; e; e = (struct zxwsf_b_Consent_s*)e->gg.g.n)
	  len += zxwsf_LEN_b_Consent(e);
  }
  {
      struct zxwsf_b_UsageDirective_s* e;
      for (e = x->UsageDirective; e; e = (struct zxwsf_b_UsageDirective_s*)e->gg.g.n)
	  len += zxwsf_LEN_b_UsageDirective(e);
  }
  {
      struct zxwsf_b_ApplicationEPR_s* e;
      for (e = x->ApplicationEPR; e; e = (struct zxwsf_b_ApplicationEPR_s*)e->gg.g.n)
	  len += zxwsf_LEN_b_ApplicationEPR(e);
  }
  {
      struct zxwsf_b_UserInteraction_s* e;
      for (e = x->UserInteraction; e; e = (struct zxwsf_b_UserInteraction_s*)e->gg.g.n)
	  len += zxwsf_LEN_b_UserInteraction(e);
  }
  {
      struct zxwsf_b_RedirectRequest_s* e;
      for (e = x->RedirectRequest; e; e = (struct zxwsf_b_RedirectRequest_s*)e->gg.g.n)
	  len += zxwsf_LEN_b_RedirectRequest(e);
  }
  {
      struct zxwsf_b12_Correlation_s* e;
      for (e = x->Correlation; e; e = (struct zxwsf_b12_Correlation_s*)e->gg.g.n)
	  len += zxwsf_LEN_b12_Correlation(e);
  }
  {
      struct zxwsf_b12_Provider_s* e;
      for (e = x->Provider; e; e = (struct zxwsf_b12_Provider_s*)e->gg.g.n)
	  len += zxwsf_LEN_b12_Provider(e);
  }
  {
      struct zxwsf_b12_ProcessingContext_s* e;
      for (e = x->b12_ProcessingContext; e; e = (struct zxwsf_b12_ProcessingContext_s*)e->gg.g.n)
	  len += zxwsf_LEN_b12_ProcessingContext(e);
  }
  {
      struct zxwsf_b12_Consent_s* e;
      for (e = x->b12_Consent; e; e = (struct zxwsf_b12_Consent_s*)e->gg.g.n)
	  len += zxwsf_LEN_b12_Consent(e);
  }
  {
      struct zxwsf_b12_UsageDirective_s* e;
      for (e = x->b12_UsageDirective; e; e = (struct zxwsf_b12_UsageDirective_s*)e->gg.g.n)
	  len += zxwsf_LEN_b12_UsageDirective(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_e_Header) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_e_Header(struct zxwsf_e_Header_s* x, char* p )
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
  
  {
      struct zxwsf_a_MessageID_s* e;
      for (e = x->MessageID; e; e = (struct zxwsf_a_MessageID_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_MessageID(e, p);
  }
  {
      struct zxwsf_a_RelatesTo_s* e;
      for (e = x->RelatesTo; e; e = (struct zxwsf_a_RelatesTo_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_RelatesTo(e, p);
  }
  {
      struct zxwsf_a_ReplyTo_s* e;
      for (e = x->ReplyTo; e; e = (struct zxwsf_a_ReplyTo_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_ReplyTo(e, p);
  }
  {
      struct zxwsf_a_From_s* e;
      for (e = x->From; e; e = (struct zxwsf_a_From_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_From(e, p);
  }
  {
      struct zxwsf_a_FaultTo_s* e;
      for (e = x->FaultTo; e; e = (struct zxwsf_a_FaultTo_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_FaultTo(e, p);
  }
  {
      struct zxwsf_a_To_s* e;
      for (e = x->To; e; e = (struct zxwsf_a_To_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_To(e, p);
  }
  {
      struct zxwsf_a_Action_s* e;
      for (e = x->Action; e; e = (struct zxwsf_a_Action_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_a_Action(e, p);
  }
  {
      struct zxwsf_sbf_Framework_s* e;
      for (e = x->Framework; e; e = (struct zxwsf_sbf_Framework_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_sbf_Framework(e, p);
  }
  {
      struct zxwsf_b_Framework_s* e;
      for (e = x->b_Framework; e; e = (struct zxwsf_b_Framework_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_b_Framework(e, p);
  }
  {
      struct zxwsf_b_Sender_s* e;
      for (e = x->Sender; e; e = (struct zxwsf_b_Sender_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_b_Sender(e, p);
  }
  {
      struct zxwsf_b_TargetIdentity_s* e;
      for (e = x->TargetIdentity; e; e = (struct zxwsf_b_TargetIdentity_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_b_TargetIdentity(e, p);
  }
  {
      struct zxwsf_b_CredentialsContext_s* e;
      for (e = x->CredentialsContext; e; e = (struct zxwsf_b_CredentialsContext_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_b_CredentialsContext(e, p);
  }
  {
      struct zxwsf_b_EndpointUpdate_s* e;
      for (e = x->EndpointUpdate; e; e = (struct zxwsf_b_EndpointUpdate_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_b_EndpointUpdate(e, p);
  }
  for (se = x->Timeout; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Timeout", sizeof("Timeout") - 1);
  {
      struct zxwsf_b_ProcessingContext_s* e;
      for (e = x->ProcessingContext; e; e = (struct zxwsf_b_ProcessingContext_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_b_ProcessingContext(e, p);
  }
  {
      struct zxwsf_b_Consent_s* e;
      for (e = x->Consent; e; e = (struct zxwsf_b_Consent_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_b_Consent(e, p);
  }
  {
      struct zxwsf_b_UsageDirective_s* e;
      for (e = x->UsageDirective; e; e = (struct zxwsf_b_UsageDirective_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_b_UsageDirective(e, p);
  }
  {
      struct zxwsf_b_ApplicationEPR_s* e;
      for (e = x->ApplicationEPR; e; e = (struct zxwsf_b_ApplicationEPR_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_b_ApplicationEPR(e, p);
  }
  {
      struct zxwsf_b_UserInteraction_s* e;
      for (e = x->UserInteraction; e; e = (struct zxwsf_b_UserInteraction_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_b_UserInteraction(e, p);
  }
  {
      struct zxwsf_b_RedirectRequest_s* e;
      for (e = x->RedirectRequest; e; e = (struct zxwsf_b_RedirectRequest_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_b_RedirectRequest(e, p);
  }
  {
      struct zxwsf_b12_Correlation_s* e;
      for (e = x->Correlation; e; e = (struct zxwsf_b12_Correlation_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_b12_Correlation(e, p);
  }
  {
      struct zxwsf_b12_Provider_s* e;
      for (e = x->Provider; e; e = (struct zxwsf_b12_Provider_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_b12_Provider(e, p);
  }
  {
      struct zxwsf_b12_ProcessingContext_s* e;
      for (e = x->b12_ProcessingContext; e; e = (struct zxwsf_b12_ProcessingContext_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_b12_ProcessingContext(e, p);
  }
  {
      struct zxwsf_b12_Consent_s* e;
      for (e = x->b12_Consent; e; e = (struct zxwsf_b12_Consent_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_b12_Consent(e, p);
  }
  {
      struct zxwsf_b12_UsageDirective_s* e;
      for (e = x->b12_UsageDirective; e; e = (struct zxwsf_b12_UsageDirective_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_b12_UsageDirective(e, p);
  }


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

/* FUNC(zxwsf_ENC_WO_e_Header) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_e_Header(struct zxwsf_e_Header_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_e_Header) */

struct zx_str_s* zxwsf_EASY_ENC_SO_e_Header(struct zx_ctx* c, struct zxwsf_e_Header_s* x )
{
  int len = zxwsf_LEN_e_Header(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_e_Header(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_e_Header) */

struct zx_str_s* zxwsf_EASY_ENC_WO_e_Header(struct zx_ctx* c, struct zxwsf_e_Header_s* x )
{
  int len = zxwsf_LEN_e_Header(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_e_Header(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   e_detail
#define EL_STRUCT zxwsf_e_detail_s
#define EL_NS     e
#define EL_TAG    detail

/* FUNC(zxwsf_LEN_e_detail) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_e_detail(struct zxwsf_e_detail_s* x )
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

/* FUNC(zxwsf_ENC_SO_e_detail) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_e_detail(struct zxwsf_e_detail_s* x, char* p )
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

/* FUNC(zxwsf_ENC_WO_e_detail) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_e_detail(struct zxwsf_e_detail_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_e_detail) */

struct zx_str_s* zxwsf_EASY_ENC_SO_e_detail(struct zx_ctx* c, struct zxwsf_e_detail_s* x )
{
  int len = zxwsf_LEN_e_detail(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_e_detail(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_e_detail) */

struct zx_str_s* zxwsf_EASY_ENC_WO_e_detail(struct zx_ctx* c, struct zxwsf_e_detail_s* x )
{
  int len = zxwsf_LEN_e_detail(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_e_detail(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is12_Confirm
#define EL_STRUCT zxwsf_is12_Confirm_s
#define EL_NS     is12
#define EL_TAG    Confirm

/* FUNC(zxwsf_LEN_is12_Confirm) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is12_Confirm(struct zxwsf_is12_Confirm_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Confirm") - 1 + 1 + 2 + sizeof("Confirm") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->name, sizeof("name"));

  {
      struct zxwsf_is12_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is12_Help_s*)e->gg.g.n)
	  len += zxwsf_LEN_is12_Help(e);
  }
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Hint") - 1);
  for (se = x->Label; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Label") - 1);
  for (se = x->Value; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Value") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is12_Confirm) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is12_Confirm(struct zxwsf_is12_Confirm_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Confirm", sizeof("Confirm") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->name, "name", sizeof("name")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxwsf_is12_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is12_Help_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is12_Help(e, p);
  }
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Hint", sizeof("Hint") - 1);
  for (se = x->Label; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Label", sizeof("Label") - 1);
  for (se = x->Value; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Value", sizeof("Value") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Confirm", sizeof("Confirm") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_is12_Confirm) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is12_Confirm(struct zxwsf_is12_Confirm_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is12_Confirm) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is12_Confirm(struct zx_ctx* c, struct zxwsf_is12_Confirm_s* x )
{
  int len = zxwsf_LEN_is12_Confirm(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is12_Confirm(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is12_Confirm) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is12_Confirm(struct zx_ctx* c, struct zxwsf_is12_Confirm_s* x )
{
  int len = zxwsf_LEN_is12_Confirm(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is12_Confirm(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is12_EncryptedResourceID
#define EL_STRUCT zxwsf_is12_EncryptedResourceID_s
#define EL_NS     is12
#define EL_TAG    EncryptedResourceID

/* FUNC(zxwsf_LEN_is12_EncryptedResourceID) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is12_EncryptedResourceID(struct zxwsf_is12_EncryptedResourceID_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("EncryptedResourceID") - 1 + 1 + 2 + sizeof("EncryptedResourceID") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->EncryptedData; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("EncryptedData") - 1);
  for (se = x->EncryptedKey; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("EncryptedKey") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is12_EncryptedResourceID) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is12_EncryptedResourceID(struct zxwsf_is12_EncryptedResourceID_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EncryptedResourceID", sizeof("EncryptedResourceID") - 1);
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
  
  for (se = x->EncryptedData; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "EncryptedData", sizeof("EncryptedData") - 1);
  for (se = x->EncryptedKey; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "EncryptedKey", sizeof("EncryptedKey") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "EncryptedResourceID", sizeof("EncryptedResourceID") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_is12_EncryptedResourceID) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is12_EncryptedResourceID(struct zxwsf_is12_EncryptedResourceID_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is12_EncryptedResourceID) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_is12_EncryptedResourceID_s* x )
{
  int len = zxwsf_LEN_is12_EncryptedResourceID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is12_EncryptedResourceID(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is12_EncryptedResourceID) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_is12_EncryptedResourceID_s* x )
{
  int len = zxwsf_LEN_is12_EncryptedResourceID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is12_EncryptedResourceID(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is12_Extension
#define EL_STRUCT zxwsf_is12_Extension_s
#define EL_NS     is12
#define EL_TAG    Extension

/* FUNC(zxwsf_LEN_is12_Extension) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is12_Extension(struct zxwsf_is12_Extension_s* x )
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

/* FUNC(zxwsf_ENC_SO_is12_Extension) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is12_Extension(struct zxwsf_is12_Extension_s* x, char* p )
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

/* FUNC(zxwsf_ENC_WO_is12_Extension) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is12_Extension(struct zxwsf_is12_Extension_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is12_Extension) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is12_Extension(struct zx_ctx* c, struct zxwsf_is12_Extension_s* x )
{
  int len = zxwsf_LEN_is12_Extension(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is12_Extension(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is12_Extension) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is12_Extension(struct zx_ctx* c, struct zxwsf_is12_Extension_s* x )
{
  int len = zxwsf_LEN_is12_Extension(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is12_Extension(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is12_Help
#define EL_STRUCT zxwsf_is12_Help_s
#define EL_NS     is12
#define EL_TAG    Help

/* FUNC(zxwsf_LEN_is12_Help) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is12_Help(struct zxwsf_is12_Help_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Help") - 1 + 1 + 2 + sizeof("Help") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->label, sizeof("label"));
  len += zx_attr_len(x->link, sizeof("link"));
  len += zx_attr_len(x->moreLink, sizeof("moreLink"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is12_Help) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is12_Help(struct zxwsf_is12_Help_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Help", sizeof("Help") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->label, "label", sizeof("label")-1);
  p = zx_attr_enc(p, x->link, "link", sizeof("link")-1);
  p = zx_attr_enc(p, x->moreLink, "moreLink", sizeof("moreLink")-1);


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
  ZX_OUT_MEM(p, "Help", sizeof("Help") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_is12_Help) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is12_Help(struct zxwsf_is12_Help_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is12_Help) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is12_Help(struct zx_ctx* c, struct zxwsf_is12_Help_s* x )
{
  int len = zxwsf_LEN_is12_Help(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is12_Help(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is12_Help) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is12_Help(struct zx_ctx* c, struct zxwsf_is12_Help_s* x )
{
  int len = zxwsf_LEN_is12_Help(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is12_Help(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is12_Inquiry
#define EL_STRUCT zxwsf_is12_Inquiry_s
#define EL_NS     is12
#define EL_TAG    Inquiry

/* FUNC(zxwsf_LEN_is12_Inquiry) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is12_Inquiry(struct zxwsf_is12_Inquiry_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Inquiry") - 1 + 1 + 2 + sizeof("Inquiry") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->id, sizeof("id"));
  len += zx_attr_len(x->title, sizeof("title"));

  {
      struct zxwsf_is12_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is12_Help_s*)e->gg.g.n)
	  len += zxwsf_LEN_is12_Help(e);
  }
  {
      struct zxwsf_is12_Select_s* e;
      for (e = x->Select; e; e = (struct zxwsf_is12_Select_s*)e->gg.g.n)
	  len += zxwsf_LEN_is12_Select(e);
  }
  {
      struct zxwsf_is12_Confirm_s* e;
      for (e = x->Confirm; e; e = (struct zxwsf_is12_Confirm_s*)e->gg.g.n)
	  len += zxwsf_LEN_is12_Confirm(e);
  }
  {
      struct zxwsf_is12_Text_s* e;
      for (e = x->Text; e; e = (struct zxwsf_is12_Text_s*)e->gg.g.n)
	  len += zxwsf_LEN_is12_Text(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is12_Inquiry) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is12_Inquiry(struct zxwsf_is12_Inquiry_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Inquiry", sizeof("Inquiry") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->id, "id", sizeof("id")-1);
  p = zx_attr_enc(p, x->title, "title", sizeof("title")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxwsf_is12_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is12_Help_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is12_Help(e, p);
  }
  {
      struct zxwsf_is12_Select_s* e;
      for (e = x->Select; e; e = (struct zxwsf_is12_Select_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is12_Select(e, p);
  }
  {
      struct zxwsf_is12_Confirm_s* e;
      for (e = x->Confirm; e; e = (struct zxwsf_is12_Confirm_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is12_Confirm(e, p);
  }
  {
      struct zxwsf_is12_Text_s* e;
      for (e = x->Text; e; e = (struct zxwsf_is12_Text_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is12_Text(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Inquiry", sizeof("Inquiry") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_is12_Inquiry) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is12_Inquiry(struct zxwsf_is12_Inquiry_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is12_Inquiry) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is12_Inquiry(struct zx_ctx* c, struct zxwsf_is12_Inquiry_s* x )
{
  int len = zxwsf_LEN_is12_Inquiry(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is12_Inquiry(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is12_Inquiry) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is12_Inquiry(struct zx_ctx* c, struct zxwsf_is12_Inquiry_s* x )
{
  int len = zxwsf_LEN_is12_Inquiry(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is12_Inquiry(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is12_InteractionRequest
#define EL_STRUCT zxwsf_is12_InteractionRequest_s
#define EL_NS     is12
#define EL_TAG    InteractionRequest

/* FUNC(zxwsf_LEN_is12_InteractionRequest) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is12_InteractionRequest(struct zxwsf_is12_InteractionRequest_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("InteractionRequest") - 1 + 1 + 2 + sizeof("InteractionRequest") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->id, sizeof("id"));
  len += zx_attr_len(x->language, sizeof("language"));
  len += zx_attr_len(x->maxInteractTime, sizeof("maxInteractTime"));
  len += zx_attr_len(x->signed_is_c_keyword, sizeof("signed"));

  {
      struct zxwsf_is12_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zxwsf_is12_Inquiry_s*)e->gg.g.n)
	  len += zxwsf_LEN_is12_Inquiry(e);
  }
  for (se = x->KeyInfo; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("KeyInfo") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is12_InteractionRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is12_InteractionRequest(struct zxwsf_is12_InteractionRequest_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "InteractionRequest", sizeof("InteractionRequest") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->id, "id", sizeof("id")-1);
  p = zx_attr_enc(p, x->language, "language", sizeof("language")-1);
  p = zx_attr_enc(p, x->maxInteractTime, "maxInteractTime", sizeof("maxInteractTime")-1);
  p = zx_attr_enc(p, x->signed_is_c_keyword, "signed", sizeof("signed")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxwsf_is12_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zxwsf_is12_Inquiry_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is12_Inquiry(e, p);
  }
  for (se = x->KeyInfo; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "KeyInfo", sizeof("KeyInfo") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "InteractionRequest", sizeof("InteractionRequest") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_is12_InteractionRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is12_InteractionRequest(struct zxwsf_is12_InteractionRequest_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is12_InteractionRequest) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is12_InteractionRequest(struct zx_ctx* c, struct zxwsf_is12_InteractionRequest_s* x )
{
  int len = zxwsf_LEN_is12_InteractionRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is12_InteractionRequest(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is12_InteractionRequest) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is12_InteractionRequest(struct zx_ctx* c, struct zxwsf_is12_InteractionRequest_s* x )
{
  int len = zxwsf_LEN_is12_InteractionRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is12_InteractionRequest(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is12_InteractionResponse
#define EL_STRUCT zxwsf_is12_InteractionResponse_s
#define EL_NS     is12
#define EL_TAG    InteractionResponse

/* FUNC(zxwsf_LEN_is12_InteractionResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is12_InteractionResponse(struct zxwsf_is12_InteractionResponse_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("InteractionResponse") - 1 + 1 + 2 + sizeof("InteractionResponse") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_is12_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_is12_Status_s*)e->gg.g.n)
	  len += zxwsf_LEN_is12_Status(e);
  }
  {
      struct zxwsf_is12_InteractionStatement_s* e;
      for (e = x->InteractionStatement; e; e = (struct zxwsf_is12_InteractionStatement_s*)e->gg.g.n)
	  len += zxwsf_LEN_is12_InteractionStatement(e);
  }
  {
      struct zxwsf_is12_Parameter_s* e;
      for (e = x->Parameter; e; e = (struct zxwsf_is12_Parameter_s*)e->gg.g.n)
	  len += zxwsf_LEN_is12_Parameter(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is12_InteractionResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is12_InteractionResponse(struct zxwsf_is12_InteractionResponse_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "InteractionResponse", sizeof("InteractionResponse") - 1);
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
      struct zxwsf_is12_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_is12_Status_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is12_Status(e, p);
  }
  {
      struct zxwsf_is12_InteractionStatement_s* e;
      for (e = x->InteractionStatement; e; e = (struct zxwsf_is12_InteractionStatement_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is12_InteractionStatement(e, p);
  }
  {
      struct zxwsf_is12_Parameter_s* e;
      for (e = x->Parameter; e; e = (struct zxwsf_is12_Parameter_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is12_Parameter(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "InteractionResponse", sizeof("InteractionResponse") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_is12_InteractionResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is12_InteractionResponse(struct zxwsf_is12_InteractionResponse_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is12_InteractionResponse) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is12_InteractionResponse(struct zx_ctx* c, struct zxwsf_is12_InteractionResponse_s* x )
{
  int len = zxwsf_LEN_is12_InteractionResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is12_InteractionResponse(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is12_InteractionResponse) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is12_InteractionResponse(struct zx_ctx* c, struct zxwsf_is12_InteractionResponse_s* x )
{
  int len = zxwsf_LEN_is12_InteractionResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is12_InteractionResponse(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is12_InteractionService
#define EL_STRUCT zxwsf_is12_InteractionService_s
#define EL_NS     is12
#define EL_TAG    InteractionService

/* FUNC(zxwsf_LEN_is12_InteractionService) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is12_InteractionService(struct zxwsf_is12_InteractionService_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("InteractionService") - 1 + 1 + 2 + sizeof("InteractionService") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->entryID, sizeof("entryID"));

  {
      struct zxwsf_di12_ServiceInstance_s* e;
      for (e = x->ServiceInstance; e; e = (struct zxwsf_di12_ServiceInstance_s*)e->gg.g.n)
	  len += zxwsf_LEN_di12_ServiceInstance(e);
  }
  {
      struct zxwsf_di12_Options_s* e;
      for (e = x->Options; e; e = (struct zxwsf_di12_Options_s*)e->gg.g.n)
	  len += zxwsf_LEN_di12_Options(e);
  }
  for (se = x->Abstract; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Abstract") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is12_InteractionService) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is12_InteractionService(struct zxwsf_is12_InteractionService_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "InteractionService", sizeof("InteractionService") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->entryID, "entryID", sizeof("entryID")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxwsf_di12_ServiceInstance_s* e;
      for (e = x->ServiceInstance; e; e = (struct zxwsf_di12_ServiceInstance_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di12_ServiceInstance(e, p);
  }
  {
      struct zxwsf_di12_Options_s* e;
      for (e = x->Options; e; e = (struct zxwsf_di12_Options_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_di12_Options(e, p);
  }
  for (se = x->Abstract; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Abstract", sizeof("Abstract") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "InteractionService", sizeof("InteractionService") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_is12_InteractionService) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is12_InteractionService(struct zxwsf_is12_InteractionService_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is12_InteractionService) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is12_InteractionService(struct zx_ctx* c, struct zxwsf_is12_InteractionService_s* x )
{
  int len = zxwsf_LEN_is12_InteractionService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is12_InteractionService(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is12_InteractionService) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is12_InteractionService(struct zx_ctx* c, struct zxwsf_is12_InteractionService_s* x )
{
  int len = zxwsf_LEN_is12_InteractionService(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is12_InteractionService(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is12_InteractionStatement
#define EL_STRUCT zxwsf_is12_InteractionStatement_s
#define EL_NS     is12
#define EL_TAG    InteractionStatement

/* FUNC(zxwsf_LEN_is12_InteractionStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is12_InteractionStatement(struct zxwsf_is12_InteractionStatement_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("InteractionStatement") - 1 + 1 + 2 + sizeof("InteractionStatement") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_is12_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zxwsf_is12_Inquiry_s*)e->gg.g.n)
	  len += zxwsf_LEN_is12_Inquiry(e);
  }
  for (se = x->Signature; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Signature") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is12_InteractionStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is12_InteractionStatement(struct zxwsf_is12_InteractionStatement_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "InteractionStatement", sizeof("InteractionStatement") - 1);
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
      struct zxwsf_is12_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zxwsf_is12_Inquiry_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is12_Inquiry(e, p);
  }
  for (se = x->Signature; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Signature", sizeof("Signature") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "InteractionStatement", sizeof("InteractionStatement") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_is12_InteractionStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is12_InteractionStatement(struct zxwsf_is12_InteractionStatement_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is12_InteractionStatement) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is12_InteractionStatement(struct zx_ctx* c, struct zxwsf_is12_InteractionStatement_s* x )
{
  int len = zxwsf_LEN_is12_InteractionStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is12_InteractionStatement(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is12_InteractionStatement) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is12_InteractionStatement(struct zx_ctx* c, struct zxwsf_is12_InteractionStatement_s* x )
{
  int len = zxwsf_LEN_is12_InteractionStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is12_InteractionStatement(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is12_Item
#define EL_STRUCT zxwsf_is12_Item_s
#define EL_NS     is12
#define EL_TAG    Item

/* FUNC(zxwsf_LEN_is12_Item) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is12_Item(struct zxwsf_is12_Item_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Item") - 1 + 1 + 2 + sizeof("Item") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->label, sizeof("label"));
  len += zx_attr_len(x->value, sizeof("value"));

  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Hint") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is12_Item) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is12_Item(struct zxwsf_is12_Item_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Item", sizeof("Item") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->label, "label", sizeof("label")-1);
  p = zx_attr_enc(p, x->value, "value", sizeof("value")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Hint", sizeof("Hint") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Item", sizeof("Item") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_is12_Item) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is12_Item(struct zxwsf_is12_Item_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is12_Item) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is12_Item(struct zx_ctx* c, struct zxwsf_is12_Item_s* x )
{
  int len = zxwsf_LEN_is12_Item(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is12_Item(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is12_Item) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is12_Item(struct zx_ctx* c, struct zxwsf_is12_Item_s* x )
{
  int len = zxwsf_LEN_is12_Item(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is12_Item(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is12_Parameter
#define EL_STRUCT zxwsf_is12_Parameter_s
#define EL_NS     is12
#define EL_TAG    Parameter

/* FUNC(zxwsf_LEN_is12_Parameter) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is12_Parameter(struct zxwsf_is12_Parameter_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Parameter") - 1 + 1 + 2 + sizeof("Parameter") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->name, sizeof("name"));
  len += zx_attr_len(x->value, sizeof("value"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is12_Parameter) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is12_Parameter(struct zxwsf_is12_Parameter_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Parameter", sizeof("Parameter") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->name, "name", sizeof("name")-1);
  p = zx_attr_enc(p, x->value, "value", sizeof("value")-1);


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
  ZX_OUT_MEM(p, "Parameter", sizeof("Parameter") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_is12_Parameter) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is12_Parameter(struct zxwsf_is12_Parameter_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is12_Parameter) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is12_Parameter(struct zx_ctx* c, struct zxwsf_is12_Parameter_s* x )
{
  int len = zxwsf_LEN_is12_Parameter(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is12_Parameter(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is12_Parameter) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is12_Parameter(struct zx_ctx* c, struct zxwsf_is12_Parameter_s* x )
{
  int len = zxwsf_LEN_is12_Parameter(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is12_Parameter(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is12_RedirectRequest
#define EL_STRUCT zxwsf_is12_RedirectRequest_s
#define EL_NS     is12
#define EL_TAG    RedirectRequest

/* FUNC(zxwsf_LEN_is12_RedirectRequest) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is12_RedirectRequest(struct zxwsf_is12_RedirectRequest_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("RedirectRequest") - 1 + 1 + 2 + sizeof("RedirectRequest") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->redirectURL, sizeof("redirectURL"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is12_RedirectRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is12_RedirectRequest(struct zxwsf_is12_RedirectRequest_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "RedirectRequest", sizeof("RedirectRequest") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->redirectURL, "redirectURL", sizeof("redirectURL")-1);


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
  ZX_OUT_MEM(p, "RedirectRequest", sizeof("RedirectRequest") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_is12_RedirectRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is12_RedirectRequest(struct zxwsf_is12_RedirectRequest_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is12_RedirectRequest) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is12_RedirectRequest(struct zx_ctx* c, struct zxwsf_is12_RedirectRequest_s* x )
{
  int len = zxwsf_LEN_is12_RedirectRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is12_RedirectRequest(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is12_RedirectRequest) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is12_RedirectRequest(struct zx_ctx* c, struct zxwsf_is12_RedirectRequest_s* x )
{
  int len = zxwsf_LEN_is12_RedirectRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is12_RedirectRequest(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is12_ResourceID
#define EL_STRUCT zxwsf_is12_ResourceID_s
#define EL_NS     is12
#define EL_TAG    ResourceID

/* FUNC(zxwsf_LEN_is12_ResourceID) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is12_ResourceID(struct zxwsf_is12_ResourceID_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ResourceID") - 1 + 1 + 2 + sizeof("ResourceID") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->id, sizeof("id"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is12_ResourceID) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is12_ResourceID(struct zxwsf_is12_ResourceID_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ResourceID", sizeof("ResourceID") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->id, "id", sizeof("id")-1);


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
  ZX_OUT_MEM(p, "ResourceID", sizeof("ResourceID") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_is12_ResourceID) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is12_ResourceID(struct zxwsf_is12_ResourceID_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is12_ResourceID) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is12_ResourceID(struct zx_ctx* c, struct zxwsf_is12_ResourceID_s* x )
{
  int len = zxwsf_LEN_is12_ResourceID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is12_ResourceID(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is12_ResourceID) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is12_ResourceID(struct zx_ctx* c, struct zxwsf_is12_ResourceID_s* x )
{
  int len = zxwsf_LEN_is12_ResourceID(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is12_ResourceID(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is12_Select
#define EL_STRUCT zxwsf_is12_Select_s
#define EL_NS     is12
#define EL_TAG    Select

/* FUNC(zxwsf_LEN_is12_Select) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is12_Select(struct zxwsf_is12_Select_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Select") - 1 + 1 + 2 + sizeof("Select") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->name, sizeof("name"));
  len += zx_attr_len(x->multiple, sizeof("multiple"));

  {
      struct zxwsf_is12_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is12_Help_s*)e->gg.g.n)
	  len += zxwsf_LEN_is12_Help(e);
  }
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Hint") - 1);
  for (se = x->Label; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Label") - 1);
  for (se = x->Value; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Value") - 1);
  {
      struct zxwsf_is12_Item_s* e;
      for (e = x->Item; e; e = (struct zxwsf_is12_Item_s*)e->gg.g.n)
	  len += zxwsf_LEN_is12_Item(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is12_Select) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is12_Select(struct zxwsf_is12_Select_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Select", sizeof("Select") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->name, "name", sizeof("name")-1);
  p = zx_attr_enc(p, x->multiple, "multiple", sizeof("multiple")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxwsf_is12_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is12_Help_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is12_Help(e, p);
  }
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Hint", sizeof("Hint") - 1);
  for (se = x->Label; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Label", sizeof("Label") - 1);
  for (se = x->Value; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Value", sizeof("Value") - 1);
  {
      struct zxwsf_is12_Item_s* e;
      for (e = x->Item; e; e = (struct zxwsf_is12_Item_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is12_Item(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Select", sizeof("Select") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_is12_Select) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is12_Select(struct zxwsf_is12_Select_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is12_Select) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is12_Select(struct zx_ctx* c, struct zxwsf_is12_Select_s* x )
{
  int len = zxwsf_LEN_is12_Select(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is12_Select(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is12_Select) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is12_Select(struct zx_ctx* c, struct zxwsf_is12_Select_s* x )
{
  int len = zxwsf_LEN_is12_Select(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is12_Select(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is12_Status
#define EL_STRUCT zxwsf_is12_Status_s
#define EL_NS     is12
#define EL_TAG    Status

/* FUNC(zxwsf_LEN_is12_Status) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is12_Status(struct zxwsf_is12_Status_s* x )
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

  len += zx_attr_len(x->code, sizeof("code"));
  len += zx_attr_len(x->ref, sizeof("ref"));
  len += zx_attr_len(x->comment, sizeof("comment"));

  {
      struct zxwsf_is12_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_is12_Status_s*)e->gg.g.n)
	  len += zxwsf_LEN_is12_Status(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is12_Status) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is12_Status(struct zxwsf_is12_Status_s* x, char* p )
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

  p = zx_attr_enc(p, x->code, "code", sizeof("code")-1);
  p = zx_attr_enc(p, x->ref, "ref", sizeof("ref")-1);
  p = zx_attr_enc(p, x->comment, "comment", sizeof("comment")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxwsf_is12_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_is12_Status_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is12_Status(e, p);
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

/* FUNC(zxwsf_ENC_WO_is12_Status) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is12_Status(struct zxwsf_is12_Status_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is12_Status) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is12_Status(struct zx_ctx* c, struct zxwsf_is12_Status_s* x )
{
  int len = zxwsf_LEN_is12_Status(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is12_Status(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is12_Status) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is12_Status(struct zx_ctx* c, struct zxwsf_is12_Status_s* x )
{
  int len = zxwsf_LEN_is12_Status(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is12_Status(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is12_Text
#define EL_STRUCT zxwsf_is12_Text_s
#define EL_NS     is12
#define EL_TAG    Text

/* FUNC(zxwsf_LEN_is12_Text) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is12_Text(struct zxwsf_is12_Text_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Text") - 1 + 1 + 2 + sizeof("Text") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->name, sizeof("name"));
  len += zx_attr_len(x->minChars, sizeof("minChars"));
  len += zx_attr_len(x->maxChars, sizeof("maxChars"));
  len += zx_attr_len(x->format, sizeof("format"));

  {
      struct zxwsf_is12_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is12_Help_s*)e->gg.g.n)
	  len += zxwsf_LEN_is12_Help(e);
  }
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Hint") - 1);
  for (se = x->Label; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Label") - 1);
  for (se = x->Value; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Value") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is12_Text) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is12_Text(struct zxwsf_is12_Text_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Text", sizeof("Text") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->name, "name", sizeof("name")-1);
  p = zx_attr_enc(p, x->minChars, "minChars", sizeof("minChars")-1);
  p = zx_attr_enc(p, x->maxChars, "maxChars", sizeof("maxChars")-1);
  p = zx_attr_enc(p, x->format, "format", sizeof("format")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxwsf_is12_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is12_Help_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is12_Help(e, p);
  }
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Hint", sizeof("Hint") - 1);
  for (se = x->Label; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Label", sizeof("Label") - 1);
  for (se = x->Value; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Value", sizeof("Value") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Text", sizeof("Text") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_is12_Text) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is12_Text(struct zxwsf_is12_Text_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is12_Text) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is12_Text(struct zx_ctx* c, struct zxwsf_is12_Text_s* x )
{
  int len = zxwsf_LEN_is12_Text(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is12_Text(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is12_Text) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is12_Text(struct zx_ctx* c, struct zxwsf_is12_Text_s* x )
{
  int len = zxwsf_LEN_is12_Text(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is12_Text(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is12_UserInteraction
#define EL_STRUCT zxwsf_is12_UserInteraction_s
#define EL_NS     is12
#define EL_TAG    UserInteraction

/* FUNC(zxwsf_LEN_is12_UserInteraction) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is12_UserInteraction(struct zxwsf_is12_UserInteraction_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("UserInteraction") - 1 + 1 + 2 + sizeof("UserInteraction") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->id, sizeof("id"));
  len += zx_attr_len(x->interact, sizeof("interact"));
  len += zx_attr_len(x->language, sizeof("language"));
  len += zx_attr_len(x->redirect, sizeof("redirect"));
  len += zx_attr_len(x->maxInteractTime, sizeof("maxInteractTime"));
  len += zx_attr_len(x->actor, sizeof("actor"));
  len += zx_attr_len(x->mustUnderstand, sizeof("mustUnderstand"));

  {
      struct zxwsf_is12_InteractionService_s* e;
      for (e = x->InteractionService; e; e = (struct zxwsf_is12_InteractionService_s*)e->gg.g.n)
	  len += zxwsf_LEN_is12_InteractionService(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is12_UserInteraction) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is12_UserInteraction(struct zxwsf_is12_UserInteraction_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "UserInteraction", sizeof("UserInteraction") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->id, "id", sizeof("id")-1);
  p = zx_attr_enc(p, x->interact, "interact", sizeof("interact")-1);
  p = zx_attr_enc(p, x->language, "language", sizeof("language")-1);
  p = zx_attr_enc(p, x->redirect, "redirect", sizeof("redirect")-1);
  p = zx_attr_enc(p, x->maxInteractTime, "maxInteractTime", sizeof("maxInteractTime")-1);
  p = zx_attr_enc(p, x->actor, "actor", sizeof("actor")-1);
  p = zx_attr_enc(p, x->mustUnderstand, "mustUnderstand", sizeof("mustUnderstand")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxwsf_is12_InteractionService_s* e;
      for (e = x->InteractionService; e; e = (struct zxwsf_is12_InteractionService_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is12_InteractionService(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "UserInteraction", sizeof("UserInteraction") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_is12_UserInteraction) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is12_UserInteraction(struct zxwsf_is12_UserInteraction_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is12_UserInteraction) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is12_UserInteraction(struct zx_ctx* c, struct zxwsf_is12_UserInteraction_s* x )
{
  int len = zxwsf_LEN_is12_UserInteraction(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is12_UserInteraction(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is12_UserInteraction) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is12_UserInteraction(struct zx_ctx* c, struct zxwsf_is12_UserInteraction_s* x )
{
  int len = zxwsf_LEN_is12_UserInteraction(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is12_UserInteraction(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is_Confirm
#define EL_STRUCT zxwsf_is_Confirm_s
#define EL_NS     is
#define EL_TAG    Confirm

/* FUNC(zxwsf_LEN_is_Confirm) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is_Confirm(struct zxwsf_is_Confirm_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Confirm") - 1 + 1 + 2 + sizeof("Confirm") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->name, sizeof("name"));

  {
      struct zxwsf_is_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is_Help_s*)e->gg.g.n)
	  len += zxwsf_LEN_is_Help(e);
  }
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Hint") - 1);
  for (se = x->Label; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Label") - 1);
  for (se = x->Value; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Value") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is_Confirm) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is_Confirm(struct zxwsf_is_Confirm_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Confirm", sizeof("Confirm") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->name, "name", sizeof("name")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxwsf_is_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is_Help_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is_Help(e, p);
  }
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Hint", sizeof("Hint") - 1);
  for (se = x->Label; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Label", sizeof("Label") - 1);
  for (se = x->Value; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Value", sizeof("Value") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Confirm", sizeof("Confirm") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_is_Confirm) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is_Confirm(struct zxwsf_is_Confirm_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is_Confirm) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is_Confirm(struct zx_ctx* c, struct zxwsf_is_Confirm_s* x )
{
  int len = zxwsf_LEN_is_Confirm(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is_Confirm(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is_Confirm) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is_Confirm(struct zx_ctx* c, struct zxwsf_is_Confirm_s* x )
{
  int len = zxwsf_LEN_is_Confirm(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is_Confirm(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is_Help
#define EL_STRUCT zxwsf_is_Help_s
#define EL_NS     is
#define EL_TAG    Help

/* FUNC(zxwsf_LEN_is_Help) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is_Help(struct zxwsf_is_Help_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Help") - 1 + 1 + 2 + sizeof("Help") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->label, sizeof("label"));
  len += zx_attr_len(x->link, sizeof("link"));
  len += zx_attr_len(x->moreLink, sizeof("moreLink"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is_Help) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is_Help(struct zxwsf_is_Help_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Help", sizeof("Help") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->label, "label", sizeof("label")-1);
  p = zx_attr_enc(p, x->link, "link", sizeof("link")-1);
  p = zx_attr_enc(p, x->moreLink, "moreLink", sizeof("moreLink")-1);


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
  ZX_OUT_MEM(p, "Help", sizeof("Help") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_is_Help) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is_Help(struct zxwsf_is_Help_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is_Help) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is_Help(struct zx_ctx* c, struct zxwsf_is_Help_s* x )
{
  int len = zxwsf_LEN_is_Help(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is_Help(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is_Help) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is_Help(struct zx_ctx* c, struct zxwsf_is_Help_s* x )
{
  int len = zxwsf_LEN_is_Help(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is_Help(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is_Inquiry
#define EL_STRUCT zxwsf_is_Inquiry_s
#define EL_NS     is
#define EL_TAG    Inquiry

/* FUNC(zxwsf_LEN_is_Inquiry) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is_Inquiry(struct zxwsf_is_Inquiry_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Inquiry") - 1 + 1 + 2 + sizeof("Inquiry") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->id, sizeof("id"));
  len += zx_attr_len(x->title, sizeof("title"));

  {
      struct zxwsf_is_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is_Help_s*)e->gg.g.n)
	  len += zxwsf_LEN_is_Help(e);
  }
  {
      struct zxwsf_is_Select_s* e;
      for (e = x->Select; e; e = (struct zxwsf_is_Select_s*)e->gg.g.n)
	  len += zxwsf_LEN_is_Select(e);
  }
  {
      struct zxwsf_is_Confirm_s* e;
      for (e = x->Confirm; e; e = (struct zxwsf_is_Confirm_s*)e->gg.g.n)
	  len += zxwsf_LEN_is_Confirm(e);
  }
  {
      struct zxwsf_is_Text_s* e;
      for (e = x->Text; e; e = (struct zxwsf_is_Text_s*)e->gg.g.n)
	  len += zxwsf_LEN_is_Text(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is_Inquiry) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is_Inquiry(struct zxwsf_is_Inquiry_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Inquiry", sizeof("Inquiry") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->id, "id", sizeof("id")-1);
  p = zx_attr_enc(p, x->title, "title", sizeof("title")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxwsf_is_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is_Help_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is_Help(e, p);
  }
  {
      struct zxwsf_is_Select_s* e;
      for (e = x->Select; e; e = (struct zxwsf_is_Select_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is_Select(e, p);
  }
  {
      struct zxwsf_is_Confirm_s* e;
      for (e = x->Confirm; e; e = (struct zxwsf_is_Confirm_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is_Confirm(e, p);
  }
  {
      struct zxwsf_is_Text_s* e;
      for (e = x->Text; e; e = (struct zxwsf_is_Text_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is_Text(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Inquiry", sizeof("Inquiry") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_is_Inquiry) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is_Inquiry(struct zxwsf_is_Inquiry_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is_Inquiry) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is_Inquiry(struct zx_ctx* c, struct zxwsf_is_Inquiry_s* x )
{
  int len = zxwsf_LEN_is_Inquiry(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is_Inquiry(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is_Inquiry) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is_Inquiry(struct zx_ctx* c, struct zxwsf_is_Inquiry_s* x )
{
  int len = zxwsf_LEN_is_Inquiry(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is_Inquiry(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is_InteractionRequest
#define EL_STRUCT zxwsf_is_InteractionRequest_s
#define EL_NS     is
#define EL_TAG    InteractionRequest

/* FUNC(zxwsf_LEN_is_InteractionRequest) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is_InteractionRequest(struct zxwsf_is_InteractionRequest_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("InteractionRequest") - 1 + 1 + 2 + sizeof("InteractionRequest") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->id, sizeof("id"));
  len += zx_attr_len(x->language, sizeof("language"));
  len += zx_attr_len(x->maxInteractTime, sizeof("maxInteractTime"));
  len += zx_attr_len(x->signed_is_c_keyword, sizeof("signed"));

  {
      struct zxwsf_is_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zxwsf_is_Inquiry_s*)e->gg.g.n)
	  len += zxwsf_LEN_is_Inquiry(e);
  }
  for (se = x->KeyInfo; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("KeyInfo") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is_InteractionRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is_InteractionRequest(struct zxwsf_is_InteractionRequest_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "InteractionRequest", sizeof("InteractionRequest") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->id, "id", sizeof("id")-1);
  p = zx_attr_enc(p, x->language, "language", sizeof("language")-1);
  p = zx_attr_enc(p, x->maxInteractTime, "maxInteractTime", sizeof("maxInteractTime")-1);
  p = zx_attr_enc(p, x->signed_is_c_keyword, "signed", sizeof("signed")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxwsf_is_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zxwsf_is_Inquiry_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is_Inquiry(e, p);
  }
  for (se = x->KeyInfo; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "KeyInfo", sizeof("KeyInfo") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "InteractionRequest", sizeof("InteractionRequest") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_is_InteractionRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is_InteractionRequest(struct zxwsf_is_InteractionRequest_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is_InteractionRequest) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is_InteractionRequest(struct zx_ctx* c, struct zxwsf_is_InteractionRequest_s* x )
{
  int len = zxwsf_LEN_is_InteractionRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is_InteractionRequest(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is_InteractionRequest) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is_InteractionRequest(struct zx_ctx* c, struct zxwsf_is_InteractionRequest_s* x )
{
  int len = zxwsf_LEN_is_InteractionRequest(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is_InteractionRequest(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is_InteractionResponse
#define EL_STRUCT zxwsf_is_InteractionResponse_s
#define EL_NS     is
#define EL_TAG    InteractionResponse

/* FUNC(zxwsf_LEN_is_InteractionResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is_InteractionResponse(struct zxwsf_is_InteractionResponse_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("InteractionResponse") - 1 + 1 + 2 + sizeof("InteractionResponse") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  len += zxwsf_LEN_lu_Status(e);
  }
  {
      struct zxwsf_is_InteractionStatement_s* e;
      for (e = x->InteractionStatement; e; e = (struct zxwsf_is_InteractionStatement_s*)e->gg.g.n)
	  len += zxwsf_LEN_is_InteractionStatement(e);
  }
  {
      struct zxwsf_is_Parameter_s* e;
      for (e = x->Parameter; e; e = (struct zxwsf_is_Parameter_s*)e->gg.g.n)
	  len += zxwsf_LEN_is_Parameter(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is_InteractionResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is_InteractionResponse(struct zxwsf_is_InteractionResponse_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "InteractionResponse", sizeof("InteractionResponse") - 1);
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
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_lu_Status(e, p);
  }
  {
      struct zxwsf_is_InteractionStatement_s* e;
      for (e = x->InteractionStatement; e; e = (struct zxwsf_is_InteractionStatement_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is_InteractionStatement(e, p);
  }
  {
      struct zxwsf_is_Parameter_s* e;
      for (e = x->Parameter; e; e = (struct zxwsf_is_Parameter_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is_Parameter(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "InteractionResponse", sizeof("InteractionResponse") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_is_InteractionResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is_InteractionResponse(struct zxwsf_is_InteractionResponse_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is_InteractionResponse) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is_InteractionResponse(struct zx_ctx* c, struct zxwsf_is_InteractionResponse_s* x )
{
  int len = zxwsf_LEN_is_InteractionResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is_InteractionResponse(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is_InteractionResponse) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is_InteractionResponse(struct zx_ctx* c, struct zxwsf_is_InteractionResponse_s* x )
{
  int len = zxwsf_LEN_is_InteractionResponse(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is_InteractionResponse(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is_InteractionStatement
#define EL_STRUCT zxwsf_is_InteractionStatement_s
#define EL_NS     is
#define EL_TAG    InteractionStatement

/* FUNC(zxwsf_LEN_is_InteractionStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is_InteractionStatement(struct zxwsf_is_InteractionStatement_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("InteractionStatement") - 1 + 1 + 2 + sizeof("InteractionStatement") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_is_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zxwsf_is_Inquiry_s*)e->gg.g.n)
	  len += zxwsf_LEN_is_Inquiry(e);
  }
  for (se = x->Signature; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Signature") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is_InteractionStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is_InteractionStatement(struct zxwsf_is_InteractionStatement_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "InteractionStatement", sizeof("InteractionStatement") - 1);
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
      struct zxwsf_is_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zxwsf_is_Inquiry_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is_Inquiry(e, p);
  }
  for (se = x->Signature; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Signature", sizeof("Signature") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "InteractionStatement", sizeof("InteractionStatement") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_is_InteractionStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is_InteractionStatement(struct zxwsf_is_InteractionStatement_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is_InteractionStatement) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is_InteractionStatement(struct zx_ctx* c, struct zxwsf_is_InteractionStatement_s* x )
{
  int len = zxwsf_LEN_is_InteractionStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is_InteractionStatement(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is_InteractionStatement) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is_InteractionStatement(struct zx_ctx* c, struct zxwsf_is_InteractionStatement_s* x )
{
  int len = zxwsf_LEN_is_InteractionStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is_InteractionStatement(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is_Item
#define EL_STRUCT zxwsf_is_Item_s
#define EL_NS     is
#define EL_TAG    Item

/* FUNC(zxwsf_LEN_is_Item) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is_Item(struct zxwsf_is_Item_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Item") - 1 + 1 + 2 + sizeof("Item") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->label, sizeof("label"));
  len += zx_attr_len(x->value, sizeof("value"));

  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Hint") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is_Item) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is_Item(struct zxwsf_is_Item_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Item", sizeof("Item") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->label, "label", sizeof("label")-1);
  p = zx_attr_enc(p, x->value, "value", sizeof("value")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Hint", sizeof("Hint") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Item", sizeof("Item") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_is_Item) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is_Item(struct zxwsf_is_Item_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is_Item) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is_Item(struct zx_ctx* c, struct zxwsf_is_Item_s* x )
{
  int len = zxwsf_LEN_is_Item(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is_Item(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is_Item) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is_Item(struct zx_ctx* c, struct zxwsf_is_Item_s* x )
{
  int len = zxwsf_LEN_is_Item(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is_Item(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is_Parameter
#define EL_STRUCT zxwsf_is_Parameter_s
#define EL_NS     is
#define EL_TAG    Parameter

/* FUNC(zxwsf_LEN_is_Parameter) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is_Parameter(struct zxwsf_is_Parameter_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Parameter") - 1 + 1 + 2 + sizeof("Parameter") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->name, sizeof("name"));
  len += zx_attr_len(x->value, sizeof("value"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is_Parameter) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is_Parameter(struct zxwsf_is_Parameter_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Parameter", sizeof("Parameter") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->name, "name", sizeof("name")-1);
  p = zx_attr_enc(p, x->value, "value", sizeof("value")-1);


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
  ZX_OUT_MEM(p, "Parameter", sizeof("Parameter") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_is_Parameter) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is_Parameter(struct zxwsf_is_Parameter_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is_Parameter) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is_Parameter(struct zx_ctx* c, struct zxwsf_is_Parameter_s* x )
{
  int len = zxwsf_LEN_is_Parameter(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is_Parameter(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is_Parameter) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is_Parameter(struct zx_ctx* c, struct zxwsf_is_Parameter_s* x )
{
  int len = zxwsf_LEN_is_Parameter(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is_Parameter(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is_Select
#define EL_STRUCT zxwsf_is_Select_s
#define EL_NS     is
#define EL_TAG    Select

/* FUNC(zxwsf_LEN_is_Select) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is_Select(struct zxwsf_is_Select_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Select") - 1 + 1 + 2 + sizeof("Select") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->name, sizeof("name"));
  len += zx_attr_len(x->multiple, sizeof("multiple"));

  {
      struct zxwsf_is_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is_Help_s*)e->gg.g.n)
	  len += zxwsf_LEN_is_Help(e);
  }
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Hint") - 1);
  for (se = x->Label; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Label") - 1);
  for (se = x->Value; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Value") - 1);
  {
      struct zxwsf_is_Item_s* e;
      for (e = x->Item; e; e = (struct zxwsf_is_Item_s*)e->gg.g.n)
	  len += zxwsf_LEN_is_Item(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is_Select) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is_Select(struct zxwsf_is_Select_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Select", sizeof("Select") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->name, "name", sizeof("name")-1);
  p = zx_attr_enc(p, x->multiple, "multiple", sizeof("multiple")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxwsf_is_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is_Help_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is_Help(e, p);
  }
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Hint", sizeof("Hint") - 1);
  for (se = x->Label; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Label", sizeof("Label") - 1);
  for (se = x->Value; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Value", sizeof("Value") - 1);
  {
      struct zxwsf_is_Item_s* e;
      for (e = x->Item; e; e = (struct zxwsf_is_Item_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is_Item(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Select", sizeof("Select") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_is_Select) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is_Select(struct zxwsf_is_Select_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is_Select) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is_Select(struct zx_ctx* c, struct zxwsf_is_Select_s* x )
{
  int len = zxwsf_LEN_is_Select(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is_Select(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is_Select) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is_Select(struct zx_ctx* c, struct zxwsf_is_Select_s* x )
{
  int len = zxwsf_LEN_is_Select(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is_Select(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   is_Text
#define EL_STRUCT zxwsf_is_Text_s
#define EL_NS     is
#define EL_TAG    Text

/* FUNC(zxwsf_LEN_is_Text) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_is_Text(struct zxwsf_is_Text_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Text") - 1 + 1 + 2 + sizeof("Text") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->name, sizeof("name"));
  len += zx_attr_len(x->minChars, sizeof("minChars"));
  len += zx_attr_len(x->maxChars, sizeof("maxChars"));
  len += zx_attr_len(x->format, sizeof("format"));

  {
      struct zxwsf_is_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is_Help_s*)e->gg.g.n)
	  len += zxwsf_LEN_is_Help(e);
  }
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Hint") - 1);
  for (se = x->Label; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Label") - 1);
  for (se = x->Value; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Value") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_is_Text) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_is_Text(struct zxwsf_is_Text_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Text", sizeof("Text") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->name, "name", sizeof("name")-1);
  p = zx_attr_enc(p, x->minChars, "minChars", sizeof("minChars")-1);
  p = zx_attr_enc(p, x->maxChars, "maxChars", sizeof("maxChars")-1);
  p = zx_attr_enc(p, x->format, "format", sizeof("format")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxwsf_is_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is_Help_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_is_Help(e, p);
  }
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Hint", sizeof("Hint") - 1);
  for (se = x->Label; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Label", sizeof("Label") - 1);
  for (se = x->Value; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Value", sizeof("Value") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Text", sizeof("Text") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_is_Text) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_is_Text(struct zxwsf_is_Text_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_is_Text) */

struct zx_str_s* zxwsf_EASY_ENC_SO_is_Text(struct zx_ctx* c, struct zxwsf_is_Text_s* x )
{
  int len = zxwsf_LEN_is_Text(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_is_Text(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_is_Text) */

struct zx_str_s* zxwsf_EASY_ENC_WO_is_Text(struct zx_ctx* c, struct zxwsf_is_Text_s* x )
{
  int len = zxwsf_LEN_is_Text(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_is_Text(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   lu_Extension
#define EL_STRUCT zxwsf_lu_Extension_s
#define EL_NS     lu
#define EL_TAG    Extension

/* FUNC(zxwsf_LEN_lu_Extension) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_lu_Extension(struct zxwsf_lu_Extension_s* x )
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

/* FUNC(zxwsf_ENC_SO_lu_Extension) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_lu_Extension(struct zxwsf_lu_Extension_s* x, char* p )
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

/* FUNC(zxwsf_ENC_WO_lu_Extension) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_lu_Extension(struct zxwsf_lu_Extension_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_lu_Extension) */

struct zx_str_s* zxwsf_EASY_ENC_SO_lu_Extension(struct zx_ctx* c, struct zxwsf_lu_Extension_s* x )
{
  int len = zxwsf_LEN_lu_Extension(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_lu_Extension(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_lu_Extension) */

struct zx_str_s* zxwsf_EASY_ENC_WO_lu_Extension(struct zx_ctx* c, struct zxwsf_lu_Extension_s* x )
{
  int len = zxwsf_LEN_lu_Extension(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_lu_Extension(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   lu_Status
#define EL_STRUCT zxwsf_lu_Status_s
#define EL_NS     lu
#define EL_TAG    Status

/* FUNC(zxwsf_LEN_lu_Status) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_lu_Status(struct zxwsf_lu_Status_s* x )
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

  len += zx_attr_len(x->code, sizeof("code"));
  len += zx_attr_len(x->ref, sizeof("ref"));
  len += zx_attr_len(x->comment, sizeof("comment"));

  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  len += zxwsf_LEN_lu_Status(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_lu_Status) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_lu_Status(struct zxwsf_lu_Status_s* x, char* p )
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

  p = zx_attr_enc(p, x->code, "code", sizeof("code")-1);
  p = zx_attr_enc(p, x->ref, "ref", sizeof("ref")-1);
  p = zx_attr_enc(p, x->comment, "comment", sizeof("comment")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_lu_Status(e, p);
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

/* FUNC(zxwsf_ENC_WO_lu_Status) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_lu_Status(struct zxwsf_lu_Status_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_lu_Status) */

struct zx_str_s* zxwsf_EASY_ENC_SO_lu_Status(struct zx_ctx* c, struct zxwsf_lu_Status_s* x )
{
  int len = zxwsf_LEN_lu_Status(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_lu_Status(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_lu_Status) */

struct zx_str_s* zxwsf_EASY_ENC_WO_lu_Status(struct zx_ctx* c, struct zxwsf_lu_Status_s* x )
{
  int len = zxwsf_LEN_lu_Status(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_lu_Status(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   lu_TestResult
#define EL_STRUCT zxwsf_lu_TestResult_s
#define EL_NS     lu
#define EL_TAG    TestResult

/* FUNC(zxwsf_LEN_lu_TestResult) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_lu_TestResult(struct zxwsf_lu_TestResult_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("TestResult") - 1 + 1 + 2 + sizeof("TestResult") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->itemIDRef, sizeof("itemIDRef"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_lu_TestResult) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_lu_TestResult(struct zxwsf_lu_TestResult_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "TestResult", sizeof("TestResult") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->itemIDRef, "itemIDRef", sizeof("itemIDRef")-1);


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
  ZX_OUT_MEM(p, "TestResult", sizeof("TestResult") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_lu_TestResult) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_lu_TestResult(struct zxwsf_lu_TestResult_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_lu_TestResult) */

struct zx_str_s* zxwsf_EASY_ENC_SO_lu_TestResult(struct zx_ctx* c, struct zxwsf_lu_TestResult_s* x )
{
  int len = zxwsf_LEN_lu_TestResult(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_lu_TestResult(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_lu_TestResult) */

struct zx_str_s* zxwsf_EASY_ENC_WO_lu_TestResult(struct zx_ctx* c, struct zxwsf_lu_TestResult_s* x )
{
  int len = zxwsf_LEN_lu_TestResult(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_lu_TestResult(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sbf_Framework
#define EL_STRUCT zxwsf_sbf_Framework_s
#define EL_NS     sbf
#define EL_TAG    Framework

/* FUNC(zxwsf_LEN_sbf_Framework) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_sbf_Framework(struct zxwsf_sbf_Framework_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Framework") - 1 + 1 + 2 + sizeof("Framework") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->version, sizeof("version"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_sbf_Framework) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_sbf_Framework(struct zxwsf_sbf_Framework_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Framework", sizeof("Framework") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->version, "version", sizeof("version")-1);


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
  ZX_OUT_MEM(p, "Framework", sizeof("Framework") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_sbf_Framework) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_sbf_Framework(struct zxwsf_sbf_Framework_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_sbf_Framework) */

struct zx_str_s* zxwsf_EASY_ENC_SO_sbf_Framework(struct zx_ctx* c, struct zxwsf_sbf_Framework_s* x )
{
  int len = zxwsf_LEN_sbf_Framework(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_sbf_Framework(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_sbf_Framework) */

struct zx_str_s* zxwsf_EASY_ENC_WO_sbf_Framework(struct zx_ctx* c, struct zxwsf_sbf_Framework_s* x )
{
  int len = zxwsf_LEN_sbf_Framework(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_sbf_Framework(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sec12_ProxyInfoConfirmationData
#define EL_STRUCT zxwsf_sec12_ProxyInfoConfirmationData_s
#define EL_NS     sec12
#define EL_TAG    ProxyInfoConfirmationData

/* FUNC(zxwsf_LEN_sec12_ProxyInfoConfirmationData) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_sec12_ProxyInfoConfirmationData(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ProxyInfoConfirmationData") - 1 + 1 + 2 + sizeof("ProxyInfoConfirmationData") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->id, sizeof("id"));

  for (se = x->AssertionIDReference; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("AssertionIDReference") - 1);
  for (se = x->Issuer; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Issuer") - 1);
  for (se = x->IssueInstant; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("IssueInstant") - 1);
  for (se = x->Signature; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("Signature") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_sec12_ProxyInfoConfirmationData) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_sec12_ProxyInfoConfirmationData(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ProxyInfoConfirmationData", sizeof("ProxyInfoConfirmationData") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->id, "id", sizeof("id")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->AssertionIDReference; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "AssertionIDReference", sizeof("AssertionIDReference") - 1);
  for (se = x->Issuer; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Issuer", sizeof("Issuer") - 1);
  for (se = x->IssueInstant; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "IssueInstant", sizeof("IssueInstant") - 1);
  for (se = x->Signature; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "Signature", sizeof("Signature") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ProxyInfoConfirmationData", sizeof("ProxyInfoConfirmationData") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_sec12_ProxyInfoConfirmationData) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_sec12_ProxyInfoConfirmationData(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_sec12_ProxyInfoConfirmationData) */

struct zx_str_s* zxwsf_EASY_ENC_SO_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zxwsf_sec12_ProxyInfoConfirmationData_s* x )
{
  int len = zxwsf_LEN_sec12_ProxyInfoConfirmationData(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_sec12_ProxyInfoConfirmationData(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_sec12_ProxyInfoConfirmationData) */

struct zx_str_s* zxwsf_EASY_ENC_WO_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zxwsf_sec12_ProxyInfoConfirmationData_s* x )
{
  int len = zxwsf_LEN_sec12_ProxyInfoConfirmationData(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_sec12_ProxyInfoConfirmationData(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sec12_ResourceAccessStatement
#define EL_STRUCT zxwsf_sec12_ResourceAccessStatement_s
#define EL_NS     sec12
#define EL_TAG    ResourceAccessStatement

/* FUNC(zxwsf_LEN_sec12_ResourceAccessStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_sec12_ResourceAccessStatement(struct zxwsf_sec12_ResourceAccessStatement_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ResourceAccessStatement") - 1 + 1 + 2 + sizeof("ResourceAccessStatement") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->ProxySubject; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("ProxySubject") - 1);
  {
      struct zxwsf_sec12_SessionContext_s* e;
      for (e = x->SessionContext; e; e = (struct zxwsf_sec12_SessionContext_s*)e->gg.g.n)
	  len += zxwsf_LEN_sec12_SessionContext(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_sec12_ResourceAccessStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_sec12_ResourceAccessStatement(struct zxwsf_sec12_ResourceAccessStatement_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ResourceAccessStatement", sizeof("ResourceAccessStatement") - 1);
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
  
  for (se = x->ProxySubject; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "ProxySubject", sizeof("ProxySubject") - 1);
  {
      struct zxwsf_sec12_SessionContext_s* e;
      for (e = x->SessionContext; e; e = (struct zxwsf_sec12_SessionContext_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_sec12_SessionContext(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ResourceAccessStatement", sizeof("ResourceAccessStatement") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_sec12_ResourceAccessStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_sec12_ResourceAccessStatement(struct zxwsf_sec12_ResourceAccessStatement_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_sec12_ResourceAccessStatement) */

struct zx_str_s* zxwsf_EASY_ENC_SO_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zxwsf_sec12_ResourceAccessStatement_s* x )
{
  int len = zxwsf_LEN_sec12_ResourceAccessStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_sec12_ResourceAccessStatement(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_sec12_ResourceAccessStatement) */

struct zx_str_s* zxwsf_EASY_ENC_WO_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zxwsf_sec12_ResourceAccessStatement_s* x )
{
  int len = zxwsf_LEN_sec12_ResourceAccessStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_sec12_ResourceAccessStatement(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sec12_SessionContext
#define EL_STRUCT zxwsf_sec12_SessionContext_s
#define EL_NS     sec12
#define EL_TAG    SessionContext

/* FUNC(zxwsf_LEN_sec12_SessionContext) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_sec12_SessionContext(struct zxwsf_sec12_SessionContext_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SessionContext") - 1 + 1 + 2 + sizeof("SessionContext") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->SessionIndex, sizeof("SessionIndex"));
  len += zx_attr_len(x->AuthenticationInstant, sizeof("AuthenticationInstant"));
  len += zx_attr_len(x->AssertionIssueInstant, sizeof("AssertionIssueInstant"));

  for (se = x->SessionSubject; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("SessionSubject") - 1);
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("ProviderID") - 1);
  for (se = x->RequestAuthnContext; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("RequestAuthnContext") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_sec12_SessionContext) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_sec12_SessionContext(struct zxwsf_sec12_SessionContext_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SessionContext", sizeof("SessionContext") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->SessionIndex, "SessionIndex", sizeof("SessionIndex")-1);
  p = zx_attr_enc(p, x->AuthenticationInstant, "AuthenticationInstant", sizeof("AuthenticationInstant")-1);
  p = zx_attr_enc(p, x->AssertionIssueInstant, "AssertionIssueInstant", sizeof("AssertionIssueInstant")-1);


  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);

#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->SessionSubject; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "SessionSubject", sizeof("SessionSubject") - 1);
  for (se = x->ProviderID; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "ProviderID", sizeof("ProviderID") - 1);
  for (se = x->RequestAuthnContext; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "RequestAuthnContext", sizeof("RequestAuthnContext") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SessionContext", sizeof("SessionContext") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_sec12_SessionContext) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_sec12_SessionContext(struct zxwsf_sec12_SessionContext_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_sec12_SessionContext) */

struct zx_str_s* zxwsf_EASY_ENC_SO_sec12_SessionContext(struct zx_ctx* c, struct zxwsf_sec12_SessionContext_s* x )
{
  int len = zxwsf_LEN_sec12_SessionContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_sec12_SessionContext(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_sec12_SessionContext) */

struct zx_str_s* zxwsf_EASY_ENC_WO_sec12_SessionContext(struct zx_ctx* c, struct zxwsf_sec12_SessionContext_s* x )
{
  int len = zxwsf_LEN_sec12_SessionContext(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_sec12_SessionContext(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sec12_SessionContextStatement
#define EL_STRUCT zxwsf_sec12_SessionContextStatement_s
#define EL_NS     sec12
#define EL_TAG    SessionContextStatement

/* FUNC(zxwsf_LEN_sec12_SessionContextStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_sec12_SessionContextStatement(struct zxwsf_sec12_SessionContextStatement_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SessionContextStatement") - 1 + 1 + 2 + sizeof("SessionContextStatement") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->ProxySubject; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("ProxySubject") - 1);
  {
      struct zxwsf_sec12_SessionContext_s* e;
      for (e = x->SessionContext; e; e = (struct zxwsf_sec12_SessionContext_s*)e->gg.g.n)
	  len += zxwsf_LEN_sec12_SessionContext(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_sec12_SessionContextStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_sec12_SessionContextStatement(struct zxwsf_sec12_SessionContextStatement_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SessionContextStatement", sizeof("SessionContextStatement") - 1);
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
  
  for (se = x->ProxySubject; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "ProxySubject", sizeof("ProxySubject") - 1);
  {
      struct zxwsf_sec12_SessionContext_s* e;
      for (e = x->SessionContext; e; e = (struct zxwsf_sec12_SessionContext_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_sec12_SessionContext(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SessionContextStatement", sizeof("SessionContextStatement") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_sec12_SessionContextStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_sec12_SessionContextStatement(struct zxwsf_sec12_SessionContextStatement_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_sec12_SessionContextStatement) */

struct zx_str_s* zxwsf_EASY_ENC_SO_sec12_SessionContextStatement(struct zx_ctx* c, struct zxwsf_sec12_SessionContextStatement_s* x )
{
  int len = zxwsf_LEN_sec12_SessionContextStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_sec12_SessionContextStatement(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_sec12_SessionContextStatement) */

struct zx_str_s* zxwsf_EASY_ENC_WO_sec12_SessionContextStatement(struct zx_ctx* c, struct zxwsf_sec12_SessionContextStatement_s* x )
{
  int len = zxwsf_LEN_sec12_SessionContextStatement(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_sec12_SessionContextStatement(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sec12_ValidityRestrictionCondition
#define EL_STRUCT zxwsf_sec12_ValidityRestrictionCondition_s
#define EL_NS     sec12
#define EL_TAG    ValidityRestrictionCondition

/* FUNC(zxwsf_LEN_sec12_ValidityRestrictionCondition) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_sec12_ValidityRestrictionCondition(struct zxwsf_sec12_ValidityRestrictionCondition_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ValidityRestrictionCondition") - 1 + 1 + 2 + sizeof("ValidityRestrictionCondition") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = x->NumberOfUses; se; se = (struct zx_elem_s*)se->g.n)
    len += zxwsf_LEN_simple_elem(se, sizeof("NumberOfUses") - 1);


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_sec12_ValidityRestrictionCondition) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_sec12_ValidityRestrictionCondition(struct zxwsf_sec12_ValidityRestrictionCondition_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ValidityRestrictionCondition", sizeof("ValidityRestrictionCondition") - 1);
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
  
  for (se = x->NumberOfUses; se; se = (struct zx_elem_s*)se->g.n)
    p = zxwsf_ENC_SO_simple_elem(se, p, "NumberOfUses", sizeof("NumberOfUses") - 1);


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ValidityRestrictionCondition", sizeof("ValidityRestrictionCondition") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_sec12_ValidityRestrictionCondition) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_sec12_ValidityRestrictionCondition(struct zxwsf_sec12_ValidityRestrictionCondition_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_sec12_ValidityRestrictionCondition) */

struct zx_str_s* zxwsf_EASY_ENC_SO_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zxwsf_sec12_ValidityRestrictionCondition_s* x )
{
  int len = zxwsf_LEN_sec12_ValidityRestrictionCondition(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_sec12_ValidityRestrictionCondition(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_sec12_ValidityRestrictionCondition) */

struct zx_str_s* zxwsf_EASY_ENC_WO_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zxwsf_sec12_ValidityRestrictionCondition_s* x )
{
  int len = zxwsf_LEN_sec12_ValidityRestrictionCondition(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_sec12_ValidityRestrictionCondition(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sec_Token
#define EL_STRUCT zxwsf_sec_Token_s
#define EL_NS     sec
#define EL_TAG    Token

/* FUNC(zxwsf_LEN_sec_Token) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_sec_Token(struct zxwsf_sec_Token_s* x )
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

  len += zx_attr_len(x->id, sizeof("id"));
  len += zx_attr_len(x->ref, sizeof("ref"));
  len += zx_attr_len(x->usage, sizeof("usage"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_sec_Token) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_sec_Token(struct zxwsf_sec_Token_s* x, char* p )
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

  p = zx_attr_enc(p, x->id, "id", sizeof("id")-1);
  p = zx_attr_enc(p, x->ref, "ref", sizeof("ref")-1);
  p = zx_attr_enc(p, x->usage, "usage", sizeof("usage")-1);


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
  ZX_OUT_MEM(p, "Token", sizeof("Token") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_sec_Token) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_sec_Token(struct zxwsf_sec_Token_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_sec_Token) */

struct zx_str_s* zxwsf_EASY_ENC_SO_sec_Token(struct zx_ctx* c, struct zxwsf_sec_Token_s* x )
{
  int len = zxwsf_LEN_sec_Token(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_sec_Token(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_sec_Token) */

struct zx_str_s* zxwsf_EASY_ENC_WO_sec_Token(struct zx_ctx* c, struct zxwsf_sec_Token_s* x )
{
  int len = zxwsf_LEN_sec_Token(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_sec_Token(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sec_TokenPolicy
#define EL_STRUCT zxwsf_sec_TokenPolicy_s
#define EL_NS     sec
#define EL_TAG    TokenPolicy

/* FUNC(zxwsf_LEN_sec_TokenPolicy) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_sec_TokenPolicy(struct zxwsf_sec_TokenPolicy_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("TokenPolicy") - 1 + 1 + 2 + sizeof("TokenPolicy") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->validUntil, sizeof("validUntil"));
  len += zx_attr_len(x->issueTo, sizeof("issueTo"));
  len += zx_attr_len(x->type, sizeof("type"));
  len += zx_attr_len(x->wantDSEPR, sizeof("wantDSEPR"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_sec_TokenPolicy) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_sec_TokenPolicy(struct zxwsf_sec_TokenPolicy_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "TokenPolicy", sizeof("TokenPolicy") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->validUntil, "validUntil", sizeof("validUntil")-1);
  p = zx_attr_enc(p, x->issueTo, "issueTo", sizeof("issueTo")-1);
  p = zx_attr_enc(p, x->type, "type", sizeof("type")-1);
  p = zx_attr_enc(p, x->wantDSEPR, "wantDSEPR", sizeof("wantDSEPR")-1);


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
  ZX_OUT_MEM(p, "TokenPolicy", sizeof("TokenPolicy") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_sec_TokenPolicy) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_sec_TokenPolicy(struct zxwsf_sec_TokenPolicy_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_sec_TokenPolicy) */

struct zx_str_s* zxwsf_EASY_ENC_SO_sec_TokenPolicy(struct zx_ctx* c, struct zxwsf_sec_TokenPolicy_s* x )
{
  int len = zxwsf_LEN_sec_TokenPolicy(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_sec_TokenPolicy(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_sec_TokenPolicy) */

struct zx_str_s* zxwsf_EASY_ENC_WO_sec_TokenPolicy(struct zx_ctx* c, struct zxwsf_sec_TokenPolicy_s* x )
{
  int len = zxwsf_LEN_sec_TokenPolicy(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_sec_TokenPolicy(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sec_TransitedProvider
#define EL_STRUCT zxwsf_sec_TransitedProvider_s
#define EL_NS     sec
#define EL_TAG    TransitedProvider

/* FUNC(zxwsf_LEN_sec_TransitedProvider) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_sec_TransitedProvider(struct zxwsf_sec_TransitedProvider_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("TransitedProvider") - 1 + 1 + 2 + sizeof("TransitedProvider") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->timeStamp, sizeof("timeStamp"));
  len += zx_attr_len(x->confirmationURI, sizeof("confirmationURI"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_sec_TransitedProvider) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_sec_TransitedProvider(struct zxwsf_sec_TransitedProvider_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "TransitedProvider", sizeof("TransitedProvider") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->timeStamp, "timeStamp", sizeof("timeStamp")-1);
  p = zx_attr_enc(p, x->confirmationURI, "confirmationURI", sizeof("confirmationURI")-1);


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
  ZX_OUT_MEM(p, "TransitedProvider", sizeof("TransitedProvider") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_sec_TransitedProvider) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_sec_TransitedProvider(struct zxwsf_sec_TransitedProvider_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_sec_TransitedProvider) */

struct zx_str_s* zxwsf_EASY_ENC_SO_sec_TransitedProvider(struct zx_ctx* c, struct zxwsf_sec_TransitedProvider_s* x )
{
  int len = zxwsf_LEN_sec_TransitedProvider(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_sec_TransitedProvider(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_sec_TransitedProvider) */

struct zx_str_s* zxwsf_EASY_ENC_WO_sec_TransitedProvider(struct zx_ctx* c, struct zxwsf_sec_TransitedProvider_s* x )
{
  int len = zxwsf_LEN_sec_TransitedProvider(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_sec_TransitedProvider(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sec_TransitedProviderPath
#define EL_STRUCT zxwsf_sec_TransitedProviderPath_s
#define EL_NS     sec
#define EL_TAG    TransitedProviderPath

/* FUNC(zxwsf_LEN_sec_TransitedProviderPath) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_sec_TransitedProviderPath(struct zxwsf_sec_TransitedProviderPath_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("TransitedProviderPath") - 1 + 1 + 2 + sizeof("TransitedProviderPath") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_sec_TransitedProvider_s* e;
      for (e = x->TransitedProvider; e; e = (struct zxwsf_sec_TransitedProvider_s*)e->gg.g.n)
	  len += zxwsf_LEN_sec_TransitedProvider(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_sec_TransitedProviderPath) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_sec_TransitedProviderPath(struct zxwsf_sec_TransitedProviderPath_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "TransitedProviderPath", sizeof("TransitedProviderPath") - 1);
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
      struct zxwsf_sec_TransitedProvider_s* e;
      for (e = x->TransitedProvider; e; e = (struct zxwsf_sec_TransitedProvider_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_sec_TransitedProvider(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "TransitedProviderPath", sizeof("TransitedProviderPath") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_sec_TransitedProviderPath) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_sec_TransitedProviderPath(struct zxwsf_sec_TransitedProviderPath_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_sec_TransitedProviderPath) */

struct zx_str_s* zxwsf_EASY_ENC_SO_sec_TransitedProviderPath(struct zx_ctx* c, struct zxwsf_sec_TransitedProviderPath_s* x )
{
  int len = zxwsf_LEN_sec_TransitedProviderPath(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_sec_TransitedProviderPath(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_sec_TransitedProviderPath) */

struct zx_str_s* zxwsf_EASY_ENC_WO_sec_TransitedProviderPath(struct zx_ctx* c, struct zxwsf_sec_TransitedProviderPath_s* x )
{
  int len = zxwsf_LEN_sec_TransitedProviderPath(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_sec_TransitedProviderPath(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   wsse_BinarySecurityToken
#define EL_STRUCT zxwsf_wsse_BinarySecurityToken_s
#define EL_NS     wsse
#define EL_TAG    BinarySecurityToken

/* FUNC(zxwsf_LEN_wsse_BinarySecurityToken) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_wsse_BinarySecurityToken(struct zxwsf_wsse_BinarySecurityToken_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("BinarySecurityToken") - 1 + 1 + 2 + sizeof("BinarySecurityToken") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Id, sizeof("Id"));
  len += zx_attr_len(x->EncodingType, sizeof("EncodingType"));
  len += zx_attr_len(x->ValueType, sizeof("ValueType"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_wsse_BinarySecurityToken) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_wsse_BinarySecurityToken(struct zxwsf_wsse_BinarySecurityToken_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "BinarySecurityToken", sizeof("BinarySecurityToken") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Id, "Id", sizeof("Id")-1);
  p = zx_attr_enc(p, x->EncodingType, "EncodingType", sizeof("EncodingType")-1);
  p = zx_attr_enc(p, x->ValueType, "ValueType", sizeof("ValueType")-1);


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
  ZX_OUT_MEM(p, "BinarySecurityToken", sizeof("BinarySecurityToken") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_wsse_BinarySecurityToken) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_wsse_BinarySecurityToken(struct zxwsf_wsse_BinarySecurityToken_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_wsse_BinarySecurityToken) */

struct zx_str_s* zxwsf_EASY_ENC_SO_wsse_BinarySecurityToken(struct zx_ctx* c, struct zxwsf_wsse_BinarySecurityToken_s* x )
{
  int len = zxwsf_LEN_wsse_BinarySecurityToken(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_wsse_BinarySecurityToken(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_wsse_BinarySecurityToken) */

struct zx_str_s* zxwsf_EASY_ENC_WO_wsse_BinarySecurityToken(struct zx_ctx* c, struct zxwsf_wsse_BinarySecurityToken_s* x )
{
  int len = zxwsf_LEN_wsse_BinarySecurityToken(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_wsse_BinarySecurityToken(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   wsse_Embedded
#define EL_STRUCT zxwsf_wsse_Embedded_s
#define EL_NS     wsse
#define EL_TAG    Embedded

/* FUNC(zxwsf_LEN_wsse_Embedded) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_wsse_Embedded(struct zxwsf_wsse_Embedded_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Embedded") - 1 + 1 + 2 + sizeof("Embedded") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->ValueType, sizeof("ValueType"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_wsse_Embedded) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_wsse_Embedded(struct zxwsf_wsse_Embedded_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Embedded", sizeof("Embedded") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->ValueType, "ValueType", sizeof("ValueType")-1);


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
  ZX_OUT_MEM(p, "Embedded", sizeof("Embedded") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_wsse_Embedded) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_wsse_Embedded(struct zxwsf_wsse_Embedded_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_wsse_Embedded) */

struct zx_str_s* zxwsf_EASY_ENC_SO_wsse_Embedded(struct zx_ctx* c, struct zxwsf_wsse_Embedded_s* x )
{
  int len = zxwsf_LEN_wsse_Embedded(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_wsse_Embedded(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_wsse_Embedded) */

struct zx_str_s* zxwsf_EASY_ENC_WO_wsse_Embedded(struct zx_ctx* c, struct zxwsf_wsse_Embedded_s* x )
{
  int len = zxwsf_LEN_wsse_Embedded(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_wsse_Embedded(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   wsse_KeyIdentifier
#define EL_STRUCT zxwsf_wsse_KeyIdentifier_s
#define EL_NS     wsse
#define EL_TAG    KeyIdentifier

/* FUNC(zxwsf_LEN_wsse_KeyIdentifier) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_wsse_KeyIdentifier(struct zxwsf_wsse_KeyIdentifier_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("KeyIdentifier") - 1 + 1 + 2 + sizeof("KeyIdentifier") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Id, sizeof("Id"));
  len += zx_attr_len(x->EncodingType, sizeof("EncodingType"));
  len += zx_attr_len(x->ValueType, sizeof("ValueType"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_wsse_KeyIdentifier) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_wsse_KeyIdentifier(struct zxwsf_wsse_KeyIdentifier_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "KeyIdentifier", sizeof("KeyIdentifier") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Id, "Id", sizeof("Id")-1);
  p = zx_attr_enc(p, x->EncodingType, "EncodingType", sizeof("EncodingType")-1);
  p = zx_attr_enc(p, x->ValueType, "ValueType", sizeof("ValueType")-1);


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
  ZX_OUT_MEM(p, "KeyIdentifier", sizeof("KeyIdentifier") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_wsse_KeyIdentifier) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_wsse_KeyIdentifier(struct zxwsf_wsse_KeyIdentifier_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_wsse_KeyIdentifier) */

struct zx_str_s* zxwsf_EASY_ENC_SO_wsse_KeyIdentifier(struct zx_ctx* c, struct zxwsf_wsse_KeyIdentifier_s* x )
{
  int len = zxwsf_LEN_wsse_KeyIdentifier(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_wsse_KeyIdentifier(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_wsse_KeyIdentifier) */

struct zx_str_s* zxwsf_EASY_ENC_WO_wsse_KeyIdentifier(struct zx_ctx* c, struct zxwsf_wsse_KeyIdentifier_s* x )
{
  int len = zxwsf_LEN_wsse_KeyIdentifier(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_wsse_KeyIdentifier(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   wsse_Nonce
#define EL_STRUCT zxwsf_wsse_Nonce_s
#define EL_NS     wsse
#define EL_TAG    Nonce

/* FUNC(zxwsf_LEN_wsse_Nonce) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_wsse_Nonce(struct zxwsf_wsse_Nonce_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Nonce") - 1 + 1 + 2 + sizeof("Nonce") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Id, sizeof("Id"));
  len += zx_attr_len(x->EncodingType, sizeof("EncodingType"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_wsse_Nonce) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_wsse_Nonce(struct zxwsf_wsse_Nonce_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Nonce", sizeof("Nonce") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Id, "Id", sizeof("Id")-1);
  p = zx_attr_enc(p, x->EncodingType, "EncodingType", sizeof("EncodingType")-1);


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
  ZX_OUT_MEM(p, "Nonce", sizeof("Nonce") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_wsse_Nonce) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_wsse_Nonce(struct zxwsf_wsse_Nonce_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_wsse_Nonce) */

struct zx_str_s* zxwsf_EASY_ENC_SO_wsse_Nonce(struct zx_ctx* c, struct zxwsf_wsse_Nonce_s* x )
{
  int len = zxwsf_LEN_wsse_Nonce(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_wsse_Nonce(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_wsse_Nonce) */

struct zx_str_s* zxwsf_EASY_ENC_WO_wsse_Nonce(struct zx_ctx* c, struct zxwsf_wsse_Nonce_s* x )
{
  int len = zxwsf_LEN_wsse_Nonce(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_wsse_Nonce(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   wsse_Password
#define EL_STRUCT zxwsf_wsse_Password_s
#define EL_NS     wsse
#define EL_TAG    Password

/* FUNC(zxwsf_LEN_wsse_Password) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_wsse_Password(struct zxwsf_wsse_Password_s* x )
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

  len += zx_attr_len(x->Id, sizeof("Id"));
  len += zx_attr_len(x->Type, sizeof("Type"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_wsse_Password) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_wsse_Password(struct zxwsf_wsse_Password_s* x, char* p )
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

  p = zx_attr_enc(p, x->Id, "Id", sizeof("Id")-1);
  p = zx_attr_enc(p, x->Type, "Type", sizeof("Type")-1);


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
  ZX_OUT_MEM(p, "Password", sizeof("Password") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_wsse_Password) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_wsse_Password(struct zxwsf_wsse_Password_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_wsse_Password) */

struct zx_str_s* zxwsf_EASY_ENC_SO_wsse_Password(struct zx_ctx* c, struct zxwsf_wsse_Password_s* x )
{
  int len = zxwsf_LEN_wsse_Password(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_wsse_Password(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_wsse_Password) */

struct zx_str_s* zxwsf_EASY_ENC_WO_wsse_Password(struct zx_ctx* c, struct zxwsf_wsse_Password_s* x )
{
  int len = zxwsf_LEN_wsse_Password(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_wsse_Password(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   wsse_Reference
#define EL_STRUCT zxwsf_wsse_Reference_s
#define EL_NS     wsse
#define EL_TAG    Reference

/* FUNC(zxwsf_LEN_wsse_Reference) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_wsse_Reference(struct zxwsf_wsse_Reference_s* x )
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

  len += zx_attr_len(x->URI, sizeof("URI"));
  len += zx_attr_len(x->ValueType, sizeof("ValueType"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_wsse_Reference) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_wsse_Reference(struct zxwsf_wsse_Reference_s* x, char* p )
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

  p = zx_attr_enc(p, x->URI, "URI", sizeof("URI")-1);
  p = zx_attr_enc(p, x->ValueType, "ValueType", sizeof("ValueType")-1);


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
  ZX_OUT_MEM(p, "Reference", sizeof("Reference") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_wsse_Reference) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_wsse_Reference(struct zxwsf_wsse_Reference_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_wsse_Reference) */

struct zx_str_s* zxwsf_EASY_ENC_SO_wsse_Reference(struct zx_ctx* c, struct zxwsf_wsse_Reference_s* x )
{
  int len = zxwsf_LEN_wsse_Reference(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_wsse_Reference(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_wsse_Reference) */

struct zx_str_s* zxwsf_EASY_ENC_WO_wsse_Reference(struct zx_ctx* c, struct zxwsf_wsse_Reference_s* x )
{
  int len = zxwsf_LEN_wsse_Reference(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_wsse_Reference(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   wsse_Security
#define EL_STRUCT zxwsf_wsse_Security_s
#define EL_NS     wsse
#define EL_TAG    Security

/* FUNC(zxwsf_LEN_wsse_Security) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_wsse_Security(struct zxwsf_wsse_Security_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Security") - 1 + 1 + 2 + sizeof("Security") - 1 + 1;
  
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

/* FUNC(zxwsf_ENC_SO_wsse_Security) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_wsse_Security(struct zxwsf_wsse_Security_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Security", sizeof("Security") - 1);
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
  ZX_OUT_MEM(p, "Security", sizeof("Security") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_wsse_Security) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_wsse_Security(struct zxwsf_wsse_Security_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_wsse_Security) */

struct zx_str_s* zxwsf_EASY_ENC_SO_wsse_Security(struct zx_ctx* c, struct zxwsf_wsse_Security_s* x )
{
  int len = zxwsf_LEN_wsse_Security(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_wsse_Security(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_wsse_Security) */

struct zx_str_s* zxwsf_EASY_ENC_WO_wsse_Security(struct zx_ctx* c, struct zxwsf_wsse_Security_s* x )
{
  int len = zxwsf_LEN_wsse_Security(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_wsse_Security(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   wsse_SecurityTokenReference
#define EL_STRUCT zxwsf_wsse_SecurityTokenReference_s
#define EL_NS     wsse
#define EL_TAG    SecurityTokenReference

/* FUNC(zxwsf_LEN_wsse_SecurityTokenReference) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_wsse_SecurityTokenReference(struct zxwsf_wsse_SecurityTokenReference_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SecurityTokenReference") - 1 + 1 + 2 + sizeof("SecurityTokenReference") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Id, sizeof("Id"));
  len += zx_attr_len(x->Usage, sizeof("Usage"));



  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_wsse_SecurityTokenReference) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_wsse_SecurityTokenReference(struct zxwsf_wsse_SecurityTokenReference_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SecurityTokenReference", sizeof("SecurityTokenReference") - 1);
#else
  /* root node has no begin tag */
#endif
  /* *** deal with xmlns specifications in exc c14n way */

  p = zx_attr_enc(p, x->Id, "Id", sizeof("Id")-1);
  p = zx_attr_enc(p, x->Usage, "Usage", sizeof("Usage")-1);


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
  ZX_OUT_MEM(p, "SecurityTokenReference", sizeof("SecurityTokenReference") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_wsse_SecurityTokenReference) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_wsse_SecurityTokenReference(struct zxwsf_wsse_SecurityTokenReference_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_wsse_SecurityTokenReference) */

struct zx_str_s* zxwsf_EASY_ENC_SO_wsse_SecurityTokenReference(struct zx_ctx* c, struct zxwsf_wsse_SecurityTokenReference_s* x )
{
  int len = zxwsf_LEN_wsse_SecurityTokenReference(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_wsse_SecurityTokenReference(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_wsse_SecurityTokenReference) */

struct zx_str_s* zxwsf_EASY_ENC_WO_wsse_SecurityTokenReference(struct zx_ctx* c, struct zxwsf_wsse_SecurityTokenReference_s* x )
{
  int len = zxwsf_LEN_wsse_SecurityTokenReference(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_wsse_SecurityTokenReference(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   wsse_TransformationParameters
#define EL_STRUCT zxwsf_wsse_TransformationParameters_s
#define EL_NS     wsse
#define EL_TAG    TransformationParameters

/* FUNC(zxwsf_LEN_wsse_TransformationParameters) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_wsse_TransformationParameters(struct zxwsf_wsse_TransformationParameters_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("TransformationParameters") - 1 + 1 + 2 + sizeof("TransformationParameters") - 1 + 1;
  
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

/* FUNC(zxwsf_ENC_SO_wsse_TransformationParameters) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_wsse_TransformationParameters(struct zxwsf_wsse_TransformationParameters_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "TransformationParameters", sizeof("TransformationParameters") - 1);
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
  ZX_OUT_MEM(p, "TransformationParameters", sizeof("TransformationParameters") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_wsse_TransformationParameters) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_wsse_TransformationParameters(struct zxwsf_wsse_TransformationParameters_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_wsse_TransformationParameters) */

struct zx_str_s* zxwsf_EASY_ENC_SO_wsse_TransformationParameters(struct zx_ctx* c, struct zxwsf_wsse_TransformationParameters_s* x )
{
  int len = zxwsf_LEN_wsse_TransformationParameters(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_wsse_TransformationParameters(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_wsse_TransformationParameters) */

struct zx_str_s* zxwsf_EASY_ENC_WO_wsse_TransformationParameters(struct zx_ctx* c, struct zxwsf_wsse_TransformationParameters_s* x )
{
  int len = zxwsf_LEN_wsse_TransformationParameters(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_wsse_TransformationParameters(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   wsse_Username
#define EL_STRUCT zxwsf_wsse_Username_s
#define EL_NS     wsse
#define EL_TAG    Username

/* FUNC(zxwsf_LEN_wsse_Username) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_wsse_Username(struct zxwsf_wsse_Username_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Username") - 1 + 1 + 2 + sizeof("Username") - 1 + 1;
  
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

/* FUNC(zxwsf_ENC_SO_wsse_Username) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_wsse_Username(struct zxwsf_wsse_Username_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Username", sizeof("Username") - 1);
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
  ZX_OUT_MEM(p, "Username", sizeof("Username") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_wsse_Username) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_wsse_Username(struct zxwsf_wsse_Username_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_wsse_Username) */

struct zx_str_s* zxwsf_EASY_ENC_SO_wsse_Username(struct zx_ctx* c, struct zxwsf_wsse_Username_s* x )
{
  int len = zxwsf_LEN_wsse_Username(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_wsse_Username(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_wsse_Username) */

struct zx_str_s* zxwsf_EASY_ENC_WO_wsse_Username(struct zx_ctx* c, struct zxwsf_wsse_Username_s* x )
{
  int len = zxwsf_LEN_wsse_Username(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_wsse_Username(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   wsse_UsernameToken
#define EL_STRUCT zxwsf_wsse_UsernameToken_s
#define EL_NS     wsse
#define EL_TAG    UsernameToken

/* FUNC(zxwsf_LEN_wsse_UsernameToken) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_wsse_UsernameToken(struct zxwsf_wsse_UsernameToken_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("UsernameToken") - 1 + 1 + 2 + sizeof("UsernameToken") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Id, sizeof("Id"));

  {
      struct zxwsf_wsse_Username_s* e;
      for (e = x->Username; e; e = (struct zxwsf_wsse_Username_s*)e->gg.g.n)
	  len += zxwsf_LEN_wsse_Username(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_wsse_UsernameToken) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_wsse_UsernameToken(struct zxwsf_wsse_UsernameToken_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "UsernameToken", sizeof("UsernameToken") - 1);
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
      struct zxwsf_wsse_Username_s* e;
      for (e = x->Username; e; e = (struct zxwsf_wsse_Username_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_wsse_Username(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "UsernameToken", sizeof("UsernameToken") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_wsse_UsernameToken) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_wsse_UsernameToken(struct zxwsf_wsse_UsernameToken_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_wsse_UsernameToken) */

struct zx_str_s* zxwsf_EASY_ENC_SO_wsse_UsernameToken(struct zx_ctx* c, struct zxwsf_wsse_UsernameToken_s* x )
{
  int len = zxwsf_LEN_wsse_UsernameToken(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_wsse_UsernameToken(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_wsse_UsernameToken) */

struct zx_str_s* zxwsf_EASY_ENC_WO_wsse_UsernameToken(struct zx_ctx* c, struct zxwsf_wsse_UsernameToken_s* x )
{
  int len = zxwsf_LEN_wsse_UsernameToken(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_wsse_UsernameToken(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   wsu_Created
#define EL_STRUCT zxwsf_wsu_Created_s
#define EL_NS     wsu
#define EL_TAG    Created

/* FUNC(zxwsf_LEN_wsu_Created) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_wsu_Created(struct zxwsf_wsu_Created_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Created") - 1 + 1 + 2 + sizeof("Created") - 1 + 1;
  
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

/* FUNC(zxwsf_ENC_SO_wsu_Created) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_wsu_Created(struct zxwsf_wsu_Created_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Created", sizeof("Created") - 1);
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
  ZX_OUT_MEM(p, "Created", sizeof("Created") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_wsu_Created) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_wsu_Created(struct zxwsf_wsu_Created_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_wsu_Created) */

struct zx_str_s* zxwsf_EASY_ENC_SO_wsu_Created(struct zx_ctx* c, struct zxwsf_wsu_Created_s* x )
{
  int len = zxwsf_LEN_wsu_Created(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_wsu_Created(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_wsu_Created) */

struct zx_str_s* zxwsf_EASY_ENC_WO_wsu_Created(struct zx_ctx* c, struct zxwsf_wsu_Created_s* x )
{
  int len = zxwsf_LEN_wsu_Created(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_wsu_Created(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   wsu_Expires
#define EL_STRUCT zxwsf_wsu_Expires_s
#define EL_NS     wsu
#define EL_TAG    Expires

/* FUNC(zxwsf_LEN_wsu_Expires) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_wsu_Expires(struct zxwsf_wsu_Expires_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Expires") - 1 + 1 + 2 + sizeof("Expires") - 1 + 1;
  
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

/* FUNC(zxwsf_ENC_SO_wsu_Expires) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_wsu_Expires(struct zxwsf_wsu_Expires_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Expires", sizeof("Expires") - 1);
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
  ZX_OUT_MEM(p, "Expires", sizeof("Expires") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_wsu_Expires) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_wsu_Expires(struct zxwsf_wsu_Expires_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_wsu_Expires) */

struct zx_str_s* zxwsf_EASY_ENC_SO_wsu_Expires(struct zx_ctx* c, struct zxwsf_wsu_Expires_s* x )
{
  int len = zxwsf_LEN_wsu_Expires(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_wsu_Expires(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_wsu_Expires) */

struct zx_str_s* zxwsf_EASY_ENC_WO_wsu_Expires(struct zx_ctx* c, struct zxwsf_wsu_Expires_s* x )
{
  int len = zxwsf_LEN_wsu_Expires(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_wsu_Expires(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   wsu_Timestamp
#define EL_STRUCT zxwsf_wsu_Timestamp_s
#define EL_NS     wsu
#define EL_TAG    Timestamp

/* FUNC(zxwsf_LEN_wsu_Timestamp) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_wsu_Timestamp(struct zxwsf_wsu_Timestamp_s* x )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Timestamp") - 1 + 1 + 2 + sizeof("Timestamp") - 1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  /* *** deal with xmlns specifications in exc c14n way */

  len += zx_attr_len(x->Id, sizeof("Id"));

  {
      struct zxwsf_wsu_Created_s* e;
      for (e = x->Created; e; e = (struct zxwsf_wsu_Created_s*)e->gg.g.n)
	  len += zxwsf_LEN_wsu_Created(e);
  }
  {
      struct zxwsf_wsu_Expires_s* e;
      for (e = x->Expires; e; e = (struct zxwsf_wsu_Expires_s*)e->gg.g.n)
	  len += zxwsf_LEN_wsu_Expires(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_wsu_Timestamp) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_wsu_Timestamp(struct zxwsf_wsu_Timestamp_s* x, char* p )
{
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Timestamp", sizeof("Timestamp") - 1);
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
      struct zxwsf_wsu_Created_s* e;
      for (e = x->Created; e; e = (struct zxwsf_wsu_Created_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_wsu_Created(e, p);
  }
  {
      struct zxwsf_wsu_Expires_s* e;
      for (e = x->Expires; e; e = (struct zxwsf_wsu_Expires_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_wsu_Expires(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Timestamp", sizeof("Timestamp") - 1);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no end tag ither */
#endif
  return p;
}

/* FUNC(zxwsf_ENC_WO_wsu_Timestamp) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_wsu_Timestamp(struct zxwsf_wsu_Timestamp_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_wsu_Timestamp) */

struct zx_str_s* zxwsf_EASY_ENC_SO_wsu_Timestamp(struct zx_ctx* c, struct zxwsf_wsu_Timestamp_s* x )
{
  int len = zxwsf_LEN_wsu_Timestamp(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_wsu_Timestamp(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_wsu_Timestamp) */

struct zx_str_s* zxwsf_EASY_ENC_WO_wsu_Timestamp(struct zx_ctx* c, struct zxwsf_wsu_Timestamp_s* x )
{
  int len = zxwsf_LEN_wsu_Timestamp(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_wsu_Timestamp(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zxwsf_root_s
#define EL_NS     
#define EL_TAG    root

/* FUNC(zxwsf_LEN_root) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_root(struct zxwsf_root_s* x )
{
  struct zx_elem_s* se;

  /* root node has no begin tag */
  int len = 0;

  
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_e_Envelope_s* e;
      for (e = x->Envelope; e; e = (struct zxwsf_e_Envelope_s*)e->gg.g.n)
	  len += zxwsf_LEN_e_Envelope(e);
  }
  {
      struct zxwsf_dise_Envelope_s* e;
      for (e = x->dise_Envelope; e; e = (struct zxwsf_dise_Envelope_s*)e->gg.g.n)
	  len += zxwsf_LEN_dise_Envelope(e);
  }


  len += zx_len_common(&x->gg); 
  return len;
}

/* FUNC(zxwsf_ENC_SO_root) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_root(struct zxwsf_root_s* x, char* p )
{
  struct zx_elem_s* se;

  /* root node has no begin tag */

  /* *** deal with xmlns specifications in exc c14n way */



  p = zx_enc_so_unknown_attrs(p, x->gg.any_attr);


  /* root node has no begin tag */

  
  {
      struct zxwsf_e_Envelope_s* e;
      for (e = x->Envelope; e; e = (struct zxwsf_e_Envelope_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_e_Envelope(e, p);
  }
  {
      struct zxwsf_dise_Envelope_s* e;
      for (e = x->dise_Envelope; e; e = (struct zxwsf_dise_Envelope_s*)e->gg.g.n)
	  p = zxwsf_ENC_SO_dise_Envelope(e, p);
  }


  p = zx_enc_so_unknown_elems_and_content(p, &x->gg);
  

  /* root node has no end tag ither */

  return p;
}

/* FUNC(zxwsf_ENC_WO_root) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_root(struct zxwsf_root_s* x, char* p )
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_root) */

struct zx_str_s* zxwsf_EASY_ENC_SO_root(struct zx_ctx* c, struct zxwsf_root_s* x )
{
  int len = zxwsf_LEN_root(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_root(x, buf ), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_root) */

struct zx_str_s* zxwsf_EASY_ENC_WO_root(struct zx_ctx* c, struct zxwsf_root_s* x )
{
  int len = zxwsf_LEN_root(x );
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_root(x, buf ), buf, len);
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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

/* FUNC(zxwsf_LEN_simple_elem) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order, although this should
 * not really matter as length in wire order should be the same. */

int zxwsf_LEN_simple_elem(struct zx_elem_s* x , int simplelen)
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

/* FUNC(zxwsf_ENC_SO_simple_elem) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zxwsf_ENC_SO_simple_elem(struct zx_elem_s* x, char* p , char* simpletag, int simplelen)
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

/* FUNC(zxwsf_ENC_WO_simple_elem) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zxwsf_ENC_WO_simple_elem(struct zx_elem_s* x, char* p , char* simpletag, int simplelen)
{
  ERR("*** enc_wo not implemented %d", 0);
  return 0;
}

/* FUNC(zxwsf_EASY_ENC_SO_simple_elem) */

struct zx_str_s* zxwsf_EASY_ENC_SO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x , char* simpletag, int simplelen)
{
  int len = zxwsf_LEN_simple_elem(x , simplelen);
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_SO_simple_elem(x, buf , simpletag, simplelen), buf, len);
}

/* FUNC(zxwsf_EASY_ENC_WO_simple_elem) */

struct zx_str_s* zxwsf_EASY_ENC_WO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x , char* simpletag, int simplelen)
{
  int len = zxwsf_LEN_simple_elem(x , simplelen);
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zxwsf_ENC_WO_simple_elem(x, buf , simpletag, simplelen), buf, len);
}


