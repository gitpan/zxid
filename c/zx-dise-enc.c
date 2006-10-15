/* c/zx-dise-enc.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
 ** Id: enc-templ.c,v 1.21 2006/10/01 19:35:50 sampo Exp $
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
#include "c/zx-dise-data.h"
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

#define EL_NAME   dise_Body
#define EL_STRUCT zx_dise_Body_s
#define EL_NS     dise
#define EL_TAG    Body

/* FUNC(zx_LEN_SO_dise_Body) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_dise_Body(struct zx_ctx* c, struct zx_dise_Body_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<dise:Body")-1 + 1 + sizeof("</dise:Body>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dise, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_di_SvcMDAssociationAdd_s* e;
      for (e = x->SvcMDAssociationAdd; e; e = (struct zx_di_SvcMDAssociationAdd_s*)e->gg.g.n)
	  len += zx_LEN_SO_di_SvcMDAssociationAdd(c, e);
  }
  {
      struct zx_di_SvcMDAssociationAddResponse_s* e;
      for (e = x->SvcMDAssociationAddResponse; e; e = (struct zx_di_SvcMDAssociationAddResponse_s*)e->gg.g.n)
	  len += zx_LEN_SO_di_SvcMDAssociationAddResponse(c, e);
  }
  {
      struct zx_di_SvcMDAssociationDelete_s* e;
      for (e = x->SvcMDAssociationDelete; e; e = (struct zx_di_SvcMDAssociationDelete_s*)e->gg.g.n)
	  len += zx_LEN_SO_di_SvcMDAssociationDelete(c, e);
  }
  {
      struct zx_di_SvcMDAssociationDeleteResponse_s* e;
      for (e = x->SvcMDAssociationDeleteResponse; e; e = (struct zx_di_SvcMDAssociationDeleteResponse_s*)e->gg.g.n)
	  len += zx_LEN_SO_di_SvcMDAssociationDeleteResponse(c, e);
  }
  {
      struct zx_di_SvcMDAssociationQuery_s* e;
      for (e = x->SvcMDAssociationQuery; e; e = (struct zx_di_SvcMDAssociationQuery_s*)e->gg.g.n)
	  len += zx_LEN_SO_di_SvcMDAssociationQuery(c, e);
  }
  {
      struct zx_di_SvcMDAssociationQueryResponse_s* e;
      for (e = x->SvcMDAssociationQueryResponse; e; e = (struct zx_di_SvcMDAssociationQueryResponse_s*)e->gg.g.n)
	  len += zx_LEN_SO_di_SvcMDAssociationQueryResponse(c, e);
  }
  {
      struct zx_di_SvcMDRegister_s* e;
      for (e = x->SvcMDRegister; e; e = (struct zx_di_SvcMDRegister_s*)e->gg.g.n)
	  len += zx_LEN_SO_di_SvcMDRegister(c, e);
  }
  {
      struct zx_di_SvcMDRegisterResponse_s* e;
      for (e = x->SvcMDRegisterResponse; e; e = (struct zx_di_SvcMDRegisterResponse_s*)e->gg.g.n)
	  len += zx_LEN_SO_di_SvcMDRegisterResponse(c, e);
  }
  {
      struct zx_di_SvcMDDelete_s* e;
      for (e = x->SvcMDDelete; e; e = (struct zx_di_SvcMDDelete_s*)e->gg.g.n)
	  len += zx_LEN_SO_di_SvcMDDelete(c, e);
  }
  {
      struct zx_di_SvcMDDeleteResponse_s* e;
      for (e = x->SvcMDDeleteResponse; e; e = (struct zx_di_SvcMDDeleteResponse_s*)e->gg.g.n)
	  len += zx_LEN_SO_di_SvcMDDeleteResponse(c, e);
  }
  {
      struct zx_di_SvcMDQuery_s* e;
      for (e = x->SvcMDQuery; e; e = (struct zx_di_SvcMDQuery_s*)e->gg.g.n)
	  len += zx_LEN_SO_di_SvcMDQuery(c, e);
  }
  {
      struct zx_di_SvcMDQueryResponse_s* e;
      for (e = x->SvcMDQueryResponse; e; e = (struct zx_di_SvcMDQueryResponse_s*)e->gg.g.n)
	  len += zx_LEN_SO_di_SvcMDQueryResponse(c, e);
  }
  {
      struct zx_di_SvcMDReplace_s* e;
      for (e = x->SvcMDReplace; e; e = (struct zx_di_SvcMDReplace_s*)e->gg.g.n)
	  len += zx_LEN_SO_di_SvcMDReplace(c, e);
  }
  {
      struct zx_di_SvcMDReplaceResponse_s* e;
      for (e = x->SvcMDReplaceResponse; e; e = (struct zx_di_SvcMDReplaceResponse_s*)e->gg.g.n)
	  len += zx_LEN_SO_di_SvcMDReplaceResponse(c, e);
  }
  {
      struct zx_dise_Fault_s* e;
      for (e = x->Fault; e; e = (struct zx_dise_Fault_s*)e->gg.g.n)
	  len += zx_LEN_SO_dise_Fault(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_dise_Body) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_dise_Body(struct zx_ctx* c, struct zx_dise_Body_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Body")-1 + 1 + 2 + sizeof("Body")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_di_SvcMDAssociationAdd_s* e;
      for (e = x->SvcMDAssociationAdd; e; e = (struct zx_di_SvcMDAssociationAdd_s*)e->gg.g.n)
	  len += zx_LEN_WO_di_SvcMDAssociationAdd(c, e);
  }
  {
      struct zx_di_SvcMDAssociationAddResponse_s* e;
      for (e = x->SvcMDAssociationAddResponse; e; e = (struct zx_di_SvcMDAssociationAddResponse_s*)e->gg.g.n)
	  len += zx_LEN_WO_di_SvcMDAssociationAddResponse(c, e);
  }
  {
      struct zx_di_SvcMDAssociationDelete_s* e;
      for (e = x->SvcMDAssociationDelete; e; e = (struct zx_di_SvcMDAssociationDelete_s*)e->gg.g.n)
	  len += zx_LEN_WO_di_SvcMDAssociationDelete(c, e);
  }
  {
      struct zx_di_SvcMDAssociationDeleteResponse_s* e;
      for (e = x->SvcMDAssociationDeleteResponse; e; e = (struct zx_di_SvcMDAssociationDeleteResponse_s*)e->gg.g.n)
	  len += zx_LEN_WO_di_SvcMDAssociationDeleteResponse(c, e);
  }
  {
      struct zx_di_SvcMDAssociationQuery_s* e;
      for (e = x->SvcMDAssociationQuery; e; e = (struct zx_di_SvcMDAssociationQuery_s*)e->gg.g.n)
	  len += zx_LEN_WO_di_SvcMDAssociationQuery(c, e);
  }
  {
      struct zx_di_SvcMDAssociationQueryResponse_s* e;
      for (e = x->SvcMDAssociationQueryResponse; e; e = (struct zx_di_SvcMDAssociationQueryResponse_s*)e->gg.g.n)
	  len += zx_LEN_WO_di_SvcMDAssociationQueryResponse(c, e);
  }
  {
      struct zx_di_SvcMDRegister_s* e;
      for (e = x->SvcMDRegister; e; e = (struct zx_di_SvcMDRegister_s*)e->gg.g.n)
	  len += zx_LEN_WO_di_SvcMDRegister(c, e);
  }
  {
      struct zx_di_SvcMDRegisterResponse_s* e;
      for (e = x->SvcMDRegisterResponse; e; e = (struct zx_di_SvcMDRegisterResponse_s*)e->gg.g.n)
	  len += zx_LEN_WO_di_SvcMDRegisterResponse(c, e);
  }
  {
      struct zx_di_SvcMDDelete_s* e;
      for (e = x->SvcMDDelete; e; e = (struct zx_di_SvcMDDelete_s*)e->gg.g.n)
	  len += zx_LEN_WO_di_SvcMDDelete(c, e);
  }
  {
      struct zx_di_SvcMDDeleteResponse_s* e;
      for (e = x->SvcMDDeleteResponse; e; e = (struct zx_di_SvcMDDeleteResponse_s*)e->gg.g.n)
	  len += zx_LEN_WO_di_SvcMDDeleteResponse(c, e);
  }
  {
      struct zx_di_SvcMDQuery_s* e;
      for (e = x->SvcMDQuery; e; e = (struct zx_di_SvcMDQuery_s*)e->gg.g.n)
	  len += zx_LEN_WO_di_SvcMDQuery(c, e);
  }
  {
      struct zx_di_SvcMDQueryResponse_s* e;
      for (e = x->SvcMDQueryResponse; e; e = (struct zx_di_SvcMDQueryResponse_s*)e->gg.g.n)
	  len += zx_LEN_WO_di_SvcMDQueryResponse(c, e);
  }
  {
      struct zx_di_SvcMDReplace_s* e;
      for (e = x->SvcMDReplace; e; e = (struct zx_di_SvcMDReplace_s*)e->gg.g.n)
	  len += zx_LEN_WO_di_SvcMDReplace(c, e);
  }
  {
      struct zx_di_SvcMDReplaceResponse_s* e;
      for (e = x->SvcMDReplaceResponse; e; e = (struct zx_di_SvcMDReplaceResponse_s*)e->gg.g.n)
	  len += zx_LEN_WO_di_SvcMDReplaceResponse(c, e);
  }
  {
      struct zx_dise_Fault_s* e;
      for (e = x->Fault; e; e = (struct zx_dise_Fault_s*)e->gg.g.n)
	  len += zx_LEN_WO_dise_Fault(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_dise_Body) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_dise_Body(struct zx_ctx* c, struct zx_dise_Body_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<dise:Body");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dise, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_di_SvcMDAssociationAdd_s* e;
      for (e = x->SvcMDAssociationAdd; e; e = (struct zx_di_SvcMDAssociationAdd_s*)e->gg.g.n)
	  p = zx_ENC_SO_di_SvcMDAssociationAdd(c, e, p);
  }
  {
      struct zx_di_SvcMDAssociationAddResponse_s* e;
      for (e = x->SvcMDAssociationAddResponse; e; e = (struct zx_di_SvcMDAssociationAddResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_di_SvcMDAssociationAddResponse(c, e, p);
  }
  {
      struct zx_di_SvcMDAssociationDelete_s* e;
      for (e = x->SvcMDAssociationDelete; e; e = (struct zx_di_SvcMDAssociationDelete_s*)e->gg.g.n)
	  p = zx_ENC_SO_di_SvcMDAssociationDelete(c, e, p);
  }
  {
      struct zx_di_SvcMDAssociationDeleteResponse_s* e;
      for (e = x->SvcMDAssociationDeleteResponse; e; e = (struct zx_di_SvcMDAssociationDeleteResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_di_SvcMDAssociationDeleteResponse(c, e, p);
  }
  {
      struct zx_di_SvcMDAssociationQuery_s* e;
      for (e = x->SvcMDAssociationQuery; e; e = (struct zx_di_SvcMDAssociationQuery_s*)e->gg.g.n)
	  p = zx_ENC_SO_di_SvcMDAssociationQuery(c, e, p);
  }
  {
      struct zx_di_SvcMDAssociationQueryResponse_s* e;
      for (e = x->SvcMDAssociationQueryResponse; e; e = (struct zx_di_SvcMDAssociationQueryResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_di_SvcMDAssociationQueryResponse(c, e, p);
  }
  {
      struct zx_di_SvcMDRegister_s* e;
      for (e = x->SvcMDRegister; e; e = (struct zx_di_SvcMDRegister_s*)e->gg.g.n)
	  p = zx_ENC_SO_di_SvcMDRegister(c, e, p);
  }
  {
      struct zx_di_SvcMDRegisterResponse_s* e;
      for (e = x->SvcMDRegisterResponse; e; e = (struct zx_di_SvcMDRegisterResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_di_SvcMDRegisterResponse(c, e, p);
  }
  {
      struct zx_di_SvcMDDelete_s* e;
      for (e = x->SvcMDDelete; e; e = (struct zx_di_SvcMDDelete_s*)e->gg.g.n)
	  p = zx_ENC_SO_di_SvcMDDelete(c, e, p);
  }
  {
      struct zx_di_SvcMDDeleteResponse_s* e;
      for (e = x->SvcMDDeleteResponse; e; e = (struct zx_di_SvcMDDeleteResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_di_SvcMDDeleteResponse(c, e, p);
  }
  {
      struct zx_di_SvcMDQuery_s* e;
      for (e = x->SvcMDQuery; e; e = (struct zx_di_SvcMDQuery_s*)e->gg.g.n)
	  p = zx_ENC_SO_di_SvcMDQuery(c, e, p);
  }
  {
      struct zx_di_SvcMDQueryResponse_s* e;
      for (e = x->SvcMDQueryResponse; e; e = (struct zx_di_SvcMDQueryResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_di_SvcMDQueryResponse(c, e, p);
  }
  {
      struct zx_di_SvcMDReplace_s* e;
      for (e = x->SvcMDReplace; e; e = (struct zx_di_SvcMDReplace_s*)e->gg.g.n)
	  p = zx_ENC_SO_di_SvcMDReplace(c, e, p);
  }
  {
      struct zx_di_SvcMDReplaceResponse_s* e;
      for (e = x->SvcMDReplaceResponse; e; e = (struct zx_di_SvcMDReplaceResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_di_SvcMDReplaceResponse(c, e, p);
  }
  {
      struct zx_dise_Fault_s* e;
      for (e = x->Fault; e; e = (struct zx_dise_Fault_s*)e->gg.g.n)
	  p = zx_ENC_SO_dise_Fault(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</dise:Body>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_dise_Body) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_dise_Body(struct zx_ctx* c, struct zx_dise_Body_s* x, char* p )
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
  ZX_OUT_MEM(p, "Body", sizeof("Body")-1);
  qq = p;
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

/* FUNC(zx_EASY_ENC_SO_dise_Body) */

struct zx_str* zx_EASY_ENC_SO_dise_Body(struct zx_ctx* c, struct zx_dise_Body_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_dise_Body(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_dise_Body(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_dise_Body) */

struct zx_str* zx_EASY_ENC_WO_dise_Body(struct zx_ctx* c, struct zx_dise_Body_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_dise_Body(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_dise_Body(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_dise_Envelope_s
#define EL_NS     dise
#define EL_TAG    Envelope

/* FUNC(zx_LEN_SO_dise_Envelope) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_dise_Envelope(struct zx_ctx* c, struct zx_dise_Envelope_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<dise:Envelope")-1 + 1 + sizeof("</dise:Envelope>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dise, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_dise_Header_s* e;
      for (e = x->Header; e; e = (struct zx_dise_Header_s*)e->gg.g.n)
	  len += zx_LEN_SO_dise_Header(c, e);
  }
  {
      struct zx_dise_Body_s* e;
      for (e = x->Body; e; e = (struct zx_dise_Body_s*)e->gg.g.n)
	  len += zx_LEN_SO_dise_Body(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_dise_Envelope) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_dise_Envelope(struct zx_ctx* c, struct zx_dise_Envelope_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Envelope")-1 + 1 + 2 + sizeof("Envelope")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_dise_Header_s* e;
      for (e = x->Header; e; e = (struct zx_dise_Header_s*)e->gg.g.n)
	  len += zx_LEN_WO_dise_Header(c, e);
  }
  {
      struct zx_dise_Body_s* e;
      for (e = x->Body; e; e = (struct zx_dise_Body_s*)e->gg.g.n)
	  len += zx_LEN_WO_dise_Body(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_dise_Envelope) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_dise_Envelope(struct zx_ctx* c, struct zx_dise_Envelope_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<dise:Envelope");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dise, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_dise_Header_s* e;
      for (e = x->Header; e; e = (struct zx_dise_Header_s*)e->gg.g.n)
	  p = zx_ENC_SO_dise_Header(c, e, p);
  }
  {
      struct zx_dise_Body_s* e;
      for (e = x->Body; e; e = (struct zx_dise_Body_s*)e->gg.g.n)
	  p = zx_ENC_SO_dise_Body(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</dise:Envelope>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_dise_Envelope) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_dise_Envelope(struct zx_ctx* c, struct zx_dise_Envelope_s* x, char* p )
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
  ZX_OUT_MEM(p, "Envelope", sizeof("Envelope")-1);
  qq = p;
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

/* FUNC(zx_EASY_ENC_SO_dise_Envelope) */

struct zx_str* zx_EASY_ENC_SO_dise_Envelope(struct zx_ctx* c, struct zx_dise_Envelope_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_dise_Envelope(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_dise_Envelope(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_dise_Envelope) */

struct zx_str* zx_EASY_ENC_WO_dise_Envelope(struct zx_ctx* c, struct zx_dise_Envelope_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_dise_Envelope(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_dise_Envelope(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_dise_Fault_s
#define EL_NS     dise
#define EL_TAG    Fault

/* FUNC(zx_LEN_SO_dise_Fault) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_dise_Fault(struct zx_ctx* c, struct zx_dise_Fault_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<dise:Fault")-1 + 1 + sizeof("</dise:Fault>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dise, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = x->faultcode; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("dise:faultcode")-1, zx_ns_tab+zx_xmlns_ix_dise);
  for (se = x->faultstring; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("dise:faultstring")-1, zx_ns_tab+zx_xmlns_ix_dise);
  for (se = x->faultactor; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("dise:faultactor")-1, zx_ns_tab+zx_xmlns_ix_dise);
  {
      struct zx_dise_detail_s* e;
      for (e = x->detail; e; e = (struct zx_dise_detail_s*)e->gg.g.n)
	  len += zx_LEN_SO_dise_detail(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_dise_Fault) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_dise_Fault(struct zx_ctx* c, struct zx_dise_Fault_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Fault")-1 + 1 + 2 + sizeof("Fault")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = x->faultcode; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("faultcode")-1);
  for (se = x->faultstring; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("faultstring")-1);
  for (se = x->faultactor; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("faultactor")-1);
  {
      struct zx_dise_detail_s* e;
      for (e = x->detail; e; e = (struct zx_dise_detail_s*)e->gg.g.n)
	  len += zx_LEN_WO_dise_detail(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_dise_Fault) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_dise_Fault(struct zx_ctx* c, struct zx_dise_Fault_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<dise:Fault");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dise, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->faultcode; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "dise:faultcode", sizeof("dise:faultcode")-1, zx_ns_tab+zx_xmlns_ix_dise);
  for (se = x->faultstring; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "dise:faultstring", sizeof("dise:faultstring")-1, zx_ns_tab+zx_xmlns_ix_dise);
  for (se = x->faultactor; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "dise:faultactor", sizeof("dise:faultactor")-1, zx_ns_tab+zx_xmlns_ix_dise);
  {
      struct zx_dise_detail_s* e;
      for (e = x->detail; e; e = (struct zx_dise_detail_s*)e->gg.g.n)
	  p = zx_ENC_SO_dise_detail(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</dise:Fault>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_dise_Fault) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_dise_Fault(struct zx_ctx* c, struct zx_dise_Fault_s* x, char* p )
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
  ZX_OUT_MEM(p, "Fault", sizeof("Fault")-1);
  qq = p;
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

/* FUNC(zx_EASY_ENC_SO_dise_Fault) */

struct zx_str* zx_EASY_ENC_SO_dise_Fault(struct zx_ctx* c, struct zx_dise_Fault_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_dise_Fault(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_dise_Fault(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_dise_Fault) */

struct zx_str* zx_EASY_ENC_WO_dise_Fault(struct zx_ctx* c, struct zx_dise_Fault_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_dise_Fault(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_dise_Fault(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_dise_Header_s
#define EL_NS     dise
#define EL_TAG    Header

/* FUNC(zx_LEN_SO_dise_Header) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_dise_Header(struct zx_ctx* c, struct zx_dise_Header_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<dise:Header")-1 + 1 + sizeof("</dise:Header>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dise, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_a_MessageID_s* e;
      for (e = x->MessageID; e; e = (struct zx_a_MessageID_s*)e->gg.g.n)
	  len += zx_LEN_SO_a_MessageID(c, e);
  }
  {
      struct zx_a_RelatesTo_s* e;
      for (e = x->RelatesTo; e; e = (struct zx_a_RelatesTo_s*)e->gg.g.n)
	  len += zx_LEN_SO_a_RelatesTo(c, e);
  }
  {
      struct zx_a_ReplyTo_s* e;
      for (e = x->ReplyTo; e; e = (struct zx_a_ReplyTo_s*)e->gg.g.n)
	  len += zx_LEN_SO_a_ReplyTo(c, e);
  }
  {
      struct zx_a_From_s* e;
      for (e = x->From; e; e = (struct zx_a_From_s*)e->gg.g.n)
	  len += zx_LEN_SO_a_From(c, e);
  }
  {
      struct zx_a_FaultTo_s* e;
      for (e = x->FaultTo; e; e = (struct zx_a_FaultTo_s*)e->gg.g.n)
	  len += zx_LEN_SO_a_FaultTo(c, e);
  }
  {
      struct zx_a_To_s* e;
      for (e = x->To; e; e = (struct zx_a_To_s*)e->gg.g.n)
	  len += zx_LEN_SO_a_To(c, e);
  }
  {
      struct zx_a_Action_s* e;
      for (e = x->Action; e; e = (struct zx_a_Action_s*)e->gg.g.n)
	  len += zx_LEN_SO_a_Action(c, e);
  }
  {
      struct zx_sbf_Framework_s* e;
      for (e = x->Framework; e; e = (struct zx_sbf_Framework_s*)e->gg.g.n)
	  len += zx_LEN_SO_sbf_Framework(c, e);
  }
  {
      struct zx_b_Framework_s* e;
      for (e = x->b_Framework; e; e = (struct zx_b_Framework_s*)e->gg.g.n)
	  len += zx_LEN_SO_b_Framework(c, e);
  }
  {
      struct zx_b_Sender_s* e;
      for (e = x->Sender; e; e = (struct zx_b_Sender_s*)e->gg.g.n)
	  len += zx_LEN_SO_b_Sender(c, e);
  }
  {
      struct zx_b_CredentialsContext_s* e;
      for (e = x->CredentialsContext; e; e = (struct zx_b_CredentialsContext_s*)e->gg.g.n)
	  len += zx_LEN_SO_b_CredentialsContext(c, e);
  }
  {
      struct zx_b_EndpointUpdate_s* e;
      for (e = x->EndpointUpdate; e; e = (struct zx_b_EndpointUpdate_s*)e->gg.g.n)
	  len += zx_LEN_SO_b_EndpointUpdate(c, e);
  }
  for (se = x->Timeout; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("b:Timeout")-1, zx_ns_tab+zx_xmlns_ix_b);
  {
      struct zx_b_ProcessingContext_s* e;
      for (e = x->ProcessingContext; e; e = (struct zx_b_ProcessingContext_s*)e->gg.g.n)
	  len += zx_LEN_SO_b_ProcessingContext(c, e);
  }
  {
      struct zx_b_ApplicationEPR_s* e;
      for (e = x->ApplicationEPR; e; e = (struct zx_b_ApplicationEPR_s*)e->gg.g.n)
	  len += zx_LEN_SO_b_ApplicationEPR(c, e);
  }
  {
      struct zx_b_RedirectRequest_s* e;
      for (e = x->RedirectRequest; e; e = (struct zx_b_RedirectRequest_s*)e->gg.g.n)
	  len += zx_LEN_SO_b_RedirectRequest(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_dise_Header) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_dise_Header(struct zx_ctx* c, struct zx_dise_Header_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Header")-1 + 1 + 2 + sizeof("Header")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_a_MessageID_s* e;
      for (e = x->MessageID; e; e = (struct zx_a_MessageID_s*)e->gg.g.n)
	  len += zx_LEN_WO_a_MessageID(c, e);
  }
  {
      struct zx_a_RelatesTo_s* e;
      for (e = x->RelatesTo; e; e = (struct zx_a_RelatesTo_s*)e->gg.g.n)
	  len += zx_LEN_WO_a_RelatesTo(c, e);
  }
  {
      struct zx_a_ReplyTo_s* e;
      for (e = x->ReplyTo; e; e = (struct zx_a_ReplyTo_s*)e->gg.g.n)
	  len += zx_LEN_WO_a_ReplyTo(c, e);
  }
  {
      struct zx_a_From_s* e;
      for (e = x->From; e; e = (struct zx_a_From_s*)e->gg.g.n)
	  len += zx_LEN_WO_a_From(c, e);
  }
  {
      struct zx_a_FaultTo_s* e;
      for (e = x->FaultTo; e; e = (struct zx_a_FaultTo_s*)e->gg.g.n)
	  len += zx_LEN_WO_a_FaultTo(c, e);
  }
  {
      struct zx_a_To_s* e;
      for (e = x->To; e; e = (struct zx_a_To_s*)e->gg.g.n)
	  len += zx_LEN_WO_a_To(c, e);
  }
  {
      struct zx_a_Action_s* e;
      for (e = x->Action; e; e = (struct zx_a_Action_s*)e->gg.g.n)
	  len += zx_LEN_WO_a_Action(c, e);
  }
  {
      struct zx_sbf_Framework_s* e;
      for (e = x->Framework; e; e = (struct zx_sbf_Framework_s*)e->gg.g.n)
	  len += zx_LEN_WO_sbf_Framework(c, e);
  }
  {
      struct zx_b_Framework_s* e;
      for (e = x->b_Framework; e; e = (struct zx_b_Framework_s*)e->gg.g.n)
	  len += zx_LEN_WO_b_Framework(c, e);
  }
  {
      struct zx_b_Sender_s* e;
      for (e = x->Sender; e; e = (struct zx_b_Sender_s*)e->gg.g.n)
	  len += zx_LEN_WO_b_Sender(c, e);
  }
  {
      struct zx_b_CredentialsContext_s* e;
      for (e = x->CredentialsContext; e; e = (struct zx_b_CredentialsContext_s*)e->gg.g.n)
	  len += zx_LEN_WO_b_CredentialsContext(c, e);
  }
  {
      struct zx_b_EndpointUpdate_s* e;
      for (e = x->EndpointUpdate; e; e = (struct zx_b_EndpointUpdate_s*)e->gg.g.n)
	  len += zx_LEN_WO_b_EndpointUpdate(c, e);
  }
  for (se = x->Timeout; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("Timeout")-1);
  {
      struct zx_b_ProcessingContext_s* e;
      for (e = x->ProcessingContext; e; e = (struct zx_b_ProcessingContext_s*)e->gg.g.n)
	  len += zx_LEN_WO_b_ProcessingContext(c, e);
  }
  {
      struct zx_b_ApplicationEPR_s* e;
      for (e = x->ApplicationEPR; e; e = (struct zx_b_ApplicationEPR_s*)e->gg.g.n)
	  len += zx_LEN_WO_b_ApplicationEPR(c, e);
  }
  {
      struct zx_b_RedirectRequest_s* e;
      for (e = x->RedirectRequest; e; e = (struct zx_b_RedirectRequest_s*)e->gg.g.n)
	  len += zx_LEN_WO_b_RedirectRequest(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_dise_Header) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_dise_Header(struct zx_ctx* c, struct zx_dise_Header_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<dise:Header");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dise, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_a_MessageID_s* e;
      for (e = x->MessageID; e; e = (struct zx_a_MessageID_s*)e->gg.g.n)
	  p = zx_ENC_SO_a_MessageID(c, e, p);
  }
  {
      struct zx_a_RelatesTo_s* e;
      for (e = x->RelatesTo; e; e = (struct zx_a_RelatesTo_s*)e->gg.g.n)
	  p = zx_ENC_SO_a_RelatesTo(c, e, p);
  }
  {
      struct zx_a_ReplyTo_s* e;
      for (e = x->ReplyTo; e; e = (struct zx_a_ReplyTo_s*)e->gg.g.n)
	  p = zx_ENC_SO_a_ReplyTo(c, e, p);
  }
  {
      struct zx_a_From_s* e;
      for (e = x->From; e; e = (struct zx_a_From_s*)e->gg.g.n)
	  p = zx_ENC_SO_a_From(c, e, p);
  }
  {
      struct zx_a_FaultTo_s* e;
      for (e = x->FaultTo; e; e = (struct zx_a_FaultTo_s*)e->gg.g.n)
	  p = zx_ENC_SO_a_FaultTo(c, e, p);
  }
  {
      struct zx_a_To_s* e;
      for (e = x->To; e; e = (struct zx_a_To_s*)e->gg.g.n)
	  p = zx_ENC_SO_a_To(c, e, p);
  }
  {
      struct zx_a_Action_s* e;
      for (e = x->Action; e; e = (struct zx_a_Action_s*)e->gg.g.n)
	  p = zx_ENC_SO_a_Action(c, e, p);
  }
  {
      struct zx_sbf_Framework_s* e;
      for (e = x->Framework; e; e = (struct zx_sbf_Framework_s*)e->gg.g.n)
	  p = zx_ENC_SO_sbf_Framework(c, e, p);
  }
  {
      struct zx_b_Framework_s* e;
      for (e = x->b_Framework; e; e = (struct zx_b_Framework_s*)e->gg.g.n)
	  p = zx_ENC_SO_b_Framework(c, e, p);
  }
  {
      struct zx_b_Sender_s* e;
      for (e = x->Sender; e; e = (struct zx_b_Sender_s*)e->gg.g.n)
	  p = zx_ENC_SO_b_Sender(c, e, p);
  }
  {
      struct zx_b_CredentialsContext_s* e;
      for (e = x->CredentialsContext; e; e = (struct zx_b_CredentialsContext_s*)e->gg.g.n)
	  p = zx_ENC_SO_b_CredentialsContext(c, e, p);
  }
  {
      struct zx_b_EndpointUpdate_s* e;
      for (e = x->EndpointUpdate; e; e = (struct zx_b_EndpointUpdate_s*)e->gg.g.n)
	  p = zx_ENC_SO_b_EndpointUpdate(c, e, p);
  }
  for (se = x->Timeout; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "b:Timeout", sizeof("b:Timeout")-1, zx_ns_tab+zx_xmlns_ix_b);
  {
      struct zx_b_ProcessingContext_s* e;
      for (e = x->ProcessingContext; e; e = (struct zx_b_ProcessingContext_s*)e->gg.g.n)
	  p = zx_ENC_SO_b_ProcessingContext(c, e, p);
  }
  {
      struct zx_b_ApplicationEPR_s* e;
      for (e = x->ApplicationEPR; e; e = (struct zx_b_ApplicationEPR_s*)e->gg.g.n)
	  p = zx_ENC_SO_b_ApplicationEPR(c, e, p);
  }
  {
      struct zx_b_RedirectRequest_s* e;
      for (e = x->RedirectRequest; e; e = (struct zx_b_RedirectRequest_s*)e->gg.g.n)
	  p = zx_ENC_SO_b_RedirectRequest(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</dise:Header>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_dise_Header) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_dise_Header(struct zx_ctx* c, struct zx_dise_Header_s* x, char* p )
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
  ZX_OUT_MEM(p, "Header", sizeof("Header")-1);
  qq = p;
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

/* FUNC(zx_EASY_ENC_SO_dise_Header) */

struct zx_str* zx_EASY_ENC_SO_dise_Header(struct zx_ctx* c, struct zx_dise_Header_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_dise_Header(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_dise_Header(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_dise_Header) */

struct zx_str* zx_EASY_ENC_WO_dise_Header(struct zx_ctx* c, struct zx_dise_Header_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_dise_Header(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_dise_Header(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_dise_detail_s
#define EL_NS     dise
#define EL_TAG    detail

/* FUNC(zx_LEN_SO_dise_detail) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_dise_detail(struct zx_ctx* c, struct zx_dise_detail_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<dise:detail")-1 + 1 + sizeof("</dise:detail>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_dise, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_dise_detail) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_dise_detail(struct zx_ctx* c, struct zx_dise_detail_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("detail")-1 + 1 + 2 + sizeof("detail")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_dise_detail) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_dise_detail(struct zx_ctx* c, struct zx_dise_detail_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<dise:detail");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_dise, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</dise:detail>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_dise_detail) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_dise_detail(struct zx_ctx* c, struct zx_dise_detail_s* x, char* p )
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
  ZX_OUT_MEM(p, "detail", sizeof("detail")-1);
  qq = p;
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

/* FUNC(zx_EASY_ENC_SO_dise_detail) */

struct zx_str* zx_EASY_ENC_SO_dise_detail(struct zx_ctx* c, struct zx_dise_detail_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_dise_detail(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_dise_detail(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_dise_detail) */

struct zx_str* zx_EASY_ENC_WO_dise_detail(struct zx_ctx* c, struct zx_dise_detail_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_dise_detail(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_dise_detail(c, x, buf ), buf, len);
}




/* EOF -- c/zx-dise-enc.c */
