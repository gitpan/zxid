/* c/zx-se-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_se_data_h
#define _c_zx_se_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- se_Body -------------------------- */
/* refby( zx_se_Envelope_s ) */
#ifndef zx_se_Body_EXT
#define zx_se_Body_EXT
#endif

struct zx_se_Body_s* zx_DEC_se_Body(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_se_Body_s* zx_NEW_se_Body(struct zx_ctx* c);
struct zx_se_Body_s* zx_DEEP_CLONE_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x, int dup_strs);
void zx_DUP_STRS_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x);
void zx_FREE_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x, int free_strs);
int zx_WALK_SO_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_SO_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x);
int zx_LEN_WO_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x);
char* zx_ENC_SO_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x, char* p);
char* zx_ENC_WO_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x);
struct zx_str* zx_EASY_ENC_WO_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x);

struct zx_se_Body_s {
  ZX_ELEM_EXT
  zx_se_Body_EXT
  struct zx_sp_ArtifactResolve_s* ArtifactResolve;	/* {0,1} nada */
  struct zx_sp_ArtifactResponse_s* ArtifactResponse;	/* {0,1} nada */
  struct zx_sp_ManageNameIDRequest_s* ManageNameIDRequest;	/* {0,1} nada */
  struct zx_sp_ManageNameIDResponse_s* ManageNameIDResponse;	/* {0,1} nada */
  struct zx_sp_LogoutRequest_s* LogoutRequest;	/* {0,1} nada */
  struct zx_sp_LogoutResponse_s* LogoutResponse;	/* {0,1} nada */
  struct zx_sp_NameIDMappingRequest_s* NameIDMappingRequest;	/* {0,1} nada */
  struct zx_sp_NameIDMappingResponse_s* NameIDMappingResponse;	/* {0,1} nada */
  struct zx_sp_AttributeQuery_s* AttributeQuery;	/* {0,1} nada */
  struct zx_sp_AuthnQuery_s* AuthnQuery;	/* {0,1} nada */
  struct zx_sp_AuthzDecisionQuery_s* AuthzDecisionQuery;	/* {0,1} nada */
  struct zx_sp_AssertionIDRequest_s* AssertionIDRequest;	/* {0,1} nada */
  struct zx_sp_Response_s* Response;	/* {0,1} nada */
  struct zx_sp11_Request_s* Request;	/* {0,1} nada */
  struct zx_sp11_Response_s* sp11_Response;	/* {0,1} nada */
  struct zx_ff12_RegisterNameIdentifierRequest_s* RegisterNameIdentifierRequest;	/* {0,1} nada */
  struct zx_ff12_RegisterNameIdentifierResponse_s* RegisterNameIdentifierResponse;	/* {0,1} nada */
  struct zx_ff12_FederationTerminationNotification_s* FederationTerminationNotification;	/* {0,1} nada */
  struct zx_ff12_LogoutRequest_s* ff12_LogoutRequest;	/* {0,1} nada */
  struct zx_ff12_LogoutResponse_s* ff12_LogoutResponse;	/* {0,1} nada */
  struct zx_ff12_NameIdentifierMappingRequest_s* NameIdentifierMappingRequest;	/* {0,1} nada */
  struct zx_ff12_NameIdentifierMappingResponse_s* NameIdentifierMappingResponse;	/* {0,1} nada */
  struct zx_se_Fault_s* Fault;	/* {0,1} nada */
};

struct zx_sp_ArtifactResolve_s* zx_se_Body_GET_ArtifactResolve(struct zx_se_Body_s* x, int n);
struct zx_sp_ArtifactResponse_s* zx_se_Body_GET_ArtifactResponse(struct zx_se_Body_s* x, int n);
struct zx_sp_ManageNameIDRequest_s* zx_se_Body_GET_ManageNameIDRequest(struct zx_se_Body_s* x, int n);
struct zx_sp_ManageNameIDResponse_s* zx_se_Body_GET_ManageNameIDResponse(struct zx_se_Body_s* x, int n);
struct zx_sp_LogoutRequest_s* zx_se_Body_GET_LogoutRequest(struct zx_se_Body_s* x, int n);
struct zx_sp_LogoutResponse_s* zx_se_Body_GET_LogoutResponse(struct zx_se_Body_s* x, int n);
struct zx_sp_NameIDMappingRequest_s* zx_se_Body_GET_NameIDMappingRequest(struct zx_se_Body_s* x, int n);
struct zx_sp_NameIDMappingResponse_s* zx_se_Body_GET_NameIDMappingResponse(struct zx_se_Body_s* x, int n);
struct zx_sp_AttributeQuery_s* zx_se_Body_GET_AttributeQuery(struct zx_se_Body_s* x, int n);
struct zx_sp_AuthnQuery_s* zx_se_Body_GET_AuthnQuery(struct zx_se_Body_s* x, int n);
struct zx_sp_AuthzDecisionQuery_s* zx_se_Body_GET_AuthzDecisionQuery(struct zx_se_Body_s* x, int n);
struct zx_sp_AssertionIDRequest_s* zx_se_Body_GET_AssertionIDRequest(struct zx_se_Body_s* x, int n);
struct zx_sp_Response_s* zx_se_Body_GET_Response(struct zx_se_Body_s* x, int n);
struct zx_sp11_Request_s* zx_se_Body_GET_Request(struct zx_se_Body_s* x, int n);
struct zx_sp11_Response_s* zx_se_Body_GET_sp11_Response(struct zx_se_Body_s* x, int n);
struct zx_ff12_RegisterNameIdentifierRequest_s* zx_se_Body_GET_RegisterNameIdentifierRequest(struct zx_se_Body_s* x, int n);
struct zx_ff12_RegisterNameIdentifierResponse_s* zx_se_Body_GET_RegisterNameIdentifierResponse(struct zx_se_Body_s* x, int n);
struct zx_ff12_FederationTerminationNotification_s* zx_se_Body_GET_FederationTerminationNotification(struct zx_se_Body_s* x, int n);
struct zx_ff12_LogoutRequest_s* zx_se_Body_GET_ff12_LogoutRequest(struct zx_se_Body_s* x, int n);
struct zx_ff12_LogoutResponse_s* zx_se_Body_GET_ff12_LogoutResponse(struct zx_se_Body_s* x, int n);
struct zx_ff12_NameIdentifierMappingRequest_s* zx_se_Body_GET_NameIdentifierMappingRequest(struct zx_se_Body_s* x, int n);
struct zx_ff12_NameIdentifierMappingResponse_s* zx_se_Body_GET_NameIdentifierMappingResponse(struct zx_se_Body_s* x, int n);
struct zx_se_Fault_s* zx_se_Body_GET_Fault(struct zx_se_Body_s* x, int n);
int zx_se_Body_NUM_ArtifactResolve(struct zx_se_Body_s* x);
int zx_se_Body_NUM_ArtifactResponse(struct zx_se_Body_s* x);
int zx_se_Body_NUM_ManageNameIDRequest(struct zx_se_Body_s* x);
int zx_se_Body_NUM_ManageNameIDResponse(struct zx_se_Body_s* x);
int zx_se_Body_NUM_LogoutRequest(struct zx_se_Body_s* x);
int zx_se_Body_NUM_LogoutResponse(struct zx_se_Body_s* x);
int zx_se_Body_NUM_NameIDMappingRequest(struct zx_se_Body_s* x);
int zx_se_Body_NUM_NameIDMappingResponse(struct zx_se_Body_s* x);
int zx_se_Body_NUM_AttributeQuery(struct zx_se_Body_s* x);
int zx_se_Body_NUM_AuthnQuery(struct zx_se_Body_s* x);
int zx_se_Body_NUM_AuthzDecisionQuery(struct zx_se_Body_s* x);
int zx_se_Body_NUM_AssertionIDRequest(struct zx_se_Body_s* x);
int zx_se_Body_NUM_Response(struct zx_se_Body_s* x);
int zx_se_Body_NUM_Request(struct zx_se_Body_s* x);
int zx_se_Body_NUM_sp11_Response(struct zx_se_Body_s* x);
int zx_se_Body_NUM_RegisterNameIdentifierRequest(struct zx_se_Body_s* x);
int zx_se_Body_NUM_RegisterNameIdentifierResponse(struct zx_se_Body_s* x);
int zx_se_Body_NUM_FederationTerminationNotification(struct zx_se_Body_s* x);
int zx_se_Body_NUM_ff12_LogoutRequest(struct zx_se_Body_s* x);
int zx_se_Body_NUM_ff12_LogoutResponse(struct zx_se_Body_s* x);
int zx_se_Body_NUM_NameIdentifierMappingRequest(struct zx_se_Body_s* x);
int zx_se_Body_NUM_NameIdentifierMappingResponse(struct zx_se_Body_s* x);
int zx_se_Body_NUM_Fault(struct zx_se_Body_s* x);
struct zx_sp_ArtifactResolve_s* zx_se_Body_POP_ArtifactResolve(struct zx_se_Body_s* x);
struct zx_sp_ArtifactResponse_s* zx_se_Body_POP_ArtifactResponse(struct zx_se_Body_s* x);
struct zx_sp_ManageNameIDRequest_s* zx_se_Body_POP_ManageNameIDRequest(struct zx_se_Body_s* x);
struct zx_sp_ManageNameIDResponse_s* zx_se_Body_POP_ManageNameIDResponse(struct zx_se_Body_s* x);
struct zx_sp_LogoutRequest_s* zx_se_Body_POP_LogoutRequest(struct zx_se_Body_s* x);
struct zx_sp_LogoutResponse_s* zx_se_Body_POP_LogoutResponse(struct zx_se_Body_s* x);
struct zx_sp_NameIDMappingRequest_s* zx_se_Body_POP_NameIDMappingRequest(struct zx_se_Body_s* x);
struct zx_sp_NameIDMappingResponse_s* zx_se_Body_POP_NameIDMappingResponse(struct zx_se_Body_s* x);
struct zx_sp_AttributeQuery_s* zx_se_Body_POP_AttributeQuery(struct zx_se_Body_s* x);
struct zx_sp_AuthnQuery_s* zx_se_Body_POP_AuthnQuery(struct zx_se_Body_s* x);
struct zx_sp_AuthzDecisionQuery_s* zx_se_Body_POP_AuthzDecisionQuery(struct zx_se_Body_s* x);
struct zx_sp_AssertionIDRequest_s* zx_se_Body_POP_AssertionIDRequest(struct zx_se_Body_s* x);
struct zx_sp_Response_s* zx_se_Body_POP_Response(struct zx_se_Body_s* x);
struct zx_sp11_Request_s* zx_se_Body_POP_Request(struct zx_se_Body_s* x);
struct zx_sp11_Response_s* zx_se_Body_POP_sp11_Response(struct zx_se_Body_s* x);
struct zx_ff12_RegisterNameIdentifierRequest_s* zx_se_Body_POP_RegisterNameIdentifierRequest(struct zx_se_Body_s* x);
struct zx_ff12_RegisterNameIdentifierResponse_s* zx_se_Body_POP_RegisterNameIdentifierResponse(struct zx_se_Body_s* x);
struct zx_ff12_FederationTerminationNotification_s* zx_se_Body_POP_FederationTerminationNotification(struct zx_se_Body_s* x);
struct zx_ff12_LogoutRequest_s* zx_se_Body_POP_ff12_LogoutRequest(struct zx_se_Body_s* x);
struct zx_ff12_LogoutResponse_s* zx_se_Body_POP_ff12_LogoutResponse(struct zx_se_Body_s* x);
struct zx_ff12_NameIdentifierMappingRequest_s* zx_se_Body_POP_NameIdentifierMappingRequest(struct zx_se_Body_s* x);
struct zx_ff12_NameIdentifierMappingResponse_s* zx_se_Body_POP_NameIdentifierMappingResponse(struct zx_se_Body_s* x);
struct zx_se_Fault_s* zx_se_Body_POP_Fault(struct zx_se_Body_s* x);
void zx_se_Body_PUSH_ArtifactResolve(struct zx_se_Body_s* x, struct zx_sp_ArtifactResolve_s* y);
void zx_se_Body_PUSH_ArtifactResponse(struct zx_se_Body_s* x, struct zx_sp_ArtifactResponse_s* y);
void zx_se_Body_PUSH_ManageNameIDRequest(struct zx_se_Body_s* x, struct zx_sp_ManageNameIDRequest_s* y);
void zx_se_Body_PUSH_ManageNameIDResponse(struct zx_se_Body_s* x, struct zx_sp_ManageNameIDResponse_s* y);
void zx_se_Body_PUSH_LogoutRequest(struct zx_se_Body_s* x, struct zx_sp_LogoutRequest_s* y);
void zx_se_Body_PUSH_LogoutResponse(struct zx_se_Body_s* x, struct zx_sp_LogoutResponse_s* y);
void zx_se_Body_PUSH_NameIDMappingRequest(struct zx_se_Body_s* x, struct zx_sp_NameIDMappingRequest_s* y);
void zx_se_Body_PUSH_NameIDMappingResponse(struct zx_se_Body_s* x, struct zx_sp_NameIDMappingResponse_s* y);
void zx_se_Body_PUSH_AttributeQuery(struct zx_se_Body_s* x, struct zx_sp_AttributeQuery_s* y);
void zx_se_Body_PUSH_AuthnQuery(struct zx_se_Body_s* x, struct zx_sp_AuthnQuery_s* y);
void zx_se_Body_PUSH_AuthzDecisionQuery(struct zx_se_Body_s* x, struct zx_sp_AuthzDecisionQuery_s* y);
void zx_se_Body_PUSH_AssertionIDRequest(struct zx_se_Body_s* x, struct zx_sp_AssertionIDRequest_s* y);
void zx_se_Body_PUSH_Response(struct zx_se_Body_s* x, struct zx_sp_Response_s* y);
void zx_se_Body_PUSH_Request(struct zx_se_Body_s* x, struct zx_sp11_Request_s* y);
void zx_se_Body_PUSH_sp11_Response(struct zx_se_Body_s* x, struct zx_sp11_Response_s* y);
void zx_se_Body_PUSH_RegisterNameIdentifierRequest(struct zx_se_Body_s* x, struct zx_ff12_RegisterNameIdentifierRequest_s* y);
void zx_se_Body_PUSH_RegisterNameIdentifierResponse(struct zx_se_Body_s* x, struct zx_ff12_RegisterNameIdentifierResponse_s* y);
void zx_se_Body_PUSH_FederationTerminationNotification(struct zx_se_Body_s* x, struct zx_ff12_FederationTerminationNotification_s* y);
void zx_se_Body_PUSH_ff12_LogoutRequest(struct zx_se_Body_s* x, struct zx_ff12_LogoutRequest_s* y);
void zx_se_Body_PUSH_ff12_LogoutResponse(struct zx_se_Body_s* x, struct zx_ff12_LogoutResponse_s* y);
void zx_se_Body_PUSH_NameIdentifierMappingRequest(struct zx_se_Body_s* x, struct zx_ff12_NameIdentifierMappingRequest_s* y);
void zx_se_Body_PUSH_NameIdentifierMappingResponse(struct zx_se_Body_s* x, struct zx_ff12_NameIdentifierMappingResponse_s* y);
void zx_se_Body_PUSH_Fault(struct zx_se_Body_s* x, struct zx_se_Fault_s* y);
void zx_se_Body_PUT_ArtifactResolve(struct zx_se_Body_s* x, int n, struct zx_sp_ArtifactResolve_s* y);
void zx_se_Body_PUT_ArtifactResponse(struct zx_se_Body_s* x, int n, struct zx_sp_ArtifactResponse_s* y);
void zx_se_Body_PUT_ManageNameIDRequest(struct zx_se_Body_s* x, int n, struct zx_sp_ManageNameIDRequest_s* y);
void zx_se_Body_PUT_ManageNameIDResponse(struct zx_se_Body_s* x, int n, struct zx_sp_ManageNameIDResponse_s* y);
void zx_se_Body_PUT_LogoutRequest(struct zx_se_Body_s* x, int n, struct zx_sp_LogoutRequest_s* y);
void zx_se_Body_PUT_LogoutResponse(struct zx_se_Body_s* x, int n, struct zx_sp_LogoutResponse_s* y);
void zx_se_Body_PUT_NameIDMappingRequest(struct zx_se_Body_s* x, int n, struct zx_sp_NameIDMappingRequest_s* y);
void zx_se_Body_PUT_NameIDMappingResponse(struct zx_se_Body_s* x, int n, struct zx_sp_NameIDMappingResponse_s* y);
void zx_se_Body_PUT_AttributeQuery(struct zx_se_Body_s* x, int n, struct zx_sp_AttributeQuery_s* y);
void zx_se_Body_PUT_AuthnQuery(struct zx_se_Body_s* x, int n, struct zx_sp_AuthnQuery_s* y);
void zx_se_Body_PUT_AuthzDecisionQuery(struct zx_se_Body_s* x, int n, struct zx_sp_AuthzDecisionQuery_s* y);
void zx_se_Body_PUT_AssertionIDRequest(struct zx_se_Body_s* x, int n, struct zx_sp_AssertionIDRequest_s* y);
void zx_se_Body_PUT_Response(struct zx_se_Body_s* x, int n, struct zx_sp_Response_s* y);
void zx_se_Body_PUT_Request(struct zx_se_Body_s* x, int n, struct zx_sp11_Request_s* y);
void zx_se_Body_PUT_sp11_Response(struct zx_se_Body_s* x, int n, struct zx_sp11_Response_s* y);
void zx_se_Body_PUT_RegisterNameIdentifierRequest(struct zx_se_Body_s* x, int n, struct zx_ff12_RegisterNameIdentifierRequest_s* y);
void zx_se_Body_PUT_RegisterNameIdentifierResponse(struct zx_se_Body_s* x, int n, struct zx_ff12_RegisterNameIdentifierResponse_s* y);
void zx_se_Body_PUT_FederationTerminationNotification(struct zx_se_Body_s* x, int n, struct zx_ff12_FederationTerminationNotification_s* y);
void zx_se_Body_PUT_ff12_LogoutRequest(struct zx_se_Body_s* x, int n, struct zx_ff12_LogoutRequest_s* y);
void zx_se_Body_PUT_ff12_LogoutResponse(struct zx_se_Body_s* x, int n, struct zx_ff12_LogoutResponse_s* y);
void zx_se_Body_PUT_NameIdentifierMappingRequest(struct zx_se_Body_s* x, int n, struct zx_ff12_NameIdentifierMappingRequest_s* y);
void zx_se_Body_PUT_NameIdentifierMappingResponse(struct zx_se_Body_s* x, int n, struct zx_ff12_NameIdentifierMappingResponse_s* y);
void zx_se_Body_PUT_Fault(struct zx_se_Body_s* x, int n, struct zx_se_Fault_s* y);
void zx_se_Body_ADD_ArtifactResolve(struct zx_se_Body_s* x, int n, struct zx_sp_ArtifactResolve_s* z);
void zx_se_Body_ADD_ArtifactResponse(struct zx_se_Body_s* x, int n, struct zx_sp_ArtifactResponse_s* z);
void zx_se_Body_ADD_ManageNameIDRequest(struct zx_se_Body_s* x, int n, struct zx_sp_ManageNameIDRequest_s* z);
void zx_se_Body_ADD_ManageNameIDResponse(struct zx_se_Body_s* x, int n, struct zx_sp_ManageNameIDResponse_s* z);
void zx_se_Body_ADD_LogoutRequest(struct zx_se_Body_s* x, int n, struct zx_sp_LogoutRequest_s* z);
void zx_se_Body_ADD_LogoutResponse(struct zx_se_Body_s* x, int n, struct zx_sp_LogoutResponse_s* z);
void zx_se_Body_ADD_NameIDMappingRequest(struct zx_se_Body_s* x, int n, struct zx_sp_NameIDMappingRequest_s* z);
void zx_se_Body_ADD_NameIDMappingResponse(struct zx_se_Body_s* x, int n, struct zx_sp_NameIDMappingResponse_s* z);
void zx_se_Body_ADD_AttributeQuery(struct zx_se_Body_s* x, int n, struct zx_sp_AttributeQuery_s* z);
void zx_se_Body_ADD_AuthnQuery(struct zx_se_Body_s* x, int n, struct zx_sp_AuthnQuery_s* z);
void zx_se_Body_ADD_AuthzDecisionQuery(struct zx_se_Body_s* x, int n, struct zx_sp_AuthzDecisionQuery_s* z);
void zx_se_Body_ADD_AssertionIDRequest(struct zx_se_Body_s* x, int n, struct zx_sp_AssertionIDRequest_s* z);
void zx_se_Body_ADD_Response(struct zx_se_Body_s* x, int n, struct zx_sp_Response_s* z);
void zx_se_Body_ADD_Request(struct zx_se_Body_s* x, int n, struct zx_sp11_Request_s* z);
void zx_se_Body_ADD_sp11_Response(struct zx_se_Body_s* x, int n, struct zx_sp11_Response_s* z);
void zx_se_Body_ADD_RegisterNameIdentifierRequest(struct zx_se_Body_s* x, int n, struct zx_ff12_RegisterNameIdentifierRequest_s* z);
void zx_se_Body_ADD_RegisterNameIdentifierResponse(struct zx_se_Body_s* x, int n, struct zx_ff12_RegisterNameIdentifierResponse_s* z);
void zx_se_Body_ADD_FederationTerminationNotification(struct zx_se_Body_s* x, int n, struct zx_ff12_FederationTerminationNotification_s* z);
void zx_se_Body_ADD_ff12_LogoutRequest(struct zx_se_Body_s* x, int n, struct zx_ff12_LogoutRequest_s* z);
void zx_se_Body_ADD_ff12_LogoutResponse(struct zx_se_Body_s* x, int n, struct zx_ff12_LogoutResponse_s* z);
void zx_se_Body_ADD_NameIdentifierMappingRequest(struct zx_se_Body_s* x, int n, struct zx_ff12_NameIdentifierMappingRequest_s* z);
void zx_se_Body_ADD_NameIdentifierMappingResponse(struct zx_se_Body_s* x, int n, struct zx_ff12_NameIdentifierMappingResponse_s* z);
void zx_se_Body_ADD_Fault(struct zx_se_Body_s* x, int n, struct zx_se_Fault_s* z);
void zx_se_Body_DEL_ArtifactResolve(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_ArtifactResponse(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_ManageNameIDRequest(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_ManageNameIDResponse(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_LogoutRequest(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_LogoutResponse(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_NameIDMappingRequest(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_NameIDMappingResponse(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_AttributeQuery(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_AuthnQuery(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_AuthzDecisionQuery(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_AssertionIDRequest(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_Response(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_Request(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_sp11_Response(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_RegisterNameIdentifierRequest(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_RegisterNameIdentifierResponse(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_FederationTerminationNotification(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_ff12_LogoutRequest(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_ff12_LogoutResponse(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_NameIdentifierMappingRequest(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_NameIdentifierMappingResponse(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_Fault(struct zx_se_Body_s* x, int n);
void zx_se_Body_REV_ArtifactResolve(struct zx_se_Body_s* x);
void zx_se_Body_REV_ArtifactResponse(struct zx_se_Body_s* x);
void zx_se_Body_REV_ManageNameIDRequest(struct zx_se_Body_s* x);
void zx_se_Body_REV_ManageNameIDResponse(struct zx_se_Body_s* x);
void zx_se_Body_REV_LogoutRequest(struct zx_se_Body_s* x);
void zx_se_Body_REV_LogoutResponse(struct zx_se_Body_s* x);
void zx_se_Body_REV_NameIDMappingRequest(struct zx_se_Body_s* x);
void zx_se_Body_REV_NameIDMappingResponse(struct zx_se_Body_s* x);
void zx_se_Body_REV_AttributeQuery(struct zx_se_Body_s* x);
void zx_se_Body_REV_AuthnQuery(struct zx_se_Body_s* x);
void zx_se_Body_REV_AuthzDecisionQuery(struct zx_se_Body_s* x);
void zx_se_Body_REV_AssertionIDRequest(struct zx_se_Body_s* x);
void zx_se_Body_REV_Response(struct zx_se_Body_s* x);
void zx_se_Body_REV_Request(struct zx_se_Body_s* x);
void zx_se_Body_REV_sp11_Response(struct zx_se_Body_s* x);
void zx_se_Body_REV_RegisterNameIdentifierRequest(struct zx_se_Body_s* x);
void zx_se_Body_REV_RegisterNameIdentifierResponse(struct zx_se_Body_s* x);
void zx_se_Body_REV_FederationTerminationNotification(struct zx_se_Body_s* x);
void zx_se_Body_REV_ff12_LogoutRequest(struct zx_se_Body_s* x);
void zx_se_Body_REV_ff12_LogoutResponse(struct zx_se_Body_s* x);
void zx_se_Body_REV_NameIdentifierMappingRequest(struct zx_se_Body_s* x);
void zx_se_Body_REV_NameIdentifierMappingResponse(struct zx_se_Body_s* x);
void zx_se_Body_REV_Fault(struct zx_se_Body_s* x);

/* -------------------------- se_Envelope -------------------------- */
/* refby( ) */
#ifndef zx_se_Envelope_EXT
#define zx_se_Envelope_EXT
#endif

struct zx_se_Envelope_s* zx_DEC_se_Envelope(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_se_Envelope_s* zx_NEW_se_Envelope(struct zx_ctx* c);
struct zx_se_Envelope_s* zx_DEEP_CLONE_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x, int dup_strs);
void zx_DUP_STRS_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x);
void zx_FREE_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x, int free_strs);
int zx_WALK_SO_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_SO_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x);
int zx_LEN_WO_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x);
char* zx_ENC_SO_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x, char* p);
char* zx_ENC_WO_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x);
struct zx_str* zx_EASY_ENC_WO_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x);

struct zx_se_Envelope_s {
  ZX_ELEM_EXT
  zx_se_Envelope_EXT
  struct zx_se_Header_s* Header;	/* {0,1} nada */
  struct zx_se_Body_s* Body;	/* {1,1} nada */
};

struct zx_se_Header_s* zx_se_Envelope_GET_Header(struct zx_se_Envelope_s* x, int n);
struct zx_se_Body_s* zx_se_Envelope_GET_Body(struct zx_se_Envelope_s* x, int n);
int zx_se_Envelope_NUM_Header(struct zx_se_Envelope_s* x);
int zx_se_Envelope_NUM_Body(struct zx_se_Envelope_s* x);
struct zx_se_Header_s* zx_se_Envelope_POP_Header(struct zx_se_Envelope_s* x);
struct zx_se_Body_s* zx_se_Envelope_POP_Body(struct zx_se_Envelope_s* x);
void zx_se_Envelope_PUSH_Header(struct zx_se_Envelope_s* x, struct zx_se_Header_s* y);
void zx_se_Envelope_PUSH_Body(struct zx_se_Envelope_s* x, struct zx_se_Body_s* y);
void zx_se_Envelope_PUT_Header(struct zx_se_Envelope_s* x, int n, struct zx_se_Header_s* y);
void zx_se_Envelope_PUT_Body(struct zx_se_Envelope_s* x, int n, struct zx_se_Body_s* y);
void zx_se_Envelope_ADD_Header(struct zx_se_Envelope_s* x, int n, struct zx_se_Header_s* z);
void zx_se_Envelope_ADD_Body(struct zx_se_Envelope_s* x, int n, struct zx_se_Body_s* z);
void zx_se_Envelope_DEL_Header(struct zx_se_Envelope_s* x, int n);
void zx_se_Envelope_DEL_Body(struct zx_se_Envelope_s* x, int n);
void zx_se_Envelope_REV_Header(struct zx_se_Envelope_s* x);
void zx_se_Envelope_REV_Body(struct zx_se_Envelope_s* x);

/* -------------------------- se_Fault -------------------------- */
/* refby( zx_se_Body_s ) */
#ifndef zx_se_Fault_EXT
#define zx_se_Fault_EXT
#endif

struct zx_se_Fault_s* zx_DEC_se_Fault(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_se_Fault_s* zx_NEW_se_Fault(struct zx_ctx* c);
struct zx_se_Fault_s* zx_DEEP_CLONE_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x, int dup_strs);
void zx_DUP_STRS_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x);
void zx_FREE_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x, int free_strs);
int zx_WALK_SO_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_SO_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x);
int zx_LEN_WO_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x);
char* zx_ENC_SO_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x, char* p);
char* zx_ENC_WO_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x);
struct zx_str* zx_EASY_ENC_WO_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x);

struct zx_se_Fault_s {
  ZX_ELEM_EXT
  zx_se_Fault_EXT
  struct zx_elem_s* faultcode;	/* {1,1} xs:QName */
  struct zx_elem_s* faultstring;	/* {1,1} xs:string */
  struct zx_elem_s* faultactor;	/* {0,1} xs:anyURI */
  struct zx_se_detail_s* detail;	/* {0,1}  */
};

struct zx_elem_s* zx_se_Fault_GET_faultcode(struct zx_se_Fault_s* x, int n);
struct zx_elem_s* zx_se_Fault_GET_faultstring(struct zx_se_Fault_s* x, int n);
struct zx_elem_s* zx_se_Fault_GET_faultactor(struct zx_se_Fault_s* x, int n);
struct zx_se_detail_s* zx_se_Fault_GET_detail(struct zx_se_Fault_s* x, int n);
int zx_se_Fault_NUM_faultcode(struct zx_se_Fault_s* x);
int zx_se_Fault_NUM_faultstring(struct zx_se_Fault_s* x);
int zx_se_Fault_NUM_faultactor(struct zx_se_Fault_s* x);
int zx_se_Fault_NUM_detail(struct zx_se_Fault_s* x);
struct zx_elem_s* zx_se_Fault_POP_faultcode(struct zx_se_Fault_s* x);
struct zx_elem_s* zx_se_Fault_POP_faultstring(struct zx_se_Fault_s* x);
struct zx_elem_s* zx_se_Fault_POP_faultactor(struct zx_se_Fault_s* x);
struct zx_se_detail_s* zx_se_Fault_POP_detail(struct zx_se_Fault_s* x);
void zx_se_Fault_PUSH_faultcode(struct zx_se_Fault_s* x, struct zx_elem_s* y);
void zx_se_Fault_PUSH_faultstring(struct zx_se_Fault_s* x, struct zx_elem_s* y);
void zx_se_Fault_PUSH_faultactor(struct zx_se_Fault_s* x, struct zx_elem_s* y);
void zx_se_Fault_PUSH_detail(struct zx_se_Fault_s* x, struct zx_se_detail_s* y);
void zx_se_Fault_PUT_faultcode(struct zx_se_Fault_s* x, int n, struct zx_elem_s* y);
void zx_se_Fault_PUT_faultstring(struct zx_se_Fault_s* x, int n, struct zx_elem_s* y);
void zx_se_Fault_PUT_faultactor(struct zx_se_Fault_s* x, int n, struct zx_elem_s* y);
void zx_se_Fault_PUT_detail(struct zx_se_Fault_s* x, int n, struct zx_se_detail_s* y);
void zx_se_Fault_ADD_faultcode(struct zx_se_Fault_s* x, int n, struct zx_elem_s* z);
void zx_se_Fault_ADD_faultstring(struct zx_se_Fault_s* x, int n, struct zx_elem_s* z);
void zx_se_Fault_ADD_faultactor(struct zx_se_Fault_s* x, int n, struct zx_elem_s* z);
void zx_se_Fault_ADD_detail(struct zx_se_Fault_s* x, int n, struct zx_se_detail_s* z);
void zx_se_Fault_DEL_faultcode(struct zx_se_Fault_s* x, int n);
void zx_se_Fault_DEL_faultstring(struct zx_se_Fault_s* x, int n);
void zx_se_Fault_DEL_faultactor(struct zx_se_Fault_s* x, int n);
void zx_se_Fault_DEL_detail(struct zx_se_Fault_s* x, int n);
void zx_se_Fault_REV_faultcode(struct zx_se_Fault_s* x);
void zx_se_Fault_REV_faultstring(struct zx_se_Fault_s* x);
void zx_se_Fault_REV_faultactor(struct zx_se_Fault_s* x);
void zx_se_Fault_REV_detail(struct zx_se_Fault_s* x);

/* -------------------------- se_Header -------------------------- */
/* refby( zx_se_Envelope_s ) */
#ifndef zx_se_Header_EXT
#define zx_se_Header_EXT
#endif

struct zx_se_Header_s* zx_DEC_se_Header(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_se_Header_s* zx_NEW_se_Header(struct zx_ctx* c);
struct zx_se_Header_s* zx_DEEP_CLONE_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x, int dup_strs);
void zx_DUP_STRS_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x);
void zx_FREE_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x, int free_strs);
int zx_WALK_SO_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_SO_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x);
int zx_LEN_WO_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x);
char* zx_ENC_SO_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x, char* p);
char* zx_ENC_WO_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x);
struct zx_str* zx_EASY_ENC_WO_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x);

struct zx_se_Header_s {
  ZX_ELEM_EXT
  zx_se_Header_EXT
};


/* -------------------------- se_detail -------------------------- */
/* refby( zx_se_Fault_s ) */
#ifndef zx_se_detail_EXT
#define zx_se_detail_EXT
#endif

struct zx_se_detail_s* zx_DEC_se_detail(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_se_detail_s* zx_NEW_se_detail(struct zx_ctx* c);
struct zx_se_detail_s* zx_DEEP_CLONE_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x, int dup_strs);
void zx_DUP_STRS_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x);
void zx_FREE_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x, int free_strs);
int zx_WALK_SO_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_SO_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x);
int zx_LEN_WO_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x);
char* zx_ENC_SO_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x, char* p);
char* zx_ENC_WO_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x);
struct zx_str* zx_EASY_ENC_WO_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x);

struct zx_se_detail_s {
  ZX_ELEM_EXT
  zx_se_detail_EXT
};



#endif
