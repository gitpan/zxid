/* c/zx-idhrxml-enc.c - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Code generation design Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for terms and conditions
 * of use. Some aspects of code generation were driven by schema
 * descriptions that were used as input and may be subject to their own copyright.
 * Code generation uses a template, whose copyright statement follows. */

/** enc-templ.c  -  XML encoder template, used in code generation
 ** Copyright (c) 2006 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 ** Author: Sampo Kellomaki (sampo@iki.fi)
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing.
 ** Licensed under Apache License 2.0, see file COPYING.
 ** Id: enc-templ.c,v 1.24 2007/03/28 20:31:54 sampo Exp $
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

#include <memory.h>
#include "errmac.h"
#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"
#include "c/zx-idhrxml-data.h"
#include "c/zx-ns.h"



#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   idhrxml_Create
#define EL_STRUCT zx_idhrxml_Create_s
#define EL_NS     idhrxml
#define EL_TAG    Create

/* FUNC(zx_LEN_SO_idhrxml_Create) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_idhrxml_Create(struct zx_ctx* c, struct zx_idhrxml_Create_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<idhrxml:Create")-1 + 1 + sizeof("</idhrxml:Create>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  len += zx_attr_so_len(x->itemID, sizeof("dst:itemID")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  len += zx_LEN_SO_lu_Extension(c, e);
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n)
	  len += zx_LEN_SO_idhrxml_Subscription(c, e);
  }
  {
      struct zx_idhrxml_CreateItem_s* e;
      for (e = x->CreateItem; e; e = (struct zx_idhrxml_CreateItem_s*)e->gg.g.n)
	  len += zx_LEN_SO_idhrxml_CreateItem(c, e);
  }
  {
      struct zx_idhrxml_ResultQuery_s* e;
      for (e = x->ResultQuery; e; e = (struct zx_idhrxml_ResultQuery_s*)e->gg.g.n)
	  len += zx_LEN_SO_idhrxml_ResultQuery(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_idhrxml_Create) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_idhrxml_Create(struct zx_ctx* c, struct zx_idhrxml_Create_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Create")-1 + 1 + 2 + sizeof("Create")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->itemID, sizeof("itemID")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  len += zx_LEN_WO_lu_Extension(c, e);
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n)
	  len += zx_LEN_WO_idhrxml_Subscription(c, e);
  }
  {
      struct zx_idhrxml_CreateItem_s* e;
      for (e = x->CreateItem; e; e = (struct zx_idhrxml_CreateItem_s*)e->gg.g.n)
	  len += zx_LEN_WO_idhrxml_CreateItem(c, e);
  }
  {
      struct zx_idhrxml_ResultQuery_s* e;
      for (e = x->ResultQuery; e; e = (struct zx_idhrxml_ResultQuery_s*)e->gg.g.n)
	  len += zx_LEN_WO_idhrxml_ResultQuery(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_idhrxml_Create) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_idhrxml_Create(struct zx_ctx* c, struct zx_idhrxml_Create_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<idhrxml:Create");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  p = zx_attr_so_enc(p, x->itemID, " dst:itemID=\"", sizeof(" dst:itemID=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_lu_Extension(c, e, p);
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n)
	  p = zx_ENC_SO_idhrxml_Subscription(c, e, p);
  }
  {
      struct zx_idhrxml_CreateItem_s* e;
      for (e = x->CreateItem; e; e = (struct zx_idhrxml_CreateItem_s*)e->gg.g.n)
	  p = zx_ENC_SO_idhrxml_CreateItem(c, e, p);
  }
  {
      struct zx_idhrxml_ResultQuery_s* e;
      for (e = x->ResultQuery; e; e = (struct zx_idhrxml_ResultQuery_s*)e->gg.g.n)
	  p = zx_ENC_SO_idhrxml_ResultQuery(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</idhrxml:Create>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_idhrxml_Create) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_idhrxml_Create(struct zx_ctx* c, struct zx_idhrxml_Create_s* x, char* p )
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
  ZX_OUT_MEM(p, "Create", sizeof("Create")-1);
  qq = p;

  /* *** sort the namespaces */
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->itemID, "itemID=\"", sizeof("itemID=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
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

/* FUNC(zx_EASY_ENC_SO_idhrxml_Create) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_idhrxml_Create(struct zx_ctx* c, struct zx_idhrxml_Create_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_idhrxml_Create(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_idhrxml_Create(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_idhrxml_Create) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_idhrxml_Create(struct zx_ctx* c, struct zx_idhrxml_Create_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_idhrxml_Create(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_idhrxml_Create(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   idhrxml_CreateItem
#define EL_STRUCT zx_idhrxml_CreateItem_s
#define EL_NS     idhrxml
#define EL_TAG    CreateItem

/* FUNC(zx_LEN_SO_idhrxml_CreateItem) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_idhrxml_CreateItem(struct zx_ctx* c, struct zx_idhrxml_CreateItem_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<idhrxml:CreateItem")-1 + 1 + sizeof("</idhrxml:CreateItem>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  len += zx_attr_so_len(x->id, sizeof("id")-1);
  len += zx_attr_so_len(x->objectType, sizeof("dst:objectType")-1);
  len += zx_attr_so_len(x->itemID, sizeof("dst:itemID")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_idhrxml_NewData_s* e;
      for (e = x->NewData; e; e = (struct zx_idhrxml_NewData_s*)e->gg.g.n)
	  len += zx_LEN_SO_idhrxml_NewData(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_idhrxml_CreateItem) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_idhrxml_CreateItem(struct zx_ctx* c, struct zx_idhrxml_CreateItem_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("CreateItem")-1 + 1 + 2 + sizeof("CreateItem")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->id, sizeof("id")-1);
  len += zx_attr_wo_len(x->objectType, sizeof("objectType")-1);
  len += zx_attr_wo_len(x->itemID, sizeof("itemID")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_idhrxml_NewData_s* e;
      for (e = x->NewData; e; e = (struct zx_idhrxml_NewData_s*)e->gg.g.n)
	  len += zx_LEN_WO_idhrxml_NewData(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_idhrxml_CreateItem) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_idhrxml_CreateItem(struct zx_ctx* c, struct zx_idhrxml_CreateItem_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<idhrxml:CreateItem");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  p = zx_attr_so_enc(p, x->id, " id=\"", sizeof(" id=\"")-1);
  p = zx_attr_so_enc(p, x->objectType, " dst:objectType=\"", sizeof(" dst:objectType=\"")-1);
  p = zx_attr_so_enc(p, x->itemID, " dst:itemID=\"", sizeof(" dst:itemID=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_idhrxml_NewData_s* e;
      for (e = x->NewData; e; e = (struct zx_idhrxml_NewData_s*)e->gg.g.n)
	  p = zx_ENC_SO_idhrxml_NewData(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</idhrxml:CreateItem>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_idhrxml_CreateItem) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_idhrxml_CreateItem(struct zx_ctx* c, struct zx_idhrxml_CreateItem_s* x, char* p )
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
  ZX_OUT_MEM(p, "CreateItem", sizeof("CreateItem")-1);
  qq = p;

  /* *** sort the namespaces */
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->id, "id=\"", sizeof("id=\"")-1);
  p = zx_attr_wo_enc(p, x->objectType, "objectType=\"", sizeof("objectType=\"")-1);
  p = zx_attr_wo_enc(p, x->itemID, "itemID=\"", sizeof("itemID=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
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

/* FUNC(zx_EASY_ENC_SO_idhrxml_CreateItem) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_idhrxml_CreateItem(struct zx_ctx* c, struct zx_idhrxml_CreateItem_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_idhrxml_CreateItem(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_idhrxml_CreateItem(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_idhrxml_CreateItem) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_idhrxml_CreateItem(struct zx_ctx* c, struct zx_idhrxml_CreateItem_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_idhrxml_CreateItem(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_idhrxml_CreateItem(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   idhrxml_CreateResponse
#define EL_STRUCT zx_idhrxml_CreateResponse_s
#define EL_NS     idhrxml
#define EL_TAG    CreateResponse

/* FUNC(zx_LEN_SO_idhrxml_CreateResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_idhrxml_CreateResponse(struct zx_ctx* c, struct zx_idhrxml_CreateResponse_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<idhrxml:CreateResponse")-1 + 1 + sizeof("</idhrxml:CreateResponse>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  len += zx_attr_so_len(x->timeStamp, sizeof("timeStamp")-1);
  len += zx_attr_so_len(x->itemIDRef, sizeof("dst:itemIDRef")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  len += zx_LEN_SO_lu_Status(c, e);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  len += zx_LEN_SO_lu_Extension(c, e);
  }
  {
      struct zx_idhrxml_ItemData_s* e;
      for (e = x->ItemData; e; e = (struct zx_idhrxml_ItemData_s*)e->gg.g.n)
	  len += zx_LEN_SO_idhrxml_ItemData(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_idhrxml_CreateResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_idhrxml_CreateResponse(struct zx_ctx* c, struct zx_idhrxml_CreateResponse_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("CreateResponse")-1 + 1 + 2 + sizeof("CreateResponse")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->timeStamp, sizeof("timeStamp")-1);
  len += zx_attr_wo_len(x->itemIDRef, sizeof("itemIDRef")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  len += zx_LEN_WO_lu_Status(c, e);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  len += zx_LEN_WO_lu_Extension(c, e);
  }
  {
      struct zx_idhrxml_ItemData_s* e;
      for (e = x->ItemData; e; e = (struct zx_idhrxml_ItemData_s*)e->gg.g.n)
	  len += zx_LEN_WO_idhrxml_ItemData(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_idhrxml_CreateResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_idhrxml_CreateResponse(struct zx_ctx* c, struct zx_idhrxml_CreateResponse_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<idhrxml:CreateResponse");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  p = zx_attr_so_enc(p, x->timeStamp, " timeStamp=\"", sizeof(" timeStamp=\"")-1);
  p = zx_attr_so_enc(p, x->itemIDRef, " dst:itemIDRef=\"", sizeof(" dst:itemIDRef=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  p = zx_ENC_SO_lu_Status(c, e, p);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_lu_Extension(c, e, p);
  }
  {
      struct zx_idhrxml_ItemData_s* e;
      for (e = x->ItemData; e; e = (struct zx_idhrxml_ItemData_s*)e->gg.g.n)
	  p = zx_ENC_SO_idhrxml_ItemData(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</idhrxml:CreateResponse>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_idhrxml_CreateResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_idhrxml_CreateResponse(struct zx_ctx* c, struct zx_idhrxml_CreateResponse_s* x, char* p )
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
  ZX_OUT_MEM(p, "CreateResponse", sizeof("CreateResponse")-1);
  qq = p;

  /* *** sort the namespaces */
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->timeStamp, "timeStamp=\"", sizeof("timeStamp=\"")-1);
  p = zx_attr_wo_enc(p, x->itemIDRef, "itemIDRef=\"", sizeof("itemIDRef=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
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

/* FUNC(zx_EASY_ENC_SO_idhrxml_CreateResponse) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_idhrxml_CreateResponse(struct zx_ctx* c, struct zx_idhrxml_CreateResponse_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_idhrxml_CreateResponse(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_idhrxml_CreateResponse(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_idhrxml_CreateResponse) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_idhrxml_CreateResponse(struct zx_ctx* c, struct zx_idhrxml_CreateResponse_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_idhrxml_CreateResponse(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_idhrxml_CreateResponse(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   idhrxml_Data
#define EL_STRUCT zx_idhrxml_Data_s
#define EL_NS     idhrxml
#define EL_TAG    Data

/* FUNC(zx_LEN_SO_idhrxml_Data) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_idhrxml_Data(struct zx_ctx* c, struct zx_idhrxml_Data_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<idhrxml:Data")-1 + 1 + sizeof("</idhrxml:Data>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  len += zx_attr_so_len(x->notSorted, sizeof("notSorted")-1);
  len += zx_attr_so_len(x->remaining, sizeof("remaining")-1);
  len += zx_attr_so_len(x->nextOffset, sizeof("nextOffset")-1);
  len += zx_attr_so_len(x->setID, sizeof("setID")-1);
  len += zx_attr_so_len(x->itemIDRef, sizeof("dst:itemIDRef")-1);
  len += zx_attr_so_len(x->changeFormat, sizeof("dst:changeFormat")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_hrxml_Candidate_s* e;
      for (e = x->Candidate; e; e = (struct zx_hrxml_Candidate_s*)e->gg.g.n)
	  len += zx_LEN_SO_hrxml_Candidate(c, e);
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n)
	  len += zx_LEN_SO_idhrxml_Subscription(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_idhrxml_Data) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_idhrxml_Data(struct zx_ctx* c, struct zx_idhrxml_Data_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Data")-1 + 1 + 2 + sizeof("Data")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->notSorted, sizeof("notSorted")-1);
  len += zx_attr_wo_len(x->remaining, sizeof("remaining")-1);
  len += zx_attr_wo_len(x->nextOffset, sizeof("nextOffset")-1);
  len += zx_attr_wo_len(x->setID, sizeof("setID")-1);
  len += zx_attr_wo_len(x->itemIDRef, sizeof("itemIDRef")-1);
  len += zx_attr_wo_len(x->changeFormat, sizeof("changeFormat")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_hrxml_Candidate_s* e;
      for (e = x->Candidate; e; e = (struct zx_hrxml_Candidate_s*)e->gg.g.n)
	  len += zx_LEN_WO_hrxml_Candidate(c, e);
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n)
	  len += zx_LEN_WO_idhrxml_Subscription(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_idhrxml_Data) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_idhrxml_Data(struct zx_ctx* c, struct zx_idhrxml_Data_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<idhrxml:Data");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  p = zx_attr_so_enc(p, x->notSorted, " notSorted=\"", sizeof(" notSorted=\"")-1);
  p = zx_attr_so_enc(p, x->remaining, " remaining=\"", sizeof(" remaining=\"")-1);
  p = zx_attr_so_enc(p, x->nextOffset, " nextOffset=\"", sizeof(" nextOffset=\"")-1);
  p = zx_attr_so_enc(p, x->setID, " setID=\"", sizeof(" setID=\"")-1);
  p = zx_attr_so_enc(p, x->itemIDRef, " dst:itemIDRef=\"", sizeof(" dst:itemIDRef=\"")-1);
  p = zx_attr_so_enc(p, x->changeFormat, " dst:changeFormat=\"", sizeof(" dst:changeFormat=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_hrxml_Candidate_s* e;
      for (e = x->Candidate; e; e = (struct zx_hrxml_Candidate_s*)e->gg.g.n)
	  p = zx_ENC_SO_hrxml_Candidate(c, e, p);
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n)
	  p = zx_ENC_SO_idhrxml_Subscription(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</idhrxml:Data>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_idhrxml_Data) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_idhrxml_Data(struct zx_ctx* c, struct zx_idhrxml_Data_s* x, char* p )
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
  ZX_OUT_MEM(p, "Data", sizeof("Data")-1);
  qq = p;

  /* *** sort the namespaces */
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->notSorted, "notSorted=\"", sizeof("notSorted=\"")-1);
  p = zx_attr_wo_enc(p, x->remaining, "remaining=\"", sizeof("remaining=\"")-1);
  p = zx_attr_wo_enc(p, x->nextOffset, "nextOffset=\"", sizeof("nextOffset=\"")-1);
  p = zx_attr_wo_enc(p, x->setID, "setID=\"", sizeof("setID=\"")-1);
  p = zx_attr_wo_enc(p, x->itemIDRef, "itemIDRef=\"", sizeof("itemIDRef=\"")-1);
  p = zx_attr_wo_enc(p, x->changeFormat, "changeFormat=\"", sizeof("changeFormat=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
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

/* FUNC(zx_EASY_ENC_SO_idhrxml_Data) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_idhrxml_Data(struct zx_ctx* c, struct zx_idhrxml_Data_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_idhrxml_Data(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_idhrxml_Data(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_idhrxml_Data) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_idhrxml_Data(struct zx_ctx* c, struct zx_idhrxml_Data_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_idhrxml_Data(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_idhrxml_Data(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   idhrxml_Delete
#define EL_STRUCT zx_idhrxml_Delete_s
#define EL_NS     idhrxml
#define EL_TAG    Delete

/* FUNC(zx_LEN_SO_idhrxml_Delete) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_idhrxml_Delete(struct zx_ctx* c, struct zx_idhrxml_Delete_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<idhrxml:Delete")-1 + 1 + sizeof("</idhrxml:Delete>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  len += zx_attr_so_len(x->itemID, sizeof("dst:itemID")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  len += zx_LEN_SO_lu_Extension(c, e);
  }
  {
      struct zx_idhrxml_DeleteItem_s* e;
      for (e = x->DeleteItem; e; e = (struct zx_idhrxml_DeleteItem_s*)e->gg.g.n)
	  len += zx_LEN_SO_idhrxml_DeleteItem(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_idhrxml_Delete) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_idhrxml_Delete(struct zx_ctx* c, struct zx_idhrxml_Delete_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Delete")-1 + 1 + 2 + sizeof("Delete")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->itemID, sizeof("itemID")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  len += zx_LEN_WO_lu_Extension(c, e);
  }
  {
      struct zx_idhrxml_DeleteItem_s* e;
      for (e = x->DeleteItem; e; e = (struct zx_idhrxml_DeleteItem_s*)e->gg.g.n)
	  len += zx_LEN_WO_idhrxml_DeleteItem(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_idhrxml_Delete) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_idhrxml_Delete(struct zx_ctx* c, struct zx_idhrxml_Delete_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<idhrxml:Delete");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  p = zx_attr_so_enc(p, x->itemID, " dst:itemID=\"", sizeof(" dst:itemID=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_lu_Extension(c, e, p);
  }
  {
      struct zx_idhrxml_DeleteItem_s* e;
      for (e = x->DeleteItem; e; e = (struct zx_idhrxml_DeleteItem_s*)e->gg.g.n)
	  p = zx_ENC_SO_idhrxml_DeleteItem(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</idhrxml:Delete>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_idhrxml_Delete) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_idhrxml_Delete(struct zx_ctx* c, struct zx_idhrxml_Delete_s* x, char* p )
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
  ZX_OUT_MEM(p, "Delete", sizeof("Delete")-1);
  qq = p;

  /* *** sort the namespaces */
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->itemID, "itemID=\"", sizeof("itemID=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
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

/* FUNC(zx_EASY_ENC_SO_idhrxml_Delete) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_idhrxml_Delete(struct zx_ctx* c, struct zx_idhrxml_Delete_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_idhrxml_Delete(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_idhrxml_Delete(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_idhrxml_Delete) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_idhrxml_Delete(struct zx_ctx* c, struct zx_idhrxml_Delete_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_idhrxml_Delete(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_idhrxml_Delete(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   idhrxml_DeleteItem
#define EL_STRUCT zx_idhrxml_DeleteItem_s
#define EL_NS     idhrxml
#define EL_TAG    DeleteItem

/* FUNC(zx_LEN_SO_idhrxml_DeleteItem) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_idhrxml_DeleteItem(struct zx_ctx* c, struct zx_idhrxml_DeleteItem_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<idhrxml:DeleteItem")-1 + 1 + sizeof("</idhrxml:DeleteItem>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  len += zx_attr_so_len(x->notChangedSince, sizeof("notChangedSince")-1);
  len += zx_attr_so_len(x->id, sizeof("id")-1);
  len += zx_attr_so_len(x->objectType, sizeof("dst:objectType")-1);
  len += zx_attr_so_len(x->predefined, sizeof("dst:predefined")-1);
  len += zx_attr_so_len(x->itemID, sizeof("dst:itemID")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = x->Select; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("idhrxml:Select")-1, zx_ns_tab+zx_xmlns_ix_idhrxml);


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_idhrxml_DeleteItem) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_idhrxml_DeleteItem(struct zx_ctx* c, struct zx_idhrxml_DeleteItem_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("DeleteItem")-1 + 1 + 2 + sizeof("DeleteItem")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->notChangedSince, sizeof("notChangedSince")-1);
  len += zx_attr_wo_len(x->id, sizeof("id")-1);
  len += zx_attr_wo_len(x->objectType, sizeof("objectType")-1);
  len += zx_attr_wo_len(x->predefined, sizeof("predefined")-1);
  len += zx_attr_wo_len(x->itemID, sizeof("itemID")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = x->Select; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("Select")-1);


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_idhrxml_DeleteItem) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_idhrxml_DeleteItem(struct zx_ctx* c, struct zx_idhrxml_DeleteItem_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<idhrxml:DeleteItem");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  p = zx_attr_so_enc(p, x->notChangedSince, " notChangedSince=\"", sizeof(" notChangedSince=\"")-1);
  p = zx_attr_so_enc(p, x->id, " id=\"", sizeof(" id=\"")-1);
  p = zx_attr_so_enc(p, x->objectType, " dst:objectType=\"", sizeof(" dst:objectType=\"")-1);
  p = zx_attr_so_enc(p, x->predefined, " dst:predefined=\"", sizeof(" dst:predefined=\"")-1);
  p = zx_attr_so_enc(p, x->itemID, " dst:itemID=\"", sizeof(" dst:itemID=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->Select; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "idhrxml:Select", sizeof("idhrxml:Select")-1, zx_ns_tab+zx_xmlns_ix_idhrxml);

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</idhrxml:DeleteItem>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_idhrxml_DeleteItem) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_idhrxml_DeleteItem(struct zx_ctx* c, struct zx_idhrxml_DeleteItem_s* x, char* p )
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
  ZX_OUT_MEM(p, "DeleteItem", sizeof("DeleteItem")-1);
  qq = p;

  /* *** sort the namespaces */
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->notChangedSince, "notChangedSince=\"", sizeof("notChangedSince=\"")-1);
  p = zx_attr_wo_enc(p, x->id, "id=\"", sizeof("id=\"")-1);
  p = zx_attr_wo_enc(p, x->objectType, "objectType=\"", sizeof("objectType=\"")-1);
  p = zx_attr_wo_enc(p, x->predefined, "predefined=\"", sizeof("predefined=\"")-1);
  p = zx_attr_wo_enc(p, x->itemID, "itemID=\"", sizeof("itemID=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
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

/* FUNC(zx_EASY_ENC_SO_idhrxml_DeleteItem) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_idhrxml_DeleteItem(struct zx_ctx* c, struct zx_idhrxml_DeleteItem_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_idhrxml_DeleteItem(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_idhrxml_DeleteItem(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_idhrxml_DeleteItem) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_idhrxml_DeleteItem(struct zx_ctx* c, struct zx_idhrxml_DeleteItem_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_idhrxml_DeleteItem(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_idhrxml_DeleteItem(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   idhrxml_DeleteResponse
#define EL_STRUCT zx_idhrxml_DeleteResponse_s
#define EL_NS     idhrxml
#define EL_TAG    DeleteResponse

/* FUNC(zx_LEN_SO_idhrxml_DeleteResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_idhrxml_DeleteResponse(struct zx_ctx* c, struct zx_idhrxml_DeleteResponse_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<idhrxml:DeleteResponse")-1 + 1 + sizeof("</idhrxml:DeleteResponse>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  len += zx_attr_so_len(x->itemIDRef, sizeof("itemIDRef")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  len += zx_LEN_SO_lu_Status(c, e);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  len += zx_LEN_SO_lu_Extension(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_idhrxml_DeleteResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_idhrxml_DeleteResponse(struct zx_ctx* c, struct zx_idhrxml_DeleteResponse_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("DeleteResponse")-1 + 1 + 2 + sizeof("DeleteResponse")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->itemIDRef, sizeof("itemIDRef")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  len += zx_LEN_WO_lu_Status(c, e);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  len += zx_LEN_WO_lu_Extension(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_idhrxml_DeleteResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_idhrxml_DeleteResponse(struct zx_ctx* c, struct zx_idhrxml_DeleteResponse_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<idhrxml:DeleteResponse");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  p = zx_attr_so_enc(p, x->itemIDRef, " itemIDRef=\"", sizeof(" itemIDRef=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  p = zx_ENC_SO_lu_Status(c, e, p);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_lu_Extension(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</idhrxml:DeleteResponse>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_idhrxml_DeleteResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_idhrxml_DeleteResponse(struct zx_ctx* c, struct zx_idhrxml_DeleteResponse_s* x, char* p )
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
  ZX_OUT_MEM(p, "DeleteResponse", sizeof("DeleteResponse")-1);
  qq = p;

  /* *** sort the namespaces */
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->itemIDRef, "itemIDRef=\"", sizeof("itemIDRef=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
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

/* FUNC(zx_EASY_ENC_SO_idhrxml_DeleteResponse) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_idhrxml_DeleteResponse(struct zx_ctx* c, struct zx_idhrxml_DeleteResponse_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_idhrxml_DeleteResponse(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_idhrxml_DeleteResponse(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_idhrxml_DeleteResponse) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_idhrxml_DeleteResponse(struct zx_ctx* c, struct zx_idhrxml_DeleteResponse_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_idhrxml_DeleteResponse(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_idhrxml_DeleteResponse(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   idhrxml_ItemData
#define EL_STRUCT zx_idhrxml_ItemData_s
#define EL_NS     idhrxml
#define EL_TAG    ItemData

/* FUNC(zx_LEN_SO_idhrxml_ItemData) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_idhrxml_ItemData(struct zx_ctx* c, struct zx_idhrxml_ItemData_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<idhrxml:ItemData")-1 + 1 + sizeof("</idhrxml:ItemData>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  len += zx_attr_so_len(x->notSorted, sizeof("notSorted")-1);
  len += zx_attr_so_len(x->itemIDRef, sizeof("dst:itemIDRef")-1);
  len += zx_attr_so_len(x->changeFormat, sizeof("dst:changeFormat")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_hrxml_Candidate_s* e;
      for (e = x->Candidate; e; e = (struct zx_hrxml_Candidate_s*)e->gg.g.n)
	  len += zx_LEN_SO_hrxml_Candidate(c, e);
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n)
	  len += zx_LEN_SO_idhrxml_Subscription(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_idhrxml_ItemData) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_idhrxml_ItemData(struct zx_ctx* c, struct zx_idhrxml_ItemData_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ItemData")-1 + 1 + 2 + sizeof("ItemData")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->notSorted, sizeof("notSorted")-1);
  len += zx_attr_wo_len(x->itemIDRef, sizeof("itemIDRef")-1);
  len += zx_attr_wo_len(x->changeFormat, sizeof("changeFormat")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_hrxml_Candidate_s* e;
      for (e = x->Candidate; e; e = (struct zx_hrxml_Candidate_s*)e->gg.g.n)
	  len += zx_LEN_WO_hrxml_Candidate(c, e);
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n)
	  len += zx_LEN_WO_idhrxml_Subscription(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_idhrxml_ItemData) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_idhrxml_ItemData(struct zx_ctx* c, struct zx_idhrxml_ItemData_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<idhrxml:ItemData");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  p = zx_attr_so_enc(p, x->notSorted, " notSorted=\"", sizeof(" notSorted=\"")-1);
  p = zx_attr_so_enc(p, x->itemIDRef, " dst:itemIDRef=\"", sizeof(" dst:itemIDRef=\"")-1);
  p = zx_attr_so_enc(p, x->changeFormat, " dst:changeFormat=\"", sizeof(" dst:changeFormat=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_hrxml_Candidate_s* e;
      for (e = x->Candidate; e; e = (struct zx_hrxml_Candidate_s*)e->gg.g.n)
	  p = zx_ENC_SO_hrxml_Candidate(c, e, p);
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n)
	  p = zx_ENC_SO_idhrxml_Subscription(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</idhrxml:ItemData>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_idhrxml_ItemData) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_idhrxml_ItemData(struct zx_ctx* c, struct zx_idhrxml_ItemData_s* x, char* p )
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
  ZX_OUT_MEM(p, "ItemData", sizeof("ItemData")-1);
  qq = p;

  /* *** sort the namespaces */
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->notSorted, "notSorted=\"", sizeof("notSorted=\"")-1);
  p = zx_attr_wo_enc(p, x->itemIDRef, "itemIDRef=\"", sizeof("itemIDRef=\"")-1);
  p = zx_attr_wo_enc(p, x->changeFormat, "changeFormat=\"", sizeof("changeFormat=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
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

/* FUNC(zx_EASY_ENC_SO_idhrxml_ItemData) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_idhrxml_ItemData(struct zx_ctx* c, struct zx_idhrxml_ItemData_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_idhrxml_ItemData(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_idhrxml_ItemData(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_idhrxml_ItemData) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_idhrxml_ItemData(struct zx_ctx* c, struct zx_idhrxml_ItemData_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_idhrxml_ItemData(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_idhrxml_ItemData(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   idhrxml_Modify
#define EL_STRUCT zx_idhrxml_Modify_s
#define EL_NS     idhrxml
#define EL_TAG    Modify

/* FUNC(zx_LEN_SO_idhrxml_Modify) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_idhrxml_Modify(struct zx_ctx* c, struct zx_idhrxml_Modify_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<idhrxml:Modify")-1 + 1 + sizeof("</idhrxml:Modify>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  len += zx_attr_so_len(x->itemID, sizeof("dst:itemID")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  len += zx_LEN_SO_lu_Extension(c, e);
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n)
	  len += zx_LEN_SO_idhrxml_Subscription(c, e);
  }
  {
      struct zx_idhrxml_ModifyItem_s* e;
      for (e = x->ModifyItem; e; e = (struct zx_idhrxml_ModifyItem_s*)e->gg.g.n)
	  len += zx_LEN_SO_idhrxml_ModifyItem(c, e);
  }
  {
      struct zx_idhrxml_ResultQuery_s* e;
      for (e = x->ResultQuery; e; e = (struct zx_idhrxml_ResultQuery_s*)e->gg.g.n)
	  len += zx_LEN_SO_idhrxml_ResultQuery(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_idhrxml_Modify) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_idhrxml_Modify(struct zx_ctx* c, struct zx_idhrxml_Modify_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Modify")-1 + 1 + 2 + sizeof("Modify")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->itemID, sizeof("itemID")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  len += zx_LEN_WO_lu_Extension(c, e);
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n)
	  len += zx_LEN_WO_idhrxml_Subscription(c, e);
  }
  {
      struct zx_idhrxml_ModifyItem_s* e;
      for (e = x->ModifyItem; e; e = (struct zx_idhrxml_ModifyItem_s*)e->gg.g.n)
	  len += zx_LEN_WO_idhrxml_ModifyItem(c, e);
  }
  {
      struct zx_idhrxml_ResultQuery_s* e;
      for (e = x->ResultQuery; e; e = (struct zx_idhrxml_ResultQuery_s*)e->gg.g.n)
	  len += zx_LEN_WO_idhrxml_ResultQuery(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_idhrxml_Modify) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_idhrxml_Modify(struct zx_ctx* c, struct zx_idhrxml_Modify_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<idhrxml:Modify");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  p = zx_attr_so_enc(p, x->itemID, " dst:itemID=\"", sizeof(" dst:itemID=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_lu_Extension(c, e, p);
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n)
	  p = zx_ENC_SO_idhrxml_Subscription(c, e, p);
  }
  {
      struct zx_idhrxml_ModifyItem_s* e;
      for (e = x->ModifyItem; e; e = (struct zx_idhrxml_ModifyItem_s*)e->gg.g.n)
	  p = zx_ENC_SO_idhrxml_ModifyItem(c, e, p);
  }
  {
      struct zx_idhrxml_ResultQuery_s* e;
      for (e = x->ResultQuery; e; e = (struct zx_idhrxml_ResultQuery_s*)e->gg.g.n)
	  p = zx_ENC_SO_idhrxml_ResultQuery(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</idhrxml:Modify>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_idhrxml_Modify) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_idhrxml_Modify(struct zx_ctx* c, struct zx_idhrxml_Modify_s* x, char* p )
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
  ZX_OUT_MEM(p, "Modify", sizeof("Modify")-1);
  qq = p;

  /* *** sort the namespaces */
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->itemID, "itemID=\"", sizeof("itemID=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
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

/* FUNC(zx_EASY_ENC_SO_idhrxml_Modify) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_idhrxml_Modify(struct zx_ctx* c, struct zx_idhrxml_Modify_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_idhrxml_Modify(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_idhrxml_Modify(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_idhrxml_Modify) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_idhrxml_Modify(struct zx_ctx* c, struct zx_idhrxml_Modify_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_idhrxml_Modify(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_idhrxml_Modify(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   idhrxml_ModifyItem
#define EL_STRUCT zx_idhrxml_ModifyItem_s
#define EL_NS     idhrxml
#define EL_TAG    ModifyItem

/* FUNC(zx_LEN_SO_idhrxml_ModifyItem) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_idhrxml_ModifyItem(struct zx_ctx* c, struct zx_idhrxml_ModifyItem_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<idhrxml:ModifyItem")-1 + 1 + sizeof("</idhrxml:ModifyItem>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  len += zx_attr_so_len(x->notChangedSince, sizeof("notChangedSince")-1);
  len += zx_attr_so_len(x->overrideAllowed, sizeof("overrideAllowed")-1);
  len += zx_attr_so_len(x->id, sizeof("id")-1);
  len += zx_attr_so_len(x->objectType, sizeof("dst:objectType")-1);
  len += zx_attr_so_len(x->predefined, sizeof("dst:predefined")-1);
  len += zx_attr_so_len(x->itemID, sizeof("dst:itemID")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = x->Select; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("idhrxml:Select")-1, zx_ns_tab+zx_xmlns_ix_idhrxml);
  {
      struct zx_idhrxml_NewData_s* e;
      for (e = x->NewData; e; e = (struct zx_idhrxml_NewData_s*)e->gg.g.n)
	  len += zx_LEN_SO_idhrxml_NewData(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_idhrxml_ModifyItem) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_idhrxml_ModifyItem(struct zx_ctx* c, struct zx_idhrxml_ModifyItem_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ModifyItem")-1 + 1 + 2 + sizeof("ModifyItem")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->notChangedSince, sizeof("notChangedSince")-1);
  len += zx_attr_wo_len(x->overrideAllowed, sizeof("overrideAllowed")-1);
  len += zx_attr_wo_len(x->id, sizeof("id")-1);
  len += zx_attr_wo_len(x->objectType, sizeof("objectType")-1);
  len += zx_attr_wo_len(x->predefined, sizeof("predefined")-1);
  len += zx_attr_wo_len(x->itemID, sizeof("itemID")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = x->Select; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("Select")-1);
  {
      struct zx_idhrxml_NewData_s* e;
      for (e = x->NewData; e; e = (struct zx_idhrxml_NewData_s*)e->gg.g.n)
	  len += zx_LEN_WO_idhrxml_NewData(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_idhrxml_ModifyItem) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_idhrxml_ModifyItem(struct zx_ctx* c, struct zx_idhrxml_ModifyItem_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<idhrxml:ModifyItem");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  p = zx_attr_so_enc(p, x->notChangedSince, " notChangedSince=\"", sizeof(" notChangedSince=\"")-1);
  p = zx_attr_so_enc(p, x->overrideAllowed, " overrideAllowed=\"", sizeof(" overrideAllowed=\"")-1);
  p = zx_attr_so_enc(p, x->id, " id=\"", sizeof(" id=\"")-1);
  p = zx_attr_so_enc(p, x->objectType, " dst:objectType=\"", sizeof(" dst:objectType=\"")-1);
  p = zx_attr_so_enc(p, x->predefined, " dst:predefined=\"", sizeof(" dst:predefined=\"")-1);
  p = zx_attr_so_enc(p, x->itemID, " dst:itemID=\"", sizeof(" dst:itemID=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->Select; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "idhrxml:Select", sizeof("idhrxml:Select")-1, zx_ns_tab+zx_xmlns_ix_idhrxml);
  {
      struct zx_idhrxml_NewData_s* e;
      for (e = x->NewData; e; e = (struct zx_idhrxml_NewData_s*)e->gg.g.n)
	  p = zx_ENC_SO_idhrxml_NewData(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</idhrxml:ModifyItem>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_idhrxml_ModifyItem) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_idhrxml_ModifyItem(struct zx_ctx* c, struct zx_idhrxml_ModifyItem_s* x, char* p )
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
  ZX_OUT_MEM(p, "ModifyItem", sizeof("ModifyItem")-1);
  qq = p;

  /* *** sort the namespaces */
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->notChangedSince, "notChangedSince=\"", sizeof("notChangedSince=\"")-1);
  p = zx_attr_wo_enc(p, x->overrideAllowed, "overrideAllowed=\"", sizeof("overrideAllowed=\"")-1);
  p = zx_attr_wo_enc(p, x->id, "id=\"", sizeof("id=\"")-1);
  p = zx_attr_wo_enc(p, x->objectType, "objectType=\"", sizeof("objectType=\"")-1);
  p = zx_attr_wo_enc(p, x->predefined, "predefined=\"", sizeof("predefined=\"")-1);
  p = zx_attr_wo_enc(p, x->itemID, "itemID=\"", sizeof("itemID=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
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

/* FUNC(zx_EASY_ENC_SO_idhrxml_ModifyItem) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_idhrxml_ModifyItem(struct zx_ctx* c, struct zx_idhrxml_ModifyItem_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_idhrxml_ModifyItem(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_idhrxml_ModifyItem(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_idhrxml_ModifyItem) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_idhrxml_ModifyItem(struct zx_ctx* c, struct zx_idhrxml_ModifyItem_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_idhrxml_ModifyItem(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_idhrxml_ModifyItem(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   idhrxml_ModifyResponse
#define EL_STRUCT zx_idhrxml_ModifyResponse_s
#define EL_NS     idhrxml
#define EL_TAG    ModifyResponse

/* FUNC(zx_LEN_SO_idhrxml_ModifyResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_idhrxml_ModifyResponse(struct zx_ctx* c, struct zx_idhrxml_ModifyResponse_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<idhrxml:ModifyResponse")-1 + 1 + sizeof("</idhrxml:ModifyResponse>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  len += zx_attr_so_len(x->timeStamp, sizeof("timeStamp")-1);
  len += zx_attr_so_len(x->itemIDRef, sizeof("dst:itemIDRef")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  len += zx_LEN_SO_lu_Status(c, e);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  len += zx_LEN_SO_lu_Extension(c, e);
  }
  {
      struct zx_idhrxml_ItemData_s* e;
      for (e = x->ItemData; e; e = (struct zx_idhrxml_ItemData_s*)e->gg.g.n)
	  len += zx_LEN_SO_idhrxml_ItemData(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_idhrxml_ModifyResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_idhrxml_ModifyResponse(struct zx_ctx* c, struct zx_idhrxml_ModifyResponse_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ModifyResponse")-1 + 1 + 2 + sizeof("ModifyResponse")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->timeStamp, sizeof("timeStamp")-1);
  len += zx_attr_wo_len(x->itemIDRef, sizeof("itemIDRef")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  len += zx_LEN_WO_lu_Status(c, e);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  len += zx_LEN_WO_lu_Extension(c, e);
  }
  {
      struct zx_idhrxml_ItemData_s* e;
      for (e = x->ItemData; e; e = (struct zx_idhrxml_ItemData_s*)e->gg.g.n)
	  len += zx_LEN_WO_idhrxml_ItemData(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_idhrxml_ModifyResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_idhrxml_ModifyResponse(struct zx_ctx* c, struct zx_idhrxml_ModifyResponse_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<idhrxml:ModifyResponse");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  p = zx_attr_so_enc(p, x->timeStamp, " timeStamp=\"", sizeof(" timeStamp=\"")-1);
  p = zx_attr_so_enc(p, x->itemIDRef, " dst:itemIDRef=\"", sizeof(" dst:itemIDRef=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  p = zx_ENC_SO_lu_Status(c, e, p);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_lu_Extension(c, e, p);
  }
  {
      struct zx_idhrxml_ItemData_s* e;
      for (e = x->ItemData; e; e = (struct zx_idhrxml_ItemData_s*)e->gg.g.n)
	  p = zx_ENC_SO_idhrxml_ItemData(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</idhrxml:ModifyResponse>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_idhrxml_ModifyResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_idhrxml_ModifyResponse(struct zx_ctx* c, struct zx_idhrxml_ModifyResponse_s* x, char* p )
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
  ZX_OUT_MEM(p, "ModifyResponse", sizeof("ModifyResponse")-1);
  qq = p;

  /* *** sort the namespaces */
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->timeStamp, "timeStamp=\"", sizeof("timeStamp=\"")-1);
  p = zx_attr_wo_enc(p, x->itemIDRef, "itemIDRef=\"", sizeof("itemIDRef=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
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

/* FUNC(zx_EASY_ENC_SO_idhrxml_ModifyResponse) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_idhrxml_ModifyResponse(struct zx_ctx* c, struct zx_idhrxml_ModifyResponse_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_idhrxml_ModifyResponse(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_idhrxml_ModifyResponse(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_idhrxml_ModifyResponse) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_idhrxml_ModifyResponse(struct zx_ctx* c, struct zx_idhrxml_ModifyResponse_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_idhrxml_ModifyResponse(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_idhrxml_ModifyResponse(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   idhrxml_NewData
#define EL_STRUCT zx_idhrxml_NewData_s
#define EL_NS     idhrxml
#define EL_TAG    NewData

/* FUNC(zx_LEN_SO_idhrxml_NewData) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_idhrxml_NewData(struct zx_ctx* c, struct zx_idhrxml_NewData_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<idhrxml:NewData")-1 + 1 + sizeof("</idhrxml:NewData>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_hrxml_Candidate_s* e;
      for (e = x->Candidate; e; e = (struct zx_hrxml_Candidate_s*)e->gg.g.n)
	  len += zx_LEN_SO_hrxml_Candidate(c, e);
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n)
	  len += zx_LEN_SO_idhrxml_Subscription(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_idhrxml_NewData) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_idhrxml_NewData(struct zx_ctx* c, struct zx_idhrxml_NewData_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("NewData")-1 + 1 + 2 + sizeof("NewData")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_hrxml_Candidate_s* e;
      for (e = x->Candidate; e; e = (struct zx_hrxml_Candidate_s*)e->gg.g.n)
	  len += zx_LEN_WO_hrxml_Candidate(c, e);
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n)
	  len += zx_LEN_WO_idhrxml_Subscription(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_idhrxml_NewData) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_idhrxml_NewData(struct zx_ctx* c, struct zx_idhrxml_NewData_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<idhrxml:NewData");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_hrxml_Candidate_s* e;
      for (e = x->Candidate; e; e = (struct zx_hrxml_Candidate_s*)e->gg.g.n)
	  p = zx_ENC_SO_hrxml_Candidate(c, e, p);
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n)
	  p = zx_ENC_SO_idhrxml_Subscription(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</idhrxml:NewData>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_idhrxml_NewData) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_idhrxml_NewData(struct zx_ctx* c, struct zx_idhrxml_NewData_s* x, char* p )
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
  ZX_OUT_MEM(p, "NewData", sizeof("NewData")-1);
  qq = p;

  /* *** sort the namespaces */
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
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

/* FUNC(zx_EASY_ENC_SO_idhrxml_NewData) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_idhrxml_NewData(struct zx_ctx* c, struct zx_idhrxml_NewData_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_idhrxml_NewData(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_idhrxml_NewData(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_idhrxml_NewData) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_idhrxml_NewData(struct zx_ctx* c, struct zx_idhrxml_NewData_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_idhrxml_NewData(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_idhrxml_NewData(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   idhrxml_Notification
#define EL_STRUCT zx_idhrxml_Notification_s
#define EL_NS     idhrxml
#define EL_TAG    Notification

/* FUNC(zx_LEN_SO_idhrxml_Notification) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_idhrxml_Notification(struct zx_ctx* c, struct zx_idhrxml_Notification_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<idhrxml:Notification")-1 + 1 + sizeof("</idhrxml:Notification>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  len += zx_attr_so_len(x->id, sizeof("id")-1);
  len += zx_attr_so_len(x->subscriptionID, sizeof("subscriptionID")-1);
  len += zx_attr_so_len(x->expires, sizeof("expires")-1);
  len += zx_attr_so_len(x->endReason, sizeof("endReason")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_lu_TestResult_s* e;
      for (e = x->TestResult; e; e = (struct zx_lu_TestResult_s*)e->gg.g.n)
	  len += zx_LEN_SO_lu_TestResult(c, e);
  }
  {
      struct zx_idhrxml_ItemData_s* e;
      for (e = x->ItemData; e; e = (struct zx_idhrxml_ItemData_s*)e->gg.g.n)
	  len += zx_LEN_SO_idhrxml_ItemData(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_idhrxml_Notification) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_idhrxml_Notification(struct zx_ctx* c, struct zx_idhrxml_Notification_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Notification")-1 + 1 + 2 + sizeof("Notification")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->id, sizeof("id")-1);
  len += zx_attr_wo_len(x->subscriptionID, sizeof("subscriptionID")-1);
  len += zx_attr_wo_len(x->expires, sizeof("expires")-1);
  len += zx_attr_wo_len(x->endReason, sizeof("endReason")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_lu_TestResult_s* e;
      for (e = x->TestResult; e; e = (struct zx_lu_TestResult_s*)e->gg.g.n)
	  len += zx_LEN_WO_lu_TestResult(c, e);
  }
  {
      struct zx_idhrxml_ItemData_s* e;
      for (e = x->ItemData; e; e = (struct zx_idhrxml_ItemData_s*)e->gg.g.n)
	  len += zx_LEN_WO_idhrxml_ItemData(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_idhrxml_Notification) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_idhrxml_Notification(struct zx_ctx* c, struct zx_idhrxml_Notification_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<idhrxml:Notification");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  p = zx_attr_so_enc(p, x->id, " id=\"", sizeof(" id=\"")-1);
  p = zx_attr_so_enc(p, x->subscriptionID, " subscriptionID=\"", sizeof(" subscriptionID=\"")-1);
  p = zx_attr_so_enc(p, x->expires, " expires=\"", sizeof(" expires=\"")-1);
  p = zx_attr_so_enc(p, x->endReason, " endReason=\"", sizeof(" endReason=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_lu_TestResult_s* e;
      for (e = x->TestResult; e; e = (struct zx_lu_TestResult_s*)e->gg.g.n)
	  p = zx_ENC_SO_lu_TestResult(c, e, p);
  }
  {
      struct zx_idhrxml_ItemData_s* e;
      for (e = x->ItemData; e; e = (struct zx_idhrxml_ItemData_s*)e->gg.g.n)
	  p = zx_ENC_SO_idhrxml_ItemData(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</idhrxml:Notification>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_idhrxml_Notification) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_idhrxml_Notification(struct zx_ctx* c, struct zx_idhrxml_Notification_s* x, char* p )
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
  ZX_OUT_MEM(p, "Notification", sizeof("Notification")-1);
  qq = p;

  /* *** sort the namespaces */
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->id, "id=\"", sizeof("id=\"")-1);
  p = zx_attr_wo_enc(p, x->subscriptionID, "subscriptionID=\"", sizeof("subscriptionID=\"")-1);
  p = zx_attr_wo_enc(p, x->expires, "expires=\"", sizeof("expires=\"")-1);
  p = zx_attr_wo_enc(p, x->endReason, "endReason=\"", sizeof("endReason=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
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

/* FUNC(zx_EASY_ENC_SO_idhrxml_Notification) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_idhrxml_Notification(struct zx_ctx* c, struct zx_idhrxml_Notification_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_idhrxml_Notification(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_idhrxml_Notification(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_idhrxml_Notification) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_idhrxml_Notification(struct zx_ctx* c, struct zx_idhrxml_Notification_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_idhrxml_Notification(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_idhrxml_Notification(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   idhrxml_Notify
#define EL_STRUCT zx_idhrxml_Notify_s
#define EL_NS     idhrxml
#define EL_TAG    Notify

/* FUNC(zx_LEN_SO_idhrxml_Notify) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_idhrxml_Notify(struct zx_ctx* c, struct zx_idhrxml_Notify_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<idhrxml:Notify")-1 + 1 + sizeof("</idhrxml:Notify>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  len += zx_attr_so_len(x->timeStamp, sizeof("timeStamp")-1);
  len += zx_attr_so_len(x->itemID, sizeof("dst:itemID")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  len += zx_LEN_SO_lu_Extension(c, e);
  }
  {
      struct zx_idhrxml_Notification_s* e;
      for (e = x->Notification; e; e = (struct zx_idhrxml_Notification_s*)e->gg.g.n)
	  len += zx_LEN_SO_idhrxml_Notification(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_idhrxml_Notify) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_idhrxml_Notify(struct zx_ctx* c, struct zx_idhrxml_Notify_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Notify")-1 + 1 + 2 + sizeof("Notify")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->timeStamp, sizeof("timeStamp")-1);
  len += zx_attr_wo_len(x->itemID, sizeof("itemID")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  len += zx_LEN_WO_lu_Extension(c, e);
  }
  {
      struct zx_idhrxml_Notification_s* e;
      for (e = x->Notification; e; e = (struct zx_idhrxml_Notification_s*)e->gg.g.n)
	  len += zx_LEN_WO_idhrxml_Notification(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_idhrxml_Notify) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_idhrxml_Notify(struct zx_ctx* c, struct zx_idhrxml_Notify_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<idhrxml:Notify");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  p = zx_attr_so_enc(p, x->timeStamp, " timeStamp=\"", sizeof(" timeStamp=\"")-1);
  p = zx_attr_so_enc(p, x->itemID, " dst:itemID=\"", sizeof(" dst:itemID=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_lu_Extension(c, e, p);
  }
  {
      struct zx_idhrxml_Notification_s* e;
      for (e = x->Notification; e; e = (struct zx_idhrxml_Notification_s*)e->gg.g.n)
	  p = zx_ENC_SO_idhrxml_Notification(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</idhrxml:Notify>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_idhrxml_Notify) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_idhrxml_Notify(struct zx_ctx* c, struct zx_idhrxml_Notify_s* x, char* p )
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
  ZX_OUT_MEM(p, "Notify", sizeof("Notify")-1);
  qq = p;

  /* *** sort the namespaces */
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->timeStamp, "timeStamp=\"", sizeof("timeStamp=\"")-1);
  p = zx_attr_wo_enc(p, x->itemID, "itemID=\"", sizeof("itemID=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
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

/* FUNC(zx_EASY_ENC_SO_idhrxml_Notify) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_idhrxml_Notify(struct zx_ctx* c, struct zx_idhrxml_Notify_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_idhrxml_Notify(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_idhrxml_Notify(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_idhrxml_Notify) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_idhrxml_Notify(struct zx_ctx* c, struct zx_idhrxml_Notify_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_idhrxml_Notify(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_idhrxml_Notify(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   idhrxml_NotifyResponse
#define EL_STRUCT zx_idhrxml_NotifyResponse_s
#define EL_NS     idhrxml
#define EL_TAG    NotifyResponse

/* FUNC(zx_LEN_SO_idhrxml_NotifyResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_idhrxml_NotifyResponse(struct zx_ctx* c, struct zx_idhrxml_NotifyResponse_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<idhrxml:NotifyResponse")-1 + 1 + sizeof("</idhrxml:NotifyResponse>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  len += zx_attr_so_len(x->itemIDRef, sizeof("itemIDRef")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  len += zx_LEN_SO_lu_Status(c, e);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  len += zx_LEN_SO_lu_Extension(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_idhrxml_NotifyResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_idhrxml_NotifyResponse(struct zx_ctx* c, struct zx_idhrxml_NotifyResponse_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("NotifyResponse")-1 + 1 + 2 + sizeof("NotifyResponse")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->itemIDRef, sizeof("itemIDRef")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  len += zx_LEN_WO_lu_Status(c, e);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  len += zx_LEN_WO_lu_Extension(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_idhrxml_NotifyResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_idhrxml_NotifyResponse(struct zx_ctx* c, struct zx_idhrxml_NotifyResponse_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<idhrxml:NotifyResponse");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  p = zx_attr_so_enc(p, x->itemIDRef, " itemIDRef=\"", sizeof(" itemIDRef=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  p = zx_ENC_SO_lu_Status(c, e, p);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_lu_Extension(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</idhrxml:NotifyResponse>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_idhrxml_NotifyResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_idhrxml_NotifyResponse(struct zx_ctx* c, struct zx_idhrxml_NotifyResponse_s* x, char* p )
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
  ZX_OUT_MEM(p, "NotifyResponse", sizeof("NotifyResponse")-1);
  qq = p;

  /* *** sort the namespaces */
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->itemIDRef, "itemIDRef=\"", sizeof("itemIDRef=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
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

/* FUNC(zx_EASY_ENC_SO_idhrxml_NotifyResponse) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_idhrxml_NotifyResponse(struct zx_ctx* c, struct zx_idhrxml_NotifyResponse_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_idhrxml_NotifyResponse(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_idhrxml_NotifyResponse(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_idhrxml_NotifyResponse) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_idhrxml_NotifyResponse(struct zx_ctx* c, struct zx_idhrxml_NotifyResponse_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_idhrxml_NotifyResponse(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_idhrxml_NotifyResponse(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   idhrxml_Query
#define EL_STRUCT zx_idhrxml_Query_s
#define EL_NS     idhrxml
#define EL_TAG    Query

/* FUNC(zx_LEN_SO_idhrxml_Query) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_idhrxml_Query(struct zx_ctx* c, struct zx_idhrxml_Query_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<idhrxml:Query")-1 + 1 + sizeof("</idhrxml:Query>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  len += zx_attr_so_len(x->itemID, sizeof("dst:itemID")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  len += zx_LEN_SO_lu_Extension(c, e);
  }
  {
      struct zx_idhrxml_TestItem_s* e;
      for (e = x->TestItem; e; e = (struct zx_idhrxml_TestItem_s*)e->gg.g.n)
	  len += zx_LEN_SO_idhrxml_TestItem(c, e);
  }
  {
      struct zx_idhrxml_QueryItem_s* e;
      for (e = x->QueryItem; e; e = (struct zx_idhrxml_QueryItem_s*)e->gg.g.n)
	  len += zx_LEN_SO_idhrxml_QueryItem(c, e);
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n)
	  len += zx_LEN_SO_idhrxml_Subscription(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_idhrxml_Query) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_idhrxml_Query(struct zx_ctx* c, struct zx_idhrxml_Query_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Query")-1 + 1 + 2 + sizeof("Query")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->itemID, sizeof("itemID")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  len += zx_LEN_WO_lu_Extension(c, e);
  }
  {
      struct zx_idhrxml_TestItem_s* e;
      for (e = x->TestItem; e; e = (struct zx_idhrxml_TestItem_s*)e->gg.g.n)
	  len += zx_LEN_WO_idhrxml_TestItem(c, e);
  }
  {
      struct zx_idhrxml_QueryItem_s* e;
      for (e = x->QueryItem; e; e = (struct zx_idhrxml_QueryItem_s*)e->gg.g.n)
	  len += zx_LEN_WO_idhrxml_QueryItem(c, e);
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n)
	  len += zx_LEN_WO_idhrxml_Subscription(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_idhrxml_Query) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_idhrxml_Query(struct zx_ctx* c, struct zx_idhrxml_Query_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<idhrxml:Query");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  p = zx_attr_so_enc(p, x->itemID, " dst:itemID=\"", sizeof(" dst:itemID=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_lu_Extension(c, e, p);
  }
  {
      struct zx_idhrxml_TestItem_s* e;
      for (e = x->TestItem; e; e = (struct zx_idhrxml_TestItem_s*)e->gg.g.n)
	  p = zx_ENC_SO_idhrxml_TestItem(c, e, p);
  }
  {
      struct zx_idhrxml_QueryItem_s* e;
      for (e = x->QueryItem; e; e = (struct zx_idhrxml_QueryItem_s*)e->gg.g.n)
	  p = zx_ENC_SO_idhrxml_QueryItem(c, e, p);
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n)
	  p = zx_ENC_SO_idhrxml_Subscription(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</idhrxml:Query>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_idhrxml_Query) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_idhrxml_Query(struct zx_ctx* c, struct zx_idhrxml_Query_s* x, char* p )
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
  ZX_OUT_MEM(p, "Query", sizeof("Query")-1);
  qq = p;

  /* *** sort the namespaces */
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->itemID, "itemID=\"", sizeof("itemID=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
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

/* FUNC(zx_EASY_ENC_SO_idhrxml_Query) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_idhrxml_Query(struct zx_ctx* c, struct zx_idhrxml_Query_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_idhrxml_Query(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_idhrxml_Query(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_idhrxml_Query) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_idhrxml_Query(struct zx_ctx* c, struct zx_idhrxml_Query_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_idhrxml_Query(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_idhrxml_Query(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   idhrxml_QueryItem
#define EL_STRUCT zx_idhrxml_QueryItem_s
#define EL_NS     idhrxml
#define EL_TAG    QueryItem

/* FUNC(zx_LEN_SO_idhrxml_QueryItem) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_idhrxml_QueryItem(struct zx_ctx* c, struct zx_idhrxml_QueryItem_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<idhrxml:QueryItem")-1 + 1 + sizeof("</idhrxml:QueryItem>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  len += zx_attr_so_len(x->contingency, sizeof("contingency")-1);
  len += zx_attr_so_len(x->includeCommonAttributes, sizeof("includeCommonAttributes")-1);
  len += zx_attr_so_len(x->changedSince, sizeof("changedSince")-1);
  len += zx_attr_so_len(x->count, sizeof("count")-1);
  len += zx_attr_so_len(x->offset, sizeof("offset")-1);
  len += zx_attr_so_len(x->setID, sizeof("setID")-1);
  len += zx_attr_so_len(x->setReq, sizeof("setReq")-1);
  len += zx_attr_so_len(x->objectType, sizeof("dst:objectType")-1);
  len += zx_attr_so_len(x->predefined, sizeof("dst:predefined")-1);
  len += zx_attr_so_len(x->itemIDRef, sizeof("dst:itemIDRef")-1);
  len += zx_attr_so_len(x->itemID, sizeof("dst:itemID")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = x->ChangeFormat; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("dst:ChangeFormat")-1, zx_ns_tab+zx_xmlns_ix_dst);
  for (se = x->Select; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("idhrxml:Select")-1, zx_ns_tab+zx_xmlns_ix_idhrxml);
  for (se = x->Sort; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("idhrxml:Sort")-1, zx_ns_tab+zx_xmlns_ix_idhrxml);


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_idhrxml_QueryItem) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_idhrxml_QueryItem(struct zx_ctx* c, struct zx_idhrxml_QueryItem_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("QueryItem")-1 + 1 + 2 + sizeof("QueryItem")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->contingency, sizeof("contingency")-1);
  len += zx_attr_wo_len(x->includeCommonAttributes, sizeof("includeCommonAttributes")-1);
  len += zx_attr_wo_len(x->changedSince, sizeof("changedSince")-1);
  len += zx_attr_wo_len(x->count, sizeof("count")-1);
  len += zx_attr_wo_len(x->offset, sizeof("offset")-1);
  len += zx_attr_wo_len(x->setID, sizeof("setID")-1);
  len += zx_attr_wo_len(x->setReq, sizeof("setReq")-1);
  len += zx_attr_wo_len(x->objectType, sizeof("objectType")-1);
  len += zx_attr_wo_len(x->predefined, sizeof("predefined")-1);
  len += zx_attr_wo_len(x->itemIDRef, sizeof("itemIDRef")-1);
  len += zx_attr_wo_len(x->itemID, sizeof("itemID")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = x->ChangeFormat; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("ChangeFormat")-1);
  for (se = x->Select; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("Select")-1);
  for (se = x->Sort; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("Sort")-1);


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_idhrxml_QueryItem) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_idhrxml_QueryItem(struct zx_ctx* c, struct zx_idhrxml_QueryItem_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<idhrxml:QueryItem");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  p = zx_attr_so_enc(p, x->contingency, " contingency=\"", sizeof(" contingency=\"")-1);
  p = zx_attr_so_enc(p, x->includeCommonAttributes, " includeCommonAttributes=\"", sizeof(" includeCommonAttributes=\"")-1);
  p = zx_attr_so_enc(p, x->changedSince, " changedSince=\"", sizeof(" changedSince=\"")-1);
  p = zx_attr_so_enc(p, x->count, " count=\"", sizeof(" count=\"")-1);
  p = zx_attr_so_enc(p, x->offset, " offset=\"", sizeof(" offset=\"")-1);
  p = zx_attr_so_enc(p, x->setID, " setID=\"", sizeof(" setID=\"")-1);
  p = zx_attr_so_enc(p, x->setReq, " setReq=\"", sizeof(" setReq=\"")-1);
  p = zx_attr_so_enc(p, x->objectType, " dst:objectType=\"", sizeof(" dst:objectType=\"")-1);
  p = zx_attr_so_enc(p, x->predefined, " dst:predefined=\"", sizeof(" dst:predefined=\"")-1);
  p = zx_attr_so_enc(p, x->itemIDRef, " dst:itemIDRef=\"", sizeof(" dst:itemIDRef=\"")-1);
  p = zx_attr_so_enc(p, x->itemID, " dst:itemID=\"", sizeof(" dst:itemID=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->ChangeFormat; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "dst:ChangeFormat", sizeof("dst:ChangeFormat")-1, zx_ns_tab+zx_xmlns_ix_dst);
  for (se = x->Select; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "idhrxml:Select", sizeof("idhrxml:Select")-1, zx_ns_tab+zx_xmlns_ix_idhrxml);
  for (se = x->Sort; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "idhrxml:Sort", sizeof("idhrxml:Sort")-1, zx_ns_tab+zx_xmlns_ix_idhrxml);

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</idhrxml:QueryItem>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_idhrxml_QueryItem) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_idhrxml_QueryItem(struct zx_ctx* c, struct zx_idhrxml_QueryItem_s* x, char* p )
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
  ZX_OUT_MEM(p, "QueryItem", sizeof("QueryItem")-1);
  qq = p;

  /* *** sort the namespaces */
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->contingency, "contingency=\"", sizeof("contingency=\"")-1);
  p = zx_attr_wo_enc(p, x->includeCommonAttributes, "includeCommonAttributes=\"", sizeof("includeCommonAttributes=\"")-1);
  p = zx_attr_wo_enc(p, x->changedSince, "changedSince=\"", sizeof("changedSince=\"")-1);
  p = zx_attr_wo_enc(p, x->count, "count=\"", sizeof("count=\"")-1);
  p = zx_attr_wo_enc(p, x->offset, "offset=\"", sizeof("offset=\"")-1);
  p = zx_attr_wo_enc(p, x->setID, "setID=\"", sizeof("setID=\"")-1);
  p = zx_attr_wo_enc(p, x->setReq, "setReq=\"", sizeof("setReq=\"")-1);
  p = zx_attr_wo_enc(p, x->objectType, "objectType=\"", sizeof("objectType=\"")-1);
  p = zx_attr_wo_enc(p, x->predefined, "predefined=\"", sizeof("predefined=\"")-1);
  p = zx_attr_wo_enc(p, x->itemIDRef, "itemIDRef=\"", sizeof("itemIDRef=\"")-1);
  p = zx_attr_wo_enc(p, x->itemID, "itemID=\"", sizeof("itemID=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
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

/* FUNC(zx_EASY_ENC_SO_idhrxml_QueryItem) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_idhrxml_QueryItem(struct zx_ctx* c, struct zx_idhrxml_QueryItem_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_idhrxml_QueryItem(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_idhrxml_QueryItem(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_idhrxml_QueryItem) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_idhrxml_QueryItem(struct zx_ctx* c, struct zx_idhrxml_QueryItem_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_idhrxml_QueryItem(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_idhrxml_QueryItem(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   idhrxml_QueryResponse
#define EL_STRUCT zx_idhrxml_QueryResponse_s
#define EL_NS     idhrxml
#define EL_TAG    QueryResponse

/* FUNC(zx_LEN_SO_idhrxml_QueryResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_idhrxml_QueryResponse(struct zx_ctx* c, struct zx_idhrxml_QueryResponse_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<idhrxml:QueryResponse")-1 + 1 + sizeof("</idhrxml:QueryResponse>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  len += zx_attr_so_len(x->timeStamp, sizeof("timeStamp")-1);
  len += zx_attr_so_len(x->itemIDRef, sizeof("dst:itemIDRef")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  len += zx_LEN_SO_lu_Status(c, e);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  len += zx_LEN_SO_lu_Extension(c, e);
  }
  {
      struct zx_dst_TestResult_s* e;
      for (e = x->TestResult; e; e = (struct zx_dst_TestResult_s*)e->gg.g.n)
	  len += zx_LEN_SO_dst_TestResult(c, e);
  }
  {
      struct zx_idhrxml_Data_s* e;
      for (e = x->Data; e; e = (struct zx_idhrxml_Data_s*)e->gg.g.n)
	  len += zx_LEN_SO_idhrxml_Data(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_idhrxml_QueryResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_idhrxml_QueryResponse(struct zx_ctx* c, struct zx_idhrxml_QueryResponse_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("QueryResponse")-1 + 1 + 2 + sizeof("QueryResponse")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->timeStamp, sizeof("timeStamp")-1);
  len += zx_attr_wo_len(x->itemIDRef, sizeof("itemIDRef")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  len += zx_LEN_WO_lu_Status(c, e);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  len += zx_LEN_WO_lu_Extension(c, e);
  }
  {
      struct zx_dst_TestResult_s* e;
      for (e = x->TestResult; e; e = (struct zx_dst_TestResult_s*)e->gg.g.n)
	  len += zx_LEN_WO_dst_TestResult(c, e);
  }
  {
      struct zx_idhrxml_Data_s* e;
      for (e = x->Data; e; e = (struct zx_idhrxml_Data_s*)e->gg.g.n)
	  len += zx_LEN_WO_idhrxml_Data(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_idhrxml_QueryResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_idhrxml_QueryResponse(struct zx_ctx* c, struct zx_idhrxml_QueryResponse_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<idhrxml:QueryResponse");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  p = zx_attr_so_enc(p, x->timeStamp, " timeStamp=\"", sizeof(" timeStamp=\"")-1);
  p = zx_attr_so_enc(p, x->itemIDRef, " dst:itemIDRef=\"", sizeof(" dst:itemIDRef=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  p = zx_ENC_SO_lu_Status(c, e, p);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_lu_Extension(c, e, p);
  }
  {
      struct zx_dst_TestResult_s* e;
      for (e = x->TestResult; e; e = (struct zx_dst_TestResult_s*)e->gg.g.n)
	  p = zx_ENC_SO_dst_TestResult(c, e, p);
  }
  {
      struct zx_idhrxml_Data_s* e;
      for (e = x->Data; e; e = (struct zx_idhrxml_Data_s*)e->gg.g.n)
	  p = zx_ENC_SO_idhrxml_Data(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</idhrxml:QueryResponse>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_idhrxml_QueryResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_idhrxml_QueryResponse(struct zx_ctx* c, struct zx_idhrxml_QueryResponse_s* x, char* p )
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
  ZX_OUT_MEM(p, "QueryResponse", sizeof("QueryResponse")-1);
  qq = p;

  /* *** sort the namespaces */
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->timeStamp, "timeStamp=\"", sizeof("timeStamp=\"")-1);
  p = zx_attr_wo_enc(p, x->itemIDRef, "itemIDRef=\"", sizeof("itemIDRef=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
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

/* FUNC(zx_EASY_ENC_SO_idhrxml_QueryResponse) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_idhrxml_QueryResponse(struct zx_ctx* c, struct zx_idhrxml_QueryResponse_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_idhrxml_QueryResponse(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_idhrxml_QueryResponse(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_idhrxml_QueryResponse) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_idhrxml_QueryResponse(struct zx_ctx* c, struct zx_idhrxml_QueryResponse_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_idhrxml_QueryResponse(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_idhrxml_QueryResponse(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   idhrxml_ResultQuery
#define EL_STRUCT zx_idhrxml_ResultQuery_s
#define EL_NS     idhrxml
#define EL_TAG    ResultQuery

/* FUNC(zx_LEN_SO_idhrxml_ResultQuery) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_idhrxml_ResultQuery(struct zx_ctx* c, struct zx_idhrxml_ResultQuery_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<idhrxml:ResultQuery")-1 + 1 + sizeof("</idhrxml:ResultQuery>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  len += zx_attr_so_len(x->contingency, sizeof("contingency")-1);
  len += zx_attr_so_len(x->includeCommonAttributes, sizeof("includeCommonAttributes")-1);
  len += zx_attr_so_len(x->changedSince, sizeof("changedSince")-1);
  len += zx_attr_so_len(x->objectType, sizeof("dst:objectType")-1);
  len += zx_attr_so_len(x->predefined, sizeof("dst:predefined")-1);
  len += zx_attr_so_len(x->itemIDRef, sizeof("dst:itemIDRef")-1);
  len += zx_attr_so_len(x->itemID, sizeof("dst:itemID")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = x->ChangeFormat; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("dst:ChangeFormat")-1, zx_ns_tab+zx_xmlns_ix_dst);
  for (se = x->Select; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("idhrxml:Select")-1, zx_ns_tab+zx_xmlns_ix_idhrxml);
  for (se = x->Sort; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("idhrxml:Sort")-1, zx_ns_tab+zx_xmlns_ix_idhrxml);


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_idhrxml_ResultQuery) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_idhrxml_ResultQuery(struct zx_ctx* c, struct zx_idhrxml_ResultQuery_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ResultQuery")-1 + 1 + 2 + sizeof("ResultQuery")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->contingency, sizeof("contingency")-1);
  len += zx_attr_wo_len(x->includeCommonAttributes, sizeof("includeCommonAttributes")-1);
  len += zx_attr_wo_len(x->changedSince, sizeof("changedSince")-1);
  len += zx_attr_wo_len(x->objectType, sizeof("objectType")-1);
  len += zx_attr_wo_len(x->predefined, sizeof("predefined")-1);
  len += zx_attr_wo_len(x->itemIDRef, sizeof("itemIDRef")-1);
  len += zx_attr_wo_len(x->itemID, sizeof("itemID")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = x->ChangeFormat; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("ChangeFormat")-1);
  for (se = x->Select; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("Select")-1);
  for (se = x->Sort; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("Sort")-1);


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_idhrxml_ResultQuery) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_idhrxml_ResultQuery(struct zx_ctx* c, struct zx_idhrxml_ResultQuery_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<idhrxml:ResultQuery");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  p = zx_attr_so_enc(p, x->contingency, " contingency=\"", sizeof(" contingency=\"")-1);
  p = zx_attr_so_enc(p, x->includeCommonAttributes, " includeCommonAttributes=\"", sizeof(" includeCommonAttributes=\"")-1);
  p = zx_attr_so_enc(p, x->changedSince, " changedSince=\"", sizeof(" changedSince=\"")-1);
  p = zx_attr_so_enc(p, x->objectType, " dst:objectType=\"", sizeof(" dst:objectType=\"")-1);
  p = zx_attr_so_enc(p, x->predefined, " dst:predefined=\"", sizeof(" dst:predefined=\"")-1);
  p = zx_attr_so_enc(p, x->itemIDRef, " dst:itemIDRef=\"", sizeof(" dst:itemIDRef=\"")-1);
  p = zx_attr_so_enc(p, x->itemID, " dst:itemID=\"", sizeof(" dst:itemID=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->ChangeFormat; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "dst:ChangeFormat", sizeof("dst:ChangeFormat")-1, zx_ns_tab+zx_xmlns_ix_dst);
  for (se = x->Select; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "idhrxml:Select", sizeof("idhrxml:Select")-1, zx_ns_tab+zx_xmlns_ix_idhrxml);
  for (se = x->Sort; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "idhrxml:Sort", sizeof("idhrxml:Sort")-1, zx_ns_tab+zx_xmlns_ix_idhrxml);

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</idhrxml:ResultQuery>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_idhrxml_ResultQuery) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_idhrxml_ResultQuery(struct zx_ctx* c, struct zx_idhrxml_ResultQuery_s* x, char* p )
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
  ZX_OUT_MEM(p, "ResultQuery", sizeof("ResultQuery")-1);
  qq = p;

  /* *** sort the namespaces */
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->contingency, "contingency=\"", sizeof("contingency=\"")-1);
  p = zx_attr_wo_enc(p, x->includeCommonAttributes, "includeCommonAttributes=\"", sizeof("includeCommonAttributes=\"")-1);
  p = zx_attr_wo_enc(p, x->changedSince, "changedSince=\"", sizeof("changedSince=\"")-1);
  p = zx_attr_wo_enc(p, x->objectType, "objectType=\"", sizeof("objectType=\"")-1);
  p = zx_attr_wo_enc(p, x->predefined, "predefined=\"", sizeof("predefined=\"")-1);
  p = zx_attr_wo_enc(p, x->itemIDRef, "itemIDRef=\"", sizeof("itemIDRef=\"")-1);
  p = zx_attr_wo_enc(p, x->itemID, "itemID=\"", sizeof("itemID=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
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

/* FUNC(zx_EASY_ENC_SO_idhrxml_ResultQuery) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_idhrxml_ResultQuery(struct zx_ctx* c, struct zx_idhrxml_ResultQuery_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_idhrxml_ResultQuery(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_idhrxml_ResultQuery(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_idhrxml_ResultQuery) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_idhrxml_ResultQuery(struct zx_ctx* c, struct zx_idhrxml_ResultQuery_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_idhrxml_ResultQuery(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_idhrxml_ResultQuery(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   idhrxml_Subscription
#define EL_STRUCT zx_idhrxml_Subscription_s
#define EL_NS     idhrxml
#define EL_TAG    Subscription

/* FUNC(zx_LEN_SO_idhrxml_Subscription) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_idhrxml_Subscription(struct zx_ctx* c, struct zx_idhrxml_Subscription_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<idhrxml:Subscription")-1 + 1 + sizeof("</idhrxml:Subscription>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  len += zx_attr_so_len(x->subscriptionID, sizeof("subscriptionID")-1);
  len += zx_attr_so_len(x->notifyToRef, sizeof("notifyToRef")-1);
  len += zx_attr_so_len(x->adminNotifyToRef, sizeof("adminNotifyToRef")-1);
  len += zx_attr_so_len(x->starts, sizeof("starts")-1);
  len += zx_attr_so_len(x->expires, sizeof("expires")-1);
  len += zx_attr_so_len(x->id, sizeof("id")-1);
  len += zx_attr_so_len(x->includeData, sizeof("includeData")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_subs_RefItem_s* e;
      for (e = x->RefItem; e; e = (struct zx_subs_RefItem_s*)e->gg.g.n)
	  len += zx_LEN_SO_subs_RefItem(c, e);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  len += zx_LEN_SO_lu_Extension(c, e);
  }
  {
      struct zx_idhrxml_ResultQuery_s* e;
      for (e = x->ResultQuery; e; e = (struct zx_idhrxml_ResultQuery_s*)e->gg.g.n)
	  len += zx_LEN_SO_idhrxml_ResultQuery(c, e);
  }
  for (se = x->Aggregation; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("idhrxml:Aggregation")-1, zx_ns_tab+zx_xmlns_ix_idhrxml);
  for (se = x->Trigger; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("idhrxml:Trigger")-1, zx_ns_tab+zx_xmlns_ix_idhrxml);


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_idhrxml_Subscription) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_idhrxml_Subscription(struct zx_ctx* c, struct zx_idhrxml_Subscription_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Subscription")-1 + 1 + 2 + sizeof("Subscription")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->subscriptionID, sizeof("subscriptionID")-1);
  len += zx_attr_wo_len(x->notifyToRef, sizeof("notifyToRef")-1);
  len += zx_attr_wo_len(x->adminNotifyToRef, sizeof("adminNotifyToRef")-1);
  len += zx_attr_wo_len(x->starts, sizeof("starts")-1);
  len += zx_attr_wo_len(x->expires, sizeof("expires")-1);
  len += zx_attr_wo_len(x->id, sizeof("id")-1);
  len += zx_attr_wo_len(x->includeData, sizeof("includeData")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_subs_RefItem_s* e;
      for (e = x->RefItem; e; e = (struct zx_subs_RefItem_s*)e->gg.g.n)
	  len += zx_LEN_WO_subs_RefItem(c, e);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  len += zx_LEN_WO_lu_Extension(c, e);
  }
  {
      struct zx_idhrxml_ResultQuery_s* e;
      for (e = x->ResultQuery; e; e = (struct zx_idhrxml_ResultQuery_s*)e->gg.g.n)
	  len += zx_LEN_WO_idhrxml_ResultQuery(c, e);
  }
  for (se = x->Aggregation; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("Aggregation")-1);
  for (se = x->Trigger; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("Trigger")-1);


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_idhrxml_Subscription) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_idhrxml_Subscription(struct zx_ctx* c, struct zx_idhrxml_Subscription_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<idhrxml:Subscription");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  p = zx_attr_so_enc(p, x->subscriptionID, " subscriptionID=\"", sizeof(" subscriptionID=\"")-1);
  p = zx_attr_so_enc(p, x->notifyToRef, " notifyToRef=\"", sizeof(" notifyToRef=\"")-1);
  p = zx_attr_so_enc(p, x->adminNotifyToRef, " adminNotifyToRef=\"", sizeof(" adminNotifyToRef=\"")-1);
  p = zx_attr_so_enc(p, x->starts, " starts=\"", sizeof(" starts=\"")-1);
  p = zx_attr_so_enc(p, x->expires, " expires=\"", sizeof(" expires=\"")-1);
  p = zx_attr_so_enc(p, x->id, " id=\"", sizeof(" id=\"")-1);
  p = zx_attr_so_enc(p, x->includeData, " includeData=\"", sizeof(" includeData=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_subs_RefItem_s* e;
      for (e = x->RefItem; e; e = (struct zx_subs_RefItem_s*)e->gg.g.n)
	  p = zx_ENC_SO_subs_RefItem(c, e, p);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  p = zx_ENC_SO_lu_Extension(c, e, p);
  }
  {
      struct zx_idhrxml_ResultQuery_s* e;
      for (e = x->ResultQuery; e; e = (struct zx_idhrxml_ResultQuery_s*)e->gg.g.n)
	  p = zx_ENC_SO_idhrxml_ResultQuery(c, e, p);
  }
  for (se = x->Aggregation; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "idhrxml:Aggregation", sizeof("idhrxml:Aggregation")-1, zx_ns_tab+zx_xmlns_ix_idhrxml);
  for (se = x->Trigger; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "idhrxml:Trigger", sizeof("idhrxml:Trigger")-1, zx_ns_tab+zx_xmlns_ix_idhrxml);

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</idhrxml:Subscription>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_idhrxml_Subscription) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_idhrxml_Subscription(struct zx_ctx* c, struct zx_idhrxml_Subscription_s* x, char* p )
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
  ZX_OUT_MEM(p, "Subscription", sizeof("Subscription")-1);
  qq = p;

  /* *** sort the namespaces */
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->subscriptionID, "subscriptionID=\"", sizeof("subscriptionID=\"")-1);
  p = zx_attr_wo_enc(p, x->notifyToRef, "notifyToRef=\"", sizeof("notifyToRef=\"")-1);
  p = zx_attr_wo_enc(p, x->adminNotifyToRef, "adminNotifyToRef=\"", sizeof("adminNotifyToRef=\"")-1);
  p = zx_attr_wo_enc(p, x->starts, "starts=\"", sizeof("starts=\"")-1);
  p = zx_attr_wo_enc(p, x->expires, "expires=\"", sizeof("expires=\"")-1);
  p = zx_attr_wo_enc(p, x->id, "id=\"", sizeof("id=\"")-1);
  p = zx_attr_wo_enc(p, x->includeData, "includeData=\"", sizeof("includeData=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
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

/* FUNC(zx_EASY_ENC_SO_idhrxml_Subscription) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_idhrxml_Subscription(struct zx_ctx* c, struct zx_idhrxml_Subscription_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_idhrxml_Subscription(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_idhrxml_Subscription(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_idhrxml_Subscription) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_idhrxml_Subscription(struct zx_ctx* c, struct zx_idhrxml_Subscription_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_idhrxml_Subscription(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_idhrxml_Subscription(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   idhrxml_TestItem
#define EL_STRUCT zx_idhrxml_TestItem_s
#define EL_NS     idhrxml
#define EL_TAG    TestItem

/* FUNC(zx_LEN_SO_idhrxml_TestItem) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_idhrxml_TestItem(struct zx_ctx* c, struct zx_idhrxml_TestItem_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<idhrxml:TestItem")-1 + 1 + sizeof("</idhrxml:TestItem>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  len += zx_attr_so_len(x->id, sizeof("id")-1);
  len += zx_attr_so_len(x->objectType, sizeof("dst:objectType")-1);
  len += zx_attr_so_len(x->predefined, sizeof("dst:predefined")-1);
  len += zx_attr_so_len(x->itemID, sizeof("dst:itemID")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = x->TestOp; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("idhrxml:TestOp")-1, zx_ns_tab+zx_xmlns_ix_idhrxml);


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_idhrxml_TestItem) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_idhrxml_TestItem(struct zx_ctx* c, struct zx_idhrxml_TestItem_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("TestItem")-1 + 1 + 2 + sizeof("TestItem")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->id, sizeof("id")-1);
  len += zx_attr_wo_len(x->objectType, sizeof("objectType")-1);
  len += zx_attr_wo_len(x->predefined, sizeof("predefined")-1);
  len += zx_attr_wo_len(x->itemID, sizeof("itemID")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = x->TestOp; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("TestOp")-1);


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_idhrxml_TestItem) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_idhrxml_TestItem(struct zx_ctx* c, struct zx_idhrxml_TestItem_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<idhrxml:TestItem");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dst, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_idhrxml, &pop_seen);

  p = zx_attr_so_enc(p, x->id, " id=\"", sizeof(" id=\"")-1);
  p = zx_attr_so_enc(p, x->objectType, " dst:objectType=\"", sizeof(" dst:objectType=\"")-1);
  p = zx_attr_so_enc(p, x->predefined, " dst:predefined=\"", sizeof(" dst:predefined=\"")-1);
  p = zx_attr_so_enc(p, x->itemID, " dst:itemID=\"", sizeof(" dst:itemID=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->TestOp; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "idhrxml:TestOp", sizeof("idhrxml:TestOp")-1, zx_ns_tab+zx_xmlns_ix_idhrxml);

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</idhrxml:TestItem>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_idhrxml_TestItem) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_idhrxml_TestItem(struct zx_ctx* c, struct zx_idhrxml_TestItem_s* x, char* p )
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
  ZX_OUT_MEM(p, "TestItem", sizeof("TestItem")-1);
  qq = p;

  /* *** sort the namespaces */
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->id, "id=\"", sizeof("id=\"")-1);
  p = zx_attr_wo_enc(p, x->objectType, "objectType=\"", sizeof("objectType=\"")-1);
  p = zx_attr_wo_enc(p, x->predefined, "predefined=\"", sizeof("predefined=\"")-1);
  p = zx_attr_wo_enc(p, x->itemID, "itemID=\"", sizeof("itemID=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
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

/* FUNC(zx_EASY_ENC_SO_idhrxml_TestItem) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_idhrxml_TestItem(struct zx_ctx* c, struct zx_idhrxml_TestItem_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_idhrxml_TestItem(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_idhrxml_TestItem(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_idhrxml_TestItem) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_idhrxml_TestItem(struct zx_ctx* c, struct zx_idhrxml_TestItem_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_idhrxml_TestItem(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_idhrxml_TestItem(c, x, buf ), buf, len);
}




/* EOF -- c/zx-idhrxml-enc.c */
