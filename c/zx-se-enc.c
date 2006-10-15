/* c/zx-se-enc.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-se-data.h"
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

#define EL_NAME   se_Body
#define EL_STRUCT zx_se_Body_s
#define EL_NS     se
#define EL_TAG    Body

/* FUNC(zx_LEN_SO_se_Body) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<se:Body")-1 + 1 + sizeof("</se:Body>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_se, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_sp_ArtifactResolve_s* e;
      for (e = x->ArtifactResolve; e; e = (struct zx_sp_ArtifactResolve_s*)e->gg.g.n)
	  len += zx_LEN_SO_sp_ArtifactResolve(c, e);
  }
  {
      struct zx_sp_ArtifactResponse_s* e;
      for (e = x->ArtifactResponse; e; e = (struct zx_sp_ArtifactResponse_s*)e->gg.g.n)
	  len += zx_LEN_SO_sp_ArtifactResponse(c, e);
  }
  {
      struct zx_sp_ManageNameIDRequest_s* e;
      for (e = x->ManageNameIDRequest; e; e = (struct zx_sp_ManageNameIDRequest_s*)e->gg.g.n)
	  len += zx_LEN_SO_sp_ManageNameIDRequest(c, e);
  }
  {
      struct zx_sp_ManageNameIDResponse_s* e;
      for (e = x->ManageNameIDResponse; e; e = (struct zx_sp_ManageNameIDResponse_s*)e->gg.g.n)
	  len += zx_LEN_SO_sp_ManageNameIDResponse(c, e);
  }
  {
      struct zx_sp_LogoutRequest_s* e;
      for (e = x->LogoutRequest; e; e = (struct zx_sp_LogoutRequest_s*)e->gg.g.n)
	  len += zx_LEN_SO_sp_LogoutRequest(c, e);
  }
  {
      struct zx_sp_LogoutResponse_s* e;
      for (e = x->LogoutResponse; e; e = (struct zx_sp_LogoutResponse_s*)e->gg.g.n)
	  len += zx_LEN_SO_sp_LogoutResponse(c, e);
  }
  {
      struct zx_sp_NameIDMappingRequest_s* e;
      for (e = x->NameIDMappingRequest; e; e = (struct zx_sp_NameIDMappingRequest_s*)e->gg.g.n)
	  len += zx_LEN_SO_sp_NameIDMappingRequest(c, e);
  }
  {
      struct zx_sp_NameIDMappingResponse_s* e;
      for (e = x->NameIDMappingResponse; e; e = (struct zx_sp_NameIDMappingResponse_s*)e->gg.g.n)
	  len += zx_LEN_SO_sp_NameIDMappingResponse(c, e);
  }
  {
      struct zx_sp_AttributeQuery_s* e;
      for (e = x->AttributeQuery; e; e = (struct zx_sp_AttributeQuery_s*)e->gg.g.n)
	  len += zx_LEN_SO_sp_AttributeQuery(c, e);
  }
  {
      struct zx_sp_AuthnQuery_s* e;
      for (e = x->AuthnQuery; e; e = (struct zx_sp_AuthnQuery_s*)e->gg.g.n)
	  len += zx_LEN_SO_sp_AuthnQuery(c, e);
  }
  {
      struct zx_sp_AuthzDecisionQuery_s* e;
      for (e = x->AuthzDecisionQuery; e; e = (struct zx_sp_AuthzDecisionQuery_s*)e->gg.g.n)
	  len += zx_LEN_SO_sp_AuthzDecisionQuery(c, e);
  }
  {
      struct zx_sp_AssertionIDRequest_s* e;
      for (e = x->AssertionIDRequest; e; e = (struct zx_sp_AssertionIDRequest_s*)e->gg.g.n)
	  len += zx_LEN_SO_sp_AssertionIDRequest(c, e);
  }
  {
      struct zx_sp_Response_s* e;
      for (e = x->Response; e; e = (struct zx_sp_Response_s*)e->gg.g.n)
	  len += zx_LEN_SO_sp_Response(c, e);
  }
  {
      struct zx_sp11_Request_s* e;
      for (e = x->Request; e; e = (struct zx_sp11_Request_s*)e->gg.g.n)
	  len += zx_LEN_SO_sp11_Request(c, e);
  }
  {
      struct zx_sp11_Response_s* e;
      for (e = x->sp11_Response; e; e = (struct zx_sp11_Response_s*)e->gg.g.n)
	  len += zx_LEN_SO_sp11_Response(c, e);
  }
  {
      struct zx_ff12_RegisterNameIdentifierRequest_s* e;
      for (e = x->RegisterNameIdentifierRequest; e; e = (struct zx_ff12_RegisterNameIdentifierRequest_s*)e->gg.g.n)
	  len += zx_LEN_SO_ff12_RegisterNameIdentifierRequest(c, e);
  }
  {
      struct zx_ff12_RegisterNameIdentifierResponse_s* e;
      for (e = x->RegisterNameIdentifierResponse; e; e = (struct zx_ff12_RegisterNameIdentifierResponse_s*)e->gg.g.n)
	  len += zx_LEN_SO_ff12_RegisterNameIdentifierResponse(c, e);
  }
  {
      struct zx_ff12_FederationTerminationNotification_s* e;
      for (e = x->FederationTerminationNotification; e; e = (struct zx_ff12_FederationTerminationNotification_s*)e->gg.g.n)
	  len += zx_LEN_SO_ff12_FederationTerminationNotification(c, e);
  }
  {
      struct zx_ff12_LogoutRequest_s* e;
      for (e = x->ff12_LogoutRequest; e; e = (struct zx_ff12_LogoutRequest_s*)e->gg.g.n)
	  len += zx_LEN_SO_ff12_LogoutRequest(c, e);
  }
  {
      struct zx_ff12_LogoutResponse_s* e;
      for (e = x->ff12_LogoutResponse; e; e = (struct zx_ff12_LogoutResponse_s*)e->gg.g.n)
	  len += zx_LEN_SO_ff12_LogoutResponse(c, e);
  }
  {
      struct zx_ff12_NameIdentifierMappingRequest_s* e;
      for (e = x->NameIdentifierMappingRequest; e; e = (struct zx_ff12_NameIdentifierMappingRequest_s*)e->gg.g.n)
	  len += zx_LEN_SO_ff12_NameIdentifierMappingRequest(c, e);
  }
  {
      struct zx_ff12_NameIdentifierMappingResponse_s* e;
      for (e = x->NameIdentifierMappingResponse; e; e = (struct zx_ff12_NameIdentifierMappingResponse_s*)e->gg.g.n)
	  len += zx_LEN_SO_ff12_NameIdentifierMappingResponse(c, e);
  }
  {
      struct zx_se_Fault_s* e;
      for (e = x->Fault; e; e = (struct zx_se_Fault_s*)e->gg.g.n)
	  len += zx_LEN_SO_se_Fault(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_se_Body) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x )
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
      struct zx_sp_ArtifactResolve_s* e;
      for (e = x->ArtifactResolve; e; e = (struct zx_sp_ArtifactResolve_s*)e->gg.g.n)
	  len += zx_LEN_WO_sp_ArtifactResolve(c, e);
  }
  {
      struct zx_sp_ArtifactResponse_s* e;
      for (e = x->ArtifactResponse; e; e = (struct zx_sp_ArtifactResponse_s*)e->gg.g.n)
	  len += zx_LEN_WO_sp_ArtifactResponse(c, e);
  }
  {
      struct zx_sp_ManageNameIDRequest_s* e;
      for (e = x->ManageNameIDRequest; e; e = (struct zx_sp_ManageNameIDRequest_s*)e->gg.g.n)
	  len += zx_LEN_WO_sp_ManageNameIDRequest(c, e);
  }
  {
      struct zx_sp_ManageNameIDResponse_s* e;
      for (e = x->ManageNameIDResponse; e; e = (struct zx_sp_ManageNameIDResponse_s*)e->gg.g.n)
	  len += zx_LEN_WO_sp_ManageNameIDResponse(c, e);
  }
  {
      struct zx_sp_LogoutRequest_s* e;
      for (e = x->LogoutRequest; e; e = (struct zx_sp_LogoutRequest_s*)e->gg.g.n)
	  len += zx_LEN_WO_sp_LogoutRequest(c, e);
  }
  {
      struct zx_sp_LogoutResponse_s* e;
      for (e = x->LogoutResponse; e; e = (struct zx_sp_LogoutResponse_s*)e->gg.g.n)
	  len += zx_LEN_WO_sp_LogoutResponse(c, e);
  }
  {
      struct zx_sp_NameIDMappingRequest_s* e;
      for (e = x->NameIDMappingRequest; e; e = (struct zx_sp_NameIDMappingRequest_s*)e->gg.g.n)
	  len += zx_LEN_WO_sp_NameIDMappingRequest(c, e);
  }
  {
      struct zx_sp_NameIDMappingResponse_s* e;
      for (e = x->NameIDMappingResponse; e; e = (struct zx_sp_NameIDMappingResponse_s*)e->gg.g.n)
	  len += zx_LEN_WO_sp_NameIDMappingResponse(c, e);
  }
  {
      struct zx_sp_AttributeQuery_s* e;
      for (e = x->AttributeQuery; e; e = (struct zx_sp_AttributeQuery_s*)e->gg.g.n)
	  len += zx_LEN_WO_sp_AttributeQuery(c, e);
  }
  {
      struct zx_sp_AuthnQuery_s* e;
      for (e = x->AuthnQuery; e; e = (struct zx_sp_AuthnQuery_s*)e->gg.g.n)
	  len += zx_LEN_WO_sp_AuthnQuery(c, e);
  }
  {
      struct zx_sp_AuthzDecisionQuery_s* e;
      for (e = x->AuthzDecisionQuery; e; e = (struct zx_sp_AuthzDecisionQuery_s*)e->gg.g.n)
	  len += zx_LEN_WO_sp_AuthzDecisionQuery(c, e);
  }
  {
      struct zx_sp_AssertionIDRequest_s* e;
      for (e = x->AssertionIDRequest; e; e = (struct zx_sp_AssertionIDRequest_s*)e->gg.g.n)
	  len += zx_LEN_WO_sp_AssertionIDRequest(c, e);
  }
  {
      struct zx_sp_Response_s* e;
      for (e = x->Response; e; e = (struct zx_sp_Response_s*)e->gg.g.n)
	  len += zx_LEN_WO_sp_Response(c, e);
  }
  {
      struct zx_sp11_Request_s* e;
      for (e = x->Request; e; e = (struct zx_sp11_Request_s*)e->gg.g.n)
	  len += zx_LEN_WO_sp11_Request(c, e);
  }
  {
      struct zx_sp11_Response_s* e;
      for (e = x->sp11_Response; e; e = (struct zx_sp11_Response_s*)e->gg.g.n)
	  len += zx_LEN_WO_sp11_Response(c, e);
  }
  {
      struct zx_ff12_RegisterNameIdentifierRequest_s* e;
      for (e = x->RegisterNameIdentifierRequest; e; e = (struct zx_ff12_RegisterNameIdentifierRequest_s*)e->gg.g.n)
	  len += zx_LEN_WO_ff12_RegisterNameIdentifierRequest(c, e);
  }
  {
      struct zx_ff12_RegisterNameIdentifierResponse_s* e;
      for (e = x->RegisterNameIdentifierResponse; e; e = (struct zx_ff12_RegisterNameIdentifierResponse_s*)e->gg.g.n)
	  len += zx_LEN_WO_ff12_RegisterNameIdentifierResponse(c, e);
  }
  {
      struct zx_ff12_FederationTerminationNotification_s* e;
      for (e = x->FederationTerminationNotification; e; e = (struct zx_ff12_FederationTerminationNotification_s*)e->gg.g.n)
	  len += zx_LEN_WO_ff12_FederationTerminationNotification(c, e);
  }
  {
      struct zx_ff12_LogoutRequest_s* e;
      for (e = x->ff12_LogoutRequest; e; e = (struct zx_ff12_LogoutRequest_s*)e->gg.g.n)
	  len += zx_LEN_WO_ff12_LogoutRequest(c, e);
  }
  {
      struct zx_ff12_LogoutResponse_s* e;
      for (e = x->ff12_LogoutResponse; e; e = (struct zx_ff12_LogoutResponse_s*)e->gg.g.n)
	  len += zx_LEN_WO_ff12_LogoutResponse(c, e);
  }
  {
      struct zx_ff12_NameIdentifierMappingRequest_s* e;
      for (e = x->NameIdentifierMappingRequest; e; e = (struct zx_ff12_NameIdentifierMappingRequest_s*)e->gg.g.n)
	  len += zx_LEN_WO_ff12_NameIdentifierMappingRequest(c, e);
  }
  {
      struct zx_ff12_NameIdentifierMappingResponse_s* e;
      for (e = x->NameIdentifierMappingResponse; e; e = (struct zx_ff12_NameIdentifierMappingResponse_s*)e->gg.g.n)
	  len += zx_LEN_WO_ff12_NameIdentifierMappingResponse(c, e);
  }
  {
      struct zx_se_Fault_s* e;
      for (e = x->Fault; e; e = (struct zx_se_Fault_s*)e->gg.g.n)
	  len += zx_LEN_WO_se_Fault(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_se_Body) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<se:Body");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_se, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sp_ArtifactResolve_s* e;
      for (e = x->ArtifactResolve; e; e = (struct zx_sp_ArtifactResolve_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_ArtifactResolve(c, e, p);
  }
  {
      struct zx_sp_ArtifactResponse_s* e;
      for (e = x->ArtifactResponse; e; e = (struct zx_sp_ArtifactResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_ArtifactResponse(c, e, p);
  }
  {
      struct zx_sp_ManageNameIDRequest_s* e;
      for (e = x->ManageNameIDRequest; e; e = (struct zx_sp_ManageNameIDRequest_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_ManageNameIDRequest(c, e, p);
  }
  {
      struct zx_sp_ManageNameIDResponse_s* e;
      for (e = x->ManageNameIDResponse; e; e = (struct zx_sp_ManageNameIDResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_ManageNameIDResponse(c, e, p);
  }
  {
      struct zx_sp_LogoutRequest_s* e;
      for (e = x->LogoutRequest; e; e = (struct zx_sp_LogoutRequest_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_LogoutRequest(c, e, p);
  }
  {
      struct zx_sp_LogoutResponse_s* e;
      for (e = x->LogoutResponse; e; e = (struct zx_sp_LogoutResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_LogoutResponse(c, e, p);
  }
  {
      struct zx_sp_NameIDMappingRequest_s* e;
      for (e = x->NameIDMappingRequest; e; e = (struct zx_sp_NameIDMappingRequest_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_NameIDMappingRequest(c, e, p);
  }
  {
      struct zx_sp_NameIDMappingResponse_s* e;
      for (e = x->NameIDMappingResponse; e; e = (struct zx_sp_NameIDMappingResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_NameIDMappingResponse(c, e, p);
  }
  {
      struct zx_sp_AttributeQuery_s* e;
      for (e = x->AttributeQuery; e; e = (struct zx_sp_AttributeQuery_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_AttributeQuery(c, e, p);
  }
  {
      struct zx_sp_AuthnQuery_s* e;
      for (e = x->AuthnQuery; e; e = (struct zx_sp_AuthnQuery_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_AuthnQuery(c, e, p);
  }
  {
      struct zx_sp_AuthzDecisionQuery_s* e;
      for (e = x->AuthzDecisionQuery; e; e = (struct zx_sp_AuthzDecisionQuery_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_AuthzDecisionQuery(c, e, p);
  }
  {
      struct zx_sp_AssertionIDRequest_s* e;
      for (e = x->AssertionIDRequest; e; e = (struct zx_sp_AssertionIDRequest_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_AssertionIDRequest(c, e, p);
  }
  {
      struct zx_sp_Response_s* e;
      for (e = x->Response; e; e = (struct zx_sp_Response_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Response(c, e, p);
  }
  {
      struct zx_sp11_Request_s* e;
      for (e = x->Request; e; e = (struct zx_sp11_Request_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp11_Request(c, e, p);
  }
  {
      struct zx_sp11_Response_s* e;
      for (e = x->sp11_Response; e; e = (struct zx_sp11_Response_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp11_Response(c, e, p);
  }
  {
      struct zx_ff12_RegisterNameIdentifierRequest_s* e;
      for (e = x->RegisterNameIdentifierRequest; e; e = (struct zx_ff12_RegisterNameIdentifierRequest_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_RegisterNameIdentifierRequest(c, e, p);
  }
  {
      struct zx_ff12_RegisterNameIdentifierResponse_s* e;
      for (e = x->RegisterNameIdentifierResponse; e; e = (struct zx_ff12_RegisterNameIdentifierResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_RegisterNameIdentifierResponse(c, e, p);
  }
  {
      struct zx_ff12_FederationTerminationNotification_s* e;
      for (e = x->FederationTerminationNotification; e; e = (struct zx_ff12_FederationTerminationNotification_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_FederationTerminationNotification(c, e, p);
  }
  {
      struct zx_ff12_LogoutRequest_s* e;
      for (e = x->ff12_LogoutRequest; e; e = (struct zx_ff12_LogoutRequest_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_LogoutRequest(c, e, p);
  }
  {
      struct zx_ff12_LogoutResponse_s* e;
      for (e = x->ff12_LogoutResponse; e; e = (struct zx_ff12_LogoutResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_LogoutResponse(c, e, p);
  }
  {
      struct zx_ff12_NameIdentifierMappingRequest_s* e;
      for (e = x->NameIdentifierMappingRequest; e; e = (struct zx_ff12_NameIdentifierMappingRequest_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_NameIdentifierMappingRequest(c, e, p);
  }
  {
      struct zx_ff12_NameIdentifierMappingResponse_s* e;
      for (e = x->NameIdentifierMappingResponse; e; e = (struct zx_ff12_NameIdentifierMappingResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_NameIdentifierMappingResponse(c, e, p);
  }
  {
      struct zx_se_Fault_s* e;
      for (e = x->Fault; e; e = (struct zx_se_Fault_s*)e->gg.g.n)
	  p = zx_ENC_SO_se_Fault(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</se:Body>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_se_Body) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x, char* p )
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

/* FUNC(zx_EASY_ENC_SO_se_Body) */

struct zx_str* zx_EASY_ENC_SO_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_se_Body(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_se_Body(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_se_Body) */

struct zx_str* zx_EASY_ENC_WO_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_se_Body(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_se_Body(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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

/* FUNC(zx_LEN_SO_se_Envelope) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<se:Envelope")-1 + 1 + sizeof("</se:Envelope>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_se, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_se_Header_s* e;
      for (e = x->Header; e; e = (struct zx_se_Header_s*)e->gg.g.n)
	  len += zx_LEN_SO_se_Header(c, e);
  }
  {
      struct zx_se_Body_s* e;
      for (e = x->Body; e; e = (struct zx_se_Body_s*)e->gg.g.n)
	  len += zx_LEN_SO_se_Body(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_se_Envelope) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x )
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
      struct zx_se_Header_s* e;
      for (e = x->Header; e; e = (struct zx_se_Header_s*)e->gg.g.n)
	  len += zx_LEN_WO_se_Header(c, e);
  }
  {
      struct zx_se_Body_s* e;
      for (e = x->Body; e; e = (struct zx_se_Body_s*)e->gg.g.n)
	  len += zx_LEN_WO_se_Body(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_se_Envelope) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<se:Envelope");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_se, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_se_Header_s* e;
      for (e = x->Header; e; e = (struct zx_se_Header_s*)e->gg.g.n)
	  p = zx_ENC_SO_se_Header(c, e, p);
  }
  {
      struct zx_se_Body_s* e;
      for (e = x->Body; e; e = (struct zx_se_Body_s*)e->gg.g.n)
	  p = zx_ENC_SO_se_Body(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</se:Envelope>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_se_Envelope) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x, char* p )
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

/* FUNC(zx_EASY_ENC_SO_se_Envelope) */

struct zx_str* zx_EASY_ENC_SO_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_se_Envelope(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_se_Envelope(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_se_Envelope) */

struct zx_str* zx_EASY_ENC_WO_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_se_Envelope(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_se_Envelope(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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

/* FUNC(zx_LEN_SO_se_Fault) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<se:Fault")-1 + 1 + sizeof("</se:Fault>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_se, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = x->faultcode; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("se:faultcode")-1, zx_ns_tab+zx_xmlns_ix_se);
  for (se = x->faultstring; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("se:faultstring")-1, zx_ns_tab+zx_xmlns_ix_se);
  for (se = x->faultactor; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("se:faultactor")-1, zx_ns_tab+zx_xmlns_ix_se);
  {
      struct zx_se_detail_s* e;
      for (e = x->detail; e; e = (struct zx_se_detail_s*)e->gg.g.n)
	  len += zx_LEN_SO_se_detail(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_se_Fault) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x )
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
      struct zx_se_detail_s* e;
      for (e = x->detail; e; e = (struct zx_se_detail_s*)e->gg.g.n)
	  len += zx_LEN_WO_se_detail(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_se_Fault) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<se:Fault");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_se, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->faultcode; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "se:faultcode", sizeof("se:faultcode")-1, zx_ns_tab+zx_xmlns_ix_se);
  for (se = x->faultstring; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "se:faultstring", sizeof("se:faultstring")-1, zx_ns_tab+zx_xmlns_ix_se);
  for (se = x->faultactor; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "se:faultactor", sizeof("se:faultactor")-1, zx_ns_tab+zx_xmlns_ix_se);
  {
      struct zx_se_detail_s* e;
      for (e = x->detail; e; e = (struct zx_se_detail_s*)e->gg.g.n)
	  p = zx_ENC_SO_se_detail(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</se:Fault>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_se_Fault) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x, char* p )
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

/* FUNC(zx_EASY_ENC_SO_se_Fault) */

struct zx_str* zx_EASY_ENC_SO_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_se_Fault(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_se_Fault(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_se_Fault) */

struct zx_str* zx_EASY_ENC_WO_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_se_Fault(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_se_Fault(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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

/* FUNC(zx_LEN_SO_se_Header) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<se:Header")-1 + 1 + sizeof("</se:Header>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_se, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_se_Header) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x )
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
  


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_se_Header) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<se:Header");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_se, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</se:Header>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_se_Header) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x, char* p )
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

/* FUNC(zx_EASY_ENC_SO_se_Header) */

struct zx_str* zx_EASY_ENC_SO_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_se_Header(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_se_Header(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_se_Header) */

struct zx_str* zx_EASY_ENC_WO_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_se_Header(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_se_Header(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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

/* FUNC(zx_LEN_SO_se_detail) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<se:detail")-1 + 1 + sizeof("</se:detail>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_se, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_se_detail) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x )
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

/* FUNC(zx_ENC_SO_se_detail) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<se:detail");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_se, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</se:detail>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_se_detail) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x, char* p )
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

/* FUNC(zx_EASY_ENC_SO_se_detail) */

struct zx_str* zx_EASY_ENC_SO_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_se_detail(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_se_detail(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_se_detail) */

struct zx_str* zx_EASY_ENC_WO_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_se_detail(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_se_detail(c, x, buf ), buf, len);
}




/* EOF -- c/zx-se-enc.c */
