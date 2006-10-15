/* c/zx-dise-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_dise_data_h
#define _c_zx_dise_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- dise_Body -------------------------- */
/* refby( zx_dise_Envelope_s ) */
#ifndef zx_dise_Body_EXT
#define zx_dise_Body_EXT
#endif

struct zx_dise_Body_s* zx_DEC_dise_Body(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_dise_Body_s* zx_NEW_dise_Body(struct zx_ctx* c);
struct zx_dise_Body_s* zx_DEEP_CLONE_dise_Body(struct zx_ctx* c, struct zx_dise_Body_s* x, int dup_strs);
void zx_DUP_STRS_dise_Body(struct zx_ctx* c, struct zx_dise_Body_s* x);
void zx_FREE_dise_Body(struct zx_ctx* c, struct zx_dise_Body_s* x, int free_strs);
int zx_WALK_SO_dise_Body(struct zx_ctx* c, struct zx_dise_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_dise_Body(struct zx_ctx* c, struct zx_dise_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_SO_dise_Body(struct zx_ctx* c, struct zx_dise_Body_s* x);
int zx_LEN_WO_dise_Body(struct zx_ctx* c, struct zx_dise_Body_s* x);
char* zx_ENC_SO_dise_Body(struct zx_ctx* c, struct zx_dise_Body_s* x, char* p);
char* zx_ENC_WO_dise_Body(struct zx_ctx* c, struct zx_dise_Body_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_dise_Body(struct zx_ctx* c, struct zx_dise_Body_s* x);
struct zx_str* zx_EASY_ENC_WO_dise_Body(struct zx_ctx* c, struct zx_dise_Body_s* x);

struct zx_dise_Body_s {
  ZX_ELEM_EXT
  zx_dise_Body_EXT
  struct zx_di_SvcMDAssociationAdd_s* SvcMDAssociationAdd;	/* {0,1} nada */
  struct zx_di_SvcMDAssociationAddResponse_s* SvcMDAssociationAddResponse;	/* {0,1} nada */
  struct zx_di_SvcMDAssociationDelete_s* SvcMDAssociationDelete;	/* {0,1} nada */
  struct zx_di_SvcMDAssociationDeleteResponse_s* SvcMDAssociationDeleteResponse;	/* {0,1} nada */
  struct zx_di_SvcMDAssociationQuery_s* SvcMDAssociationQuery;	/* {0,1} nada */
  struct zx_di_SvcMDAssociationQueryResponse_s* SvcMDAssociationQueryResponse;	/* {0,1} nada */
  struct zx_di_SvcMDRegister_s* SvcMDRegister;	/* {0,1} nada */
  struct zx_di_SvcMDRegisterResponse_s* SvcMDRegisterResponse;	/* {0,1} nada */
  struct zx_di_SvcMDDelete_s* SvcMDDelete;	/* {0,1} nada */
  struct zx_di_SvcMDDeleteResponse_s* SvcMDDeleteResponse;	/* {0,1} nada */
  struct zx_di_SvcMDQuery_s* SvcMDQuery;	/* {0,1} nada */
  struct zx_di_SvcMDQueryResponse_s* SvcMDQueryResponse;	/* {0,1} nada */
  struct zx_di_SvcMDReplace_s* SvcMDReplace;	/* {0,1} nada */
  struct zx_di_SvcMDReplaceResponse_s* SvcMDReplaceResponse;	/* {0,1} nada */
  struct zx_dise_Fault_s* Fault;	/* {0,1} nada */
};

struct zx_di_SvcMDAssociationAdd_s* zx_dise_Body_GET_SvcMDAssociationAdd(struct zx_dise_Body_s* x, int n);
struct zx_di_SvcMDAssociationAddResponse_s* zx_dise_Body_GET_SvcMDAssociationAddResponse(struct zx_dise_Body_s* x, int n);
struct zx_di_SvcMDAssociationDelete_s* zx_dise_Body_GET_SvcMDAssociationDelete(struct zx_dise_Body_s* x, int n);
struct zx_di_SvcMDAssociationDeleteResponse_s* zx_dise_Body_GET_SvcMDAssociationDeleteResponse(struct zx_dise_Body_s* x, int n);
struct zx_di_SvcMDAssociationQuery_s* zx_dise_Body_GET_SvcMDAssociationQuery(struct zx_dise_Body_s* x, int n);
struct zx_di_SvcMDAssociationQueryResponse_s* zx_dise_Body_GET_SvcMDAssociationQueryResponse(struct zx_dise_Body_s* x, int n);
struct zx_di_SvcMDRegister_s* zx_dise_Body_GET_SvcMDRegister(struct zx_dise_Body_s* x, int n);
struct zx_di_SvcMDRegisterResponse_s* zx_dise_Body_GET_SvcMDRegisterResponse(struct zx_dise_Body_s* x, int n);
struct zx_di_SvcMDDelete_s* zx_dise_Body_GET_SvcMDDelete(struct zx_dise_Body_s* x, int n);
struct zx_di_SvcMDDeleteResponse_s* zx_dise_Body_GET_SvcMDDeleteResponse(struct zx_dise_Body_s* x, int n);
struct zx_di_SvcMDQuery_s* zx_dise_Body_GET_SvcMDQuery(struct zx_dise_Body_s* x, int n);
struct zx_di_SvcMDQueryResponse_s* zx_dise_Body_GET_SvcMDQueryResponse(struct zx_dise_Body_s* x, int n);
struct zx_di_SvcMDReplace_s* zx_dise_Body_GET_SvcMDReplace(struct zx_dise_Body_s* x, int n);
struct zx_di_SvcMDReplaceResponse_s* zx_dise_Body_GET_SvcMDReplaceResponse(struct zx_dise_Body_s* x, int n);
struct zx_dise_Fault_s* zx_dise_Body_GET_Fault(struct zx_dise_Body_s* x, int n);
int zx_dise_Body_NUM_SvcMDAssociationAdd(struct zx_dise_Body_s* x);
int zx_dise_Body_NUM_SvcMDAssociationAddResponse(struct zx_dise_Body_s* x);
int zx_dise_Body_NUM_SvcMDAssociationDelete(struct zx_dise_Body_s* x);
int zx_dise_Body_NUM_SvcMDAssociationDeleteResponse(struct zx_dise_Body_s* x);
int zx_dise_Body_NUM_SvcMDAssociationQuery(struct zx_dise_Body_s* x);
int zx_dise_Body_NUM_SvcMDAssociationQueryResponse(struct zx_dise_Body_s* x);
int zx_dise_Body_NUM_SvcMDRegister(struct zx_dise_Body_s* x);
int zx_dise_Body_NUM_SvcMDRegisterResponse(struct zx_dise_Body_s* x);
int zx_dise_Body_NUM_SvcMDDelete(struct zx_dise_Body_s* x);
int zx_dise_Body_NUM_SvcMDDeleteResponse(struct zx_dise_Body_s* x);
int zx_dise_Body_NUM_SvcMDQuery(struct zx_dise_Body_s* x);
int zx_dise_Body_NUM_SvcMDQueryResponse(struct zx_dise_Body_s* x);
int zx_dise_Body_NUM_SvcMDReplace(struct zx_dise_Body_s* x);
int zx_dise_Body_NUM_SvcMDReplaceResponse(struct zx_dise_Body_s* x);
int zx_dise_Body_NUM_Fault(struct zx_dise_Body_s* x);
struct zx_di_SvcMDAssociationAdd_s* zx_dise_Body_POP_SvcMDAssociationAdd(struct zx_dise_Body_s* x);
struct zx_di_SvcMDAssociationAddResponse_s* zx_dise_Body_POP_SvcMDAssociationAddResponse(struct zx_dise_Body_s* x);
struct zx_di_SvcMDAssociationDelete_s* zx_dise_Body_POP_SvcMDAssociationDelete(struct zx_dise_Body_s* x);
struct zx_di_SvcMDAssociationDeleteResponse_s* zx_dise_Body_POP_SvcMDAssociationDeleteResponse(struct zx_dise_Body_s* x);
struct zx_di_SvcMDAssociationQuery_s* zx_dise_Body_POP_SvcMDAssociationQuery(struct zx_dise_Body_s* x);
struct zx_di_SvcMDAssociationQueryResponse_s* zx_dise_Body_POP_SvcMDAssociationQueryResponse(struct zx_dise_Body_s* x);
struct zx_di_SvcMDRegister_s* zx_dise_Body_POP_SvcMDRegister(struct zx_dise_Body_s* x);
struct zx_di_SvcMDRegisterResponse_s* zx_dise_Body_POP_SvcMDRegisterResponse(struct zx_dise_Body_s* x);
struct zx_di_SvcMDDelete_s* zx_dise_Body_POP_SvcMDDelete(struct zx_dise_Body_s* x);
struct zx_di_SvcMDDeleteResponse_s* zx_dise_Body_POP_SvcMDDeleteResponse(struct zx_dise_Body_s* x);
struct zx_di_SvcMDQuery_s* zx_dise_Body_POP_SvcMDQuery(struct zx_dise_Body_s* x);
struct zx_di_SvcMDQueryResponse_s* zx_dise_Body_POP_SvcMDQueryResponse(struct zx_dise_Body_s* x);
struct zx_di_SvcMDReplace_s* zx_dise_Body_POP_SvcMDReplace(struct zx_dise_Body_s* x);
struct zx_di_SvcMDReplaceResponse_s* zx_dise_Body_POP_SvcMDReplaceResponse(struct zx_dise_Body_s* x);
struct zx_dise_Fault_s* zx_dise_Body_POP_Fault(struct zx_dise_Body_s* x);
void zx_dise_Body_PUSH_SvcMDAssociationAdd(struct zx_dise_Body_s* x, struct zx_di_SvcMDAssociationAdd_s* y);
void zx_dise_Body_PUSH_SvcMDAssociationAddResponse(struct zx_dise_Body_s* x, struct zx_di_SvcMDAssociationAddResponse_s* y);
void zx_dise_Body_PUSH_SvcMDAssociationDelete(struct zx_dise_Body_s* x, struct zx_di_SvcMDAssociationDelete_s* y);
void zx_dise_Body_PUSH_SvcMDAssociationDeleteResponse(struct zx_dise_Body_s* x, struct zx_di_SvcMDAssociationDeleteResponse_s* y);
void zx_dise_Body_PUSH_SvcMDAssociationQuery(struct zx_dise_Body_s* x, struct zx_di_SvcMDAssociationQuery_s* y);
void zx_dise_Body_PUSH_SvcMDAssociationQueryResponse(struct zx_dise_Body_s* x, struct zx_di_SvcMDAssociationQueryResponse_s* y);
void zx_dise_Body_PUSH_SvcMDRegister(struct zx_dise_Body_s* x, struct zx_di_SvcMDRegister_s* y);
void zx_dise_Body_PUSH_SvcMDRegisterResponse(struct zx_dise_Body_s* x, struct zx_di_SvcMDRegisterResponse_s* y);
void zx_dise_Body_PUSH_SvcMDDelete(struct zx_dise_Body_s* x, struct zx_di_SvcMDDelete_s* y);
void zx_dise_Body_PUSH_SvcMDDeleteResponse(struct zx_dise_Body_s* x, struct zx_di_SvcMDDeleteResponse_s* y);
void zx_dise_Body_PUSH_SvcMDQuery(struct zx_dise_Body_s* x, struct zx_di_SvcMDQuery_s* y);
void zx_dise_Body_PUSH_SvcMDQueryResponse(struct zx_dise_Body_s* x, struct zx_di_SvcMDQueryResponse_s* y);
void zx_dise_Body_PUSH_SvcMDReplace(struct zx_dise_Body_s* x, struct zx_di_SvcMDReplace_s* y);
void zx_dise_Body_PUSH_SvcMDReplaceResponse(struct zx_dise_Body_s* x, struct zx_di_SvcMDReplaceResponse_s* y);
void zx_dise_Body_PUSH_Fault(struct zx_dise_Body_s* x, struct zx_dise_Fault_s* y);
void zx_dise_Body_PUT_SvcMDAssociationAdd(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDAssociationAdd_s* y);
void zx_dise_Body_PUT_SvcMDAssociationAddResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDAssociationAddResponse_s* y);
void zx_dise_Body_PUT_SvcMDAssociationDelete(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDAssociationDelete_s* y);
void zx_dise_Body_PUT_SvcMDAssociationDeleteResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDAssociationDeleteResponse_s* y);
void zx_dise_Body_PUT_SvcMDAssociationQuery(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDAssociationQuery_s* y);
void zx_dise_Body_PUT_SvcMDAssociationQueryResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDAssociationQueryResponse_s* y);
void zx_dise_Body_PUT_SvcMDRegister(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDRegister_s* y);
void zx_dise_Body_PUT_SvcMDRegisterResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDRegisterResponse_s* y);
void zx_dise_Body_PUT_SvcMDDelete(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDDelete_s* y);
void zx_dise_Body_PUT_SvcMDDeleteResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDDeleteResponse_s* y);
void zx_dise_Body_PUT_SvcMDQuery(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDQuery_s* y);
void zx_dise_Body_PUT_SvcMDQueryResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDQueryResponse_s* y);
void zx_dise_Body_PUT_SvcMDReplace(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDReplace_s* y);
void zx_dise_Body_PUT_SvcMDReplaceResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDReplaceResponse_s* y);
void zx_dise_Body_PUT_Fault(struct zx_dise_Body_s* x, int n, struct zx_dise_Fault_s* y);
void zx_dise_Body_ADD_SvcMDAssociationAdd(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDAssociationAdd_s* z);
void zx_dise_Body_ADD_SvcMDAssociationAddResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDAssociationAddResponse_s* z);
void zx_dise_Body_ADD_SvcMDAssociationDelete(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDAssociationDelete_s* z);
void zx_dise_Body_ADD_SvcMDAssociationDeleteResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDAssociationDeleteResponse_s* z);
void zx_dise_Body_ADD_SvcMDAssociationQuery(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDAssociationQuery_s* z);
void zx_dise_Body_ADD_SvcMDAssociationQueryResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDAssociationQueryResponse_s* z);
void zx_dise_Body_ADD_SvcMDRegister(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDRegister_s* z);
void zx_dise_Body_ADD_SvcMDRegisterResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDRegisterResponse_s* z);
void zx_dise_Body_ADD_SvcMDDelete(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDDelete_s* z);
void zx_dise_Body_ADD_SvcMDDeleteResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDDeleteResponse_s* z);
void zx_dise_Body_ADD_SvcMDQuery(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDQuery_s* z);
void zx_dise_Body_ADD_SvcMDQueryResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDQueryResponse_s* z);
void zx_dise_Body_ADD_SvcMDReplace(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDReplace_s* z);
void zx_dise_Body_ADD_SvcMDReplaceResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDReplaceResponse_s* z);
void zx_dise_Body_ADD_Fault(struct zx_dise_Body_s* x, int n, struct zx_dise_Fault_s* z);
void zx_dise_Body_DEL_SvcMDAssociationAdd(struct zx_dise_Body_s* x, int n);
void zx_dise_Body_DEL_SvcMDAssociationAddResponse(struct zx_dise_Body_s* x, int n);
void zx_dise_Body_DEL_SvcMDAssociationDelete(struct zx_dise_Body_s* x, int n);
void zx_dise_Body_DEL_SvcMDAssociationDeleteResponse(struct zx_dise_Body_s* x, int n);
void zx_dise_Body_DEL_SvcMDAssociationQuery(struct zx_dise_Body_s* x, int n);
void zx_dise_Body_DEL_SvcMDAssociationQueryResponse(struct zx_dise_Body_s* x, int n);
void zx_dise_Body_DEL_SvcMDRegister(struct zx_dise_Body_s* x, int n);
void zx_dise_Body_DEL_SvcMDRegisterResponse(struct zx_dise_Body_s* x, int n);
void zx_dise_Body_DEL_SvcMDDelete(struct zx_dise_Body_s* x, int n);
void zx_dise_Body_DEL_SvcMDDeleteResponse(struct zx_dise_Body_s* x, int n);
void zx_dise_Body_DEL_SvcMDQuery(struct zx_dise_Body_s* x, int n);
void zx_dise_Body_DEL_SvcMDQueryResponse(struct zx_dise_Body_s* x, int n);
void zx_dise_Body_DEL_SvcMDReplace(struct zx_dise_Body_s* x, int n);
void zx_dise_Body_DEL_SvcMDReplaceResponse(struct zx_dise_Body_s* x, int n);
void zx_dise_Body_DEL_Fault(struct zx_dise_Body_s* x, int n);
void zx_dise_Body_REV_SvcMDAssociationAdd(struct zx_dise_Body_s* x);
void zx_dise_Body_REV_SvcMDAssociationAddResponse(struct zx_dise_Body_s* x);
void zx_dise_Body_REV_SvcMDAssociationDelete(struct zx_dise_Body_s* x);
void zx_dise_Body_REV_SvcMDAssociationDeleteResponse(struct zx_dise_Body_s* x);
void zx_dise_Body_REV_SvcMDAssociationQuery(struct zx_dise_Body_s* x);
void zx_dise_Body_REV_SvcMDAssociationQueryResponse(struct zx_dise_Body_s* x);
void zx_dise_Body_REV_SvcMDRegister(struct zx_dise_Body_s* x);
void zx_dise_Body_REV_SvcMDRegisterResponse(struct zx_dise_Body_s* x);
void zx_dise_Body_REV_SvcMDDelete(struct zx_dise_Body_s* x);
void zx_dise_Body_REV_SvcMDDeleteResponse(struct zx_dise_Body_s* x);
void zx_dise_Body_REV_SvcMDQuery(struct zx_dise_Body_s* x);
void zx_dise_Body_REV_SvcMDQueryResponse(struct zx_dise_Body_s* x);
void zx_dise_Body_REV_SvcMDReplace(struct zx_dise_Body_s* x);
void zx_dise_Body_REV_SvcMDReplaceResponse(struct zx_dise_Body_s* x);
void zx_dise_Body_REV_Fault(struct zx_dise_Body_s* x);

/* -------------------------- dise_Envelope -------------------------- */
/* refby( ) */
#ifndef zx_dise_Envelope_EXT
#define zx_dise_Envelope_EXT
#endif

struct zx_dise_Envelope_s* zx_DEC_dise_Envelope(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_dise_Envelope_s* zx_NEW_dise_Envelope(struct zx_ctx* c);
struct zx_dise_Envelope_s* zx_DEEP_CLONE_dise_Envelope(struct zx_ctx* c, struct zx_dise_Envelope_s* x, int dup_strs);
void zx_DUP_STRS_dise_Envelope(struct zx_ctx* c, struct zx_dise_Envelope_s* x);
void zx_FREE_dise_Envelope(struct zx_ctx* c, struct zx_dise_Envelope_s* x, int free_strs);
int zx_WALK_SO_dise_Envelope(struct zx_ctx* c, struct zx_dise_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_dise_Envelope(struct zx_ctx* c, struct zx_dise_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_SO_dise_Envelope(struct zx_ctx* c, struct zx_dise_Envelope_s* x);
int zx_LEN_WO_dise_Envelope(struct zx_ctx* c, struct zx_dise_Envelope_s* x);
char* zx_ENC_SO_dise_Envelope(struct zx_ctx* c, struct zx_dise_Envelope_s* x, char* p);
char* zx_ENC_WO_dise_Envelope(struct zx_ctx* c, struct zx_dise_Envelope_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_dise_Envelope(struct zx_ctx* c, struct zx_dise_Envelope_s* x);
struct zx_str* zx_EASY_ENC_WO_dise_Envelope(struct zx_ctx* c, struct zx_dise_Envelope_s* x);

struct zx_dise_Envelope_s {
  ZX_ELEM_EXT
  zx_dise_Envelope_EXT
  struct zx_dise_Header_s* Header;	/* {0,1} nada */
  struct zx_dise_Body_s* Body;	/* {1,1} nada */
};

struct zx_dise_Header_s* zx_dise_Envelope_GET_Header(struct zx_dise_Envelope_s* x, int n);
struct zx_dise_Body_s* zx_dise_Envelope_GET_Body(struct zx_dise_Envelope_s* x, int n);
int zx_dise_Envelope_NUM_Header(struct zx_dise_Envelope_s* x);
int zx_dise_Envelope_NUM_Body(struct zx_dise_Envelope_s* x);
struct zx_dise_Header_s* zx_dise_Envelope_POP_Header(struct zx_dise_Envelope_s* x);
struct zx_dise_Body_s* zx_dise_Envelope_POP_Body(struct zx_dise_Envelope_s* x);
void zx_dise_Envelope_PUSH_Header(struct zx_dise_Envelope_s* x, struct zx_dise_Header_s* y);
void zx_dise_Envelope_PUSH_Body(struct zx_dise_Envelope_s* x, struct zx_dise_Body_s* y);
void zx_dise_Envelope_PUT_Header(struct zx_dise_Envelope_s* x, int n, struct zx_dise_Header_s* y);
void zx_dise_Envelope_PUT_Body(struct zx_dise_Envelope_s* x, int n, struct zx_dise_Body_s* y);
void zx_dise_Envelope_ADD_Header(struct zx_dise_Envelope_s* x, int n, struct zx_dise_Header_s* z);
void zx_dise_Envelope_ADD_Body(struct zx_dise_Envelope_s* x, int n, struct zx_dise_Body_s* z);
void zx_dise_Envelope_DEL_Header(struct zx_dise_Envelope_s* x, int n);
void zx_dise_Envelope_DEL_Body(struct zx_dise_Envelope_s* x, int n);
void zx_dise_Envelope_REV_Header(struct zx_dise_Envelope_s* x);
void zx_dise_Envelope_REV_Body(struct zx_dise_Envelope_s* x);

/* -------------------------- dise_Fault -------------------------- */
/* refby( zx_dise_Body_s ) */
#ifndef zx_dise_Fault_EXT
#define zx_dise_Fault_EXT
#endif

struct zx_dise_Fault_s* zx_DEC_dise_Fault(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_dise_Fault_s* zx_NEW_dise_Fault(struct zx_ctx* c);
struct zx_dise_Fault_s* zx_DEEP_CLONE_dise_Fault(struct zx_ctx* c, struct zx_dise_Fault_s* x, int dup_strs);
void zx_DUP_STRS_dise_Fault(struct zx_ctx* c, struct zx_dise_Fault_s* x);
void zx_FREE_dise_Fault(struct zx_ctx* c, struct zx_dise_Fault_s* x, int free_strs);
int zx_WALK_SO_dise_Fault(struct zx_ctx* c, struct zx_dise_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_dise_Fault(struct zx_ctx* c, struct zx_dise_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_SO_dise_Fault(struct zx_ctx* c, struct zx_dise_Fault_s* x);
int zx_LEN_WO_dise_Fault(struct zx_ctx* c, struct zx_dise_Fault_s* x);
char* zx_ENC_SO_dise_Fault(struct zx_ctx* c, struct zx_dise_Fault_s* x, char* p);
char* zx_ENC_WO_dise_Fault(struct zx_ctx* c, struct zx_dise_Fault_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_dise_Fault(struct zx_ctx* c, struct zx_dise_Fault_s* x);
struct zx_str* zx_EASY_ENC_WO_dise_Fault(struct zx_ctx* c, struct zx_dise_Fault_s* x);

struct zx_dise_Fault_s {
  ZX_ELEM_EXT
  zx_dise_Fault_EXT
  struct zx_elem_s* faultcode;	/* {1,1} xs:QName */
  struct zx_elem_s* faultstring;	/* {1,1} xs:string */
  struct zx_elem_s* faultactor;	/* {0,1} xs:anyURI */
  struct zx_dise_detail_s* detail;	/* {0,1}  */
};

struct zx_elem_s* zx_dise_Fault_GET_faultcode(struct zx_dise_Fault_s* x, int n);
struct zx_elem_s* zx_dise_Fault_GET_faultstring(struct zx_dise_Fault_s* x, int n);
struct zx_elem_s* zx_dise_Fault_GET_faultactor(struct zx_dise_Fault_s* x, int n);
struct zx_dise_detail_s* zx_dise_Fault_GET_detail(struct zx_dise_Fault_s* x, int n);
int zx_dise_Fault_NUM_faultcode(struct zx_dise_Fault_s* x);
int zx_dise_Fault_NUM_faultstring(struct zx_dise_Fault_s* x);
int zx_dise_Fault_NUM_faultactor(struct zx_dise_Fault_s* x);
int zx_dise_Fault_NUM_detail(struct zx_dise_Fault_s* x);
struct zx_elem_s* zx_dise_Fault_POP_faultcode(struct zx_dise_Fault_s* x);
struct zx_elem_s* zx_dise_Fault_POP_faultstring(struct zx_dise_Fault_s* x);
struct zx_elem_s* zx_dise_Fault_POP_faultactor(struct zx_dise_Fault_s* x);
struct zx_dise_detail_s* zx_dise_Fault_POP_detail(struct zx_dise_Fault_s* x);
void zx_dise_Fault_PUSH_faultcode(struct zx_dise_Fault_s* x, struct zx_elem_s* y);
void zx_dise_Fault_PUSH_faultstring(struct zx_dise_Fault_s* x, struct zx_elem_s* y);
void zx_dise_Fault_PUSH_faultactor(struct zx_dise_Fault_s* x, struct zx_elem_s* y);
void zx_dise_Fault_PUSH_detail(struct zx_dise_Fault_s* x, struct zx_dise_detail_s* y);
void zx_dise_Fault_PUT_faultcode(struct zx_dise_Fault_s* x, int n, struct zx_elem_s* y);
void zx_dise_Fault_PUT_faultstring(struct zx_dise_Fault_s* x, int n, struct zx_elem_s* y);
void zx_dise_Fault_PUT_faultactor(struct zx_dise_Fault_s* x, int n, struct zx_elem_s* y);
void zx_dise_Fault_PUT_detail(struct zx_dise_Fault_s* x, int n, struct zx_dise_detail_s* y);
void zx_dise_Fault_ADD_faultcode(struct zx_dise_Fault_s* x, int n, struct zx_elem_s* z);
void zx_dise_Fault_ADD_faultstring(struct zx_dise_Fault_s* x, int n, struct zx_elem_s* z);
void zx_dise_Fault_ADD_faultactor(struct zx_dise_Fault_s* x, int n, struct zx_elem_s* z);
void zx_dise_Fault_ADD_detail(struct zx_dise_Fault_s* x, int n, struct zx_dise_detail_s* z);
void zx_dise_Fault_DEL_faultcode(struct zx_dise_Fault_s* x, int n);
void zx_dise_Fault_DEL_faultstring(struct zx_dise_Fault_s* x, int n);
void zx_dise_Fault_DEL_faultactor(struct zx_dise_Fault_s* x, int n);
void zx_dise_Fault_DEL_detail(struct zx_dise_Fault_s* x, int n);
void zx_dise_Fault_REV_faultcode(struct zx_dise_Fault_s* x);
void zx_dise_Fault_REV_faultstring(struct zx_dise_Fault_s* x);
void zx_dise_Fault_REV_faultactor(struct zx_dise_Fault_s* x);
void zx_dise_Fault_REV_detail(struct zx_dise_Fault_s* x);

/* -------------------------- dise_Header -------------------------- */
/* refby( zx_dise_Envelope_s ) */
#ifndef zx_dise_Header_EXT
#define zx_dise_Header_EXT
#endif

struct zx_dise_Header_s* zx_DEC_dise_Header(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_dise_Header_s* zx_NEW_dise_Header(struct zx_ctx* c);
struct zx_dise_Header_s* zx_DEEP_CLONE_dise_Header(struct zx_ctx* c, struct zx_dise_Header_s* x, int dup_strs);
void zx_DUP_STRS_dise_Header(struct zx_ctx* c, struct zx_dise_Header_s* x);
void zx_FREE_dise_Header(struct zx_ctx* c, struct zx_dise_Header_s* x, int free_strs);
int zx_WALK_SO_dise_Header(struct zx_ctx* c, struct zx_dise_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_dise_Header(struct zx_ctx* c, struct zx_dise_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_SO_dise_Header(struct zx_ctx* c, struct zx_dise_Header_s* x);
int zx_LEN_WO_dise_Header(struct zx_ctx* c, struct zx_dise_Header_s* x);
char* zx_ENC_SO_dise_Header(struct zx_ctx* c, struct zx_dise_Header_s* x, char* p);
char* zx_ENC_WO_dise_Header(struct zx_ctx* c, struct zx_dise_Header_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_dise_Header(struct zx_ctx* c, struct zx_dise_Header_s* x);
struct zx_str* zx_EASY_ENC_WO_dise_Header(struct zx_ctx* c, struct zx_dise_Header_s* x);

struct zx_dise_Header_s {
  ZX_ELEM_EXT
  zx_dise_Header_EXT
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
  struct zx_b_CredentialsContext_s* CredentialsContext;	/* {0,1} nada */
  struct zx_b_EndpointUpdate_s* EndpointUpdate;	/* {0,1} nada */
  struct zx_elem_s* Timeout;	/* {0,1} TimeoutType */
  struct zx_b_ProcessingContext_s* ProcessingContext;	/* {0,1} nada */
  struct zx_b_ApplicationEPR_s* ApplicationEPR;	/* {0,1} nada */
  struct zx_b_RedirectRequest_s* RedirectRequest;	/* {0,1}  */
};

struct zx_a_MessageID_s* zx_dise_Header_GET_MessageID(struct zx_dise_Header_s* x, int n);
struct zx_a_RelatesTo_s* zx_dise_Header_GET_RelatesTo(struct zx_dise_Header_s* x, int n);
struct zx_a_ReplyTo_s* zx_dise_Header_GET_ReplyTo(struct zx_dise_Header_s* x, int n);
struct zx_a_From_s* zx_dise_Header_GET_From(struct zx_dise_Header_s* x, int n);
struct zx_a_FaultTo_s* zx_dise_Header_GET_FaultTo(struct zx_dise_Header_s* x, int n);
struct zx_a_To_s* zx_dise_Header_GET_To(struct zx_dise_Header_s* x, int n);
struct zx_a_Action_s* zx_dise_Header_GET_Action(struct zx_dise_Header_s* x, int n);
struct zx_sbf_Framework_s* zx_dise_Header_GET_Framework(struct zx_dise_Header_s* x, int n);
struct zx_b_Framework_s* zx_dise_Header_GET_b_Framework(struct zx_dise_Header_s* x, int n);
struct zx_b_Sender_s* zx_dise_Header_GET_Sender(struct zx_dise_Header_s* x, int n);
struct zx_b_CredentialsContext_s* zx_dise_Header_GET_CredentialsContext(struct zx_dise_Header_s* x, int n);
struct zx_b_EndpointUpdate_s* zx_dise_Header_GET_EndpointUpdate(struct zx_dise_Header_s* x, int n);
struct zx_elem_s* zx_dise_Header_GET_Timeout(struct zx_dise_Header_s* x, int n);
struct zx_b_ProcessingContext_s* zx_dise_Header_GET_ProcessingContext(struct zx_dise_Header_s* x, int n);
struct zx_b_ApplicationEPR_s* zx_dise_Header_GET_ApplicationEPR(struct zx_dise_Header_s* x, int n);
struct zx_b_RedirectRequest_s* zx_dise_Header_GET_RedirectRequest(struct zx_dise_Header_s* x, int n);
int zx_dise_Header_NUM_MessageID(struct zx_dise_Header_s* x);
int zx_dise_Header_NUM_RelatesTo(struct zx_dise_Header_s* x);
int zx_dise_Header_NUM_ReplyTo(struct zx_dise_Header_s* x);
int zx_dise_Header_NUM_From(struct zx_dise_Header_s* x);
int zx_dise_Header_NUM_FaultTo(struct zx_dise_Header_s* x);
int zx_dise_Header_NUM_To(struct zx_dise_Header_s* x);
int zx_dise_Header_NUM_Action(struct zx_dise_Header_s* x);
int zx_dise_Header_NUM_Framework(struct zx_dise_Header_s* x);
int zx_dise_Header_NUM_b_Framework(struct zx_dise_Header_s* x);
int zx_dise_Header_NUM_Sender(struct zx_dise_Header_s* x);
int zx_dise_Header_NUM_CredentialsContext(struct zx_dise_Header_s* x);
int zx_dise_Header_NUM_EndpointUpdate(struct zx_dise_Header_s* x);
int zx_dise_Header_NUM_Timeout(struct zx_dise_Header_s* x);
int zx_dise_Header_NUM_ProcessingContext(struct zx_dise_Header_s* x);
int zx_dise_Header_NUM_ApplicationEPR(struct zx_dise_Header_s* x);
int zx_dise_Header_NUM_RedirectRequest(struct zx_dise_Header_s* x);
struct zx_a_MessageID_s* zx_dise_Header_POP_MessageID(struct zx_dise_Header_s* x);
struct zx_a_RelatesTo_s* zx_dise_Header_POP_RelatesTo(struct zx_dise_Header_s* x);
struct zx_a_ReplyTo_s* zx_dise_Header_POP_ReplyTo(struct zx_dise_Header_s* x);
struct zx_a_From_s* zx_dise_Header_POP_From(struct zx_dise_Header_s* x);
struct zx_a_FaultTo_s* zx_dise_Header_POP_FaultTo(struct zx_dise_Header_s* x);
struct zx_a_To_s* zx_dise_Header_POP_To(struct zx_dise_Header_s* x);
struct zx_a_Action_s* zx_dise_Header_POP_Action(struct zx_dise_Header_s* x);
struct zx_sbf_Framework_s* zx_dise_Header_POP_Framework(struct zx_dise_Header_s* x);
struct zx_b_Framework_s* zx_dise_Header_POP_b_Framework(struct zx_dise_Header_s* x);
struct zx_b_Sender_s* zx_dise_Header_POP_Sender(struct zx_dise_Header_s* x);
struct zx_b_CredentialsContext_s* zx_dise_Header_POP_CredentialsContext(struct zx_dise_Header_s* x);
struct zx_b_EndpointUpdate_s* zx_dise_Header_POP_EndpointUpdate(struct zx_dise_Header_s* x);
struct zx_elem_s* zx_dise_Header_POP_Timeout(struct zx_dise_Header_s* x);
struct zx_b_ProcessingContext_s* zx_dise_Header_POP_ProcessingContext(struct zx_dise_Header_s* x);
struct zx_b_ApplicationEPR_s* zx_dise_Header_POP_ApplicationEPR(struct zx_dise_Header_s* x);
struct zx_b_RedirectRequest_s* zx_dise_Header_POP_RedirectRequest(struct zx_dise_Header_s* x);
void zx_dise_Header_PUSH_MessageID(struct zx_dise_Header_s* x, struct zx_a_MessageID_s* y);
void zx_dise_Header_PUSH_RelatesTo(struct zx_dise_Header_s* x, struct zx_a_RelatesTo_s* y);
void zx_dise_Header_PUSH_ReplyTo(struct zx_dise_Header_s* x, struct zx_a_ReplyTo_s* y);
void zx_dise_Header_PUSH_From(struct zx_dise_Header_s* x, struct zx_a_From_s* y);
void zx_dise_Header_PUSH_FaultTo(struct zx_dise_Header_s* x, struct zx_a_FaultTo_s* y);
void zx_dise_Header_PUSH_To(struct zx_dise_Header_s* x, struct zx_a_To_s* y);
void zx_dise_Header_PUSH_Action(struct zx_dise_Header_s* x, struct zx_a_Action_s* y);
void zx_dise_Header_PUSH_Framework(struct zx_dise_Header_s* x, struct zx_sbf_Framework_s* y);
void zx_dise_Header_PUSH_b_Framework(struct zx_dise_Header_s* x, struct zx_b_Framework_s* y);
void zx_dise_Header_PUSH_Sender(struct zx_dise_Header_s* x, struct zx_b_Sender_s* y);
void zx_dise_Header_PUSH_CredentialsContext(struct zx_dise_Header_s* x, struct zx_b_CredentialsContext_s* y);
void zx_dise_Header_PUSH_EndpointUpdate(struct zx_dise_Header_s* x, struct zx_b_EndpointUpdate_s* y);
void zx_dise_Header_PUSH_Timeout(struct zx_dise_Header_s* x, struct zx_elem_s* y);
void zx_dise_Header_PUSH_ProcessingContext(struct zx_dise_Header_s* x, struct zx_b_ProcessingContext_s* y);
void zx_dise_Header_PUSH_ApplicationEPR(struct zx_dise_Header_s* x, struct zx_b_ApplicationEPR_s* y);
void zx_dise_Header_PUSH_RedirectRequest(struct zx_dise_Header_s* x, struct zx_b_RedirectRequest_s* y);
void zx_dise_Header_PUT_MessageID(struct zx_dise_Header_s* x, int n, struct zx_a_MessageID_s* y);
void zx_dise_Header_PUT_RelatesTo(struct zx_dise_Header_s* x, int n, struct zx_a_RelatesTo_s* y);
void zx_dise_Header_PUT_ReplyTo(struct zx_dise_Header_s* x, int n, struct zx_a_ReplyTo_s* y);
void zx_dise_Header_PUT_From(struct zx_dise_Header_s* x, int n, struct zx_a_From_s* y);
void zx_dise_Header_PUT_FaultTo(struct zx_dise_Header_s* x, int n, struct zx_a_FaultTo_s* y);
void zx_dise_Header_PUT_To(struct zx_dise_Header_s* x, int n, struct zx_a_To_s* y);
void zx_dise_Header_PUT_Action(struct zx_dise_Header_s* x, int n, struct zx_a_Action_s* y);
void zx_dise_Header_PUT_Framework(struct zx_dise_Header_s* x, int n, struct zx_sbf_Framework_s* y);
void zx_dise_Header_PUT_b_Framework(struct zx_dise_Header_s* x, int n, struct zx_b_Framework_s* y);
void zx_dise_Header_PUT_Sender(struct zx_dise_Header_s* x, int n, struct zx_b_Sender_s* y);
void zx_dise_Header_PUT_CredentialsContext(struct zx_dise_Header_s* x, int n, struct zx_b_CredentialsContext_s* y);
void zx_dise_Header_PUT_EndpointUpdate(struct zx_dise_Header_s* x, int n, struct zx_b_EndpointUpdate_s* y);
void zx_dise_Header_PUT_Timeout(struct zx_dise_Header_s* x, int n, struct zx_elem_s* y);
void zx_dise_Header_PUT_ProcessingContext(struct zx_dise_Header_s* x, int n, struct zx_b_ProcessingContext_s* y);
void zx_dise_Header_PUT_ApplicationEPR(struct zx_dise_Header_s* x, int n, struct zx_b_ApplicationEPR_s* y);
void zx_dise_Header_PUT_RedirectRequest(struct zx_dise_Header_s* x, int n, struct zx_b_RedirectRequest_s* y);
void zx_dise_Header_ADD_MessageID(struct zx_dise_Header_s* x, int n, struct zx_a_MessageID_s* z);
void zx_dise_Header_ADD_RelatesTo(struct zx_dise_Header_s* x, int n, struct zx_a_RelatesTo_s* z);
void zx_dise_Header_ADD_ReplyTo(struct zx_dise_Header_s* x, int n, struct zx_a_ReplyTo_s* z);
void zx_dise_Header_ADD_From(struct zx_dise_Header_s* x, int n, struct zx_a_From_s* z);
void zx_dise_Header_ADD_FaultTo(struct zx_dise_Header_s* x, int n, struct zx_a_FaultTo_s* z);
void zx_dise_Header_ADD_To(struct zx_dise_Header_s* x, int n, struct zx_a_To_s* z);
void zx_dise_Header_ADD_Action(struct zx_dise_Header_s* x, int n, struct zx_a_Action_s* z);
void zx_dise_Header_ADD_Framework(struct zx_dise_Header_s* x, int n, struct zx_sbf_Framework_s* z);
void zx_dise_Header_ADD_b_Framework(struct zx_dise_Header_s* x, int n, struct zx_b_Framework_s* z);
void zx_dise_Header_ADD_Sender(struct zx_dise_Header_s* x, int n, struct zx_b_Sender_s* z);
void zx_dise_Header_ADD_CredentialsContext(struct zx_dise_Header_s* x, int n, struct zx_b_CredentialsContext_s* z);
void zx_dise_Header_ADD_EndpointUpdate(struct zx_dise_Header_s* x, int n, struct zx_b_EndpointUpdate_s* z);
void zx_dise_Header_ADD_Timeout(struct zx_dise_Header_s* x, int n, struct zx_elem_s* z);
void zx_dise_Header_ADD_ProcessingContext(struct zx_dise_Header_s* x, int n, struct zx_b_ProcessingContext_s* z);
void zx_dise_Header_ADD_ApplicationEPR(struct zx_dise_Header_s* x, int n, struct zx_b_ApplicationEPR_s* z);
void zx_dise_Header_ADD_RedirectRequest(struct zx_dise_Header_s* x, int n, struct zx_b_RedirectRequest_s* z);
void zx_dise_Header_DEL_MessageID(struct zx_dise_Header_s* x, int n);
void zx_dise_Header_DEL_RelatesTo(struct zx_dise_Header_s* x, int n);
void zx_dise_Header_DEL_ReplyTo(struct zx_dise_Header_s* x, int n);
void zx_dise_Header_DEL_From(struct zx_dise_Header_s* x, int n);
void zx_dise_Header_DEL_FaultTo(struct zx_dise_Header_s* x, int n);
void zx_dise_Header_DEL_To(struct zx_dise_Header_s* x, int n);
void zx_dise_Header_DEL_Action(struct zx_dise_Header_s* x, int n);
void zx_dise_Header_DEL_Framework(struct zx_dise_Header_s* x, int n);
void zx_dise_Header_DEL_b_Framework(struct zx_dise_Header_s* x, int n);
void zx_dise_Header_DEL_Sender(struct zx_dise_Header_s* x, int n);
void zx_dise_Header_DEL_CredentialsContext(struct zx_dise_Header_s* x, int n);
void zx_dise_Header_DEL_EndpointUpdate(struct zx_dise_Header_s* x, int n);
void zx_dise_Header_DEL_Timeout(struct zx_dise_Header_s* x, int n);
void zx_dise_Header_DEL_ProcessingContext(struct zx_dise_Header_s* x, int n);
void zx_dise_Header_DEL_ApplicationEPR(struct zx_dise_Header_s* x, int n);
void zx_dise_Header_DEL_RedirectRequest(struct zx_dise_Header_s* x, int n);
void zx_dise_Header_REV_MessageID(struct zx_dise_Header_s* x);
void zx_dise_Header_REV_RelatesTo(struct zx_dise_Header_s* x);
void zx_dise_Header_REV_ReplyTo(struct zx_dise_Header_s* x);
void zx_dise_Header_REV_From(struct zx_dise_Header_s* x);
void zx_dise_Header_REV_FaultTo(struct zx_dise_Header_s* x);
void zx_dise_Header_REV_To(struct zx_dise_Header_s* x);
void zx_dise_Header_REV_Action(struct zx_dise_Header_s* x);
void zx_dise_Header_REV_Framework(struct zx_dise_Header_s* x);
void zx_dise_Header_REV_b_Framework(struct zx_dise_Header_s* x);
void zx_dise_Header_REV_Sender(struct zx_dise_Header_s* x);
void zx_dise_Header_REV_CredentialsContext(struct zx_dise_Header_s* x);
void zx_dise_Header_REV_EndpointUpdate(struct zx_dise_Header_s* x);
void zx_dise_Header_REV_Timeout(struct zx_dise_Header_s* x);
void zx_dise_Header_REV_ProcessingContext(struct zx_dise_Header_s* x);
void zx_dise_Header_REV_ApplicationEPR(struct zx_dise_Header_s* x);
void zx_dise_Header_REV_RedirectRequest(struct zx_dise_Header_s* x);

/* -------------------------- dise_detail -------------------------- */
/* refby( zx_dise_Fault_s ) */
#ifndef zx_dise_detail_EXT
#define zx_dise_detail_EXT
#endif

struct zx_dise_detail_s* zx_DEC_dise_detail(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_dise_detail_s* zx_NEW_dise_detail(struct zx_ctx* c);
struct zx_dise_detail_s* zx_DEEP_CLONE_dise_detail(struct zx_ctx* c, struct zx_dise_detail_s* x, int dup_strs);
void zx_DUP_STRS_dise_detail(struct zx_ctx* c, struct zx_dise_detail_s* x);
void zx_FREE_dise_detail(struct zx_ctx* c, struct zx_dise_detail_s* x, int free_strs);
int zx_WALK_SO_dise_detail(struct zx_ctx* c, struct zx_dise_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_dise_detail(struct zx_ctx* c, struct zx_dise_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_SO_dise_detail(struct zx_ctx* c, struct zx_dise_detail_s* x);
int zx_LEN_WO_dise_detail(struct zx_ctx* c, struct zx_dise_detail_s* x);
char* zx_ENC_SO_dise_detail(struct zx_ctx* c, struct zx_dise_detail_s* x, char* p);
char* zx_ENC_WO_dise_detail(struct zx_ctx* c, struct zx_dise_detail_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_dise_detail(struct zx_ctx* c, struct zx_dise_detail_s* x);
struct zx_str* zx_EASY_ENC_WO_dise_detail(struct zx_ctx* c, struct zx_dise_detail_s* x);

struct zx_dise_detail_s {
  ZX_ELEM_EXT
  zx_dise_detail_EXT
};



#endif
