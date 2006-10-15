/* c/zx-e-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_e_data_h
#define _c_zx_e_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- e_Body -------------------------- */
/* refby( zx_e_Envelope_s ) */
#ifndef zx_e_Body_EXT
#define zx_e_Body_EXT
#endif

struct zx_e_Body_s* zx_DEC_e_Body(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_e_Body_s* zx_NEW_e_Body(struct zx_ctx* c);
struct zx_e_Body_s* zx_DEEP_CLONE_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x, int dup_strs);
void zx_DUP_STRS_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x);
void zx_FREE_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x, int free_strs);
int zx_WALK_SO_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_SO_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x);
int zx_LEN_WO_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x);
char* zx_ENC_SO_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x, char* p);
char* zx_ENC_WO_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x);
struct zx_str* zx_EASY_ENC_WO_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x);

struct zx_e_Body_s {
  ZX_ELEM_EXT
  zx_e_Body_EXT
  struct zx_di_Query_s* Query;	/* {0,1} nada */
  struct zx_di_QueryResponse_s* QueryResponse;	/* {0,1} nada */
  struct zx_di12_Query_s* di12_Query;	/* {0,1} nada */
  struct zx_di12_QueryResponse_s* di12_QueryResponse;	/* {0,1} nada */
  struct zx_di12_Modify_s* Modify;	/* {0,1} nada */
  struct zx_di12_ModifyResponse_s* ModifyResponse;	/* {0,1} nada */
  struct zx_e_Fault_s* Fault;	/* {0,1} nada */
};

struct zx_di_Query_s* zx_e_Body_GET_Query(struct zx_e_Body_s* x, int n);
struct zx_di_QueryResponse_s* zx_e_Body_GET_QueryResponse(struct zx_e_Body_s* x, int n);
struct zx_di12_Query_s* zx_e_Body_GET_di12_Query(struct zx_e_Body_s* x, int n);
struct zx_di12_QueryResponse_s* zx_e_Body_GET_di12_QueryResponse(struct zx_e_Body_s* x, int n);
struct zx_di12_Modify_s* zx_e_Body_GET_Modify(struct zx_e_Body_s* x, int n);
struct zx_di12_ModifyResponse_s* zx_e_Body_GET_ModifyResponse(struct zx_e_Body_s* x, int n);
struct zx_e_Fault_s* zx_e_Body_GET_Fault(struct zx_e_Body_s* x, int n);
int zx_e_Body_NUM_Query(struct zx_e_Body_s* x);
int zx_e_Body_NUM_QueryResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_di12_Query(struct zx_e_Body_s* x);
int zx_e_Body_NUM_di12_QueryResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_Modify(struct zx_e_Body_s* x);
int zx_e_Body_NUM_ModifyResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_Fault(struct zx_e_Body_s* x);
struct zx_di_Query_s* zx_e_Body_POP_Query(struct zx_e_Body_s* x);
struct zx_di_QueryResponse_s* zx_e_Body_POP_QueryResponse(struct zx_e_Body_s* x);
struct zx_di12_Query_s* zx_e_Body_POP_di12_Query(struct zx_e_Body_s* x);
struct zx_di12_QueryResponse_s* zx_e_Body_POP_di12_QueryResponse(struct zx_e_Body_s* x);
struct zx_di12_Modify_s* zx_e_Body_POP_Modify(struct zx_e_Body_s* x);
struct zx_di12_ModifyResponse_s* zx_e_Body_POP_ModifyResponse(struct zx_e_Body_s* x);
struct zx_e_Fault_s* zx_e_Body_POP_Fault(struct zx_e_Body_s* x);
void zx_e_Body_PUSH_Query(struct zx_e_Body_s* x, struct zx_di_Query_s* y);
void zx_e_Body_PUSH_QueryResponse(struct zx_e_Body_s* x, struct zx_di_QueryResponse_s* y);
void zx_e_Body_PUSH_di12_Query(struct zx_e_Body_s* x, struct zx_di12_Query_s* y);
void zx_e_Body_PUSH_di12_QueryResponse(struct zx_e_Body_s* x, struct zx_di12_QueryResponse_s* y);
void zx_e_Body_PUSH_Modify(struct zx_e_Body_s* x, struct zx_di12_Modify_s* y);
void zx_e_Body_PUSH_ModifyResponse(struct zx_e_Body_s* x, struct zx_di12_ModifyResponse_s* y);
void zx_e_Body_PUSH_Fault(struct zx_e_Body_s* x, struct zx_e_Fault_s* y);
void zx_e_Body_PUT_Query(struct zx_e_Body_s* x, int n, struct zx_di_Query_s* y);
void zx_e_Body_PUT_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_di_QueryResponse_s* y);
void zx_e_Body_PUT_di12_Query(struct zx_e_Body_s* x, int n, struct zx_di12_Query_s* y);
void zx_e_Body_PUT_di12_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_di12_QueryResponse_s* y);
void zx_e_Body_PUT_Modify(struct zx_e_Body_s* x, int n, struct zx_di12_Modify_s* y);
void zx_e_Body_PUT_ModifyResponse(struct zx_e_Body_s* x, int n, struct zx_di12_ModifyResponse_s* y);
void zx_e_Body_PUT_Fault(struct zx_e_Body_s* x, int n, struct zx_e_Fault_s* y);
void zx_e_Body_ADD_Query(struct zx_e_Body_s* x, int n, struct zx_di_Query_s* z);
void zx_e_Body_ADD_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_di_QueryResponse_s* z);
void zx_e_Body_ADD_di12_Query(struct zx_e_Body_s* x, int n, struct zx_di12_Query_s* z);
void zx_e_Body_ADD_di12_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_di12_QueryResponse_s* z);
void zx_e_Body_ADD_Modify(struct zx_e_Body_s* x, int n, struct zx_di12_Modify_s* z);
void zx_e_Body_ADD_ModifyResponse(struct zx_e_Body_s* x, int n, struct zx_di12_ModifyResponse_s* z);
void zx_e_Body_ADD_Fault(struct zx_e_Body_s* x, int n, struct zx_e_Fault_s* z);
void zx_e_Body_DEL_Query(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_QueryResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_di12_Query(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_di12_QueryResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_Modify(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_ModifyResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_Fault(struct zx_e_Body_s* x, int n);
void zx_e_Body_REV_Query(struct zx_e_Body_s* x);
void zx_e_Body_REV_QueryResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_di12_Query(struct zx_e_Body_s* x);
void zx_e_Body_REV_di12_QueryResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_Modify(struct zx_e_Body_s* x);
void zx_e_Body_REV_ModifyResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_Fault(struct zx_e_Body_s* x);

/* -------------------------- e_Envelope -------------------------- */
/* refby( ) */
#ifndef zx_e_Envelope_EXT
#define zx_e_Envelope_EXT
#endif

struct zx_e_Envelope_s* zx_DEC_e_Envelope(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_e_Envelope_s* zx_NEW_e_Envelope(struct zx_ctx* c);
struct zx_e_Envelope_s* zx_DEEP_CLONE_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x, int dup_strs);
void zx_DUP_STRS_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x);
void zx_FREE_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x, int free_strs);
int zx_WALK_SO_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_SO_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x);
int zx_LEN_WO_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x);
char* zx_ENC_SO_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x, char* p);
char* zx_ENC_WO_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x);
struct zx_str* zx_EASY_ENC_WO_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x);

struct zx_e_Envelope_s {
  ZX_ELEM_EXT
  zx_e_Envelope_EXT
  struct zx_e_Header_s* Header;	/* {0,1} nada */
  struct zx_e_Body_s* Body;	/* {1,1} nada */
};

struct zx_e_Header_s* zx_e_Envelope_GET_Header(struct zx_e_Envelope_s* x, int n);
struct zx_e_Body_s* zx_e_Envelope_GET_Body(struct zx_e_Envelope_s* x, int n);
int zx_e_Envelope_NUM_Header(struct zx_e_Envelope_s* x);
int zx_e_Envelope_NUM_Body(struct zx_e_Envelope_s* x);
struct zx_e_Header_s* zx_e_Envelope_POP_Header(struct zx_e_Envelope_s* x);
struct zx_e_Body_s* zx_e_Envelope_POP_Body(struct zx_e_Envelope_s* x);
void zx_e_Envelope_PUSH_Header(struct zx_e_Envelope_s* x, struct zx_e_Header_s* y);
void zx_e_Envelope_PUSH_Body(struct zx_e_Envelope_s* x, struct zx_e_Body_s* y);
void zx_e_Envelope_PUT_Header(struct zx_e_Envelope_s* x, int n, struct zx_e_Header_s* y);
void zx_e_Envelope_PUT_Body(struct zx_e_Envelope_s* x, int n, struct zx_e_Body_s* y);
void zx_e_Envelope_ADD_Header(struct zx_e_Envelope_s* x, int n, struct zx_e_Header_s* z);
void zx_e_Envelope_ADD_Body(struct zx_e_Envelope_s* x, int n, struct zx_e_Body_s* z);
void zx_e_Envelope_DEL_Header(struct zx_e_Envelope_s* x, int n);
void zx_e_Envelope_DEL_Body(struct zx_e_Envelope_s* x, int n);
void zx_e_Envelope_REV_Header(struct zx_e_Envelope_s* x);
void zx_e_Envelope_REV_Body(struct zx_e_Envelope_s* x);

/* -------------------------- e_Fault -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_e_Fault_EXT
#define zx_e_Fault_EXT
#endif

struct zx_e_Fault_s* zx_DEC_e_Fault(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_e_Fault_s* zx_NEW_e_Fault(struct zx_ctx* c);
struct zx_e_Fault_s* zx_DEEP_CLONE_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x, int dup_strs);
void zx_DUP_STRS_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x);
void zx_FREE_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x, int free_strs);
int zx_WALK_SO_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_SO_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x);
int zx_LEN_WO_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x);
char* zx_ENC_SO_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x, char* p);
char* zx_ENC_WO_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x);
struct zx_str* zx_EASY_ENC_WO_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x);

struct zx_e_Fault_s {
  ZX_ELEM_EXT
  zx_e_Fault_EXT
  struct zx_elem_s* faultcode;	/* {1,1} xs:QName */
  struct zx_elem_s* faultstring;	/* {1,1} xs:string */
  struct zx_elem_s* faultactor;	/* {0,1} xs:anyURI */
  struct zx_e_detail_s* detail;	/* {0,1}  */
};

struct zx_elem_s* zx_e_Fault_GET_faultcode(struct zx_e_Fault_s* x, int n);
struct zx_elem_s* zx_e_Fault_GET_faultstring(struct zx_e_Fault_s* x, int n);
struct zx_elem_s* zx_e_Fault_GET_faultactor(struct zx_e_Fault_s* x, int n);
struct zx_e_detail_s* zx_e_Fault_GET_detail(struct zx_e_Fault_s* x, int n);
int zx_e_Fault_NUM_faultcode(struct zx_e_Fault_s* x);
int zx_e_Fault_NUM_faultstring(struct zx_e_Fault_s* x);
int zx_e_Fault_NUM_faultactor(struct zx_e_Fault_s* x);
int zx_e_Fault_NUM_detail(struct zx_e_Fault_s* x);
struct zx_elem_s* zx_e_Fault_POP_faultcode(struct zx_e_Fault_s* x);
struct zx_elem_s* zx_e_Fault_POP_faultstring(struct zx_e_Fault_s* x);
struct zx_elem_s* zx_e_Fault_POP_faultactor(struct zx_e_Fault_s* x);
struct zx_e_detail_s* zx_e_Fault_POP_detail(struct zx_e_Fault_s* x);
void zx_e_Fault_PUSH_faultcode(struct zx_e_Fault_s* x, struct zx_elem_s* y);
void zx_e_Fault_PUSH_faultstring(struct zx_e_Fault_s* x, struct zx_elem_s* y);
void zx_e_Fault_PUSH_faultactor(struct zx_e_Fault_s* x, struct zx_elem_s* y);
void zx_e_Fault_PUSH_detail(struct zx_e_Fault_s* x, struct zx_e_detail_s* y);
void zx_e_Fault_PUT_faultcode(struct zx_e_Fault_s* x, int n, struct zx_elem_s* y);
void zx_e_Fault_PUT_faultstring(struct zx_e_Fault_s* x, int n, struct zx_elem_s* y);
void zx_e_Fault_PUT_faultactor(struct zx_e_Fault_s* x, int n, struct zx_elem_s* y);
void zx_e_Fault_PUT_detail(struct zx_e_Fault_s* x, int n, struct zx_e_detail_s* y);
void zx_e_Fault_ADD_faultcode(struct zx_e_Fault_s* x, int n, struct zx_elem_s* z);
void zx_e_Fault_ADD_faultstring(struct zx_e_Fault_s* x, int n, struct zx_elem_s* z);
void zx_e_Fault_ADD_faultactor(struct zx_e_Fault_s* x, int n, struct zx_elem_s* z);
void zx_e_Fault_ADD_detail(struct zx_e_Fault_s* x, int n, struct zx_e_detail_s* z);
void zx_e_Fault_DEL_faultcode(struct zx_e_Fault_s* x, int n);
void zx_e_Fault_DEL_faultstring(struct zx_e_Fault_s* x, int n);
void zx_e_Fault_DEL_faultactor(struct zx_e_Fault_s* x, int n);
void zx_e_Fault_DEL_detail(struct zx_e_Fault_s* x, int n);
void zx_e_Fault_REV_faultcode(struct zx_e_Fault_s* x);
void zx_e_Fault_REV_faultstring(struct zx_e_Fault_s* x);
void zx_e_Fault_REV_faultactor(struct zx_e_Fault_s* x);
void zx_e_Fault_REV_detail(struct zx_e_Fault_s* x);

/* -------------------------- e_Header -------------------------- */
/* refby( zx_e_Envelope_s ) */
#ifndef zx_e_Header_EXT
#define zx_e_Header_EXT
#endif

struct zx_e_Header_s* zx_DEC_e_Header(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_e_Header_s* zx_NEW_e_Header(struct zx_ctx* c);
struct zx_e_Header_s* zx_DEEP_CLONE_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x, int dup_strs);
void zx_DUP_STRS_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x);
void zx_FREE_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x, int free_strs);
int zx_WALK_SO_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_SO_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x);
int zx_LEN_WO_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x);
char* zx_ENC_SO_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x, char* p);
char* zx_ENC_WO_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x);
struct zx_str* zx_EASY_ENC_WO_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x);

struct zx_e_Header_s {
  ZX_ELEM_EXT
  zx_e_Header_EXT
  struct zx_a_MessageID_s* MessageID;	/* {0,1} nada */
  struct zx_a_RelatesTo_s* RelatesTo;	/* {0,1} nada */
  struct zx_a_ReplyTo_s* ReplyTo;	/* {0,1} nada */
  struct zx_a_From_s* From;	/* {0,1} nada */
  struct zx_a_FaultTo_s* FaultTo;	/* {0,1} nada */
  struct zx_a_To_s* To;	/* {0,1} nada */
  struct zx_a_Action_s* Action;	/* {0,1} nada */
  struct zx_sbf_Framework_s* Framework;	/* {0,1} nada */
  struct zx_b_Framework_s* b_Framework;	/* {0,1} nada */
  struct zx_b_Sender_s* Sender;	/* {0,1} nada */
  struct zx_b_TargetIdentity_s* TargetIdentity;	/* {0,1} nada */
  struct zx_b_CredentialsContext_s* CredentialsContext;	/* {0,1} nada */
  struct zx_b_EndpointUpdate_s* EndpointUpdate;	/* {0,1} nada */
  struct zx_elem_s* Timeout;	/* {0,1} TimeoutType */
  struct zx_b_ProcessingContext_s* ProcessingContext;	/* {0,1} nada */
  struct zx_b_Consent_s* Consent;	/* {0,1} nada */
  struct zx_b_UsageDirective_s* UsageDirective;	/* {0,1} nada */
  struct zx_b_ApplicationEPR_s* ApplicationEPR;	/* {0,1} nada */
  struct zx_b_UserInteraction_s* UserInteraction;	/* {0,1} nada */
  struct zx_b_RedirectRequest_s* RedirectRequest;	/* {0,1}  */
  struct zx_b12_Correlation_s* Correlation;	/* {0,1} nada */
  struct zx_b12_Provider_s* Provider;	/* {0,1} nada */
  struct zx_b12_ProcessingContext_s* b12_ProcessingContext;	/* {0,1} nada */
  struct zx_b12_Consent_s* b12_Consent;	/* {0,1} nada */
  struct zx_b12_UsageDirective_s* b12_UsageDirective;	/* {0,1} nada */
};

struct zx_a_MessageID_s* zx_e_Header_GET_MessageID(struct zx_e_Header_s* x, int n);
struct zx_a_RelatesTo_s* zx_e_Header_GET_RelatesTo(struct zx_e_Header_s* x, int n);
struct zx_a_ReplyTo_s* zx_e_Header_GET_ReplyTo(struct zx_e_Header_s* x, int n);
struct zx_a_From_s* zx_e_Header_GET_From(struct zx_e_Header_s* x, int n);
struct zx_a_FaultTo_s* zx_e_Header_GET_FaultTo(struct zx_e_Header_s* x, int n);
struct zx_a_To_s* zx_e_Header_GET_To(struct zx_e_Header_s* x, int n);
struct zx_a_Action_s* zx_e_Header_GET_Action(struct zx_e_Header_s* x, int n);
struct zx_sbf_Framework_s* zx_e_Header_GET_Framework(struct zx_e_Header_s* x, int n);
struct zx_b_Framework_s* zx_e_Header_GET_b_Framework(struct zx_e_Header_s* x, int n);
struct zx_b_Sender_s* zx_e_Header_GET_Sender(struct zx_e_Header_s* x, int n);
struct zx_b_TargetIdentity_s* zx_e_Header_GET_TargetIdentity(struct zx_e_Header_s* x, int n);
struct zx_b_CredentialsContext_s* zx_e_Header_GET_CredentialsContext(struct zx_e_Header_s* x, int n);
struct zx_b_EndpointUpdate_s* zx_e_Header_GET_EndpointUpdate(struct zx_e_Header_s* x, int n);
struct zx_elem_s* zx_e_Header_GET_Timeout(struct zx_e_Header_s* x, int n);
struct zx_b_ProcessingContext_s* zx_e_Header_GET_ProcessingContext(struct zx_e_Header_s* x, int n);
struct zx_b_Consent_s* zx_e_Header_GET_Consent(struct zx_e_Header_s* x, int n);
struct zx_b_UsageDirective_s* zx_e_Header_GET_UsageDirective(struct zx_e_Header_s* x, int n);
struct zx_b_ApplicationEPR_s* zx_e_Header_GET_ApplicationEPR(struct zx_e_Header_s* x, int n);
struct zx_b_UserInteraction_s* zx_e_Header_GET_UserInteraction(struct zx_e_Header_s* x, int n);
struct zx_b_RedirectRequest_s* zx_e_Header_GET_RedirectRequest(struct zx_e_Header_s* x, int n);
struct zx_b12_Correlation_s* zx_e_Header_GET_Correlation(struct zx_e_Header_s* x, int n);
struct zx_b12_Provider_s* zx_e_Header_GET_Provider(struct zx_e_Header_s* x, int n);
struct zx_b12_ProcessingContext_s* zx_e_Header_GET_b12_ProcessingContext(struct zx_e_Header_s* x, int n);
struct zx_b12_Consent_s* zx_e_Header_GET_b12_Consent(struct zx_e_Header_s* x, int n);
struct zx_b12_UsageDirective_s* zx_e_Header_GET_b12_UsageDirective(struct zx_e_Header_s* x, int n);
int zx_e_Header_NUM_MessageID(struct zx_e_Header_s* x);
int zx_e_Header_NUM_RelatesTo(struct zx_e_Header_s* x);
int zx_e_Header_NUM_ReplyTo(struct zx_e_Header_s* x);
int zx_e_Header_NUM_From(struct zx_e_Header_s* x);
int zx_e_Header_NUM_FaultTo(struct zx_e_Header_s* x);
int zx_e_Header_NUM_To(struct zx_e_Header_s* x);
int zx_e_Header_NUM_Action(struct zx_e_Header_s* x);
int zx_e_Header_NUM_Framework(struct zx_e_Header_s* x);
int zx_e_Header_NUM_b_Framework(struct zx_e_Header_s* x);
int zx_e_Header_NUM_Sender(struct zx_e_Header_s* x);
int zx_e_Header_NUM_TargetIdentity(struct zx_e_Header_s* x);
int zx_e_Header_NUM_CredentialsContext(struct zx_e_Header_s* x);
int zx_e_Header_NUM_EndpointUpdate(struct zx_e_Header_s* x);
int zx_e_Header_NUM_Timeout(struct zx_e_Header_s* x);
int zx_e_Header_NUM_ProcessingContext(struct zx_e_Header_s* x);
int zx_e_Header_NUM_Consent(struct zx_e_Header_s* x);
int zx_e_Header_NUM_UsageDirective(struct zx_e_Header_s* x);
int zx_e_Header_NUM_ApplicationEPR(struct zx_e_Header_s* x);
int zx_e_Header_NUM_UserInteraction(struct zx_e_Header_s* x);
int zx_e_Header_NUM_RedirectRequest(struct zx_e_Header_s* x);
int zx_e_Header_NUM_Correlation(struct zx_e_Header_s* x);
int zx_e_Header_NUM_Provider(struct zx_e_Header_s* x);
int zx_e_Header_NUM_b12_ProcessingContext(struct zx_e_Header_s* x);
int zx_e_Header_NUM_b12_Consent(struct zx_e_Header_s* x);
int zx_e_Header_NUM_b12_UsageDirective(struct zx_e_Header_s* x);
struct zx_a_MessageID_s* zx_e_Header_POP_MessageID(struct zx_e_Header_s* x);
struct zx_a_RelatesTo_s* zx_e_Header_POP_RelatesTo(struct zx_e_Header_s* x);
struct zx_a_ReplyTo_s* zx_e_Header_POP_ReplyTo(struct zx_e_Header_s* x);
struct zx_a_From_s* zx_e_Header_POP_From(struct zx_e_Header_s* x);
struct zx_a_FaultTo_s* zx_e_Header_POP_FaultTo(struct zx_e_Header_s* x);
struct zx_a_To_s* zx_e_Header_POP_To(struct zx_e_Header_s* x);
struct zx_a_Action_s* zx_e_Header_POP_Action(struct zx_e_Header_s* x);
struct zx_sbf_Framework_s* zx_e_Header_POP_Framework(struct zx_e_Header_s* x);
struct zx_b_Framework_s* zx_e_Header_POP_b_Framework(struct zx_e_Header_s* x);
struct zx_b_Sender_s* zx_e_Header_POP_Sender(struct zx_e_Header_s* x);
struct zx_b_TargetIdentity_s* zx_e_Header_POP_TargetIdentity(struct zx_e_Header_s* x);
struct zx_b_CredentialsContext_s* zx_e_Header_POP_CredentialsContext(struct zx_e_Header_s* x);
struct zx_b_EndpointUpdate_s* zx_e_Header_POP_EndpointUpdate(struct zx_e_Header_s* x);
struct zx_elem_s* zx_e_Header_POP_Timeout(struct zx_e_Header_s* x);
struct zx_b_ProcessingContext_s* zx_e_Header_POP_ProcessingContext(struct zx_e_Header_s* x);
struct zx_b_Consent_s* zx_e_Header_POP_Consent(struct zx_e_Header_s* x);
struct zx_b_UsageDirective_s* zx_e_Header_POP_UsageDirective(struct zx_e_Header_s* x);
struct zx_b_ApplicationEPR_s* zx_e_Header_POP_ApplicationEPR(struct zx_e_Header_s* x);
struct zx_b_UserInteraction_s* zx_e_Header_POP_UserInteraction(struct zx_e_Header_s* x);
struct zx_b_RedirectRequest_s* zx_e_Header_POP_RedirectRequest(struct zx_e_Header_s* x);
struct zx_b12_Correlation_s* zx_e_Header_POP_Correlation(struct zx_e_Header_s* x);
struct zx_b12_Provider_s* zx_e_Header_POP_Provider(struct zx_e_Header_s* x);
struct zx_b12_ProcessingContext_s* zx_e_Header_POP_b12_ProcessingContext(struct zx_e_Header_s* x);
struct zx_b12_Consent_s* zx_e_Header_POP_b12_Consent(struct zx_e_Header_s* x);
struct zx_b12_UsageDirective_s* zx_e_Header_POP_b12_UsageDirective(struct zx_e_Header_s* x);
void zx_e_Header_PUSH_MessageID(struct zx_e_Header_s* x, struct zx_a_MessageID_s* y);
void zx_e_Header_PUSH_RelatesTo(struct zx_e_Header_s* x, struct zx_a_RelatesTo_s* y);
void zx_e_Header_PUSH_ReplyTo(struct zx_e_Header_s* x, struct zx_a_ReplyTo_s* y);
void zx_e_Header_PUSH_From(struct zx_e_Header_s* x, struct zx_a_From_s* y);
void zx_e_Header_PUSH_FaultTo(struct zx_e_Header_s* x, struct zx_a_FaultTo_s* y);
void zx_e_Header_PUSH_To(struct zx_e_Header_s* x, struct zx_a_To_s* y);
void zx_e_Header_PUSH_Action(struct zx_e_Header_s* x, struct zx_a_Action_s* y);
void zx_e_Header_PUSH_Framework(struct zx_e_Header_s* x, struct zx_sbf_Framework_s* y);
void zx_e_Header_PUSH_b_Framework(struct zx_e_Header_s* x, struct zx_b_Framework_s* y);
void zx_e_Header_PUSH_Sender(struct zx_e_Header_s* x, struct zx_b_Sender_s* y);
void zx_e_Header_PUSH_TargetIdentity(struct zx_e_Header_s* x, struct zx_b_TargetIdentity_s* y);
void zx_e_Header_PUSH_CredentialsContext(struct zx_e_Header_s* x, struct zx_b_CredentialsContext_s* y);
void zx_e_Header_PUSH_EndpointUpdate(struct zx_e_Header_s* x, struct zx_b_EndpointUpdate_s* y);
void zx_e_Header_PUSH_Timeout(struct zx_e_Header_s* x, struct zx_elem_s* y);
void zx_e_Header_PUSH_ProcessingContext(struct zx_e_Header_s* x, struct zx_b_ProcessingContext_s* y);
void zx_e_Header_PUSH_Consent(struct zx_e_Header_s* x, struct zx_b_Consent_s* y);
void zx_e_Header_PUSH_UsageDirective(struct zx_e_Header_s* x, struct zx_b_UsageDirective_s* y);
void zx_e_Header_PUSH_ApplicationEPR(struct zx_e_Header_s* x, struct zx_b_ApplicationEPR_s* y);
void zx_e_Header_PUSH_UserInteraction(struct zx_e_Header_s* x, struct zx_b_UserInteraction_s* y);
void zx_e_Header_PUSH_RedirectRequest(struct zx_e_Header_s* x, struct zx_b_RedirectRequest_s* y);
void zx_e_Header_PUSH_Correlation(struct zx_e_Header_s* x, struct zx_b12_Correlation_s* y);
void zx_e_Header_PUSH_Provider(struct zx_e_Header_s* x, struct zx_b12_Provider_s* y);
void zx_e_Header_PUSH_b12_ProcessingContext(struct zx_e_Header_s* x, struct zx_b12_ProcessingContext_s* y);
void zx_e_Header_PUSH_b12_Consent(struct zx_e_Header_s* x, struct zx_b12_Consent_s* y);
void zx_e_Header_PUSH_b12_UsageDirective(struct zx_e_Header_s* x, struct zx_b12_UsageDirective_s* y);
void zx_e_Header_PUT_MessageID(struct zx_e_Header_s* x, int n, struct zx_a_MessageID_s* y);
void zx_e_Header_PUT_RelatesTo(struct zx_e_Header_s* x, int n, struct zx_a_RelatesTo_s* y);
void zx_e_Header_PUT_ReplyTo(struct zx_e_Header_s* x, int n, struct zx_a_ReplyTo_s* y);
void zx_e_Header_PUT_From(struct zx_e_Header_s* x, int n, struct zx_a_From_s* y);
void zx_e_Header_PUT_FaultTo(struct zx_e_Header_s* x, int n, struct zx_a_FaultTo_s* y);
void zx_e_Header_PUT_To(struct zx_e_Header_s* x, int n, struct zx_a_To_s* y);
void zx_e_Header_PUT_Action(struct zx_e_Header_s* x, int n, struct zx_a_Action_s* y);
void zx_e_Header_PUT_Framework(struct zx_e_Header_s* x, int n, struct zx_sbf_Framework_s* y);
void zx_e_Header_PUT_b_Framework(struct zx_e_Header_s* x, int n, struct zx_b_Framework_s* y);
void zx_e_Header_PUT_Sender(struct zx_e_Header_s* x, int n, struct zx_b_Sender_s* y);
void zx_e_Header_PUT_TargetIdentity(struct zx_e_Header_s* x, int n, struct zx_b_TargetIdentity_s* y);
void zx_e_Header_PUT_CredentialsContext(struct zx_e_Header_s* x, int n, struct zx_b_CredentialsContext_s* y);
void zx_e_Header_PUT_EndpointUpdate(struct zx_e_Header_s* x, int n, struct zx_b_EndpointUpdate_s* y);
void zx_e_Header_PUT_Timeout(struct zx_e_Header_s* x, int n, struct zx_elem_s* y);
void zx_e_Header_PUT_ProcessingContext(struct zx_e_Header_s* x, int n, struct zx_b_ProcessingContext_s* y);
void zx_e_Header_PUT_Consent(struct zx_e_Header_s* x, int n, struct zx_b_Consent_s* y);
void zx_e_Header_PUT_UsageDirective(struct zx_e_Header_s* x, int n, struct zx_b_UsageDirective_s* y);
void zx_e_Header_PUT_ApplicationEPR(struct zx_e_Header_s* x, int n, struct zx_b_ApplicationEPR_s* y);
void zx_e_Header_PUT_UserInteraction(struct zx_e_Header_s* x, int n, struct zx_b_UserInteraction_s* y);
void zx_e_Header_PUT_RedirectRequest(struct zx_e_Header_s* x, int n, struct zx_b_RedirectRequest_s* y);
void zx_e_Header_PUT_Correlation(struct zx_e_Header_s* x, int n, struct zx_b12_Correlation_s* y);
void zx_e_Header_PUT_Provider(struct zx_e_Header_s* x, int n, struct zx_b12_Provider_s* y);
void zx_e_Header_PUT_b12_ProcessingContext(struct zx_e_Header_s* x, int n, struct zx_b12_ProcessingContext_s* y);
void zx_e_Header_PUT_b12_Consent(struct zx_e_Header_s* x, int n, struct zx_b12_Consent_s* y);
void zx_e_Header_PUT_b12_UsageDirective(struct zx_e_Header_s* x, int n, struct zx_b12_UsageDirective_s* y);
void zx_e_Header_ADD_MessageID(struct zx_e_Header_s* x, int n, struct zx_a_MessageID_s* z);
void zx_e_Header_ADD_RelatesTo(struct zx_e_Header_s* x, int n, struct zx_a_RelatesTo_s* z);
void zx_e_Header_ADD_ReplyTo(struct zx_e_Header_s* x, int n, struct zx_a_ReplyTo_s* z);
void zx_e_Header_ADD_From(struct zx_e_Header_s* x, int n, struct zx_a_From_s* z);
void zx_e_Header_ADD_FaultTo(struct zx_e_Header_s* x, int n, struct zx_a_FaultTo_s* z);
void zx_e_Header_ADD_To(struct zx_e_Header_s* x, int n, struct zx_a_To_s* z);
void zx_e_Header_ADD_Action(struct zx_e_Header_s* x, int n, struct zx_a_Action_s* z);
void zx_e_Header_ADD_Framework(struct zx_e_Header_s* x, int n, struct zx_sbf_Framework_s* z);
void zx_e_Header_ADD_b_Framework(struct zx_e_Header_s* x, int n, struct zx_b_Framework_s* z);
void zx_e_Header_ADD_Sender(struct zx_e_Header_s* x, int n, struct zx_b_Sender_s* z);
void zx_e_Header_ADD_TargetIdentity(struct zx_e_Header_s* x, int n, struct zx_b_TargetIdentity_s* z);
void zx_e_Header_ADD_CredentialsContext(struct zx_e_Header_s* x, int n, struct zx_b_CredentialsContext_s* z);
void zx_e_Header_ADD_EndpointUpdate(struct zx_e_Header_s* x, int n, struct zx_b_EndpointUpdate_s* z);
void zx_e_Header_ADD_Timeout(struct zx_e_Header_s* x, int n, struct zx_elem_s* z);
void zx_e_Header_ADD_ProcessingContext(struct zx_e_Header_s* x, int n, struct zx_b_ProcessingContext_s* z);
void zx_e_Header_ADD_Consent(struct zx_e_Header_s* x, int n, struct zx_b_Consent_s* z);
void zx_e_Header_ADD_UsageDirective(struct zx_e_Header_s* x, int n, struct zx_b_UsageDirective_s* z);
void zx_e_Header_ADD_ApplicationEPR(struct zx_e_Header_s* x, int n, struct zx_b_ApplicationEPR_s* z);
void zx_e_Header_ADD_UserInteraction(struct zx_e_Header_s* x, int n, struct zx_b_UserInteraction_s* z);
void zx_e_Header_ADD_RedirectRequest(struct zx_e_Header_s* x, int n, struct zx_b_RedirectRequest_s* z);
void zx_e_Header_ADD_Correlation(struct zx_e_Header_s* x, int n, struct zx_b12_Correlation_s* z);
void zx_e_Header_ADD_Provider(struct zx_e_Header_s* x, int n, struct zx_b12_Provider_s* z);
void zx_e_Header_ADD_b12_ProcessingContext(struct zx_e_Header_s* x, int n, struct zx_b12_ProcessingContext_s* z);
void zx_e_Header_ADD_b12_Consent(struct zx_e_Header_s* x, int n, struct zx_b12_Consent_s* z);
void zx_e_Header_ADD_b12_UsageDirective(struct zx_e_Header_s* x, int n, struct zx_b12_UsageDirective_s* z);
void zx_e_Header_DEL_MessageID(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_RelatesTo(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_ReplyTo(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_From(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_FaultTo(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_To(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_Action(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_Framework(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_b_Framework(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_Sender(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_TargetIdentity(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_CredentialsContext(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_EndpointUpdate(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_Timeout(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_ProcessingContext(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_Consent(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_UsageDirective(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_ApplicationEPR(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_UserInteraction(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_RedirectRequest(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_Correlation(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_Provider(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_b12_ProcessingContext(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_b12_Consent(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_b12_UsageDirective(struct zx_e_Header_s* x, int n);
void zx_e_Header_REV_MessageID(struct zx_e_Header_s* x);
void zx_e_Header_REV_RelatesTo(struct zx_e_Header_s* x);
void zx_e_Header_REV_ReplyTo(struct zx_e_Header_s* x);
void zx_e_Header_REV_From(struct zx_e_Header_s* x);
void zx_e_Header_REV_FaultTo(struct zx_e_Header_s* x);
void zx_e_Header_REV_To(struct zx_e_Header_s* x);
void zx_e_Header_REV_Action(struct zx_e_Header_s* x);
void zx_e_Header_REV_Framework(struct zx_e_Header_s* x);
void zx_e_Header_REV_b_Framework(struct zx_e_Header_s* x);
void zx_e_Header_REV_Sender(struct zx_e_Header_s* x);
void zx_e_Header_REV_TargetIdentity(struct zx_e_Header_s* x);
void zx_e_Header_REV_CredentialsContext(struct zx_e_Header_s* x);
void zx_e_Header_REV_EndpointUpdate(struct zx_e_Header_s* x);
void zx_e_Header_REV_Timeout(struct zx_e_Header_s* x);
void zx_e_Header_REV_ProcessingContext(struct zx_e_Header_s* x);
void zx_e_Header_REV_Consent(struct zx_e_Header_s* x);
void zx_e_Header_REV_UsageDirective(struct zx_e_Header_s* x);
void zx_e_Header_REV_ApplicationEPR(struct zx_e_Header_s* x);
void zx_e_Header_REV_UserInteraction(struct zx_e_Header_s* x);
void zx_e_Header_REV_RedirectRequest(struct zx_e_Header_s* x);
void zx_e_Header_REV_Correlation(struct zx_e_Header_s* x);
void zx_e_Header_REV_Provider(struct zx_e_Header_s* x);
void zx_e_Header_REV_b12_ProcessingContext(struct zx_e_Header_s* x);
void zx_e_Header_REV_b12_Consent(struct zx_e_Header_s* x);
void zx_e_Header_REV_b12_UsageDirective(struct zx_e_Header_s* x);

/* -------------------------- e_detail -------------------------- */
/* refby( zx_e_Fault_s ) */
#ifndef zx_e_detail_EXT
#define zx_e_detail_EXT
#endif

struct zx_e_detail_s* zx_DEC_e_detail(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_e_detail_s* zx_NEW_e_detail(struct zx_ctx* c);
struct zx_e_detail_s* zx_DEEP_CLONE_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x, int dup_strs);
void zx_DUP_STRS_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x);
void zx_FREE_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x, int free_strs);
int zx_WALK_SO_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_SO_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x);
int zx_LEN_WO_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x);
char* zx_ENC_SO_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x, char* p);
char* zx_ENC_WO_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x);
struct zx_str* zx_EASY_ENC_WO_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x);

struct zx_e_detail_s {
  ZX_ELEM_EXT
  zx_e_detail_EXT
};



#endif
