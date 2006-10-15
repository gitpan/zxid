/* c/zx-se-aux.c - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Code generation design Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for terms and conditions
 * of use. Some aspects of code generation were driven by schema
 * descriptions that were used as input and may be subject to their own copyright.
 * Code generation uses a template, whose copyright statement follows. */

/** aux-templ.c  -  Auxiliary functions template: cloning, freeing, walking data
 ** Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing. See file COPYING.
 ** Id: aux-templ.c,v 1.8 2006/08/28 05:23:23 sampo Exp $
 **
 ** 30.5.2006, created, Sampo Kellomaki (sampo@iki.fi)
 ** 6.8.2006, factored from enc-templ.c to separate file --Sampo
 **
 ** N.B: wo=wire order (needed for exc-c14n), so=schema order
 **/

#include <memory.h>
#include "errmac.h"
#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"
#include "c/zx-se-data.h"



#ifdef EL_NAME
#undef EL_NAME
#endif
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

/* FUNC(zx_DUP_STRS_se_Body) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sp_ArtifactResolve_s* e;
      for (e = x->ArtifactResolve; e; e = (struct zx_sp_ArtifactResolve_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_ArtifactResolve(c, e);
  }
  {
      struct zx_sp_ArtifactResponse_s* e;
      for (e = x->ArtifactResponse; e; e = (struct zx_sp_ArtifactResponse_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_ArtifactResponse(c, e);
  }
  {
      struct zx_sp_ManageNameIDRequest_s* e;
      for (e = x->ManageNameIDRequest; e; e = (struct zx_sp_ManageNameIDRequest_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_ManageNameIDRequest(c, e);
  }
  {
      struct zx_sp_ManageNameIDResponse_s* e;
      for (e = x->ManageNameIDResponse; e; e = (struct zx_sp_ManageNameIDResponse_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_ManageNameIDResponse(c, e);
  }
  {
      struct zx_sp_LogoutRequest_s* e;
      for (e = x->LogoutRequest; e; e = (struct zx_sp_LogoutRequest_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_LogoutRequest(c, e);
  }
  {
      struct zx_sp_LogoutResponse_s* e;
      for (e = x->LogoutResponse; e; e = (struct zx_sp_LogoutResponse_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_LogoutResponse(c, e);
  }
  {
      struct zx_sp_NameIDMappingRequest_s* e;
      for (e = x->NameIDMappingRequest; e; e = (struct zx_sp_NameIDMappingRequest_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_NameIDMappingRequest(c, e);
  }
  {
      struct zx_sp_NameIDMappingResponse_s* e;
      for (e = x->NameIDMappingResponse; e; e = (struct zx_sp_NameIDMappingResponse_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_NameIDMappingResponse(c, e);
  }
  {
      struct zx_sp_AttributeQuery_s* e;
      for (e = x->AttributeQuery; e; e = (struct zx_sp_AttributeQuery_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_AttributeQuery(c, e);
  }
  {
      struct zx_sp_AuthnQuery_s* e;
      for (e = x->AuthnQuery; e; e = (struct zx_sp_AuthnQuery_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_AuthnQuery(c, e);
  }
  {
      struct zx_sp_AuthzDecisionQuery_s* e;
      for (e = x->AuthzDecisionQuery; e; e = (struct zx_sp_AuthzDecisionQuery_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_AuthzDecisionQuery(c, e);
  }
  {
      struct zx_sp_AssertionIDRequest_s* e;
      for (e = x->AssertionIDRequest; e; e = (struct zx_sp_AssertionIDRequest_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_AssertionIDRequest(c, e);
  }
  {
      struct zx_sp_Response_s* e;
      for (e = x->Response; e; e = (struct zx_sp_Response_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Response(c, e);
  }
  {
      struct zx_sp11_Request_s* e;
      for (e = x->Request; e; e = (struct zx_sp11_Request_s*)e->gg.g.n)
	  zx_DUP_STRS_sp11_Request(c, e);
  }
  {
      struct zx_sp11_Response_s* e;
      for (e = x->sp11_Response; e; e = (struct zx_sp11_Response_s*)e->gg.g.n)
	  zx_DUP_STRS_sp11_Response(c, e);
  }
  {
      struct zx_ff12_RegisterNameIdentifierRequest_s* e;
      for (e = x->RegisterNameIdentifierRequest; e; e = (struct zx_ff12_RegisterNameIdentifierRequest_s*)e->gg.g.n)
	  zx_DUP_STRS_ff12_RegisterNameIdentifierRequest(c, e);
  }
  {
      struct zx_ff12_RegisterNameIdentifierResponse_s* e;
      for (e = x->RegisterNameIdentifierResponse; e; e = (struct zx_ff12_RegisterNameIdentifierResponse_s*)e->gg.g.n)
	  zx_DUP_STRS_ff12_RegisterNameIdentifierResponse(c, e);
  }
  {
      struct zx_ff12_FederationTerminationNotification_s* e;
      for (e = x->FederationTerminationNotification; e; e = (struct zx_ff12_FederationTerminationNotification_s*)e->gg.g.n)
	  zx_DUP_STRS_ff12_FederationTerminationNotification(c, e);
  }
  {
      struct zx_ff12_LogoutRequest_s* e;
      for (e = x->ff12_LogoutRequest; e; e = (struct zx_ff12_LogoutRequest_s*)e->gg.g.n)
	  zx_DUP_STRS_ff12_LogoutRequest(c, e);
  }
  {
      struct zx_ff12_LogoutResponse_s* e;
      for (e = x->ff12_LogoutResponse; e; e = (struct zx_ff12_LogoutResponse_s*)e->gg.g.n)
	  zx_DUP_STRS_ff12_LogoutResponse(c, e);
  }
  {
      struct zx_ff12_NameIdentifierMappingRequest_s* e;
      for (e = x->NameIdentifierMappingRequest; e; e = (struct zx_ff12_NameIdentifierMappingRequest_s*)e->gg.g.n)
	  zx_DUP_STRS_ff12_NameIdentifierMappingRequest(c, e);
  }
  {
      struct zx_ff12_NameIdentifierMappingResponse_s* e;
      for (e = x->NameIdentifierMappingResponse; e; e = (struct zx_ff12_NameIdentifierMappingResponse_s*)e->gg.g.n)
	  zx_DUP_STRS_ff12_NameIdentifierMappingResponse(c, e);
  }
  {
      struct zx_se_Fault_s* e;
      for (e = x->Fault; e; e = (struct zx_se_Fault_s*)e->gg.g.n)
	  zx_DUP_STRS_se_Fault(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_se_Body) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_se_Body_s* zx_DEEP_CLONE_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x, int dup_strs)
{
  x = (struct zx_se_Body_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_se_Body_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sp_ArtifactResolve_s* e;
      struct zx_sp_ArtifactResolve_s* en;
      struct zx_sp_ArtifactResolve_s* enn;
      for (enn = 0, e = x->ArtifactResolve; e; e = (struct zx_sp_ArtifactResolve_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_ArtifactResolve(c, e, dup_strs);
	  if (!enn)
	      x->ArtifactResolve = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_ArtifactResponse_s* e;
      struct zx_sp_ArtifactResponse_s* en;
      struct zx_sp_ArtifactResponse_s* enn;
      for (enn = 0, e = x->ArtifactResponse; e; e = (struct zx_sp_ArtifactResponse_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_ArtifactResponse(c, e, dup_strs);
	  if (!enn)
	      x->ArtifactResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_ManageNameIDRequest_s* e;
      struct zx_sp_ManageNameIDRequest_s* en;
      struct zx_sp_ManageNameIDRequest_s* enn;
      for (enn = 0, e = x->ManageNameIDRequest; e; e = (struct zx_sp_ManageNameIDRequest_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_ManageNameIDRequest(c, e, dup_strs);
	  if (!enn)
	      x->ManageNameIDRequest = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_ManageNameIDResponse_s* e;
      struct zx_sp_ManageNameIDResponse_s* en;
      struct zx_sp_ManageNameIDResponse_s* enn;
      for (enn = 0, e = x->ManageNameIDResponse; e; e = (struct zx_sp_ManageNameIDResponse_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_ManageNameIDResponse(c, e, dup_strs);
	  if (!enn)
	      x->ManageNameIDResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_LogoutRequest_s* e;
      struct zx_sp_LogoutRequest_s* en;
      struct zx_sp_LogoutRequest_s* enn;
      for (enn = 0, e = x->LogoutRequest; e; e = (struct zx_sp_LogoutRequest_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_LogoutRequest(c, e, dup_strs);
	  if (!enn)
	      x->LogoutRequest = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_LogoutResponse_s* e;
      struct zx_sp_LogoutResponse_s* en;
      struct zx_sp_LogoutResponse_s* enn;
      for (enn = 0, e = x->LogoutResponse; e; e = (struct zx_sp_LogoutResponse_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_LogoutResponse(c, e, dup_strs);
	  if (!enn)
	      x->LogoutResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_NameIDMappingRequest_s* e;
      struct zx_sp_NameIDMappingRequest_s* en;
      struct zx_sp_NameIDMappingRequest_s* enn;
      for (enn = 0, e = x->NameIDMappingRequest; e; e = (struct zx_sp_NameIDMappingRequest_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_NameIDMappingRequest(c, e, dup_strs);
	  if (!enn)
	      x->NameIDMappingRequest = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_NameIDMappingResponse_s* e;
      struct zx_sp_NameIDMappingResponse_s* en;
      struct zx_sp_NameIDMappingResponse_s* enn;
      for (enn = 0, e = x->NameIDMappingResponse; e; e = (struct zx_sp_NameIDMappingResponse_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_NameIDMappingResponse(c, e, dup_strs);
	  if (!enn)
	      x->NameIDMappingResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_AttributeQuery_s* e;
      struct zx_sp_AttributeQuery_s* en;
      struct zx_sp_AttributeQuery_s* enn;
      for (enn = 0, e = x->AttributeQuery; e; e = (struct zx_sp_AttributeQuery_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_AttributeQuery(c, e, dup_strs);
	  if (!enn)
	      x->AttributeQuery = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_AuthnQuery_s* e;
      struct zx_sp_AuthnQuery_s* en;
      struct zx_sp_AuthnQuery_s* enn;
      for (enn = 0, e = x->AuthnQuery; e; e = (struct zx_sp_AuthnQuery_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_AuthnQuery(c, e, dup_strs);
	  if (!enn)
	      x->AuthnQuery = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_AuthzDecisionQuery_s* e;
      struct zx_sp_AuthzDecisionQuery_s* en;
      struct zx_sp_AuthzDecisionQuery_s* enn;
      for (enn = 0, e = x->AuthzDecisionQuery; e; e = (struct zx_sp_AuthzDecisionQuery_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_AuthzDecisionQuery(c, e, dup_strs);
	  if (!enn)
	      x->AuthzDecisionQuery = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_AssertionIDRequest_s* e;
      struct zx_sp_AssertionIDRequest_s* en;
      struct zx_sp_AssertionIDRequest_s* enn;
      for (enn = 0, e = x->AssertionIDRequest; e; e = (struct zx_sp_AssertionIDRequest_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_AssertionIDRequest(c, e, dup_strs);
	  if (!enn)
	      x->AssertionIDRequest = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Response_s* e;
      struct zx_sp_Response_s* en;
      struct zx_sp_Response_s* enn;
      for (enn = 0, e = x->Response; e; e = (struct zx_sp_Response_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Response(c, e, dup_strs);
	  if (!enn)
	      x->Response = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp11_Request_s* e;
      struct zx_sp11_Request_s* en;
      struct zx_sp11_Request_s* enn;
      for (enn = 0, e = x->Request; e; e = (struct zx_sp11_Request_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp11_Request(c, e, dup_strs);
	  if (!enn)
	      x->Request = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp11_Response_s* e;
      struct zx_sp11_Response_s* en;
      struct zx_sp11_Response_s* enn;
      for (enn = 0, e = x->sp11_Response; e; e = (struct zx_sp11_Response_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp11_Response(c, e, dup_strs);
	  if (!enn)
	      x->sp11_Response = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ff12_RegisterNameIdentifierRequest_s* e;
      struct zx_ff12_RegisterNameIdentifierRequest_s* en;
      struct zx_ff12_RegisterNameIdentifierRequest_s* enn;
      for (enn = 0, e = x->RegisterNameIdentifierRequest; e; e = (struct zx_ff12_RegisterNameIdentifierRequest_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ff12_RegisterNameIdentifierRequest(c, e, dup_strs);
	  if (!enn)
	      x->RegisterNameIdentifierRequest = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ff12_RegisterNameIdentifierResponse_s* e;
      struct zx_ff12_RegisterNameIdentifierResponse_s* en;
      struct zx_ff12_RegisterNameIdentifierResponse_s* enn;
      for (enn = 0, e = x->RegisterNameIdentifierResponse; e; e = (struct zx_ff12_RegisterNameIdentifierResponse_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ff12_RegisterNameIdentifierResponse(c, e, dup_strs);
	  if (!enn)
	      x->RegisterNameIdentifierResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ff12_FederationTerminationNotification_s* e;
      struct zx_ff12_FederationTerminationNotification_s* en;
      struct zx_ff12_FederationTerminationNotification_s* enn;
      for (enn = 0, e = x->FederationTerminationNotification; e; e = (struct zx_ff12_FederationTerminationNotification_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ff12_FederationTerminationNotification(c, e, dup_strs);
	  if (!enn)
	      x->FederationTerminationNotification = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ff12_LogoutRequest_s* e;
      struct zx_ff12_LogoutRequest_s* en;
      struct zx_ff12_LogoutRequest_s* enn;
      for (enn = 0, e = x->ff12_LogoutRequest; e; e = (struct zx_ff12_LogoutRequest_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ff12_LogoutRequest(c, e, dup_strs);
	  if (!enn)
	      x->ff12_LogoutRequest = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ff12_LogoutResponse_s* e;
      struct zx_ff12_LogoutResponse_s* en;
      struct zx_ff12_LogoutResponse_s* enn;
      for (enn = 0, e = x->ff12_LogoutResponse; e; e = (struct zx_ff12_LogoutResponse_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ff12_LogoutResponse(c, e, dup_strs);
	  if (!enn)
	      x->ff12_LogoutResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ff12_NameIdentifierMappingRequest_s* e;
      struct zx_ff12_NameIdentifierMappingRequest_s* en;
      struct zx_ff12_NameIdentifierMappingRequest_s* enn;
      for (enn = 0, e = x->NameIdentifierMappingRequest; e; e = (struct zx_ff12_NameIdentifierMappingRequest_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ff12_NameIdentifierMappingRequest(c, e, dup_strs);
	  if (!enn)
	      x->NameIdentifierMappingRequest = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ff12_NameIdentifierMappingResponse_s* e;
      struct zx_ff12_NameIdentifierMappingResponse_s* en;
      struct zx_ff12_NameIdentifierMappingResponse_s* enn;
      for (enn = 0, e = x->NameIdentifierMappingResponse; e; e = (struct zx_ff12_NameIdentifierMappingResponse_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ff12_NameIdentifierMappingResponse(c, e, dup_strs);
	  if (!enn)
	      x->NameIdentifierMappingResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_se_Fault_s* e;
      struct zx_se_Fault_s* en;
      struct zx_se_Fault_s* enn;
      for (enn = 0, e = x->Fault; e; e = (struct zx_se_Fault_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_se_Fault(c, e, dup_strs);
	  if (!enn)
	      x->Fault = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_se_Body) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sp_ArtifactResolve_s* e;
      struct zx_sp_ArtifactResolve_s* en;
      for (e = x->ArtifactResolve; e; e = en) {
	  en = (struct zx_sp_ArtifactResolve_s*)e->gg.g.n;
	  zx_FREE_sp_ArtifactResolve(c, e, free_strs);
      }
  }
  {
      struct zx_sp_ArtifactResponse_s* e;
      struct zx_sp_ArtifactResponse_s* en;
      for (e = x->ArtifactResponse; e; e = en) {
	  en = (struct zx_sp_ArtifactResponse_s*)e->gg.g.n;
	  zx_FREE_sp_ArtifactResponse(c, e, free_strs);
      }
  }
  {
      struct zx_sp_ManageNameIDRequest_s* e;
      struct zx_sp_ManageNameIDRequest_s* en;
      for (e = x->ManageNameIDRequest; e; e = en) {
	  en = (struct zx_sp_ManageNameIDRequest_s*)e->gg.g.n;
	  zx_FREE_sp_ManageNameIDRequest(c, e, free_strs);
      }
  }
  {
      struct zx_sp_ManageNameIDResponse_s* e;
      struct zx_sp_ManageNameIDResponse_s* en;
      for (e = x->ManageNameIDResponse; e; e = en) {
	  en = (struct zx_sp_ManageNameIDResponse_s*)e->gg.g.n;
	  zx_FREE_sp_ManageNameIDResponse(c, e, free_strs);
      }
  }
  {
      struct zx_sp_LogoutRequest_s* e;
      struct zx_sp_LogoutRequest_s* en;
      for (e = x->LogoutRequest; e; e = en) {
	  en = (struct zx_sp_LogoutRequest_s*)e->gg.g.n;
	  zx_FREE_sp_LogoutRequest(c, e, free_strs);
      }
  }
  {
      struct zx_sp_LogoutResponse_s* e;
      struct zx_sp_LogoutResponse_s* en;
      for (e = x->LogoutResponse; e; e = en) {
	  en = (struct zx_sp_LogoutResponse_s*)e->gg.g.n;
	  zx_FREE_sp_LogoutResponse(c, e, free_strs);
      }
  }
  {
      struct zx_sp_NameIDMappingRequest_s* e;
      struct zx_sp_NameIDMappingRequest_s* en;
      for (e = x->NameIDMappingRequest; e; e = en) {
	  en = (struct zx_sp_NameIDMappingRequest_s*)e->gg.g.n;
	  zx_FREE_sp_NameIDMappingRequest(c, e, free_strs);
      }
  }
  {
      struct zx_sp_NameIDMappingResponse_s* e;
      struct zx_sp_NameIDMappingResponse_s* en;
      for (e = x->NameIDMappingResponse; e; e = en) {
	  en = (struct zx_sp_NameIDMappingResponse_s*)e->gg.g.n;
	  zx_FREE_sp_NameIDMappingResponse(c, e, free_strs);
      }
  }
  {
      struct zx_sp_AttributeQuery_s* e;
      struct zx_sp_AttributeQuery_s* en;
      for (e = x->AttributeQuery; e; e = en) {
	  en = (struct zx_sp_AttributeQuery_s*)e->gg.g.n;
	  zx_FREE_sp_AttributeQuery(c, e, free_strs);
      }
  }
  {
      struct zx_sp_AuthnQuery_s* e;
      struct zx_sp_AuthnQuery_s* en;
      for (e = x->AuthnQuery; e; e = en) {
	  en = (struct zx_sp_AuthnQuery_s*)e->gg.g.n;
	  zx_FREE_sp_AuthnQuery(c, e, free_strs);
      }
  }
  {
      struct zx_sp_AuthzDecisionQuery_s* e;
      struct zx_sp_AuthzDecisionQuery_s* en;
      for (e = x->AuthzDecisionQuery; e; e = en) {
	  en = (struct zx_sp_AuthzDecisionQuery_s*)e->gg.g.n;
	  zx_FREE_sp_AuthzDecisionQuery(c, e, free_strs);
      }
  }
  {
      struct zx_sp_AssertionIDRequest_s* e;
      struct zx_sp_AssertionIDRequest_s* en;
      for (e = x->AssertionIDRequest; e; e = en) {
	  en = (struct zx_sp_AssertionIDRequest_s*)e->gg.g.n;
	  zx_FREE_sp_AssertionIDRequest(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Response_s* e;
      struct zx_sp_Response_s* en;
      for (e = x->Response; e; e = en) {
	  en = (struct zx_sp_Response_s*)e->gg.g.n;
	  zx_FREE_sp_Response(c, e, free_strs);
      }
  }
  {
      struct zx_sp11_Request_s* e;
      struct zx_sp11_Request_s* en;
      for (e = x->Request; e; e = en) {
	  en = (struct zx_sp11_Request_s*)e->gg.g.n;
	  zx_FREE_sp11_Request(c, e, free_strs);
      }
  }
  {
      struct zx_sp11_Response_s* e;
      struct zx_sp11_Response_s* en;
      for (e = x->sp11_Response; e; e = en) {
	  en = (struct zx_sp11_Response_s*)e->gg.g.n;
	  zx_FREE_sp11_Response(c, e, free_strs);
      }
  }
  {
      struct zx_ff12_RegisterNameIdentifierRequest_s* e;
      struct zx_ff12_RegisterNameIdentifierRequest_s* en;
      for (e = x->RegisterNameIdentifierRequest; e; e = en) {
	  en = (struct zx_ff12_RegisterNameIdentifierRequest_s*)e->gg.g.n;
	  zx_FREE_ff12_RegisterNameIdentifierRequest(c, e, free_strs);
      }
  }
  {
      struct zx_ff12_RegisterNameIdentifierResponse_s* e;
      struct zx_ff12_RegisterNameIdentifierResponse_s* en;
      for (e = x->RegisterNameIdentifierResponse; e; e = en) {
	  en = (struct zx_ff12_RegisterNameIdentifierResponse_s*)e->gg.g.n;
	  zx_FREE_ff12_RegisterNameIdentifierResponse(c, e, free_strs);
      }
  }
  {
      struct zx_ff12_FederationTerminationNotification_s* e;
      struct zx_ff12_FederationTerminationNotification_s* en;
      for (e = x->FederationTerminationNotification; e; e = en) {
	  en = (struct zx_ff12_FederationTerminationNotification_s*)e->gg.g.n;
	  zx_FREE_ff12_FederationTerminationNotification(c, e, free_strs);
      }
  }
  {
      struct zx_ff12_LogoutRequest_s* e;
      struct zx_ff12_LogoutRequest_s* en;
      for (e = x->ff12_LogoutRequest; e; e = en) {
	  en = (struct zx_ff12_LogoutRequest_s*)e->gg.g.n;
	  zx_FREE_ff12_LogoutRequest(c, e, free_strs);
      }
  }
  {
      struct zx_ff12_LogoutResponse_s* e;
      struct zx_ff12_LogoutResponse_s* en;
      for (e = x->ff12_LogoutResponse; e; e = en) {
	  en = (struct zx_ff12_LogoutResponse_s*)e->gg.g.n;
	  zx_FREE_ff12_LogoutResponse(c, e, free_strs);
      }
  }
  {
      struct zx_ff12_NameIdentifierMappingRequest_s* e;
      struct zx_ff12_NameIdentifierMappingRequest_s* en;
      for (e = x->NameIdentifierMappingRequest; e; e = en) {
	  en = (struct zx_ff12_NameIdentifierMappingRequest_s*)e->gg.g.n;
	  zx_FREE_ff12_NameIdentifierMappingRequest(c, e, free_strs);
      }
  }
  {
      struct zx_ff12_NameIdentifierMappingResponse_s* e;
      struct zx_ff12_NameIdentifierMappingResponse_s* en;
      for (e = x->NameIdentifierMappingResponse; e; e = en) {
	  en = (struct zx_ff12_NameIdentifierMappingResponse_s*)e->gg.g.n;
	  zx_FREE_ff12_NameIdentifierMappingResponse(c, e, free_strs);
      }
  }
  {
      struct zx_se_Fault_s* e;
      struct zx_se_Fault_s* en;
      for (e = x->Fault; e; e = en) {
	  en = (struct zx_se_Fault_s*)e->gg.g.n;
	  zx_FREE_se_Fault(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_se_Body) */

/* Trivial allocator/constructor for the datatype. */

struct zx_se_Body_s* zx_NEW_se_Body(struct zx_ctx* c)
{
  struct zx_se_Body_s* x = ZX_ZALLOC(c, struct zx_se_Body_s);
  x->gg.g.tok = zx_se_Body_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_se_Body) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sp_ArtifactResolve_s* e;
      for (e = x->ArtifactResolve; e; e = (struct zx_sp_ArtifactResolve_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_ArtifactResolve(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_ArtifactResponse_s* e;
      for (e = x->ArtifactResponse; e; e = (struct zx_sp_ArtifactResponse_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_ArtifactResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_ManageNameIDRequest_s* e;
      for (e = x->ManageNameIDRequest; e; e = (struct zx_sp_ManageNameIDRequest_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_ManageNameIDRequest(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_ManageNameIDResponse_s* e;
      for (e = x->ManageNameIDResponse; e; e = (struct zx_sp_ManageNameIDResponse_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_ManageNameIDResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_LogoutRequest_s* e;
      for (e = x->LogoutRequest; e; e = (struct zx_sp_LogoutRequest_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_LogoutRequest(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_LogoutResponse_s* e;
      for (e = x->LogoutResponse; e; e = (struct zx_sp_LogoutResponse_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_LogoutResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_NameIDMappingRequest_s* e;
      for (e = x->NameIDMappingRequest; e; e = (struct zx_sp_NameIDMappingRequest_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_NameIDMappingRequest(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_NameIDMappingResponse_s* e;
      for (e = x->NameIDMappingResponse; e; e = (struct zx_sp_NameIDMappingResponse_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_NameIDMappingResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_AttributeQuery_s* e;
      for (e = x->AttributeQuery; e; e = (struct zx_sp_AttributeQuery_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_AttributeQuery(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_AuthnQuery_s* e;
      for (e = x->AuthnQuery; e; e = (struct zx_sp_AuthnQuery_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_AuthnQuery(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_AuthzDecisionQuery_s* e;
      for (e = x->AuthzDecisionQuery; e; e = (struct zx_sp_AuthzDecisionQuery_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_AuthzDecisionQuery(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_AssertionIDRequest_s* e;
      for (e = x->AssertionIDRequest; e; e = (struct zx_sp_AssertionIDRequest_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_AssertionIDRequest(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Response_s* e;
      for (e = x->Response; e; e = (struct zx_sp_Response_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Response(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp11_Request_s* e;
      for (e = x->Request; e; e = (struct zx_sp11_Request_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp11_Request(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp11_Response_s* e;
      for (e = x->sp11_Response; e; e = (struct zx_sp11_Response_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp11_Response(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ff12_RegisterNameIdentifierRequest_s* e;
      for (e = x->RegisterNameIdentifierRequest; e; e = (struct zx_ff12_RegisterNameIdentifierRequest_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ff12_RegisterNameIdentifierRequest(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ff12_RegisterNameIdentifierResponse_s* e;
      for (e = x->RegisterNameIdentifierResponse; e; e = (struct zx_ff12_RegisterNameIdentifierResponse_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ff12_RegisterNameIdentifierResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ff12_FederationTerminationNotification_s* e;
      for (e = x->FederationTerminationNotification; e; e = (struct zx_ff12_FederationTerminationNotification_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ff12_FederationTerminationNotification(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ff12_LogoutRequest_s* e;
      for (e = x->ff12_LogoutRequest; e; e = (struct zx_ff12_LogoutRequest_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ff12_LogoutRequest(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ff12_LogoutResponse_s* e;
      for (e = x->ff12_LogoutResponse; e; e = (struct zx_ff12_LogoutResponse_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ff12_LogoutResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ff12_NameIdentifierMappingRequest_s* e;
      for (e = x->NameIdentifierMappingRequest; e; e = (struct zx_ff12_NameIdentifierMappingRequest_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ff12_NameIdentifierMappingRequest(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ff12_NameIdentifierMappingResponse_s* e;
      for (e = x->NameIdentifierMappingResponse; e; e = (struct zx_ff12_NameIdentifierMappingResponse_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ff12_NameIdentifierMappingResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_se_Fault_s* e;
      for (e = x->Fault; e; e = (struct zx_se_Fault_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_se_Fault(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_se_Body) */

int zx_WALK_WO_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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

/* FUNC(zx_DUP_STRS_se_Envelope) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_se_Header_s* e;
      for (e = x->Header; e; e = (struct zx_se_Header_s*)e->gg.g.n)
	  zx_DUP_STRS_se_Header(c, e);
  }
  {
      struct zx_se_Body_s* e;
      for (e = x->Body; e; e = (struct zx_se_Body_s*)e->gg.g.n)
	  zx_DUP_STRS_se_Body(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_se_Envelope) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_se_Envelope_s* zx_DEEP_CLONE_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x, int dup_strs)
{
  x = (struct zx_se_Envelope_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_se_Envelope_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_se_Header_s* e;
      struct zx_se_Header_s* en;
      struct zx_se_Header_s* enn;
      for (enn = 0, e = x->Header; e; e = (struct zx_se_Header_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_se_Header(c, e, dup_strs);
	  if (!enn)
	      x->Header = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_se_Body_s* e;
      struct zx_se_Body_s* en;
      struct zx_se_Body_s* enn;
      for (enn = 0, e = x->Body; e; e = (struct zx_se_Body_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_se_Body(c, e, dup_strs);
	  if (!enn)
	      x->Body = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_se_Envelope) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_se_Header_s* e;
      struct zx_se_Header_s* en;
      for (e = x->Header; e; e = en) {
	  en = (struct zx_se_Header_s*)e->gg.g.n;
	  zx_FREE_se_Header(c, e, free_strs);
      }
  }
  {
      struct zx_se_Body_s* e;
      struct zx_se_Body_s* en;
      for (e = x->Body; e; e = en) {
	  en = (struct zx_se_Body_s*)e->gg.g.n;
	  zx_FREE_se_Body(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_se_Envelope) */

/* Trivial allocator/constructor for the datatype. */

struct zx_se_Envelope_s* zx_NEW_se_Envelope(struct zx_ctx* c)
{
  struct zx_se_Envelope_s* x = ZX_ZALLOC(c, struct zx_se_Envelope_s);
  x->gg.g.tok = zx_se_Envelope_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_se_Envelope) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_se_Header_s* e;
      for (e = x->Header; e; e = (struct zx_se_Header_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_se_Header(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_se_Body_s* e;
      for (e = x->Body; e; e = (struct zx_se_Body_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_se_Body(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_se_Envelope) */

int zx_WALK_WO_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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

/* FUNC(zx_DUP_STRS_se_Fault) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->faultcode);
  zx_dup_strs_simple_elems(c, x->faultstring);
  zx_dup_strs_simple_elems(c, x->faultactor);
  {
      struct zx_se_detail_s* e;
      for (e = x->detail; e; e = (struct zx_se_detail_s*)e->gg.g.n)
	  zx_DUP_STRS_se_detail(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_se_Fault) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_se_Fault_s* zx_DEEP_CLONE_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x, int dup_strs)
{
  x = (struct zx_se_Fault_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_se_Fault_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->faultcode = zx_deep_clone_simple_elems(c,x->faultcode, dup_strs);
  x->faultstring = zx_deep_clone_simple_elems(c,x->faultstring, dup_strs);
  x->faultactor = zx_deep_clone_simple_elems(c,x->faultactor, dup_strs);
  {
      struct zx_se_detail_s* e;
      struct zx_se_detail_s* en;
      struct zx_se_detail_s* enn;
      for (enn = 0, e = x->detail; e; e = (struct zx_se_detail_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_se_detail(c, e, dup_strs);
	  if (!enn)
	      x->detail = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_se_Fault) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->faultcode, free_strs);
  zx_free_simple_elems(c, x->faultstring, free_strs);
  zx_free_simple_elems(c, x->faultactor, free_strs);
  {
      struct zx_se_detail_s* e;
      struct zx_se_detail_s* en;
      for (e = x->detail; e; e = en) {
	  en = (struct zx_se_detail_s*)e->gg.g.n;
	  zx_FREE_se_detail(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_se_Fault) */

/* Trivial allocator/constructor for the datatype. */

struct zx_se_Fault_s* zx_NEW_se_Fault(struct zx_ctx* c)
{
  struct zx_se_Fault_s* x = ZX_ZALLOC(c, struct zx_se_Fault_s);
  x->gg.g.tok = zx_se_Fault_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_se_Fault) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->faultcode, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->faultstring, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->faultactor, ctx, callback);
  if (ret)
    return ret;
  {
      struct zx_se_detail_s* e;
      for (e = x->detail; e; e = (struct zx_se_detail_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_se_detail(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_se_Fault) */

int zx_WALK_WO_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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

/* FUNC(zx_DUP_STRS_se_Header) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zx_DEEP_CLONE_se_Header) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_se_Header_s* zx_DEEP_CLONE_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x, int dup_strs)
{
  x = (struct zx_se_Header_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_se_Header_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zx_FREE_se_Header) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_se_Header) */

/* Trivial allocator/constructor for the datatype. */

struct zx_se_Header_s* zx_NEW_se_Header(struct zx_ctx* c)
{
  struct zx_se_Header_s* x = ZX_ZALLOC(c, struct zx_se_Header_s);
  x->gg.g.tok = zx_se_Header_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_se_Header) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;


  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_se_Header) */

int zx_WALK_WO_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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

/* FUNC(zx_DUP_STRS_se_detail) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zx_DEEP_CLONE_se_detail) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_se_detail_s* zx_DEEP_CLONE_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x, int dup_strs)
{
  x = (struct zx_se_detail_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_se_detail_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zx_FREE_se_detail) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_se_detail) */

/* Trivial allocator/constructor for the datatype. */

struct zx_se_detail_s* zx_NEW_se_detail(struct zx_ctx* c)
{
  struct zx_se_detail_s* x = ZX_ZALLOC(c, struct zx_se_detail_s);
  x->gg.g.tok = zx_se_detail_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_se_detail) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;


  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_se_detail) */

int zx_WALK_WO_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}


/* EOF -- c/zx-se-aux.c */
