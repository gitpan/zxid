/* c/zx-enc.c - WARNING: This file was automatically generated. DO NOT EDIT!
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

#define EL_NAME   root
#define EL_STRUCT zx_root_s
#define EL_NS     
#define EL_TAG    root

/* FUNC(zx_LEN_SO_root) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_root(struct zx_ctx* c, struct zx_root_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;

  /* root node has no begin tag */
  int len = 0;

  
  {
      struct zx_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n)
	  len += zx_LEN_SO_sa_Assertion(c, e);
  }
  {
      struct zx_sp_AuthnRequest_s* e;
      for (e = x->AuthnRequest; e; e = (struct zx_sp_AuthnRequest_s*)e->gg.g.n)
	  len += zx_LEN_SO_sp_AuthnRequest(c, e);
  }
  {
      struct zx_sp_Response_s* e;
      for (e = x->Response; e; e = (struct zx_sp_Response_s*)e->gg.g.n)
	  len += zx_LEN_SO_sp_Response(c, e);
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
      struct zx_se_Envelope_s* e;
      for (e = x->Envelope; e; e = (struct zx_se_Envelope_s*)e->gg.g.n)
	  len += zx_LEN_SO_se_Envelope(c, e);
  }
  {
      struct zx_md_EntityDescriptor_s* e;
      for (e = x->EntityDescriptor; e; e = (struct zx_md_EntityDescriptor_s*)e->gg.g.n)
	  len += zx_LEN_SO_md_EntityDescriptor(c, e);
  }
  {
      struct zx_md_EntitiesDescriptor_s* e;
      for (e = x->EntitiesDescriptor; e; e = (struct zx_md_EntitiesDescriptor_s*)e->gg.g.n)
	  len += zx_LEN_SO_md_EntitiesDescriptor(c, e);
  }
  {
      struct zx_sa11_Assertion_s* e;
      for (e = x->sa11_Assertion; e; e = (struct zx_sa11_Assertion_s*)e->gg.g.n)
	  len += zx_LEN_SO_sa11_Assertion(c, e);
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
      struct zx_ff12_Assertion_s* e;
      for (e = x->ff12_Assertion; e; e = (struct zx_ff12_Assertion_s*)e->gg.g.n)
	  len += zx_LEN_SO_ff12_Assertion(c, e);
  }
  {
      struct zx_ff12_AuthnRequest_s* e;
      for (e = x->ff12_AuthnRequest; e; e = (struct zx_ff12_AuthnRequest_s*)e->gg.g.n)
	  len += zx_LEN_SO_ff12_AuthnRequest(c, e);
  }
  {
      struct zx_ff12_AuthnResponse_s* e;
      for (e = x->AuthnResponse; e; e = (struct zx_ff12_AuthnResponse_s*)e->gg.g.n)
	  len += zx_LEN_SO_ff12_AuthnResponse(c, e);
  }
  {
      struct zx_ff12_AuthnRequestEnvelope_s* e;
      for (e = x->AuthnRequestEnvelope; e; e = (struct zx_ff12_AuthnRequestEnvelope_s*)e->gg.g.n)
	  len += zx_LEN_SO_ff12_AuthnRequestEnvelope(c, e);
  }
  {
      struct zx_ff12_AuthnResponseEnvelope_s* e;
      for (e = x->AuthnResponseEnvelope; e; e = (struct zx_ff12_AuthnResponseEnvelope_s*)e->gg.g.n)
	  len += zx_LEN_SO_ff12_AuthnResponseEnvelope(c, e);
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
      struct zx_m20_EntityDescriptor_s* e;
      for (e = x->m20_EntityDescriptor; e; e = (struct zx_m20_EntityDescriptor_s*)e->gg.g.n)
	  len += zx_LEN_SO_m20_EntityDescriptor(c, e);
  }
  {
      struct zx_m20_EntitiesDescriptor_s* e;
      for (e = x->m20_EntitiesDescriptor; e; e = (struct zx_m20_EntitiesDescriptor_s*)e->gg.g.n)
	  len += zx_LEN_SO_m20_EntitiesDescriptor(c, e);
  }
  {
      struct zx_e_Envelope_s* e;
      for (e = x->e_Envelope; e; e = (struct zx_e_Envelope_s*)e->gg.g.n)
	  len += zx_LEN_SO_e_Envelope(c, e);
  }
  {
      struct zx_dise_Envelope_s* e;
      for (e = x->dise_Envelope; e; e = (struct zx_dise_Envelope_s*)e->gg.g.n)
	  len += zx_LEN_SO_dise_Envelope(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_root) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_root(struct zx_ctx* c, struct zx_root_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;

  /* root node has no begin tag */
  int len = 0;

  
  {
      struct zx_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n)
	  len += zx_LEN_WO_sa_Assertion(c, e);
  }
  {
      struct zx_sp_AuthnRequest_s* e;
      for (e = x->AuthnRequest; e; e = (struct zx_sp_AuthnRequest_s*)e->gg.g.n)
	  len += zx_LEN_WO_sp_AuthnRequest(c, e);
  }
  {
      struct zx_sp_Response_s* e;
      for (e = x->Response; e; e = (struct zx_sp_Response_s*)e->gg.g.n)
	  len += zx_LEN_WO_sp_Response(c, e);
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
      struct zx_se_Envelope_s* e;
      for (e = x->Envelope; e; e = (struct zx_se_Envelope_s*)e->gg.g.n)
	  len += zx_LEN_WO_se_Envelope(c, e);
  }
  {
      struct zx_md_EntityDescriptor_s* e;
      for (e = x->EntityDescriptor; e; e = (struct zx_md_EntityDescriptor_s*)e->gg.g.n)
	  len += zx_LEN_WO_md_EntityDescriptor(c, e);
  }
  {
      struct zx_md_EntitiesDescriptor_s* e;
      for (e = x->EntitiesDescriptor; e; e = (struct zx_md_EntitiesDescriptor_s*)e->gg.g.n)
	  len += zx_LEN_WO_md_EntitiesDescriptor(c, e);
  }
  {
      struct zx_sa11_Assertion_s* e;
      for (e = x->sa11_Assertion; e; e = (struct zx_sa11_Assertion_s*)e->gg.g.n)
	  len += zx_LEN_WO_sa11_Assertion(c, e);
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
      struct zx_ff12_Assertion_s* e;
      for (e = x->ff12_Assertion; e; e = (struct zx_ff12_Assertion_s*)e->gg.g.n)
	  len += zx_LEN_WO_ff12_Assertion(c, e);
  }
  {
      struct zx_ff12_AuthnRequest_s* e;
      for (e = x->ff12_AuthnRequest; e; e = (struct zx_ff12_AuthnRequest_s*)e->gg.g.n)
	  len += zx_LEN_WO_ff12_AuthnRequest(c, e);
  }
  {
      struct zx_ff12_AuthnResponse_s* e;
      for (e = x->AuthnResponse; e; e = (struct zx_ff12_AuthnResponse_s*)e->gg.g.n)
	  len += zx_LEN_WO_ff12_AuthnResponse(c, e);
  }
  {
      struct zx_ff12_AuthnRequestEnvelope_s* e;
      for (e = x->AuthnRequestEnvelope; e; e = (struct zx_ff12_AuthnRequestEnvelope_s*)e->gg.g.n)
	  len += zx_LEN_WO_ff12_AuthnRequestEnvelope(c, e);
  }
  {
      struct zx_ff12_AuthnResponseEnvelope_s* e;
      for (e = x->AuthnResponseEnvelope; e; e = (struct zx_ff12_AuthnResponseEnvelope_s*)e->gg.g.n)
	  len += zx_LEN_WO_ff12_AuthnResponseEnvelope(c, e);
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
      struct zx_m20_EntityDescriptor_s* e;
      for (e = x->m20_EntityDescriptor; e; e = (struct zx_m20_EntityDescriptor_s*)e->gg.g.n)
	  len += zx_LEN_WO_m20_EntityDescriptor(c, e);
  }
  {
      struct zx_m20_EntitiesDescriptor_s* e;
      for (e = x->m20_EntitiesDescriptor; e; e = (struct zx_m20_EntitiesDescriptor_s*)e->gg.g.n)
	  len += zx_LEN_WO_m20_EntitiesDescriptor(c, e);
  }
  {
      struct zx_e_Envelope_s* e;
      for (e = x->e_Envelope; e; e = (struct zx_e_Envelope_s*)e->gg.g.n)
	  len += zx_LEN_WO_e_Envelope(c, e);
  }
  {
      struct zx_dise_Envelope_s* e;
      for (e = x->dise_Envelope; e; e = (struct zx_dise_Envelope_s*)e->gg.g.n)
	  len += zx_LEN_WO_dise_Envelope(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_root) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_root(struct zx_ctx* c, struct zx_root_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;

  /* root node has no begin tag */

  
  {
      struct zx_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Assertion(c, e, p);
  }
  {
      struct zx_sp_AuthnRequest_s* e;
      for (e = x->AuthnRequest; e; e = (struct zx_sp_AuthnRequest_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_AuthnRequest(c, e, p);
  }
  {
      struct zx_sp_Response_s* e;
      for (e = x->Response; e; e = (struct zx_sp_Response_s*)e->gg.g.n)
	  p = zx_ENC_SO_sp_Response(c, e, p);
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
      struct zx_se_Envelope_s* e;
      for (e = x->Envelope; e; e = (struct zx_se_Envelope_s*)e->gg.g.n)
	  p = zx_ENC_SO_se_Envelope(c, e, p);
  }
  {
      struct zx_md_EntityDescriptor_s* e;
      for (e = x->EntityDescriptor; e; e = (struct zx_md_EntityDescriptor_s*)e->gg.g.n)
	  p = zx_ENC_SO_md_EntityDescriptor(c, e, p);
  }
  {
      struct zx_md_EntitiesDescriptor_s* e;
      for (e = x->EntitiesDescriptor; e; e = (struct zx_md_EntitiesDescriptor_s*)e->gg.g.n)
	  p = zx_ENC_SO_md_EntitiesDescriptor(c, e, p);
  }
  {
      struct zx_sa11_Assertion_s* e;
      for (e = x->sa11_Assertion; e; e = (struct zx_sa11_Assertion_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Assertion(c, e, p);
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
      struct zx_ff12_Assertion_s* e;
      for (e = x->ff12_Assertion; e; e = (struct zx_ff12_Assertion_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_Assertion(c, e, p);
  }
  {
      struct zx_ff12_AuthnRequest_s* e;
      for (e = x->ff12_AuthnRequest; e; e = (struct zx_ff12_AuthnRequest_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_AuthnRequest(c, e, p);
  }
  {
      struct zx_ff12_AuthnResponse_s* e;
      for (e = x->AuthnResponse; e; e = (struct zx_ff12_AuthnResponse_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_AuthnResponse(c, e, p);
  }
  {
      struct zx_ff12_AuthnRequestEnvelope_s* e;
      for (e = x->AuthnRequestEnvelope; e; e = (struct zx_ff12_AuthnRequestEnvelope_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_AuthnRequestEnvelope(c, e, p);
  }
  {
      struct zx_ff12_AuthnResponseEnvelope_s* e;
      for (e = x->AuthnResponseEnvelope; e; e = (struct zx_ff12_AuthnResponseEnvelope_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_AuthnResponseEnvelope(c, e, p);
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
      struct zx_m20_EntityDescriptor_s* e;
      for (e = x->m20_EntityDescriptor; e; e = (struct zx_m20_EntityDescriptor_s*)e->gg.g.n)
	  p = zx_ENC_SO_m20_EntityDescriptor(c, e, p);
  }
  {
      struct zx_m20_EntitiesDescriptor_s* e;
      for (e = x->m20_EntitiesDescriptor; e; e = (struct zx_m20_EntitiesDescriptor_s*)e->gg.g.n)
	  p = zx_ENC_SO_m20_EntitiesDescriptor(c, e, p);
  }
  {
      struct zx_e_Envelope_s* e;
      for (e = x->e_Envelope; e; e = (struct zx_e_Envelope_s*)e->gg.g.n)
	  p = zx_ENC_SO_e_Envelope(c, e, p);
  }
  {
      struct zx_dise_Envelope_s* e;
      for (e = x->dise_Envelope; e; e = (struct zx_dise_Envelope_s*)e->gg.g.n)
	  p = zx_ENC_SO_dise_Envelope(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  

  /* root node has no end tag either */

  return p;
}

/* FUNC(zx_ENC_WO_root) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_root(struct zx_ctx* c, struct zx_root_s* x, char* p )
{
  struct zx_elem_s* kid;

  /* root node has no begin tag */

  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  

  /* root node has no end tag either */

  return p;
}

/* FUNC(zx_EASY_ENC_SO_root) */

struct zx_str* zx_EASY_ENC_SO_root(struct zx_ctx* c, struct zx_root_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_root(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_root(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_root) */

struct zx_str* zx_EASY_ENC_WO_root(struct zx_ctx* c, struct zx_root_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_root(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_root(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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

/* FUNC(zx_LEN_SO_simple_elem) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x , int simplelen, struct zx_ns_s* ns)
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = simplelen + 1 + 1 + simplelen + 3;
  len += zx_len_xmlns_if_not_seen(c, ns, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, x); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_simple_elem) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x , int simplelen)
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + simplelen + 1 + 2 + simplelen + 1;
  
  if (x->g.ns && x->g.ns->prefix_len)
    len += (x->g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->g.ns, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_wo_common(c, x); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_simple_elem) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, char* p , char* simpletag, int simplelen, struct zx_ns_s* ns)
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_SIMPLE_TAG(p, simpletag, simplelen);
  p = zx_enc_xmlns_if_not_seen(c, p, ns, &pop_seen);

  p = zx_enc_unknown_attrs(p, x->any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, x);
  
#if 1 /* NORMALMODE */
  ZX_OUT_SIMPLE_CLOSE_TAG(p, simpletag,simplelen);
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_simple_elem) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, char* p , char* simpletag, int simplelen)
{
  struct zx_elem_s* kid;
#if 1 /* NORMALMODE */
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->g.ns && x->g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->g.ns->prefix, x->g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, simpletag, simplelen);
  qq = p;
  zx_add_xmlns_if_not_seen(c, x->g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 

  p = zx_enc_unknown_attrs(p, x->any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
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

/* FUNC(zx_EASY_ENC_SO_simple_elem) */

struct zx_str* zx_EASY_ENC_SO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x , char* simpletag, int simplelen, struct zx_ns_s* ns)
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_simple_elem(c, x , simplelen, ns);
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_simple_elem(c, x, buf , simpletag, simplelen, ns), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_simple_elem) */

struct zx_str* zx_EASY_ENC_WO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x , char* simpletag, int simplelen)
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_simple_elem(c, x , simplelen);
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_simple_elem(c, x, buf , simpletag, simplelen), buf, len);
}






/* FUNC(zx_ENC_WO_any_elem) */

int zx_LEN_WO_any_elem(struct zx_ctx* c, struct zx_elem_s* x)
{
  int len;
  struct zx_elem_s* kid;
  switch (x->g.tok) {
  case zx_a_Address_ELEM:
    return zx_LEN_WO_a_Address(c, (struct zx_a_Address_s*)x);
  case zx_a_ReferenceParameters_ELEM:
    return zx_LEN_WO_a_ReferenceParameters(c, (struct zx_a_ReferenceParameters_s*)x);
  case zx_a_Metadata_ELEM:
    return zx_LEN_WO_a_Metadata(c, (struct zx_a_Metadata_s*)x);
  case zx_a_Action_ELEM:
    return zx_LEN_WO_a_Action(c, (struct zx_a_Action_s*)x);
  case zx_a_SoapAction_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("SoapAction")-1);
  case zx_ac_ActivationLimitDuration_ELEM:
    return zx_LEN_WO_ac_ActivationLimitDuration(c, (struct zx_ac_ActivationLimitDuration_s*)x);
  case zx_ac_ActivationLimitUsages_ELEM:
    return zx_LEN_WO_ac_ActivationLimitUsages(c, (struct zx_ac_ActivationLimitUsages_s*)x);
  case zx_ac_ActivationLimitSession_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("ActivationLimitSession")-1);
  case zx_ac_Length_ELEM:
    return zx_LEN_WO_ac_Length(c, (struct zx_ac_Length_s*)x);
  case zx_ac_Alphabet_ELEM:
    return zx_LEN_WO_ac_Alphabet(c, (struct zx_ac_Alphabet_s*)x);
  case zx_ac_Generation_ELEM:
    return zx_LEN_WO_ac_Generation(c, (struct zx_ac_Generation_s*)x);
  case zx_ac_ActivationLimit_ELEM:
    return zx_LEN_WO_ac_ActivationLimit(c, (struct zx_ac_ActivationLimit_s*)x);
  case zx_ac_Extension_ELEM:
    return zx_LEN_WO_ac_Extension(c, (struct zx_ac_Extension_s*)x);
  case zx_ac_GoverningAgreements_ELEM:
    return zx_LEN_WO_ac_GoverningAgreements(c, (struct zx_ac_GoverningAgreements_s*)x);
  case zx_ac_Identification_ELEM:
    return zx_LEN_WO_ac_Identification(c, (struct zx_ac_Identification_s*)x);
  case zx_ac_TechnicalProtection_ELEM:
    return zx_LEN_WO_ac_TechnicalProtection(c, (struct zx_ac_TechnicalProtection_s*)x);
  case zx_ac_OperationalProtection_ELEM:
    return zx_LEN_WO_ac_OperationalProtection(c, (struct zx_ac_OperationalProtection_s*)x);
  case zx_ac_AuthenticationMethod_ELEM:
    return zx_LEN_WO_ac_AuthenticationMethod(c, (struct zx_ac_AuthenticationMethod_s*)x);
  case zx_ac_AuthenticatingAuthority_ELEM:
    return zx_LEN_WO_ac_AuthenticatingAuthority(c, (struct zx_ac_AuthenticatingAuthority_s*)x);
  case zx_ac_PrincipalAuthenticationMechanism_ELEM:
    return zx_LEN_WO_ac_PrincipalAuthenticationMechanism(c, (struct zx_ac_PrincipalAuthenticationMechanism_s*)x);
  case zx_ac_Authenticator_ELEM:
    return zx_LEN_WO_ac_Authenticator(c, (struct zx_ac_Authenticator_s*)x);
  case zx_ac_AuthenticatorTransportProtocol_ELEM:
    return zx_LEN_WO_ac_AuthenticatorTransportProtocol(c, (struct zx_ac_AuthenticatorTransportProtocol_s*)x);
  case zx_ac_PreviousSession_ELEM:
    return zx_LEN_WO_ac_PreviousSession(c, (struct zx_ac_PreviousSession_s*)x);
  case zx_ac_ResumeSession_ELEM:
    return zx_LEN_WO_ac_ResumeSession(c, (struct zx_ac_ResumeSession_s*)x);
  case zx_ac_DigSig_ELEM:
    return zx_LEN_WO_ac_DigSig(c, (struct zx_ac_DigSig_s*)x);
  case zx_ac_Password_ELEM:
    return zx_LEN_WO_ac_Password(c, (struct zx_ac_Password_s*)x);
  case zx_ac_ZeroKnowledge_ELEM:
    return zx_LEN_WO_ac_ZeroKnowledge(c, (struct zx_ac_ZeroKnowledge_s*)x);
  case zx_ac_SharedSecretChallengeResponse_ELEM:
    return zx_LEN_WO_ac_SharedSecretChallengeResponse(c, (struct zx_ac_SharedSecretChallengeResponse_s*)x);
  case zx_ac_SharedSecretDynamicPlaintext_ELEM:
    return zx_LEN_WO_ac_SharedSecretDynamicPlaintext(c, (struct zx_ac_SharedSecretDynamicPlaintext_s*)x);
  case zx_ac_IPAddress_ELEM:
    return zx_LEN_WO_ac_IPAddress(c, (struct zx_ac_IPAddress_s*)x);
  case zx_ac_AsymmetricDecryption_ELEM:
    return zx_LEN_WO_ac_AsymmetricDecryption(c, (struct zx_ac_AsymmetricDecryption_s*)x);
  case zx_ac_AsymmetricKeyAgreement_ELEM:
    return zx_LEN_WO_ac_AsymmetricKeyAgreement(c, (struct zx_ac_AsymmetricKeyAgreement_s*)x);
  case zx_ac_HTTP_ELEM:
    return zx_LEN_WO_ac_HTTP(c, (struct zx_ac_HTTP_s*)x);
  case zx_ac_SSL_ELEM:
    return zx_LEN_WO_ac_SSL(c, (struct zx_ac_SSL_s*)x);
  case zx_ac_MobileNetworkNoEncryption_ELEM:
    return zx_LEN_WO_ac_MobileNetworkNoEncryption(c, (struct zx_ac_MobileNetworkNoEncryption_s*)x);
  case zx_ac_MobileNetworkRadioEncryption_ELEM:
    return zx_LEN_WO_ac_MobileNetworkRadioEncryption(c, (struct zx_ac_MobileNetworkRadioEncryption_s*)x);
  case zx_ac_MobileNetworkEndToEndEncryption_ELEM:
    return zx_LEN_WO_ac_MobileNetworkEndToEndEncryption(c, (struct zx_ac_MobileNetworkEndToEndEncryption_s*)x);
  case zx_ac_WTLS_ELEM:
    return zx_LEN_WO_ac_WTLS(c, (struct zx_ac_WTLS_s*)x);
  case zx_ac_IPSec_ELEM:
    return zx_LEN_WO_ac_IPSec(c, (struct zx_ac_IPSec_s*)x);
  case zx_ac_GoverningAgreementRef_ELEM:
    return zx_LEN_WO_ac_GoverningAgreementRef(c, (struct zx_ac_GoverningAgreementRef_s*)x);
  case zx_ac_PhysicalVerification_ELEM:
    return zx_LEN_WO_ac_PhysicalVerification(c, (struct zx_ac_PhysicalVerification_s*)x);
  case zx_ac_WrittenConsent_ELEM:
    return zx_LEN_WO_ac_WrittenConsent(c, (struct zx_ac_WrittenConsent_s*)x);
  case zx_ac_ActivationPin_ELEM:
    return zx_LEN_WO_ac_ActivationPin(c, (struct zx_ac_ActivationPin_s*)x);
  case zx_ac_SecurityAudit_ELEM:
    return zx_LEN_WO_ac_SecurityAudit(c, (struct zx_ac_SecurityAudit_s*)x);
  case zx_ac_DeactivationCallCenter_ELEM:
    return zx_LEN_WO_ac_DeactivationCallCenter(c, (struct zx_ac_DeactivationCallCenter_s*)x);
  case zx_ac_Token_ELEM:
    return zx_LEN_WO_ac_Token(c, (struct zx_ac_Token_s*)x);
  case zx_ac_Smartcard_ELEM:
    return zx_LEN_WO_ac_Smartcard(c, (struct zx_ac_Smartcard_s*)x);
  case zx_ac_KeyActivation_ELEM:
    return zx_LEN_WO_ac_KeyActivation(c, (struct zx_ac_KeyActivation_s*)x);
  case zx_ac_KeyStorage_ELEM:
    return zx_LEN_WO_ac_KeyStorage(c, (struct zx_ac_KeyStorage_s*)x);
  case zx_ac_KeySharing_ELEM:
    return zx_LEN_WO_ac_KeySharing(c, (struct zx_ac_KeySharing_s*)x);
  case zx_ac_SwitchAudit_ELEM:
    return zx_LEN_WO_ac_SwitchAudit(c, (struct zx_ac_SwitchAudit_s*)x);
  case zx_ac_PrivateKeyProtection_ELEM:
    return zx_LEN_WO_ac_PrivateKeyProtection(c, (struct zx_ac_PrivateKeyProtection_s*)x);
  case zx_ac_SecretKeyProtection_ELEM:
    return zx_LEN_WO_ac_SecretKeyProtection(c, (struct zx_ac_SecretKeyProtection_s*)x);
  case zx_ac_TimeSyncToken_ELEM:
    return zx_LEN_WO_ac_TimeSyncToken(c, (struct zx_ac_TimeSyncToken_s*)x);
  case zx_sp_RequestedAuthnContext_ELEM:
    return zx_LEN_WO_sp_RequestedAuthnContext(c, (struct zx_sp_RequestedAuthnContext_s*)x);
  case zx_b_SecurityMechID_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("SecurityMechID")-1);
  case zx_b_InteractionService_ELEM:
    return zx_LEN_WO_b_InteractionService(c, (struct zx_b_InteractionService_s*)x);
  case zx_di_Address_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Address")-1);
  case zx_sbf_Framework_ELEM:
    return zx_LEN_WO_sbf_Framework(c, (struct zx_sbf_Framework_s*)x);
  case zx_di_SecurityMechID_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("SecurityMechID")-1);
  case zx_di_Action_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Action")-1);
  case zx_md_KeyDescriptor_ELEM:
    return zx_LEN_WO_md_KeyDescriptor(c, (struct zx_md_KeyDescriptor_s*)x);
  case zx_di_Option_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Option")-1);
  case zx_di_RequestedService_ELEM:
    return zx_LEN_WO_di_RequestedService(c, (struct zx_di_RequestedService_s*)x);
  case zx_lu_Status_ELEM:
    return zx_LEN_WO_lu_Status(c, (struct zx_lu_Status_s*)x);
  case zx_a_EndpointReference_ELEM:
    return zx_LEN_WO_a_EndpointReference(c, (struct zx_a_EndpointReference_s*)x);
  case zx_di_ServiceType_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("ServiceType")-1);
  case zx_di_ProviderID_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("ProviderID")-1);
  case zx_di_Options_ELEM:
    return zx_LEN_WO_di_Options(c, (struct zx_di_Options_s*)x);
  case zx_di_Framework_ELEM:
    return zx_LEN_WO_di_Framework(c, (struct zx_di_Framework_s*)x);
  case zx_sec_Token_ELEM:
    return zx_LEN_WO_sec_Token(c, (struct zx_sec_Token_s*)x);
  case zx_di_EndpointContext_ELEM:
    return zx_LEN_WO_di_EndpointContext(c, (struct zx_di_EndpointContext_s*)x);
  case zx_di_Abstract_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Abstract")-1);
  case zx_di_ServiceContext_ELEM:
    return zx_LEN_WO_di_ServiceContext(c, (struct zx_di_ServiceContext_s*)x);
  case zx_di_SvcMDID_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("SvcMDID")-1);
  case zx_di_SvcMD_ELEM:
    return zx_LEN_WO_di_SvcMD(c, (struct zx_di_SvcMD_s*)x);
  case zx_di_Keys_ELEM:
    return zx_LEN_WO_di_Keys(c, (struct zx_di_Keys_s*)x);
  case zx_di12_SecurityMechID_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("SecurityMechID")-1);
  case zx_di12_CredentialRef_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("CredentialRef")-1);
  case zx_di12_WsdlURI_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("WsdlURI")-1);
  case zx_di12_ServiceNameRef_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("ServiceNameRef")-1);
  case zx_di12_Endpoint_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Endpoint")-1);
  case zx_di12_SoapAction_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("SoapAction")-1);
  case zx_xenc_EncryptedData_ELEM:
    return zx_LEN_WO_xenc_EncryptedData(c, (struct zx_xenc_EncryptedData_s*)x);
  case zx_xenc_EncryptedKey_ELEM:
    return zx_LEN_WO_xenc_EncryptedKey(c, (struct zx_xenc_EncryptedKey_s*)x);
  case zx_di12_ResourceOffering_ELEM:
    return zx_LEN_WO_di12_ResourceOffering(c, (struct zx_di12_ResourceOffering_s*)x);
  case zx_di12_ResourceID_ELEM:
    return zx_LEN_WO_di12_ResourceID(c, (struct zx_di12_ResourceID_s*)x);
  case zx_di12_EncryptedResourceID_ELEM:
    return zx_LEN_WO_di12_EncryptedResourceID(c, (struct zx_di12_EncryptedResourceID_s*)x);
  case zx_di12_InsertEntry_ELEM:
    return zx_LEN_WO_di12_InsertEntry(c, (struct zx_di12_InsertEntry_s*)x);
  case zx_di12_RemoveEntry_ELEM:
    return zx_LEN_WO_di12_RemoveEntry(c, (struct zx_di12_RemoveEntry_s*)x);
  case zx_di12_Status_ELEM:
    return zx_LEN_WO_di12_Status(c, (struct zx_di12_Status_s*)x);
  case zx_di12_Extension_ELEM:
    return zx_LEN_WO_di12_Extension(c, (struct zx_di12_Extension_s*)x);
  case zx_di12_Option_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Option")-1);
  case zx_di12_RequestedServiceType_ELEM:
    return zx_LEN_WO_di12_RequestedServiceType(c, (struct zx_di12_RequestedServiceType_s*)x);
  case zx_di12_Credentials_ELEM:
    return zx_LEN_WO_di12_Credentials(c, (struct zx_di12_Credentials_s*)x);
  case zx_di12_ServiceType_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("ServiceType")-1);
  case zx_di12_Options_ELEM:
    return zx_LEN_WO_di12_Options(c, (struct zx_di12_Options_s*)x);
  case zx_di12_ServiceInstance_ELEM:
    return zx_LEN_WO_di12_ServiceInstance(c, (struct zx_di12_ServiceInstance_s*)x);
  case zx_di12_Abstract_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Abstract")-1);
  case zx_di12_ProviderID_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("ProviderID")-1);
  case zx_di12_Description_ELEM:
    return zx_LEN_WO_di12_Description(c, (struct zx_di12_Description_s*)x);
  case zx_di_SvcMDAssociationAdd_ELEM:
    return zx_LEN_WO_di_SvcMDAssociationAdd(c, (struct zx_di_SvcMDAssociationAdd_s*)x);
  case zx_di_SvcMDAssociationAddResponse_ELEM:
    return zx_LEN_WO_di_SvcMDAssociationAddResponse(c, (struct zx_di_SvcMDAssociationAddResponse_s*)x);
  case zx_di_SvcMDAssociationDelete_ELEM:
    return zx_LEN_WO_di_SvcMDAssociationDelete(c, (struct zx_di_SvcMDAssociationDelete_s*)x);
  case zx_di_SvcMDAssociationDeleteResponse_ELEM:
    return zx_LEN_WO_di_SvcMDAssociationDeleteResponse(c, (struct zx_di_SvcMDAssociationDeleteResponse_s*)x);
  case zx_di_SvcMDAssociationQuery_ELEM:
    return zx_LEN_WO_di_SvcMDAssociationQuery(c, (struct zx_di_SvcMDAssociationQuery_s*)x);
  case zx_di_SvcMDAssociationQueryResponse_ELEM:
    return zx_LEN_WO_di_SvcMDAssociationQueryResponse(c, (struct zx_di_SvcMDAssociationQueryResponse_s*)x);
  case zx_di_SvcMDRegister_ELEM:
    return zx_LEN_WO_di_SvcMDRegister(c, (struct zx_di_SvcMDRegister_s*)x);
  case zx_di_SvcMDRegisterResponse_ELEM:
    return zx_LEN_WO_di_SvcMDRegisterResponse(c, (struct zx_di_SvcMDRegisterResponse_s*)x);
  case zx_di_SvcMDDelete_ELEM:
    return zx_LEN_WO_di_SvcMDDelete(c, (struct zx_di_SvcMDDelete_s*)x);
  case zx_di_SvcMDDeleteResponse_ELEM:
    return zx_LEN_WO_di_SvcMDDeleteResponse(c, (struct zx_di_SvcMDDeleteResponse_s*)x);
  case zx_di_SvcMDQuery_ELEM:
    return zx_LEN_WO_di_SvcMDQuery(c, (struct zx_di_SvcMDQuery_s*)x);
  case zx_di_SvcMDQueryResponse_ELEM:
    return zx_LEN_WO_di_SvcMDQueryResponse(c, (struct zx_di_SvcMDQueryResponse_s*)x);
  case zx_di_SvcMDReplace_ELEM:
    return zx_LEN_WO_di_SvcMDReplace(c, (struct zx_di_SvcMDReplace_s*)x);
  case zx_di_SvcMDReplaceResponse_ELEM:
    return zx_LEN_WO_di_SvcMDReplaceResponse(c, (struct zx_di_SvcMDReplaceResponse_s*)x);
  case zx_dise_Fault_ELEM:
    return zx_LEN_WO_dise_Fault(c, (struct zx_dise_Fault_s*)x);
  case zx_dise_Header_ELEM:
    return zx_LEN_WO_dise_Header(c, (struct zx_dise_Header_s*)x);
  case zx_dise_Body_ELEM:
    return zx_LEN_WO_dise_Body(c, (struct zx_dise_Body_s*)x);
  case zx_dise_faultcode_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("faultcode")-1);
  case zx_dise_faultstring_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("faultstring")-1);
  case zx_dise_faultactor_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("faultactor")-1);
  case zx_dise_detail_ELEM:
    return zx_LEN_WO_dise_detail(c, (struct zx_dise_detail_s*)x);
  case zx_a_MessageID_ELEM:
    return zx_LEN_WO_a_MessageID(c, (struct zx_a_MessageID_s*)x);
  case zx_a_RelatesTo_ELEM:
    return zx_LEN_WO_a_RelatesTo(c, (struct zx_a_RelatesTo_s*)x);
  case zx_a_ReplyTo_ELEM:
    return zx_LEN_WO_a_ReplyTo(c, (struct zx_a_ReplyTo_s*)x);
  case zx_a_From_ELEM:
    return zx_LEN_WO_a_From(c, (struct zx_a_From_s*)x);
  case zx_a_FaultTo_ELEM:
    return zx_LEN_WO_a_FaultTo(c, (struct zx_a_FaultTo_s*)x);
  case zx_a_To_ELEM:
    return zx_LEN_WO_a_To(c, (struct zx_a_To_s*)x);
  case zx_b_Framework_ELEM:
    return zx_LEN_WO_b_Framework(c, (struct zx_b_Framework_s*)x);
  case zx_b_Sender_ELEM:
    return zx_LEN_WO_b_Sender(c, (struct zx_b_Sender_s*)x);
  case zx_b_CredentialsContext_ELEM:
    return zx_LEN_WO_b_CredentialsContext(c, (struct zx_b_CredentialsContext_s*)x);
  case zx_b_EndpointUpdate_ELEM:
    return zx_LEN_WO_b_EndpointUpdate(c, (struct zx_b_EndpointUpdate_s*)x);
  case zx_b_Timeout_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Timeout")-1);
  case zx_b_ProcessingContext_ELEM:
    return zx_LEN_WO_b_ProcessingContext(c, (struct zx_b_ProcessingContext_s*)x);
  case zx_b_ApplicationEPR_ELEM:
    return zx_LEN_WO_b_ApplicationEPR(c, (struct zx_b_ApplicationEPR_s*)x);
  case zx_b_RedirectRequest_ELEM:
    return zx_LEN_WO_b_RedirectRequest(c, (struct zx_b_RedirectRequest_s*)x);
  case zx_ds_P_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("P")-1);
  case zx_ds_Q_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Q")-1);
  case zx_ds_G_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("G")-1);
  case zx_ds_Y_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Y")-1);
  case zx_ds_J_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("J")-1);
  case zx_ds_Seed_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Seed")-1);
  case zx_ds_PgenCounter_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("PgenCounter")-1);
  case zx_ds_KeyName_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("KeyName")-1);
  case zx_ds_KeyValue_ELEM:
    return zx_LEN_WO_ds_KeyValue(c, (struct zx_ds_KeyValue_s*)x);
  case zx_ds_RetrievalMethod_ELEM:
    return zx_LEN_WO_ds_RetrievalMethod(c, (struct zx_ds_RetrievalMethod_s*)x);
  case zx_ds_X509Data_ELEM:
    return zx_LEN_WO_ds_X509Data(c, (struct zx_ds_X509Data_s*)x);
  case zx_ds_PGPData_ELEM:
    return zx_LEN_WO_ds_PGPData(c, (struct zx_ds_PGPData_s*)x);
  case zx_ds_SPKIData_ELEM:
    return zx_LEN_WO_ds_SPKIData(c, (struct zx_ds_SPKIData_s*)x);
  case zx_ds_MgmtData_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("MgmtData")-1);
  case zx_ds_DSAKeyValue_ELEM:
    return zx_LEN_WO_ds_DSAKeyValue(c, (struct zx_ds_DSAKeyValue_s*)x);
  case zx_ds_RSAKeyValue_ELEM:
    return zx_LEN_WO_ds_RSAKeyValue(c, (struct zx_ds_RSAKeyValue_s*)x);
  case zx_ds_Reference_ELEM:
    return zx_LEN_WO_ds_Reference(c, (struct zx_ds_Reference_s*)x);
  case zx_ds_PGPKeyID_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("PGPKeyID")-1);
  case zx_ds_PGPKeyPacket_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("PGPKeyPacket")-1);
  case zx_ds_Modulus_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Modulus")-1);
  case zx_ds_Exponent_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Exponent")-1);
  case zx_ds_Transforms_ELEM:
    return zx_LEN_WO_ds_Transforms(c, (struct zx_ds_Transforms_s*)x);
  case zx_ds_DigestMethod_ELEM:
    return zx_LEN_WO_ds_DigestMethod(c, (struct zx_ds_DigestMethod_s*)x);
  case zx_ds_DigestValue_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("DigestValue")-1);
  case zx_ds_SPKISexp_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("SPKISexp")-1);
  case zx_ds_SignedInfo_ELEM:
    return zx_LEN_WO_ds_SignedInfo(c, (struct zx_ds_SignedInfo_s*)x);
  case zx_ds_SignatureValue_ELEM:
    return zx_LEN_WO_ds_SignatureValue(c, (struct zx_ds_SignatureValue_s*)x);
  case zx_ds_KeyInfo_ELEM:
    return zx_LEN_WO_ds_KeyInfo(c, (struct zx_ds_KeyInfo_s*)x);
  case zx_ds_Object_ELEM:
    return zx_LEN_WO_ds_Object(c, (struct zx_ds_Object_s*)x);
  case zx_ds_HMACOutputLength_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("HMACOutputLength")-1);
  case zx_ds_SignatureProperty_ELEM:
    return zx_LEN_WO_ds_SignatureProperty(c, (struct zx_ds_SignatureProperty_s*)x);
  case zx_ds_CanonicalizationMethod_ELEM:
    return zx_LEN_WO_ds_CanonicalizationMethod(c, (struct zx_ds_CanonicalizationMethod_s*)x);
  case zx_ds_SignatureMethod_ELEM:
    return zx_LEN_WO_ds_SignatureMethod(c, (struct zx_ds_SignatureMethod_s*)x);
  case zx_ds_XPath_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("XPath")-1);
  case zx_ds_Transform_ELEM:
    return zx_LEN_WO_ds_Transform(c, (struct zx_ds_Transform_s*)x);
  case zx_ds_X509IssuerSerial_ELEM:
    return zx_LEN_WO_ds_X509IssuerSerial(c, (struct zx_ds_X509IssuerSerial_s*)x);
  case zx_ds_X509SKI_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("X509SKI")-1);
  case zx_ds_X509SubjectName_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("X509SubjectName")-1);
  case zx_ds_X509Certificate_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("X509Certificate")-1);
  case zx_ds_X509CRL_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("X509CRL")-1);
  case zx_ds_X509IssuerName_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("X509IssuerName")-1);
  case zx_ds_X509SerialNumber_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("X509SerialNumber")-1);
  case zx_di_Query_ELEM:
    return zx_LEN_WO_di_Query(c, (struct zx_di_Query_s*)x);
  case zx_di_QueryResponse_ELEM:
    return zx_LEN_WO_di_QueryResponse(c, (struct zx_di_QueryResponse_s*)x);
  case zx_di12_Query_ELEM:
    return zx_LEN_WO_di12_Query(c, (struct zx_di12_Query_s*)x);
  case zx_di12_QueryResponse_ELEM:
    return zx_LEN_WO_di12_QueryResponse(c, (struct zx_di12_QueryResponse_s*)x);
  case zx_di12_Modify_ELEM:
    return zx_LEN_WO_di12_Modify(c, (struct zx_di12_Modify_s*)x);
  case zx_di12_ModifyResponse_ELEM:
    return zx_LEN_WO_di12_ModifyResponse(c, (struct zx_di12_ModifyResponse_s*)x);
  case zx_e_Fault_ELEM:
    return zx_LEN_WO_e_Fault(c, (struct zx_e_Fault_s*)x);
  case zx_e_Header_ELEM:
    return zx_LEN_WO_e_Header(c, (struct zx_e_Header_s*)x);
  case zx_e_Body_ELEM:
    return zx_LEN_WO_e_Body(c, (struct zx_e_Body_s*)x);
  case zx_e_faultcode_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("faultcode")-1);
  case zx_e_faultstring_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("faultstring")-1);
  case zx_e_faultactor_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("faultactor")-1);
  case zx_e_detail_ELEM:
    return zx_LEN_WO_e_detail(c, (struct zx_e_detail_s*)x);
  case zx_b_TargetIdentity_ELEM:
    return zx_LEN_WO_b_TargetIdentity(c, (struct zx_b_TargetIdentity_s*)x);
  case zx_b_Consent_ELEM:
    return zx_LEN_WO_b_Consent(c, (struct zx_b_Consent_s*)x);
  case zx_b_UsageDirective_ELEM:
    return zx_LEN_WO_b_UsageDirective(c, (struct zx_b_UsageDirective_s*)x);
  case zx_b_UserInteraction_ELEM:
    return zx_LEN_WO_b_UserInteraction(c, (struct zx_b_UserInteraction_s*)x);
  case zx_b12_Correlation_ELEM:
    return zx_LEN_WO_b12_Correlation(c, (struct zx_b12_Correlation_s*)x);
  case zx_b12_Provider_ELEM:
    return zx_LEN_WO_b12_Provider(c, (struct zx_b12_Provider_s*)x);
  case zx_b12_ProcessingContext_ELEM:
    return zx_LEN_WO_b12_ProcessingContext(c, (struct zx_b12_ProcessingContext_s*)x);
  case zx_b12_Consent_ELEM:
    return zx_LEN_WO_b12_Consent(c, (struct zx_b12_Consent_s*)x);
  case zx_b12_UsageDirective_ELEM:
    return zx_LEN_WO_b12_UsageDirective(c, (struct zx_b12_UsageDirective_s*)x);
  case zx_sa11_Conditions_ELEM:
    return zx_LEN_WO_sa11_Conditions(c, (struct zx_sa11_Conditions_s*)x);
  case zx_sa11_Advice_ELEM:
    return zx_LEN_WO_sa11_Advice(c, (struct zx_sa11_Advice_s*)x);
  case zx_sa11_Statement_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Statement")-1);
  case zx_sa11_SubjectStatement_ELEM:
    return zx_LEN_WO_sa11_SubjectStatement(c, (struct zx_sa11_SubjectStatement_s*)x);
  case zx_sa11_AuthenticationStatement_ELEM:
    return zx_LEN_WO_sa11_AuthenticationStatement(c, (struct zx_sa11_AuthenticationStatement_s*)x);
  case zx_sa11_AuthorizationDecisionStatement_ELEM:
    return zx_LEN_WO_sa11_AuthorizationDecisionStatement(c, (struct zx_sa11_AuthorizationDecisionStatement_s*)x);
  case zx_sa11_AttributeStatement_ELEM:
    return zx_LEN_WO_sa11_AttributeStatement(c, (struct zx_sa11_AttributeStatement_s*)x);
  case zx_ds_Signature_ELEM:
    return (x != c->exclude_sig) ? zx_LEN_WO_ds_Signature(c, (struct zx_ds_Signature_s*)x) : 0;
  case zx_sa11_Subject_ELEM:
    return zx_LEN_WO_sa11_Subject(c, (struct zx_sa11_Subject_s*)x);
  case zx_sa11_SubjectLocality_ELEM:
    return zx_LEN_WO_sa11_SubjectLocality(c, (struct zx_sa11_SubjectLocality_s*)x);
  case zx_sa11_AuthorityBinding_ELEM:
    return zx_LEN_WO_sa11_AuthorityBinding(c, (struct zx_sa11_AuthorityBinding_s*)x);
  case zx_ff12_AuthnContext_ELEM:
    return zx_LEN_WO_ff12_AuthnContext(c, (struct zx_ff12_AuthnContext_s*)x);
  case zx_ff12_AuthnContextClassRef_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("AuthnContextClassRef")-1);
  case zx_ac_AuthenticationContextStatement_ELEM:
    return zx_LEN_WO_ac_AuthenticationContextStatement(c, (struct zx_ac_AuthenticationContextStatement_s*)x);
  case zx_ff12_AuthnContextStatementRef_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("AuthnContextStatementRef")-1);
  case zx_sp11_RespondWith_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("RespondWith")-1);
  case zx_ff12_Extension_ELEM:
    return zx_LEN_WO_ff12_Extension(c, (struct zx_ff12_Extension_s*)x);
  case zx_ff12_ProviderID_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("ProviderID")-1);
  case zx_ff12_AffiliationID_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("AffiliationID")-1);
  case zx_ff12_NameIDPolicy_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("NameIDPolicy")-1);
  case zx_ff12_ForceAuthn_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("ForceAuthn")-1);
  case zx_ff12_IsPassive_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("IsPassive")-1);
  case zx_ff12_ProtocolProfile_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("ProtocolProfile")-1);
  case zx_ff12_AssertionConsumerServiceID_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("AssertionConsumerServiceID")-1);
  case zx_ff12_RequestAuthnContext_ELEM:
    return zx_LEN_WO_ff12_RequestAuthnContext(c, (struct zx_ff12_RequestAuthnContext_s*)x);
  case zx_ff12_RelayState_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("RelayState")-1);
  case zx_ff12_Scoping_ELEM:
    return zx_LEN_WO_ff12_Scoping(c, (struct zx_ff12_Scoping_s*)x);
  case zx_ff12_AuthnRequest_ELEM:
    return zx_LEN_WO_ff12_AuthnRequest(c, (struct zx_ff12_AuthnRequest_s*)x);
  case zx_ff12_ProviderName_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("ProviderName")-1);
  case zx_ff12_AssertionConsumerServiceURL_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("AssertionConsumerServiceURL")-1);
  case zx_ff12_IDPList_ELEM:
    return zx_LEN_WO_ff12_IDPList(c, (struct zx_ff12_IDPList_s*)x);
  case zx_sp11_Status_ELEM:
    return zx_LEN_WO_sp11_Status(c, (struct zx_sp11_Status_s*)x);
  case zx_sa11_Assertion_ELEM:
    return zx_LEN_WO_sa11_Assertion(c, (struct zx_sa11_Assertion_s*)x);
  case zx_ff12_AuthnResponse_ELEM:
    return zx_LEN_WO_ff12_AuthnResponse(c, (struct zx_ff12_AuthnResponse_s*)x);
  case zx_sa11_NameIdentifier_ELEM:
    return zx_LEN_WO_sa11_NameIdentifier(c, (struct zx_sa11_NameIdentifier_s*)x);
  case zx_ff12_IDPEntry_ELEM:
    return zx_LEN_WO_ff12_IDPEntry(c, (struct zx_ff12_IDPEntry_s*)x);
  case zx_ff12_Loc_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Loc")-1);
  case zx_ff12_IDPEntries_ELEM:
    return zx_LEN_WO_ff12_IDPEntries(c, (struct zx_ff12_IDPEntries_s*)x);
  case zx_ff12_GetComplete_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("GetComplete")-1);
  case zx_ff12_SessionIndex_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("SessionIndex")-1);
  case zx_ff12_TargetNamespace_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("TargetNamespace")-1);
  case zx_ff12_IDPProvidedNameIdentifier_ELEM:
    return zx_LEN_WO_ff12_IDPProvidedNameIdentifier(c, (struct zx_ff12_IDPProvidedNameIdentifier_s*)x);
  case zx_ff12_SPProvidedNameIdentifier_ELEM:
    return zx_LEN_WO_ff12_SPProvidedNameIdentifier(c, (struct zx_ff12_SPProvidedNameIdentifier_s*)x);
  case zx_ff12_OldProvidedNameIdentifier_ELEM:
    return zx_LEN_WO_ff12_OldProvidedNameIdentifier(c, (struct zx_ff12_OldProvidedNameIdentifier_s*)x);
  case zx_ff12_AuthnContextComparison_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("AuthnContextComparison")-1);
  case zx_ff12_ProxyCount_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("ProxyCount")-1);
  case zx_sa11_SubjectConfirmation_ELEM:
    return zx_LEN_WO_sa11_SubjectConfirmation(c, (struct zx_sa11_SubjectConfirmation_s*)x);
  case zx_is_Help_ELEM:
    return zx_LEN_WO_is_Help(c, (struct zx_is_Help_s*)x);
  case zx_is_Hint_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Hint")-1);
  case zx_is_Label_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Label")-1);
  case zx_is_Value_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Value")-1);
  case zx_is_Select_ELEM:
    return zx_LEN_WO_is_Select(c, (struct zx_is_Select_s*)x);
  case zx_is_Confirm_ELEM:
    return zx_LEN_WO_is_Confirm(c, (struct zx_is_Confirm_s*)x);
  case zx_is_Text_ELEM:
    return zx_LEN_WO_is_Text(c, (struct zx_is_Text_s*)x);
  case zx_is_Inquiry_ELEM:
    return zx_LEN_WO_is_Inquiry(c, (struct zx_is_Inquiry_s*)x);
  case zx_is_InteractionStatement_ELEM:
    return zx_LEN_WO_is_InteractionStatement(c, (struct zx_is_InteractionStatement_s*)x);
  case zx_is_Parameter_ELEM:
    return zx_LEN_WO_is_Parameter(c, (struct zx_is_Parameter_s*)x);
  case zx_is_Item_ELEM:
    return zx_LEN_WO_is_Item(c, (struct zx_is_Item_s*)x);
  case zx_is12_Help_ELEM:
    return zx_LEN_WO_is12_Help(c, (struct zx_is12_Help_s*)x);
  case zx_is12_Hint_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Hint")-1);
  case zx_is12_Label_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Label")-1);
  case zx_is12_Value_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Value")-1);
  case zx_is12_Select_ELEM:
    return zx_LEN_WO_is12_Select(c, (struct zx_is12_Select_s*)x);
  case zx_is12_Confirm_ELEM:
    return zx_LEN_WO_is12_Confirm(c, (struct zx_is12_Confirm_s*)x);
  case zx_is12_Text_ELEM:
    return zx_LEN_WO_is12_Text(c, (struct zx_is12_Text_s*)x);
  case zx_is12_Inquiry_ELEM:
    return zx_LEN_WO_is12_Inquiry(c, (struct zx_is12_Inquiry_s*)x);
  case zx_is12_Status_ELEM:
    return zx_LEN_WO_is12_Status(c, (struct zx_is12_Status_s*)x);
  case zx_is12_InteractionStatement_ELEM:
    return zx_LEN_WO_is12_InteractionStatement(c, (struct zx_is12_InteractionStatement_s*)x);
  case zx_is12_Parameter_ELEM:
    return zx_LEN_WO_is12_Parameter(c, (struct zx_is12_Parameter_s*)x);
  case zx_is12_Item_ELEM:
    return zx_LEN_WO_is12_Item(c, (struct zx_is12_Item_s*)x);
  case zx_is12_InteractionService_ELEM:
    return zx_LEN_WO_is12_InteractionService(c, (struct zx_is12_InteractionService_s*)x);
  case zx_m20_AffiliateMember_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("AffiliateMember")-1);
  case zx_m20_Extension_ELEM:
    return zx_LEN_WO_m20_Extension(c, (struct zx_m20_Extension_s*)x);
  case zx_m20_KeyDescriptor_ELEM:
    return zx_LEN_WO_m20_KeyDescriptor(c, (struct zx_m20_KeyDescriptor_s*)x);
  case zx_m20_Company_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Company")-1);
  case zx_m20_GivenName_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("GivenName")-1);
  case zx_m20_SurName_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("SurName")-1);
  case zx_m20_EmailAddress_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("EmailAddress")-1);
  case zx_m20_TelephoneNumber_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("TelephoneNumber")-1);
  case zx_m20_EntityDescriptor_ELEM:
    return zx_LEN_WO_m20_EntityDescriptor(c, (struct zx_m20_EntityDescriptor_s*)x);
  case zx_m20_IDPDescriptor_ELEM:
    return zx_LEN_WO_m20_IDPDescriptor(c, (struct zx_m20_IDPDescriptor_s*)x);
  case zx_m20_SPDescriptor_ELEM:
    return zx_LEN_WO_m20_SPDescriptor(c, (struct zx_m20_SPDescriptor_s*)x);
  case zx_m20_AffiliationDescriptor_ELEM:
    return zx_LEN_WO_m20_AffiliationDescriptor(c, (struct zx_m20_AffiliationDescriptor_s*)x);
  case zx_m20_ContactPerson_ELEM:
    return zx_LEN_WO_m20_ContactPerson(c, (struct zx_m20_ContactPerson_s*)x);
  case zx_m20_Organization_ELEM:
    return zx_LEN_WO_m20_Organization(c, (struct zx_m20_Organization_s*)x);
  case zx_m20_SoapEndpoint_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("SoapEndpoint")-1);
  case zx_m20_SingleLogoutServiceURL_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("SingleLogoutServiceURL")-1);
  case zx_m20_SingleLogoutServiceReturnURL_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("SingleLogoutServiceReturnURL")-1);
  case zx_m20_FederationTerminationServiceURL_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("FederationTerminationServiceURL")-1);
  case zx_m20_FederationTerminationServiceReturnURL_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("FederationTerminationServiceReturnURL")-1);
  case zx_m20_FederationTerminationNotificationProtocolProfile_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("FederationTerminationNotificationProtocolProfile")-1);
  case zx_m20_SingleLogoutProtocolProfile_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("SingleLogoutProtocolProfile")-1);
  case zx_m20_RegisterNameIdentifierProtocolProfile_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("RegisterNameIdentifierProtocolProfile")-1);
  case zx_m20_RegisterNameIdentifierServiceURL_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("RegisterNameIdentifierServiceURL")-1);
  case zx_m20_RegisterNameIdentifierServiceReturnURL_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("RegisterNameIdentifierServiceReturnURL")-1);
  case zx_m20_NameIdentifierMappingProtocolProfile_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("NameIdentifierMappingProtocolProfile")-1);
  case zx_m20_NameIdentifierMappingEncryptionProfile_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("NameIdentifierMappingEncryptionProfile")-1);
  case zx_m20_AdditionalMetaLocation_ELEM:
    return zx_LEN_WO_m20_AdditionalMetaLocation(c, (struct zx_m20_AdditionalMetaLocation_s*)x);
  case zx_m20_SingleSignOnServiceURL_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("SingleSignOnServiceURL")-1);
  case zx_m20_SingleSignOnProtocolProfile_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("SingleSignOnProtocolProfile")-1);
  case zx_m20_AuthnServiceURL_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("AuthnServiceURL")-1);
  case zx_m20_EncryptionMethod_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("EncryptionMethod")-1);
  case zx_m20_KeySize_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("KeySize")-1);
  case zx_m20_OrganizationName_ELEM:
    return zx_LEN_WO_m20_OrganizationName(c, (struct zx_m20_OrganizationName_s*)x);
  case zx_m20_OrganizationDisplayName_ELEM:
    return zx_LEN_WO_m20_OrganizationDisplayName(c, (struct zx_m20_OrganizationDisplayName_s*)x);
  case zx_m20_OrganizationURL_ELEM:
    return zx_LEN_WO_m20_OrganizationURL(c, (struct zx_m20_OrganizationURL_s*)x);
  case zx_m20_AssertionConsumerServiceURL_ELEM:
    return zx_LEN_WO_m20_AssertionConsumerServiceURL(c, (struct zx_m20_AssertionConsumerServiceURL_s*)x);
  case zx_m20_AuthnRequestsSigned_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("AuthnRequestsSigned")-1);
  case zx_md_Extensions_ELEM:
    return zx_LEN_WO_md_Extensions(c, (struct zx_md_Extensions_s*)x);
  case zx_md_AffiliateMember_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("AffiliateMember")-1);
  case zx_md_Organization_ELEM:
    return zx_LEN_WO_md_Organization(c, (struct zx_md_Organization_s*)x);
  case zx_md_ContactPerson_ELEM:
    return zx_LEN_WO_md_ContactPerson(c, (struct zx_md_ContactPerson_s*)x);
  case zx_md_AttributeService_ELEM:
    return zx_LEN_WO_md_AttributeService(c, (struct zx_md_AttributeService_s*)x);
  case zx_md_AssertionIDRequestService_ELEM:
    return zx_LEN_WO_md_AssertionIDRequestService(c, (struct zx_md_AssertionIDRequestService_s*)x);
  case zx_md_NameIDFormat_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("NameIDFormat")-1);
  case zx_md_AttributeProfile_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("AttributeProfile")-1);
  case zx_sa_Attribute_ELEM:
    return zx_LEN_WO_sa_Attribute(c, (struct zx_sa_Attribute_s*)x);
  case zx_md_ServiceName_ELEM:
    return zx_LEN_WO_md_ServiceName(c, (struct zx_md_ServiceName_s*)x);
  case zx_md_ServiceDescription_ELEM:
    return zx_LEN_WO_md_ServiceDescription(c, (struct zx_md_ServiceDescription_s*)x);
  case zx_md_RequestedAttribute_ELEM:
    return zx_LEN_WO_md_RequestedAttribute(c, (struct zx_md_RequestedAttribute_s*)x);
  case zx_md_AuthnQueryService_ELEM:
    return zx_LEN_WO_md_AuthnQueryService(c, (struct zx_md_AuthnQueryService_s*)x);
  case zx_md_Company_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Company")-1);
  case zx_md_GivenName_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("GivenName")-1);
  case zx_md_SurName_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("SurName")-1);
  case zx_md_EmailAddress_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("EmailAddress")-1);
  case zx_md_TelephoneNumber_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("TelephoneNumber")-1);
  case zx_xenc_KeySize_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("KeySize")-1);
  case zx_xenc_OAEPparams_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("OAEPparams")-1);
  case zx_md_EntityDescriptor_ELEM:
    return zx_LEN_WO_md_EntityDescriptor(c, (struct zx_md_EntityDescriptor_s*)x);
  case zx_md_EntitiesDescriptor_ELEM:
    return zx_LEN_WO_md_EntitiesDescriptor(c, (struct zx_md_EntitiesDescriptor_s*)x);
  case zx_md_RoleDescriptor_ELEM:
    return zx_LEN_WO_md_RoleDescriptor(c, (struct zx_md_RoleDescriptor_s*)x);
  case zx_md_IDPSSODescriptor_ELEM:
    return zx_LEN_WO_md_IDPSSODescriptor(c, (struct zx_md_IDPSSODescriptor_s*)x);
  case zx_md_SPSSODescriptor_ELEM:
    return zx_LEN_WO_md_SPSSODescriptor(c, (struct zx_md_SPSSODescriptor_s*)x);
  case zx_md_AuthnAuthorityDescriptor_ELEM:
    return zx_LEN_WO_md_AuthnAuthorityDescriptor(c, (struct zx_md_AuthnAuthorityDescriptor_s*)x);
  case zx_md_AttributeAuthorityDescriptor_ELEM:
    return zx_LEN_WO_md_AttributeAuthorityDescriptor(c, (struct zx_md_AttributeAuthorityDescriptor_s*)x);
  case zx_md_PDPDescriptor_ELEM:
    return zx_LEN_WO_md_PDPDescriptor(c, (struct zx_md_PDPDescriptor_s*)x);
  case zx_md_AffiliationDescriptor_ELEM:
    return zx_LEN_WO_md_AffiliationDescriptor(c, (struct zx_md_AffiliationDescriptor_s*)x);
  case zx_md_AdditionalMetadataLocation_ELEM:
    return zx_LEN_WO_md_AdditionalMetadataLocation(c, (struct zx_md_AdditionalMetadataLocation_s*)x);
  case zx_md_ArtifactResolutionService_ELEM:
    return zx_LEN_WO_md_ArtifactResolutionService(c, (struct zx_md_ArtifactResolutionService_s*)x);
  case zx_md_SingleLogoutService_ELEM:
    return zx_LEN_WO_md_SingleLogoutService(c, (struct zx_md_SingleLogoutService_s*)x);
  case zx_md_ManageNameIDService_ELEM:
    return zx_LEN_WO_md_ManageNameIDService(c, (struct zx_md_ManageNameIDService_s*)x);
  case zx_md_SingleSignOnService_ELEM:
    return zx_LEN_WO_md_SingleSignOnService(c, (struct zx_md_SingleSignOnService_s*)x);
  case zx_md_NameIDMappingService_ELEM:
    return zx_LEN_WO_md_NameIDMappingService(c, (struct zx_md_NameIDMappingService_s*)x);
  case zx_md_EncryptionMethod_ELEM:
    return zx_LEN_WO_md_EncryptionMethod(c, (struct zx_md_EncryptionMethod_s*)x);
  case zx_md_OrganizationName_ELEM:
    return zx_LEN_WO_md_OrganizationName(c, (struct zx_md_OrganizationName_s*)x);
  case zx_md_OrganizationDisplayName_ELEM:
    return zx_LEN_WO_md_OrganizationDisplayName(c, (struct zx_md_OrganizationDisplayName_s*)x);
  case zx_md_OrganizationURL_ELEM:
    return zx_LEN_WO_md_OrganizationURL(c, (struct zx_md_OrganizationURL_s*)x);
  case zx_md_AuthzService_ELEM:
    return zx_LEN_WO_md_AuthzService(c, (struct zx_md_AuthzService_s*)x);
  case zx_sa_AttributeValue_ELEM:
    return zx_LEN_WO_sa_AttributeValue(c, (struct zx_sa_AttributeValue_s*)x);
  case zx_md_AssertionConsumerService_ELEM:
    return zx_LEN_WO_md_AssertionConsumerService(c, (struct zx_md_AssertionConsumerService_s*)x);
  case zx_md_AttributeConsumingService_ELEM:
    return zx_LEN_WO_md_AttributeConsumingService(c, (struct zx_md_AttributeConsumingService_s*)x);
  case zx_sa_AssertionIDRef_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("AssertionIDRef")-1);
  case zx_sa_AssertionURIRef_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("AssertionURIRef")-1);
  case zx_sa_Assertion_ELEM:
    return zx_LEN_WO_sa_Assertion(c, (struct zx_sa_Assertion_s*)x);
  case zx_sa_EncryptedAssertion_ELEM:
    return zx_LEN_WO_sa_EncryptedAssertion(c, (struct zx_sa_EncryptedAssertion_s*)x);
  case zx_sa_Issuer_ELEM:
    return zx_LEN_WO_sa_Issuer(c, (struct zx_sa_Issuer_s*)x);
  case zx_sa_Subject_ELEM:
    return zx_LEN_WO_sa_Subject(c, (struct zx_sa_Subject_s*)x);
  case zx_sa_Conditions_ELEM:
    return zx_LEN_WO_sa_Conditions(c, (struct zx_sa_Conditions_s*)x);
  case zx_sa_Advice_ELEM:
    return zx_LEN_WO_sa_Advice(c, (struct zx_sa_Advice_s*)x);
  case zx_sa_Statement_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Statement")-1);
  case zx_sa_AuthnStatement_ELEM:
    return zx_LEN_WO_sa_AuthnStatement(c, (struct zx_sa_AuthnStatement_s*)x);
  case zx_sa_AuthzDecisionStatement_ELEM:
    return zx_LEN_WO_sa_AuthzDecisionStatement(c, (struct zx_sa_AuthzDecisionStatement_s*)x);
  case zx_sa_AttributeStatement_ELEM:
    return zx_LEN_WO_sa_AttributeStatement(c, (struct zx_sa_AttributeStatement_s*)x);
  case zx_sa_EncryptedAttribute_ELEM:
    return zx_LEN_WO_sa_EncryptedAttribute(c, (struct zx_sa_EncryptedAttribute_s*)x);
  case zx_sa_Audience_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Audience")-1);
  case zx_sa_AuthnContextClassRef_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("AuthnContextClassRef")-1);
  case zx_sa_AuthnContextDecl_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("AuthnContextDecl")-1);
  case zx_sa_AuthnContextDeclRef_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("AuthnContextDeclRef")-1);
  case zx_sa_AuthenticatingAuthority_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("AuthenticatingAuthority")-1);
  case zx_sa_SubjectLocality_ELEM:
    return zx_LEN_WO_sa_SubjectLocality(c, (struct zx_sa_SubjectLocality_s*)x);
  case zx_sa_AuthnContext_ELEM:
    return zx_LEN_WO_sa_AuthnContext(c, (struct zx_sa_AuthnContext_s*)x);
  case zx_sa_Action_ELEM:
    return zx_LEN_WO_sa_Action(c, (struct zx_sa_Action_s*)x);
  case zx_sa_Evidence_ELEM:
    return zx_LEN_WO_sa_Evidence(c, (struct zx_sa_Evidence_s*)x);
  case zx_sa_Condition_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Condition")-1);
  case zx_sa_AudienceRestriction_ELEM:
    return zx_LEN_WO_sa_AudienceRestriction(c, (struct zx_sa_AudienceRestriction_s*)x);
  case zx_sa_OneTimeUse_ELEM:
    return zx_LEN_WO_sa_OneTimeUse(c, (struct zx_sa_OneTimeUse_s*)x);
  case zx_sa_ProxyRestriction_ELEM:
    return zx_LEN_WO_sa_ProxyRestriction(c, (struct zx_sa_ProxyRestriction_s*)x);
  case zx_sa_BaseID_ELEM:
    return zx_LEN_WO_sa_BaseID(c, (struct zx_sa_BaseID_s*)x);
  case zx_sa_NameID_ELEM:
    return zx_LEN_WO_sa_NameID(c, (struct zx_sa_NameID_s*)x);
  case zx_sa_EncryptedID_ELEM:
    return zx_LEN_WO_sa_EncryptedID(c, (struct zx_sa_EncryptedID_s*)x);
  case zx_sa_SubjectConfirmation_ELEM:
    return zx_LEN_WO_sa_SubjectConfirmation(c, (struct zx_sa_SubjectConfirmation_s*)x);
  case zx_sa_SubjectConfirmationData_ELEM:
    return zx_LEN_WO_sa_SubjectConfirmationData(c, (struct zx_sa_SubjectConfirmationData_s*)x);
  case zx_sa11_AssertionIDReference_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("AssertionIDReference")-1);
  case zx_sa11_AttributeValue_ELEM:
    return zx_LEN_WO_sa11_AttributeValue(c, (struct zx_sa11_AttributeValue_s*)x);
  case zx_sa11_Attribute_ELEM:
    return zx_LEN_WO_sa11_Attribute(c, (struct zx_sa11_Attribute_s*)x);
  case zx_sa11_Audience_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Audience")-1);
  case zx_sa11_Action_ELEM:
    return zx_LEN_WO_sa11_Action(c, (struct zx_sa11_Action_s*)x);
  case zx_sa11_Evidence_ELEM:
    return zx_LEN_WO_sa11_Evidence(c, (struct zx_sa11_Evidence_s*)x);
  case zx_sa11_AudienceRestrictionCondition_ELEM:
    return zx_LEN_WO_sa11_AudienceRestrictionCondition(c, (struct zx_sa11_AudienceRestrictionCondition_s*)x);
  case zx_sa11_DoNotCacheCondition_ELEM:
    return zx_LEN_WO_sa11_DoNotCacheCondition(c, (struct zx_sa11_DoNotCacheCondition_s*)x);
  case zx_sa11_Condition_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Condition")-1);
  case zx_sa11_ConfirmationMethod_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("ConfirmationMethod")-1);
  case zx_sa11_SubjectConfirmationData_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("SubjectConfirmationData")-1);
  case zx_sp_ArtifactResolve_ELEM:
    return zx_LEN_WO_sp_ArtifactResolve(c, (struct zx_sp_ArtifactResolve_s*)x);
  case zx_sp_ArtifactResponse_ELEM:
    return zx_LEN_WO_sp_ArtifactResponse(c, (struct zx_sp_ArtifactResponse_s*)x);
  case zx_sp_ManageNameIDRequest_ELEM:
    return zx_LEN_WO_sp_ManageNameIDRequest(c, (struct zx_sp_ManageNameIDRequest_s*)x);
  case zx_sp_ManageNameIDResponse_ELEM:
    return zx_LEN_WO_sp_ManageNameIDResponse(c, (struct zx_sp_ManageNameIDResponse_s*)x);
  case zx_sp_LogoutRequest_ELEM:
    return zx_LEN_WO_sp_LogoutRequest(c, (struct zx_sp_LogoutRequest_s*)x);
  case zx_sp_LogoutResponse_ELEM:
    return zx_LEN_WO_sp_LogoutResponse(c, (struct zx_sp_LogoutResponse_s*)x);
  case zx_sp_NameIDMappingRequest_ELEM:
    return zx_LEN_WO_sp_NameIDMappingRequest(c, (struct zx_sp_NameIDMappingRequest_s*)x);
  case zx_sp_NameIDMappingResponse_ELEM:
    return zx_LEN_WO_sp_NameIDMappingResponse(c, (struct zx_sp_NameIDMappingResponse_s*)x);
  case zx_sp_AttributeQuery_ELEM:
    return zx_LEN_WO_sp_AttributeQuery(c, (struct zx_sp_AttributeQuery_s*)x);
  case zx_sp_AuthnQuery_ELEM:
    return zx_LEN_WO_sp_AuthnQuery(c, (struct zx_sp_AuthnQuery_s*)x);
  case zx_sp_AuthzDecisionQuery_ELEM:
    return zx_LEN_WO_sp_AuthzDecisionQuery(c, (struct zx_sp_AuthzDecisionQuery_s*)x);
  case zx_sp_AssertionIDRequest_ELEM:
    return zx_LEN_WO_sp_AssertionIDRequest(c, (struct zx_sp_AssertionIDRequest_s*)x);
  case zx_sp_Response_ELEM:
    return zx_LEN_WO_sp_Response(c, (struct zx_sp_Response_s*)x);
  case zx_sp11_Request_ELEM:
    return zx_LEN_WO_sp11_Request(c, (struct zx_sp11_Request_s*)x);
  case zx_sp11_Response_ELEM:
    return zx_LEN_WO_sp11_Response(c, (struct zx_sp11_Response_s*)x);
  case zx_ff12_RegisterNameIdentifierRequest_ELEM:
    return zx_LEN_WO_ff12_RegisterNameIdentifierRequest(c, (struct zx_ff12_RegisterNameIdentifierRequest_s*)x);
  case zx_ff12_RegisterNameIdentifierResponse_ELEM:
    return zx_LEN_WO_ff12_RegisterNameIdentifierResponse(c, (struct zx_ff12_RegisterNameIdentifierResponse_s*)x);
  case zx_ff12_FederationTerminationNotification_ELEM:
    return zx_LEN_WO_ff12_FederationTerminationNotification(c, (struct zx_ff12_FederationTerminationNotification_s*)x);
  case zx_ff12_LogoutRequest_ELEM:
    return zx_LEN_WO_ff12_LogoutRequest(c, (struct zx_ff12_LogoutRequest_s*)x);
  case zx_ff12_LogoutResponse_ELEM:
    return zx_LEN_WO_ff12_LogoutResponse(c, (struct zx_ff12_LogoutResponse_s*)x);
  case zx_ff12_NameIdentifierMappingRequest_ELEM:
    return zx_LEN_WO_ff12_NameIdentifierMappingRequest(c, (struct zx_ff12_NameIdentifierMappingRequest_s*)x);
  case zx_ff12_NameIdentifierMappingResponse_ELEM:
    return zx_LEN_WO_ff12_NameIdentifierMappingResponse(c, (struct zx_ff12_NameIdentifierMappingResponse_s*)x);
  case zx_se_Fault_ELEM:
    return zx_LEN_WO_se_Fault(c, (struct zx_se_Fault_s*)x);
  case zx_se_Header_ELEM:
    return zx_LEN_WO_se_Header(c, (struct zx_se_Header_s*)x);
  case zx_se_Body_ELEM:
    return zx_LEN_WO_se_Body(c, (struct zx_se_Body_s*)x);
  case zx_se_faultcode_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("faultcode")-1);
  case zx_se_faultstring_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("faultstring")-1);
  case zx_se_faultactor_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("faultactor")-1);
  case zx_se_detail_ELEM:
    return zx_LEN_WO_se_detail(c, (struct zx_se_detail_s*)x);
  case zx_sec_TransitedProvider_ELEM:
    return zx_LEN_WO_sec_TransitedProvider(c, (struct zx_sec_TransitedProvider_s*)x);
  case zx_sec12_Issuer_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Issuer")-1);
  case zx_sec12_IssueInstant_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("IssueInstant")-1);
  case zx_sec12_ProxySubject_ELEM:
    return zx_LEN_WO_sec12_ProxySubject(c, (struct zx_sec12_ProxySubject_s*)x);
  case zx_sec12_SessionContext_ELEM:
    return zx_LEN_WO_sec12_SessionContext(c, (struct zx_sec12_SessionContext_s*)x);
  case zx_sec12_SessionSubject_ELEM:
    return zx_LEN_WO_sec12_SessionSubject(c, (struct zx_sec12_SessionSubject_s*)x);
  case zx_sec12_ProviderID_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("ProviderID")-1);
  case zx_sec12_NumberOfUses_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("NumberOfUses")-1);
  case zx_sp_Extensions_ELEM:
    return zx_LEN_WO_sp_Extensions(c, (struct zx_sp_Extensions_s*)x);
  case zx_sp_Artifact_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Artifact")-1);
  case zx_sp_Status_ELEM:
    return zx_LEN_WO_sp_Status(c, (struct zx_sp_Status_s*)x);
  case zx_sp_NameIDPolicy_ELEM:
    return zx_LEN_WO_sp_NameIDPolicy(c, (struct zx_sp_NameIDPolicy_s*)x);
  case zx_sp_Scoping_ELEM:
    return zx_LEN_WO_sp_Scoping(c, (struct zx_sp_Scoping_s*)x);
  case zx_sp_IDPEntry_ELEM:
    return zx_LEN_WO_sp_IDPEntry(c, (struct zx_sp_IDPEntry_s*)x);
  case zx_sp_GetComplete_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("GetComplete")-1);
  case zx_sp_SessionIndex_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("SessionIndex")-1);
  case zx_sp_NewID_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("NewID")-1);
  case zx_sp_NewEncryptedID_ELEM:
    return zx_LEN_WO_sp_NewEncryptedID(c, (struct zx_sp_NewEncryptedID_s*)x);
  case zx_sp_Terminate_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Terminate")-1);
  case zx_sp_IDPList_ELEM:
    return zx_LEN_WO_sp_IDPList(c, (struct zx_sp_IDPList_s*)x);
  case zx_sp_RequesterID_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("RequesterID")-1);
  case zx_sp_StatusCode_ELEM:
    return zx_LEN_WO_sp_StatusCode(c, (struct zx_sp_StatusCode_s*)x);
  case zx_sp_StatusMessage_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("StatusMessage")-1);
  case zx_sp_StatusDetail_ELEM:
    return zx_LEN_WO_sp_StatusDetail(c, (struct zx_sp_StatusDetail_s*)x);
  case zx_sa11_AttributeDesignator_ELEM:
    return zx_LEN_WO_sa11_AttributeDesignator(c, (struct zx_sa11_AttributeDesignator_s*)x);
  case zx_sp11_Query_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("Query")-1);
  case zx_sp11_SubjectQuery_ELEM:
    return zx_LEN_WO_sp11_SubjectQuery(c, (struct zx_sp11_SubjectQuery_s*)x);
  case zx_sp11_AuthenticationQuery_ELEM:
    return zx_LEN_WO_sp11_AuthenticationQuery(c, (struct zx_sp11_AuthenticationQuery_s*)x);
  case zx_sp11_AttributeQuery_ELEM:
    return zx_LEN_WO_sp11_AttributeQuery(c, (struct zx_sp11_AttributeQuery_s*)x);
  case zx_sp11_AuthorizationDecisionQuery_ELEM:
    return zx_LEN_WO_sp11_AuthorizationDecisionQuery(c, (struct zx_sp11_AuthorizationDecisionQuery_s*)x);
  case zx_sp11_AssertionArtifact_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("AssertionArtifact")-1);
  case zx_sp11_StatusCode_ELEM:
    return zx_LEN_WO_sp11_StatusCode(c, (struct zx_sp11_StatusCode_s*)x);
  case zx_sp11_StatusMessage_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("StatusMessage")-1);
  case zx_sp11_StatusDetail_ELEM:
    return zx_LEN_WO_sp11_StatusDetail(c, (struct zx_sp11_StatusDetail_s*)x);
  case zx_wsse_Username_ELEM:
    return zx_LEN_WO_wsse_Username(c, (struct zx_wsse_Username_s*)x);
  case zx_wsu_Created_ELEM:
    return zx_LEN_WO_wsu_Created(c, (struct zx_wsu_Created_s*)x);
  case zx_wsu_Expires_ELEM:
    return zx_LEN_WO_wsu_Expires(c, (struct zx_wsu_Expires_s*)x);
  case zx_xenc_KA_Nonce_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("KA_Nonce")-1);
  case zx_xenc_OriginatorKeyInfo_ELEM:
    return zx_LEN_WO_xenc_OriginatorKeyInfo(c, (struct zx_xenc_OriginatorKeyInfo_s*)x);
  case zx_xenc_RecipientKeyInfo_ELEM:
    return zx_LEN_WO_xenc_RecipientKeyInfo(c, (struct zx_xenc_RecipientKeyInfo_s*)x);
  case zx_xenc_CipherValue_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("CipherValue")-1);
  case zx_xenc_CipherReference_ELEM:
    return zx_LEN_WO_xenc_CipherReference(c, (struct zx_xenc_CipherReference_s*)x);
  case zx_xenc_Transforms_ELEM:
    return zx_LEN_WO_xenc_Transforms(c, (struct zx_xenc_Transforms_s*)x);
  case zx_xenc_EncryptionMethod_ELEM:
    return zx_LEN_WO_xenc_EncryptionMethod(c, (struct zx_xenc_EncryptionMethod_s*)x);
  case zx_xenc_CipherData_ELEM:
    return zx_LEN_WO_xenc_CipherData(c, (struct zx_xenc_CipherData_s*)x);
  case zx_xenc_EncryptionProperties_ELEM:
    return zx_LEN_WO_xenc_EncryptionProperties(c, (struct zx_xenc_EncryptionProperties_s*)x);
  case zx_xenc_ReferenceList_ELEM:
    return zx_LEN_WO_xenc_ReferenceList(c, (struct zx_xenc_ReferenceList_s*)x);
  case zx_xenc_CarriedKeyName_ELEM:
    return zx_LEN_WO_simple_elem(c, (struct zx_elem_s*)x, sizeof("CarriedKeyName")-1);
  case zx_xenc_EncryptionProperty_ELEM:
    return zx_LEN_WO_xenc_EncryptionProperty(c, (struct zx_xenc_EncryptionProperty_s*)x);
  case zx_xenc_DataReference_ELEM:
    return zx_LEN_WO_xenc_DataReference(c, (struct zx_xenc_DataReference_s*)x);
  case zx_xenc_KeyReference_ELEM:
    return zx_LEN_WO_xenc_KeyReference(c, (struct zx_xenc_KeyReference_s*)x);
  case zx_sp_AuthnRequest_ELEM:
    return zx_LEN_WO_sp_AuthnRequest(c, (struct zx_sp_AuthnRequest_s*)x);
  case zx_se_Envelope_ELEM:
    return zx_LEN_WO_se_Envelope(c, (struct zx_se_Envelope_s*)x);
  case zx_ff12_Assertion_ELEM:
    return zx_LEN_WO_ff12_Assertion(c, (struct zx_ff12_Assertion_s*)x);
  case zx_ff12_AuthnRequestEnvelope_ELEM:
    return zx_LEN_WO_ff12_AuthnRequestEnvelope(c, (struct zx_ff12_AuthnRequestEnvelope_s*)x);
  case zx_ff12_AuthnResponseEnvelope_ELEM:
    return zx_LEN_WO_ff12_AuthnResponseEnvelope(c, (struct zx_ff12_AuthnResponseEnvelope_s*)x);
  case zx_m20_EntitiesDescriptor_ELEM:
    return zx_LEN_WO_m20_EntitiesDescriptor(c, (struct zx_m20_EntitiesDescriptor_s*)x);
  case zx_e_Envelope_ELEM:
    return zx_LEN_WO_e_Envelope(c, (struct zx_e_Envelope_s*)x);
  case zx_dise_Envelope_ELEM:
    return zx_LEN_WO_dise_Envelope(c, (struct zx_dise_Envelope_s*)x);

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

/* FUNC(zx_ENC_WO_any_elem) */

char* zx_ENC_WO_any_elem(struct zx_ctx* c, struct zx_elem_s* x, char* p)
{
  struct zx_elem_s* kid;
  switch (x->g.tok) {
  case zx_a_Address_ELEM:
    return zx_ENC_WO_a_Address(c, (struct zx_a_Address_s*)x, p);
  case zx_a_ReferenceParameters_ELEM:
    return zx_ENC_WO_a_ReferenceParameters(c, (struct zx_a_ReferenceParameters_s*)x, p);
  case zx_a_Metadata_ELEM:
    return zx_ENC_WO_a_Metadata(c, (struct zx_a_Metadata_s*)x, p);
  case zx_a_Action_ELEM:
    return zx_ENC_WO_a_Action(c, (struct zx_a_Action_s*)x, p);
  case zx_a_SoapAction_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "SoapAction", sizeof("SoapAction")-1);
  case zx_ac_ActivationLimitDuration_ELEM:
    return zx_ENC_WO_ac_ActivationLimitDuration(c, (struct zx_ac_ActivationLimitDuration_s*)x, p);
  case zx_ac_ActivationLimitUsages_ELEM:
    return zx_ENC_WO_ac_ActivationLimitUsages(c, (struct zx_ac_ActivationLimitUsages_s*)x, p);
  case zx_ac_ActivationLimitSession_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "ActivationLimitSession", sizeof("ActivationLimitSession")-1);
  case zx_ac_Length_ELEM:
    return zx_ENC_WO_ac_Length(c, (struct zx_ac_Length_s*)x, p);
  case zx_ac_Alphabet_ELEM:
    return zx_ENC_WO_ac_Alphabet(c, (struct zx_ac_Alphabet_s*)x, p);
  case zx_ac_Generation_ELEM:
    return zx_ENC_WO_ac_Generation(c, (struct zx_ac_Generation_s*)x, p);
  case zx_ac_ActivationLimit_ELEM:
    return zx_ENC_WO_ac_ActivationLimit(c, (struct zx_ac_ActivationLimit_s*)x, p);
  case zx_ac_Extension_ELEM:
    return zx_ENC_WO_ac_Extension(c, (struct zx_ac_Extension_s*)x, p);
  case zx_ac_GoverningAgreements_ELEM:
    return zx_ENC_WO_ac_GoverningAgreements(c, (struct zx_ac_GoverningAgreements_s*)x, p);
  case zx_ac_Identification_ELEM:
    return zx_ENC_WO_ac_Identification(c, (struct zx_ac_Identification_s*)x, p);
  case zx_ac_TechnicalProtection_ELEM:
    return zx_ENC_WO_ac_TechnicalProtection(c, (struct zx_ac_TechnicalProtection_s*)x, p);
  case zx_ac_OperationalProtection_ELEM:
    return zx_ENC_WO_ac_OperationalProtection(c, (struct zx_ac_OperationalProtection_s*)x, p);
  case zx_ac_AuthenticationMethod_ELEM:
    return zx_ENC_WO_ac_AuthenticationMethod(c, (struct zx_ac_AuthenticationMethod_s*)x, p);
  case zx_ac_AuthenticatingAuthority_ELEM:
    return zx_ENC_WO_ac_AuthenticatingAuthority(c, (struct zx_ac_AuthenticatingAuthority_s*)x, p);
  case zx_ac_PrincipalAuthenticationMechanism_ELEM:
    return zx_ENC_WO_ac_PrincipalAuthenticationMechanism(c, (struct zx_ac_PrincipalAuthenticationMechanism_s*)x, p);
  case zx_ac_Authenticator_ELEM:
    return zx_ENC_WO_ac_Authenticator(c, (struct zx_ac_Authenticator_s*)x, p);
  case zx_ac_AuthenticatorTransportProtocol_ELEM:
    return zx_ENC_WO_ac_AuthenticatorTransportProtocol(c, (struct zx_ac_AuthenticatorTransportProtocol_s*)x, p);
  case zx_ac_PreviousSession_ELEM:
    return zx_ENC_WO_ac_PreviousSession(c, (struct zx_ac_PreviousSession_s*)x, p);
  case zx_ac_ResumeSession_ELEM:
    return zx_ENC_WO_ac_ResumeSession(c, (struct zx_ac_ResumeSession_s*)x, p);
  case zx_ac_DigSig_ELEM:
    return zx_ENC_WO_ac_DigSig(c, (struct zx_ac_DigSig_s*)x, p);
  case zx_ac_Password_ELEM:
    return zx_ENC_WO_ac_Password(c, (struct zx_ac_Password_s*)x, p);
  case zx_ac_ZeroKnowledge_ELEM:
    return zx_ENC_WO_ac_ZeroKnowledge(c, (struct zx_ac_ZeroKnowledge_s*)x, p);
  case zx_ac_SharedSecretChallengeResponse_ELEM:
    return zx_ENC_WO_ac_SharedSecretChallengeResponse(c, (struct zx_ac_SharedSecretChallengeResponse_s*)x, p);
  case zx_ac_SharedSecretDynamicPlaintext_ELEM:
    return zx_ENC_WO_ac_SharedSecretDynamicPlaintext(c, (struct zx_ac_SharedSecretDynamicPlaintext_s*)x, p);
  case zx_ac_IPAddress_ELEM:
    return zx_ENC_WO_ac_IPAddress(c, (struct zx_ac_IPAddress_s*)x, p);
  case zx_ac_AsymmetricDecryption_ELEM:
    return zx_ENC_WO_ac_AsymmetricDecryption(c, (struct zx_ac_AsymmetricDecryption_s*)x, p);
  case zx_ac_AsymmetricKeyAgreement_ELEM:
    return zx_ENC_WO_ac_AsymmetricKeyAgreement(c, (struct zx_ac_AsymmetricKeyAgreement_s*)x, p);
  case zx_ac_HTTP_ELEM:
    return zx_ENC_WO_ac_HTTP(c, (struct zx_ac_HTTP_s*)x, p);
  case zx_ac_SSL_ELEM:
    return zx_ENC_WO_ac_SSL(c, (struct zx_ac_SSL_s*)x, p);
  case zx_ac_MobileNetworkNoEncryption_ELEM:
    return zx_ENC_WO_ac_MobileNetworkNoEncryption(c, (struct zx_ac_MobileNetworkNoEncryption_s*)x, p);
  case zx_ac_MobileNetworkRadioEncryption_ELEM:
    return zx_ENC_WO_ac_MobileNetworkRadioEncryption(c, (struct zx_ac_MobileNetworkRadioEncryption_s*)x, p);
  case zx_ac_MobileNetworkEndToEndEncryption_ELEM:
    return zx_ENC_WO_ac_MobileNetworkEndToEndEncryption(c, (struct zx_ac_MobileNetworkEndToEndEncryption_s*)x, p);
  case zx_ac_WTLS_ELEM:
    return zx_ENC_WO_ac_WTLS(c, (struct zx_ac_WTLS_s*)x, p);
  case zx_ac_IPSec_ELEM:
    return zx_ENC_WO_ac_IPSec(c, (struct zx_ac_IPSec_s*)x, p);
  case zx_ac_GoverningAgreementRef_ELEM:
    return zx_ENC_WO_ac_GoverningAgreementRef(c, (struct zx_ac_GoverningAgreementRef_s*)x, p);
  case zx_ac_PhysicalVerification_ELEM:
    return zx_ENC_WO_ac_PhysicalVerification(c, (struct zx_ac_PhysicalVerification_s*)x, p);
  case zx_ac_WrittenConsent_ELEM:
    return zx_ENC_WO_ac_WrittenConsent(c, (struct zx_ac_WrittenConsent_s*)x, p);
  case zx_ac_ActivationPin_ELEM:
    return zx_ENC_WO_ac_ActivationPin(c, (struct zx_ac_ActivationPin_s*)x, p);
  case zx_ac_SecurityAudit_ELEM:
    return zx_ENC_WO_ac_SecurityAudit(c, (struct zx_ac_SecurityAudit_s*)x, p);
  case zx_ac_DeactivationCallCenter_ELEM:
    return zx_ENC_WO_ac_DeactivationCallCenter(c, (struct zx_ac_DeactivationCallCenter_s*)x, p);
  case zx_ac_Token_ELEM:
    return zx_ENC_WO_ac_Token(c, (struct zx_ac_Token_s*)x, p);
  case zx_ac_Smartcard_ELEM:
    return zx_ENC_WO_ac_Smartcard(c, (struct zx_ac_Smartcard_s*)x, p);
  case zx_ac_KeyActivation_ELEM:
    return zx_ENC_WO_ac_KeyActivation(c, (struct zx_ac_KeyActivation_s*)x, p);
  case zx_ac_KeyStorage_ELEM:
    return zx_ENC_WO_ac_KeyStorage(c, (struct zx_ac_KeyStorage_s*)x, p);
  case zx_ac_KeySharing_ELEM:
    return zx_ENC_WO_ac_KeySharing(c, (struct zx_ac_KeySharing_s*)x, p);
  case zx_ac_SwitchAudit_ELEM:
    return zx_ENC_WO_ac_SwitchAudit(c, (struct zx_ac_SwitchAudit_s*)x, p);
  case zx_ac_PrivateKeyProtection_ELEM:
    return zx_ENC_WO_ac_PrivateKeyProtection(c, (struct zx_ac_PrivateKeyProtection_s*)x, p);
  case zx_ac_SecretKeyProtection_ELEM:
    return zx_ENC_WO_ac_SecretKeyProtection(c, (struct zx_ac_SecretKeyProtection_s*)x, p);
  case zx_ac_TimeSyncToken_ELEM:
    return zx_ENC_WO_ac_TimeSyncToken(c, (struct zx_ac_TimeSyncToken_s*)x, p);
  case zx_sp_RequestedAuthnContext_ELEM:
    return zx_ENC_WO_sp_RequestedAuthnContext(c, (struct zx_sp_RequestedAuthnContext_s*)x, p);
  case zx_b_SecurityMechID_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "SecurityMechID", sizeof("SecurityMechID")-1);
  case zx_b_InteractionService_ELEM:
    return zx_ENC_WO_b_InteractionService(c, (struct zx_b_InteractionService_s*)x, p);
  case zx_di_Address_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Address", sizeof("Address")-1);
  case zx_sbf_Framework_ELEM:
    return zx_ENC_WO_sbf_Framework(c, (struct zx_sbf_Framework_s*)x, p);
  case zx_di_SecurityMechID_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "SecurityMechID", sizeof("SecurityMechID")-1);
  case zx_di_Action_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Action", sizeof("Action")-1);
  case zx_md_KeyDescriptor_ELEM:
    return zx_ENC_WO_md_KeyDescriptor(c, (struct zx_md_KeyDescriptor_s*)x, p);
  case zx_di_Option_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Option", sizeof("Option")-1);
  case zx_di_RequestedService_ELEM:
    return zx_ENC_WO_di_RequestedService(c, (struct zx_di_RequestedService_s*)x, p);
  case zx_lu_Status_ELEM:
    return zx_ENC_WO_lu_Status(c, (struct zx_lu_Status_s*)x, p);
  case zx_a_EndpointReference_ELEM:
    return zx_ENC_WO_a_EndpointReference(c, (struct zx_a_EndpointReference_s*)x, p);
  case zx_di_ServiceType_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "ServiceType", sizeof("ServiceType")-1);
  case zx_di_ProviderID_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "ProviderID", sizeof("ProviderID")-1);
  case zx_di_Options_ELEM:
    return zx_ENC_WO_di_Options(c, (struct zx_di_Options_s*)x, p);
  case zx_di_Framework_ELEM:
    return zx_ENC_WO_di_Framework(c, (struct zx_di_Framework_s*)x, p);
  case zx_sec_Token_ELEM:
    return zx_ENC_WO_sec_Token(c, (struct zx_sec_Token_s*)x, p);
  case zx_di_EndpointContext_ELEM:
    return zx_ENC_WO_di_EndpointContext(c, (struct zx_di_EndpointContext_s*)x, p);
  case zx_di_Abstract_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Abstract", sizeof("Abstract")-1);
  case zx_di_ServiceContext_ELEM:
    return zx_ENC_WO_di_ServiceContext(c, (struct zx_di_ServiceContext_s*)x, p);
  case zx_di_SvcMDID_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "SvcMDID", sizeof("SvcMDID")-1);
  case zx_di_SvcMD_ELEM:
    return zx_ENC_WO_di_SvcMD(c, (struct zx_di_SvcMD_s*)x, p);
  case zx_di_Keys_ELEM:
    return zx_ENC_WO_di_Keys(c, (struct zx_di_Keys_s*)x, p);
  case zx_di12_SecurityMechID_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "SecurityMechID", sizeof("SecurityMechID")-1);
  case zx_di12_CredentialRef_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "CredentialRef", sizeof("CredentialRef")-1);
  case zx_di12_WsdlURI_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "WsdlURI", sizeof("WsdlURI")-1);
  case zx_di12_ServiceNameRef_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "ServiceNameRef", sizeof("ServiceNameRef")-1);
  case zx_di12_Endpoint_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Endpoint", sizeof("Endpoint")-1);
  case zx_di12_SoapAction_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "SoapAction", sizeof("SoapAction")-1);
  case zx_xenc_EncryptedData_ELEM:
    return zx_ENC_WO_xenc_EncryptedData(c, (struct zx_xenc_EncryptedData_s*)x, p);
  case zx_xenc_EncryptedKey_ELEM:
    return zx_ENC_WO_xenc_EncryptedKey(c, (struct zx_xenc_EncryptedKey_s*)x, p);
  case zx_di12_ResourceOffering_ELEM:
    return zx_ENC_WO_di12_ResourceOffering(c, (struct zx_di12_ResourceOffering_s*)x, p);
  case zx_di12_ResourceID_ELEM:
    return zx_ENC_WO_di12_ResourceID(c, (struct zx_di12_ResourceID_s*)x, p);
  case zx_di12_EncryptedResourceID_ELEM:
    return zx_ENC_WO_di12_EncryptedResourceID(c, (struct zx_di12_EncryptedResourceID_s*)x, p);
  case zx_di12_InsertEntry_ELEM:
    return zx_ENC_WO_di12_InsertEntry(c, (struct zx_di12_InsertEntry_s*)x, p);
  case zx_di12_RemoveEntry_ELEM:
    return zx_ENC_WO_di12_RemoveEntry(c, (struct zx_di12_RemoveEntry_s*)x, p);
  case zx_di12_Status_ELEM:
    return zx_ENC_WO_di12_Status(c, (struct zx_di12_Status_s*)x, p);
  case zx_di12_Extension_ELEM:
    return zx_ENC_WO_di12_Extension(c, (struct zx_di12_Extension_s*)x, p);
  case zx_di12_Option_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Option", sizeof("Option")-1);
  case zx_di12_RequestedServiceType_ELEM:
    return zx_ENC_WO_di12_RequestedServiceType(c, (struct zx_di12_RequestedServiceType_s*)x, p);
  case zx_di12_Credentials_ELEM:
    return zx_ENC_WO_di12_Credentials(c, (struct zx_di12_Credentials_s*)x, p);
  case zx_di12_ServiceType_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "ServiceType", sizeof("ServiceType")-1);
  case zx_di12_Options_ELEM:
    return zx_ENC_WO_di12_Options(c, (struct zx_di12_Options_s*)x, p);
  case zx_di12_ServiceInstance_ELEM:
    return zx_ENC_WO_di12_ServiceInstance(c, (struct zx_di12_ServiceInstance_s*)x, p);
  case zx_di12_Abstract_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Abstract", sizeof("Abstract")-1);
  case zx_di12_ProviderID_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "ProviderID", sizeof("ProviderID")-1);
  case zx_di12_Description_ELEM:
    return zx_ENC_WO_di12_Description(c, (struct zx_di12_Description_s*)x, p);
  case zx_di_SvcMDAssociationAdd_ELEM:
    return zx_ENC_WO_di_SvcMDAssociationAdd(c, (struct zx_di_SvcMDAssociationAdd_s*)x, p);
  case zx_di_SvcMDAssociationAddResponse_ELEM:
    return zx_ENC_WO_di_SvcMDAssociationAddResponse(c, (struct zx_di_SvcMDAssociationAddResponse_s*)x, p);
  case zx_di_SvcMDAssociationDelete_ELEM:
    return zx_ENC_WO_di_SvcMDAssociationDelete(c, (struct zx_di_SvcMDAssociationDelete_s*)x, p);
  case zx_di_SvcMDAssociationDeleteResponse_ELEM:
    return zx_ENC_WO_di_SvcMDAssociationDeleteResponse(c, (struct zx_di_SvcMDAssociationDeleteResponse_s*)x, p);
  case zx_di_SvcMDAssociationQuery_ELEM:
    return zx_ENC_WO_di_SvcMDAssociationQuery(c, (struct zx_di_SvcMDAssociationQuery_s*)x, p);
  case zx_di_SvcMDAssociationQueryResponse_ELEM:
    return zx_ENC_WO_di_SvcMDAssociationQueryResponse(c, (struct zx_di_SvcMDAssociationQueryResponse_s*)x, p);
  case zx_di_SvcMDRegister_ELEM:
    return zx_ENC_WO_di_SvcMDRegister(c, (struct zx_di_SvcMDRegister_s*)x, p);
  case zx_di_SvcMDRegisterResponse_ELEM:
    return zx_ENC_WO_di_SvcMDRegisterResponse(c, (struct zx_di_SvcMDRegisterResponse_s*)x, p);
  case zx_di_SvcMDDelete_ELEM:
    return zx_ENC_WO_di_SvcMDDelete(c, (struct zx_di_SvcMDDelete_s*)x, p);
  case zx_di_SvcMDDeleteResponse_ELEM:
    return zx_ENC_WO_di_SvcMDDeleteResponse(c, (struct zx_di_SvcMDDeleteResponse_s*)x, p);
  case zx_di_SvcMDQuery_ELEM:
    return zx_ENC_WO_di_SvcMDQuery(c, (struct zx_di_SvcMDQuery_s*)x, p);
  case zx_di_SvcMDQueryResponse_ELEM:
    return zx_ENC_WO_di_SvcMDQueryResponse(c, (struct zx_di_SvcMDQueryResponse_s*)x, p);
  case zx_di_SvcMDReplace_ELEM:
    return zx_ENC_WO_di_SvcMDReplace(c, (struct zx_di_SvcMDReplace_s*)x, p);
  case zx_di_SvcMDReplaceResponse_ELEM:
    return zx_ENC_WO_di_SvcMDReplaceResponse(c, (struct zx_di_SvcMDReplaceResponse_s*)x, p);
  case zx_dise_Fault_ELEM:
    return zx_ENC_WO_dise_Fault(c, (struct zx_dise_Fault_s*)x, p);
  case zx_dise_Header_ELEM:
    return zx_ENC_WO_dise_Header(c, (struct zx_dise_Header_s*)x, p);
  case zx_dise_Body_ELEM:
    return zx_ENC_WO_dise_Body(c, (struct zx_dise_Body_s*)x, p);
  case zx_dise_faultcode_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "faultcode", sizeof("faultcode")-1);
  case zx_dise_faultstring_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "faultstring", sizeof("faultstring")-1);
  case zx_dise_faultactor_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "faultactor", sizeof("faultactor")-1);
  case zx_dise_detail_ELEM:
    return zx_ENC_WO_dise_detail(c, (struct zx_dise_detail_s*)x, p);
  case zx_a_MessageID_ELEM:
    return zx_ENC_WO_a_MessageID(c, (struct zx_a_MessageID_s*)x, p);
  case zx_a_RelatesTo_ELEM:
    return zx_ENC_WO_a_RelatesTo(c, (struct zx_a_RelatesTo_s*)x, p);
  case zx_a_ReplyTo_ELEM:
    return zx_ENC_WO_a_ReplyTo(c, (struct zx_a_ReplyTo_s*)x, p);
  case zx_a_From_ELEM:
    return zx_ENC_WO_a_From(c, (struct zx_a_From_s*)x, p);
  case zx_a_FaultTo_ELEM:
    return zx_ENC_WO_a_FaultTo(c, (struct zx_a_FaultTo_s*)x, p);
  case zx_a_To_ELEM:
    return zx_ENC_WO_a_To(c, (struct zx_a_To_s*)x, p);
  case zx_b_Framework_ELEM:
    return zx_ENC_WO_b_Framework(c, (struct zx_b_Framework_s*)x, p);
  case zx_b_Sender_ELEM:
    return zx_ENC_WO_b_Sender(c, (struct zx_b_Sender_s*)x, p);
  case zx_b_CredentialsContext_ELEM:
    return zx_ENC_WO_b_CredentialsContext(c, (struct zx_b_CredentialsContext_s*)x, p);
  case zx_b_EndpointUpdate_ELEM:
    return zx_ENC_WO_b_EndpointUpdate(c, (struct zx_b_EndpointUpdate_s*)x, p);
  case zx_b_Timeout_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Timeout", sizeof("Timeout")-1);
  case zx_b_ProcessingContext_ELEM:
    return zx_ENC_WO_b_ProcessingContext(c, (struct zx_b_ProcessingContext_s*)x, p);
  case zx_b_ApplicationEPR_ELEM:
    return zx_ENC_WO_b_ApplicationEPR(c, (struct zx_b_ApplicationEPR_s*)x, p);
  case zx_b_RedirectRequest_ELEM:
    return zx_ENC_WO_b_RedirectRequest(c, (struct zx_b_RedirectRequest_s*)x, p);
  case zx_ds_P_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "P", sizeof("P")-1);
  case zx_ds_Q_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Q", sizeof("Q")-1);
  case zx_ds_G_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "G", sizeof("G")-1);
  case zx_ds_Y_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Y", sizeof("Y")-1);
  case zx_ds_J_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "J", sizeof("J")-1);
  case zx_ds_Seed_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Seed", sizeof("Seed")-1);
  case zx_ds_PgenCounter_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "PgenCounter", sizeof("PgenCounter")-1);
  case zx_ds_KeyName_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "KeyName", sizeof("KeyName")-1);
  case zx_ds_KeyValue_ELEM:
    return zx_ENC_WO_ds_KeyValue(c, (struct zx_ds_KeyValue_s*)x, p);
  case zx_ds_RetrievalMethod_ELEM:
    return zx_ENC_WO_ds_RetrievalMethod(c, (struct zx_ds_RetrievalMethod_s*)x, p);
  case zx_ds_X509Data_ELEM:
    return zx_ENC_WO_ds_X509Data(c, (struct zx_ds_X509Data_s*)x, p);
  case zx_ds_PGPData_ELEM:
    return zx_ENC_WO_ds_PGPData(c, (struct zx_ds_PGPData_s*)x, p);
  case zx_ds_SPKIData_ELEM:
    return zx_ENC_WO_ds_SPKIData(c, (struct zx_ds_SPKIData_s*)x, p);
  case zx_ds_MgmtData_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "MgmtData", sizeof("MgmtData")-1);
  case zx_ds_DSAKeyValue_ELEM:
    return zx_ENC_WO_ds_DSAKeyValue(c, (struct zx_ds_DSAKeyValue_s*)x, p);
  case zx_ds_RSAKeyValue_ELEM:
    return zx_ENC_WO_ds_RSAKeyValue(c, (struct zx_ds_RSAKeyValue_s*)x, p);
  case zx_ds_Reference_ELEM:
    return zx_ENC_WO_ds_Reference(c, (struct zx_ds_Reference_s*)x, p);
  case zx_ds_PGPKeyID_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "PGPKeyID", sizeof("PGPKeyID")-1);
  case zx_ds_PGPKeyPacket_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "PGPKeyPacket", sizeof("PGPKeyPacket")-1);
  case zx_ds_Modulus_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Modulus", sizeof("Modulus")-1);
  case zx_ds_Exponent_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Exponent", sizeof("Exponent")-1);
  case zx_ds_Transforms_ELEM:
    return zx_ENC_WO_ds_Transforms(c, (struct zx_ds_Transforms_s*)x, p);
  case zx_ds_DigestMethod_ELEM:
    return zx_ENC_WO_ds_DigestMethod(c, (struct zx_ds_DigestMethod_s*)x, p);
  case zx_ds_DigestValue_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "DigestValue", sizeof("DigestValue")-1);
  case zx_ds_SPKISexp_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "SPKISexp", sizeof("SPKISexp")-1);
  case zx_ds_SignedInfo_ELEM:
    return zx_ENC_WO_ds_SignedInfo(c, (struct zx_ds_SignedInfo_s*)x, p);
  case zx_ds_SignatureValue_ELEM:
    return zx_ENC_WO_ds_SignatureValue(c, (struct zx_ds_SignatureValue_s*)x, p);
  case zx_ds_KeyInfo_ELEM:
    return zx_ENC_WO_ds_KeyInfo(c, (struct zx_ds_KeyInfo_s*)x, p);
  case zx_ds_Object_ELEM:
    return zx_ENC_WO_ds_Object(c, (struct zx_ds_Object_s*)x, p);
  case zx_ds_HMACOutputLength_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "HMACOutputLength", sizeof("HMACOutputLength")-1);
  case zx_ds_SignatureProperty_ELEM:
    return zx_ENC_WO_ds_SignatureProperty(c, (struct zx_ds_SignatureProperty_s*)x, p);
  case zx_ds_CanonicalizationMethod_ELEM:
    return zx_ENC_WO_ds_CanonicalizationMethod(c, (struct zx_ds_CanonicalizationMethod_s*)x, p);
  case zx_ds_SignatureMethod_ELEM:
    return zx_ENC_WO_ds_SignatureMethod(c, (struct zx_ds_SignatureMethod_s*)x, p);
  case zx_ds_XPath_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "XPath", sizeof("XPath")-1);
  case zx_ds_Transform_ELEM:
    return zx_ENC_WO_ds_Transform(c, (struct zx_ds_Transform_s*)x, p);
  case zx_ds_X509IssuerSerial_ELEM:
    return zx_ENC_WO_ds_X509IssuerSerial(c, (struct zx_ds_X509IssuerSerial_s*)x, p);
  case zx_ds_X509SKI_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "X509SKI", sizeof("X509SKI")-1);
  case zx_ds_X509SubjectName_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "X509SubjectName", sizeof("X509SubjectName")-1);
  case zx_ds_X509Certificate_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "X509Certificate", sizeof("X509Certificate")-1);
  case zx_ds_X509CRL_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "X509CRL", sizeof("X509CRL")-1);
  case zx_ds_X509IssuerName_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "X509IssuerName", sizeof("X509IssuerName")-1);
  case zx_ds_X509SerialNumber_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "X509SerialNumber", sizeof("X509SerialNumber")-1);
  case zx_di_Query_ELEM:
    return zx_ENC_WO_di_Query(c, (struct zx_di_Query_s*)x, p);
  case zx_di_QueryResponse_ELEM:
    return zx_ENC_WO_di_QueryResponse(c, (struct zx_di_QueryResponse_s*)x, p);
  case zx_di12_Query_ELEM:
    return zx_ENC_WO_di12_Query(c, (struct zx_di12_Query_s*)x, p);
  case zx_di12_QueryResponse_ELEM:
    return zx_ENC_WO_di12_QueryResponse(c, (struct zx_di12_QueryResponse_s*)x, p);
  case zx_di12_Modify_ELEM:
    return zx_ENC_WO_di12_Modify(c, (struct zx_di12_Modify_s*)x, p);
  case zx_di12_ModifyResponse_ELEM:
    return zx_ENC_WO_di12_ModifyResponse(c, (struct zx_di12_ModifyResponse_s*)x, p);
  case zx_e_Fault_ELEM:
    return zx_ENC_WO_e_Fault(c, (struct zx_e_Fault_s*)x, p);
  case zx_e_Header_ELEM:
    return zx_ENC_WO_e_Header(c, (struct zx_e_Header_s*)x, p);
  case zx_e_Body_ELEM:
    return zx_ENC_WO_e_Body(c, (struct zx_e_Body_s*)x, p);
  case zx_e_faultcode_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "faultcode", sizeof("faultcode")-1);
  case zx_e_faultstring_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "faultstring", sizeof("faultstring")-1);
  case zx_e_faultactor_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "faultactor", sizeof("faultactor")-1);
  case zx_e_detail_ELEM:
    return zx_ENC_WO_e_detail(c, (struct zx_e_detail_s*)x, p);
  case zx_b_TargetIdentity_ELEM:
    return zx_ENC_WO_b_TargetIdentity(c, (struct zx_b_TargetIdentity_s*)x, p);
  case zx_b_Consent_ELEM:
    return zx_ENC_WO_b_Consent(c, (struct zx_b_Consent_s*)x, p);
  case zx_b_UsageDirective_ELEM:
    return zx_ENC_WO_b_UsageDirective(c, (struct zx_b_UsageDirective_s*)x, p);
  case zx_b_UserInteraction_ELEM:
    return zx_ENC_WO_b_UserInteraction(c, (struct zx_b_UserInteraction_s*)x, p);
  case zx_b12_Correlation_ELEM:
    return zx_ENC_WO_b12_Correlation(c, (struct zx_b12_Correlation_s*)x, p);
  case zx_b12_Provider_ELEM:
    return zx_ENC_WO_b12_Provider(c, (struct zx_b12_Provider_s*)x, p);
  case zx_b12_ProcessingContext_ELEM:
    return zx_ENC_WO_b12_ProcessingContext(c, (struct zx_b12_ProcessingContext_s*)x, p);
  case zx_b12_Consent_ELEM:
    return zx_ENC_WO_b12_Consent(c, (struct zx_b12_Consent_s*)x, p);
  case zx_b12_UsageDirective_ELEM:
    return zx_ENC_WO_b12_UsageDirective(c, (struct zx_b12_UsageDirective_s*)x, p);
  case zx_sa11_Conditions_ELEM:
    return zx_ENC_WO_sa11_Conditions(c, (struct zx_sa11_Conditions_s*)x, p);
  case zx_sa11_Advice_ELEM:
    return zx_ENC_WO_sa11_Advice(c, (struct zx_sa11_Advice_s*)x, p);
  case zx_sa11_Statement_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Statement", sizeof("Statement")-1);
  case zx_sa11_SubjectStatement_ELEM:
    return zx_ENC_WO_sa11_SubjectStatement(c, (struct zx_sa11_SubjectStatement_s*)x, p);
  case zx_sa11_AuthenticationStatement_ELEM:
    return zx_ENC_WO_sa11_AuthenticationStatement(c, (struct zx_sa11_AuthenticationStatement_s*)x, p);
  case zx_sa11_AuthorizationDecisionStatement_ELEM:
    return zx_ENC_WO_sa11_AuthorizationDecisionStatement(c, (struct zx_sa11_AuthorizationDecisionStatement_s*)x, p);
  case zx_sa11_AttributeStatement_ELEM:
    return zx_ENC_WO_sa11_AttributeStatement(c, (struct zx_sa11_AttributeStatement_s*)x, p);
  case zx_ds_Signature_ELEM:
    return (x != c->exclude_sig) ? zx_ENC_WO_ds_Signature(c, (struct zx_ds_Signature_s*)x, p) : p;
  case zx_sa11_Subject_ELEM:
    return zx_ENC_WO_sa11_Subject(c, (struct zx_sa11_Subject_s*)x, p);
  case zx_sa11_SubjectLocality_ELEM:
    return zx_ENC_WO_sa11_SubjectLocality(c, (struct zx_sa11_SubjectLocality_s*)x, p);
  case zx_sa11_AuthorityBinding_ELEM:
    return zx_ENC_WO_sa11_AuthorityBinding(c, (struct zx_sa11_AuthorityBinding_s*)x, p);
  case zx_ff12_AuthnContext_ELEM:
    return zx_ENC_WO_ff12_AuthnContext(c, (struct zx_ff12_AuthnContext_s*)x, p);
  case zx_ff12_AuthnContextClassRef_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "AuthnContextClassRef", sizeof("AuthnContextClassRef")-1);
  case zx_ac_AuthenticationContextStatement_ELEM:
    return zx_ENC_WO_ac_AuthenticationContextStatement(c, (struct zx_ac_AuthenticationContextStatement_s*)x, p);
  case zx_ff12_AuthnContextStatementRef_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "AuthnContextStatementRef", sizeof("AuthnContextStatementRef")-1);
  case zx_sp11_RespondWith_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "RespondWith", sizeof("RespondWith")-1);
  case zx_ff12_Extension_ELEM:
    return zx_ENC_WO_ff12_Extension(c, (struct zx_ff12_Extension_s*)x, p);
  case zx_ff12_ProviderID_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "ProviderID", sizeof("ProviderID")-1);
  case zx_ff12_AffiliationID_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "AffiliationID", sizeof("AffiliationID")-1);
  case zx_ff12_NameIDPolicy_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "NameIDPolicy", sizeof("NameIDPolicy")-1);
  case zx_ff12_ForceAuthn_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "ForceAuthn", sizeof("ForceAuthn")-1);
  case zx_ff12_IsPassive_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "IsPassive", sizeof("IsPassive")-1);
  case zx_ff12_ProtocolProfile_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "ProtocolProfile", sizeof("ProtocolProfile")-1);
  case zx_ff12_AssertionConsumerServiceID_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "AssertionConsumerServiceID", sizeof("AssertionConsumerServiceID")-1);
  case zx_ff12_RequestAuthnContext_ELEM:
    return zx_ENC_WO_ff12_RequestAuthnContext(c, (struct zx_ff12_RequestAuthnContext_s*)x, p);
  case zx_ff12_RelayState_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "RelayState", sizeof("RelayState")-1);
  case zx_ff12_Scoping_ELEM:
    return zx_ENC_WO_ff12_Scoping(c, (struct zx_ff12_Scoping_s*)x, p);
  case zx_ff12_AuthnRequest_ELEM:
    return zx_ENC_WO_ff12_AuthnRequest(c, (struct zx_ff12_AuthnRequest_s*)x, p);
  case zx_ff12_ProviderName_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "ProviderName", sizeof("ProviderName")-1);
  case zx_ff12_AssertionConsumerServiceURL_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "AssertionConsumerServiceURL", sizeof("AssertionConsumerServiceURL")-1);
  case zx_ff12_IDPList_ELEM:
    return zx_ENC_WO_ff12_IDPList(c, (struct zx_ff12_IDPList_s*)x, p);
  case zx_sp11_Status_ELEM:
    return zx_ENC_WO_sp11_Status(c, (struct zx_sp11_Status_s*)x, p);
  case zx_sa11_Assertion_ELEM:
    return zx_ENC_WO_sa11_Assertion(c, (struct zx_sa11_Assertion_s*)x, p);
  case zx_ff12_AuthnResponse_ELEM:
    return zx_ENC_WO_ff12_AuthnResponse(c, (struct zx_ff12_AuthnResponse_s*)x, p);
  case zx_sa11_NameIdentifier_ELEM:
    return zx_ENC_WO_sa11_NameIdentifier(c, (struct zx_sa11_NameIdentifier_s*)x, p);
  case zx_ff12_IDPEntry_ELEM:
    return zx_ENC_WO_ff12_IDPEntry(c, (struct zx_ff12_IDPEntry_s*)x, p);
  case zx_ff12_Loc_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Loc", sizeof("Loc")-1);
  case zx_ff12_IDPEntries_ELEM:
    return zx_ENC_WO_ff12_IDPEntries(c, (struct zx_ff12_IDPEntries_s*)x, p);
  case zx_ff12_GetComplete_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "GetComplete", sizeof("GetComplete")-1);
  case zx_ff12_SessionIndex_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "SessionIndex", sizeof("SessionIndex")-1);
  case zx_ff12_TargetNamespace_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "TargetNamespace", sizeof("TargetNamespace")-1);
  case zx_ff12_IDPProvidedNameIdentifier_ELEM:
    return zx_ENC_WO_ff12_IDPProvidedNameIdentifier(c, (struct zx_ff12_IDPProvidedNameIdentifier_s*)x, p);
  case zx_ff12_SPProvidedNameIdentifier_ELEM:
    return zx_ENC_WO_ff12_SPProvidedNameIdentifier(c, (struct zx_ff12_SPProvidedNameIdentifier_s*)x, p);
  case zx_ff12_OldProvidedNameIdentifier_ELEM:
    return zx_ENC_WO_ff12_OldProvidedNameIdentifier(c, (struct zx_ff12_OldProvidedNameIdentifier_s*)x, p);
  case zx_ff12_AuthnContextComparison_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "AuthnContextComparison", sizeof("AuthnContextComparison")-1);
  case zx_ff12_ProxyCount_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "ProxyCount", sizeof("ProxyCount")-1);
  case zx_sa11_SubjectConfirmation_ELEM:
    return zx_ENC_WO_sa11_SubjectConfirmation(c, (struct zx_sa11_SubjectConfirmation_s*)x, p);
  case zx_is_Help_ELEM:
    return zx_ENC_WO_is_Help(c, (struct zx_is_Help_s*)x, p);
  case zx_is_Hint_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Hint", sizeof("Hint")-1);
  case zx_is_Label_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Label", sizeof("Label")-1);
  case zx_is_Value_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Value", sizeof("Value")-1);
  case zx_is_Select_ELEM:
    return zx_ENC_WO_is_Select(c, (struct zx_is_Select_s*)x, p);
  case zx_is_Confirm_ELEM:
    return zx_ENC_WO_is_Confirm(c, (struct zx_is_Confirm_s*)x, p);
  case zx_is_Text_ELEM:
    return zx_ENC_WO_is_Text(c, (struct zx_is_Text_s*)x, p);
  case zx_is_Inquiry_ELEM:
    return zx_ENC_WO_is_Inquiry(c, (struct zx_is_Inquiry_s*)x, p);
  case zx_is_InteractionStatement_ELEM:
    return zx_ENC_WO_is_InteractionStatement(c, (struct zx_is_InteractionStatement_s*)x, p);
  case zx_is_Parameter_ELEM:
    return zx_ENC_WO_is_Parameter(c, (struct zx_is_Parameter_s*)x, p);
  case zx_is_Item_ELEM:
    return zx_ENC_WO_is_Item(c, (struct zx_is_Item_s*)x, p);
  case zx_is12_Help_ELEM:
    return zx_ENC_WO_is12_Help(c, (struct zx_is12_Help_s*)x, p);
  case zx_is12_Hint_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Hint", sizeof("Hint")-1);
  case zx_is12_Label_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Label", sizeof("Label")-1);
  case zx_is12_Value_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Value", sizeof("Value")-1);
  case zx_is12_Select_ELEM:
    return zx_ENC_WO_is12_Select(c, (struct zx_is12_Select_s*)x, p);
  case zx_is12_Confirm_ELEM:
    return zx_ENC_WO_is12_Confirm(c, (struct zx_is12_Confirm_s*)x, p);
  case zx_is12_Text_ELEM:
    return zx_ENC_WO_is12_Text(c, (struct zx_is12_Text_s*)x, p);
  case zx_is12_Inquiry_ELEM:
    return zx_ENC_WO_is12_Inquiry(c, (struct zx_is12_Inquiry_s*)x, p);
  case zx_is12_Status_ELEM:
    return zx_ENC_WO_is12_Status(c, (struct zx_is12_Status_s*)x, p);
  case zx_is12_InteractionStatement_ELEM:
    return zx_ENC_WO_is12_InteractionStatement(c, (struct zx_is12_InteractionStatement_s*)x, p);
  case zx_is12_Parameter_ELEM:
    return zx_ENC_WO_is12_Parameter(c, (struct zx_is12_Parameter_s*)x, p);
  case zx_is12_Item_ELEM:
    return zx_ENC_WO_is12_Item(c, (struct zx_is12_Item_s*)x, p);
  case zx_is12_InteractionService_ELEM:
    return zx_ENC_WO_is12_InteractionService(c, (struct zx_is12_InteractionService_s*)x, p);
  case zx_m20_AffiliateMember_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "AffiliateMember", sizeof("AffiliateMember")-1);
  case zx_m20_Extension_ELEM:
    return zx_ENC_WO_m20_Extension(c, (struct zx_m20_Extension_s*)x, p);
  case zx_m20_KeyDescriptor_ELEM:
    return zx_ENC_WO_m20_KeyDescriptor(c, (struct zx_m20_KeyDescriptor_s*)x, p);
  case zx_m20_Company_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Company", sizeof("Company")-1);
  case zx_m20_GivenName_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "GivenName", sizeof("GivenName")-1);
  case zx_m20_SurName_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "SurName", sizeof("SurName")-1);
  case zx_m20_EmailAddress_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "EmailAddress", sizeof("EmailAddress")-1);
  case zx_m20_TelephoneNumber_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "TelephoneNumber", sizeof("TelephoneNumber")-1);
  case zx_m20_EntityDescriptor_ELEM:
    return zx_ENC_WO_m20_EntityDescriptor(c, (struct zx_m20_EntityDescriptor_s*)x, p);
  case zx_m20_IDPDescriptor_ELEM:
    return zx_ENC_WO_m20_IDPDescriptor(c, (struct zx_m20_IDPDescriptor_s*)x, p);
  case zx_m20_SPDescriptor_ELEM:
    return zx_ENC_WO_m20_SPDescriptor(c, (struct zx_m20_SPDescriptor_s*)x, p);
  case zx_m20_AffiliationDescriptor_ELEM:
    return zx_ENC_WO_m20_AffiliationDescriptor(c, (struct zx_m20_AffiliationDescriptor_s*)x, p);
  case zx_m20_ContactPerson_ELEM:
    return zx_ENC_WO_m20_ContactPerson(c, (struct zx_m20_ContactPerson_s*)x, p);
  case zx_m20_Organization_ELEM:
    return zx_ENC_WO_m20_Organization(c, (struct zx_m20_Organization_s*)x, p);
  case zx_m20_SoapEndpoint_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "SoapEndpoint", sizeof("SoapEndpoint")-1);
  case zx_m20_SingleLogoutServiceURL_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "SingleLogoutServiceURL", sizeof("SingleLogoutServiceURL")-1);
  case zx_m20_SingleLogoutServiceReturnURL_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "SingleLogoutServiceReturnURL", sizeof("SingleLogoutServiceReturnURL")-1);
  case zx_m20_FederationTerminationServiceURL_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "FederationTerminationServiceURL", sizeof("FederationTerminationServiceURL")-1);
  case zx_m20_FederationTerminationServiceReturnURL_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "FederationTerminationServiceReturnURL", sizeof("FederationTerminationServiceReturnURL")-1);
  case zx_m20_FederationTerminationNotificationProtocolProfile_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "FederationTerminationNotificationProtocolProfile", sizeof("FederationTerminationNotificationProtocolProfile")-1);
  case zx_m20_SingleLogoutProtocolProfile_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "SingleLogoutProtocolProfile", sizeof("SingleLogoutProtocolProfile")-1);
  case zx_m20_RegisterNameIdentifierProtocolProfile_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "RegisterNameIdentifierProtocolProfile", sizeof("RegisterNameIdentifierProtocolProfile")-1);
  case zx_m20_RegisterNameIdentifierServiceURL_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "RegisterNameIdentifierServiceURL", sizeof("RegisterNameIdentifierServiceURL")-1);
  case zx_m20_RegisterNameIdentifierServiceReturnURL_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "RegisterNameIdentifierServiceReturnURL", sizeof("RegisterNameIdentifierServiceReturnURL")-1);
  case zx_m20_NameIdentifierMappingProtocolProfile_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "NameIdentifierMappingProtocolProfile", sizeof("NameIdentifierMappingProtocolProfile")-1);
  case zx_m20_NameIdentifierMappingEncryptionProfile_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "NameIdentifierMappingEncryptionProfile", sizeof("NameIdentifierMappingEncryptionProfile")-1);
  case zx_m20_AdditionalMetaLocation_ELEM:
    return zx_ENC_WO_m20_AdditionalMetaLocation(c, (struct zx_m20_AdditionalMetaLocation_s*)x, p);
  case zx_m20_SingleSignOnServiceURL_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "SingleSignOnServiceURL", sizeof("SingleSignOnServiceURL")-1);
  case zx_m20_SingleSignOnProtocolProfile_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "SingleSignOnProtocolProfile", sizeof("SingleSignOnProtocolProfile")-1);
  case zx_m20_AuthnServiceURL_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "AuthnServiceURL", sizeof("AuthnServiceURL")-1);
  case zx_m20_EncryptionMethod_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "EncryptionMethod", sizeof("EncryptionMethod")-1);
  case zx_m20_KeySize_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "KeySize", sizeof("KeySize")-1);
  case zx_m20_OrganizationName_ELEM:
    return zx_ENC_WO_m20_OrganizationName(c, (struct zx_m20_OrganizationName_s*)x, p);
  case zx_m20_OrganizationDisplayName_ELEM:
    return zx_ENC_WO_m20_OrganizationDisplayName(c, (struct zx_m20_OrganizationDisplayName_s*)x, p);
  case zx_m20_OrganizationURL_ELEM:
    return zx_ENC_WO_m20_OrganizationURL(c, (struct zx_m20_OrganizationURL_s*)x, p);
  case zx_m20_AssertionConsumerServiceURL_ELEM:
    return zx_ENC_WO_m20_AssertionConsumerServiceURL(c, (struct zx_m20_AssertionConsumerServiceURL_s*)x, p);
  case zx_m20_AuthnRequestsSigned_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "AuthnRequestsSigned", sizeof("AuthnRequestsSigned")-1);
  case zx_md_Extensions_ELEM:
    return zx_ENC_WO_md_Extensions(c, (struct zx_md_Extensions_s*)x, p);
  case zx_md_AffiliateMember_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "AffiliateMember", sizeof("AffiliateMember")-1);
  case zx_md_Organization_ELEM:
    return zx_ENC_WO_md_Organization(c, (struct zx_md_Organization_s*)x, p);
  case zx_md_ContactPerson_ELEM:
    return zx_ENC_WO_md_ContactPerson(c, (struct zx_md_ContactPerson_s*)x, p);
  case zx_md_AttributeService_ELEM:
    return zx_ENC_WO_md_AttributeService(c, (struct zx_md_AttributeService_s*)x, p);
  case zx_md_AssertionIDRequestService_ELEM:
    return zx_ENC_WO_md_AssertionIDRequestService(c, (struct zx_md_AssertionIDRequestService_s*)x, p);
  case zx_md_NameIDFormat_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "NameIDFormat", sizeof("NameIDFormat")-1);
  case zx_md_AttributeProfile_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "AttributeProfile", sizeof("AttributeProfile")-1);
  case zx_sa_Attribute_ELEM:
    return zx_ENC_WO_sa_Attribute(c, (struct zx_sa_Attribute_s*)x, p);
  case zx_md_ServiceName_ELEM:
    return zx_ENC_WO_md_ServiceName(c, (struct zx_md_ServiceName_s*)x, p);
  case zx_md_ServiceDescription_ELEM:
    return zx_ENC_WO_md_ServiceDescription(c, (struct zx_md_ServiceDescription_s*)x, p);
  case zx_md_RequestedAttribute_ELEM:
    return zx_ENC_WO_md_RequestedAttribute(c, (struct zx_md_RequestedAttribute_s*)x, p);
  case zx_md_AuthnQueryService_ELEM:
    return zx_ENC_WO_md_AuthnQueryService(c, (struct zx_md_AuthnQueryService_s*)x, p);
  case zx_md_Company_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Company", sizeof("Company")-1);
  case zx_md_GivenName_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "GivenName", sizeof("GivenName")-1);
  case zx_md_SurName_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "SurName", sizeof("SurName")-1);
  case zx_md_EmailAddress_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "EmailAddress", sizeof("EmailAddress")-1);
  case zx_md_TelephoneNumber_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "TelephoneNumber", sizeof("TelephoneNumber")-1);
  case zx_xenc_KeySize_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "KeySize", sizeof("KeySize")-1);
  case zx_xenc_OAEPparams_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "OAEPparams", sizeof("OAEPparams")-1);
  case zx_md_EntityDescriptor_ELEM:
    return zx_ENC_WO_md_EntityDescriptor(c, (struct zx_md_EntityDescriptor_s*)x, p);
  case zx_md_EntitiesDescriptor_ELEM:
    return zx_ENC_WO_md_EntitiesDescriptor(c, (struct zx_md_EntitiesDescriptor_s*)x, p);
  case zx_md_RoleDescriptor_ELEM:
    return zx_ENC_WO_md_RoleDescriptor(c, (struct zx_md_RoleDescriptor_s*)x, p);
  case zx_md_IDPSSODescriptor_ELEM:
    return zx_ENC_WO_md_IDPSSODescriptor(c, (struct zx_md_IDPSSODescriptor_s*)x, p);
  case zx_md_SPSSODescriptor_ELEM:
    return zx_ENC_WO_md_SPSSODescriptor(c, (struct zx_md_SPSSODescriptor_s*)x, p);
  case zx_md_AuthnAuthorityDescriptor_ELEM:
    return zx_ENC_WO_md_AuthnAuthorityDescriptor(c, (struct zx_md_AuthnAuthorityDescriptor_s*)x, p);
  case zx_md_AttributeAuthorityDescriptor_ELEM:
    return zx_ENC_WO_md_AttributeAuthorityDescriptor(c, (struct zx_md_AttributeAuthorityDescriptor_s*)x, p);
  case zx_md_PDPDescriptor_ELEM:
    return zx_ENC_WO_md_PDPDescriptor(c, (struct zx_md_PDPDescriptor_s*)x, p);
  case zx_md_AffiliationDescriptor_ELEM:
    return zx_ENC_WO_md_AffiliationDescriptor(c, (struct zx_md_AffiliationDescriptor_s*)x, p);
  case zx_md_AdditionalMetadataLocation_ELEM:
    return zx_ENC_WO_md_AdditionalMetadataLocation(c, (struct zx_md_AdditionalMetadataLocation_s*)x, p);
  case zx_md_ArtifactResolutionService_ELEM:
    return zx_ENC_WO_md_ArtifactResolutionService(c, (struct zx_md_ArtifactResolutionService_s*)x, p);
  case zx_md_SingleLogoutService_ELEM:
    return zx_ENC_WO_md_SingleLogoutService(c, (struct zx_md_SingleLogoutService_s*)x, p);
  case zx_md_ManageNameIDService_ELEM:
    return zx_ENC_WO_md_ManageNameIDService(c, (struct zx_md_ManageNameIDService_s*)x, p);
  case zx_md_SingleSignOnService_ELEM:
    return zx_ENC_WO_md_SingleSignOnService(c, (struct zx_md_SingleSignOnService_s*)x, p);
  case zx_md_NameIDMappingService_ELEM:
    return zx_ENC_WO_md_NameIDMappingService(c, (struct zx_md_NameIDMappingService_s*)x, p);
  case zx_md_EncryptionMethod_ELEM:
    return zx_ENC_WO_md_EncryptionMethod(c, (struct zx_md_EncryptionMethod_s*)x, p);
  case zx_md_OrganizationName_ELEM:
    return zx_ENC_WO_md_OrganizationName(c, (struct zx_md_OrganizationName_s*)x, p);
  case zx_md_OrganizationDisplayName_ELEM:
    return zx_ENC_WO_md_OrganizationDisplayName(c, (struct zx_md_OrganizationDisplayName_s*)x, p);
  case zx_md_OrganizationURL_ELEM:
    return zx_ENC_WO_md_OrganizationURL(c, (struct zx_md_OrganizationURL_s*)x, p);
  case zx_md_AuthzService_ELEM:
    return zx_ENC_WO_md_AuthzService(c, (struct zx_md_AuthzService_s*)x, p);
  case zx_sa_AttributeValue_ELEM:
    return zx_ENC_WO_sa_AttributeValue(c, (struct zx_sa_AttributeValue_s*)x, p);
  case zx_md_AssertionConsumerService_ELEM:
    return zx_ENC_WO_md_AssertionConsumerService(c, (struct zx_md_AssertionConsumerService_s*)x, p);
  case zx_md_AttributeConsumingService_ELEM:
    return zx_ENC_WO_md_AttributeConsumingService(c, (struct zx_md_AttributeConsumingService_s*)x, p);
  case zx_sa_AssertionIDRef_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "AssertionIDRef", sizeof("AssertionIDRef")-1);
  case zx_sa_AssertionURIRef_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "AssertionURIRef", sizeof("AssertionURIRef")-1);
  case zx_sa_Assertion_ELEM:
    return zx_ENC_WO_sa_Assertion(c, (struct zx_sa_Assertion_s*)x, p);
  case zx_sa_EncryptedAssertion_ELEM:
    return zx_ENC_WO_sa_EncryptedAssertion(c, (struct zx_sa_EncryptedAssertion_s*)x, p);
  case zx_sa_Issuer_ELEM:
    return zx_ENC_WO_sa_Issuer(c, (struct zx_sa_Issuer_s*)x, p);
  case zx_sa_Subject_ELEM:
    return zx_ENC_WO_sa_Subject(c, (struct zx_sa_Subject_s*)x, p);
  case zx_sa_Conditions_ELEM:
    return zx_ENC_WO_sa_Conditions(c, (struct zx_sa_Conditions_s*)x, p);
  case zx_sa_Advice_ELEM:
    return zx_ENC_WO_sa_Advice(c, (struct zx_sa_Advice_s*)x, p);
  case zx_sa_Statement_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Statement", sizeof("Statement")-1);
  case zx_sa_AuthnStatement_ELEM:
    return zx_ENC_WO_sa_AuthnStatement(c, (struct zx_sa_AuthnStatement_s*)x, p);
  case zx_sa_AuthzDecisionStatement_ELEM:
    return zx_ENC_WO_sa_AuthzDecisionStatement(c, (struct zx_sa_AuthzDecisionStatement_s*)x, p);
  case zx_sa_AttributeStatement_ELEM:
    return zx_ENC_WO_sa_AttributeStatement(c, (struct zx_sa_AttributeStatement_s*)x, p);
  case zx_sa_EncryptedAttribute_ELEM:
    return zx_ENC_WO_sa_EncryptedAttribute(c, (struct zx_sa_EncryptedAttribute_s*)x, p);
  case zx_sa_Audience_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Audience", sizeof("Audience")-1);
  case zx_sa_AuthnContextClassRef_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "AuthnContextClassRef", sizeof("AuthnContextClassRef")-1);
  case zx_sa_AuthnContextDecl_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "AuthnContextDecl", sizeof("AuthnContextDecl")-1);
  case zx_sa_AuthnContextDeclRef_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "AuthnContextDeclRef", sizeof("AuthnContextDeclRef")-1);
  case zx_sa_AuthenticatingAuthority_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "AuthenticatingAuthority", sizeof("AuthenticatingAuthority")-1);
  case zx_sa_SubjectLocality_ELEM:
    return zx_ENC_WO_sa_SubjectLocality(c, (struct zx_sa_SubjectLocality_s*)x, p);
  case zx_sa_AuthnContext_ELEM:
    return zx_ENC_WO_sa_AuthnContext(c, (struct zx_sa_AuthnContext_s*)x, p);
  case zx_sa_Action_ELEM:
    return zx_ENC_WO_sa_Action(c, (struct zx_sa_Action_s*)x, p);
  case zx_sa_Evidence_ELEM:
    return zx_ENC_WO_sa_Evidence(c, (struct zx_sa_Evidence_s*)x, p);
  case zx_sa_Condition_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Condition", sizeof("Condition")-1);
  case zx_sa_AudienceRestriction_ELEM:
    return zx_ENC_WO_sa_AudienceRestriction(c, (struct zx_sa_AudienceRestriction_s*)x, p);
  case zx_sa_OneTimeUse_ELEM:
    return zx_ENC_WO_sa_OneTimeUse(c, (struct zx_sa_OneTimeUse_s*)x, p);
  case zx_sa_ProxyRestriction_ELEM:
    return zx_ENC_WO_sa_ProxyRestriction(c, (struct zx_sa_ProxyRestriction_s*)x, p);
  case zx_sa_BaseID_ELEM:
    return zx_ENC_WO_sa_BaseID(c, (struct zx_sa_BaseID_s*)x, p);
  case zx_sa_NameID_ELEM:
    return zx_ENC_WO_sa_NameID(c, (struct zx_sa_NameID_s*)x, p);
  case zx_sa_EncryptedID_ELEM:
    return zx_ENC_WO_sa_EncryptedID(c, (struct zx_sa_EncryptedID_s*)x, p);
  case zx_sa_SubjectConfirmation_ELEM:
    return zx_ENC_WO_sa_SubjectConfirmation(c, (struct zx_sa_SubjectConfirmation_s*)x, p);
  case zx_sa_SubjectConfirmationData_ELEM:
    return zx_ENC_WO_sa_SubjectConfirmationData(c, (struct zx_sa_SubjectConfirmationData_s*)x, p);
  case zx_sa11_AssertionIDReference_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "AssertionIDReference", sizeof("AssertionIDReference")-1);
  case zx_sa11_AttributeValue_ELEM:
    return zx_ENC_WO_sa11_AttributeValue(c, (struct zx_sa11_AttributeValue_s*)x, p);
  case zx_sa11_Attribute_ELEM:
    return zx_ENC_WO_sa11_Attribute(c, (struct zx_sa11_Attribute_s*)x, p);
  case zx_sa11_Audience_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Audience", sizeof("Audience")-1);
  case zx_sa11_Action_ELEM:
    return zx_ENC_WO_sa11_Action(c, (struct zx_sa11_Action_s*)x, p);
  case zx_sa11_Evidence_ELEM:
    return zx_ENC_WO_sa11_Evidence(c, (struct zx_sa11_Evidence_s*)x, p);
  case zx_sa11_AudienceRestrictionCondition_ELEM:
    return zx_ENC_WO_sa11_AudienceRestrictionCondition(c, (struct zx_sa11_AudienceRestrictionCondition_s*)x, p);
  case zx_sa11_DoNotCacheCondition_ELEM:
    return zx_ENC_WO_sa11_DoNotCacheCondition(c, (struct zx_sa11_DoNotCacheCondition_s*)x, p);
  case zx_sa11_Condition_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Condition", sizeof("Condition")-1);
  case zx_sa11_ConfirmationMethod_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "ConfirmationMethod", sizeof("ConfirmationMethod")-1);
  case zx_sa11_SubjectConfirmationData_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "SubjectConfirmationData", sizeof("SubjectConfirmationData")-1);
  case zx_sp_ArtifactResolve_ELEM:
    return zx_ENC_WO_sp_ArtifactResolve(c, (struct zx_sp_ArtifactResolve_s*)x, p);
  case zx_sp_ArtifactResponse_ELEM:
    return zx_ENC_WO_sp_ArtifactResponse(c, (struct zx_sp_ArtifactResponse_s*)x, p);
  case zx_sp_ManageNameIDRequest_ELEM:
    return zx_ENC_WO_sp_ManageNameIDRequest(c, (struct zx_sp_ManageNameIDRequest_s*)x, p);
  case zx_sp_ManageNameIDResponse_ELEM:
    return zx_ENC_WO_sp_ManageNameIDResponse(c, (struct zx_sp_ManageNameIDResponse_s*)x, p);
  case zx_sp_LogoutRequest_ELEM:
    return zx_ENC_WO_sp_LogoutRequest(c, (struct zx_sp_LogoutRequest_s*)x, p);
  case zx_sp_LogoutResponse_ELEM:
    return zx_ENC_WO_sp_LogoutResponse(c, (struct zx_sp_LogoutResponse_s*)x, p);
  case zx_sp_NameIDMappingRequest_ELEM:
    return zx_ENC_WO_sp_NameIDMappingRequest(c, (struct zx_sp_NameIDMappingRequest_s*)x, p);
  case zx_sp_NameIDMappingResponse_ELEM:
    return zx_ENC_WO_sp_NameIDMappingResponse(c, (struct zx_sp_NameIDMappingResponse_s*)x, p);
  case zx_sp_AttributeQuery_ELEM:
    return zx_ENC_WO_sp_AttributeQuery(c, (struct zx_sp_AttributeQuery_s*)x, p);
  case zx_sp_AuthnQuery_ELEM:
    return zx_ENC_WO_sp_AuthnQuery(c, (struct zx_sp_AuthnQuery_s*)x, p);
  case zx_sp_AuthzDecisionQuery_ELEM:
    return zx_ENC_WO_sp_AuthzDecisionQuery(c, (struct zx_sp_AuthzDecisionQuery_s*)x, p);
  case zx_sp_AssertionIDRequest_ELEM:
    return zx_ENC_WO_sp_AssertionIDRequest(c, (struct zx_sp_AssertionIDRequest_s*)x, p);
  case zx_sp_Response_ELEM:
    return zx_ENC_WO_sp_Response(c, (struct zx_sp_Response_s*)x, p);
  case zx_sp11_Request_ELEM:
    return zx_ENC_WO_sp11_Request(c, (struct zx_sp11_Request_s*)x, p);
  case zx_sp11_Response_ELEM:
    return zx_ENC_WO_sp11_Response(c, (struct zx_sp11_Response_s*)x, p);
  case zx_ff12_RegisterNameIdentifierRequest_ELEM:
    return zx_ENC_WO_ff12_RegisterNameIdentifierRequest(c, (struct zx_ff12_RegisterNameIdentifierRequest_s*)x, p);
  case zx_ff12_RegisterNameIdentifierResponse_ELEM:
    return zx_ENC_WO_ff12_RegisterNameIdentifierResponse(c, (struct zx_ff12_RegisterNameIdentifierResponse_s*)x, p);
  case zx_ff12_FederationTerminationNotification_ELEM:
    return zx_ENC_WO_ff12_FederationTerminationNotification(c, (struct zx_ff12_FederationTerminationNotification_s*)x, p);
  case zx_ff12_LogoutRequest_ELEM:
    return zx_ENC_WO_ff12_LogoutRequest(c, (struct zx_ff12_LogoutRequest_s*)x, p);
  case zx_ff12_LogoutResponse_ELEM:
    return zx_ENC_WO_ff12_LogoutResponse(c, (struct zx_ff12_LogoutResponse_s*)x, p);
  case zx_ff12_NameIdentifierMappingRequest_ELEM:
    return zx_ENC_WO_ff12_NameIdentifierMappingRequest(c, (struct zx_ff12_NameIdentifierMappingRequest_s*)x, p);
  case zx_ff12_NameIdentifierMappingResponse_ELEM:
    return zx_ENC_WO_ff12_NameIdentifierMappingResponse(c, (struct zx_ff12_NameIdentifierMappingResponse_s*)x, p);
  case zx_se_Fault_ELEM:
    return zx_ENC_WO_se_Fault(c, (struct zx_se_Fault_s*)x, p);
  case zx_se_Header_ELEM:
    return zx_ENC_WO_se_Header(c, (struct zx_se_Header_s*)x, p);
  case zx_se_Body_ELEM:
    return zx_ENC_WO_se_Body(c, (struct zx_se_Body_s*)x, p);
  case zx_se_faultcode_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "faultcode", sizeof("faultcode")-1);
  case zx_se_faultstring_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "faultstring", sizeof("faultstring")-1);
  case zx_se_faultactor_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "faultactor", sizeof("faultactor")-1);
  case zx_se_detail_ELEM:
    return zx_ENC_WO_se_detail(c, (struct zx_se_detail_s*)x, p);
  case zx_sec_TransitedProvider_ELEM:
    return zx_ENC_WO_sec_TransitedProvider(c, (struct zx_sec_TransitedProvider_s*)x, p);
  case zx_sec12_Issuer_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Issuer", sizeof("Issuer")-1);
  case zx_sec12_IssueInstant_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "IssueInstant", sizeof("IssueInstant")-1);
  case zx_sec12_ProxySubject_ELEM:
    return zx_ENC_WO_sec12_ProxySubject(c, (struct zx_sec12_ProxySubject_s*)x, p);
  case zx_sec12_SessionContext_ELEM:
    return zx_ENC_WO_sec12_SessionContext(c, (struct zx_sec12_SessionContext_s*)x, p);
  case zx_sec12_SessionSubject_ELEM:
    return zx_ENC_WO_sec12_SessionSubject(c, (struct zx_sec12_SessionSubject_s*)x, p);
  case zx_sec12_ProviderID_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "ProviderID", sizeof("ProviderID")-1);
  case zx_sec12_NumberOfUses_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "NumberOfUses", sizeof("NumberOfUses")-1);
  case zx_sp_Extensions_ELEM:
    return zx_ENC_WO_sp_Extensions(c, (struct zx_sp_Extensions_s*)x, p);
  case zx_sp_Artifact_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Artifact", sizeof("Artifact")-1);
  case zx_sp_Status_ELEM:
    return zx_ENC_WO_sp_Status(c, (struct zx_sp_Status_s*)x, p);
  case zx_sp_NameIDPolicy_ELEM:
    return zx_ENC_WO_sp_NameIDPolicy(c, (struct zx_sp_NameIDPolicy_s*)x, p);
  case zx_sp_Scoping_ELEM:
    return zx_ENC_WO_sp_Scoping(c, (struct zx_sp_Scoping_s*)x, p);
  case zx_sp_IDPEntry_ELEM:
    return zx_ENC_WO_sp_IDPEntry(c, (struct zx_sp_IDPEntry_s*)x, p);
  case zx_sp_GetComplete_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "GetComplete", sizeof("GetComplete")-1);
  case zx_sp_SessionIndex_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "SessionIndex", sizeof("SessionIndex")-1);
  case zx_sp_NewID_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "NewID", sizeof("NewID")-1);
  case zx_sp_NewEncryptedID_ELEM:
    return zx_ENC_WO_sp_NewEncryptedID(c, (struct zx_sp_NewEncryptedID_s*)x, p);
  case zx_sp_Terminate_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Terminate", sizeof("Terminate")-1);
  case zx_sp_IDPList_ELEM:
    return zx_ENC_WO_sp_IDPList(c, (struct zx_sp_IDPList_s*)x, p);
  case zx_sp_RequesterID_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "RequesterID", sizeof("RequesterID")-1);
  case zx_sp_StatusCode_ELEM:
    return zx_ENC_WO_sp_StatusCode(c, (struct zx_sp_StatusCode_s*)x, p);
  case zx_sp_StatusMessage_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "StatusMessage", sizeof("StatusMessage")-1);
  case zx_sp_StatusDetail_ELEM:
    return zx_ENC_WO_sp_StatusDetail(c, (struct zx_sp_StatusDetail_s*)x, p);
  case zx_sa11_AttributeDesignator_ELEM:
    return zx_ENC_WO_sa11_AttributeDesignator(c, (struct zx_sa11_AttributeDesignator_s*)x, p);
  case zx_sp11_Query_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "Query", sizeof("Query")-1);
  case zx_sp11_SubjectQuery_ELEM:
    return zx_ENC_WO_sp11_SubjectQuery(c, (struct zx_sp11_SubjectQuery_s*)x, p);
  case zx_sp11_AuthenticationQuery_ELEM:
    return zx_ENC_WO_sp11_AuthenticationQuery(c, (struct zx_sp11_AuthenticationQuery_s*)x, p);
  case zx_sp11_AttributeQuery_ELEM:
    return zx_ENC_WO_sp11_AttributeQuery(c, (struct zx_sp11_AttributeQuery_s*)x, p);
  case zx_sp11_AuthorizationDecisionQuery_ELEM:
    return zx_ENC_WO_sp11_AuthorizationDecisionQuery(c, (struct zx_sp11_AuthorizationDecisionQuery_s*)x, p);
  case zx_sp11_AssertionArtifact_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "AssertionArtifact", sizeof("AssertionArtifact")-1);
  case zx_sp11_StatusCode_ELEM:
    return zx_ENC_WO_sp11_StatusCode(c, (struct zx_sp11_StatusCode_s*)x, p);
  case zx_sp11_StatusMessage_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "StatusMessage", sizeof("StatusMessage")-1);
  case zx_sp11_StatusDetail_ELEM:
    return zx_ENC_WO_sp11_StatusDetail(c, (struct zx_sp11_StatusDetail_s*)x, p);
  case zx_wsse_Username_ELEM:
    return zx_ENC_WO_wsse_Username(c, (struct zx_wsse_Username_s*)x, p);
  case zx_wsu_Created_ELEM:
    return zx_ENC_WO_wsu_Created(c, (struct zx_wsu_Created_s*)x, p);
  case zx_wsu_Expires_ELEM:
    return zx_ENC_WO_wsu_Expires(c, (struct zx_wsu_Expires_s*)x, p);
  case zx_xenc_KA_Nonce_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "KA_Nonce", sizeof("KA_Nonce")-1);
  case zx_xenc_OriginatorKeyInfo_ELEM:
    return zx_ENC_WO_xenc_OriginatorKeyInfo(c, (struct zx_xenc_OriginatorKeyInfo_s*)x, p);
  case zx_xenc_RecipientKeyInfo_ELEM:
    return zx_ENC_WO_xenc_RecipientKeyInfo(c, (struct zx_xenc_RecipientKeyInfo_s*)x, p);
  case zx_xenc_CipherValue_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "CipherValue", sizeof("CipherValue")-1);
  case zx_xenc_CipherReference_ELEM:
    return zx_ENC_WO_xenc_CipherReference(c, (struct zx_xenc_CipherReference_s*)x, p);
  case zx_xenc_Transforms_ELEM:
    return zx_ENC_WO_xenc_Transforms(c, (struct zx_xenc_Transforms_s*)x, p);
  case zx_xenc_EncryptionMethod_ELEM:
    return zx_ENC_WO_xenc_EncryptionMethod(c, (struct zx_xenc_EncryptionMethod_s*)x, p);
  case zx_xenc_CipherData_ELEM:
    return zx_ENC_WO_xenc_CipherData(c, (struct zx_xenc_CipherData_s*)x, p);
  case zx_xenc_EncryptionProperties_ELEM:
    return zx_ENC_WO_xenc_EncryptionProperties(c, (struct zx_xenc_EncryptionProperties_s*)x, p);
  case zx_xenc_ReferenceList_ELEM:
    return zx_ENC_WO_xenc_ReferenceList(c, (struct zx_xenc_ReferenceList_s*)x, p);
  case zx_xenc_CarriedKeyName_ELEM:
    return zx_ENC_WO_simple_elem(c, (struct zx_elem_s*)x, p, "CarriedKeyName", sizeof("CarriedKeyName")-1);
  case zx_xenc_EncryptionProperty_ELEM:
    return zx_ENC_WO_xenc_EncryptionProperty(c, (struct zx_xenc_EncryptionProperty_s*)x, p);
  case zx_xenc_DataReference_ELEM:
    return zx_ENC_WO_xenc_DataReference(c, (struct zx_xenc_DataReference_s*)x, p);
  case zx_xenc_KeyReference_ELEM:
    return zx_ENC_WO_xenc_KeyReference(c, (struct zx_xenc_KeyReference_s*)x, p);
  case zx_sp_AuthnRequest_ELEM:
    return zx_ENC_WO_sp_AuthnRequest(c, (struct zx_sp_AuthnRequest_s*)x, p);
  case zx_se_Envelope_ELEM:
    return zx_ENC_WO_se_Envelope(c, (struct zx_se_Envelope_s*)x, p);
  case zx_ff12_Assertion_ELEM:
    return zx_ENC_WO_ff12_Assertion(c, (struct zx_ff12_Assertion_s*)x, p);
  case zx_ff12_AuthnRequestEnvelope_ELEM:
    return zx_ENC_WO_ff12_AuthnRequestEnvelope(c, (struct zx_ff12_AuthnRequestEnvelope_s*)x, p);
  case zx_ff12_AuthnResponseEnvelope_ELEM:
    return zx_ENC_WO_ff12_AuthnResponseEnvelope(c, (struct zx_ff12_AuthnResponseEnvelope_s*)x, p);
  case zx_m20_EntitiesDescriptor_ELEM:
    return zx_ENC_WO_m20_EntitiesDescriptor(c, (struct zx_m20_EntitiesDescriptor_s*)x, p);
  case zx_e_Envelope_ELEM:
    return zx_ENC_WO_e_Envelope(c, (struct zx_e_Envelope_s*)x, p);
  case zx_dise_Envelope_ELEM:
    return zx_ENC_WO_dise_Envelope(c, (struct zx_dise_Envelope_s*)x, p);

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
      p = zx_ENC_WO_any_elem(c, kid, p);
  
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

/* FUNC(zx_EASY_ENC_WO_any_elem) */

struct zx_str* zx_EASY_ENC_WO_any_elem(struct zx_ctx* c, struct zx_elem_s* x)
{
  int len = zx_LEN_WO_any_elem(c, x);
  char* buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_any_elem(c, x, buf), buf, len);
}

/* EOF -- c/zx-enc.c */
