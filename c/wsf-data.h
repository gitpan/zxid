/* c/wsf-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_wsf_data_h
#define _c_wsf_data_h

#include "zx.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

extern const struct zx_tok zxwsf_attrs[];    /* gperf generated, see *-attrs.c */
extern const struct zx_tok zxwsf_elems[];    /* gperf generated, see *-elems.c */
const struct zx_tok* zxwsf_attr2tok(const char* s, unsigned int len);
const struct zx_tok* zxwsf_elem2tok(const char* s, unsigned int len);
int zxwsf_attr_lookup(struct zx_ctx* c, char* name, char* lim);
int zxwsf_elem_lookup(struct zx_ctx* c, char* name, char* lim);
/* -------------------------- a_Action -------------------------- */
/* refby( zxwsf_e_Header_s zxwsf_dise_Header_s zxwsf_a_ProblemAction_s ) */
#ifndef zxwsf_a_Action_EXT
#define zxwsf_a_Action_EXT
#endif

struct zxwsf_a_Action_s* zxwsf_DEC_a_Action(struct zx_ctx* c);
struct zxwsf_a_Action_s* zxwsf_NEW_a_Action(struct zx_ctx* c);
struct zxwsf_a_Action_s* zxwsf_DEEP_CLONE_a_Action(struct zx_ctx* c, struct zxwsf_a_Action_s* x, int dup_strs);
void zxwsf_DUP_STRS_a_Action(struct zx_ctx* c, struct zxwsf_a_Action_s* x);
void zxwsf_FREE_a_Action(struct zx_ctx* c, struct zxwsf_a_Action_s* x, int free_strs);
int zxwsf_WALK_SO_a_Action(struct zx_ctx* c, struct zxwsf_a_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_a_Action(struct zx_ctx* c, struct zxwsf_a_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_a_Action(struct zxwsf_a_Action_s* x);
char* zxwsf_ENC_SO_a_Action(struct zxwsf_a_Action_s* x, char* p);
char* zxwsf_ENC_WO_a_Action(struct zxwsf_a_Action_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_a_Action(struct zx_ctx* c, struct zxwsf_a_Action_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_a_Action(struct zx_ctx* c, struct zxwsf_a_Action_s* x);

struct zxwsf_a_Action_s {
  ZX_ELEM_EXT
  zxwsf_a_Action_EXT
};


/* -------------------------- a_Address -------------------------- */
/* refby( zxwsf_a_From_s zxwsf_a_FaultTo_s zxwsf_b_InteractionService_s zxwsf_b_EndpointUpdate_s zxwsf_b_ApplicationEPR_s zxwsf_a_ReplyTo_s zxwsf_a_EndpointReference_s ) */
#ifndef zxwsf_a_Address_EXT
#define zxwsf_a_Address_EXT
#endif

struct zxwsf_a_Address_s* zxwsf_DEC_a_Address(struct zx_ctx* c);
struct zxwsf_a_Address_s* zxwsf_NEW_a_Address(struct zx_ctx* c);
struct zxwsf_a_Address_s* zxwsf_DEEP_CLONE_a_Address(struct zx_ctx* c, struct zxwsf_a_Address_s* x, int dup_strs);
void zxwsf_DUP_STRS_a_Address(struct zx_ctx* c, struct zxwsf_a_Address_s* x);
void zxwsf_FREE_a_Address(struct zx_ctx* c, struct zxwsf_a_Address_s* x, int free_strs);
int zxwsf_WALK_SO_a_Address(struct zx_ctx* c, struct zxwsf_a_Address_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_a_Address(struct zx_ctx* c, struct zxwsf_a_Address_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_a_Address(struct zxwsf_a_Address_s* x);
char* zxwsf_ENC_SO_a_Address(struct zxwsf_a_Address_s* x, char* p);
char* zxwsf_ENC_WO_a_Address(struct zxwsf_a_Address_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_a_Address(struct zx_ctx* c, struct zxwsf_a_Address_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_a_Address(struct zx_ctx* c, struct zxwsf_a_Address_s* x);

struct zxwsf_a_Address_s {
  ZX_ELEM_EXT
  zxwsf_a_Address_EXT
};


/* -------------------------- a_EndpointReference -------------------------- */
/* refby( zxwsf_di_QueryResponse_s ) */
#ifndef zxwsf_a_EndpointReference_EXT
#define zxwsf_a_EndpointReference_EXT
#endif

struct zxwsf_a_EndpointReference_s* zxwsf_DEC_a_EndpointReference(struct zx_ctx* c);
struct zxwsf_a_EndpointReference_s* zxwsf_NEW_a_EndpointReference(struct zx_ctx* c);
struct zxwsf_a_EndpointReference_s* zxwsf_DEEP_CLONE_a_EndpointReference(struct zx_ctx* c, struct zxwsf_a_EndpointReference_s* x, int dup_strs);
void zxwsf_DUP_STRS_a_EndpointReference(struct zx_ctx* c, struct zxwsf_a_EndpointReference_s* x);
void zxwsf_FREE_a_EndpointReference(struct zx_ctx* c, struct zxwsf_a_EndpointReference_s* x, int free_strs);
int zxwsf_WALK_SO_a_EndpointReference(struct zx_ctx* c, struct zxwsf_a_EndpointReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_a_EndpointReference(struct zx_ctx* c, struct zxwsf_a_EndpointReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_a_EndpointReference(struct zxwsf_a_EndpointReference_s* x);
char* zxwsf_ENC_SO_a_EndpointReference(struct zxwsf_a_EndpointReference_s* x, char* p);
char* zxwsf_ENC_WO_a_EndpointReference(struct zxwsf_a_EndpointReference_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_a_EndpointReference(struct zx_ctx* c, struct zxwsf_a_EndpointReference_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_a_EndpointReference(struct zx_ctx* c, struct zxwsf_a_EndpointReference_s* x);

struct zxwsf_a_EndpointReference_s {
  ZX_ELEM_EXT
  zxwsf_a_EndpointReference_EXT
  struct zxwsf_a_Address_s* Address;	/* {1,1}  */
  struct zxwsf_a_ReferenceParameters_s* ReferenceParameters;	/* {0,1}  */
  struct zxwsf_a_Metadata_s* Metadata;	/* {0,1} nada */
};

struct zxwsf_a_Address_s* zxwsf_a_EndpointReference_GET_Address(struct zxwsf_a_EndpointReference_s* x, int n);
struct zxwsf_a_ReferenceParameters_s* zxwsf_a_EndpointReference_GET_ReferenceParameters(struct zxwsf_a_EndpointReference_s* x, int n);
struct zxwsf_a_Metadata_s* zxwsf_a_EndpointReference_GET_Metadata(struct zxwsf_a_EndpointReference_s* x, int n);
int zxwsf_a_EndpointReference_NUM_Address(struct zxwsf_a_EndpointReference_s* x);
int zxwsf_a_EndpointReference_NUM_ReferenceParameters(struct zxwsf_a_EndpointReference_s* x);
int zxwsf_a_EndpointReference_NUM_Metadata(struct zxwsf_a_EndpointReference_s* x);
struct zxwsf_a_Address_s* zxwsf_a_EndpointReference_POP_Address(struct zxwsf_a_EndpointReference_s* x);
struct zxwsf_a_ReferenceParameters_s* zxwsf_a_EndpointReference_POP_ReferenceParameters(struct zxwsf_a_EndpointReference_s* x);
struct zxwsf_a_Metadata_s* zxwsf_a_EndpointReference_POP_Metadata(struct zxwsf_a_EndpointReference_s* x);
void zxwsf_a_EndpointReference_PUSH_Address(struct zxwsf_a_EndpointReference_s* x, struct zxwsf_a_Address_s* y);
void zxwsf_a_EndpointReference_PUSH_ReferenceParameters(struct zxwsf_a_EndpointReference_s* x, struct zxwsf_a_ReferenceParameters_s* y);
void zxwsf_a_EndpointReference_PUSH_Metadata(struct zxwsf_a_EndpointReference_s* x, struct zxwsf_a_Metadata_s* y);
void zxwsf_a_EndpointReference_PUT_Address(struct zxwsf_a_EndpointReference_s* x, int n, struct zxwsf_a_Address_s* y);
void zxwsf_a_EndpointReference_PUT_ReferenceParameters(struct zxwsf_a_EndpointReference_s* x, int n, struct zxwsf_a_ReferenceParameters_s* y);
void zxwsf_a_EndpointReference_PUT_Metadata(struct zxwsf_a_EndpointReference_s* x, int n, struct zxwsf_a_Metadata_s* y);
void zxwsf_a_EndpointReference_ADD_Address(struct zxwsf_a_EndpointReference_s* x, int n, struct zxwsf_a_Address_s* z);
void zxwsf_a_EndpointReference_ADD_ReferenceParameters(struct zxwsf_a_EndpointReference_s* x, int n, struct zxwsf_a_ReferenceParameters_s* z);
void zxwsf_a_EndpointReference_ADD_Metadata(struct zxwsf_a_EndpointReference_s* x, int n, struct zxwsf_a_Metadata_s* z);
void zxwsf_a_EndpointReference_DEL_Address(struct zxwsf_a_EndpointReference_s* x, int n);
void zxwsf_a_EndpointReference_DEL_ReferenceParameters(struct zxwsf_a_EndpointReference_s* x, int n);
void zxwsf_a_EndpointReference_DEL_Metadata(struct zxwsf_a_EndpointReference_s* x, int n);
void zxwsf_a_EndpointReference_REV_Address(struct zxwsf_a_EndpointReference_s* x);
void zxwsf_a_EndpointReference_REV_ReferenceParameters(struct zxwsf_a_EndpointReference_s* x);
void zxwsf_a_EndpointReference_REV_Metadata(struct zxwsf_a_EndpointReference_s* x);

/* -------------------------- a_FaultTo -------------------------- */
/* refby( zxwsf_e_Header_s zxwsf_dise_Header_s ) */
#ifndef zxwsf_a_FaultTo_EXT
#define zxwsf_a_FaultTo_EXT
#endif

struct zxwsf_a_FaultTo_s* zxwsf_DEC_a_FaultTo(struct zx_ctx* c);
struct zxwsf_a_FaultTo_s* zxwsf_NEW_a_FaultTo(struct zx_ctx* c);
struct zxwsf_a_FaultTo_s* zxwsf_DEEP_CLONE_a_FaultTo(struct zx_ctx* c, struct zxwsf_a_FaultTo_s* x, int dup_strs);
void zxwsf_DUP_STRS_a_FaultTo(struct zx_ctx* c, struct zxwsf_a_FaultTo_s* x);
void zxwsf_FREE_a_FaultTo(struct zx_ctx* c, struct zxwsf_a_FaultTo_s* x, int free_strs);
int zxwsf_WALK_SO_a_FaultTo(struct zx_ctx* c, struct zxwsf_a_FaultTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_a_FaultTo(struct zx_ctx* c, struct zxwsf_a_FaultTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_a_FaultTo(struct zxwsf_a_FaultTo_s* x);
char* zxwsf_ENC_SO_a_FaultTo(struct zxwsf_a_FaultTo_s* x, char* p);
char* zxwsf_ENC_WO_a_FaultTo(struct zxwsf_a_FaultTo_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_a_FaultTo(struct zx_ctx* c, struct zxwsf_a_FaultTo_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_a_FaultTo(struct zx_ctx* c, struct zxwsf_a_FaultTo_s* x);

struct zxwsf_a_FaultTo_s {
  ZX_ELEM_EXT
  zxwsf_a_FaultTo_EXT
  struct zxwsf_a_Address_s* Address;	/* {1,1}  */
  struct zxwsf_a_ReferenceParameters_s* ReferenceParameters;	/* {0,1}  */
  struct zxwsf_a_Metadata_s* Metadata;	/* {0,1} nada */
};

struct zxwsf_a_Address_s* zxwsf_a_FaultTo_GET_Address(struct zxwsf_a_FaultTo_s* x, int n);
struct zxwsf_a_ReferenceParameters_s* zxwsf_a_FaultTo_GET_ReferenceParameters(struct zxwsf_a_FaultTo_s* x, int n);
struct zxwsf_a_Metadata_s* zxwsf_a_FaultTo_GET_Metadata(struct zxwsf_a_FaultTo_s* x, int n);
int zxwsf_a_FaultTo_NUM_Address(struct zxwsf_a_FaultTo_s* x);
int zxwsf_a_FaultTo_NUM_ReferenceParameters(struct zxwsf_a_FaultTo_s* x);
int zxwsf_a_FaultTo_NUM_Metadata(struct zxwsf_a_FaultTo_s* x);
struct zxwsf_a_Address_s* zxwsf_a_FaultTo_POP_Address(struct zxwsf_a_FaultTo_s* x);
struct zxwsf_a_ReferenceParameters_s* zxwsf_a_FaultTo_POP_ReferenceParameters(struct zxwsf_a_FaultTo_s* x);
struct zxwsf_a_Metadata_s* zxwsf_a_FaultTo_POP_Metadata(struct zxwsf_a_FaultTo_s* x);
void zxwsf_a_FaultTo_PUSH_Address(struct zxwsf_a_FaultTo_s* x, struct zxwsf_a_Address_s* y);
void zxwsf_a_FaultTo_PUSH_ReferenceParameters(struct zxwsf_a_FaultTo_s* x, struct zxwsf_a_ReferenceParameters_s* y);
void zxwsf_a_FaultTo_PUSH_Metadata(struct zxwsf_a_FaultTo_s* x, struct zxwsf_a_Metadata_s* y);
void zxwsf_a_FaultTo_PUT_Address(struct zxwsf_a_FaultTo_s* x, int n, struct zxwsf_a_Address_s* y);
void zxwsf_a_FaultTo_PUT_ReferenceParameters(struct zxwsf_a_FaultTo_s* x, int n, struct zxwsf_a_ReferenceParameters_s* y);
void zxwsf_a_FaultTo_PUT_Metadata(struct zxwsf_a_FaultTo_s* x, int n, struct zxwsf_a_Metadata_s* y);
void zxwsf_a_FaultTo_ADD_Address(struct zxwsf_a_FaultTo_s* x, int n, struct zxwsf_a_Address_s* z);
void zxwsf_a_FaultTo_ADD_ReferenceParameters(struct zxwsf_a_FaultTo_s* x, int n, struct zxwsf_a_ReferenceParameters_s* z);
void zxwsf_a_FaultTo_ADD_Metadata(struct zxwsf_a_FaultTo_s* x, int n, struct zxwsf_a_Metadata_s* z);
void zxwsf_a_FaultTo_DEL_Address(struct zxwsf_a_FaultTo_s* x, int n);
void zxwsf_a_FaultTo_DEL_ReferenceParameters(struct zxwsf_a_FaultTo_s* x, int n);
void zxwsf_a_FaultTo_DEL_Metadata(struct zxwsf_a_FaultTo_s* x, int n);
void zxwsf_a_FaultTo_REV_Address(struct zxwsf_a_FaultTo_s* x);
void zxwsf_a_FaultTo_REV_ReferenceParameters(struct zxwsf_a_FaultTo_s* x);
void zxwsf_a_FaultTo_REV_Metadata(struct zxwsf_a_FaultTo_s* x);

/* -------------------------- a_From -------------------------- */
/* refby( zxwsf_e_Header_s zxwsf_dise_Header_s ) */
#ifndef zxwsf_a_From_EXT
#define zxwsf_a_From_EXT
#endif

struct zxwsf_a_From_s* zxwsf_DEC_a_From(struct zx_ctx* c);
struct zxwsf_a_From_s* zxwsf_NEW_a_From(struct zx_ctx* c);
struct zxwsf_a_From_s* zxwsf_DEEP_CLONE_a_From(struct zx_ctx* c, struct zxwsf_a_From_s* x, int dup_strs);
void zxwsf_DUP_STRS_a_From(struct zx_ctx* c, struct zxwsf_a_From_s* x);
void zxwsf_FREE_a_From(struct zx_ctx* c, struct zxwsf_a_From_s* x, int free_strs);
int zxwsf_WALK_SO_a_From(struct zx_ctx* c, struct zxwsf_a_From_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_a_From(struct zx_ctx* c, struct zxwsf_a_From_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_a_From(struct zxwsf_a_From_s* x);
char* zxwsf_ENC_SO_a_From(struct zxwsf_a_From_s* x, char* p);
char* zxwsf_ENC_WO_a_From(struct zxwsf_a_From_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_a_From(struct zx_ctx* c, struct zxwsf_a_From_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_a_From(struct zx_ctx* c, struct zxwsf_a_From_s* x);

struct zxwsf_a_From_s {
  ZX_ELEM_EXT
  zxwsf_a_From_EXT
  struct zxwsf_a_Address_s* Address;	/* {1,1}  */
  struct zxwsf_a_ReferenceParameters_s* ReferenceParameters;	/* {0,1}  */
  struct zxwsf_a_Metadata_s* Metadata;	/* {0,1} nada */
};

struct zxwsf_a_Address_s* zxwsf_a_From_GET_Address(struct zxwsf_a_From_s* x, int n);
struct zxwsf_a_ReferenceParameters_s* zxwsf_a_From_GET_ReferenceParameters(struct zxwsf_a_From_s* x, int n);
struct zxwsf_a_Metadata_s* zxwsf_a_From_GET_Metadata(struct zxwsf_a_From_s* x, int n);
int zxwsf_a_From_NUM_Address(struct zxwsf_a_From_s* x);
int zxwsf_a_From_NUM_ReferenceParameters(struct zxwsf_a_From_s* x);
int zxwsf_a_From_NUM_Metadata(struct zxwsf_a_From_s* x);
struct zxwsf_a_Address_s* zxwsf_a_From_POP_Address(struct zxwsf_a_From_s* x);
struct zxwsf_a_ReferenceParameters_s* zxwsf_a_From_POP_ReferenceParameters(struct zxwsf_a_From_s* x);
struct zxwsf_a_Metadata_s* zxwsf_a_From_POP_Metadata(struct zxwsf_a_From_s* x);
void zxwsf_a_From_PUSH_Address(struct zxwsf_a_From_s* x, struct zxwsf_a_Address_s* y);
void zxwsf_a_From_PUSH_ReferenceParameters(struct zxwsf_a_From_s* x, struct zxwsf_a_ReferenceParameters_s* y);
void zxwsf_a_From_PUSH_Metadata(struct zxwsf_a_From_s* x, struct zxwsf_a_Metadata_s* y);
void zxwsf_a_From_PUT_Address(struct zxwsf_a_From_s* x, int n, struct zxwsf_a_Address_s* y);
void zxwsf_a_From_PUT_ReferenceParameters(struct zxwsf_a_From_s* x, int n, struct zxwsf_a_ReferenceParameters_s* y);
void zxwsf_a_From_PUT_Metadata(struct zxwsf_a_From_s* x, int n, struct zxwsf_a_Metadata_s* y);
void zxwsf_a_From_ADD_Address(struct zxwsf_a_From_s* x, int n, struct zxwsf_a_Address_s* z);
void zxwsf_a_From_ADD_ReferenceParameters(struct zxwsf_a_From_s* x, int n, struct zxwsf_a_ReferenceParameters_s* z);
void zxwsf_a_From_ADD_Metadata(struct zxwsf_a_From_s* x, int n, struct zxwsf_a_Metadata_s* z);
void zxwsf_a_From_DEL_Address(struct zxwsf_a_From_s* x, int n);
void zxwsf_a_From_DEL_ReferenceParameters(struct zxwsf_a_From_s* x, int n);
void zxwsf_a_From_DEL_Metadata(struct zxwsf_a_From_s* x, int n);
void zxwsf_a_From_REV_Address(struct zxwsf_a_From_s* x);
void zxwsf_a_From_REV_ReferenceParameters(struct zxwsf_a_From_s* x);
void zxwsf_a_From_REV_Metadata(struct zxwsf_a_From_s* x);

/* -------------------------- a_MessageID -------------------------- */
/* refby( zxwsf_e_Header_s zxwsf_dise_Header_s ) */
#ifndef zxwsf_a_MessageID_EXT
#define zxwsf_a_MessageID_EXT
#endif

struct zxwsf_a_MessageID_s* zxwsf_DEC_a_MessageID(struct zx_ctx* c);
struct zxwsf_a_MessageID_s* zxwsf_NEW_a_MessageID(struct zx_ctx* c);
struct zxwsf_a_MessageID_s* zxwsf_DEEP_CLONE_a_MessageID(struct zx_ctx* c, struct zxwsf_a_MessageID_s* x, int dup_strs);
void zxwsf_DUP_STRS_a_MessageID(struct zx_ctx* c, struct zxwsf_a_MessageID_s* x);
void zxwsf_FREE_a_MessageID(struct zx_ctx* c, struct zxwsf_a_MessageID_s* x, int free_strs);
int zxwsf_WALK_SO_a_MessageID(struct zx_ctx* c, struct zxwsf_a_MessageID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_a_MessageID(struct zx_ctx* c, struct zxwsf_a_MessageID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_a_MessageID(struct zxwsf_a_MessageID_s* x);
char* zxwsf_ENC_SO_a_MessageID(struct zxwsf_a_MessageID_s* x, char* p);
char* zxwsf_ENC_WO_a_MessageID(struct zxwsf_a_MessageID_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_a_MessageID(struct zx_ctx* c, struct zxwsf_a_MessageID_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_a_MessageID(struct zx_ctx* c, struct zxwsf_a_MessageID_s* x);

struct zxwsf_a_MessageID_s {
  ZX_ELEM_EXT
  zxwsf_a_MessageID_EXT
};


/* -------------------------- a_Metadata -------------------------- */
/* refby( zxwsf_a_From_s zxwsf_a_FaultTo_s zxwsf_b_InteractionService_s zxwsf_b_EndpointUpdate_s zxwsf_b_ApplicationEPR_s zxwsf_a_ReplyTo_s zxwsf_a_EndpointReference_s ) */
#ifndef zxwsf_a_Metadata_EXT
#define zxwsf_a_Metadata_EXT
#endif

struct zxwsf_a_Metadata_s* zxwsf_DEC_a_Metadata(struct zx_ctx* c);
struct zxwsf_a_Metadata_s* zxwsf_NEW_a_Metadata(struct zx_ctx* c);
struct zxwsf_a_Metadata_s* zxwsf_DEEP_CLONE_a_Metadata(struct zx_ctx* c, struct zxwsf_a_Metadata_s* x, int dup_strs);
void zxwsf_DUP_STRS_a_Metadata(struct zx_ctx* c, struct zxwsf_a_Metadata_s* x);
void zxwsf_FREE_a_Metadata(struct zx_ctx* c, struct zxwsf_a_Metadata_s* x, int free_strs);
int zxwsf_WALK_SO_a_Metadata(struct zx_ctx* c, struct zxwsf_a_Metadata_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_a_Metadata(struct zx_ctx* c, struct zxwsf_a_Metadata_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_a_Metadata(struct zxwsf_a_Metadata_s* x);
char* zxwsf_ENC_SO_a_Metadata(struct zxwsf_a_Metadata_s* x, char* p);
char* zxwsf_ENC_WO_a_Metadata(struct zxwsf_a_Metadata_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_a_Metadata(struct zx_ctx* c, struct zxwsf_a_Metadata_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_a_Metadata(struct zx_ctx* c, struct zxwsf_a_Metadata_s* x);

struct zxwsf_a_Metadata_s {
  ZX_ELEM_EXT
  zxwsf_a_Metadata_EXT
};


/* -------------------------- a_ProblemAction -------------------------- */
/* refby( ) */
#ifndef zxwsf_a_ProblemAction_EXT
#define zxwsf_a_ProblemAction_EXT
#endif

struct zxwsf_a_ProblemAction_s* zxwsf_DEC_a_ProblemAction(struct zx_ctx* c);
struct zxwsf_a_ProblemAction_s* zxwsf_NEW_a_ProblemAction(struct zx_ctx* c);
struct zxwsf_a_ProblemAction_s* zxwsf_DEEP_CLONE_a_ProblemAction(struct zx_ctx* c, struct zxwsf_a_ProblemAction_s* x, int dup_strs);
void zxwsf_DUP_STRS_a_ProblemAction(struct zx_ctx* c, struct zxwsf_a_ProblemAction_s* x);
void zxwsf_FREE_a_ProblemAction(struct zx_ctx* c, struct zxwsf_a_ProblemAction_s* x, int free_strs);
int zxwsf_WALK_SO_a_ProblemAction(struct zx_ctx* c, struct zxwsf_a_ProblemAction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_a_ProblemAction(struct zx_ctx* c, struct zxwsf_a_ProblemAction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_a_ProblemAction(struct zxwsf_a_ProblemAction_s* x);
char* zxwsf_ENC_SO_a_ProblemAction(struct zxwsf_a_ProblemAction_s* x, char* p);
char* zxwsf_ENC_WO_a_ProblemAction(struct zxwsf_a_ProblemAction_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_a_ProblemAction(struct zx_ctx* c, struct zxwsf_a_ProblemAction_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_a_ProblemAction(struct zx_ctx* c, struct zxwsf_a_ProblemAction_s* x);

struct zxwsf_a_ProblemAction_s {
  ZX_ELEM_EXT
  zxwsf_a_ProblemAction_EXT
  struct zxwsf_a_Action_s* Action;	/* {0,1} nada */
  struct zx_elem_s* SoapAction;	/* {0,1} xs:anyURI */
};

struct zxwsf_a_Action_s* zxwsf_a_ProblemAction_GET_Action(struct zxwsf_a_ProblemAction_s* x, int n);
struct zx_elem_s* zxwsf_a_ProblemAction_GET_SoapAction(struct zxwsf_a_ProblemAction_s* x, int n);
int zxwsf_a_ProblemAction_NUM_Action(struct zxwsf_a_ProblemAction_s* x);
int zxwsf_a_ProblemAction_NUM_SoapAction(struct zxwsf_a_ProblemAction_s* x);
struct zxwsf_a_Action_s* zxwsf_a_ProblemAction_POP_Action(struct zxwsf_a_ProblemAction_s* x);
struct zx_elem_s* zxwsf_a_ProblemAction_POP_SoapAction(struct zxwsf_a_ProblemAction_s* x);
void zxwsf_a_ProblemAction_PUSH_Action(struct zxwsf_a_ProblemAction_s* x, struct zxwsf_a_Action_s* y);
void zxwsf_a_ProblemAction_PUSH_SoapAction(struct zxwsf_a_ProblemAction_s* x, struct zx_elem_s* y);
void zxwsf_a_ProblemAction_PUT_Action(struct zxwsf_a_ProblemAction_s* x, int n, struct zxwsf_a_Action_s* y);
void zxwsf_a_ProblemAction_PUT_SoapAction(struct zxwsf_a_ProblemAction_s* x, int n, struct zx_elem_s* y);
void zxwsf_a_ProblemAction_ADD_Action(struct zxwsf_a_ProblemAction_s* x, int n, struct zxwsf_a_Action_s* z);
void zxwsf_a_ProblemAction_ADD_SoapAction(struct zxwsf_a_ProblemAction_s* x, int n, struct zx_elem_s* z);
void zxwsf_a_ProblemAction_DEL_Action(struct zxwsf_a_ProblemAction_s* x, int n);
void zxwsf_a_ProblemAction_DEL_SoapAction(struct zxwsf_a_ProblemAction_s* x, int n);
void zxwsf_a_ProblemAction_REV_Action(struct zxwsf_a_ProblemAction_s* x);
void zxwsf_a_ProblemAction_REV_SoapAction(struct zxwsf_a_ProblemAction_s* x);

/* -------------------------- a_ProblemHeader -------------------------- */
/* refby( ) */
#ifndef zxwsf_a_ProblemHeader_EXT
#define zxwsf_a_ProblemHeader_EXT
#endif

struct zxwsf_a_ProblemHeader_s* zxwsf_DEC_a_ProblemHeader(struct zx_ctx* c);
struct zxwsf_a_ProblemHeader_s* zxwsf_NEW_a_ProblemHeader(struct zx_ctx* c);
struct zxwsf_a_ProblemHeader_s* zxwsf_DEEP_CLONE_a_ProblemHeader(struct zx_ctx* c, struct zxwsf_a_ProblemHeader_s* x, int dup_strs);
void zxwsf_DUP_STRS_a_ProblemHeader(struct zx_ctx* c, struct zxwsf_a_ProblemHeader_s* x);
void zxwsf_FREE_a_ProblemHeader(struct zx_ctx* c, struct zxwsf_a_ProblemHeader_s* x, int free_strs);
int zxwsf_WALK_SO_a_ProblemHeader(struct zx_ctx* c, struct zxwsf_a_ProblemHeader_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_a_ProblemHeader(struct zx_ctx* c, struct zxwsf_a_ProblemHeader_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_a_ProblemHeader(struct zxwsf_a_ProblemHeader_s* x);
char* zxwsf_ENC_SO_a_ProblemHeader(struct zxwsf_a_ProblemHeader_s* x, char* p);
char* zxwsf_ENC_WO_a_ProblemHeader(struct zxwsf_a_ProblemHeader_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_a_ProblemHeader(struct zx_ctx* c, struct zxwsf_a_ProblemHeader_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_a_ProblemHeader(struct zx_ctx* c, struct zxwsf_a_ProblemHeader_s* x);

struct zxwsf_a_ProblemHeader_s {
  ZX_ELEM_EXT
  zxwsf_a_ProblemHeader_EXT
};


/* -------------------------- a_ProblemHeaderQName -------------------------- */
/* refby( ) */
#ifndef zxwsf_a_ProblemHeaderQName_EXT
#define zxwsf_a_ProblemHeaderQName_EXT
#endif

struct zxwsf_a_ProblemHeaderQName_s* zxwsf_DEC_a_ProblemHeaderQName(struct zx_ctx* c);
struct zxwsf_a_ProblemHeaderQName_s* zxwsf_NEW_a_ProblemHeaderQName(struct zx_ctx* c);
struct zxwsf_a_ProblemHeaderQName_s* zxwsf_DEEP_CLONE_a_ProblemHeaderQName(struct zx_ctx* c, struct zxwsf_a_ProblemHeaderQName_s* x, int dup_strs);
void zxwsf_DUP_STRS_a_ProblemHeaderQName(struct zx_ctx* c, struct zxwsf_a_ProblemHeaderQName_s* x);
void zxwsf_FREE_a_ProblemHeaderQName(struct zx_ctx* c, struct zxwsf_a_ProblemHeaderQName_s* x, int free_strs);
int zxwsf_WALK_SO_a_ProblemHeaderQName(struct zx_ctx* c, struct zxwsf_a_ProblemHeaderQName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_a_ProblemHeaderQName(struct zx_ctx* c, struct zxwsf_a_ProblemHeaderQName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_a_ProblemHeaderQName(struct zxwsf_a_ProblemHeaderQName_s* x);
char* zxwsf_ENC_SO_a_ProblemHeaderQName(struct zxwsf_a_ProblemHeaderQName_s* x, char* p);
char* zxwsf_ENC_WO_a_ProblemHeaderQName(struct zxwsf_a_ProblemHeaderQName_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_a_ProblemHeaderQName(struct zx_ctx* c, struct zxwsf_a_ProblemHeaderQName_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_a_ProblemHeaderQName(struct zx_ctx* c, struct zxwsf_a_ProblemHeaderQName_s* x);

struct zxwsf_a_ProblemHeaderQName_s {
  ZX_ELEM_EXT
  zxwsf_a_ProblemHeaderQName_EXT
};


/* -------------------------- a_ProblemIRI -------------------------- */
/* refby( ) */
#ifndef zxwsf_a_ProblemIRI_EXT
#define zxwsf_a_ProblemIRI_EXT
#endif

struct zxwsf_a_ProblemIRI_s* zxwsf_DEC_a_ProblemIRI(struct zx_ctx* c);
struct zxwsf_a_ProblemIRI_s* zxwsf_NEW_a_ProblemIRI(struct zx_ctx* c);
struct zxwsf_a_ProblemIRI_s* zxwsf_DEEP_CLONE_a_ProblemIRI(struct zx_ctx* c, struct zxwsf_a_ProblemIRI_s* x, int dup_strs);
void zxwsf_DUP_STRS_a_ProblemIRI(struct zx_ctx* c, struct zxwsf_a_ProblemIRI_s* x);
void zxwsf_FREE_a_ProblemIRI(struct zx_ctx* c, struct zxwsf_a_ProblemIRI_s* x, int free_strs);
int zxwsf_WALK_SO_a_ProblemIRI(struct zx_ctx* c, struct zxwsf_a_ProblemIRI_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_a_ProblemIRI(struct zx_ctx* c, struct zxwsf_a_ProblemIRI_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_a_ProblemIRI(struct zxwsf_a_ProblemIRI_s* x);
char* zxwsf_ENC_SO_a_ProblemIRI(struct zxwsf_a_ProblemIRI_s* x, char* p);
char* zxwsf_ENC_WO_a_ProblemIRI(struct zxwsf_a_ProblemIRI_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_a_ProblemIRI(struct zx_ctx* c, struct zxwsf_a_ProblemIRI_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_a_ProblemIRI(struct zx_ctx* c, struct zxwsf_a_ProblemIRI_s* x);

struct zxwsf_a_ProblemIRI_s {
  ZX_ELEM_EXT
  zxwsf_a_ProblemIRI_EXT
};


/* -------------------------- a_ReferenceParameters -------------------------- */
/* refby( zxwsf_a_From_s zxwsf_a_FaultTo_s zxwsf_b_InteractionService_s zxwsf_b_EndpointUpdate_s zxwsf_b_ApplicationEPR_s zxwsf_a_ReplyTo_s zxwsf_a_EndpointReference_s ) */
#ifndef zxwsf_a_ReferenceParameters_EXT
#define zxwsf_a_ReferenceParameters_EXT
#endif

struct zxwsf_a_ReferenceParameters_s* zxwsf_DEC_a_ReferenceParameters(struct zx_ctx* c);
struct zxwsf_a_ReferenceParameters_s* zxwsf_NEW_a_ReferenceParameters(struct zx_ctx* c);
struct zxwsf_a_ReferenceParameters_s* zxwsf_DEEP_CLONE_a_ReferenceParameters(struct zx_ctx* c, struct zxwsf_a_ReferenceParameters_s* x, int dup_strs);
void zxwsf_DUP_STRS_a_ReferenceParameters(struct zx_ctx* c, struct zxwsf_a_ReferenceParameters_s* x);
void zxwsf_FREE_a_ReferenceParameters(struct zx_ctx* c, struct zxwsf_a_ReferenceParameters_s* x, int free_strs);
int zxwsf_WALK_SO_a_ReferenceParameters(struct zx_ctx* c, struct zxwsf_a_ReferenceParameters_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_a_ReferenceParameters(struct zx_ctx* c, struct zxwsf_a_ReferenceParameters_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_a_ReferenceParameters(struct zxwsf_a_ReferenceParameters_s* x);
char* zxwsf_ENC_SO_a_ReferenceParameters(struct zxwsf_a_ReferenceParameters_s* x, char* p);
char* zxwsf_ENC_WO_a_ReferenceParameters(struct zxwsf_a_ReferenceParameters_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_a_ReferenceParameters(struct zx_ctx* c, struct zxwsf_a_ReferenceParameters_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_a_ReferenceParameters(struct zx_ctx* c, struct zxwsf_a_ReferenceParameters_s* x);

struct zxwsf_a_ReferenceParameters_s {
  ZX_ELEM_EXT
  zxwsf_a_ReferenceParameters_EXT
};


/* -------------------------- a_RelatesTo -------------------------- */
/* refby( zxwsf_e_Header_s zxwsf_dise_Header_s ) */
#ifndef zxwsf_a_RelatesTo_EXT
#define zxwsf_a_RelatesTo_EXT
#endif

struct zxwsf_a_RelatesTo_s* zxwsf_DEC_a_RelatesTo(struct zx_ctx* c);
struct zxwsf_a_RelatesTo_s* zxwsf_NEW_a_RelatesTo(struct zx_ctx* c);
struct zxwsf_a_RelatesTo_s* zxwsf_DEEP_CLONE_a_RelatesTo(struct zx_ctx* c, struct zxwsf_a_RelatesTo_s* x, int dup_strs);
void zxwsf_DUP_STRS_a_RelatesTo(struct zx_ctx* c, struct zxwsf_a_RelatesTo_s* x);
void zxwsf_FREE_a_RelatesTo(struct zx_ctx* c, struct zxwsf_a_RelatesTo_s* x, int free_strs);
int zxwsf_WALK_SO_a_RelatesTo(struct zx_ctx* c, struct zxwsf_a_RelatesTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_a_RelatesTo(struct zx_ctx* c, struct zxwsf_a_RelatesTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_a_RelatesTo(struct zxwsf_a_RelatesTo_s* x);
char* zxwsf_ENC_SO_a_RelatesTo(struct zxwsf_a_RelatesTo_s* x, char* p);
char* zxwsf_ENC_WO_a_RelatesTo(struct zxwsf_a_RelatesTo_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_a_RelatesTo(struct zx_ctx* c, struct zxwsf_a_RelatesTo_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_a_RelatesTo(struct zx_ctx* c, struct zxwsf_a_RelatesTo_s* x);

struct zxwsf_a_RelatesTo_s {
  ZX_ELEM_EXT
  zxwsf_a_RelatesTo_EXT
  struct zx_str_s* RelationshipType;	/* {0,1} attribute a:RelationshipTypeOpenEnum */
};

struct zx_str_s* zxwsf_a_RelatesTo_GET_RelationshipType(struct zxwsf_a_RelatesTo_s* x);
void zxwsf_a_RelatesTo_PUT_RelationshipType(struct zxwsf_a_RelatesTo_s* x, struct zx_str_s* y);

/* -------------------------- a_ReplyTo -------------------------- */
/* refby( zxwsf_e_Header_s zxwsf_dise_Header_s ) */
#ifndef zxwsf_a_ReplyTo_EXT
#define zxwsf_a_ReplyTo_EXT
#endif

struct zxwsf_a_ReplyTo_s* zxwsf_DEC_a_ReplyTo(struct zx_ctx* c);
struct zxwsf_a_ReplyTo_s* zxwsf_NEW_a_ReplyTo(struct zx_ctx* c);
struct zxwsf_a_ReplyTo_s* zxwsf_DEEP_CLONE_a_ReplyTo(struct zx_ctx* c, struct zxwsf_a_ReplyTo_s* x, int dup_strs);
void zxwsf_DUP_STRS_a_ReplyTo(struct zx_ctx* c, struct zxwsf_a_ReplyTo_s* x);
void zxwsf_FREE_a_ReplyTo(struct zx_ctx* c, struct zxwsf_a_ReplyTo_s* x, int free_strs);
int zxwsf_WALK_SO_a_ReplyTo(struct zx_ctx* c, struct zxwsf_a_ReplyTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_a_ReplyTo(struct zx_ctx* c, struct zxwsf_a_ReplyTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_a_ReplyTo(struct zxwsf_a_ReplyTo_s* x);
char* zxwsf_ENC_SO_a_ReplyTo(struct zxwsf_a_ReplyTo_s* x, char* p);
char* zxwsf_ENC_WO_a_ReplyTo(struct zxwsf_a_ReplyTo_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_a_ReplyTo(struct zx_ctx* c, struct zxwsf_a_ReplyTo_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_a_ReplyTo(struct zx_ctx* c, struct zxwsf_a_ReplyTo_s* x);

struct zxwsf_a_ReplyTo_s {
  ZX_ELEM_EXT
  zxwsf_a_ReplyTo_EXT
  struct zxwsf_a_Address_s* Address;	/* {1,1}  */
  struct zxwsf_a_ReferenceParameters_s* ReferenceParameters;	/* {0,1}  */
  struct zxwsf_a_Metadata_s* Metadata;	/* {0,1} nada */
};

struct zxwsf_a_Address_s* zxwsf_a_ReplyTo_GET_Address(struct zxwsf_a_ReplyTo_s* x, int n);
struct zxwsf_a_ReferenceParameters_s* zxwsf_a_ReplyTo_GET_ReferenceParameters(struct zxwsf_a_ReplyTo_s* x, int n);
struct zxwsf_a_Metadata_s* zxwsf_a_ReplyTo_GET_Metadata(struct zxwsf_a_ReplyTo_s* x, int n);
int zxwsf_a_ReplyTo_NUM_Address(struct zxwsf_a_ReplyTo_s* x);
int zxwsf_a_ReplyTo_NUM_ReferenceParameters(struct zxwsf_a_ReplyTo_s* x);
int zxwsf_a_ReplyTo_NUM_Metadata(struct zxwsf_a_ReplyTo_s* x);
struct zxwsf_a_Address_s* zxwsf_a_ReplyTo_POP_Address(struct zxwsf_a_ReplyTo_s* x);
struct zxwsf_a_ReferenceParameters_s* zxwsf_a_ReplyTo_POP_ReferenceParameters(struct zxwsf_a_ReplyTo_s* x);
struct zxwsf_a_Metadata_s* zxwsf_a_ReplyTo_POP_Metadata(struct zxwsf_a_ReplyTo_s* x);
void zxwsf_a_ReplyTo_PUSH_Address(struct zxwsf_a_ReplyTo_s* x, struct zxwsf_a_Address_s* y);
void zxwsf_a_ReplyTo_PUSH_ReferenceParameters(struct zxwsf_a_ReplyTo_s* x, struct zxwsf_a_ReferenceParameters_s* y);
void zxwsf_a_ReplyTo_PUSH_Metadata(struct zxwsf_a_ReplyTo_s* x, struct zxwsf_a_Metadata_s* y);
void zxwsf_a_ReplyTo_PUT_Address(struct zxwsf_a_ReplyTo_s* x, int n, struct zxwsf_a_Address_s* y);
void zxwsf_a_ReplyTo_PUT_ReferenceParameters(struct zxwsf_a_ReplyTo_s* x, int n, struct zxwsf_a_ReferenceParameters_s* y);
void zxwsf_a_ReplyTo_PUT_Metadata(struct zxwsf_a_ReplyTo_s* x, int n, struct zxwsf_a_Metadata_s* y);
void zxwsf_a_ReplyTo_ADD_Address(struct zxwsf_a_ReplyTo_s* x, int n, struct zxwsf_a_Address_s* z);
void zxwsf_a_ReplyTo_ADD_ReferenceParameters(struct zxwsf_a_ReplyTo_s* x, int n, struct zxwsf_a_ReferenceParameters_s* z);
void zxwsf_a_ReplyTo_ADD_Metadata(struct zxwsf_a_ReplyTo_s* x, int n, struct zxwsf_a_Metadata_s* z);
void zxwsf_a_ReplyTo_DEL_Address(struct zxwsf_a_ReplyTo_s* x, int n);
void zxwsf_a_ReplyTo_DEL_ReferenceParameters(struct zxwsf_a_ReplyTo_s* x, int n);
void zxwsf_a_ReplyTo_DEL_Metadata(struct zxwsf_a_ReplyTo_s* x, int n);
void zxwsf_a_ReplyTo_REV_Address(struct zxwsf_a_ReplyTo_s* x);
void zxwsf_a_ReplyTo_REV_ReferenceParameters(struct zxwsf_a_ReplyTo_s* x);
void zxwsf_a_ReplyTo_REV_Metadata(struct zxwsf_a_ReplyTo_s* x);

/* -------------------------- a_RetryAfter -------------------------- */
/* refby( ) */
#ifndef zxwsf_a_RetryAfter_EXT
#define zxwsf_a_RetryAfter_EXT
#endif

struct zxwsf_a_RetryAfter_s* zxwsf_DEC_a_RetryAfter(struct zx_ctx* c);
struct zxwsf_a_RetryAfter_s* zxwsf_NEW_a_RetryAfter(struct zx_ctx* c);
struct zxwsf_a_RetryAfter_s* zxwsf_DEEP_CLONE_a_RetryAfter(struct zx_ctx* c, struct zxwsf_a_RetryAfter_s* x, int dup_strs);
void zxwsf_DUP_STRS_a_RetryAfter(struct zx_ctx* c, struct zxwsf_a_RetryAfter_s* x);
void zxwsf_FREE_a_RetryAfter(struct zx_ctx* c, struct zxwsf_a_RetryAfter_s* x, int free_strs);
int zxwsf_WALK_SO_a_RetryAfter(struct zx_ctx* c, struct zxwsf_a_RetryAfter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_a_RetryAfter(struct zx_ctx* c, struct zxwsf_a_RetryAfter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_a_RetryAfter(struct zxwsf_a_RetryAfter_s* x);
char* zxwsf_ENC_SO_a_RetryAfter(struct zxwsf_a_RetryAfter_s* x, char* p);
char* zxwsf_ENC_WO_a_RetryAfter(struct zxwsf_a_RetryAfter_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_a_RetryAfter(struct zx_ctx* c, struct zxwsf_a_RetryAfter_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_a_RetryAfter(struct zx_ctx* c, struct zxwsf_a_RetryAfter_s* x);

struct zxwsf_a_RetryAfter_s {
  ZX_ELEM_EXT
  zxwsf_a_RetryAfter_EXT
};


/* -------------------------- a_To -------------------------- */
/* refby( zxwsf_e_Header_s zxwsf_dise_Header_s ) */
#ifndef zxwsf_a_To_EXT
#define zxwsf_a_To_EXT
#endif

struct zxwsf_a_To_s* zxwsf_DEC_a_To(struct zx_ctx* c);
struct zxwsf_a_To_s* zxwsf_NEW_a_To(struct zx_ctx* c);
struct zxwsf_a_To_s* zxwsf_DEEP_CLONE_a_To(struct zx_ctx* c, struct zxwsf_a_To_s* x, int dup_strs);
void zxwsf_DUP_STRS_a_To(struct zx_ctx* c, struct zxwsf_a_To_s* x);
void zxwsf_FREE_a_To(struct zx_ctx* c, struct zxwsf_a_To_s* x, int free_strs);
int zxwsf_WALK_SO_a_To(struct zx_ctx* c, struct zxwsf_a_To_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_a_To(struct zx_ctx* c, struct zxwsf_a_To_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_a_To(struct zxwsf_a_To_s* x);
char* zxwsf_ENC_SO_a_To(struct zxwsf_a_To_s* x, char* p);
char* zxwsf_ENC_WO_a_To(struct zxwsf_a_To_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_a_To(struct zx_ctx* c, struct zxwsf_a_To_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_a_To(struct zx_ctx* c, struct zxwsf_a_To_s* x);

struct zxwsf_a_To_s {
  ZX_ELEM_EXT
  zxwsf_a_To_EXT
};


/* -------------------------- b12_Consent -------------------------- */
/* refby( zxwsf_e_Header_s ) */
#ifndef zxwsf_b12_Consent_EXT
#define zxwsf_b12_Consent_EXT
#endif

struct zxwsf_b12_Consent_s* zxwsf_DEC_b12_Consent(struct zx_ctx* c);
struct zxwsf_b12_Consent_s* zxwsf_NEW_b12_Consent(struct zx_ctx* c);
struct zxwsf_b12_Consent_s* zxwsf_DEEP_CLONE_b12_Consent(struct zx_ctx* c, struct zxwsf_b12_Consent_s* x, int dup_strs);
void zxwsf_DUP_STRS_b12_Consent(struct zx_ctx* c, struct zxwsf_b12_Consent_s* x);
void zxwsf_FREE_b12_Consent(struct zx_ctx* c, struct zxwsf_b12_Consent_s* x, int free_strs);
int zxwsf_WALK_SO_b12_Consent(struct zx_ctx* c, struct zxwsf_b12_Consent_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_b12_Consent(struct zx_ctx* c, struct zxwsf_b12_Consent_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_b12_Consent(struct zxwsf_b12_Consent_s* x);
char* zxwsf_ENC_SO_b12_Consent(struct zxwsf_b12_Consent_s* x, char* p);
char* zxwsf_ENC_WO_b12_Consent(struct zxwsf_b12_Consent_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_b12_Consent(struct zx_ctx* c, struct zxwsf_b12_Consent_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_b12_Consent(struct zx_ctx* c, struct zxwsf_b12_Consent_s* x);

struct zxwsf_b12_Consent_s {
  ZX_ELEM_EXT
  zxwsf_b12_Consent_EXT
  struct zx_str_s* uri;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* timestamp;	/* {0,1} attribute xs:dateTime */
  struct zx_str_s* id;	/* {0,1} attribute xs:ID */
  struct zx_str_s* mustUnderstand;	/* {0,1} attribute xs:boolean */
  struct zx_str_s* actor;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxwsf_b12_Consent_GET_uri(struct zxwsf_b12_Consent_s* x);
struct zx_str_s* zxwsf_b12_Consent_GET_timestamp(struct zxwsf_b12_Consent_s* x);
struct zx_str_s* zxwsf_b12_Consent_GET_id(struct zxwsf_b12_Consent_s* x);
struct zx_str_s* zxwsf_b12_Consent_GET_mustUnderstand(struct zxwsf_b12_Consent_s* x);
struct zx_str_s* zxwsf_b12_Consent_GET_actor(struct zxwsf_b12_Consent_s* x);
void zxwsf_b12_Consent_PUT_uri(struct zxwsf_b12_Consent_s* x, struct zx_str_s* y);
void zxwsf_b12_Consent_PUT_timestamp(struct zxwsf_b12_Consent_s* x, struct zx_str_s* y);
void zxwsf_b12_Consent_PUT_id(struct zxwsf_b12_Consent_s* x, struct zx_str_s* y);
void zxwsf_b12_Consent_PUT_mustUnderstand(struct zxwsf_b12_Consent_s* x, struct zx_str_s* y);
void zxwsf_b12_Consent_PUT_actor(struct zxwsf_b12_Consent_s* x, struct zx_str_s* y);

/* -------------------------- b12_Correlation -------------------------- */
/* refby( zxwsf_e_Header_s ) */
#ifndef zxwsf_b12_Correlation_EXT
#define zxwsf_b12_Correlation_EXT
#endif

struct zxwsf_b12_Correlation_s* zxwsf_DEC_b12_Correlation(struct zx_ctx* c);
struct zxwsf_b12_Correlation_s* zxwsf_NEW_b12_Correlation(struct zx_ctx* c);
struct zxwsf_b12_Correlation_s* zxwsf_DEEP_CLONE_b12_Correlation(struct zx_ctx* c, struct zxwsf_b12_Correlation_s* x, int dup_strs);
void zxwsf_DUP_STRS_b12_Correlation(struct zx_ctx* c, struct zxwsf_b12_Correlation_s* x);
void zxwsf_FREE_b12_Correlation(struct zx_ctx* c, struct zxwsf_b12_Correlation_s* x, int free_strs);
int zxwsf_WALK_SO_b12_Correlation(struct zx_ctx* c, struct zxwsf_b12_Correlation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_b12_Correlation(struct zx_ctx* c, struct zxwsf_b12_Correlation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_b12_Correlation(struct zxwsf_b12_Correlation_s* x);
char* zxwsf_ENC_SO_b12_Correlation(struct zxwsf_b12_Correlation_s* x, char* p);
char* zxwsf_ENC_WO_b12_Correlation(struct zxwsf_b12_Correlation_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_b12_Correlation(struct zx_ctx* c, struct zxwsf_b12_Correlation_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_b12_Correlation(struct zx_ctx* c, struct zxwsf_b12_Correlation_s* x);

struct zxwsf_b12_Correlation_s {
  ZX_ELEM_EXT
  zxwsf_b12_Correlation_EXT
  struct zx_str_s* messageID;	/* {1,1} attribute xs:string */
  struct zx_str_s* refToMessageID;	/* {0,1} attribute xs:string */
  struct zx_str_s* timestamp;	/* {1,1} attribute xs:dateTime */
  struct zx_str_s* id;	/* {0,1} attribute xs:ID */
  struct zx_str_s* mustUnderstand;	/* {0,1} attribute xs:boolean */
  struct zx_str_s* actor;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxwsf_b12_Correlation_GET_messageID(struct zxwsf_b12_Correlation_s* x);
struct zx_str_s* zxwsf_b12_Correlation_GET_refToMessageID(struct zxwsf_b12_Correlation_s* x);
struct zx_str_s* zxwsf_b12_Correlation_GET_timestamp(struct zxwsf_b12_Correlation_s* x);
struct zx_str_s* zxwsf_b12_Correlation_GET_id(struct zxwsf_b12_Correlation_s* x);
struct zx_str_s* zxwsf_b12_Correlation_GET_mustUnderstand(struct zxwsf_b12_Correlation_s* x);
struct zx_str_s* zxwsf_b12_Correlation_GET_actor(struct zxwsf_b12_Correlation_s* x);
void zxwsf_b12_Correlation_PUT_messageID(struct zxwsf_b12_Correlation_s* x, struct zx_str_s* y);
void zxwsf_b12_Correlation_PUT_refToMessageID(struct zxwsf_b12_Correlation_s* x, struct zx_str_s* y);
void zxwsf_b12_Correlation_PUT_timestamp(struct zxwsf_b12_Correlation_s* x, struct zx_str_s* y);
void zxwsf_b12_Correlation_PUT_id(struct zxwsf_b12_Correlation_s* x, struct zx_str_s* y);
void zxwsf_b12_Correlation_PUT_mustUnderstand(struct zxwsf_b12_Correlation_s* x, struct zx_str_s* y);
void zxwsf_b12_Correlation_PUT_actor(struct zxwsf_b12_Correlation_s* x, struct zx_str_s* y);

/* -------------------------- b12_ProcessingContext -------------------------- */
/* refby( zxwsf_e_Header_s ) */
#ifndef zxwsf_b12_ProcessingContext_EXT
#define zxwsf_b12_ProcessingContext_EXT
#endif

struct zxwsf_b12_ProcessingContext_s* zxwsf_DEC_b12_ProcessingContext(struct zx_ctx* c);
struct zxwsf_b12_ProcessingContext_s* zxwsf_NEW_b12_ProcessingContext(struct zx_ctx* c);
struct zxwsf_b12_ProcessingContext_s* zxwsf_DEEP_CLONE_b12_ProcessingContext(struct zx_ctx* c, struct zxwsf_b12_ProcessingContext_s* x, int dup_strs);
void zxwsf_DUP_STRS_b12_ProcessingContext(struct zx_ctx* c, struct zxwsf_b12_ProcessingContext_s* x);
void zxwsf_FREE_b12_ProcessingContext(struct zx_ctx* c, struct zxwsf_b12_ProcessingContext_s* x, int free_strs);
int zxwsf_WALK_SO_b12_ProcessingContext(struct zx_ctx* c, struct zxwsf_b12_ProcessingContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_b12_ProcessingContext(struct zx_ctx* c, struct zxwsf_b12_ProcessingContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_b12_ProcessingContext(struct zxwsf_b12_ProcessingContext_s* x);
char* zxwsf_ENC_SO_b12_ProcessingContext(struct zxwsf_b12_ProcessingContext_s* x, char* p);
char* zxwsf_ENC_WO_b12_ProcessingContext(struct zxwsf_b12_ProcessingContext_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_b12_ProcessingContext(struct zx_ctx* c, struct zxwsf_b12_ProcessingContext_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_b12_ProcessingContext(struct zx_ctx* c, struct zxwsf_b12_ProcessingContext_s* x);

struct zxwsf_b12_ProcessingContext_s {
  ZX_ELEM_EXT
  zxwsf_b12_ProcessingContext_EXT
  struct zx_str_s* id;	/* {0,1} attribute xs:ID */
  struct zx_str_s* mustUnderstand;	/* {0,1} attribute xs:boolean */
  struct zx_str_s* actor;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxwsf_b12_ProcessingContext_GET_id(struct zxwsf_b12_ProcessingContext_s* x);
struct zx_str_s* zxwsf_b12_ProcessingContext_GET_mustUnderstand(struct zxwsf_b12_ProcessingContext_s* x);
struct zx_str_s* zxwsf_b12_ProcessingContext_GET_actor(struct zxwsf_b12_ProcessingContext_s* x);
void zxwsf_b12_ProcessingContext_PUT_id(struct zxwsf_b12_ProcessingContext_s* x, struct zx_str_s* y);
void zxwsf_b12_ProcessingContext_PUT_mustUnderstand(struct zxwsf_b12_ProcessingContext_s* x, struct zx_str_s* y);
void zxwsf_b12_ProcessingContext_PUT_actor(struct zxwsf_b12_ProcessingContext_s* x, struct zx_str_s* y);

/* -------------------------- b12_Provider -------------------------- */
/* refby( zxwsf_e_Header_s ) */
#ifndef zxwsf_b12_Provider_EXT
#define zxwsf_b12_Provider_EXT
#endif

struct zxwsf_b12_Provider_s* zxwsf_DEC_b12_Provider(struct zx_ctx* c);
struct zxwsf_b12_Provider_s* zxwsf_NEW_b12_Provider(struct zx_ctx* c);
struct zxwsf_b12_Provider_s* zxwsf_DEEP_CLONE_b12_Provider(struct zx_ctx* c, struct zxwsf_b12_Provider_s* x, int dup_strs);
void zxwsf_DUP_STRS_b12_Provider(struct zx_ctx* c, struct zxwsf_b12_Provider_s* x);
void zxwsf_FREE_b12_Provider(struct zx_ctx* c, struct zxwsf_b12_Provider_s* x, int free_strs);
int zxwsf_WALK_SO_b12_Provider(struct zx_ctx* c, struct zxwsf_b12_Provider_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_b12_Provider(struct zx_ctx* c, struct zxwsf_b12_Provider_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_b12_Provider(struct zxwsf_b12_Provider_s* x);
char* zxwsf_ENC_SO_b12_Provider(struct zxwsf_b12_Provider_s* x, char* p);
char* zxwsf_ENC_WO_b12_Provider(struct zxwsf_b12_Provider_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_b12_Provider(struct zx_ctx* c, struct zxwsf_b12_Provider_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_b12_Provider(struct zx_ctx* c, struct zxwsf_b12_Provider_s* x);

struct zxwsf_b12_Provider_s {
  ZX_ELEM_EXT
  zxwsf_b12_Provider_EXT
  struct zx_str_s* providerID;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* affiliationID;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* id;	/* {0,1} attribute xs:ID */
  struct zx_str_s* mustUnderstand;	/* {0,1} attribute xs:boolean */
  struct zx_str_s* actor;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxwsf_b12_Provider_GET_providerID(struct zxwsf_b12_Provider_s* x);
struct zx_str_s* zxwsf_b12_Provider_GET_affiliationID(struct zxwsf_b12_Provider_s* x);
struct zx_str_s* zxwsf_b12_Provider_GET_id(struct zxwsf_b12_Provider_s* x);
struct zx_str_s* zxwsf_b12_Provider_GET_mustUnderstand(struct zxwsf_b12_Provider_s* x);
struct zx_str_s* zxwsf_b12_Provider_GET_actor(struct zxwsf_b12_Provider_s* x);
void zxwsf_b12_Provider_PUT_providerID(struct zxwsf_b12_Provider_s* x, struct zx_str_s* y);
void zxwsf_b12_Provider_PUT_affiliationID(struct zxwsf_b12_Provider_s* x, struct zx_str_s* y);
void zxwsf_b12_Provider_PUT_id(struct zxwsf_b12_Provider_s* x, struct zx_str_s* y);
void zxwsf_b12_Provider_PUT_mustUnderstand(struct zxwsf_b12_Provider_s* x, struct zx_str_s* y);
void zxwsf_b12_Provider_PUT_actor(struct zxwsf_b12_Provider_s* x, struct zx_str_s* y);

/* -------------------------- b12_UsageDirective -------------------------- */
/* refby( zxwsf_e_Header_s ) */
#ifndef zxwsf_b12_UsageDirective_EXT
#define zxwsf_b12_UsageDirective_EXT
#endif

struct zxwsf_b12_UsageDirective_s* zxwsf_DEC_b12_UsageDirective(struct zx_ctx* c);
struct zxwsf_b12_UsageDirective_s* zxwsf_NEW_b12_UsageDirective(struct zx_ctx* c);
struct zxwsf_b12_UsageDirective_s* zxwsf_DEEP_CLONE_b12_UsageDirective(struct zx_ctx* c, struct zxwsf_b12_UsageDirective_s* x, int dup_strs);
void zxwsf_DUP_STRS_b12_UsageDirective(struct zx_ctx* c, struct zxwsf_b12_UsageDirective_s* x);
void zxwsf_FREE_b12_UsageDirective(struct zx_ctx* c, struct zxwsf_b12_UsageDirective_s* x, int free_strs);
int zxwsf_WALK_SO_b12_UsageDirective(struct zx_ctx* c, struct zxwsf_b12_UsageDirective_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_b12_UsageDirective(struct zx_ctx* c, struct zxwsf_b12_UsageDirective_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_b12_UsageDirective(struct zxwsf_b12_UsageDirective_s* x);
char* zxwsf_ENC_SO_b12_UsageDirective(struct zxwsf_b12_UsageDirective_s* x, char* p);
char* zxwsf_ENC_WO_b12_UsageDirective(struct zxwsf_b12_UsageDirective_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_b12_UsageDirective(struct zx_ctx* c, struct zxwsf_b12_UsageDirective_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_b12_UsageDirective(struct zx_ctx* c, struct zxwsf_b12_UsageDirective_s* x);

struct zxwsf_b12_UsageDirective_s {
  ZX_ELEM_EXT
  zxwsf_b12_UsageDirective_EXT
  struct zx_str_s* id;	/* {0,1} attribute xs:ID */
  struct zx_str_s* ref;	/* {1,1} attribute xs:string */
  struct zx_str_s* mustUnderstand;	/* {0,1} attribute xs:boolean */
  struct zx_str_s* actor;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxwsf_b12_UsageDirective_GET_id(struct zxwsf_b12_UsageDirective_s* x);
struct zx_str_s* zxwsf_b12_UsageDirective_GET_ref(struct zxwsf_b12_UsageDirective_s* x);
struct zx_str_s* zxwsf_b12_UsageDirective_GET_mustUnderstand(struct zxwsf_b12_UsageDirective_s* x);
struct zx_str_s* zxwsf_b12_UsageDirective_GET_actor(struct zxwsf_b12_UsageDirective_s* x);
void zxwsf_b12_UsageDirective_PUT_id(struct zxwsf_b12_UsageDirective_s* x, struct zx_str_s* y);
void zxwsf_b12_UsageDirective_PUT_ref(struct zxwsf_b12_UsageDirective_s* x, struct zx_str_s* y);
void zxwsf_b12_UsageDirective_PUT_mustUnderstand(struct zxwsf_b12_UsageDirective_s* x, struct zx_str_s* y);
void zxwsf_b12_UsageDirective_PUT_actor(struct zxwsf_b12_UsageDirective_s* x, struct zx_str_s* y);

/* -------------------------- b_ApplicationEPR -------------------------- */
/* refby( zxwsf_e_Header_s zxwsf_dise_Header_s ) */
#ifndef zxwsf_b_ApplicationEPR_EXT
#define zxwsf_b_ApplicationEPR_EXT
#endif

struct zxwsf_b_ApplicationEPR_s* zxwsf_DEC_b_ApplicationEPR(struct zx_ctx* c);
struct zxwsf_b_ApplicationEPR_s* zxwsf_NEW_b_ApplicationEPR(struct zx_ctx* c);
struct zxwsf_b_ApplicationEPR_s* zxwsf_DEEP_CLONE_b_ApplicationEPR(struct zx_ctx* c, struct zxwsf_b_ApplicationEPR_s* x, int dup_strs);
void zxwsf_DUP_STRS_b_ApplicationEPR(struct zx_ctx* c, struct zxwsf_b_ApplicationEPR_s* x);
void zxwsf_FREE_b_ApplicationEPR(struct zx_ctx* c, struct zxwsf_b_ApplicationEPR_s* x, int free_strs);
int zxwsf_WALK_SO_b_ApplicationEPR(struct zx_ctx* c, struct zxwsf_b_ApplicationEPR_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_b_ApplicationEPR(struct zx_ctx* c, struct zxwsf_b_ApplicationEPR_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_b_ApplicationEPR(struct zxwsf_b_ApplicationEPR_s* x);
char* zxwsf_ENC_SO_b_ApplicationEPR(struct zxwsf_b_ApplicationEPR_s* x, char* p);
char* zxwsf_ENC_WO_b_ApplicationEPR(struct zxwsf_b_ApplicationEPR_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_b_ApplicationEPR(struct zx_ctx* c, struct zxwsf_b_ApplicationEPR_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_b_ApplicationEPR(struct zx_ctx* c, struct zxwsf_b_ApplicationEPR_s* x);

struct zxwsf_b_ApplicationEPR_s {
  ZX_ELEM_EXT
  zxwsf_b_ApplicationEPR_EXT
  struct zxwsf_a_Address_s* Address;	/* {1,1}  */
  struct zxwsf_a_ReferenceParameters_s* ReferenceParameters;	/* {0,1}  */
  struct zxwsf_a_Metadata_s* Metadata;	/* {0,1} nada */
};

struct zxwsf_a_Address_s* zxwsf_b_ApplicationEPR_GET_Address(struct zxwsf_b_ApplicationEPR_s* x, int n);
struct zxwsf_a_ReferenceParameters_s* zxwsf_b_ApplicationEPR_GET_ReferenceParameters(struct zxwsf_b_ApplicationEPR_s* x, int n);
struct zxwsf_a_Metadata_s* zxwsf_b_ApplicationEPR_GET_Metadata(struct zxwsf_b_ApplicationEPR_s* x, int n);
int zxwsf_b_ApplicationEPR_NUM_Address(struct zxwsf_b_ApplicationEPR_s* x);
int zxwsf_b_ApplicationEPR_NUM_ReferenceParameters(struct zxwsf_b_ApplicationEPR_s* x);
int zxwsf_b_ApplicationEPR_NUM_Metadata(struct zxwsf_b_ApplicationEPR_s* x);
struct zxwsf_a_Address_s* zxwsf_b_ApplicationEPR_POP_Address(struct zxwsf_b_ApplicationEPR_s* x);
struct zxwsf_a_ReferenceParameters_s* zxwsf_b_ApplicationEPR_POP_ReferenceParameters(struct zxwsf_b_ApplicationEPR_s* x);
struct zxwsf_a_Metadata_s* zxwsf_b_ApplicationEPR_POP_Metadata(struct zxwsf_b_ApplicationEPR_s* x);
void zxwsf_b_ApplicationEPR_PUSH_Address(struct zxwsf_b_ApplicationEPR_s* x, struct zxwsf_a_Address_s* y);
void zxwsf_b_ApplicationEPR_PUSH_ReferenceParameters(struct zxwsf_b_ApplicationEPR_s* x, struct zxwsf_a_ReferenceParameters_s* y);
void zxwsf_b_ApplicationEPR_PUSH_Metadata(struct zxwsf_b_ApplicationEPR_s* x, struct zxwsf_a_Metadata_s* y);
void zxwsf_b_ApplicationEPR_PUT_Address(struct zxwsf_b_ApplicationEPR_s* x, int n, struct zxwsf_a_Address_s* y);
void zxwsf_b_ApplicationEPR_PUT_ReferenceParameters(struct zxwsf_b_ApplicationEPR_s* x, int n, struct zxwsf_a_ReferenceParameters_s* y);
void zxwsf_b_ApplicationEPR_PUT_Metadata(struct zxwsf_b_ApplicationEPR_s* x, int n, struct zxwsf_a_Metadata_s* y);
void zxwsf_b_ApplicationEPR_ADD_Address(struct zxwsf_b_ApplicationEPR_s* x, int n, struct zxwsf_a_Address_s* z);
void zxwsf_b_ApplicationEPR_ADD_ReferenceParameters(struct zxwsf_b_ApplicationEPR_s* x, int n, struct zxwsf_a_ReferenceParameters_s* z);
void zxwsf_b_ApplicationEPR_ADD_Metadata(struct zxwsf_b_ApplicationEPR_s* x, int n, struct zxwsf_a_Metadata_s* z);
void zxwsf_b_ApplicationEPR_DEL_Address(struct zxwsf_b_ApplicationEPR_s* x, int n);
void zxwsf_b_ApplicationEPR_DEL_ReferenceParameters(struct zxwsf_b_ApplicationEPR_s* x, int n);
void zxwsf_b_ApplicationEPR_DEL_Metadata(struct zxwsf_b_ApplicationEPR_s* x, int n);
void zxwsf_b_ApplicationEPR_REV_Address(struct zxwsf_b_ApplicationEPR_s* x);
void zxwsf_b_ApplicationEPR_REV_ReferenceParameters(struct zxwsf_b_ApplicationEPR_s* x);
void zxwsf_b_ApplicationEPR_REV_Metadata(struct zxwsf_b_ApplicationEPR_s* x);

/* -------------------------- b_Consent -------------------------- */
/* refby( zxwsf_e_Header_s ) */
#ifndef zxwsf_b_Consent_EXT
#define zxwsf_b_Consent_EXT
#endif

struct zxwsf_b_Consent_s* zxwsf_DEC_b_Consent(struct zx_ctx* c);
struct zxwsf_b_Consent_s* zxwsf_NEW_b_Consent(struct zx_ctx* c);
struct zxwsf_b_Consent_s* zxwsf_DEEP_CLONE_b_Consent(struct zx_ctx* c, struct zxwsf_b_Consent_s* x, int dup_strs);
void zxwsf_DUP_STRS_b_Consent(struct zx_ctx* c, struct zxwsf_b_Consent_s* x);
void zxwsf_FREE_b_Consent(struct zx_ctx* c, struct zxwsf_b_Consent_s* x, int free_strs);
int zxwsf_WALK_SO_b_Consent(struct zx_ctx* c, struct zxwsf_b_Consent_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_b_Consent(struct zx_ctx* c, struct zxwsf_b_Consent_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_b_Consent(struct zxwsf_b_Consent_s* x);
char* zxwsf_ENC_SO_b_Consent(struct zxwsf_b_Consent_s* x, char* p);
char* zxwsf_ENC_WO_b_Consent(struct zxwsf_b_Consent_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_b_Consent(struct zx_ctx* c, struct zxwsf_b_Consent_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_b_Consent(struct zx_ctx* c, struct zxwsf_b_Consent_s* x);

struct zxwsf_b_Consent_s {
  ZX_ELEM_EXT
  zxwsf_b_Consent_EXT
  struct zx_str_s* uri;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* timestamp;	/* {0,1} attribute xs:dateTime */
};

struct zx_str_s* zxwsf_b_Consent_GET_uri(struct zxwsf_b_Consent_s* x);
struct zx_str_s* zxwsf_b_Consent_GET_timestamp(struct zxwsf_b_Consent_s* x);
void zxwsf_b_Consent_PUT_uri(struct zxwsf_b_Consent_s* x, struct zx_str_s* y);
void zxwsf_b_Consent_PUT_timestamp(struct zxwsf_b_Consent_s* x, struct zx_str_s* y);

/* -------------------------- b_CredentialsContext -------------------------- */
/* refby( zxwsf_e_Header_s zxwsf_dise_Header_s ) */
#ifndef zxwsf_b_CredentialsContext_EXT
#define zxwsf_b_CredentialsContext_EXT
#endif

struct zxwsf_b_CredentialsContext_s* zxwsf_DEC_b_CredentialsContext(struct zx_ctx* c);
struct zxwsf_b_CredentialsContext_s* zxwsf_NEW_b_CredentialsContext(struct zx_ctx* c);
struct zxwsf_b_CredentialsContext_s* zxwsf_DEEP_CLONE_b_CredentialsContext(struct zx_ctx* c, struct zxwsf_b_CredentialsContext_s* x, int dup_strs);
void zxwsf_DUP_STRS_b_CredentialsContext(struct zx_ctx* c, struct zxwsf_b_CredentialsContext_s* x);
void zxwsf_FREE_b_CredentialsContext(struct zx_ctx* c, struct zxwsf_b_CredentialsContext_s* x, int free_strs);
int zxwsf_WALK_SO_b_CredentialsContext(struct zx_ctx* c, struct zxwsf_b_CredentialsContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_b_CredentialsContext(struct zx_ctx* c, struct zxwsf_b_CredentialsContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_b_CredentialsContext(struct zxwsf_b_CredentialsContext_s* x);
char* zxwsf_ENC_SO_b_CredentialsContext(struct zxwsf_b_CredentialsContext_s* x, char* p);
char* zxwsf_ENC_WO_b_CredentialsContext(struct zxwsf_b_CredentialsContext_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_b_CredentialsContext(struct zx_ctx* c, struct zxwsf_b_CredentialsContext_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_b_CredentialsContext(struct zx_ctx* c, struct zxwsf_b_CredentialsContext_s* x);

struct zxwsf_b_CredentialsContext_s {
  ZX_ELEM_EXT
  zxwsf_b_CredentialsContext_EXT
  struct zx_elem_s* RequestedAuthnContext;	/* {0,1}  */
  struct zx_elem_s* SecurityMechID;	/* {0,-1} xs:anyURI */
};

struct zx_elem_s* zxwsf_b_CredentialsContext_GET_RequestedAuthnContext(struct zxwsf_b_CredentialsContext_s* x, int n);
struct zx_elem_s* zxwsf_b_CredentialsContext_GET_SecurityMechID(struct zxwsf_b_CredentialsContext_s* x, int n);
int zxwsf_b_CredentialsContext_NUM_RequestedAuthnContext(struct zxwsf_b_CredentialsContext_s* x);
int zxwsf_b_CredentialsContext_NUM_SecurityMechID(struct zxwsf_b_CredentialsContext_s* x);
struct zx_elem_s* zxwsf_b_CredentialsContext_POP_RequestedAuthnContext(struct zxwsf_b_CredentialsContext_s* x);
struct zx_elem_s* zxwsf_b_CredentialsContext_POP_SecurityMechID(struct zxwsf_b_CredentialsContext_s* x);
void zxwsf_b_CredentialsContext_PUSH_RequestedAuthnContext(struct zxwsf_b_CredentialsContext_s* x, struct zx_elem_s* y);
void zxwsf_b_CredentialsContext_PUSH_SecurityMechID(struct zxwsf_b_CredentialsContext_s* x, struct zx_elem_s* y);
void zxwsf_b_CredentialsContext_PUT_RequestedAuthnContext(struct zxwsf_b_CredentialsContext_s* x, int n, struct zx_elem_s* y);
void zxwsf_b_CredentialsContext_PUT_SecurityMechID(struct zxwsf_b_CredentialsContext_s* x, int n, struct zx_elem_s* y);
void zxwsf_b_CredentialsContext_ADD_RequestedAuthnContext(struct zxwsf_b_CredentialsContext_s* x, int n, struct zx_elem_s* z);
void zxwsf_b_CredentialsContext_ADD_SecurityMechID(struct zxwsf_b_CredentialsContext_s* x, int n, struct zx_elem_s* z);
void zxwsf_b_CredentialsContext_DEL_RequestedAuthnContext(struct zxwsf_b_CredentialsContext_s* x, int n);
void zxwsf_b_CredentialsContext_DEL_SecurityMechID(struct zxwsf_b_CredentialsContext_s* x, int n);
void zxwsf_b_CredentialsContext_REV_RequestedAuthnContext(struct zxwsf_b_CredentialsContext_s* x);
void zxwsf_b_CredentialsContext_REV_SecurityMechID(struct zxwsf_b_CredentialsContext_s* x);

/* -------------------------- b_EndpointUpdate -------------------------- */
/* refby( zxwsf_e_Header_s zxwsf_dise_Header_s ) */
#ifndef zxwsf_b_EndpointUpdate_EXT
#define zxwsf_b_EndpointUpdate_EXT
#endif

struct zxwsf_b_EndpointUpdate_s* zxwsf_DEC_b_EndpointUpdate(struct zx_ctx* c);
struct zxwsf_b_EndpointUpdate_s* zxwsf_NEW_b_EndpointUpdate(struct zx_ctx* c);
struct zxwsf_b_EndpointUpdate_s* zxwsf_DEEP_CLONE_b_EndpointUpdate(struct zx_ctx* c, struct zxwsf_b_EndpointUpdate_s* x, int dup_strs);
void zxwsf_DUP_STRS_b_EndpointUpdate(struct zx_ctx* c, struct zxwsf_b_EndpointUpdate_s* x);
void zxwsf_FREE_b_EndpointUpdate(struct zx_ctx* c, struct zxwsf_b_EndpointUpdate_s* x, int free_strs);
int zxwsf_WALK_SO_b_EndpointUpdate(struct zx_ctx* c, struct zxwsf_b_EndpointUpdate_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_b_EndpointUpdate(struct zx_ctx* c, struct zxwsf_b_EndpointUpdate_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_b_EndpointUpdate(struct zxwsf_b_EndpointUpdate_s* x);
char* zxwsf_ENC_SO_b_EndpointUpdate(struct zxwsf_b_EndpointUpdate_s* x, char* p);
char* zxwsf_ENC_WO_b_EndpointUpdate(struct zxwsf_b_EndpointUpdate_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_b_EndpointUpdate(struct zx_ctx* c, struct zxwsf_b_EndpointUpdate_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_b_EndpointUpdate(struct zx_ctx* c, struct zxwsf_b_EndpointUpdate_s* x);

struct zxwsf_b_EndpointUpdate_s {
  ZX_ELEM_EXT
  zxwsf_b_EndpointUpdate_EXT
  struct zxwsf_a_Address_s* Address;	/* {1,1}  */
  struct zxwsf_a_ReferenceParameters_s* ReferenceParameters;	/* {0,1}  */
  struct zxwsf_a_Metadata_s* Metadata;	/* {0,1} nada */
  struct zx_str_s* updateType;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxwsf_b_EndpointUpdate_GET_updateType(struct zxwsf_b_EndpointUpdate_s* x);
struct zxwsf_a_Address_s* zxwsf_b_EndpointUpdate_GET_Address(struct zxwsf_b_EndpointUpdate_s* x, int n);
struct zxwsf_a_ReferenceParameters_s* zxwsf_b_EndpointUpdate_GET_ReferenceParameters(struct zxwsf_b_EndpointUpdate_s* x, int n);
struct zxwsf_a_Metadata_s* zxwsf_b_EndpointUpdate_GET_Metadata(struct zxwsf_b_EndpointUpdate_s* x, int n);
int zxwsf_b_EndpointUpdate_NUM_Address(struct zxwsf_b_EndpointUpdate_s* x);
int zxwsf_b_EndpointUpdate_NUM_ReferenceParameters(struct zxwsf_b_EndpointUpdate_s* x);
int zxwsf_b_EndpointUpdate_NUM_Metadata(struct zxwsf_b_EndpointUpdate_s* x);
struct zxwsf_a_Address_s* zxwsf_b_EndpointUpdate_POP_Address(struct zxwsf_b_EndpointUpdate_s* x);
struct zxwsf_a_ReferenceParameters_s* zxwsf_b_EndpointUpdate_POP_ReferenceParameters(struct zxwsf_b_EndpointUpdate_s* x);
struct zxwsf_a_Metadata_s* zxwsf_b_EndpointUpdate_POP_Metadata(struct zxwsf_b_EndpointUpdate_s* x);
void zxwsf_b_EndpointUpdate_PUSH_Address(struct zxwsf_b_EndpointUpdate_s* x, struct zxwsf_a_Address_s* y);
void zxwsf_b_EndpointUpdate_PUSH_ReferenceParameters(struct zxwsf_b_EndpointUpdate_s* x, struct zxwsf_a_ReferenceParameters_s* y);
void zxwsf_b_EndpointUpdate_PUSH_Metadata(struct zxwsf_b_EndpointUpdate_s* x, struct zxwsf_a_Metadata_s* y);
void zxwsf_b_EndpointUpdate_PUT_updateType(struct zxwsf_b_EndpointUpdate_s* x, struct zx_str_s* y);
void zxwsf_b_EndpointUpdate_PUT_Address(struct zxwsf_b_EndpointUpdate_s* x, int n, struct zxwsf_a_Address_s* y);
void zxwsf_b_EndpointUpdate_PUT_ReferenceParameters(struct zxwsf_b_EndpointUpdate_s* x, int n, struct zxwsf_a_ReferenceParameters_s* y);
void zxwsf_b_EndpointUpdate_PUT_Metadata(struct zxwsf_b_EndpointUpdate_s* x, int n, struct zxwsf_a_Metadata_s* y);
void zxwsf_b_EndpointUpdate_ADD_Address(struct zxwsf_b_EndpointUpdate_s* x, int n, struct zxwsf_a_Address_s* z);
void zxwsf_b_EndpointUpdate_ADD_ReferenceParameters(struct zxwsf_b_EndpointUpdate_s* x, int n, struct zxwsf_a_ReferenceParameters_s* z);
void zxwsf_b_EndpointUpdate_ADD_Metadata(struct zxwsf_b_EndpointUpdate_s* x, int n, struct zxwsf_a_Metadata_s* z);
void zxwsf_b_EndpointUpdate_DEL_Address(struct zxwsf_b_EndpointUpdate_s* x, int n);
void zxwsf_b_EndpointUpdate_DEL_ReferenceParameters(struct zxwsf_b_EndpointUpdate_s* x, int n);
void zxwsf_b_EndpointUpdate_DEL_Metadata(struct zxwsf_b_EndpointUpdate_s* x, int n);
void zxwsf_b_EndpointUpdate_REV_Address(struct zxwsf_b_EndpointUpdate_s* x);
void zxwsf_b_EndpointUpdate_REV_ReferenceParameters(struct zxwsf_b_EndpointUpdate_s* x);
void zxwsf_b_EndpointUpdate_REV_Metadata(struct zxwsf_b_EndpointUpdate_s* x);

/* -------------------------- b_Framework -------------------------- */
/* refby( zxwsf_e_Header_s zxwsf_dise_Header_s ) */
#ifndef zxwsf_b_Framework_EXT
#define zxwsf_b_Framework_EXT
#endif

struct zxwsf_b_Framework_s* zxwsf_DEC_b_Framework(struct zx_ctx* c);
struct zxwsf_b_Framework_s* zxwsf_NEW_b_Framework(struct zx_ctx* c);
struct zxwsf_b_Framework_s* zxwsf_DEEP_CLONE_b_Framework(struct zx_ctx* c, struct zxwsf_b_Framework_s* x, int dup_strs);
void zxwsf_DUP_STRS_b_Framework(struct zx_ctx* c, struct zxwsf_b_Framework_s* x);
void zxwsf_FREE_b_Framework(struct zx_ctx* c, struct zxwsf_b_Framework_s* x, int free_strs);
int zxwsf_WALK_SO_b_Framework(struct zx_ctx* c, struct zxwsf_b_Framework_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_b_Framework(struct zx_ctx* c, struct zxwsf_b_Framework_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_b_Framework(struct zxwsf_b_Framework_s* x);
char* zxwsf_ENC_SO_b_Framework(struct zxwsf_b_Framework_s* x, char* p);
char* zxwsf_ENC_WO_b_Framework(struct zxwsf_b_Framework_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_b_Framework(struct zx_ctx* c, struct zxwsf_b_Framework_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_b_Framework(struct zx_ctx* c, struct zxwsf_b_Framework_s* x);

struct zxwsf_b_Framework_s {
  ZX_ELEM_EXT
  zxwsf_b_Framework_EXT
  struct zx_str_s* version;	/* {1,1} attribute xs:string */
};

struct zx_str_s* zxwsf_b_Framework_GET_version(struct zxwsf_b_Framework_s* x);
void zxwsf_b_Framework_PUT_version(struct zxwsf_b_Framework_s* x, struct zx_str_s* y);

/* -------------------------- b_InteractionService -------------------------- */
/* refby( zxwsf_b_UserInteraction_s ) */
#ifndef zxwsf_b_InteractionService_EXT
#define zxwsf_b_InteractionService_EXT
#endif

struct zxwsf_b_InteractionService_s* zxwsf_DEC_b_InteractionService(struct zx_ctx* c);
struct zxwsf_b_InteractionService_s* zxwsf_NEW_b_InteractionService(struct zx_ctx* c);
struct zxwsf_b_InteractionService_s* zxwsf_DEEP_CLONE_b_InteractionService(struct zx_ctx* c, struct zxwsf_b_InteractionService_s* x, int dup_strs);
void zxwsf_DUP_STRS_b_InteractionService(struct zx_ctx* c, struct zxwsf_b_InteractionService_s* x);
void zxwsf_FREE_b_InteractionService(struct zx_ctx* c, struct zxwsf_b_InteractionService_s* x, int free_strs);
int zxwsf_WALK_SO_b_InteractionService(struct zx_ctx* c, struct zxwsf_b_InteractionService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_b_InteractionService(struct zx_ctx* c, struct zxwsf_b_InteractionService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_b_InteractionService(struct zxwsf_b_InteractionService_s* x);
char* zxwsf_ENC_SO_b_InteractionService(struct zxwsf_b_InteractionService_s* x, char* p);
char* zxwsf_ENC_WO_b_InteractionService(struct zxwsf_b_InteractionService_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_b_InteractionService(struct zx_ctx* c, struct zxwsf_b_InteractionService_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_b_InteractionService(struct zx_ctx* c, struct zxwsf_b_InteractionService_s* x);

struct zxwsf_b_InteractionService_s {
  ZX_ELEM_EXT
  zxwsf_b_InteractionService_EXT
  struct zxwsf_a_Address_s* Address;	/* {1,1}  */
  struct zxwsf_a_ReferenceParameters_s* ReferenceParameters;	/* {0,1}  */
  struct zxwsf_a_Metadata_s* Metadata;	/* {0,1} nada */
};

struct zxwsf_a_Address_s* zxwsf_b_InteractionService_GET_Address(struct zxwsf_b_InteractionService_s* x, int n);
struct zxwsf_a_ReferenceParameters_s* zxwsf_b_InteractionService_GET_ReferenceParameters(struct zxwsf_b_InteractionService_s* x, int n);
struct zxwsf_a_Metadata_s* zxwsf_b_InteractionService_GET_Metadata(struct zxwsf_b_InteractionService_s* x, int n);
int zxwsf_b_InteractionService_NUM_Address(struct zxwsf_b_InteractionService_s* x);
int zxwsf_b_InteractionService_NUM_ReferenceParameters(struct zxwsf_b_InteractionService_s* x);
int zxwsf_b_InteractionService_NUM_Metadata(struct zxwsf_b_InteractionService_s* x);
struct zxwsf_a_Address_s* zxwsf_b_InteractionService_POP_Address(struct zxwsf_b_InteractionService_s* x);
struct zxwsf_a_ReferenceParameters_s* zxwsf_b_InteractionService_POP_ReferenceParameters(struct zxwsf_b_InteractionService_s* x);
struct zxwsf_a_Metadata_s* zxwsf_b_InteractionService_POP_Metadata(struct zxwsf_b_InteractionService_s* x);
void zxwsf_b_InteractionService_PUSH_Address(struct zxwsf_b_InteractionService_s* x, struct zxwsf_a_Address_s* y);
void zxwsf_b_InteractionService_PUSH_ReferenceParameters(struct zxwsf_b_InteractionService_s* x, struct zxwsf_a_ReferenceParameters_s* y);
void zxwsf_b_InteractionService_PUSH_Metadata(struct zxwsf_b_InteractionService_s* x, struct zxwsf_a_Metadata_s* y);
void zxwsf_b_InteractionService_PUT_Address(struct zxwsf_b_InteractionService_s* x, int n, struct zxwsf_a_Address_s* y);
void zxwsf_b_InteractionService_PUT_ReferenceParameters(struct zxwsf_b_InteractionService_s* x, int n, struct zxwsf_a_ReferenceParameters_s* y);
void zxwsf_b_InteractionService_PUT_Metadata(struct zxwsf_b_InteractionService_s* x, int n, struct zxwsf_a_Metadata_s* y);
void zxwsf_b_InteractionService_ADD_Address(struct zxwsf_b_InteractionService_s* x, int n, struct zxwsf_a_Address_s* z);
void zxwsf_b_InteractionService_ADD_ReferenceParameters(struct zxwsf_b_InteractionService_s* x, int n, struct zxwsf_a_ReferenceParameters_s* z);
void zxwsf_b_InteractionService_ADD_Metadata(struct zxwsf_b_InteractionService_s* x, int n, struct zxwsf_a_Metadata_s* z);
void zxwsf_b_InteractionService_DEL_Address(struct zxwsf_b_InteractionService_s* x, int n);
void zxwsf_b_InteractionService_DEL_ReferenceParameters(struct zxwsf_b_InteractionService_s* x, int n);
void zxwsf_b_InteractionService_DEL_Metadata(struct zxwsf_b_InteractionService_s* x, int n);
void zxwsf_b_InteractionService_REV_Address(struct zxwsf_b_InteractionService_s* x);
void zxwsf_b_InteractionService_REV_ReferenceParameters(struct zxwsf_b_InteractionService_s* x);
void zxwsf_b_InteractionService_REV_Metadata(struct zxwsf_b_InteractionService_s* x);

/* -------------------------- b_ProcessingContext -------------------------- */
/* refby( zxwsf_e_Header_s zxwsf_dise_Header_s ) */
#ifndef zxwsf_b_ProcessingContext_EXT
#define zxwsf_b_ProcessingContext_EXT
#endif

struct zxwsf_b_ProcessingContext_s* zxwsf_DEC_b_ProcessingContext(struct zx_ctx* c);
struct zxwsf_b_ProcessingContext_s* zxwsf_NEW_b_ProcessingContext(struct zx_ctx* c);
struct zxwsf_b_ProcessingContext_s* zxwsf_DEEP_CLONE_b_ProcessingContext(struct zx_ctx* c, struct zxwsf_b_ProcessingContext_s* x, int dup_strs);
void zxwsf_DUP_STRS_b_ProcessingContext(struct zx_ctx* c, struct zxwsf_b_ProcessingContext_s* x);
void zxwsf_FREE_b_ProcessingContext(struct zx_ctx* c, struct zxwsf_b_ProcessingContext_s* x, int free_strs);
int zxwsf_WALK_SO_b_ProcessingContext(struct zx_ctx* c, struct zxwsf_b_ProcessingContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_b_ProcessingContext(struct zx_ctx* c, struct zxwsf_b_ProcessingContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_b_ProcessingContext(struct zxwsf_b_ProcessingContext_s* x);
char* zxwsf_ENC_SO_b_ProcessingContext(struct zxwsf_b_ProcessingContext_s* x, char* p);
char* zxwsf_ENC_WO_b_ProcessingContext(struct zxwsf_b_ProcessingContext_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_b_ProcessingContext(struct zx_ctx* c, struct zxwsf_b_ProcessingContext_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_b_ProcessingContext(struct zx_ctx* c, struct zxwsf_b_ProcessingContext_s* x);

struct zxwsf_b_ProcessingContext_s {
  ZX_ELEM_EXT
  zxwsf_b_ProcessingContext_EXT
};


/* -------------------------- b_RedirectRequest -------------------------- */
/* refby( zxwsf_e_Header_s zxwsf_dise_Header_s ) */
#ifndef zxwsf_b_RedirectRequest_EXT
#define zxwsf_b_RedirectRequest_EXT
#endif

struct zxwsf_b_RedirectRequest_s* zxwsf_DEC_b_RedirectRequest(struct zx_ctx* c);
struct zxwsf_b_RedirectRequest_s* zxwsf_NEW_b_RedirectRequest(struct zx_ctx* c);
struct zxwsf_b_RedirectRequest_s* zxwsf_DEEP_CLONE_b_RedirectRequest(struct zx_ctx* c, struct zxwsf_b_RedirectRequest_s* x, int dup_strs);
void zxwsf_DUP_STRS_b_RedirectRequest(struct zx_ctx* c, struct zxwsf_b_RedirectRequest_s* x);
void zxwsf_FREE_b_RedirectRequest(struct zx_ctx* c, struct zxwsf_b_RedirectRequest_s* x, int free_strs);
int zxwsf_WALK_SO_b_RedirectRequest(struct zx_ctx* c, struct zxwsf_b_RedirectRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_b_RedirectRequest(struct zx_ctx* c, struct zxwsf_b_RedirectRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_b_RedirectRequest(struct zxwsf_b_RedirectRequest_s* x);
char* zxwsf_ENC_SO_b_RedirectRequest(struct zxwsf_b_RedirectRequest_s* x, char* p);
char* zxwsf_ENC_WO_b_RedirectRequest(struct zxwsf_b_RedirectRequest_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_b_RedirectRequest(struct zx_ctx* c, struct zxwsf_b_RedirectRequest_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_b_RedirectRequest(struct zx_ctx* c, struct zxwsf_b_RedirectRequest_s* x);

struct zxwsf_b_RedirectRequest_s {
  ZX_ELEM_EXT
  zxwsf_b_RedirectRequest_EXT
  struct zx_str_s* redirectURL;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zxwsf_b_RedirectRequest_GET_redirectURL(struct zxwsf_b_RedirectRequest_s* x);
void zxwsf_b_RedirectRequest_PUT_redirectURL(struct zxwsf_b_RedirectRequest_s* x, struct zx_str_s* y);

/* -------------------------- b_Sender -------------------------- */
/* refby( zxwsf_e_Header_s zxwsf_dise_Header_s ) */
#ifndef zxwsf_b_Sender_EXT
#define zxwsf_b_Sender_EXT
#endif

struct zxwsf_b_Sender_s* zxwsf_DEC_b_Sender(struct zx_ctx* c);
struct zxwsf_b_Sender_s* zxwsf_NEW_b_Sender(struct zx_ctx* c);
struct zxwsf_b_Sender_s* zxwsf_DEEP_CLONE_b_Sender(struct zx_ctx* c, struct zxwsf_b_Sender_s* x, int dup_strs);
void zxwsf_DUP_STRS_b_Sender(struct zx_ctx* c, struct zxwsf_b_Sender_s* x);
void zxwsf_FREE_b_Sender(struct zx_ctx* c, struct zxwsf_b_Sender_s* x, int free_strs);
int zxwsf_WALK_SO_b_Sender(struct zx_ctx* c, struct zxwsf_b_Sender_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_b_Sender(struct zx_ctx* c, struct zxwsf_b_Sender_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_b_Sender(struct zxwsf_b_Sender_s* x);
char* zxwsf_ENC_SO_b_Sender(struct zxwsf_b_Sender_s* x, char* p);
char* zxwsf_ENC_WO_b_Sender(struct zxwsf_b_Sender_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_b_Sender(struct zx_ctx* c, struct zxwsf_b_Sender_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_b_Sender(struct zx_ctx* c, struct zxwsf_b_Sender_s* x);

struct zxwsf_b_Sender_s {
  ZX_ELEM_EXT
  zxwsf_b_Sender_EXT
  struct zx_str_s* providerID;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* affiliationID;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxwsf_b_Sender_GET_providerID(struct zxwsf_b_Sender_s* x);
struct zx_str_s* zxwsf_b_Sender_GET_affiliationID(struct zxwsf_b_Sender_s* x);
void zxwsf_b_Sender_PUT_providerID(struct zxwsf_b_Sender_s* x, struct zx_str_s* y);
void zxwsf_b_Sender_PUT_affiliationID(struct zxwsf_b_Sender_s* x, struct zx_str_s* y);

/* -------------------------- b_TargetIdentity -------------------------- */
/* refby( zxwsf_e_Header_s ) */
#ifndef zxwsf_b_TargetIdentity_EXT
#define zxwsf_b_TargetIdentity_EXT
#endif

struct zxwsf_b_TargetIdentity_s* zxwsf_DEC_b_TargetIdentity(struct zx_ctx* c);
struct zxwsf_b_TargetIdentity_s* zxwsf_NEW_b_TargetIdentity(struct zx_ctx* c);
struct zxwsf_b_TargetIdentity_s* zxwsf_DEEP_CLONE_b_TargetIdentity(struct zx_ctx* c, struct zxwsf_b_TargetIdentity_s* x, int dup_strs);
void zxwsf_DUP_STRS_b_TargetIdentity(struct zx_ctx* c, struct zxwsf_b_TargetIdentity_s* x);
void zxwsf_FREE_b_TargetIdentity(struct zx_ctx* c, struct zxwsf_b_TargetIdentity_s* x, int free_strs);
int zxwsf_WALK_SO_b_TargetIdentity(struct zx_ctx* c, struct zxwsf_b_TargetIdentity_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_b_TargetIdentity(struct zx_ctx* c, struct zxwsf_b_TargetIdentity_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_b_TargetIdentity(struct zxwsf_b_TargetIdentity_s* x);
char* zxwsf_ENC_SO_b_TargetIdentity(struct zxwsf_b_TargetIdentity_s* x, char* p);
char* zxwsf_ENC_WO_b_TargetIdentity(struct zxwsf_b_TargetIdentity_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_b_TargetIdentity(struct zx_ctx* c, struct zxwsf_b_TargetIdentity_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_b_TargetIdentity(struct zx_ctx* c, struct zxwsf_b_TargetIdentity_s* x);

struct zxwsf_b_TargetIdentity_s {
  ZX_ELEM_EXT
  zxwsf_b_TargetIdentity_EXT
};


/* -------------------------- b_UsageDirective -------------------------- */
/* refby( zxwsf_e_Header_s ) */
#ifndef zxwsf_b_UsageDirective_EXT
#define zxwsf_b_UsageDirective_EXT
#endif

struct zxwsf_b_UsageDirective_s* zxwsf_DEC_b_UsageDirective(struct zx_ctx* c);
struct zxwsf_b_UsageDirective_s* zxwsf_NEW_b_UsageDirective(struct zx_ctx* c);
struct zxwsf_b_UsageDirective_s* zxwsf_DEEP_CLONE_b_UsageDirective(struct zx_ctx* c, struct zxwsf_b_UsageDirective_s* x, int dup_strs);
void zxwsf_DUP_STRS_b_UsageDirective(struct zx_ctx* c, struct zxwsf_b_UsageDirective_s* x);
void zxwsf_FREE_b_UsageDirective(struct zx_ctx* c, struct zxwsf_b_UsageDirective_s* x, int free_strs);
int zxwsf_WALK_SO_b_UsageDirective(struct zx_ctx* c, struct zxwsf_b_UsageDirective_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_b_UsageDirective(struct zx_ctx* c, struct zxwsf_b_UsageDirective_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_b_UsageDirective(struct zxwsf_b_UsageDirective_s* x);
char* zxwsf_ENC_SO_b_UsageDirective(struct zxwsf_b_UsageDirective_s* x, char* p);
char* zxwsf_ENC_WO_b_UsageDirective(struct zxwsf_b_UsageDirective_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_b_UsageDirective(struct zx_ctx* c, struct zxwsf_b_UsageDirective_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_b_UsageDirective(struct zx_ctx* c, struct zxwsf_b_UsageDirective_s* x);

struct zxwsf_b_UsageDirective_s {
  ZX_ELEM_EXT
  zxwsf_b_UsageDirective_EXT
  struct zx_str_s* ref;	/* {1,1} attribute xs:string */
};

struct zx_str_s* zxwsf_b_UsageDirective_GET_ref(struct zxwsf_b_UsageDirective_s* x);
void zxwsf_b_UsageDirective_PUT_ref(struct zxwsf_b_UsageDirective_s* x, struct zx_str_s* y);

/* -------------------------- b_UserInteraction -------------------------- */
/* refby( zxwsf_e_Header_s ) */
#ifndef zxwsf_b_UserInteraction_EXT
#define zxwsf_b_UserInteraction_EXT
#endif

struct zxwsf_b_UserInteraction_s* zxwsf_DEC_b_UserInteraction(struct zx_ctx* c);
struct zxwsf_b_UserInteraction_s* zxwsf_NEW_b_UserInteraction(struct zx_ctx* c);
struct zxwsf_b_UserInteraction_s* zxwsf_DEEP_CLONE_b_UserInteraction(struct zx_ctx* c, struct zxwsf_b_UserInteraction_s* x, int dup_strs);
void zxwsf_DUP_STRS_b_UserInteraction(struct zx_ctx* c, struct zxwsf_b_UserInteraction_s* x);
void zxwsf_FREE_b_UserInteraction(struct zx_ctx* c, struct zxwsf_b_UserInteraction_s* x, int free_strs);
int zxwsf_WALK_SO_b_UserInteraction(struct zx_ctx* c, struct zxwsf_b_UserInteraction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_b_UserInteraction(struct zx_ctx* c, struct zxwsf_b_UserInteraction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_b_UserInteraction(struct zxwsf_b_UserInteraction_s* x);
char* zxwsf_ENC_SO_b_UserInteraction(struct zxwsf_b_UserInteraction_s* x, char* p);
char* zxwsf_ENC_WO_b_UserInteraction(struct zxwsf_b_UserInteraction_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_b_UserInteraction(struct zx_ctx* c, struct zxwsf_b_UserInteraction_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_b_UserInteraction(struct zx_ctx* c, struct zxwsf_b_UserInteraction_s* x);

struct zxwsf_b_UserInteraction_s {
  ZX_ELEM_EXT
  zxwsf_b_UserInteraction_EXT
  struct zxwsf_b_InteractionService_s* InteractionService;	/* {0,-1}  */
  struct zx_str_s* interact;	/* {0,1} attribute xs:QName */
  struct zx_str_s* language;	/* {0,1} attribute xs:NMTOKENS */
  struct zx_str_s* redirect;	/* {0,1} attribute xs:boolean */
  struct zx_str_s* maxInteractTime;	/* {0,1} attribute xs:integer */
};

struct zx_str_s* zxwsf_b_UserInteraction_GET_interact(struct zxwsf_b_UserInteraction_s* x);
struct zx_str_s* zxwsf_b_UserInteraction_GET_language(struct zxwsf_b_UserInteraction_s* x);
struct zx_str_s* zxwsf_b_UserInteraction_GET_redirect(struct zxwsf_b_UserInteraction_s* x);
struct zx_str_s* zxwsf_b_UserInteraction_GET_maxInteractTime(struct zxwsf_b_UserInteraction_s* x);
struct zxwsf_b_InteractionService_s* zxwsf_b_UserInteraction_GET_InteractionService(struct zxwsf_b_UserInteraction_s* x, int n);
int zxwsf_b_UserInteraction_NUM_InteractionService(struct zxwsf_b_UserInteraction_s* x);
struct zxwsf_b_InteractionService_s* zxwsf_b_UserInteraction_POP_InteractionService(struct zxwsf_b_UserInteraction_s* x);
void zxwsf_b_UserInteraction_PUSH_InteractionService(struct zxwsf_b_UserInteraction_s* x, struct zxwsf_b_InteractionService_s* y);
void zxwsf_b_UserInteraction_PUT_interact(struct zxwsf_b_UserInteraction_s* x, struct zx_str_s* y);
void zxwsf_b_UserInteraction_PUT_language(struct zxwsf_b_UserInteraction_s* x, struct zx_str_s* y);
void zxwsf_b_UserInteraction_PUT_redirect(struct zxwsf_b_UserInteraction_s* x, struct zx_str_s* y);
void zxwsf_b_UserInteraction_PUT_maxInteractTime(struct zxwsf_b_UserInteraction_s* x, struct zx_str_s* y);
void zxwsf_b_UserInteraction_PUT_InteractionService(struct zxwsf_b_UserInteraction_s* x, int n, struct zxwsf_b_InteractionService_s* y);
void zxwsf_b_UserInteraction_ADD_InteractionService(struct zxwsf_b_UserInteraction_s* x, int n, struct zxwsf_b_InteractionService_s* z);
void zxwsf_b_UserInteraction_DEL_InteractionService(struct zxwsf_b_UserInteraction_s* x, int n);
void zxwsf_b_UserInteraction_REV_InteractionService(struct zxwsf_b_UserInteraction_s* x);

/* -------------------------- di12_AuthenticateRequester -------------------------- */
/* refby( ) */
#ifndef zxwsf_di12_AuthenticateRequester_EXT
#define zxwsf_di12_AuthenticateRequester_EXT
#endif

struct zxwsf_di12_AuthenticateRequester_s* zxwsf_DEC_di12_AuthenticateRequester(struct zx_ctx* c);
struct zxwsf_di12_AuthenticateRequester_s* zxwsf_NEW_di12_AuthenticateRequester(struct zx_ctx* c);
struct zxwsf_di12_AuthenticateRequester_s* zxwsf_DEEP_CLONE_di12_AuthenticateRequester(struct zx_ctx* c, struct zxwsf_di12_AuthenticateRequester_s* x, int dup_strs);
void zxwsf_DUP_STRS_di12_AuthenticateRequester(struct zx_ctx* c, struct zxwsf_di12_AuthenticateRequester_s* x);
void zxwsf_FREE_di12_AuthenticateRequester(struct zx_ctx* c, struct zxwsf_di12_AuthenticateRequester_s* x, int free_strs);
int zxwsf_WALK_SO_di12_AuthenticateRequester(struct zx_ctx* c, struct zxwsf_di12_AuthenticateRequester_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di12_AuthenticateRequester(struct zx_ctx* c, struct zxwsf_di12_AuthenticateRequester_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di12_AuthenticateRequester(struct zxwsf_di12_AuthenticateRequester_s* x);
char* zxwsf_ENC_SO_di12_AuthenticateRequester(struct zxwsf_di12_AuthenticateRequester_s* x, char* p);
char* zxwsf_ENC_WO_di12_AuthenticateRequester(struct zxwsf_di12_AuthenticateRequester_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di12_AuthenticateRequester(struct zx_ctx* c, struct zxwsf_di12_AuthenticateRequester_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di12_AuthenticateRequester(struct zx_ctx* c, struct zxwsf_di12_AuthenticateRequester_s* x);

struct zxwsf_di12_AuthenticateRequester_s {
  ZX_ELEM_EXT
  zxwsf_di12_AuthenticateRequester_EXT
  struct zx_str_s* descriptionIDRefs;	/* {0,1} attribute xs:IDREFS */
};

struct zx_str_s* zxwsf_di12_AuthenticateRequester_GET_descriptionIDRefs(struct zxwsf_di12_AuthenticateRequester_s* x);
void zxwsf_di12_AuthenticateRequester_PUT_descriptionIDRefs(struct zxwsf_di12_AuthenticateRequester_s* x, struct zx_str_s* y);

/* -------------------------- di12_AuthenticateSessionContext -------------------------- */
/* refby( ) */
#ifndef zxwsf_di12_AuthenticateSessionContext_EXT
#define zxwsf_di12_AuthenticateSessionContext_EXT
#endif

struct zxwsf_di12_AuthenticateSessionContext_s* zxwsf_DEC_di12_AuthenticateSessionContext(struct zx_ctx* c);
struct zxwsf_di12_AuthenticateSessionContext_s* zxwsf_NEW_di12_AuthenticateSessionContext(struct zx_ctx* c);
struct zxwsf_di12_AuthenticateSessionContext_s* zxwsf_DEEP_CLONE_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zxwsf_di12_AuthenticateSessionContext_s* x, int dup_strs);
void zxwsf_DUP_STRS_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zxwsf_di12_AuthenticateSessionContext_s* x);
void zxwsf_FREE_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zxwsf_di12_AuthenticateSessionContext_s* x, int free_strs);
int zxwsf_WALK_SO_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zxwsf_di12_AuthenticateSessionContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zxwsf_di12_AuthenticateSessionContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di12_AuthenticateSessionContext(struct zxwsf_di12_AuthenticateSessionContext_s* x);
char* zxwsf_ENC_SO_di12_AuthenticateSessionContext(struct zxwsf_di12_AuthenticateSessionContext_s* x, char* p);
char* zxwsf_ENC_WO_di12_AuthenticateSessionContext(struct zxwsf_di12_AuthenticateSessionContext_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zxwsf_di12_AuthenticateSessionContext_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zxwsf_di12_AuthenticateSessionContext_s* x);

struct zxwsf_di12_AuthenticateSessionContext_s {
  ZX_ELEM_EXT
  zxwsf_di12_AuthenticateSessionContext_EXT
  struct zx_str_s* descriptionIDRefs;	/* {0,1} attribute xs:IDREFS */
};

struct zx_str_s* zxwsf_di12_AuthenticateSessionContext_GET_descriptionIDRefs(struct zxwsf_di12_AuthenticateSessionContext_s* x);
void zxwsf_di12_AuthenticateSessionContext_PUT_descriptionIDRefs(struct zxwsf_di12_AuthenticateSessionContext_s* x, struct zx_str_s* y);

/* -------------------------- di12_AuthorizeRequester -------------------------- */
/* refby( ) */
#ifndef zxwsf_di12_AuthorizeRequester_EXT
#define zxwsf_di12_AuthorizeRequester_EXT
#endif

struct zxwsf_di12_AuthorizeRequester_s* zxwsf_DEC_di12_AuthorizeRequester(struct zx_ctx* c);
struct zxwsf_di12_AuthorizeRequester_s* zxwsf_NEW_di12_AuthorizeRequester(struct zx_ctx* c);
struct zxwsf_di12_AuthorizeRequester_s* zxwsf_DEEP_CLONE_di12_AuthorizeRequester(struct zx_ctx* c, struct zxwsf_di12_AuthorizeRequester_s* x, int dup_strs);
void zxwsf_DUP_STRS_di12_AuthorizeRequester(struct zx_ctx* c, struct zxwsf_di12_AuthorizeRequester_s* x);
void zxwsf_FREE_di12_AuthorizeRequester(struct zx_ctx* c, struct zxwsf_di12_AuthorizeRequester_s* x, int free_strs);
int zxwsf_WALK_SO_di12_AuthorizeRequester(struct zx_ctx* c, struct zxwsf_di12_AuthorizeRequester_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di12_AuthorizeRequester(struct zx_ctx* c, struct zxwsf_di12_AuthorizeRequester_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di12_AuthorizeRequester(struct zxwsf_di12_AuthorizeRequester_s* x);
char* zxwsf_ENC_SO_di12_AuthorizeRequester(struct zxwsf_di12_AuthorizeRequester_s* x, char* p);
char* zxwsf_ENC_WO_di12_AuthorizeRequester(struct zxwsf_di12_AuthorizeRequester_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di12_AuthorizeRequester(struct zx_ctx* c, struct zxwsf_di12_AuthorizeRequester_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di12_AuthorizeRequester(struct zx_ctx* c, struct zxwsf_di12_AuthorizeRequester_s* x);

struct zxwsf_di12_AuthorizeRequester_s {
  ZX_ELEM_EXT
  zxwsf_di12_AuthorizeRequester_EXT
  struct zx_str_s* descriptionIDRefs;	/* {0,1} attribute xs:IDREFS */
};

struct zx_str_s* zxwsf_di12_AuthorizeRequester_GET_descriptionIDRefs(struct zxwsf_di12_AuthorizeRequester_s* x);
void zxwsf_di12_AuthorizeRequester_PUT_descriptionIDRefs(struct zxwsf_di12_AuthorizeRequester_s* x, struct zx_str_s* y);

/* -------------------------- di12_Credentials -------------------------- */
/* refby( zxwsf_di12_QueryResponse_s ) */
#ifndef zxwsf_di12_Credentials_EXT
#define zxwsf_di12_Credentials_EXT
#endif

struct zxwsf_di12_Credentials_s* zxwsf_DEC_di12_Credentials(struct zx_ctx* c);
struct zxwsf_di12_Credentials_s* zxwsf_NEW_di12_Credentials(struct zx_ctx* c);
struct zxwsf_di12_Credentials_s* zxwsf_DEEP_CLONE_di12_Credentials(struct zx_ctx* c, struct zxwsf_di12_Credentials_s* x, int dup_strs);
void zxwsf_DUP_STRS_di12_Credentials(struct zx_ctx* c, struct zxwsf_di12_Credentials_s* x);
void zxwsf_FREE_di12_Credentials(struct zx_ctx* c, struct zxwsf_di12_Credentials_s* x, int free_strs);
int zxwsf_WALK_SO_di12_Credentials(struct zx_ctx* c, struct zxwsf_di12_Credentials_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di12_Credentials(struct zx_ctx* c, struct zxwsf_di12_Credentials_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di12_Credentials(struct zxwsf_di12_Credentials_s* x);
char* zxwsf_ENC_SO_di12_Credentials(struct zxwsf_di12_Credentials_s* x, char* p);
char* zxwsf_ENC_WO_di12_Credentials(struct zxwsf_di12_Credentials_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di12_Credentials(struct zx_ctx* c, struct zxwsf_di12_Credentials_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di12_Credentials(struct zx_ctx* c, struct zxwsf_di12_Credentials_s* x);

struct zxwsf_di12_Credentials_s {
  ZX_ELEM_EXT
  zxwsf_di12_Credentials_EXT
};


/* -------------------------- di12_Description -------------------------- */
/* refby( zxwsf_di12_ServiceInstance_s ) */
#ifndef zxwsf_di12_Description_EXT
#define zxwsf_di12_Description_EXT
#endif

struct zxwsf_di12_Description_s* zxwsf_DEC_di12_Description(struct zx_ctx* c);
struct zxwsf_di12_Description_s* zxwsf_NEW_di12_Description(struct zx_ctx* c);
struct zxwsf_di12_Description_s* zxwsf_DEEP_CLONE_di12_Description(struct zx_ctx* c, struct zxwsf_di12_Description_s* x, int dup_strs);
void zxwsf_DUP_STRS_di12_Description(struct zx_ctx* c, struct zxwsf_di12_Description_s* x);
void zxwsf_FREE_di12_Description(struct zx_ctx* c, struct zxwsf_di12_Description_s* x, int free_strs);
int zxwsf_WALK_SO_di12_Description(struct zx_ctx* c, struct zxwsf_di12_Description_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di12_Description(struct zx_ctx* c, struct zxwsf_di12_Description_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di12_Description(struct zxwsf_di12_Description_s* x);
char* zxwsf_ENC_SO_di12_Description(struct zxwsf_di12_Description_s* x, char* p);
char* zxwsf_ENC_WO_di12_Description(struct zxwsf_di12_Description_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di12_Description(struct zx_ctx* c, struct zxwsf_di12_Description_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di12_Description(struct zx_ctx* c, struct zxwsf_di12_Description_s* x);

struct zxwsf_di12_Description_s {
  ZX_ELEM_EXT
  zxwsf_di12_Description_EXT
  struct zx_elem_s* SecurityMechID;	/* {1,-1} xs:anyURI */
  struct zx_elem_s* CredentialRef;	/* {0,-1} xs:IDREF */
  struct zx_elem_s* WsdlURI;	/* {1,1} xs:anyURI */
  struct zx_elem_s* ServiceNameRef;	/* {1,1} xs:QName */
  struct zx_elem_s* Endpoint;	/* {1,1} xs:anyURI */
  struct zx_elem_s* SoapAction;	/* {0,1} xs:anyURI */
  struct zx_str_s* id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zxwsf_di12_Description_GET_id(struct zxwsf_di12_Description_s* x);
struct zx_elem_s* zxwsf_di12_Description_GET_SecurityMechID(struct zxwsf_di12_Description_s* x, int n);
struct zx_elem_s* zxwsf_di12_Description_GET_CredentialRef(struct zxwsf_di12_Description_s* x, int n);
struct zx_elem_s* zxwsf_di12_Description_GET_WsdlURI(struct zxwsf_di12_Description_s* x, int n);
struct zx_elem_s* zxwsf_di12_Description_GET_ServiceNameRef(struct zxwsf_di12_Description_s* x, int n);
struct zx_elem_s* zxwsf_di12_Description_GET_Endpoint(struct zxwsf_di12_Description_s* x, int n);
struct zx_elem_s* zxwsf_di12_Description_GET_SoapAction(struct zxwsf_di12_Description_s* x, int n);
int zxwsf_di12_Description_NUM_SecurityMechID(struct zxwsf_di12_Description_s* x);
int zxwsf_di12_Description_NUM_CredentialRef(struct zxwsf_di12_Description_s* x);
int zxwsf_di12_Description_NUM_WsdlURI(struct zxwsf_di12_Description_s* x);
int zxwsf_di12_Description_NUM_ServiceNameRef(struct zxwsf_di12_Description_s* x);
int zxwsf_di12_Description_NUM_Endpoint(struct zxwsf_di12_Description_s* x);
int zxwsf_di12_Description_NUM_SoapAction(struct zxwsf_di12_Description_s* x);
struct zx_elem_s* zxwsf_di12_Description_POP_SecurityMechID(struct zxwsf_di12_Description_s* x);
struct zx_elem_s* zxwsf_di12_Description_POP_CredentialRef(struct zxwsf_di12_Description_s* x);
struct zx_elem_s* zxwsf_di12_Description_POP_WsdlURI(struct zxwsf_di12_Description_s* x);
struct zx_elem_s* zxwsf_di12_Description_POP_ServiceNameRef(struct zxwsf_di12_Description_s* x);
struct zx_elem_s* zxwsf_di12_Description_POP_Endpoint(struct zxwsf_di12_Description_s* x);
struct zx_elem_s* zxwsf_di12_Description_POP_SoapAction(struct zxwsf_di12_Description_s* x);
void zxwsf_di12_Description_PUSH_SecurityMechID(struct zxwsf_di12_Description_s* x, struct zx_elem_s* y);
void zxwsf_di12_Description_PUSH_CredentialRef(struct zxwsf_di12_Description_s* x, struct zx_elem_s* y);
void zxwsf_di12_Description_PUSH_WsdlURI(struct zxwsf_di12_Description_s* x, struct zx_elem_s* y);
void zxwsf_di12_Description_PUSH_ServiceNameRef(struct zxwsf_di12_Description_s* x, struct zx_elem_s* y);
void zxwsf_di12_Description_PUSH_Endpoint(struct zxwsf_di12_Description_s* x, struct zx_elem_s* y);
void zxwsf_di12_Description_PUSH_SoapAction(struct zxwsf_di12_Description_s* x, struct zx_elem_s* y);
void zxwsf_di12_Description_PUT_id(struct zxwsf_di12_Description_s* x, struct zx_str_s* y);
void zxwsf_di12_Description_PUT_SecurityMechID(struct zxwsf_di12_Description_s* x, int n, struct zx_elem_s* y);
void zxwsf_di12_Description_PUT_CredentialRef(struct zxwsf_di12_Description_s* x, int n, struct zx_elem_s* y);
void zxwsf_di12_Description_PUT_WsdlURI(struct zxwsf_di12_Description_s* x, int n, struct zx_elem_s* y);
void zxwsf_di12_Description_PUT_ServiceNameRef(struct zxwsf_di12_Description_s* x, int n, struct zx_elem_s* y);
void zxwsf_di12_Description_PUT_Endpoint(struct zxwsf_di12_Description_s* x, int n, struct zx_elem_s* y);
void zxwsf_di12_Description_PUT_SoapAction(struct zxwsf_di12_Description_s* x, int n, struct zx_elem_s* y);
void zxwsf_di12_Description_ADD_SecurityMechID(struct zxwsf_di12_Description_s* x, int n, struct zx_elem_s* z);
void zxwsf_di12_Description_ADD_CredentialRef(struct zxwsf_di12_Description_s* x, int n, struct zx_elem_s* z);
void zxwsf_di12_Description_ADD_WsdlURI(struct zxwsf_di12_Description_s* x, int n, struct zx_elem_s* z);
void zxwsf_di12_Description_ADD_ServiceNameRef(struct zxwsf_di12_Description_s* x, int n, struct zx_elem_s* z);
void zxwsf_di12_Description_ADD_Endpoint(struct zxwsf_di12_Description_s* x, int n, struct zx_elem_s* z);
void zxwsf_di12_Description_ADD_SoapAction(struct zxwsf_di12_Description_s* x, int n, struct zx_elem_s* z);
void zxwsf_di12_Description_DEL_SecurityMechID(struct zxwsf_di12_Description_s* x, int n);
void zxwsf_di12_Description_DEL_CredentialRef(struct zxwsf_di12_Description_s* x, int n);
void zxwsf_di12_Description_DEL_WsdlURI(struct zxwsf_di12_Description_s* x, int n);
void zxwsf_di12_Description_DEL_ServiceNameRef(struct zxwsf_di12_Description_s* x, int n);
void zxwsf_di12_Description_DEL_Endpoint(struct zxwsf_di12_Description_s* x, int n);
void zxwsf_di12_Description_DEL_SoapAction(struct zxwsf_di12_Description_s* x, int n);
void zxwsf_di12_Description_REV_SecurityMechID(struct zxwsf_di12_Description_s* x);
void zxwsf_di12_Description_REV_CredentialRef(struct zxwsf_di12_Description_s* x);
void zxwsf_di12_Description_REV_WsdlURI(struct zxwsf_di12_Description_s* x);
void zxwsf_di12_Description_REV_ServiceNameRef(struct zxwsf_di12_Description_s* x);
void zxwsf_di12_Description_REV_Endpoint(struct zxwsf_di12_Description_s* x);
void zxwsf_di12_Description_REV_SoapAction(struct zxwsf_di12_Description_s* x);

/* -------------------------- di12_EncryptResourceID -------------------------- */
/* refby( ) */
#ifndef zxwsf_di12_EncryptResourceID_EXT
#define zxwsf_di12_EncryptResourceID_EXT
#endif

struct zxwsf_di12_EncryptResourceID_s* zxwsf_DEC_di12_EncryptResourceID(struct zx_ctx* c);
struct zxwsf_di12_EncryptResourceID_s* zxwsf_NEW_di12_EncryptResourceID(struct zx_ctx* c);
struct zxwsf_di12_EncryptResourceID_s* zxwsf_DEEP_CLONE_di12_EncryptResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptResourceID_s* x, int dup_strs);
void zxwsf_DUP_STRS_di12_EncryptResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptResourceID_s* x);
void zxwsf_FREE_di12_EncryptResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptResourceID_s* x, int free_strs);
int zxwsf_WALK_SO_di12_EncryptResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di12_EncryptResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di12_EncryptResourceID(struct zxwsf_di12_EncryptResourceID_s* x);
char* zxwsf_ENC_SO_di12_EncryptResourceID(struct zxwsf_di12_EncryptResourceID_s* x, char* p);
char* zxwsf_ENC_WO_di12_EncryptResourceID(struct zxwsf_di12_EncryptResourceID_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di12_EncryptResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptResourceID_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di12_EncryptResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptResourceID_s* x);

struct zxwsf_di12_EncryptResourceID_s {
  ZX_ELEM_EXT
  zxwsf_di12_EncryptResourceID_EXT
  struct zx_str_s* descriptionIDRefs;	/* {0,1} attribute xs:IDREFS */
};

struct zx_str_s* zxwsf_di12_EncryptResourceID_GET_descriptionIDRefs(struct zxwsf_di12_EncryptResourceID_s* x);
void zxwsf_di12_EncryptResourceID_PUT_descriptionIDRefs(struct zxwsf_di12_EncryptResourceID_s* x, struct zx_str_s* y);

/* -------------------------- di12_EncryptedResourceID -------------------------- */
/* refby( ) */
#ifndef zxwsf_di12_EncryptedResourceID_EXT
#define zxwsf_di12_EncryptedResourceID_EXT
#endif

struct zxwsf_di12_EncryptedResourceID_s* zxwsf_DEC_di12_EncryptedResourceID(struct zx_ctx* c);
struct zxwsf_di12_EncryptedResourceID_s* zxwsf_NEW_di12_EncryptedResourceID(struct zx_ctx* c);
struct zxwsf_di12_EncryptedResourceID_s* zxwsf_DEEP_CLONE_di12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptedResourceID_s* x, int dup_strs);
void zxwsf_DUP_STRS_di12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptedResourceID_s* x);
void zxwsf_FREE_di12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptedResourceID_s* x, int free_strs);
int zxwsf_WALK_SO_di12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptedResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptedResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di12_EncryptedResourceID(struct zxwsf_di12_EncryptedResourceID_s* x);
char* zxwsf_ENC_SO_di12_EncryptedResourceID(struct zxwsf_di12_EncryptedResourceID_s* x, char* p);
char* zxwsf_ENC_WO_di12_EncryptedResourceID(struct zxwsf_di12_EncryptedResourceID_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptedResourceID_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptedResourceID_s* x);

struct zxwsf_di12_EncryptedResourceID_s {
  ZX_ELEM_EXT
  zxwsf_di12_EncryptedResourceID_EXT
  struct zx_elem_s* EncryptedData;	/* {1,1}  */
  struct zx_elem_s* EncryptedKey;	/* {1,1}  */
};

struct zx_elem_s* zxwsf_di12_EncryptedResourceID_GET_EncryptedData(struct zxwsf_di12_EncryptedResourceID_s* x, int n);
struct zx_elem_s* zxwsf_di12_EncryptedResourceID_GET_EncryptedKey(struct zxwsf_di12_EncryptedResourceID_s* x, int n);
int zxwsf_di12_EncryptedResourceID_NUM_EncryptedData(struct zxwsf_di12_EncryptedResourceID_s* x);
int zxwsf_di12_EncryptedResourceID_NUM_EncryptedKey(struct zxwsf_di12_EncryptedResourceID_s* x);
struct zx_elem_s* zxwsf_di12_EncryptedResourceID_POP_EncryptedData(struct zxwsf_di12_EncryptedResourceID_s* x);
struct zx_elem_s* zxwsf_di12_EncryptedResourceID_POP_EncryptedKey(struct zxwsf_di12_EncryptedResourceID_s* x);
void zxwsf_di12_EncryptedResourceID_PUSH_EncryptedData(struct zxwsf_di12_EncryptedResourceID_s* x, struct zx_elem_s* y);
void zxwsf_di12_EncryptedResourceID_PUSH_EncryptedKey(struct zxwsf_di12_EncryptedResourceID_s* x, struct zx_elem_s* y);
void zxwsf_di12_EncryptedResourceID_PUT_EncryptedData(struct zxwsf_di12_EncryptedResourceID_s* x, int n, struct zx_elem_s* y);
void zxwsf_di12_EncryptedResourceID_PUT_EncryptedKey(struct zxwsf_di12_EncryptedResourceID_s* x, int n, struct zx_elem_s* y);
void zxwsf_di12_EncryptedResourceID_ADD_EncryptedData(struct zxwsf_di12_EncryptedResourceID_s* x, int n, struct zx_elem_s* z);
void zxwsf_di12_EncryptedResourceID_ADD_EncryptedKey(struct zxwsf_di12_EncryptedResourceID_s* x, int n, struct zx_elem_s* z);
void zxwsf_di12_EncryptedResourceID_DEL_EncryptedData(struct zxwsf_di12_EncryptedResourceID_s* x, int n);
void zxwsf_di12_EncryptedResourceID_DEL_EncryptedKey(struct zxwsf_di12_EncryptedResourceID_s* x, int n);
void zxwsf_di12_EncryptedResourceID_REV_EncryptedData(struct zxwsf_di12_EncryptedResourceID_s* x);
void zxwsf_di12_EncryptedResourceID_REV_EncryptedKey(struct zxwsf_di12_EncryptedResourceID_s* x);

/* -------------------------- di12_Extension -------------------------- */
/* refby( zxwsf_di12_ModifyResponse_s ) */
#ifndef zxwsf_di12_Extension_EXT
#define zxwsf_di12_Extension_EXT
#endif

struct zxwsf_di12_Extension_s* zxwsf_DEC_di12_Extension(struct zx_ctx* c);
struct zxwsf_di12_Extension_s* zxwsf_NEW_di12_Extension(struct zx_ctx* c);
struct zxwsf_di12_Extension_s* zxwsf_DEEP_CLONE_di12_Extension(struct zx_ctx* c, struct zxwsf_di12_Extension_s* x, int dup_strs);
void zxwsf_DUP_STRS_di12_Extension(struct zx_ctx* c, struct zxwsf_di12_Extension_s* x);
void zxwsf_FREE_di12_Extension(struct zx_ctx* c, struct zxwsf_di12_Extension_s* x, int free_strs);
int zxwsf_WALK_SO_di12_Extension(struct zx_ctx* c, struct zxwsf_di12_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di12_Extension(struct zx_ctx* c, struct zxwsf_di12_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di12_Extension(struct zxwsf_di12_Extension_s* x);
char* zxwsf_ENC_SO_di12_Extension(struct zxwsf_di12_Extension_s* x, char* p);
char* zxwsf_ENC_WO_di12_Extension(struct zxwsf_di12_Extension_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di12_Extension(struct zx_ctx* c, struct zxwsf_di12_Extension_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di12_Extension(struct zx_ctx* c, struct zxwsf_di12_Extension_s* x);

struct zxwsf_di12_Extension_s {
  ZX_ELEM_EXT
  zxwsf_di12_Extension_EXT
};


/* -------------------------- di12_InsertEntry -------------------------- */
/* refby( zxwsf_di12_Modify_s ) */
#ifndef zxwsf_di12_InsertEntry_EXT
#define zxwsf_di12_InsertEntry_EXT
#endif

struct zxwsf_di12_InsertEntry_s* zxwsf_DEC_di12_InsertEntry(struct zx_ctx* c);
struct zxwsf_di12_InsertEntry_s* zxwsf_NEW_di12_InsertEntry(struct zx_ctx* c);
struct zxwsf_di12_InsertEntry_s* zxwsf_DEEP_CLONE_di12_InsertEntry(struct zx_ctx* c, struct zxwsf_di12_InsertEntry_s* x, int dup_strs);
void zxwsf_DUP_STRS_di12_InsertEntry(struct zx_ctx* c, struct zxwsf_di12_InsertEntry_s* x);
void zxwsf_FREE_di12_InsertEntry(struct zx_ctx* c, struct zxwsf_di12_InsertEntry_s* x, int free_strs);
int zxwsf_WALK_SO_di12_InsertEntry(struct zx_ctx* c, struct zxwsf_di12_InsertEntry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di12_InsertEntry(struct zx_ctx* c, struct zxwsf_di12_InsertEntry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di12_InsertEntry(struct zxwsf_di12_InsertEntry_s* x);
char* zxwsf_ENC_SO_di12_InsertEntry(struct zxwsf_di12_InsertEntry_s* x, char* p);
char* zxwsf_ENC_WO_di12_InsertEntry(struct zxwsf_di12_InsertEntry_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di12_InsertEntry(struct zx_ctx* c, struct zxwsf_di12_InsertEntry_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di12_InsertEntry(struct zx_ctx* c, struct zxwsf_di12_InsertEntry_s* x);

struct zxwsf_di12_InsertEntry_s {
  ZX_ELEM_EXT
  zxwsf_di12_InsertEntry_EXT
  struct zxwsf_di12_ResourceOffering_s* ResourceOffering;	/* {1,1} nada */
};

struct zxwsf_di12_ResourceOffering_s* zxwsf_di12_InsertEntry_GET_ResourceOffering(struct zxwsf_di12_InsertEntry_s* x, int n);
int zxwsf_di12_InsertEntry_NUM_ResourceOffering(struct zxwsf_di12_InsertEntry_s* x);
struct zxwsf_di12_ResourceOffering_s* zxwsf_di12_InsertEntry_POP_ResourceOffering(struct zxwsf_di12_InsertEntry_s* x);
void zxwsf_di12_InsertEntry_PUSH_ResourceOffering(struct zxwsf_di12_InsertEntry_s* x, struct zxwsf_di12_ResourceOffering_s* y);
void zxwsf_di12_InsertEntry_PUT_ResourceOffering(struct zxwsf_di12_InsertEntry_s* x, int n, struct zxwsf_di12_ResourceOffering_s* y);
void zxwsf_di12_InsertEntry_ADD_ResourceOffering(struct zxwsf_di12_InsertEntry_s* x, int n, struct zxwsf_di12_ResourceOffering_s* z);
void zxwsf_di12_InsertEntry_DEL_ResourceOffering(struct zxwsf_di12_InsertEntry_s* x, int n);
void zxwsf_di12_InsertEntry_REV_ResourceOffering(struct zxwsf_di12_InsertEntry_s* x);

/* -------------------------- di12_Modify -------------------------- */
/* refby( zxwsf_e_Body_s ) */
#ifndef zxwsf_di12_Modify_EXT
#define zxwsf_di12_Modify_EXT
#endif

struct zxwsf_di12_Modify_s* zxwsf_DEC_di12_Modify(struct zx_ctx* c);
struct zxwsf_di12_Modify_s* zxwsf_NEW_di12_Modify(struct zx_ctx* c);
struct zxwsf_di12_Modify_s* zxwsf_DEEP_CLONE_di12_Modify(struct zx_ctx* c, struct zxwsf_di12_Modify_s* x, int dup_strs);
void zxwsf_DUP_STRS_di12_Modify(struct zx_ctx* c, struct zxwsf_di12_Modify_s* x);
void zxwsf_FREE_di12_Modify(struct zx_ctx* c, struct zxwsf_di12_Modify_s* x, int free_strs);
int zxwsf_WALK_SO_di12_Modify(struct zx_ctx* c, struct zxwsf_di12_Modify_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di12_Modify(struct zx_ctx* c, struct zxwsf_di12_Modify_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di12_Modify(struct zxwsf_di12_Modify_s* x);
char* zxwsf_ENC_SO_di12_Modify(struct zxwsf_di12_Modify_s* x, char* p);
char* zxwsf_ENC_WO_di12_Modify(struct zxwsf_di12_Modify_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di12_Modify(struct zx_ctx* c, struct zxwsf_di12_Modify_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di12_Modify(struct zx_ctx* c, struct zxwsf_di12_Modify_s* x);

struct zxwsf_di12_Modify_s {
  ZX_ELEM_EXT
  zxwsf_di12_Modify_EXT
  struct zxwsf_di12_InsertEntry_s* InsertEntry;	/* {0,-1}  */
  struct zxwsf_di12_RemoveEntry_s* RemoveEntry;	/* {0,-1}  */
  struct zx_str_s* id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zxwsf_di12_Modify_GET_id(struct zxwsf_di12_Modify_s* x);
struct zxwsf_di12_InsertEntry_s* zxwsf_di12_Modify_GET_InsertEntry(struct zxwsf_di12_Modify_s* x, int n);
struct zxwsf_di12_RemoveEntry_s* zxwsf_di12_Modify_GET_RemoveEntry(struct zxwsf_di12_Modify_s* x, int n);
int zxwsf_di12_Modify_NUM_InsertEntry(struct zxwsf_di12_Modify_s* x);
int zxwsf_di12_Modify_NUM_RemoveEntry(struct zxwsf_di12_Modify_s* x);
struct zxwsf_di12_InsertEntry_s* zxwsf_di12_Modify_POP_InsertEntry(struct zxwsf_di12_Modify_s* x);
struct zxwsf_di12_RemoveEntry_s* zxwsf_di12_Modify_POP_RemoveEntry(struct zxwsf_di12_Modify_s* x);
void zxwsf_di12_Modify_PUSH_InsertEntry(struct zxwsf_di12_Modify_s* x, struct zxwsf_di12_InsertEntry_s* y);
void zxwsf_di12_Modify_PUSH_RemoveEntry(struct zxwsf_di12_Modify_s* x, struct zxwsf_di12_RemoveEntry_s* y);
void zxwsf_di12_Modify_PUT_id(struct zxwsf_di12_Modify_s* x, struct zx_str_s* y);
void zxwsf_di12_Modify_PUT_InsertEntry(struct zxwsf_di12_Modify_s* x, int n, struct zxwsf_di12_InsertEntry_s* y);
void zxwsf_di12_Modify_PUT_RemoveEntry(struct zxwsf_di12_Modify_s* x, int n, struct zxwsf_di12_RemoveEntry_s* y);
void zxwsf_di12_Modify_ADD_InsertEntry(struct zxwsf_di12_Modify_s* x, int n, struct zxwsf_di12_InsertEntry_s* z);
void zxwsf_di12_Modify_ADD_RemoveEntry(struct zxwsf_di12_Modify_s* x, int n, struct zxwsf_di12_RemoveEntry_s* z);
void zxwsf_di12_Modify_DEL_InsertEntry(struct zxwsf_di12_Modify_s* x, int n);
void zxwsf_di12_Modify_DEL_RemoveEntry(struct zxwsf_di12_Modify_s* x, int n);
void zxwsf_di12_Modify_REV_InsertEntry(struct zxwsf_di12_Modify_s* x);
void zxwsf_di12_Modify_REV_RemoveEntry(struct zxwsf_di12_Modify_s* x);

/* -------------------------- di12_ModifyResponse -------------------------- */
/* refby( zxwsf_e_Body_s ) */
#ifndef zxwsf_di12_ModifyResponse_EXT
#define zxwsf_di12_ModifyResponse_EXT
#endif

struct zxwsf_di12_ModifyResponse_s* zxwsf_DEC_di12_ModifyResponse(struct zx_ctx* c);
struct zxwsf_di12_ModifyResponse_s* zxwsf_NEW_di12_ModifyResponse(struct zx_ctx* c);
struct zxwsf_di12_ModifyResponse_s* zxwsf_DEEP_CLONE_di12_ModifyResponse(struct zx_ctx* c, struct zxwsf_di12_ModifyResponse_s* x, int dup_strs);
void zxwsf_DUP_STRS_di12_ModifyResponse(struct zx_ctx* c, struct zxwsf_di12_ModifyResponse_s* x);
void zxwsf_FREE_di12_ModifyResponse(struct zx_ctx* c, struct zxwsf_di12_ModifyResponse_s* x, int free_strs);
int zxwsf_WALK_SO_di12_ModifyResponse(struct zx_ctx* c, struct zxwsf_di12_ModifyResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di12_ModifyResponse(struct zx_ctx* c, struct zxwsf_di12_ModifyResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di12_ModifyResponse(struct zxwsf_di12_ModifyResponse_s* x);
char* zxwsf_ENC_SO_di12_ModifyResponse(struct zxwsf_di12_ModifyResponse_s* x, char* p);
char* zxwsf_ENC_WO_di12_ModifyResponse(struct zxwsf_di12_ModifyResponse_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di12_ModifyResponse(struct zx_ctx* c, struct zxwsf_di12_ModifyResponse_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di12_ModifyResponse(struct zx_ctx* c, struct zxwsf_di12_ModifyResponse_s* x);

struct zxwsf_di12_ModifyResponse_s {
  ZX_ELEM_EXT
  zxwsf_di12_ModifyResponse_EXT
  struct zxwsf_di12_Status_s* Status;	/* {1,1} nada */
  struct zxwsf_di12_Extension_s* Extension;	/* {0,1}  */
  struct zx_str_s* id;	/* {0,1} attribute xs:ID */
  struct zx_str_s* newEntryIDs;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zxwsf_di12_ModifyResponse_GET_id(struct zxwsf_di12_ModifyResponse_s* x);
struct zx_str_s* zxwsf_di12_ModifyResponse_GET_newEntryIDs(struct zxwsf_di12_ModifyResponse_s* x);
struct zxwsf_di12_Status_s* zxwsf_di12_ModifyResponse_GET_Status(struct zxwsf_di12_ModifyResponse_s* x, int n);
struct zxwsf_di12_Extension_s* zxwsf_di12_ModifyResponse_GET_Extension(struct zxwsf_di12_ModifyResponse_s* x, int n);
int zxwsf_di12_ModifyResponse_NUM_Status(struct zxwsf_di12_ModifyResponse_s* x);
int zxwsf_di12_ModifyResponse_NUM_Extension(struct zxwsf_di12_ModifyResponse_s* x);
struct zxwsf_di12_Status_s* zxwsf_di12_ModifyResponse_POP_Status(struct zxwsf_di12_ModifyResponse_s* x);
struct zxwsf_di12_Extension_s* zxwsf_di12_ModifyResponse_POP_Extension(struct zxwsf_di12_ModifyResponse_s* x);
void zxwsf_di12_ModifyResponse_PUSH_Status(struct zxwsf_di12_ModifyResponse_s* x, struct zxwsf_di12_Status_s* y);
void zxwsf_di12_ModifyResponse_PUSH_Extension(struct zxwsf_di12_ModifyResponse_s* x, struct zxwsf_di12_Extension_s* y);
void zxwsf_di12_ModifyResponse_PUT_id(struct zxwsf_di12_ModifyResponse_s* x, struct zx_str_s* y);
void zxwsf_di12_ModifyResponse_PUT_newEntryIDs(struct zxwsf_di12_ModifyResponse_s* x, struct zx_str_s* y);
void zxwsf_di12_ModifyResponse_PUT_Status(struct zxwsf_di12_ModifyResponse_s* x, int n, struct zxwsf_di12_Status_s* y);
void zxwsf_di12_ModifyResponse_PUT_Extension(struct zxwsf_di12_ModifyResponse_s* x, int n, struct zxwsf_di12_Extension_s* y);
void zxwsf_di12_ModifyResponse_ADD_Status(struct zxwsf_di12_ModifyResponse_s* x, int n, struct zxwsf_di12_Status_s* z);
void zxwsf_di12_ModifyResponse_ADD_Extension(struct zxwsf_di12_ModifyResponse_s* x, int n, struct zxwsf_di12_Extension_s* z);
void zxwsf_di12_ModifyResponse_DEL_Status(struct zxwsf_di12_ModifyResponse_s* x, int n);
void zxwsf_di12_ModifyResponse_DEL_Extension(struct zxwsf_di12_ModifyResponse_s* x, int n);
void zxwsf_di12_ModifyResponse_REV_Status(struct zxwsf_di12_ModifyResponse_s* x);
void zxwsf_di12_ModifyResponse_REV_Extension(struct zxwsf_di12_ModifyResponse_s* x);

/* -------------------------- di12_Options -------------------------- */
/* refby( zxwsf_di12_RequestedServiceType_s zxwsf_di12_ResourceOffering_s zxwsf_is12_InteractionService_s ) */
#ifndef zxwsf_di12_Options_EXT
#define zxwsf_di12_Options_EXT
#endif

struct zxwsf_di12_Options_s* zxwsf_DEC_di12_Options(struct zx_ctx* c);
struct zxwsf_di12_Options_s* zxwsf_NEW_di12_Options(struct zx_ctx* c);
struct zxwsf_di12_Options_s* zxwsf_DEEP_CLONE_di12_Options(struct zx_ctx* c, struct zxwsf_di12_Options_s* x, int dup_strs);
void zxwsf_DUP_STRS_di12_Options(struct zx_ctx* c, struct zxwsf_di12_Options_s* x);
void zxwsf_FREE_di12_Options(struct zx_ctx* c, struct zxwsf_di12_Options_s* x, int free_strs);
int zxwsf_WALK_SO_di12_Options(struct zx_ctx* c, struct zxwsf_di12_Options_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di12_Options(struct zx_ctx* c, struct zxwsf_di12_Options_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di12_Options(struct zxwsf_di12_Options_s* x);
char* zxwsf_ENC_SO_di12_Options(struct zxwsf_di12_Options_s* x, char* p);
char* zxwsf_ENC_WO_di12_Options(struct zxwsf_di12_Options_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di12_Options(struct zx_ctx* c, struct zxwsf_di12_Options_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di12_Options(struct zx_ctx* c, struct zxwsf_di12_Options_s* x);

struct zxwsf_di12_Options_s {
  ZX_ELEM_EXT
  zxwsf_di12_Options_EXT
  struct zx_elem_s* Option;	/* {0,-1} xs:anyURI */
};

struct zx_elem_s* zxwsf_di12_Options_GET_Option(struct zxwsf_di12_Options_s* x, int n);
int zxwsf_di12_Options_NUM_Option(struct zxwsf_di12_Options_s* x);
struct zx_elem_s* zxwsf_di12_Options_POP_Option(struct zxwsf_di12_Options_s* x);
void zxwsf_di12_Options_PUSH_Option(struct zxwsf_di12_Options_s* x, struct zx_elem_s* y);
void zxwsf_di12_Options_PUT_Option(struct zxwsf_di12_Options_s* x, int n, struct zx_elem_s* y);
void zxwsf_di12_Options_ADD_Option(struct zxwsf_di12_Options_s* x, int n, struct zx_elem_s* z);
void zxwsf_di12_Options_DEL_Option(struct zxwsf_di12_Options_s* x, int n);
void zxwsf_di12_Options_REV_Option(struct zxwsf_di12_Options_s* x);

/* -------------------------- di12_Query -------------------------- */
/* refby( zxwsf_e_Body_s ) */
#ifndef zxwsf_di12_Query_EXT
#define zxwsf_di12_Query_EXT
#endif

struct zxwsf_di12_Query_s* zxwsf_DEC_di12_Query(struct zx_ctx* c);
struct zxwsf_di12_Query_s* zxwsf_NEW_di12_Query(struct zx_ctx* c);
struct zxwsf_di12_Query_s* zxwsf_DEEP_CLONE_di12_Query(struct zx_ctx* c, struct zxwsf_di12_Query_s* x, int dup_strs);
void zxwsf_DUP_STRS_di12_Query(struct zx_ctx* c, struct zxwsf_di12_Query_s* x);
void zxwsf_FREE_di12_Query(struct zx_ctx* c, struct zxwsf_di12_Query_s* x, int free_strs);
int zxwsf_WALK_SO_di12_Query(struct zx_ctx* c, struct zxwsf_di12_Query_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di12_Query(struct zx_ctx* c, struct zxwsf_di12_Query_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di12_Query(struct zxwsf_di12_Query_s* x);
char* zxwsf_ENC_SO_di12_Query(struct zxwsf_di12_Query_s* x, char* p);
char* zxwsf_ENC_WO_di12_Query(struct zxwsf_di12_Query_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di12_Query(struct zx_ctx* c, struct zxwsf_di12_Query_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di12_Query(struct zx_ctx* c, struct zxwsf_di12_Query_s* x);

struct zxwsf_di12_Query_s {
  ZX_ELEM_EXT
  zxwsf_di12_Query_EXT
  struct zxwsf_di12_RequestedServiceType_s* RequestedServiceType;	/* {0,-1}  */
  struct zx_str_s* id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zxwsf_di12_Query_GET_id(struct zxwsf_di12_Query_s* x);
struct zxwsf_di12_RequestedServiceType_s* zxwsf_di12_Query_GET_RequestedServiceType(struct zxwsf_di12_Query_s* x, int n);
int zxwsf_di12_Query_NUM_RequestedServiceType(struct zxwsf_di12_Query_s* x);
struct zxwsf_di12_RequestedServiceType_s* zxwsf_di12_Query_POP_RequestedServiceType(struct zxwsf_di12_Query_s* x);
void zxwsf_di12_Query_PUSH_RequestedServiceType(struct zxwsf_di12_Query_s* x, struct zxwsf_di12_RequestedServiceType_s* y);
void zxwsf_di12_Query_PUT_id(struct zxwsf_di12_Query_s* x, struct zx_str_s* y);
void zxwsf_di12_Query_PUT_RequestedServiceType(struct zxwsf_di12_Query_s* x, int n, struct zxwsf_di12_RequestedServiceType_s* y);
void zxwsf_di12_Query_ADD_RequestedServiceType(struct zxwsf_di12_Query_s* x, int n, struct zxwsf_di12_RequestedServiceType_s* z);
void zxwsf_di12_Query_DEL_RequestedServiceType(struct zxwsf_di12_Query_s* x, int n);
void zxwsf_di12_Query_REV_RequestedServiceType(struct zxwsf_di12_Query_s* x);

/* -------------------------- di12_QueryResponse -------------------------- */
/* refby( zxwsf_e_Body_s ) */
#ifndef zxwsf_di12_QueryResponse_EXT
#define zxwsf_di12_QueryResponse_EXT
#endif

struct zxwsf_di12_QueryResponse_s* zxwsf_DEC_di12_QueryResponse(struct zx_ctx* c);
struct zxwsf_di12_QueryResponse_s* zxwsf_NEW_di12_QueryResponse(struct zx_ctx* c);
struct zxwsf_di12_QueryResponse_s* zxwsf_DEEP_CLONE_di12_QueryResponse(struct zx_ctx* c, struct zxwsf_di12_QueryResponse_s* x, int dup_strs);
void zxwsf_DUP_STRS_di12_QueryResponse(struct zx_ctx* c, struct zxwsf_di12_QueryResponse_s* x);
void zxwsf_FREE_di12_QueryResponse(struct zx_ctx* c, struct zxwsf_di12_QueryResponse_s* x, int free_strs);
int zxwsf_WALK_SO_di12_QueryResponse(struct zx_ctx* c, struct zxwsf_di12_QueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di12_QueryResponse(struct zx_ctx* c, struct zxwsf_di12_QueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di12_QueryResponse(struct zxwsf_di12_QueryResponse_s* x);
char* zxwsf_ENC_SO_di12_QueryResponse(struct zxwsf_di12_QueryResponse_s* x, char* p);
char* zxwsf_ENC_WO_di12_QueryResponse(struct zxwsf_di12_QueryResponse_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di12_QueryResponse(struct zx_ctx* c, struct zxwsf_di12_QueryResponse_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di12_QueryResponse(struct zx_ctx* c, struct zxwsf_di12_QueryResponse_s* x);

struct zxwsf_di12_QueryResponse_s {
  ZX_ELEM_EXT
  zxwsf_di12_QueryResponse_EXT
  struct zxwsf_di12_Status_s* Status;	/* {1,1} nada */
  struct zxwsf_di12_ResourceOffering_s* ResourceOffering;	/* {0,-1} nada */
  struct zxwsf_di12_Credentials_s* Credentials;	/* {0,1}  */
  struct zx_str_s* id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zxwsf_di12_QueryResponse_GET_id(struct zxwsf_di12_QueryResponse_s* x);
struct zxwsf_di12_Status_s* zxwsf_di12_QueryResponse_GET_Status(struct zxwsf_di12_QueryResponse_s* x, int n);
struct zxwsf_di12_ResourceOffering_s* zxwsf_di12_QueryResponse_GET_ResourceOffering(struct zxwsf_di12_QueryResponse_s* x, int n);
struct zxwsf_di12_Credentials_s* zxwsf_di12_QueryResponse_GET_Credentials(struct zxwsf_di12_QueryResponse_s* x, int n);
int zxwsf_di12_QueryResponse_NUM_Status(struct zxwsf_di12_QueryResponse_s* x);
int zxwsf_di12_QueryResponse_NUM_ResourceOffering(struct zxwsf_di12_QueryResponse_s* x);
int zxwsf_di12_QueryResponse_NUM_Credentials(struct zxwsf_di12_QueryResponse_s* x);
struct zxwsf_di12_Status_s* zxwsf_di12_QueryResponse_POP_Status(struct zxwsf_di12_QueryResponse_s* x);
struct zxwsf_di12_ResourceOffering_s* zxwsf_di12_QueryResponse_POP_ResourceOffering(struct zxwsf_di12_QueryResponse_s* x);
struct zxwsf_di12_Credentials_s* zxwsf_di12_QueryResponse_POP_Credentials(struct zxwsf_di12_QueryResponse_s* x);
void zxwsf_di12_QueryResponse_PUSH_Status(struct zxwsf_di12_QueryResponse_s* x, struct zxwsf_di12_Status_s* y);
void zxwsf_di12_QueryResponse_PUSH_ResourceOffering(struct zxwsf_di12_QueryResponse_s* x, struct zxwsf_di12_ResourceOffering_s* y);
void zxwsf_di12_QueryResponse_PUSH_Credentials(struct zxwsf_di12_QueryResponse_s* x, struct zxwsf_di12_Credentials_s* y);
void zxwsf_di12_QueryResponse_PUT_id(struct zxwsf_di12_QueryResponse_s* x, struct zx_str_s* y);
void zxwsf_di12_QueryResponse_PUT_Status(struct zxwsf_di12_QueryResponse_s* x, int n, struct zxwsf_di12_Status_s* y);
void zxwsf_di12_QueryResponse_PUT_ResourceOffering(struct zxwsf_di12_QueryResponse_s* x, int n, struct zxwsf_di12_ResourceOffering_s* y);
void zxwsf_di12_QueryResponse_PUT_Credentials(struct zxwsf_di12_QueryResponse_s* x, int n, struct zxwsf_di12_Credentials_s* y);
void zxwsf_di12_QueryResponse_ADD_Status(struct zxwsf_di12_QueryResponse_s* x, int n, struct zxwsf_di12_Status_s* z);
void zxwsf_di12_QueryResponse_ADD_ResourceOffering(struct zxwsf_di12_QueryResponse_s* x, int n, struct zxwsf_di12_ResourceOffering_s* z);
void zxwsf_di12_QueryResponse_ADD_Credentials(struct zxwsf_di12_QueryResponse_s* x, int n, struct zxwsf_di12_Credentials_s* z);
void zxwsf_di12_QueryResponse_DEL_Status(struct zxwsf_di12_QueryResponse_s* x, int n);
void zxwsf_di12_QueryResponse_DEL_ResourceOffering(struct zxwsf_di12_QueryResponse_s* x, int n);
void zxwsf_di12_QueryResponse_DEL_Credentials(struct zxwsf_di12_QueryResponse_s* x, int n);
void zxwsf_di12_QueryResponse_REV_Status(struct zxwsf_di12_QueryResponse_s* x);
void zxwsf_di12_QueryResponse_REV_ResourceOffering(struct zxwsf_di12_QueryResponse_s* x);
void zxwsf_di12_QueryResponse_REV_Credentials(struct zxwsf_di12_QueryResponse_s* x);

/* -------------------------- di12_RemoveEntry -------------------------- */
/* refby( zxwsf_di12_Modify_s ) */
#ifndef zxwsf_di12_RemoveEntry_EXT
#define zxwsf_di12_RemoveEntry_EXT
#endif

struct zxwsf_di12_RemoveEntry_s* zxwsf_DEC_di12_RemoveEntry(struct zx_ctx* c);
struct zxwsf_di12_RemoveEntry_s* zxwsf_NEW_di12_RemoveEntry(struct zx_ctx* c);
struct zxwsf_di12_RemoveEntry_s* zxwsf_DEEP_CLONE_di12_RemoveEntry(struct zx_ctx* c, struct zxwsf_di12_RemoveEntry_s* x, int dup_strs);
void zxwsf_DUP_STRS_di12_RemoveEntry(struct zx_ctx* c, struct zxwsf_di12_RemoveEntry_s* x);
void zxwsf_FREE_di12_RemoveEntry(struct zx_ctx* c, struct zxwsf_di12_RemoveEntry_s* x, int free_strs);
int zxwsf_WALK_SO_di12_RemoveEntry(struct zx_ctx* c, struct zxwsf_di12_RemoveEntry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di12_RemoveEntry(struct zx_ctx* c, struct zxwsf_di12_RemoveEntry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di12_RemoveEntry(struct zxwsf_di12_RemoveEntry_s* x);
char* zxwsf_ENC_SO_di12_RemoveEntry(struct zxwsf_di12_RemoveEntry_s* x, char* p);
char* zxwsf_ENC_WO_di12_RemoveEntry(struct zxwsf_di12_RemoveEntry_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di12_RemoveEntry(struct zx_ctx* c, struct zxwsf_di12_RemoveEntry_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di12_RemoveEntry(struct zx_ctx* c, struct zxwsf_di12_RemoveEntry_s* x);

struct zxwsf_di12_RemoveEntry_s {
  ZX_ELEM_EXT
  zxwsf_di12_RemoveEntry_EXT
  struct zx_str_s* entryID;	/* {1,1} attribute xs:string */
};

struct zx_str_s* zxwsf_di12_RemoveEntry_GET_entryID(struct zxwsf_di12_RemoveEntry_s* x);
void zxwsf_di12_RemoveEntry_PUT_entryID(struct zxwsf_di12_RemoveEntry_s* x, struct zx_str_s* y);

/* -------------------------- di12_RequestedServiceType -------------------------- */
/* refby( zxwsf_di12_Query_s ) */
#ifndef zxwsf_di12_RequestedServiceType_EXT
#define zxwsf_di12_RequestedServiceType_EXT
#endif

struct zxwsf_di12_RequestedServiceType_s* zxwsf_DEC_di12_RequestedServiceType(struct zx_ctx* c);
struct zxwsf_di12_RequestedServiceType_s* zxwsf_NEW_di12_RequestedServiceType(struct zx_ctx* c);
struct zxwsf_di12_RequestedServiceType_s* zxwsf_DEEP_CLONE_di12_RequestedServiceType(struct zx_ctx* c, struct zxwsf_di12_RequestedServiceType_s* x, int dup_strs);
void zxwsf_DUP_STRS_di12_RequestedServiceType(struct zx_ctx* c, struct zxwsf_di12_RequestedServiceType_s* x);
void zxwsf_FREE_di12_RequestedServiceType(struct zx_ctx* c, struct zxwsf_di12_RequestedServiceType_s* x, int free_strs);
int zxwsf_WALK_SO_di12_RequestedServiceType(struct zx_ctx* c, struct zxwsf_di12_RequestedServiceType_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di12_RequestedServiceType(struct zx_ctx* c, struct zxwsf_di12_RequestedServiceType_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di12_RequestedServiceType(struct zxwsf_di12_RequestedServiceType_s* x);
char* zxwsf_ENC_SO_di12_RequestedServiceType(struct zxwsf_di12_RequestedServiceType_s* x, char* p);
char* zxwsf_ENC_WO_di12_RequestedServiceType(struct zxwsf_di12_RequestedServiceType_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di12_RequestedServiceType(struct zx_ctx* c, struct zxwsf_di12_RequestedServiceType_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di12_RequestedServiceType(struct zx_ctx* c, struct zxwsf_di12_RequestedServiceType_s* x);

struct zxwsf_di12_RequestedServiceType_s {
  ZX_ELEM_EXT
  zxwsf_di12_RequestedServiceType_EXT
  struct zx_elem_s* ServiceType;	/* {1,1} xs:anyURI */
  struct zxwsf_di12_Options_s* Options;	/* {0,1}  */
};

struct zx_elem_s* zxwsf_di12_RequestedServiceType_GET_ServiceType(struct zxwsf_di12_RequestedServiceType_s* x, int n);
struct zxwsf_di12_Options_s* zxwsf_di12_RequestedServiceType_GET_Options(struct zxwsf_di12_RequestedServiceType_s* x, int n);
int zxwsf_di12_RequestedServiceType_NUM_ServiceType(struct zxwsf_di12_RequestedServiceType_s* x);
int zxwsf_di12_RequestedServiceType_NUM_Options(struct zxwsf_di12_RequestedServiceType_s* x);
struct zx_elem_s* zxwsf_di12_RequestedServiceType_POP_ServiceType(struct zxwsf_di12_RequestedServiceType_s* x);
struct zxwsf_di12_Options_s* zxwsf_di12_RequestedServiceType_POP_Options(struct zxwsf_di12_RequestedServiceType_s* x);
void zxwsf_di12_RequestedServiceType_PUSH_ServiceType(struct zxwsf_di12_RequestedServiceType_s* x, struct zx_elem_s* y);
void zxwsf_di12_RequestedServiceType_PUSH_Options(struct zxwsf_di12_RequestedServiceType_s* x, struct zxwsf_di12_Options_s* y);
void zxwsf_di12_RequestedServiceType_PUT_ServiceType(struct zxwsf_di12_RequestedServiceType_s* x, int n, struct zx_elem_s* y);
void zxwsf_di12_RequestedServiceType_PUT_Options(struct zxwsf_di12_RequestedServiceType_s* x, int n, struct zxwsf_di12_Options_s* y);
void zxwsf_di12_RequestedServiceType_ADD_ServiceType(struct zxwsf_di12_RequestedServiceType_s* x, int n, struct zx_elem_s* z);
void zxwsf_di12_RequestedServiceType_ADD_Options(struct zxwsf_di12_RequestedServiceType_s* x, int n, struct zxwsf_di12_Options_s* z);
void zxwsf_di12_RequestedServiceType_DEL_ServiceType(struct zxwsf_di12_RequestedServiceType_s* x, int n);
void zxwsf_di12_RequestedServiceType_DEL_Options(struct zxwsf_di12_RequestedServiceType_s* x, int n);
void zxwsf_di12_RequestedServiceType_REV_ServiceType(struct zxwsf_di12_RequestedServiceType_s* x);
void zxwsf_di12_RequestedServiceType_REV_Options(struct zxwsf_di12_RequestedServiceType_s* x);

/* -------------------------- di12_ResourceID -------------------------- */
/* refby( ) */
#ifndef zxwsf_di12_ResourceID_EXT
#define zxwsf_di12_ResourceID_EXT
#endif

struct zxwsf_di12_ResourceID_s* zxwsf_DEC_di12_ResourceID(struct zx_ctx* c);
struct zxwsf_di12_ResourceID_s* zxwsf_NEW_di12_ResourceID(struct zx_ctx* c);
struct zxwsf_di12_ResourceID_s* zxwsf_DEEP_CLONE_di12_ResourceID(struct zx_ctx* c, struct zxwsf_di12_ResourceID_s* x, int dup_strs);
void zxwsf_DUP_STRS_di12_ResourceID(struct zx_ctx* c, struct zxwsf_di12_ResourceID_s* x);
void zxwsf_FREE_di12_ResourceID(struct zx_ctx* c, struct zxwsf_di12_ResourceID_s* x, int free_strs);
int zxwsf_WALK_SO_di12_ResourceID(struct zx_ctx* c, struct zxwsf_di12_ResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di12_ResourceID(struct zx_ctx* c, struct zxwsf_di12_ResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di12_ResourceID(struct zxwsf_di12_ResourceID_s* x);
char* zxwsf_ENC_SO_di12_ResourceID(struct zxwsf_di12_ResourceID_s* x, char* p);
char* zxwsf_ENC_WO_di12_ResourceID(struct zxwsf_di12_ResourceID_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di12_ResourceID(struct zx_ctx* c, struct zxwsf_di12_ResourceID_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di12_ResourceID(struct zx_ctx* c, struct zxwsf_di12_ResourceID_s* x);

struct zxwsf_di12_ResourceID_s {
  ZX_ELEM_EXT
  zxwsf_di12_ResourceID_EXT
  struct zx_str_s* id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zxwsf_di12_ResourceID_GET_id(struct zxwsf_di12_ResourceID_s* x);
void zxwsf_di12_ResourceID_PUT_id(struct zxwsf_di12_ResourceID_s* x, struct zx_str_s* y);

/* -------------------------- di12_ResourceOffering -------------------------- */
/* refby( zxwsf_di12_InsertEntry_s zxwsf_di12_QueryResponse_s ) */
#ifndef zxwsf_di12_ResourceOffering_EXT
#define zxwsf_di12_ResourceOffering_EXT
#endif

struct zxwsf_di12_ResourceOffering_s* zxwsf_DEC_di12_ResourceOffering(struct zx_ctx* c);
struct zxwsf_di12_ResourceOffering_s* zxwsf_NEW_di12_ResourceOffering(struct zx_ctx* c);
struct zxwsf_di12_ResourceOffering_s* zxwsf_DEEP_CLONE_di12_ResourceOffering(struct zx_ctx* c, struct zxwsf_di12_ResourceOffering_s* x, int dup_strs);
void zxwsf_DUP_STRS_di12_ResourceOffering(struct zx_ctx* c, struct zxwsf_di12_ResourceOffering_s* x);
void zxwsf_FREE_di12_ResourceOffering(struct zx_ctx* c, struct zxwsf_di12_ResourceOffering_s* x, int free_strs);
int zxwsf_WALK_SO_di12_ResourceOffering(struct zx_ctx* c, struct zxwsf_di12_ResourceOffering_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di12_ResourceOffering(struct zx_ctx* c, struct zxwsf_di12_ResourceOffering_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di12_ResourceOffering(struct zxwsf_di12_ResourceOffering_s* x);
char* zxwsf_ENC_SO_di12_ResourceOffering(struct zxwsf_di12_ResourceOffering_s* x, char* p);
char* zxwsf_ENC_WO_di12_ResourceOffering(struct zxwsf_di12_ResourceOffering_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di12_ResourceOffering(struct zx_ctx* c, struct zxwsf_di12_ResourceOffering_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di12_ResourceOffering(struct zx_ctx* c, struct zxwsf_di12_ResourceOffering_s* x);

struct zxwsf_di12_ResourceOffering_s {
  ZX_ELEM_EXT
  zxwsf_di12_ResourceOffering_EXT
  struct zxwsf_di12_ServiceInstance_s* ServiceInstance;	/* {1,1}  */
  struct zxwsf_di12_Options_s* Options;	/* {0,1}  */
  struct zx_elem_s* Abstract;	/* {0,1} xs:string */
  struct zx_str_s* entryID;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zxwsf_di12_ResourceOffering_GET_entryID(struct zxwsf_di12_ResourceOffering_s* x);
struct zxwsf_di12_ServiceInstance_s* zxwsf_di12_ResourceOffering_GET_ServiceInstance(struct zxwsf_di12_ResourceOffering_s* x, int n);
struct zxwsf_di12_Options_s* zxwsf_di12_ResourceOffering_GET_Options(struct zxwsf_di12_ResourceOffering_s* x, int n);
struct zx_elem_s* zxwsf_di12_ResourceOffering_GET_Abstract(struct zxwsf_di12_ResourceOffering_s* x, int n);
int zxwsf_di12_ResourceOffering_NUM_ServiceInstance(struct zxwsf_di12_ResourceOffering_s* x);
int zxwsf_di12_ResourceOffering_NUM_Options(struct zxwsf_di12_ResourceOffering_s* x);
int zxwsf_di12_ResourceOffering_NUM_Abstract(struct zxwsf_di12_ResourceOffering_s* x);
struct zxwsf_di12_ServiceInstance_s* zxwsf_di12_ResourceOffering_POP_ServiceInstance(struct zxwsf_di12_ResourceOffering_s* x);
struct zxwsf_di12_Options_s* zxwsf_di12_ResourceOffering_POP_Options(struct zxwsf_di12_ResourceOffering_s* x);
struct zx_elem_s* zxwsf_di12_ResourceOffering_POP_Abstract(struct zxwsf_di12_ResourceOffering_s* x);
void zxwsf_di12_ResourceOffering_PUSH_ServiceInstance(struct zxwsf_di12_ResourceOffering_s* x, struct zxwsf_di12_ServiceInstance_s* y);
void zxwsf_di12_ResourceOffering_PUSH_Options(struct zxwsf_di12_ResourceOffering_s* x, struct zxwsf_di12_Options_s* y);
void zxwsf_di12_ResourceOffering_PUSH_Abstract(struct zxwsf_di12_ResourceOffering_s* x, struct zx_elem_s* y);
void zxwsf_di12_ResourceOffering_PUT_entryID(struct zxwsf_di12_ResourceOffering_s* x, struct zx_str_s* y);
void zxwsf_di12_ResourceOffering_PUT_ServiceInstance(struct zxwsf_di12_ResourceOffering_s* x, int n, struct zxwsf_di12_ServiceInstance_s* y);
void zxwsf_di12_ResourceOffering_PUT_Options(struct zxwsf_di12_ResourceOffering_s* x, int n, struct zxwsf_di12_Options_s* y);
void zxwsf_di12_ResourceOffering_PUT_Abstract(struct zxwsf_di12_ResourceOffering_s* x, int n, struct zx_elem_s* y);
void zxwsf_di12_ResourceOffering_ADD_ServiceInstance(struct zxwsf_di12_ResourceOffering_s* x, int n, struct zxwsf_di12_ServiceInstance_s* z);
void zxwsf_di12_ResourceOffering_ADD_Options(struct zxwsf_di12_ResourceOffering_s* x, int n, struct zxwsf_di12_Options_s* z);
void zxwsf_di12_ResourceOffering_ADD_Abstract(struct zxwsf_di12_ResourceOffering_s* x, int n, struct zx_elem_s* z);
void zxwsf_di12_ResourceOffering_DEL_ServiceInstance(struct zxwsf_di12_ResourceOffering_s* x, int n);
void zxwsf_di12_ResourceOffering_DEL_Options(struct zxwsf_di12_ResourceOffering_s* x, int n);
void zxwsf_di12_ResourceOffering_DEL_Abstract(struct zxwsf_di12_ResourceOffering_s* x, int n);
void zxwsf_di12_ResourceOffering_REV_ServiceInstance(struct zxwsf_di12_ResourceOffering_s* x);
void zxwsf_di12_ResourceOffering_REV_Options(struct zxwsf_di12_ResourceOffering_s* x);
void zxwsf_di12_ResourceOffering_REV_Abstract(struct zxwsf_di12_ResourceOffering_s* x);

/* -------------------------- di12_ServiceInstance -------------------------- */
/* refby( zxwsf_di12_ResourceOffering_s zxwsf_is12_InteractionService_s ) */
#ifndef zxwsf_di12_ServiceInstance_EXT
#define zxwsf_di12_ServiceInstance_EXT
#endif

struct zxwsf_di12_ServiceInstance_s* zxwsf_DEC_di12_ServiceInstance(struct zx_ctx* c);
struct zxwsf_di12_ServiceInstance_s* zxwsf_NEW_di12_ServiceInstance(struct zx_ctx* c);
struct zxwsf_di12_ServiceInstance_s* zxwsf_DEEP_CLONE_di12_ServiceInstance(struct zx_ctx* c, struct zxwsf_di12_ServiceInstance_s* x, int dup_strs);
void zxwsf_DUP_STRS_di12_ServiceInstance(struct zx_ctx* c, struct zxwsf_di12_ServiceInstance_s* x);
void zxwsf_FREE_di12_ServiceInstance(struct zx_ctx* c, struct zxwsf_di12_ServiceInstance_s* x, int free_strs);
int zxwsf_WALK_SO_di12_ServiceInstance(struct zx_ctx* c, struct zxwsf_di12_ServiceInstance_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di12_ServiceInstance(struct zx_ctx* c, struct zxwsf_di12_ServiceInstance_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di12_ServiceInstance(struct zxwsf_di12_ServiceInstance_s* x);
char* zxwsf_ENC_SO_di12_ServiceInstance(struct zxwsf_di12_ServiceInstance_s* x, char* p);
char* zxwsf_ENC_WO_di12_ServiceInstance(struct zxwsf_di12_ServiceInstance_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di12_ServiceInstance(struct zx_ctx* c, struct zxwsf_di12_ServiceInstance_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di12_ServiceInstance(struct zx_ctx* c, struct zxwsf_di12_ServiceInstance_s* x);

struct zxwsf_di12_ServiceInstance_s {
  ZX_ELEM_EXT
  zxwsf_di12_ServiceInstance_EXT
  struct zx_elem_s* ServiceType;	/* {1,1} xs:anyURI */
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zxwsf_di12_Description_s* Description;	/* {1,-1}  */
};

struct zx_elem_s* zxwsf_di12_ServiceInstance_GET_ServiceType(struct zxwsf_di12_ServiceInstance_s* x, int n);
struct zx_elem_s* zxwsf_di12_ServiceInstance_GET_ProviderID(struct zxwsf_di12_ServiceInstance_s* x, int n);
struct zxwsf_di12_Description_s* zxwsf_di12_ServiceInstance_GET_Description(struct zxwsf_di12_ServiceInstance_s* x, int n);
int zxwsf_di12_ServiceInstance_NUM_ServiceType(struct zxwsf_di12_ServiceInstance_s* x);
int zxwsf_di12_ServiceInstance_NUM_ProviderID(struct zxwsf_di12_ServiceInstance_s* x);
int zxwsf_di12_ServiceInstance_NUM_Description(struct zxwsf_di12_ServiceInstance_s* x);
struct zx_elem_s* zxwsf_di12_ServiceInstance_POP_ServiceType(struct zxwsf_di12_ServiceInstance_s* x);
struct zx_elem_s* zxwsf_di12_ServiceInstance_POP_ProviderID(struct zxwsf_di12_ServiceInstance_s* x);
struct zxwsf_di12_Description_s* zxwsf_di12_ServiceInstance_POP_Description(struct zxwsf_di12_ServiceInstance_s* x);
void zxwsf_di12_ServiceInstance_PUSH_ServiceType(struct zxwsf_di12_ServiceInstance_s* x, struct zx_elem_s* y);
void zxwsf_di12_ServiceInstance_PUSH_ProviderID(struct zxwsf_di12_ServiceInstance_s* x, struct zx_elem_s* y);
void zxwsf_di12_ServiceInstance_PUSH_Description(struct zxwsf_di12_ServiceInstance_s* x, struct zxwsf_di12_Description_s* y);
void zxwsf_di12_ServiceInstance_PUT_ServiceType(struct zxwsf_di12_ServiceInstance_s* x, int n, struct zx_elem_s* y);
void zxwsf_di12_ServiceInstance_PUT_ProviderID(struct zxwsf_di12_ServiceInstance_s* x, int n, struct zx_elem_s* y);
void zxwsf_di12_ServiceInstance_PUT_Description(struct zxwsf_di12_ServiceInstance_s* x, int n, struct zxwsf_di12_Description_s* y);
void zxwsf_di12_ServiceInstance_ADD_ServiceType(struct zxwsf_di12_ServiceInstance_s* x, int n, struct zx_elem_s* z);
void zxwsf_di12_ServiceInstance_ADD_ProviderID(struct zxwsf_di12_ServiceInstance_s* x, int n, struct zx_elem_s* z);
void zxwsf_di12_ServiceInstance_ADD_Description(struct zxwsf_di12_ServiceInstance_s* x, int n, struct zxwsf_di12_Description_s* z);
void zxwsf_di12_ServiceInstance_DEL_ServiceType(struct zxwsf_di12_ServiceInstance_s* x, int n);
void zxwsf_di12_ServiceInstance_DEL_ProviderID(struct zxwsf_di12_ServiceInstance_s* x, int n);
void zxwsf_di12_ServiceInstance_DEL_Description(struct zxwsf_di12_ServiceInstance_s* x, int n);
void zxwsf_di12_ServiceInstance_REV_ServiceType(struct zxwsf_di12_ServiceInstance_s* x);
void zxwsf_di12_ServiceInstance_REV_ProviderID(struct zxwsf_di12_ServiceInstance_s* x);
void zxwsf_di12_ServiceInstance_REV_Description(struct zxwsf_di12_ServiceInstance_s* x);

/* -------------------------- di12_Status -------------------------- */
/* refby( zxwsf_di12_QueryResponse_s zxwsf_di12_ModifyResponse_s zxwsf_di12_Status_s ) */
#ifndef zxwsf_di12_Status_EXT
#define zxwsf_di12_Status_EXT
#endif

struct zxwsf_di12_Status_s* zxwsf_DEC_di12_Status(struct zx_ctx* c);
struct zxwsf_di12_Status_s* zxwsf_NEW_di12_Status(struct zx_ctx* c);
struct zxwsf_di12_Status_s* zxwsf_DEEP_CLONE_di12_Status(struct zx_ctx* c, struct zxwsf_di12_Status_s* x, int dup_strs);
void zxwsf_DUP_STRS_di12_Status(struct zx_ctx* c, struct zxwsf_di12_Status_s* x);
void zxwsf_FREE_di12_Status(struct zx_ctx* c, struct zxwsf_di12_Status_s* x, int free_strs);
int zxwsf_WALK_SO_di12_Status(struct zx_ctx* c, struct zxwsf_di12_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di12_Status(struct zx_ctx* c, struct zxwsf_di12_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di12_Status(struct zxwsf_di12_Status_s* x);
char* zxwsf_ENC_SO_di12_Status(struct zxwsf_di12_Status_s* x, char* p);
char* zxwsf_ENC_WO_di12_Status(struct zxwsf_di12_Status_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di12_Status(struct zx_ctx* c, struct zxwsf_di12_Status_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di12_Status(struct zx_ctx* c, struct zxwsf_di12_Status_s* x);

struct zxwsf_di12_Status_s {
  ZX_ELEM_EXT
  zxwsf_di12_Status_EXT
  struct zxwsf_di12_Status_s* Status;	/* {0,-1} nada */
  struct zx_str_s* code;	/* {1,1} attribute xs:QName */
  struct zx_str_s* ref;	/* {0,1} attribute xs:string */
  struct zx_str_s* comment;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zxwsf_di12_Status_GET_code(struct zxwsf_di12_Status_s* x);
struct zx_str_s* zxwsf_di12_Status_GET_ref(struct zxwsf_di12_Status_s* x);
struct zx_str_s* zxwsf_di12_Status_GET_comment(struct zxwsf_di12_Status_s* x);
struct zxwsf_di12_Status_s* zxwsf_di12_Status_GET_Status(struct zxwsf_di12_Status_s* x, int n);
int zxwsf_di12_Status_NUM_Status(struct zxwsf_di12_Status_s* x);
struct zxwsf_di12_Status_s* zxwsf_di12_Status_POP_Status(struct zxwsf_di12_Status_s* x);
void zxwsf_di12_Status_PUSH_Status(struct zxwsf_di12_Status_s* x, struct zxwsf_di12_Status_s* y);
void zxwsf_di12_Status_PUT_code(struct zxwsf_di12_Status_s* x, struct zx_str_s* y);
void zxwsf_di12_Status_PUT_ref(struct zxwsf_di12_Status_s* x, struct zx_str_s* y);
void zxwsf_di12_Status_PUT_comment(struct zxwsf_di12_Status_s* x, struct zx_str_s* y);
void zxwsf_di12_Status_PUT_Status(struct zxwsf_di12_Status_s* x, int n, struct zxwsf_di12_Status_s* y);
void zxwsf_di12_Status_ADD_Status(struct zxwsf_di12_Status_s* x, int n, struct zxwsf_di12_Status_s* z);
void zxwsf_di12_Status_DEL_Status(struct zxwsf_di12_Status_s* x, int n);
void zxwsf_di12_Status_REV_Status(struct zxwsf_di12_Status_s* x);

/* -------------------------- di_EndpointContext -------------------------- */
/* refby( zxwsf_di_ServiceContext_s ) */
#ifndef zxwsf_di_EndpointContext_EXT
#define zxwsf_di_EndpointContext_EXT
#endif

struct zxwsf_di_EndpointContext_s* zxwsf_DEC_di_EndpointContext(struct zx_ctx* c);
struct zxwsf_di_EndpointContext_s* zxwsf_NEW_di_EndpointContext(struct zx_ctx* c);
struct zxwsf_di_EndpointContext_s* zxwsf_DEEP_CLONE_di_EndpointContext(struct zx_ctx* c, struct zxwsf_di_EndpointContext_s* x, int dup_strs);
void zxwsf_DUP_STRS_di_EndpointContext(struct zx_ctx* c, struct zxwsf_di_EndpointContext_s* x);
void zxwsf_FREE_di_EndpointContext(struct zx_ctx* c, struct zxwsf_di_EndpointContext_s* x, int free_strs);
int zxwsf_WALK_SO_di_EndpointContext(struct zx_ctx* c, struct zxwsf_di_EndpointContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di_EndpointContext(struct zx_ctx* c, struct zxwsf_di_EndpointContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di_EndpointContext(struct zxwsf_di_EndpointContext_s* x);
char* zxwsf_ENC_SO_di_EndpointContext(struct zxwsf_di_EndpointContext_s* x, char* p);
char* zxwsf_ENC_WO_di_EndpointContext(struct zxwsf_di_EndpointContext_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di_EndpointContext(struct zx_ctx* c, struct zxwsf_di_EndpointContext_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di_EndpointContext(struct zx_ctx* c, struct zxwsf_di_EndpointContext_s* x);

struct zxwsf_di_EndpointContext_s {
  ZX_ELEM_EXT
  zxwsf_di_EndpointContext_EXT
  struct zx_elem_s* Address;	/* {1,-1} xs:anyURI */
  struct zxwsf_sbf_Framework_s* Framework;	/* {1,-1} nada */
  struct zx_elem_s* SecurityMechID;	/* {1,-1} xs:anyURI */
  struct zx_elem_s* Action;	/* {0,-1} xs:anyURI */
};

struct zx_elem_s* zxwsf_di_EndpointContext_GET_Address(struct zxwsf_di_EndpointContext_s* x, int n);
struct zxwsf_sbf_Framework_s* zxwsf_di_EndpointContext_GET_Framework(struct zxwsf_di_EndpointContext_s* x, int n);
struct zx_elem_s* zxwsf_di_EndpointContext_GET_SecurityMechID(struct zxwsf_di_EndpointContext_s* x, int n);
struct zx_elem_s* zxwsf_di_EndpointContext_GET_Action(struct zxwsf_di_EndpointContext_s* x, int n);
int zxwsf_di_EndpointContext_NUM_Address(struct zxwsf_di_EndpointContext_s* x);
int zxwsf_di_EndpointContext_NUM_Framework(struct zxwsf_di_EndpointContext_s* x);
int zxwsf_di_EndpointContext_NUM_SecurityMechID(struct zxwsf_di_EndpointContext_s* x);
int zxwsf_di_EndpointContext_NUM_Action(struct zxwsf_di_EndpointContext_s* x);
struct zx_elem_s* zxwsf_di_EndpointContext_POP_Address(struct zxwsf_di_EndpointContext_s* x);
struct zxwsf_sbf_Framework_s* zxwsf_di_EndpointContext_POP_Framework(struct zxwsf_di_EndpointContext_s* x);
struct zx_elem_s* zxwsf_di_EndpointContext_POP_SecurityMechID(struct zxwsf_di_EndpointContext_s* x);
struct zx_elem_s* zxwsf_di_EndpointContext_POP_Action(struct zxwsf_di_EndpointContext_s* x);
void zxwsf_di_EndpointContext_PUSH_Address(struct zxwsf_di_EndpointContext_s* x, struct zx_elem_s* y);
void zxwsf_di_EndpointContext_PUSH_Framework(struct zxwsf_di_EndpointContext_s* x, struct zxwsf_sbf_Framework_s* y);
void zxwsf_di_EndpointContext_PUSH_SecurityMechID(struct zxwsf_di_EndpointContext_s* x, struct zx_elem_s* y);
void zxwsf_di_EndpointContext_PUSH_Action(struct zxwsf_di_EndpointContext_s* x, struct zx_elem_s* y);
void zxwsf_di_EndpointContext_PUT_Address(struct zxwsf_di_EndpointContext_s* x, int n, struct zx_elem_s* y);
void zxwsf_di_EndpointContext_PUT_Framework(struct zxwsf_di_EndpointContext_s* x, int n, struct zxwsf_sbf_Framework_s* y);
void zxwsf_di_EndpointContext_PUT_SecurityMechID(struct zxwsf_di_EndpointContext_s* x, int n, struct zx_elem_s* y);
void zxwsf_di_EndpointContext_PUT_Action(struct zxwsf_di_EndpointContext_s* x, int n, struct zx_elem_s* y);
void zxwsf_di_EndpointContext_ADD_Address(struct zxwsf_di_EndpointContext_s* x, int n, struct zx_elem_s* z);
void zxwsf_di_EndpointContext_ADD_Framework(struct zxwsf_di_EndpointContext_s* x, int n, struct zxwsf_sbf_Framework_s* z);
void zxwsf_di_EndpointContext_ADD_SecurityMechID(struct zxwsf_di_EndpointContext_s* x, int n, struct zx_elem_s* z);
void zxwsf_di_EndpointContext_ADD_Action(struct zxwsf_di_EndpointContext_s* x, int n, struct zx_elem_s* z);
void zxwsf_di_EndpointContext_DEL_Address(struct zxwsf_di_EndpointContext_s* x, int n);
void zxwsf_di_EndpointContext_DEL_Framework(struct zxwsf_di_EndpointContext_s* x, int n);
void zxwsf_di_EndpointContext_DEL_SecurityMechID(struct zxwsf_di_EndpointContext_s* x, int n);
void zxwsf_di_EndpointContext_DEL_Action(struct zxwsf_di_EndpointContext_s* x, int n);
void zxwsf_di_EndpointContext_REV_Address(struct zxwsf_di_EndpointContext_s* x);
void zxwsf_di_EndpointContext_REV_Framework(struct zxwsf_di_EndpointContext_s* x);
void zxwsf_di_EndpointContext_REV_SecurityMechID(struct zxwsf_di_EndpointContext_s* x);
void zxwsf_di_EndpointContext_REV_Action(struct zxwsf_di_EndpointContext_s* x);

/* -------------------------- di_Framework -------------------------- */
/* refby( zxwsf_di_RequestedService_s ) */
#ifndef zxwsf_di_Framework_EXT
#define zxwsf_di_Framework_EXT
#endif

struct zxwsf_di_Framework_s* zxwsf_DEC_di_Framework(struct zx_ctx* c);
struct zxwsf_di_Framework_s* zxwsf_NEW_di_Framework(struct zx_ctx* c);
struct zxwsf_di_Framework_s* zxwsf_DEEP_CLONE_di_Framework(struct zx_ctx* c, struct zxwsf_di_Framework_s* x, int dup_strs);
void zxwsf_DUP_STRS_di_Framework(struct zx_ctx* c, struct zxwsf_di_Framework_s* x);
void zxwsf_FREE_di_Framework(struct zx_ctx* c, struct zxwsf_di_Framework_s* x, int free_strs);
int zxwsf_WALK_SO_di_Framework(struct zx_ctx* c, struct zxwsf_di_Framework_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di_Framework(struct zx_ctx* c, struct zxwsf_di_Framework_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di_Framework(struct zxwsf_di_Framework_s* x);
char* zxwsf_ENC_SO_di_Framework(struct zxwsf_di_Framework_s* x, char* p);
char* zxwsf_ENC_WO_di_Framework(struct zxwsf_di_Framework_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di_Framework(struct zx_ctx* c, struct zxwsf_di_Framework_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di_Framework(struct zx_ctx* c, struct zxwsf_di_Framework_s* x);

struct zxwsf_di_Framework_s {
  ZX_ELEM_EXT
  zxwsf_di_Framework_EXT
  struct zx_str_s* version;	/* {1,1} attribute xs:string */
};

struct zx_str_s* zxwsf_di_Framework_GET_version(struct zxwsf_di_Framework_s* x);
void zxwsf_di_Framework_PUT_version(struct zxwsf_di_Framework_s* x, struct zx_str_s* y);

/* -------------------------- di_Keys -------------------------- */
/* refby( zxwsf_di_SvcMDRegisterResponse_s ) */
#ifndef zxwsf_di_Keys_EXT
#define zxwsf_di_Keys_EXT
#endif

struct zxwsf_di_Keys_s* zxwsf_DEC_di_Keys(struct zx_ctx* c);
struct zxwsf_di_Keys_s* zxwsf_NEW_di_Keys(struct zx_ctx* c);
struct zxwsf_di_Keys_s* zxwsf_DEEP_CLONE_di_Keys(struct zx_ctx* c, struct zxwsf_di_Keys_s* x, int dup_strs);
void zxwsf_DUP_STRS_di_Keys(struct zx_ctx* c, struct zxwsf_di_Keys_s* x);
void zxwsf_FREE_di_Keys(struct zx_ctx* c, struct zxwsf_di_Keys_s* x, int free_strs);
int zxwsf_WALK_SO_di_Keys(struct zx_ctx* c, struct zxwsf_di_Keys_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di_Keys(struct zx_ctx* c, struct zxwsf_di_Keys_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di_Keys(struct zxwsf_di_Keys_s* x);
char* zxwsf_ENC_SO_di_Keys(struct zxwsf_di_Keys_s* x, char* p);
char* zxwsf_ENC_WO_di_Keys(struct zxwsf_di_Keys_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di_Keys(struct zx_ctx* c, struct zxwsf_di_Keys_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di_Keys(struct zx_ctx* c, struct zxwsf_di_Keys_s* x);

struct zxwsf_di_Keys_s {
  ZX_ELEM_EXT
  zxwsf_di_Keys_EXT
  struct zx_elem_s* KeyDescriptor;	/* {1,-1}  */
};

struct zx_elem_s* zxwsf_di_Keys_GET_KeyDescriptor(struct zxwsf_di_Keys_s* x, int n);
int zxwsf_di_Keys_NUM_KeyDescriptor(struct zxwsf_di_Keys_s* x);
struct zx_elem_s* zxwsf_di_Keys_POP_KeyDescriptor(struct zxwsf_di_Keys_s* x);
void zxwsf_di_Keys_PUSH_KeyDescriptor(struct zxwsf_di_Keys_s* x, struct zx_elem_s* y);
void zxwsf_di_Keys_PUT_KeyDescriptor(struct zxwsf_di_Keys_s* x, int n, struct zx_elem_s* y);
void zxwsf_di_Keys_ADD_KeyDescriptor(struct zxwsf_di_Keys_s* x, int n, struct zx_elem_s* z);
void zxwsf_di_Keys_DEL_KeyDescriptor(struct zxwsf_di_Keys_s* x, int n);
void zxwsf_di_Keys_REV_KeyDescriptor(struct zxwsf_di_Keys_s* x);

/* -------------------------- di_Options -------------------------- */
/* refby( zxwsf_di_RequestedService_s zxwsf_di_ServiceContext_s ) */
#ifndef zxwsf_di_Options_EXT
#define zxwsf_di_Options_EXT
#endif

struct zxwsf_di_Options_s* zxwsf_DEC_di_Options(struct zx_ctx* c);
struct zxwsf_di_Options_s* zxwsf_NEW_di_Options(struct zx_ctx* c);
struct zxwsf_di_Options_s* zxwsf_DEEP_CLONE_di_Options(struct zx_ctx* c, struct zxwsf_di_Options_s* x, int dup_strs);
void zxwsf_DUP_STRS_di_Options(struct zx_ctx* c, struct zxwsf_di_Options_s* x);
void zxwsf_FREE_di_Options(struct zx_ctx* c, struct zxwsf_di_Options_s* x, int free_strs);
int zxwsf_WALK_SO_di_Options(struct zx_ctx* c, struct zxwsf_di_Options_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di_Options(struct zx_ctx* c, struct zxwsf_di_Options_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di_Options(struct zxwsf_di_Options_s* x);
char* zxwsf_ENC_SO_di_Options(struct zxwsf_di_Options_s* x, char* p);
char* zxwsf_ENC_WO_di_Options(struct zxwsf_di_Options_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di_Options(struct zx_ctx* c, struct zxwsf_di_Options_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di_Options(struct zx_ctx* c, struct zxwsf_di_Options_s* x);

struct zxwsf_di_Options_s {
  ZX_ELEM_EXT
  zxwsf_di_Options_EXT
  struct zx_elem_s* Option;	/* {0,-1} xs:anyURI */
};

struct zx_elem_s* zxwsf_di_Options_GET_Option(struct zxwsf_di_Options_s* x, int n);
int zxwsf_di_Options_NUM_Option(struct zxwsf_di_Options_s* x);
struct zx_elem_s* zxwsf_di_Options_POP_Option(struct zxwsf_di_Options_s* x);
void zxwsf_di_Options_PUSH_Option(struct zxwsf_di_Options_s* x, struct zx_elem_s* y);
void zxwsf_di_Options_PUT_Option(struct zxwsf_di_Options_s* x, int n, struct zx_elem_s* y);
void zxwsf_di_Options_ADD_Option(struct zxwsf_di_Options_s* x, int n, struct zx_elem_s* z);
void zxwsf_di_Options_DEL_Option(struct zxwsf_di_Options_s* x, int n);
void zxwsf_di_Options_REV_Option(struct zxwsf_di_Options_s* x);

/* -------------------------- di_Query -------------------------- */
/* refby( zxwsf_e_Body_s ) */
#ifndef zxwsf_di_Query_EXT
#define zxwsf_di_Query_EXT
#endif

struct zxwsf_di_Query_s* zxwsf_DEC_di_Query(struct zx_ctx* c);
struct zxwsf_di_Query_s* zxwsf_NEW_di_Query(struct zx_ctx* c);
struct zxwsf_di_Query_s* zxwsf_DEEP_CLONE_di_Query(struct zx_ctx* c, struct zxwsf_di_Query_s* x, int dup_strs);
void zxwsf_DUP_STRS_di_Query(struct zx_ctx* c, struct zxwsf_di_Query_s* x);
void zxwsf_FREE_di_Query(struct zx_ctx* c, struct zxwsf_di_Query_s* x, int free_strs);
int zxwsf_WALK_SO_di_Query(struct zx_ctx* c, struct zxwsf_di_Query_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di_Query(struct zx_ctx* c, struct zxwsf_di_Query_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di_Query(struct zxwsf_di_Query_s* x);
char* zxwsf_ENC_SO_di_Query(struct zxwsf_di_Query_s* x, char* p);
char* zxwsf_ENC_WO_di_Query(struct zxwsf_di_Query_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di_Query(struct zx_ctx* c, struct zxwsf_di_Query_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di_Query(struct zx_ctx* c, struct zxwsf_di_Query_s* x);

struct zxwsf_di_Query_s {
  ZX_ELEM_EXT
  zxwsf_di_Query_EXT
  struct zxwsf_di_RequestedService_s* RequestedService;	/* {0,-1}  */
};

struct zxwsf_di_RequestedService_s* zxwsf_di_Query_GET_RequestedService(struct zxwsf_di_Query_s* x, int n);
int zxwsf_di_Query_NUM_RequestedService(struct zxwsf_di_Query_s* x);
struct zxwsf_di_RequestedService_s* zxwsf_di_Query_POP_RequestedService(struct zxwsf_di_Query_s* x);
void zxwsf_di_Query_PUSH_RequestedService(struct zxwsf_di_Query_s* x, struct zxwsf_di_RequestedService_s* y);
void zxwsf_di_Query_PUT_RequestedService(struct zxwsf_di_Query_s* x, int n, struct zxwsf_di_RequestedService_s* y);
void zxwsf_di_Query_ADD_RequestedService(struct zxwsf_di_Query_s* x, int n, struct zxwsf_di_RequestedService_s* z);
void zxwsf_di_Query_DEL_RequestedService(struct zxwsf_di_Query_s* x, int n);
void zxwsf_di_Query_REV_RequestedService(struct zxwsf_di_Query_s* x);

/* -------------------------- di_QueryResponse -------------------------- */
/* refby( zxwsf_e_Body_s ) */
#ifndef zxwsf_di_QueryResponse_EXT
#define zxwsf_di_QueryResponse_EXT
#endif

struct zxwsf_di_QueryResponse_s* zxwsf_DEC_di_QueryResponse(struct zx_ctx* c);
struct zxwsf_di_QueryResponse_s* zxwsf_NEW_di_QueryResponse(struct zx_ctx* c);
struct zxwsf_di_QueryResponse_s* zxwsf_DEEP_CLONE_di_QueryResponse(struct zx_ctx* c, struct zxwsf_di_QueryResponse_s* x, int dup_strs);
void zxwsf_DUP_STRS_di_QueryResponse(struct zx_ctx* c, struct zxwsf_di_QueryResponse_s* x);
void zxwsf_FREE_di_QueryResponse(struct zx_ctx* c, struct zxwsf_di_QueryResponse_s* x, int free_strs);
int zxwsf_WALK_SO_di_QueryResponse(struct zx_ctx* c, struct zxwsf_di_QueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di_QueryResponse(struct zx_ctx* c, struct zxwsf_di_QueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di_QueryResponse(struct zxwsf_di_QueryResponse_s* x);
char* zxwsf_ENC_SO_di_QueryResponse(struct zxwsf_di_QueryResponse_s* x, char* p);
char* zxwsf_ENC_WO_di_QueryResponse(struct zxwsf_di_QueryResponse_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di_QueryResponse(struct zx_ctx* c, struct zxwsf_di_QueryResponse_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di_QueryResponse(struct zx_ctx* c, struct zxwsf_di_QueryResponse_s* x);

struct zxwsf_di_QueryResponse_s {
  ZX_ELEM_EXT
  zxwsf_di_QueryResponse_EXT
  struct zxwsf_lu_Status_s* Status;	/* {1,1} nada */
  struct zxwsf_a_EndpointReference_s* EndpointReference;	/* {0,-1} nada */
};

struct zxwsf_lu_Status_s* zxwsf_di_QueryResponse_GET_Status(struct zxwsf_di_QueryResponse_s* x, int n);
struct zxwsf_a_EndpointReference_s* zxwsf_di_QueryResponse_GET_EndpointReference(struct zxwsf_di_QueryResponse_s* x, int n);
int zxwsf_di_QueryResponse_NUM_Status(struct zxwsf_di_QueryResponse_s* x);
int zxwsf_di_QueryResponse_NUM_EndpointReference(struct zxwsf_di_QueryResponse_s* x);
struct zxwsf_lu_Status_s* zxwsf_di_QueryResponse_POP_Status(struct zxwsf_di_QueryResponse_s* x);
struct zxwsf_a_EndpointReference_s* zxwsf_di_QueryResponse_POP_EndpointReference(struct zxwsf_di_QueryResponse_s* x);
void zxwsf_di_QueryResponse_PUSH_Status(struct zxwsf_di_QueryResponse_s* x, struct zxwsf_lu_Status_s* y);
void zxwsf_di_QueryResponse_PUSH_EndpointReference(struct zxwsf_di_QueryResponse_s* x, struct zxwsf_a_EndpointReference_s* y);
void zxwsf_di_QueryResponse_PUT_Status(struct zxwsf_di_QueryResponse_s* x, int n, struct zxwsf_lu_Status_s* y);
void zxwsf_di_QueryResponse_PUT_EndpointReference(struct zxwsf_di_QueryResponse_s* x, int n, struct zxwsf_a_EndpointReference_s* y);
void zxwsf_di_QueryResponse_ADD_Status(struct zxwsf_di_QueryResponse_s* x, int n, struct zxwsf_lu_Status_s* z);
void zxwsf_di_QueryResponse_ADD_EndpointReference(struct zxwsf_di_QueryResponse_s* x, int n, struct zxwsf_a_EndpointReference_s* z);
void zxwsf_di_QueryResponse_DEL_Status(struct zxwsf_di_QueryResponse_s* x, int n);
void zxwsf_di_QueryResponse_DEL_EndpointReference(struct zxwsf_di_QueryResponse_s* x, int n);
void zxwsf_di_QueryResponse_REV_Status(struct zxwsf_di_QueryResponse_s* x);
void zxwsf_di_QueryResponse_REV_EndpointReference(struct zxwsf_di_QueryResponse_s* x);

/* -------------------------- di_RequestedService -------------------------- */
/* refby( zxwsf_di_Query_s ) */
#ifndef zxwsf_di_RequestedService_EXT
#define zxwsf_di_RequestedService_EXT
#endif

struct zxwsf_di_RequestedService_s* zxwsf_DEC_di_RequestedService(struct zx_ctx* c);
struct zxwsf_di_RequestedService_s* zxwsf_NEW_di_RequestedService(struct zx_ctx* c);
struct zxwsf_di_RequestedService_s* zxwsf_DEEP_CLONE_di_RequestedService(struct zx_ctx* c, struct zxwsf_di_RequestedService_s* x, int dup_strs);
void zxwsf_DUP_STRS_di_RequestedService(struct zx_ctx* c, struct zxwsf_di_RequestedService_s* x);
void zxwsf_FREE_di_RequestedService(struct zx_ctx* c, struct zxwsf_di_RequestedService_s* x, int free_strs);
int zxwsf_WALK_SO_di_RequestedService(struct zx_ctx* c, struct zxwsf_di_RequestedService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di_RequestedService(struct zx_ctx* c, struct zxwsf_di_RequestedService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di_RequestedService(struct zxwsf_di_RequestedService_s* x);
char* zxwsf_ENC_SO_di_RequestedService(struct zxwsf_di_RequestedService_s* x, char* p);
char* zxwsf_ENC_WO_di_RequestedService(struct zxwsf_di_RequestedService_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di_RequestedService(struct zx_ctx* c, struct zxwsf_di_RequestedService_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di_RequestedService(struct zx_ctx* c, struct zxwsf_di_RequestedService_s* x);

struct zxwsf_di_RequestedService_s {
  ZX_ELEM_EXT
  zxwsf_di_RequestedService_EXT
  struct zx_elem_s* ServiceType;	/* {0,-1} xs:anyURI */
  struct zx_elem_s* ProviderID;	/* {0,-1} xs:anyURI */
  struct zxwsf_di_Options_s* Options;	/* {0,-1}  */
  struct zx_elem_s* SecurityMechID;	/* {0,-1} xs:anyURI */
  struct zxwsf_di_Framework_s* Framework;	/* {0,-1} nada */
  struct zx_elem_s* Action;	/* {0,-1} xs:anyURI */
  struct zx_str_s* reqID;	/* {0,1} attribute xs:string */
  struct zx_str_s* resultsType;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zxwsf_di_RequestedService_GET_reqID(struct zxwsf_di_RequestedService_s* x);
struct zx_str_s* zxwsf_di_RequestedService_GET_resultsType(struct zxwsf_di_RequestedService_s* x);
struct zx_elem_s* zxwsf_di_RequestedService_GET_ServiceType(struct zxwsf_di_RequestedService_s* x, int n);
struct zx_elem_s* zxwsf_di_RequestedService_GET_ProviderID(struct zxwsf_di_RequestedService_s* x, int n);
struct zxwsf_di_Options_s* zxwsf_di_RequestedService_GET_Options(struct zxwsf_di_RequestedService_s* x, int n);
struct zx_elem_s* zxwsf_di_RequestedService_GET_SecurityMechID(struct zxwsf_di_RequestedService_s* x, int n);
struct zxwsf_di_Framework_s* zxwsf_di_RequestedService_GET_Framework(struct zxwsf_di_RequestedService_s* x, int n);
struct zx_elem_s* zxwsf_di_RequestedService_GET_Action(struct zxwsf_di_RequestedService_s* x, int n);
int zxwsf_di_RequestedService_NUM_ServiceType(struct zxwsf_di_RequestedService_s* x);
int zxwsf_di_RequestedService_NUM_ProviderID(struct zxwsf_di_RequestedService_s* x);
int zxwsf_di_RequestedService_NUM_Options(struct zxwsf_di_RequestedService_s* x);
int zxwsf_di_RequestedService_NUM_SecurityMechID(struct zxwsf_di_RequestedService_s* x);
int zxwsf_di_RequestedService_NUM_Framework(struct zxwsf_di_RequestedService_s* x);
int zxwsf_di_RequestedService_NUM_Action(struct zxwsf_di_RequestedService_s* x);
struct zx_elem_s* zxwsf_di_RequestedService_POP_ServiceType(struct zxwsf_di_RequestedService_s* x);
struct zx_elem_s* zxwsf_di_RequestedService_POP_ProviderID(struct zxwsf_di_RequestedService_s* x);
struct zxwsf_di_Options_s* zxwsf_di_RequestedService_POP_Options(struct zxwsf_di_RequestedService_s* x);
struct zx_elem_s* zxwsf_di_RequestedService_POP_SecurityMechID(struct zxwsf_di_RequestedService_s* x);
struct zxwsf_di_Framework_s* zxwsf_di_RequestedService_POP_Framework(struct zxwsf_di_RequestedService_s* x);
struct zx_elem_s* zxwsf_di_RequestedService_POP_Action(struct zxwsf_di_RequestedService_s* x);
void zxwsf_di_RequestedService_PUSH_ServiceType(struct zxwsf_di_RequestedService_s* x, struct zx_elem_s* y);
void zxwsf_di_RequestedService_PUSH_ProviderID(struct zxwsf_di_RequestedService_s* x, struct zx_elem_s* y);
void zxwsf_di_RequestedService_PUSH_Options(struct zxwsf_di_RequestedService_s* x, struct zxwsf_di_Options_s* y);
void zxwsf_di_RequestedService_PUSH_SecurityMechID(struct zxwsf_di_RequestedService_s* x, struct zx_elem_s* y);
void zxwsf_di_RequestedService_PUSH_Framework(struct zxwsf_di_RequestedService_s* x, struct zxwsf_di_Framework_s* y);
void zxwsf_di_RequestedService_PUSH_Action(struct zxwsf_di_RequestedService_s* x, struct zx_elem_s* y);
void zxwsf_di_RequestedService_PUT_reqID(struct zxwsf_di_RequestedService_s* x, struct zx_str_s* y);
void zxwsf_di_RequestedService_PUT_resultsType(struct zxwsf_di_RequestedService_s* x, struct zx_str_s* y);
void zxwsf_di_RequestedService_PUT_ServiceType(struct zxwsf_di_RequestedService_s* x, int n, struct zx_elem_s* y);
void zxwsf_di_RequestedService_PUT_ProviderID(struct zxwsf_di_RequestedService_s* x, int n, struct zx_elem_s* y);
void zxwsf_di_RequestedService_PUT_Options(struct zxwsf_di_RequestedService_s* x, int n, struct zxwsf_di_Options_s* y);
void zxwsf_di_RequestedService_PUT_SecurityMechID(struct zxwsf_di_RequestedService_s* x, int n, struct zx_elem_s* y);
void zxwsf_di_RequestedService_PUT_Framework(struct zxwsf_di_RequestedService_s* x, int n, struct zxwsf_di_Framework_s* y);
void zxwsf_di_RequestedService_PUT_Action(struct zxwsf_di_RequestedService_s* x, int n, struct zx_elem_s* y);
void zxwsf_di_RequestedService_ADD_ServiceType(struct zxwsf_di_RequestedService_s* x, int n, struct zx_elem_s* z);
void zxwsf_di_RequestedService_ADD_ProviderID(struct zxwsf_di_RequestedService_s* x, int n, struct zx_elem_s* z);
void zxwsf_di_RequestedService_ADD_Options(struct zxwsf_di_RequestedService_s* x, int n, struct zxwsf_di_Options_s* z);
void zxwsf_di_RequestedService_ADD_SecurityMechID(struct zxwsf_di_RequestedService_s* x, int n, struct zx_elem_s* z);
void zxwsf_di_RequestedService_ADD_Framework(struct zxwsf_di_RequestedService_s* x, int n, struct zxwsf_di_Framework_s* z);
void zxwsf_di_RequestedService_ADD_Action(struct zxwsf_di_RequestedService_s* x, int n, struct zx_elem_s* z);
void zxwsf_di_RequestedService_DEL_ServiceType(struct zxwsf_di_RequestedService_s* x, int n);
void zxwsf_di_RequestedService_DEL_ProviderID(struct zxwsf_di_RequestedService_s* x, int n);
void zxwsf_di_RequestedService_DEL_Options(struct zxwsf_di_RequestedService_s* x, int n);
void zxwsf_di_RequestedService_DEL_SecurityMechID(struct zxwsf_di_RequestedService_s* x, int n);
void zxwsf_di_RequestedService_DEL_Framework(struct zxwsf_di_RequestedService_s* x, int n);
void zxwsf_di_RequestedService_DEL_Action(struct zxwsf_di_RequestedService_s* x, int n);
void zxwsf_di_RequestedService_REV_ServiceType(struct zxwsf_di_RequestedService_s* x);
void zxwsf_di_RequestedService_REV_ProviderID(struct zxwsf_di_RequestedService_s* x);
void zxwsf_di_RequestedService_REV_Options(struct zxwsf_di_RequestedService_s* x);
void zxwsf_di_RequestedService_REV_SecurityMechID(struct zxwsf_di_RequestedService_s* x);
void zxwsf_di_RequestedService_REV_Framework(struct zxwsf_di_RequestedService_s* x);
void zxwsf_di_RequestedService_REV_Action(struct zxwsf_di_RequestedService_s* x);

/* -------------------------- di_SecurityContext -------------------------- */
/* refby( ) */
#ifndef zxwsf_di_SecurityContext_EXT
#define zxwsf_di_SecurityContext_EXT
#endif

struct zxwsf_di_SecurityContext_s* zxwsf_DEC_di_SecurityContext(struct zx_ctx* c);
struct zxwsf_di_SecurityContext_s* zxwsf_NEW_di_SecurityContext(struct zx_ctx* c);
struct zxwsf_di_SecurityContext_s* zxwsf_DEEP_CLONE_di_SecurityContext(struct zx_ctx* c, struct zxwsf_di_SecurityContext_s* x, int dup_strs);
void zxwsf_DUP_STRS_di_SecurityContext(struct zx_ctx* c, struct zxwsf_di_SecurityContext_s* x);
void zxwsf_FREE_di_SecurityContext(struct zx_ctx* c, struct zxwsf_di_SecurityContext_s* x, int free_strs);
int zxwsf_WALK_SO_di_SecurityContext(struct zx_ctx* c, struct zxwsf_di_SecurityContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di_SecurityContext(struct zx_ctx* c, struct zxwsf_di_SecurityContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di_SecurityContext(struct zxwsf_di_SecurityContext_s* x);
char* zxwsf_ENC_SO_di_SecurityContext(struct zxwsf_di_SecurityContext_s* x, char* p);
char* zxwsf_ENC_WO_di_SecurityContext(struct zxwsf_di_SecurityContext_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di_SecurityContext(struct zx_ctx* c, struct zxwsf_di_SecurityContext_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di_SecurityContext(struct zx_ctx* c, struct zxwsf_di_SecurityContext_s* x);

struct zxwsf_di_SecurityContext_s {
  ZX_ELEM_EXT
  zxwsf_di_SecurityContext_EXT
  struct zx_elem_s* SecurityMechID;	/* {1,-1} xs:anyURI */
  struct zxwsf_sec_Token_s* Token;	/* {0,-1} nada */
};

struct zx_elem_s* zxwsf_di_SecurityContext_GET_SecurityMechID(struct zxwsf_di_SecurityContext_s* x, int n);
struct zxwsf_sec_Token_s* zxwsf_di_SecurityContext_GET_Token(struct zxwsf_di_SecurityContext_s* x, int n);
int zxwsf_di_SecurityContext_NUM_SecurityMechID(struct zxwsf_di_SecurityContext_s* x);
int zxwsf_di_SecurityContext_NUM_Token(struct zxwsf_di_SecurityContext_s* x);
struct zx_elem_s* zxwsf_di_SecurityContext_POP_SecurityMechID(struct zxwsf_di_SecurityContext_s* x);
struct zxwsf_sec_Token_s* zxwsf_di_SecurityContext_POP_Token(struct zxwsf_di_SecurityContext_s* x);
void zxwsf_di_SecurityContext_PUSH_SecurityMechID(struct zxwsf_di_SecurityContext_s* x, struct zx_elem_s* y);
void zxwsf_di_SecurityContext_PUSH_Token(struct zxwsf_di_SecurityContext_s* x, struct zxwsf_sec_Token_s* y);
void zxwsf_di_SecurityContext_PUT_SecurityMechID(struct zxwsf_di_SecurityContext_s* x, int n, struct zx_elem_s* y);
void zxwsf_di_SecurityContext_PUT_Token(struct zxwsf_di_SecurityContext_s* x, int n, struct zxwsf_sec_Token_s* y);
void zxwsf_di_SecurityContext_ADD_SecurityMechID(struct zxwsf_di_SecurityContext_s* x, int n, struct zx_elem_s* z);
void zxwsf_di_SecurityContext_ADD_Token(struct zxwsf_di_SecurityContext_s* x, int n, struct zxwsf_sec_Token_s* z);
void zxwsf_di_SecurityContext_DEL_SecurityMechID(struct zxwsf_di_SecurityContext_s* x, int n);
void zxwsf_di_SecurityContext_DEL_Token(struct zxwsf_di_SecurityContext_s* x, int n);
void zxwsf_di_SecurityContext_REV_SecurityMechID(struct zxwsf_di_SecurityContext_s* x);
void zxwsf_di_SecurityContext_REV_Token(struct zxwsf_di_SecurityContext_s* x);

/* -------------------------- di_ServiceContext -------------------------- */
/* refby( zxwsf_di_SvcMD_s ) */
#ifndef zxwsf_di_ServiceContext_EXT
#define zxwsf_di_ServiceContext_EXT
#endif

struct zxwsf_di_ServiceContext_s* zxwsf_DEC_di_ServiceContext(struct zx_ctx* c);
struct zxwsf_di_ServiceContext_s* zxwsf_NEW_di_ServiceContext(struct zx_ctx* c);
struct zxwsf_di_ServiceContext_s* zxwsf_DEEP_CLONE_di_ServiceContext(struct zx_ctx* c, struct zxwsf_di_ServiceContext_s* x, int dup_strs);
void zxwsf_DUP_STRS_di_ServiceContext(struct zx_ctx* c, struct zxwsf_di_ServiceContext_s* x);
void zxwsf_FREE_di_ServiceContext(struct zx_ctx* c, struct zxwsf_di_ServiceContext_s* x, int free_strs);
int zxwsf_WALK_SO_di_ServiceContext(struct zx_ctx* c, struct zxwsf_di_ServiceContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di_ServiceContext(struct zx_ctx* c, struct zxwsf_di_ServiceContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di_ServiceContext(struct zxwsf_di_ServiceContext_s* x);
char* zxwsf_ENC_SO_di_ServiceContext(struct zxwsf_di_ServiceContext_s* x, char* p);
char* zxwsf_ENC_WO_di_ServiceContext(struct zxwsf_di_ServiceContext_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di_ServiceContext(struct zx_ctx* c, struct zxwsf_di_ServiceContext_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di_ServiceContext(struct zx_ctx* c, struct zxwsf_di_ServiceContext_s* x);

struct zxwsf_di_ServiceContext_s {
  ZX_ELEM_EXT
  zxwsf_di_ServiceContext_EXT
  struct zx_elem_s* ServiceType;	/* {1,-1} xs:anyURI */
  struct zxwsf_di_Options_s* Options;	/* {0,-1}  */
  struct zxwsf_di_EndpointContext_s* EndpointContext;	/* {1,-1} nada */
};

struct zx_elem_s* zxwsf_di_ServiceContext_GET_ServiceType(struct zxwsf_di_ServiceContext_s* x, int n);
struct zxwsf_di_Options_s* zxwsf_di_ServiceContext_GET_Options(struct zxwsf_di_ServiceContext_s* x, int n);
struct zxwsf_di_EndpointContext_s* zxwsf_di_ServiceContext_GET_EndpointContext(struct zxwsf_di_ServiceContext_s* x, int n);
int zxwsf_di_ServiceContext_NUM_ServiceType(struct zxwsf_di_ServiceContext_s* x);
int zxwsf_di_ServiceContext_NUM_Options(struct zxwsf_di_ServiceContext_s* x);
int zxwsf_di_ServiceContext_NUM_EndpointContext(struct zxwsf_di_ServiceContext_s* x);
struct zx_elem_s* zxwsf_di_ServiceContext_POP_ServiceType(struct zxwsf_di_ServiceContext_s* x);
struct zxwsf_di_Options_s* zxwsf_di_ServiceContext_POP_Options(struct zxwsf_di_ServiceContext_s* x);
struct zxwsf_di_EndpointContext_s* zxwsf_di_ServiceContext_POP_EndpointContext(struct zxwsf_di_ServiceContext_s* x);
void zxwsf_di_ServiceContext_PUSH_ServiceType(struct zxwsf_di_ServiceContext_s* x, struct zx_elem_s* y);
void zxwsf_di_ServiceContext_PUSH_Options(struct zxwsf_di_ServiceContext_s* x, struct zxwsf_di_Options_s* y);
void zxwsf_di_ServiceContext_PUSH_EndpointContext(struct zxwsf_di_ServiceContext_s* x, struct zxwsf_di_EndpointContext_s* y);
void zxwsf_di_ServiceContext_PUT_ServiceType(struct zxwsf_di_ServiceContext_s* x, int n, struct zx_elem_s* y);
void zxwsf_di_ServiceContext_PUT_Options(struct zxwsf_di_ServiceContext_s* x, int n, struct zxwsf_di_Options_s* y);
void zxwsf_di_ServiceContext_PUT_EndpointContext(struct zxwsf_di_ServiceContext_s* x, int n, struct zxwsf_di_EndpointContext_s* y);
void zxwsf_di_ServiceContext_ADD_ServiceType(struct zxwsf_di_ServiceContext_s* x, int n, struct zx_elem_s* z);
void zxwsf_di_ServiceContext_ADD_Options(struct zxwsf_di_ServiceContext_s* x, int n, struct zxwsf_di_Options_s* z);
void zxwsf_di_ServiceContext_ADD_EndpointContext(struct zxwsf_di_ServiceContext_s* x, int n, struct zxwsf_di_EndpointContext_s* z);
void zxwsf_di_ServiceContext_DEL_ServiceType(struct zxwsf_di_ServiceContext_s* x, int n);
void zxwsf_di_ServiceContext_DEL_Options(struct zxwsf_di_ServiceContext_s* x, int n);
void zxwsf_di_ServiceContext_DEL_EndpointContext(struct zxwsf_di_ServiceContext_s* x, int n);
void zxwsf_di_ServiceContext_REV_ServiceType(struct zxwsf_di_ServiceContext_s* x);
void zxwsf_di_ServiceContext_REV_Options(struct zxwsf_di_ServiceContext_s* x);
void zxwsf_di_ServiceContext_REV_EndpointContext(struct zxwsf_di_ServiceContext_s* x);

/* -------------------------- di_SvcMD -------------------------- */
/* refby( zxwsf_di_SvcMDQueryResponse_s zxwsf_di_SvcMDReplace_s zxwsf_di_SvcMDRegister_s ) */
#ifndef zxwsf_di_SvcMD_EXT
#define zxwsf_di_SvcMD_EXT
#endif

struct zxwsf_di_SvcMD_s* zxwsf_DEC_di_SvcMD(struct zx_ctx* c);
struct zxwsf_di_SvcMD_s* zxwsf_NEW_di_SvcMD(struct zx_ctx* c);
struct zxwsf_di_SvcMD_s* zxwsf_DEEP_CLONE_di_SvcMD(struct zx_ctx* c, struct zxwsf_di_SvcMD_s* x, int dup_strs);
void zxwsf_DUP_STRS_di_SvcMD(struct zx_ctx* c, struct zxwsf_di_SvcMD_s* x);
void zxwsf_FREE_di_SvcMD(struct zx_ctx* c, struct zxwsf_di_SvcMD_s* x, int free_strs);
int zxwsf_WALK_SO_di_SvcMD(struct zx_ctx* c, struct zxwsf_di_SvcMD_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di_SvcMD(struct zx_ctx* c, struct zxwsf_di_SvcMD_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di_SvcMD(struct zxwsf_di_SvcMD_s* x);
char* zxwsf_ENC_SO_di_SvcMD(struct zxwsf_di_SvcMD_s* x, char* p);
char* zxwsf_ENC_WO_di_SvcMD(struct zxwsf_di_SvcMD_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMD(struct zx_ctx* c, struct zxwsf_di_SvcMD_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMD(struct zx_ctx* c, struct zxwsf_di_SvcMD_s* x);

struct zxwsf_di_SvcMD_s {
  ZX_ELEM_EXT
  zxwsf_di_SvcMD_EXT
  struct zx_elem_s* Abstract;	/* {1,1} xs:string */
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zxwsf_di_ServiceContext_s* ServiceContext;	/* {1,-1} nada */
  struct zx_str_s* svcMDID;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zxwsf_di_SvcMD_GET_svcMDID(struct zxwsf_di_SvcMD_s* x);
struct zx_elem_s* zxwsf_di_SvcMD_GET_Abstract(struct zxwsf_di_SvcMD_s* x, int n);
struct zx_elem_s* zxwsf_di_SvcMD_GET_ProviderID(struct zxwsf_di_SvcMD_s* x, int n);
struct zxwsf_di_ServiceContext_s* zxwsf_di_SvcMD_GET_ServiceContext(struct zxwsf_di_SvcMD_s* x, int n);
int zxwsf_di_SvcMD_NUM_Abstract(struct zxwsf_di_SvcMD_s* x);
int zxwsf_di_SvcMD_NUM_ProviderID(struct zxwsf_di_SvcMD_s* x);
int zxwsf_di_SvcMD_NUM_ServiceContext(struct zxwsf_di_SvcMD_s* x);
struct zx_elem_s* zxwsf_di_SvcMD_POP_Abstract(struct zxwsf_di_SvcMD_s* x);
struct zx_elem_s* zxwsf_di_SvcMD_POP_ProviderID(struct zxwsf_di_SvcMD_s* x);
struct zxwsf_di_ServiceContext_s* zxwsf_di_SvcMD_POP_ServiceContext(struct zxwsf_di_SvcMD_s* x);
void zxwsf_di_SvcMD_PUSH_Abstract(struct zxwsf_di_SvcMD_s* x, struct zx_elem_s* y);
void zxwsf_di_SvcMD_PUSH_ProviderID(struct zxwsf_di_SvcMD_s* x, struct zx_elem_s* y);
void zxwsf_di_SvcMD_PUSH_ServiceContext(struct zxwsf_di_SvcMD_s* x, struct zxwsf_di_ServiceContext_s* y);
void zxwsf_di_SvcMD_PUT_svcMDID(struct zxwsf_di_SvcMD_s* x, struct zx_str_s* y);
void zxwsf_di_SvcMD_PUT_Abstract(struct zxwsf_di_SvcMD_s* x, int n, struct zx_elem_s* y);
void zxwsf_di_SvcMD_PUT_ProviderID(struct zxwsf_di_SvcMD_s* x, int n, struct zx_elem_s* y);
void zxwsf_di_SvcMD_PUT_ServiceContext(struct zxwsf_di_SvcMD_s* x, int n, struct zxwsf_di_ServiceContext_s* y);
void zxwsf_di_SvcMD_ADD_Abstract(struct zxwsf_di_SvcMD_s* x, int n, struct zx_elem_s* z);
void zxwsf_di_SvcMD_ADD_ProviderID(struct zxwsf_di_SvcMD_s* x, int n, struct zx_elem_s* z);
void zxwsf_di_SvcMD_ADD_ServiceContext(struct zxwsf_di_SvcMD_s* x, int n, struct zxwsf_di_ServiceContext_s* z);
void zxwsf_di_SvcMD_DEL_Abstract(struct zxwsf_di_SvcMD_s* x, int n);
void zxwsf_di_SvcMD_DEL_ProviderID(struct zxwsf_di_SvcMD_s* x, int n);
void zxwsf_di_SvcMD_DEL_ServiceContext(struct zxwsf_di_SvcMD_s* x, int n);
void zxwsf_di_SvcMD_REV_Abstract(struct zxwsf_di_SvcMD_s* x);
void zxwsf_di_SvcMD_REV_ProviderID(struct zxwsf_di_SvcMD_s* x);
void zxwsf_di_SvcMD_REV_ServiceContext(struct zxwsf_di_SvcMD_s* x);

/* -------------------------- di_SvcMDAssociationAdd -------------------------- */
/* refby( zxwsf_dise_Body_s ) */
#ifndef zxwsf_di_SvcMDAssociationAdd_EXT
#define zxwsf_di_SvcMDAssociationAdd_EXT
#endif

struct zxwsf_di_SvcMDAssociationAdd_s* zxwsf_DEC_di_SvcMDAssociationAdd(struct zx_ctx* c);
struct zxwsf_di_SvcMDAssociationAdd_s* zxwsf_NEW_di_SvcMDAssociationAdd(struct zx_ctx* c);
struct zxwsf_di_SvcMDAssociationAdd_s* zxwsf_DEEP_CLONE_di_SvcMDAssociationAdd(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAdd_s* x, int dup_strs);
void zxwsf_DUP_STRS_di_SvcMDAssociationAdd(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAdd_s* x);
void zxwsf_FREE_di_SvcMDAssociationAdd(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAdd_s* x, int free_strs);
int zxwsf_WALK_SO_di_SvcMDAssociationAdd(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAdd_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di_SvcMDAssociationAdd(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAdd_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di_SvcMDAssociationAdd(struct zxwsf_di_SvcMDAssociationAdd_s* x);
char* zxwsf_ENC_SO_di_SvcMDAssociationAdd(struct zxwsf_di_SvcMDAssociationAdd_s* x, char* p);
char* zxwsf_ENC_WO_di_SvcMDAssociationAdd(struct zxwsf_di_SvcMDAssociationAdd_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDAssociationAdd(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAdd_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDAssociationAdd(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAdd_s* x);

struct zxwsf_di_SvcMDAssociationAdd_s {
  ZX_ELEM_EXT
  zxwsf_di_SvcMDAssociationAdd_EXT
  struct zx_elem_s* SvcMDID;	/* {1,-1} xs:string */
};

struct zx_elem_s* zxwsf_di_SvcMDAssociationAdd_GET_SvcMDID(struct zxwsf_di_SvcMDAssociationAdd_s* x, int n);
int zxwsf_di_SvcMDAssociationAdd_NUM_SvcMDID(struct zxwsf_di_SvcMDAssociationAdd_s* x);
struct zx_elem_s* zxwsf_di_SvcMDAssociationAdd_POP_SvcMDID(struct zxwsf_di_SvcMDAssociationAdd_s* x);
void zxwsf_di_SvcMDAssociationAdd_PUSH_SvcMDID(struct zxwsf_di_SvcMDAssociationAdd_s* x, struct zx_elem_s* y);
void zxwsf_di_SvcMDAssociationAdd_PUT_SvcMDID(struct zxwsf_di_SvcMDAssociationAdd_s* x, int n, struct zx_elem_s* y);
void zxwsf_di_SvcMDAssociationAdd_ADD_SvcMDID(struct zxwsf_di_SvcMDAssociationAdd_s* x, int n, struct zx_elem_s* z);
void zxwsf_di_SvcMDAssociationAdd_DEL_SvcMDID(struct zxwsf_di_SvcMDAssociationAdd_s* x, int n);
void zxwsf_di_SvcMDAssociationAdd_REV_SvcMDID(struct zxwsf_di_SvcMDAssociationAdd_s* x);

/* -------------------------- di_SvcMDAssociationAddResponse -------------------------- */
/* refby( zxwsf_dise_Body_s ) */
#ifndef zxwsf_di_SvcMDAssociationAddResponse_EXT
#define zxwsf_di_SvcMDAssociationAddResponse_EXT
#endif

struct zxwsf_di_SvcMDAssociationAddResponse_s* zxwsf_DEC_di_SvcMDAssociationAddResponse(struct zx_ctx* c);
struct zxwsf_di_SvcMDAssociationAddResponse_s* zxwsf_NEW_di_SvcMDAssociationAddResponse(struct zx_ctx* c);
struct zxwsf_di_SvcMDAssociationAddResponse_s* zxwsf_DEEP_CLONE_di_SvcMDAssociationAddResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAddResponse_s* x, int dup_strs);
void zxwsf_DUP_STRS_di_SvcMDAssociationAddResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAddResponse_s* x);
void zxwsf_FREE_di_SvcMDAssociationAddResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAddResponse_s* x, int free_strs);
int zxwsf_WALK_SO_di_SvcMDAssociationAddResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAddResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di_SvcMDAssociationAddResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAddResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di_SvcMDAssociationAddResponse(struct zxwsf_di_SvcMDAssociationAddResponse_s* x);
char* zxwsf_ENC_SO_di_SvcMDAssociationAddResponse(struct zxwsf_di_SvcMDAssociationAddResponse_s* x, char* p);
char* zxwsf_ENC_WO_di_SvcMDAssociationAddResponse(struct zxwsf_di_SvcMDAssociationAddResponse_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDAssociationAddResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAddResponse_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDAssociationAddResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAddResponse_s* x);

struct zxwsf_di_SvcMDAssociationAddResponse_s {
  ZX_ELEM_EXT
  zxwsf_di_SvcMDAssociationAddResponse_EXT
  struct zxwsf_lu_Status_s* Status;	/* {1,1} nada */
};

struct zxwsf_lu_Status_s* zxwsf_di_SvcMDAssociationAddResponse_GET_Status(struct zxwsf_di_SvcMDAssociationAddResponse_s* x, int n);
int zxwsf_di_SvcMDAssociationAddResponse_NUM_Status(struct zxwsf_di_SvcMDAssociationAddResponse_s* x);
struct zxwsf_lu_Status_s* zxwsf_di_SvcMDAssociationAddResponse_POP_Status(struct zxwsf_di_SvcMDAssociationAddResponse_s* x);
void zxwsf_di_SvcMDAssociationAddResponse_PUSH_Status(struct zxwsf_di_SvcMDAssociationAddResponse_s* x, struct zxwsf_lu_Status_s* y);
void zxwsf_di_SvcMDAssociationAddResponse_PUT_Status(struct zxwsf_di_SvcMDAssociationAddResponse_s* x, int n, struct zxwsf_lu_Status_s* y);
void zxwsf_di_SvcMDAssociationAddResponse_ADD_Status(struct zxwsf_di_SvcMDAssociationAddResponse_s* x, int n, struct zxwsf_lu_Status_s* z);
void zxwsf_di_SvcMDAssociationAddResponse_DEL_Status(struct zxwsf_di_SvcMDAssociationAddResponse_s* x, int n);
void zxwsf_di_SvcMDAssociationAddResponse_REV_Status(struct zxwsf_di_SvcMDAssociationAddResponse_s* x);

/* -------------------------- di_SvcMDAssociationDelete -------------------------- */
/* refby( zxwsf_dise_Body_s ) */
#ifndef zxwsf_di_SvcMDAssociationDelete_EXT
#define zxwsf_di_SvcMDAssociationDelete_EXT
#endif

struct zxwsf_di_SvcMDAssociationDelete_s* zxwsf_DEC_di_SvcMDAssociationDelete(struct zx_ctx* c);
struct zxwsf_di_SvcMDAssociationDelete_s* zxwsf_NEW_di_SvcMDAssociationDelete(struct zx_ctx* c);
struct zxwsf_di_SvcMDAssociationDelete_s* zxwsf_DEEP_CLONE_di_SvcMDAssociationDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDelete_s* x, int dup_strs);
void zxwsf_DUP_STRS_di_SvcMDAssociationDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDelete_s* x);
void zxwsf_FREE_di_SvcMDAssociationDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDelete_s* x, int free_strs);
int zxwsf_WALK_SO_di_SvcMDAssociationDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDelete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di_SvcMDAssociationDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDelete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di_SvcMDAssociationDelete(struct zxwsf_di_SvcMDAssociationDelete_s* x);
char* zxwsf_ENC_SO_di_SvcMDAssociationDelete(struct zxwsf_di_SvcMDAssociationDelete_s* x, char* p);
char* zxwsf_ENC_WO_di_SvcMDAssociationDelete(struct zxwsf_di_SvcMDAssociationDelete_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDAssociationDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDelete_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDAssociationDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDelete_s* x);

struct zxwsf_di_SvcMDAssociationDelete_s {
  ZX_ELEM_EXT
  zxwsf_di_SvcMDAssociationDelete_EXT
  struct zx_elem_s* SvcMDID;	/* {1,-1} xs:string */
};

struct zx_elem_s* zxwsf_di_SvcMDAssociationDelete_GET_SvcMDID(struct zxwsf_di_SvcMDAssociationDelete_s* x, int n);
int zxwsf_di_SvcMDAssociationDelete_NUM_SvcMDID(struct zxwsf_di_SvcMDAssociationDelete_s* x);
struct zx_elem_s* zxwsf_di_SvcMDAssociationDelete_POP_SvcMDID(struct zxwsf_di_SvcMDAssociationDelete_s* x);
void zxwsf_di_SvcMDAssociationDelete_PUSH_SvcMDID(struct zxwsf_di_SvcMDAssociationDelete_s* x, struct zx_elem_s* y);
void zxwsf_di_SvcMDAssociationDelete_PUT_SvcMDID(struct zxwsf_di_SvcMDAssociationDelete_s* x, int n, struct zx_elem_s* y);
void zxwsf_di_SvcMDAssociationDelete_ADD_SvcMDID(struct zxwsf_di_SvcMDAssociationDelete_s* x, int n, struct zx_elem_s* z);
void zxwsf_di_SvcMDAssociationDelete_DEL_SvcMDID(struct zxwsf_di_SvcMDAssociationDelete_s* x, int n);
void zxwsf_di_SvcMDAssociationDelete_REV_SvcMDID(struct zxwsf_di_SvcMDAssociationDelete_s* x);

/* -------------------------- di_SvcMDAssociationDeleteResponse -------------------------- */
/* refby( zxwsf_dise_Body_s ) */
#ifndef zxwsf_di_SvcMDAssociationDeleteResponse_EXT
#define zxwsf_di_SvcMDAssociationDeleteResponse_EXT
#endif

struct zxwsf_di_SvcMDAssociationDeleteResponse_s* zxwsf_DEC_di_SvcMDAssociationDeleteResponse(struct zx_ctx* c);
struct zxwsf_di_SvcMDAssociationDeleteResponse_s* zxwsf_NEW_di_SvcMDAssociationDeleteResponse(struct zx_ctx* c);
struct zxwsf_di_SvcMDAssociationDeleteResponse_s* zxwsf_DEEP_CLONE_di_SvcMDAssociationDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x, int dup_strs);
void zxwsf_DUP_STRS_di_SvcMDAssociationDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x);
void zxwsf_FREE_di_SvcMDAssociationDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x, int free_strs);
int zxwsf_WALK_SO_di_SvcMDAssociationDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di_SvcMDAssociationDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di_SvcMDAssociationDeleteResponse(struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x);
char* zxwsf_ENC_SO_di_SvcMDAssociationDeleteResponse(struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x, char* p);
char* zxwsf_ENC_WO_di_SvcMDAssociationDeleteResponse(struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDAssociationDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDAssociationDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x);

struct zxwsf_di_SvcMDAssociationDeleteResponse_s {
  ZX_ELEM_EXT
  zxwsf_di_SvcMDAssociationDeleteResponse_EXT
  struct zxwsf_lu_Status_s* Status;	/* {1,1} nada */
};

struct zxwsf_lu_Status_s* zxwsf_di_SvcMDAssociationDeleteResponse_GET_Status(struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x, int n);
int zxwsf_di_SvcMDAssociationDeleteResponse_NUM_Status(struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x);
struct zxwsf_lu_Status_s* zxwsf_di_SvcMDAssociationDeleteResponse_POP_Status(struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x);
void zxwsf_di_SvcMDAssociationDeleteResponse_PUSH_Status(struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x, struct zxwsf_lu_Status_s* y);
void zxwsf_di_SvcMDAssociationDeleteResponse_PUT_Status(struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x, int n, struct zxwsf_lu_Status_s* y);
void zxwsf_di_SvcMDAssociationDeleteResponse_ADD_Status(struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x, int n, struct zxwsf_lu_Status_s* z);
void zxwsf_di_SvcMDAssociationDeleteResponse_DEL_Status(struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x, int n);
void zxwsf_di_SvcMDAssociationDeleteResponse_REV_Status(struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x);

/* -------------------------- di_SvcMDAssociationQuery -------------------------- */
/* refby( zxwsf_dise_Body_s ) */
#ifndef zxwsf_di_SvcMDAssociationQuery_EXT
#define zxwsf_di_SvcMDAssociationQuery_EXT
#endif

struct zxwsf_di_SvcMDAssociationQuery_s* zxwsf_DEC_di_SvcMDAssociationQuery(struct zx_ctx* c);
struct zxwsf_di_SvcMDAssociationQuery_s* zxwsf_NEW_di_SvcMDAssociationQuery(struct zx_ctx* c);
struct zxwsf_di_SvcMDAssociationQuery_s* zxwsf_DEEP_CLONE_di_SvcMDAssociationQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQuery_s* x, int dup_strs);
void zxwsf_DUP_STRS_di_SvcMDAssociationQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQuery_s* x);
void zxwsf_FREE_di_SvcMDAssociationQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQuery_s* x, int free_strs);
int zxwsf_WALK_SO_di_SvcMDAssociationQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di_SvcMDAssociationQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di_SvcMDAssociationQuery(struct zxwsf_di_SvcMDAssociationQuery_s* x);
char* zxwsf_ENC_SO_di_SvcMDAssociationQuery(struct zxwsf_di_SvcMDAssociationQuery_s* x, char* p);
char* zxwsf_ENC_WO_di_SvcMDAssociationQuery(struct zxwsf_di_SvcMDAssociationQuery_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDAssociationQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQuery_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDAssociationQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQuery_s* x);

struct zxwsf_di_SvcMDAssociationQuery_s {
  ZX_ELEM_EXT
  zxwsf_di_SvcMDAssociationQuery_EXT
  struct zx_elem_s* SvcMDID;	/* {0,-1} xs:string */
};

struct zx_elem_s* zxwsf_di_SvcMDAssociationQuery_GET_SvcMDID(struct zxwsf_di_SvcMDAssociationQuery_s* x, int n);
int zxwsf_di_SvcMDAssociationQuery_NUM_SvcMDID(struct zxwsf_di_SvcMDAssociationQuery_s* x);
struct zx_elem_s* zxwsf_di_SvcMDAssociationQuery_POP_SvcMDID(struct zxwsf_di_SvcMDAssociationQuery_s* x);
void zxwsf_di_SvcMDAssociationQuery_PUSH_SvcMDID(struct zxwsf_di_SvcMDAssociationQuery_s* x, struct zx_elem_s* y);
void zxwsf_di_SvcMDAssociationQuery_PUT_SvcMDID(struct zxwsf_di_SvcMDAssociationQuery_s* x, int n, struct zx_elem_s* y);
void zxwsf_di_SvcMDAssociationQuery_ADD_SvcMDID(struct zxwsf_di_SvcMDAssociationQuery_s* x, int n, struct zx_elem_s* z);
void zxwsf_di_SvcMDAssociationQuery_DEL_SvcMDID(struct zxwsf_di_SvcMDAssociationQuery_s* x, int n);
void zxwsf_di_SvcMDAssociationQuery_REV_SvcMDID(struct zxwsf_di_SvcMDAssociationQuery_s* x);

/* -------------------------- di_SvcMDAssociationQueryResponse -------------------------- */
/* refby( zxwsf_dise_Body_s ) */
#ifndef zxwsf_di_SvcMDAssociationQueryResponse_EXT
#define zxwsf_di_SvcMDAssociationQueryResponse_EXT
#endif

struct zxwsf_di_SvcMDAssociationQueryResponse_s* zxwsf_DEC_di_SvcMDAssociationQueryResponse(struct zx_ctx* c);
struct zxwsf_di_SvcMDAssociationQueryResponse_s* zxwsf_NEW_di_SvcMDAssociationQueryResponse(struct zx_ctx* c);
struct zxwsf_di_SvcMDAssociationQueryResponse_s* zxwsf_DEEP_CLONE_di_SvcMDAssociationQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, int dup_strs);
void zxwsf_DUP_STRS_di_SvcMDAssociationQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQueryResponse_s* x);
void zxwsf_FREE_di_SvcMDAssociationQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, int free_strs);
int zxwsf_WALK_SO_di_SvcMDAssociationQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di_SvcMDAssociationQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di_SvcMDAssociationQueryResponse(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x);
char* zxwsf_ENC_SO_di_SvcMDAssociationQueryResponse(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, char* p);
char* zxwsf_ENC_WO_di_SvcMDAssociationQueryResponse(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDAssociationQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQueryResponse_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDAssociationQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQueryResponse_s* x);

struct zxwsf_di_SvcMDAssociationQueryResponse_s {
  ZX_ELEM_EXT
  zxwsf_di_SvcMDAssociationQueryResponse_EXT
  struct zxwsf_lu_Status_s* Status;	/* {1,1} nada */
  struct zx_elem_s* SvcMDID;	/* {0,-1} xs:string */
};

struct zxwsf_lu_Status_s* zxwsf_di_SvcMDAssociationQueryResponse_GET_Status(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, int n);
struct zx_elem_s* zxwsf_di_SvcMDAssociationQueryResponse_GET_SvcMDID(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, int n);
int zxwsf_di_SvcMDAssociationQueryResponse_NUM_Status(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x);
int zxwsf_di_SvcMDAssociationQueryResponse_NUM_SvcMDID(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x);
struct zxwsf_lu_Status_s* zxwsf_di_SvcMDAssociationQueryResponse_POP_Status(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x);
struct zx_elem_s* zxwsf_di_SvcMDAssociationQueryResponse_POP_SvcMDID(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x);
void zxwsf_di_SvcMDAssociationQueryResponse_PUSH_Status(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, struct zxwsf_lu_Status_s* y);
void zxwsf_di_SvcMDAssociationQueryResponse_PUSH_SvcMDID(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, struct zx_elem_s* y);
void zxwsf_di_SvcMDAssociationQueryResponse_PUT_Status(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, int n, struct zxwsf_lu_Status_s* y);
void zxwsf_di_SvcMDAssociationQueryResponse_PUT_SvcMDID(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, int n, struct zx_elem_s* y);
void zxwsf_di_SvcMDAssociationQueryResponse_ADD_Status(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, int n, struct zxwsf_lu_Status_s* z);
void zxwsf_di_SvcMDAssociationQueryResponse_ADD_SvcMDID(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, int n, struct zx_elem_s* z);
void zxwsf_di_SvcMDAssociationQueryResponse_DEL_Status(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, int n);
void zxwsf_di_SvcMDAssociationQueryResponse_DEL_SvcMDID(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, int n);
void zxwsf_di_SvcMDAssociationQueryResponse_REV_Status(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x);
void zxwsf_di_SvcMDAssociationQueryResponse_REV_SvcMDID(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x);

/* -------------------------- di_SvcMDDelete -------------------------- */
/* refby( zxwsf_dise_Body_s ) */
#ifndef zxwsf_di_SvcMDDelete_EXT
#define zxwsf_di_SvcMDDelete_EXT
#endif

struct zxwsf_di_SvcMDDelete_s* zxwsf_DEC_di_SvcMDDelete(struct zx_ctx* c);
struct zxwsf_di_SvcMDDelete_s* zxwsf_NEW_di_SvcMDDelete(struct zx_ctx* c);
struct zxwsf_di_SvcMDDelete_s* zxwsf_DEEP_CLONE_di_SvcMDDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDDelete_s* x, int dup_strs);
void zxwsf_DUP_STRS_di_SvcMDDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDDelete_s* x);
void zxwsf_FREE_di_SvcMDDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDDelete_s* x, int free_strs);
int zxwsf_WALK_SO_di_SvcMDDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDDelete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di_SvcMDDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDDelete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di_SvcMDDelete(struct zxwsf_di_SvcMDDelete_s* x);
char* zxwsf_ENC_SO_di_SvcMDDelete(struct zxwsf_di_SvcMDDelete_s* x, char* p);
char* zxwsf_ENC_WO_di_SvcMDDelete(struct zxwsf_di_SvcMDDelete_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDDelete_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDDelete_s* x);

struct zxwsf_di_SvcMDDelete_s {
  ZX_ELEM_EXT
  zxwsf_di_SvcMDDelete_EXT
  struct zx_elem_s* SvcMDID;	/* {1,-1} xs:string */
};

struct zx_elem_s* zxwsf_di_SvcMDDelete_GET_SvcMDID(struct zxwsf_di_SvcMDDelete_s* x, int n);
int zxwsf_di_SvcMDDelete_NUM_SvcMDID(struct zxwsf_di_SvcMDDelete_s* x);
struct zx_elem_s* zxwsf_di_SvcMDDelete_POP_SvcMDID(struct zxwsf_di_SvcMDDelete_s* x);
void zxwsf_di_SvcMDDelete_PUSH_SvcMDID(struct zxwsf_di_SvcMDDelete_s* x, struct zx_elem_s* y);
void zxwsf_di_SvcMDDelete_PUT_SvcMDID(struct zxwsf_di_SvcMDDelete_s* x, int n, struct zx_elem_s* y);
void zxwsf_di_SvcMDDelete_ADD_SvcMDID(struct zxwsf_di_SvcMDDelete_s* x, int n, struct zx_elem_s* z);
void zxwsf_di_SvcMDDelete_DEL_SvcMDID(struct zxwsf_di_SvcMDDelete_s* x, int n);
void zxwsf_di_SvcMDDelete_REV_SvcMDID(struct zxwsf_di_SvcMDDelete_s* x);

/* -------------------------- di_SvcMDDeleteResponse -------------------------- */
/* refby( zxwsf_dise_Body_s ) */
#ifndef zxwsf_di_SvcMDDeleteResponse_EXT
#define zxwsf_di_SvcMDDeleteResponse_EXT
#endif

struct zxwsf_di_SvcMDDeleteResponse_s* zxwsf_DEC_di_SvcMDDeleteResponse(struct zx_ctx* c);
struct zxwsf_di_SvcMDDeleteResponse_s* zxwsf_NEW_di_SvcMDDeleteResponse(struct zx_ctx* c);
struct zxwsf_di_SvcMDDeleteResponse_s* zxwsf_DEEP_CLONE_di_SvcMDDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDDeleteResponse_s* x, int dup_strs);
void zxwsf_DUP_STRS_di_SvcMDDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDDeleteResponse_s* x);
void zxwsf_FREE_di_SvcMDDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDDeleteResponse_s* x, int free_strs);
int zxwsf_WALK_SO_di_SvcMDDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDDeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di_SvcMDDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDDeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di_SvcMDDeleteResponse(struct zxwsf_di_SvcMDDeleteResponse_s* x);
char* zxwsf_ENC_SO_di_SvcMDDeleteResponse(struct zxwsf_di_SvcMDDeleteResponse_s* x, char* p);
char* zxwsf_ENC_WO_di_SvcMDDeleteResponse(struct zxwsf_di_SvcMDDeleteResponse_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDDeleteResponse_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDDeleteResponse_s* x);

struct zxwsf_di_SvcMDDeleteResponse_s {
  ZX_ELEM_EXT
  zxwsf_di_SvcMDDeleteResponse_EXT
  struct zxwsf_lu_Status_s* Status;	/* {1,1} nada */
};

struct zxwsf_lu_Status_s* zxwsf_di_SvcMDDeleteResponse_GET_Status(struct zxwsf_di_SvcMDDeleteResponse_s* x, int n);
int zxwsf_di_SvcMDDeleteResponse_NUM_Status(struct zxwsf_di_SvcMDDeleteResponse_s* x);
struct zxwsf_lu_Status_s* zxwsf_di_SvcMDDeleteResponse_POP_Status(struct zxwsf_di_SvcMDDeleteResponse_s* x);
void zxwsf_di_SvcMDDeleteResponse_PUSH_Status(struct zxwsf_di_SvcMDDeleteResponse_s* x, struct zxwsf_lu_Status_s* y);
void zxwsf_di_SvcMDDeleteResponse_PUT_Status(struct zxwsf_di_SvcMDDeleteResponse_s* x, int n, struct zxwsf_lu_Status_s* y);
void zxwsf_di_SvcMDDeleteResponse_ADD_Status(struct zxwsf_di_SvcMDDeleteResponse_s* x, int n, struct zxwsf_lu_Status_s* z);
void zxwsf_di_SvcMDDeleteResponse_DEL_Status(struct zxwsf_di_SvcMDDeleteResponse_s* x, int n);
void zxwsf_di_SvcMDDeleteResponse_REV_Status(struct zxwsf_di_SvcMDDeleteResponse_s* x);

/* -------------------------- di_SvcMDQuery -------------------------- */
/* refby( zxwsf_dise_Body_s ) */
#ifndef zxwsf_di_SvcMDQuery_EXT
#define zxwsf_di_SvcMDQuery_EXT
#endif

struct zxwsf_di_SvcMDQuery_s* zxwsf_DEC_di_SvcMDQuery(struct zx_ctx* c);
struct zxwsf_di_SvcMDQuery_s* zxwsf_NEW_di_SvcMDQuery(struct zx_ctx* c);
struct zxwsf_di_SvcMDQuery_s* zxwsf_DEEP_CLONE_di_SvcMDQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDQuery_s* x, int dup_strs);
void zxwsf_DUP_STRS_di_SvcMDQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDQuery_s* x);
void zxwsf_FREE_di_SvcMDQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDQuery_s* x, int free_strs);
int zxwsf_WALK_SO_di_SvcMDQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di_SvcMDQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di_SvcMDQuery(struct zxwsf_di_SvcMDQuery_s* x);
char* zxwsf_ENC_SO_di_SvcMDQuery(struct zxwsf_di_SvcMDQuery_s* x, char* p);
char* zxwsf_ENC_WO_di_SvcMDQuery(struct zxwsf_di_SvcMDQuery_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDQuery_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDQuery_s* x);

struct zxwsf_di_SvcMDQuery_s {
  ZX_ELEM_EXT
  zxwsf_di_SvcMDQuery_EXT
  struct zx_elem_s* SvcMDID;	/* {0,-1} xs:string */
};

struct zx_elem_s* zxwsf_di_SvcMDQuery_GET_SvcMDID(struct zxwsf_di_SvcMDQuery_s* x, int n);
int zxwsf_di_SvcMDQuery_NUM_SvcMDID(struct zxwsf_di_SvcMDQuery_s* x);
struct zx_elem_s* zxwsf_di_SvcMDQuery_POP_SvcMDID(struct zxwsf_di_SvcMDQuery_s* x);
void zxwsf_di_SvcMDQuery_PUSH_SvcMDID(struct zxwsf_di_SvcMDQuery_s* x, struct zx_elem_s* y);
void zxwsf_di_SvcMDQuery_PUT_SvcMDID(struct zxwsf_di_SvcMDQuery_s* x, int n, struct zx_elem_s* y);
void zxwsf_di_SvcMDQuery_ADD_SvcMDID(struct zxwsf_di_SvcMDQuery_s* x, int n, struct zx_elem_s* z);
void zxwsf_di_SvcMDQuery_DEL_SvcMDID(struct zxwsf_di_SvcMDQuery_s* x, int n);
void zxwsf_di_SvcMDQuery_REV_SvcMDID(struct zxwsf_di_SvcMDQuery_s* x);

/* -------------------------- di_SvcMDQueryResponse -------------------------- */
/* refby( zxwsf_dise_Body_s ) */
#ifndef zxwsf_di_SvcMDQueryResponse_EXT
#define zxwsf_di_SvcMDQueryResponse_EXT
#endif

struct zxwsf_di_SvcMDQueryResponse_s* zxwsf_DEC_di_SvcMDQueryResponse(struct zx_ctx* c);
struct zxwsf_di_SvcMDQueryResponse_s* zxwsf_NEW_di_SvcMDQueryResponse(struct zx_ctx* c);
struct zxwsf_di_SvcMDQueryResponse_s* zxwsf_DEEP_CLONE_di_SvcMDQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDQueryResponse_s* x, int dup_strs);
void zxwsf_DUP_STRS_di_SvcMDQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDQueryResponse_s* x);
void zxwsf_FREE_di_SvcMDQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDQueryResponse_s* x, int free_strs);
int zxwsf_WALK_SO_di_SvcMDQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDQueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di_SvcMDQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDQueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di_SvcMDQueryResponse(struct zxwsf_di_SvcMDQueryResponse_s* x);
char* zxwsf_ENC_SO_di_SvcMDQueryResponse(struct zxwsf_di_SvcMDQueryResponse_s* x, char* p);
char* zxwsf_ENC_WO_di_SvcMDQueryResponse(struct zxwsf_di_SvcMDQueryResponse_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDQueryResponse_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDQueryResponse_s* x);

struct zxwsf_di_SvcMDQueryResponse_s {
  ZX_ELEM_EXT
  zxwsf_di_SvcMDQueryResponse_EXT
  struct zxwsf_lu_Status_s* Status;	/* {1,1} nada */
  struct zxwsf_di_SvcMD_s* SvcMD;	/* {0,-1} nada */
};

struct zxwsf_lu_Status_s* zxwsf_di_SvcMDQueryResponse_GET_Status(struct zxwsf_di_SvcMDQueryResponse_s* x, int n);
struct zxwsf_di_SvcMD_s* zxwsf_di_SvcMDQueryResponse_GET_SvcMD(struct zxwsf_di_SvcMDQueryResponse_s* x, int n);
int zxwsf_di_SvcMDQueryResponse_NUM_Status(struct zxwsf_di_SvcMDQueryResponse_s* x);
int zxwsf_di_SvcMDQueryResponse_NUM_SvcMD(struct zxwsf_di_SvcMDQueryResponse_s* x);
struct zxwsf_lu_Status_s* zxwsf_di_SvcMDQueryResponse_POP_Status(struct zxwsf_di_SvcMDQueryResponse_s* x);
struct zxwsf_di_SvcMD_s* zxwsf_di_SvcMDQueryResponse_POP_SvcMD(struct zxwsf_di_SvcMDQueryResponse_s* x);
void zxwsf_di_SvcMDQueryResponse_PUSH_Status(struct zxwsf_di_SvcMDQueryResponse_s* x, struct zxwsf_lu_Status_s* y);
void zxwsf_di_SvcMDQueryResponse_PUSH_SvcMD(struct zxwsf_di_SvcMDQueryResponse_s* x, struct zxwsf_di_SvcMD_s* y);
void zxwsf_di_SvcMDQueryResponse_PUT_Status(struct zxwsf_di_SvcMDQueryResponse_s* x, int n, struct zxwsf_lu_Status_s* y);
void zxwsf_di_SvcMDQueryResponse_PUT_SvcMD(struct zxwsf_di_SvcMDQueryResponse_s* x, int n, struct zxwsf_di_SvcMD_s* y);
void zxwsf_di_SvcMDQueryResponse_ADD_Status(struct zxwsf_di_SvcMDQueryResponse_s* x, int n, struct zxwsf_lu_Status_s* z);
void zxwsf_di_SvcMDQueryResponse_ADD_SvcMD(struct zxwsf_di_SvcMDQueryResponse_s* x, int n, struct zxwsf_di_SvcMD_s* z);
void zxwsf_di_SvcMDQueryResponse_DEL_Status(struct zxwsf_di_SvcMDQueryResponse_s* x, int n);
void zxwsf_di_SvcMDQueryResponse_DEL_SvcMD(struct zxwsf_di_SvcMDQueryResponse_s* x, int n);
void zxwsf_di_SvcMDQueryResponse_REV_Status(struct zxwsf_di_SvcMDQueryResponse_s* x);
void zxwsf_di_SvcMDQueryResponse_REV_SvcMD(struct zxwsf_di_SvcMDQueryResponse_s* x);

/* -------------------------- di_SvcMDRegister -------------------------- */
/* refby( zxwsf_dise_Body_s ) */
#ifndef zxwsf_di_SvcMDRegister_EXT
#define zxwsf_di_SvcMDRegister_EXT
#endif

struct zxwsf_di_SvcMDRegister_s* zxwsf_DEC_di_SvcMDRegister(struct zx_ctx* c);
struct zxwsf_di_SvcMDRegister_s* zxwsf_NEW_di_SvcMDRegister(struct zx_ctx* c);
struct zxwsf_di_SvcMDRegister_s* zxwsf_DEEP_CLONE_di_SvcMDRegister(struct zx_ctx* c, struct zxwsf_di_SvcMDRegister_s* x, int dup_strs);
void zxwsf_DUP_STRS_di_SvcMDRegister(struct zx_ctx* c, struct zxwsf_di_SvcMDRegister_s* x);
void zxwsf_FREE_di_SvcMDRegister(struct zx_ctx* c, struct zxwsf_di_SvcMDRegister_s* x, int free_strs);
int zxwsf_WALK_SO_di_SvcMDRegister(struct zx_ctx* c, struct zxwsf_di_SvcMDRegister_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di_SvcMDRegister(struct zx_ctx* c, struct zxwsf_di_SvcMDRegister_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di_SvcMDRegister(struct zxwsf_di_SvcMDRegister_s* x);
char* zxwsf_ENC_SO_di_SvcMDRegister(struct zxwsf_di_SvcMDRegister_s* x, char* p);
char* zxwsf_ENC_WO_di_SvcMDRegister(struct zxwsf_di_SvcMDRegister_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDRegister(struct zx_ctx* c, struct zxwsf_di_SvcMDRegister_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDRegister(struct zx_ctx* c, struct zxwsf_di_SvcMDRegister_s* x);

struct zxwsf_di_SvcMDRegister_s {
  ZX_ELEM_EXT
  zxwsf_di_SvcMDRegister_EXT
  struct zxwsf_di_SvcMD_s* SvcMD;	/* {1,-1} nada */
};

struct zxwsf_di_SvcMD_s* zxwsf_di_SvcMDRegister_GET_SvcMD(struct zxwsf_di_SvcMDRegister_s* x, int n);
int zxwsf_di_SvcMDRegister_NUM_SvcMD(struct zxwsf_di_SvcMDRegister_s* x);
struct zxwsf_di_SvcMD_s* zxwsf_di_SvcMDRegister_POP_SvcMD(struct zxwsf_di_SvcMDRegister_s* x);
void zxwsf_di_SvcMDRegister_PUSH_SvcMD(struct zxwsf_di_SvcMDRegister_s* x, struct zxwsf_di_SvcMD_s* y);
void zxwsf_di_SvcMDRegister_PUT_SvcMD(struct zxwsf_di_SvcMDRegister_s* x, int n, struct zxwsf_di_SvcMD_s* y);
void zxwsf_di_SvcMDRegister_ADD_SvcMD(struct zxwsf_di_SvcMDRegister_s* x, int n, struct zxwsf_di_SvcMD_s* z);
void zxwsf_di_SvcMDRegister_DEL_SvcMD(struct zxwsf_di_SvcMDRegister_s* x, int n);
void zxwsf_di_SvcMDRegister_REV_SvcMD(struct zxwsf_di_SvcMDRegister_s* x);

/* -------------------------- di_SvcMDRegisterResponse -------------------------- */
/* refby( zxwsf_dise_Body_s ) */
#ifndef zxwsf_di_SvcMDRegisterResponse_EXT
#define zxwsf_di_SvcMDRegisterResponse_EXT
#endif

struct zxwsf_di_SvcMDRegisterResponse_s* zxwsf_DEC_di_SvcMDRegisterResponse(struct zx_ctx* c);
struct zxwsf_di_SvcMDRegisterResponse_s* zxwsf_NEW_di_SvcMDRegisterResponse(struct zx_ctx* c);
struct zxwsf_di_SvcMDRegisterResponse_s* zxwsf_DEEP_CLONE_di_SvcMDRegisterResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDRegisterResponse_s* x, int dup_strs);
void zxwsf_DUP_STRS_di_SvcMDRegisterResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDRegisterResponse_s* x);
void zxwsf_FREE_di_SvcMDRegisterResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDRegisterResponse_s* x, int free_strs);
int zxwsf_WALK_SO_di_SvcMDRegisterResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDRegisterResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di_SvcMDRegisterResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDRegisterResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di_SvcMDRegisterResponse(struct zxwsf_di_SvcMDRegisterResponse_s* x);
char* zxwsf_ENC_SO_di_SvcMDRegisterResponse(struct zxwsf_di_SvcMDRegisterResponse_s* x, char* p);
char* zxwsf_ENC_WO_di_SvcMDRegisterResponse(struct zxwsf_di_SvcMDRegisterResponse_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDRegisterResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDRegisterResponse_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDRegisterResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDRegisterResponse_s* x);

struct zxwsf_di_SvcMDRegisterResponse_s {
  ZX_ELEM_EXT
  zxwsf_di_SvcMDRegisterResponse_EXT
  struct zxwsf_lu_Status_s* Status;	/* {1,1} nada */
  struct zx_elem_s* SvcMDID;	/* {0,-1} xs:string */
  struct zxwsf_di_Keys_s* Keys;	/* {0,-1}  */
};

struct zxwsf_lu_Status_s* zxwsf_di_SvcMDRegisterResponse_GET_Status(struct zxwsf_di_SvcMDRegisterResponse_s* x, int n);
struct zx_elem_s* zxwsf_di_SvcMDRegisterResponse_GET_SvcMDID(struct zxwsf_di_SvcMDRegisterResponse_s* x, int n);
struct zxwsf_di_Keys_s* zxwsf_di_SvcMDRegisterResponse_GET_Keys(struct zxwsf_di_SvcMDRegisterResponse_s* x, int n);
int zxwsf_di_SvcMDRegisterResponse_NUM_Status(struct zxwsf_di_SvcMDRegisterResponse_s* x);
int zxwsf_di_SvcMDRegisterResponse_NUM_SvcMDID(struct zxwsf_di_SvcMDRegisterResponse_s* x);
int zxwsf_di_SvcMDRegisterResponse_NUM_Keys(struct zxwsf_di_SvcMDRegisterResponse_s* x);
struct zxwsf_lu_Status_s* zxwsf_di_SvcMDRegisterResponse_POP_Status(struct zxwsf_di_SvcMDRegisterResponse_s* x);
struct zx_elem_s* zxwsf_di_SvcMDRegisterResponse_POP_SvcMDID(struct zxwsf_di_SvcMDRegisterResponse_s* x);
struct zxwsf_di_Keys_s* zxwsf_di_SvcMDRegisterResponse_POP_Keys(struct zxwsf_di_SvcMDRegisterResponse_s* x);
void zxwsf_di_SvcMDRegisterResponse_PUSH_Status(struct zxwsf_di_SvcMDRegisterResponse_s* x, struct zxwsf_lu_Status_s* y);
void zxwsf_di_SvcMDRegisterResponse_PUSH_SvcMDID(struct zxwsf_di_SvcMDRegisterResponse_s* x, struct zx_elem_s* y);
void zxwsf_di_SvcMDRegisterResponse_PUSH_Keys(struct zxwsf_di_SvcMDRegisterResponse_s* x, struct zxwsf_di_Keys_s* y);
void zxwsf_di_SvcMDRegisterResponse_PUT_Status(struct zxwsf_di_SvcMDRegisterResponse_s* x, int n, struct zxwsf_lu_Status_s* y);
void zxwsf_di_SvcMDRegisterResponse_PUT_SvcMDID(struct zxwsf_di_SvcMDRegisterResponse_s* x, int n, struct zx_elem_s* y);
void zxwsf_di_SvcMDRegisterResponse_PUT_Keys(struct zxwsf_di_SvcMDRegisterResponse_s* x, int n, struct zxwsf_di_Keys_s* y);
void zxwsf_di_SvcMDRegisterResponse_ADD_Status(struct zxwsf_di_SvcMDRegisterResponse_s* x, int n, struct zxwsf_lu_Status_s* z);
void zxwsf_di_SvcMDRegisterResponse_ADD_SvcMDID(struct zxwsf_di_SvcMDRegisterResponse_s* x, int n, struct zx_elem_s* z);
void zxwsf_di_SvcMDRegisterResponse_ADD_Keys(struct zxwsf_di_SvcMDRegisterResponse_s* x, int n, struct zxwsf_di_Keys_s* z);
void zxwsf_di_SvcMDRegisterResponse_DEL_Status(struct zxwsf_di_SvcMDRegisterResponse_s* x, int n);
void zxwsf_di_SvcMDRegisterResponse_DEL_SvcMDID(struct zxwsf_di_SvcMDRegisterResponse_s* x, int n);
void zxwsf_di_SvcMDRegisterResponse_DEL_Keys(struct zxwsf_di_SvcMDRegisterResponse_s* x, int n);
void zxwsf_di_SvcMDRegisterResponse_REV_Status(struct zxwsf_di_SvcMDRegisterResponse_s* x);
void zxwsf_di_SvcMDRegisterResponse_REV_SvcMDID(struct zxwsf_di_SvcMDRegisterResponse_s* x);
void zxwsf_di_SvcMDRegisterResponse_REV_Keys(struct zxwsf_di_SvcMDRegisterResponse_s* x);

/* -------------------------- di_SvcMDReplace -------------------------- */
/* refby( zxwsf_dise_Body_s ) */
#ifndef zxwsf_di_SvcMDReplace_EXT
#define zxwsf_di_SvcMDReplace_EXT
#endif

struct zxwsf_di_SvcMDReplace_s* zxwsf_DEC_di_SvcMDReplace(struct zx_ctx* c);
struct zxwsf_di_SvcMDReplace_s* zxwsf_NEW_di_SvcMDReplace(struct zx_ctx* c);
struct zxwsf_di_SvcMDReplace_s* zxwsf_DEEP_CLONE_di_SvcMDReplace(struct zx_ctx* c, struct zxwsf_di_SvcMDReplace_s* x, int dup_strs);
void zxwsf_DUP_STRS_di_SvcMDReplace(struct zx_ctx* c, struct zxwsf_di_SvcMDReplace_s* x);
void zxwsf_FREE_di_SvcMDReplace(struct zx_ctx* c, struct zxwsf_di_SvcMDReplace_s* x, int free_strs);
int zxwsf_WALK_SO_di_SvcMDReplace(struct zx_ctx* c, struct zxwsf_di_SvcMDReplace_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di_SvcMDReplace(struct zx_ctx* c, struct zxwsf_di_SvcMDReplace_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di_SvcMDReplace(struct zxwsf_di_SvcMDReplace_s* x);
char* zxwsf_ENC_SO_di_SvcMDReplace(struct zxwsf_di_SvcMDReplace_s* x, char* p);
char* zxwsf_ENC_WO_di_SvcMDReplace(struct zxwsf_di_SvcMDReplace_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDReplace(struct zx_ctx* c, struct zxwsf_di_SvcMDReplace_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDReplace(struct zx_ctx* c, struct zxwsf_di_SvcMDReplace_s* x);

struct zxwsf_di_SvcMDReplace_s {
  ZX_ELEM_EXT
  zxwsf_di_SvcMDReplace_EXT
  struct zxwsf_di_SvcMD_s* SvcMD;	/* {1,-1} nada */
};

struct zxwsf_di_SvcMD_s* zxwsf_di_SvcMDReplace_GET_SvcMD(struct zxwsf_di_SvcMDReplace_s* x, int n);
int zxwsf_di_SvcMDReplace_NUM_SvcMD(struct zxwsf_di_SvcMDReplace_s* x);
struct zxwsf_di_SvcMD_s* zxwsf_di_SvcMDReplace_POP_SvcMD(struct zxwsf_di_SvcMDReplace_s* x);
void zxwsf_di_SvcMDReplace_PUSH_SvcMD(struct zxwsf_di_SvcMDReplace_s* x, struct zxwsf_di_SvcMD_s* y);
void zxwsf_di_SvcMDReplace_PUT_SvcMD(struct zxwsf_di_SvcMDReplace_s* x, int n, struct zxwsf_di_SvcMD_s* y);
void zxwsf_di_SvcMDReplace_ADD_SvcMD(struct zxwsf_di_SvcMDReplace_s* x, int n, struct zxwsf_di_SvcMD_s* z);
void zxwsf_di_SvcMDReplace_DEL_SvcMD(struct zxwsf_di_SvcMDReplace_s* x, int n);
void zxwsf_di_SvcMDReplace_REV_SvcMD(struct zxwsf_di_SvcMDReplace_s* x);

/* -------------------------- di_SvcMDReplaceResponse -------------------------- */
/* refby( zxwsf_dise_Body_s ) */
#ifndef zxwsf_di_SvcMDReplaceResponse_EXT
#define zxwsf_di_SvcMDReplaceResponse_EXT
#endif

struct zxwsf_di_SvcMDReplaceResponse_s* zxwsf_DEC_di_SvcMDReplaceResponse(struct zx_ctx* c);
struct zxwsf_di_SvcMDReplaceResponse_s* zxwsf_NEW_di_SvcMDReplaceResponse(struct zx_ctx* c);
struct zxwsf_di_SvcMDReplaceResponse_s* zxwsf_DEEP_CLONE_di_SvcMDReplaceResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDReplaceResponse_s* x, int dup_strs);
void zxwsf_DUP_STRS_di_SvcMDReplaceResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDReplaceResponse_s* x);
void zxwsf_FREE_di_SvcMDReplaceResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDReplaceResponse_s* x, int free_strs);
int zxwsf_WALK_SO_di_SvcMDReplaceResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDReplaceResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_di_SvcMDReplaceResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDReplaceResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_di_SvcMDReplaceResponse(struct zxwsf_di_SvcMDReplaceResponse_s* x);
char* zxwsf_ENC_SO_di_SvcMDReplaceResponse(struct zxwsf_di_SvcMDReplaceResponse_s* x, char* p);
char* zxwsf_ENC_WO_di_SvcMDReplaceResponse(struct zxwsf_di_SvcMDReplaceResponse_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_di_SvcMDReplaceResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDReplaceResponse_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_di_SvcMDReplaceResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDReplaceResponse_s* x);

struct zxwsf_di_SvcMDReplaceResponse_s {
  ZX_ELEM_EXT
  zxwsf_di_SvcMDReplaceResponse_EXT
  struct zxwsf_lu_Status_s* Status;	/* {1,1} nada */
};

struct zxwsf_lu_Status_s* zxwsf_di_SvcMDReplaceResponse_GET_Status(struct zxwsf_di_SvcMDReplaceResponse_s* x, int n);
int zxwsf_di_SvcMDReplaceResponse_NUM_Status(struct zxwsf_di_SvcMDReplaceResponse_s* x);
struct zxwsf_lu_Status_s* zxwsf_di_SvcMDReplaceResponse_POP_Status(struct zxwsf_di_SvcMDReplaceResponse_s* x);
void zxwsf_di_SvcMDReplaceResponse_PUSH_Status(struct zxwsf_di_SvcMDReplaceResponse_s* x, struct zxwsf_lu_Status_s* y);
void zxwsf_di_SvcMDReplaceResponse_PUT_Status(struct zxwsf_di_SvcMDReplaceResponse_s* x, int n, struct zxwsf_lu_Status_s* y);
void zxwsf_di_SvcMDReplaceResponse_ADD_Status(struct zxwsf_di_SvcMDReplaceResponse_s* x, int n, struct zxwsf_lu_Status_s* z);
void zxwsf_di_SvcMDReplaceResponse_DEL_Status(struct zxwsf_di_SvcMDReplaceResponse_s* x, int n);
void zxwsf_di_SvcMDReplaceResponse_REV_Status(struct zxwsf_di_SvcMDReplaceResponse_s* x);

/* -------------------------- dise_Body -------------------------- */
/* refby( zxwsf_dise_Envelope_s ) */
#ifndef zxwsf_dise_Body_EXT
#define zxwsf_dise_Body_EXT
#endif

struct zxwsf_dise_Body_s* zxwsf_DEC_dise_Body(struct zx_ctx* c);
struct zxwsf_dise_Body_s* zxwsf_NEW_dise_Body(struct zx_ctx* c);
struct zxwsf_dise_Body_s* zxwsf_DEEP_CLONE_dise_Body(struct zx_ctx* c, struct zxwsf_dise_Body_s* x, int dup_strs);
void zxwsf_DUP_STRS_dise_Body(struct zx_ctx* c, struct zxwsf_dise_Body_s* x);
void zxwsf_FREE_dise_Body(struct zx_ctx* c, struct zxwsf_dise_Body_s* x, int free_strs);
int zxwsf_WALK_SO_dise_Body(struct zx_ctx* c, struct zxwsf_dise_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_dise_Body(struct zx_ctx* c, struct zxwsf_dise_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_dise_Body(struct zxwsf_dise_Body_s* x);
char* zxwsf_ENC_SO_dise_Body(struct zxwsf_dise_Body_s* x, char* p);
char* zxwsf_ENC_WO_dise_Body(struct zxwsf_dise_Body_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_dise_Body(struct zx_ctx* c, struct zxwsf_dise_Body_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_dise_Body(struct zx_ctx* c, struct zxwsf_dise_Body_s* x);

struct zxwsf_dise_Body_s {
  ZX_ELEM_EXT
  zxwsf_dise_Body_EXT
  struct zxwsf_di_SvcMDAssociationAdd_s* SvcMDAssociationAdd;	/* {0,1} nada */
  struct zxwsf_di_SvcMDAssociationAddResponse_s* SvcMDAssociationAddResponse;	/* {0,1} nada */
  struct zxwsf_di_SvcMDAssociationDelete_s* SvcMDAssociationDelete;	/* {0,1} nada */
  struct zxwsf_di_SvcMDAssociationDeleteResponse_s* SvcMDAssociationDeleteResponse;	/* {0,1} nada */
  struct zxwsf_di_SvcMDAssociationQuery_s* SvcMDAssociationQuery;	/* {0,1} nada */
  struct zxwsf_di_SvcMDAssociationQueryResponse_s* SvcMDAssociationQueryResponse;	/* {0,1} nada */
  struct zxwsf_di_SvcMDRegister_s* SvcMDRegister;	/* {0,1} nada */
  struct zxwsf_di_SvcMDRegisterResponse_s* SvcMDRegisterResponse;	/* {0,1} nada */
  struct zxwsf_di_SvcMDDelete_s* SvcMDDelete;	/* {0,1} nada */
  struct zxwsf_di_SvcMDDeleteResponse_s* SvcMDDeleteResponse;	/* {0,1} nada */
  struct zxwsf_di_SvcMDQuery_s* SvcMDQuery;	/* {0,1} nada */
  struct zxwsf_di_SvcMDQueryResponse_s* SvcMDQueryResponse;	/* {0,1} nada */
  struct zxwsf_di_SvcMDReplace_s* SvcMDReplace;	/* {0,1} nada */
  struct zxwsf_di_SvcMDReplaceResponse_s* SvcMDReplaceResponse;	/* {0,1} nada */
  struct zxwsf_dise_Fault_s* Fault;	/* {0,1} nada */
};

struct zxwsf_di_SvcMDAssociationAdd_s* zxwsf_dise_Body_GET_SvcMDAssociationAdd(struct zxwsf_dise_Body_s* x, int n);
struct zxwsf_di_SvcMDAssociationAddResponse_s* zxwsf_dise_Body_GET_SvcMDAssociationAddResponse(struct zxwsf_dise_Body_s* x, int n);
struct zxwsf_di_SvcMDAssociationDelete_s* zxwsf_dise_Body_GET_SvcMDAssociationDelete(struct zxwsf_dise_Body_s* x, int n);
struct zxwsf_di_SvcMDAssociationDeleteResponse_s* zxwsf_dise_Body_GET_SvcMDAssociationDeleteResponse(struct zxwsf_dise_Body_s* x, int n);
struct zxwsf_di_SvcMDAssociationQuery_s* zxwsf_dise_Body_GET_SvcMDAssociationQuery(struct zxwsf_dise_Body_s* x, int n);
struct zxwsf_di_SvcMDAssociationQueryResponse_s* zxwsf_dise_Body_GET_SvcMDAssociationQueryResponse(struct zxwsf_dise_Body_s* x, int n);
struct zxwsf_di_SvcMDRegister_s* zxwsf_dise_Body_GET_SvcMDRegister(struct zxwsf_dise_Body_s* x, int n);
struct zxwsf_di_SvcMDRegisterResponse_s* zxwsf_dise_Body_GET_SvcMDRegisterResponse(struct zxwsf_dise_Body_s* x, int n);
struct zxwsf_di_SvcMDDelete_s* zxwsf_dise_Body_GET_SvcMDDelete(struct zxwsf_dise_Body_s* x, int n);
struct zxwsf_di_SvcMDDeleteResponse_s* zxwsf_dise_Body_GET_SvcMDDeleteResponse(struct zxwsf_dise_Body_s* x, int n);
struct zxwsf_di_SvcMDQuery_s* zxwsf_dise_Body_GET_SvcMDQuery(struct zxwsf_dise_Body_s* x, int n);
struct zxwsf_di_SvcMDQueryResponse_s* zxwsf_dise_Body_GET_SvcMDQueryResponse(struct zxwsf_dise_Body_s* x, int n);
struct zxwsf_di_SvcMDReplace_s* zxwsf_dise_Body_GET_SvcMDReplace(struct zxwsf_dise_Body_s* x, int n);
struct zxwsf_di_SvcMDReplaceResponse_s* zxwsf_dise_Body_GET_SvcMDReplaceResponse(struct zxwsf_dise_Body_s* x, int n);
struct zxwsf_dise_Fault_s* zxwsf_dise_Body_GET_Fault(struct zxwsf_dise_Body_s* x, int n);
int zxwsf_dise_Body_NUM_SvcMDAssociationAdd(struct zxwsf_dise_Body_s* x);
int zxwsf_dise_Body_NUM_SvcMDAssociationAddResponse(struct zxwsf_dise_Body_s* x);
int zxwsf_dise_Body_NUM_SvcMDAssociationDelete(struct zxwsf_dise_Body_s* x);
int zxwsf_dise_Body_NUM_SvcMDAssociationDeleteResponse(struct zxwsf_dise_Body_s* x);
int zxwsf_dise_Body_NUM_SvcMDAssociationQuery(struct zxwsf_dise_Body_s* x);
int zxwsf_dise_Body_NUM_SvcMDAssociationQueryResponse(struct zxwsf_dise_Body_s* x);
int zxwsf_dise_Body_NUM_SvcMDRegister(struct zxwsf_dise_Body_s* x);
int zxwsf_dise_Body_NUM_SvcMDRegisterResponse(struct zxwsf_dise_Body_s* x);
int zxwsf_dise_Body_NUM_SvcMDDelete(struct zxwsf_dise_Body_s* x);
int zxwsf_dise_Body_NUM_SvcMDDeleteResponse(struct zxwsf_dise_Body_s* x);
int zxwsf_dise_Body_NUM_SvcMDQuery(struct zxwsf_dise_Body_s* x);
int zxwsf_dise_Body_NUM_SvcMDQueryResponse(struct zxwsf_dise_Body_s* x);
int zxwsf_dise_Body_NUM_SvcMDReplace(struct zxwsf_dise_Body_s* x);
int zxwsf_dise_Body_NUM_SvcMDReplaceResponse(struct zxwsf_dise_Body_s* x);
int zxwsf_dise_Body_NUM_Fault(struct zxwsf_dise_Body_s* x);
struct zxwsf_di_SvcMDAssociationAdd_s* zxwsf_dise_Body_POP_SvcMDAssociationAdd(struct zxwsf_dise_Body_s* x);
struct zxwsf_di_SvcMDAssociationAddResponse_s* zxwsf_dise_Body_POP_SvcMDAssociationAddResponse(struct zxwsf_dise_Body_s* x);
struct zxwsf_di_SvcMDAssociationDelete_s* zxwsf_dise_Body_POP_SvcMDAssociationDelete(struct zxwsf_dise_Body_s* x);
struct zxwsf_di_SvcMDAssociationDeleteResponse_s* zxwsf_dise_Body_POP_SvcMDAssociationDeleteResponse(struct zxwsf_dise_Body_s* x);
struct zxwsf_di_SvcMDAssociationQuery_s* zxwsf_dise_Body_POP_SvcMDAssociationQuery(struct zxwsf_dise_Body_s* x);
struct zxwsf_di_SvcMDAssociationQueryResponse_s* zxwsf_dise_Body_POP_SvcMDAssociationQueryResponse(struct zxwsf_dise_Body_s* x);
struct zxwsf_di_SvcMDRegister_s* zxwsf_dise_Body_POP_SvcMDRegister(struct zxwsf_dise_Body_s* x);
struct zxwsf_di_SvcMDRegisterResponse_s* zxwsf_dise_Body_POP_SvcMDRegisterResponse(struct zxwsf_dise_Body_s* x);
struct zxwsf_di_SvcMDDelete_s* zxwsf_dise_Body_POP_SvcMDDelete(struct zxwsf_dise_Body_s* x);
struct zxwsf_di_SvcMDDeleteResponse_s* zxwsf_dise_Body_POP_SvcMDDeleteResponse(struct zxwsf_dise_Body_s* x);
struct zxwsf_di_SvcMDQuery_s* zxwsf_dise_Body_POP_SvcMDQuery(struct zxwsf_dise_Body_s* x);
struct zxwsf_di_SvcMDQueryResponse_s* zxwsf_dise_Body_POP_SvcMDQueryResponse(struct zxwsf_dise_Body_s* x);
struct zxwsf_di_SvcMDReplace_s* zxwsf_dise_Body_POP_SvcMDReplace(struct zxwsf_dise_Body_s* x);
struct zxwsf_di_SvcMDReplaceResponse_s* zxwsf_dise_Body_POP_SvcMDReplaceResponse(struct zxwsf_dise_Body_s* x);
struct zxwsf_dise_Fault_s* zxwsf_dise_Body_POP_Fault(struct zxwsf_dise_Body_s* x);
void zxwsf_dise_Body_PUSH_SvcMDAssociationAdd(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDAssociationAdd_s* y);
void zxwsf_dise_Body_PUSH_SvcMDAssociationAddResponse(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDAssociationAddResponse_s* y);
void zxwsf_dise_Body_PUSH_SvcMDAssociationDelete(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDAssociationDelete_s* y);
void zxwsf_dise_Body_PUSH_SvcMDAssociationDeleteResponse(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDAssociationDeleteResponse_s* y);
void zxwsf_dise_Body_PUSH_SvcMDAssociationQuery(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDAssociationQuery_s* y);
void zxwsf_dise_Body_PUSH_SvcMDAssociationQueryResponse(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDAssociationQueryResponse_s* y);
void zxwsf_dise_Body_PUSH_SvcMDRegister(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDRegister_s* y);
void zxwsf_dise_Body_PUSH_SvcMDRegisterResponse(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDRegisterResponse_s* y);
void zxwsf_dise_Body_PUSH_SvcMDDelete(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDDelete_s* y);
void zxwsf_dise_Body_PUSH_SvcMDDeleteResponse(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDDeleteResponse_s* y);
void zxwsf_dise_Body_PUSH_SvcMDQuery(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDQuery_s* y);
void zxwsf_dise_Body_PUSH_SvcMDQueryResponse(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDQueryResponse_s* y);
void zxwsf_dise_Body_PUSH_SvcMDReplace(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDReplace_s* y);
void zxwsf_dise_Body_PUSH_SvcMDReplaceResponse(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDReplaceResponse_s* y);
void zxwsf_dise_Body_PUSH_Fault(struct zxwsf_dise_Body_s* x, struct zxwsf_dise_Fault_s* y);
void zxwsf_dise_Body_PUT_SvcMDAssociationAdd(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDAssociationAdd_s* y);
void zxwsf_dise_Body_PUT_SvcMDAssociationAddResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDAssociationAddResponse_s* y);
void zxwsf_dise_Body_PUT_SvcMDAssociationDelete(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDAssociationDelete_s* y);
void zxwsf_dise_Body_PUT_SvcMDAssociationDeleteResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDAssociationDeleteResponse_s* y);
void zxwsf_dise_Body_PUT_SvcMDAssociationQuery(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDAssociationQuery_s* y);
void zxwsf_dise_Body_PUT_SvcMDAssociationQueryResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDAssociationQueryResponse_s* y);
void zxwsf_dise_Body_PUT_SvcMDRegister(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDRegister_s* y);
void zxwsf_dise_Body_PUT_SvcMDRegisterResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDRegisterResponse_s* y);
void zxwsf_dise_Body_PUT_SvcMDDelete(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDDelete_s* y);
void zxwsf_dise_Body_PUT_SvcMDDeleteResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDDeleteResponse_s* y);
void zxwsf_dise_Body_PUT_SvcMDQuery(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDQuery_s* y);
void zxwsf_dise_Body_PUT_SvcMDQueryResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDQueryResponse_s* y);
void zxwsf_dise_Body_PUT_SvcMDReplace(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDReplace_s* y);
void zxwsf_dise_Body_PUT_SvcMDReplaceResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDReplaceResponse_s* y);
void zxwsf_dise_Body_PUT_Fault(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_dise_Fault_s* y);
void zxwsf_dise_Body_ADD_SvcMDAssociationAdd(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDAssociationAdd_s* z);
void zxwsf_dise_Body_ADD_SvcMDAssociationAddResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDAssociationAddResponse_s* z);
void zxwsf_dise_Body_ADD_SvcMDAssociationDelete(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDAssociationDelete_s* z);
void zxwsf_dise_Body_ADD_SvcMDAssociationDeleteResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDAssociationDeleteResponse_s* z);
void zxwsf_dise_Body_ADD_SvcMDAssociationQuery(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDAssociationQuery_s* z);
void zxwsf_dise_Body_ADD_SvcMDAssociationQueryResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDAssociationQueryResponse_s* z);
void zxwsf_dise_Body_ADD_SvcMDRegister(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDRegister_s* z);
void zxwsf_dise_Body_ADD_SvcMDRegisterResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDRegisterResponse_s* z);
void zxwsf_dise_Body_ADD_SvcMDDelete(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDDelete_s* z);
void zxwsf_dise_Body_ADD_SvcMDDeleteResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDDeleteResponse_s* z);
void zxwsf_dise_Body_ADD_SvcMDQuery(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDQuery_s* z);
void zxwsf_dise_Body_ADD_SvcMDQueryResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDQueryResponse_s* z);
void zxwsf_dise_Body_ADD_SvcMDReplace(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDReplace_s* z);
void zxwsf_dise_Body_ADD_SvcMDReplaceResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDReplaceResponse_s* z);
void zxwsf_dise_Body_ADD_Fault(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_dise_Fault_s* z);
void zxwsf_dise_Body_DEL_SvcMDAssociationAdd(struct zxwsf_dise_Body_s* x, int n);
void zxwsf_dise_Body_DEL_SvcMDAssociationAddResponse(struct zxwsf_dise_Body_s* x, int n);
void zxwsf_dise_Body_DEL_SvcMDAssociationDelete(struct zxwsf_dise_Body_s* x, int n);
void zxwsf_dise_Body_DEL_SvcMDAssociationDeleteResponse(struct zxwsf_dise_Body_s* x, int n);
void zxwsf_dise_Body_DEL_SvcMDAssociationQuery(struct zxwsf_dise_Body_s* x, int n);
void zxwsf_dise_Body_DEL_SvcMDAssociationQueryResponse(struct zxwsf_dise_Body_s* x, int n);
void zxwsf_dise_Body_DEL_SvcMDRegister(struct zxwsf_dise_Body_s* x, int n);
void zxwsf_dise_Body_DEL_SvcMDRegisterResponse(struct zxwsf_dise_Body_s* x, int n);
void zxwsf_dise_Body_DEL_SvcMDDelete(struct zxwsf_dise_Body_s* x, int n);
void zxwsf_dise_Body_DEL_SvcMDDeleteResponse(struct zxwsf_dise_Body_s* x, int n);
void zxwsf_dise_Body_DEL_SvcMDQuery(struct zxwsf_dise_Body_s* x, int n);
void zxwsf_dise_Body_DEL_SvcMDQueryResponse(struct zxwsf_dise_Body_s* x, int n);
void zxwsf_dise_Body_DEL_SvcMDReplace(struct zxwsf_dise_Body_s* x, int n);
void zxwsf_dise_Body_DEL_SvcMDReplaceResponse(struct zxwsf_dise_Body_s* x, int n);
void zxwsf_dise_Body_DEL_Fault(struct zxwsf_dise_Body_s* x, int n);
void zxwsf_dise_Body_REV_SvcMDAssociationAdd(struct zxwsf_dise_Body_s* x);
void zxwsf_dise_Body_REV_SvcMDAssociationAddResponse(struct zxwsf_dise_Body_s* x);
void zxwsf_dise_Body_REV_SvcMDAssociationDelete(struct zxwsf_dise_Body_s* x);
void zxwsf_dise_Body_REV_SvcMDAssociationDeleteResponse(struct zxwsf_dise_Body_s* x);
void zxwsf_dise_Body_REV_SvcMDAssociationQuery(struct zxwsf_dise_Body_s* x);
void zxwsf_dise_Body_REV_SvcMDAssociationQueryResponse(struct zxwsf_dise_Body_s* x);
void zxwsf_dise_Body_REV_SvcMDRegister(struct zxwsf_dise_Body_s* x);
void zxwsf_dise_Body_REV_SvcMDRegisterResponse(struct zxwsf_dise_Body_s* x);
void zxwsf_dise_Body_REV_SvcMDDelete(struct zxwsf_dise_Body_s* x);
void zxwsf_dise_Body_REV_SvcMDDeleteResponse(struct zxwsf_dise_Body_s* x);
void zxwsf_dise_Body_REV_SvcMDQuery(struct zxwsf_dise_Body_s* x);
void zxwsf_dise_Body_REV_SvcMDQueryResponse(struct zxwsf_dise_Body_s* x);
void zxwsf_dise_Body_REV_SvcMDReplace(struct zxwsf_dise_Body_s* x);
void zxwsf_dise_Body_REV_SvcMDReplaceResponse(struct zxwsf_dise_Body_s* x);
void zxwsf_dise_Body_REV_Fault(struct zxwsf_dise_Body_s* x);

/* -------------------------- dise_Envelope -------------------------- */
/* refby( ) */
#ifndef zxwsf_dise_Envelope_EXT
#define zxwsf_dise_Envelope_EXT
#endif

struct zxwsf_dise_Envelope_s* zxwsf_DEC_dise_Envelope(struct zx_ctx* c);
struct zxwsf_dise_Envelope_s* zxwsf_NEW_dise_Envelope(struct zx_ctx* c);
struct zxwsf_dise_Envelope_s* zxwsf_DEEP_CLONE_dise_Envelope(struct zx_ctx* c, struct zxwsf_dise_Envelope_s* x, int dup_strs);
void zxwsf_DUP_STRS_dise_Envelope(struct zx_ctx* c, struct zxwsf_dise_Envelope_s* x);
void zxwsf_FREE_dise_Envelope(struct zx_ctx* c, struct zxwsf_dise_Envelope_s* x, int free_strs);
int zxwsf_WALK_SO_dise_Envelope(struct zx_ctx* c, struct zxwsf_dise_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_dise_Envelope(struct zx_ctx* c, struct zxwsf_dise_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_dise_Envelope(struct zxwsf_dise_Envelope_s* x);
char* zxwsf_ENC_SO_dise_Envelope(struct zxwsf_dise_Envelope_s* x, char* p);
char* zxwsf_ENC_WO_dise_Envelope(struct zxwsf_dise_Envelope_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_dise_Envelope(struct zx_ctx* c, struct zxwsf_dise_Envelope_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_dise_Envelope(struct zx_ctx* c, struct zxwsf_dise_Envelope_s* x);

struct zxwsf_dise_Envelope_s {
  ZX_ELEM_EXT
  zxwsf_dise_Envelope_EXT
  struct zxwsf_dise_Header_s* Header;	/* {0,1} nada */
  struct zxwsf_dise_Body_s* Body;	/* {1,1} nada */
};

struct zxwsf_dise_Header_s* zxwsf_dise_Envelope_GET_Header(struct zxwsf_dise_Envelope_s* x, int n);
struct zxwsf_dise_Body_s* zxwsf_dise_Envelope_GET_Body(struct zxwsf_dise_Envelope_s* x, int n);
int zxwsf_dise_Envelope_NUM_Header(struct zxwsf_dise_Envelope_s* x);
int zxwsf_dise_Envelope_NUM_Body(struct zxwsf_dise_Envelope_s* x);
struct zxwsf_dise_Header_s* zxwsf_dise_Envelope_POP_Header(struct zxwsf_dise_Envelope_s* x);
struct zxwsf_dise_Body_s* zxwsf_dise_Envelope_POP_Body(struct zxwsf_dise_Envelope_s* x);
void zxwsf_dise_Envelope_PUSH_Header(struct zxwsf_dise_Envelope_s* x, struct zxwsf_dise_Header_s* y);
void zxwsf_dise_Envelope_PUSH_Body(struct zxwsf_dise_Envelope_s* x, struct zxwsf_dise_Body_s* y);
void zxwsf_dise_Envelope_PUT_Header(struct zxwsf_dise_Envelope_s* x, int n, struct zxwsf_dise_Header_s* y);
void zxwsf_dise_Envelope_PUT_Body(struct zxwsf_dise_Envelope_s* x, int n, struct zxwsf_dise_Body_s* y);
void zxwsf_dise_Envelope_ADD_Header(struct zxwsf_dise_Envelope_s* x, int n, struct zxwsf_dise_Header_s* z);
void zxwsf_dise_Envelope_ADD_Body(struct zxwsf_dise_Envelope_s* x, int n, struct zxwsf_dise_Body_s* z);
void zxwsf_dise_Envelope_DEL_Header(struct zxwsf_dise_Envelope_s* x, int n);
void zxwsf_dise_Envelope_DEL_Body(struct zxwsf_dise_Envelope_s* x, int n);
void zxwsf_dise_Envelope_REV_Header(struct zxwsf_dise_Envelope_s* x);
void zxwsf_dise_Envelope_REV_Body(struct zxwsf_dise_Envelope_s* x);

/* -------------------------- dise_Fault -------------------------- */
/* refby( zxwsf_dise_Body_s ) */
#ifndef zxwsf_dise_Fault_EXT
#define zxwsf_dise_Fault_EXT
#endif

struct zxwsf_dise_Fault_s* zxwsf_DEC_dise_Fault(struct zx_ctx* c);
struct zxwsf_dise_Fault_s* zxwsf_NEW_dise_Fault(struct zx_ctx* c);
struct zxwsf_dise_Fault_s* zxwsf_DEEP_CLONE_dise_Fault(struct zx_ctx* c, struct zxwsf_dise_Fault_s* x, int dup_strs);
void zxwsf_DUP_STRS_dise_Fault(struct zx_ctx* c, struct zxwsf_dise_Fault_s* x);
void zxwsf_FREE_dise_Fault(struct zx_ctx* c, struct zxwsf_dise_Fault_s* x, int free_strs);
int zxwsf_WALK_SO_dise_Fault(struct zx_ctx* c, struct zxwsf_dise_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_dise_Fault(struct zx_ctx* c, struct zxwsf_dise_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_dise_Fault(struct zxwsf_dise_Fault_s* x);
char* zxwsf_ENC_SO_dise_Fault(struct zxwsf_dise_Fault_s* x, char* p);
char* zxwsf_ENC_WO_dise_Fault(struct zxwsf_dise_Fault_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_dise_Fault(struct zx_ctx* c, struct zxwsf_dise_Fault_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_dise_Fault(struct zx_ctx* c, struct zxwsf_dise_Fault_s* x);

struct zxwsf_dise_Fault_s {
  ZX_ELEM_EXT
  zxwsf_dise_Fault_EXT
  struct zx_elem_s* faultcode;	/* {1,1} xs:QName */
  struct zx_elem_s* faultstring;	/* {1,1} xs:string */
  struct zx_elem_s* faultactor;	/* {0,1} xs:anyURI */
  struct zxwsf_dise_detail_s* detail;	/* {0,1}  */
};

struct zx_elem_s* zxwsf_dise_Fault_GET_faultcode(struct zxwsf_dise_Fault_s* x, int n);
struct zx_elem_s* zxwsf_dise_Fault_GET_faultstring(struct zxwsf_dise_Fault_s* x, int n);
struct zx_elem_s* zxwsf_dise_Fault_GET_faultactor(struct zxwsf_dise_Fault_s* x, int n);
struct zxwsf_dise_detail_s* zxwsf_dise_Fault_GET_detail(struct zxwsf_dise_Fault_s* x, int n);
int zxwsf_dise_Fault_NUM_faultcode(struct zxwsf_dise_Fault_s* x);
int zxwsf_dise_Fault_NUM_faultstring(struct zxwsf_dise_Fault_s* x);
int zxwsf_dise_Fault_NUM_faultactor(struct zxwsf_dise_Fault_s* x);
int zxwsf_dise_Fault_NUM_detail(struct zxwsf_dise_Fault_s* x);
struct zx_elem_s* zxwsf_dise_Fault_POP_faultcode(struct zxwsf_dise_Fault_s* x);
struct zx_elem_s* zxwsf_dise_Fault_POP_faultstring(struct zxwsf_dise_Fault_s* x);
struct zx_elem_s* zxwsf_dise_Fault_POP_faultactor(struct zxwsf_dise_Fault_s* x);
struct zxwsf_dise_detail_s* zxwsf_dise_Fault_POP_detail(struct zxwsf_dise_Fault_s* x);
void zxwsf_dise_Fault_PUSH_faultcode(struct zxwsf_dise_Fault_s* x, struct zx_elem_s* y);
void zxwsf_dise_Fault_PUSH_faultstring(struct zxwsf_dise_Fault_s* x, struct zx_elem_s* y);
void zxwsf_dise_Fault_PUSH_faultactor(struct zxwsf_dise_Fault_s* x, struct zx_elem_s* y);
void zxwsf_dise_Fault_PUSH_detail(struct zxwsf_dise_Fault_s* x, struct zxwsf_dise_detail_s* y);
void zxwsf_dise_Fault_PUT_faultcode(struct zxwsf_dise_Fault_s* x, int n, struct zx_elem_s* y);
void zxwsf_dise_Fault_PUT_faultstring(struct zxwsf_dise_Fault_s* x, int n, struct zx_elem_s* y);
void zxwsf_dise_Fault_PUT_faultactor(struct zxwsf_dise_Fault_s* x, int n, struct zx_elem_s* y);
void zxwsf_dise_Fault_PUT_detail(struct zxwsf_dise_Fault_s* x, int n, struct zxwsf_dise_detail_s* y);
void zxwsf_dise_Fault_ADD_faultcode(struct zxwsf_dise_Fault_s* x, int n, struct zx_elem_s* z);
void zxwsf_dise_Fault_ADD_faultstring(struct zxwsf_dise_Fault_s* x, int n, struct zx_elem_s* z);
void zxwsf_dise_Fault_ADD_faultactor(struct zxwsf_dise_Fault_s* x, int n, struct zx_elem_s* z);
void zxwsf_dise_Fault_ADD_detail(struct zxwsf_dise_Fault_s* x, int n, struct zxwsf_dise_detail_s* z);
void zxwsf_dise_Fault_DEL_faultcode(struct zxwsf_dise_Fault_s* x, int n);
void zxwsf_dise_Fault_DEL_faultstring(struct zxwsf_dise_Fault_s* x, int n);
void zxwsf_dise_Fault_DEL_faultactor(struct zxwsf_dise_Fault_s* x, int n);
void zxwsf_dise_Fault_DEL_detail(struct zxwsf_dise_Fault_s* x, int n);
void zxwsf_dise_Fault_REV_faultcode(struct zxwsf_dise_Fault_s* x);
void zxwsf_dise_Fault_REV_faultstring(struct zxwsf_dise_Fault_s* x);
void zxwsf_dise_Fault_REV_faultactor(struct zxwsf_dise_Fault_s* x);
void zxwsf_dise_Fault_REV_detail(struct zxwsf_dise_Fault_s* x);

/* -------------------------- dise_Header -------------------------- */
/* refby( zxwsf_dise_Envelope_s ) */
#ifndef zxwsf_dise_Header_EXT
#define zxwsf_dise_Header_EXT
#endif

struct zxwsf_dise_Header_s* zxwsf_DEC_dise_Header(struct zx_ctx* c);
struct zxwsf_dise_Header_s* zxwsf_NEW_dise_Header(struct zx_ctx* c);
struct zxwsf_dise_Header_s* zxwsf_DEEP_CLONE_dise_Header(struct zx_ctx* c, struct zxwsf_dise_Header_s* x, int dup_strs);
void zxwsf_DUP_STRS_dise_Header(struct zx_ctx* c, struct zxwsf_dise_Header_s* x);
void zxwsf_FREE_dise_Header(struct zx_ctx* c, struct zxwsf_dise_Header_s* x, int free_strs);
int zxwsf_WALK_SO_dise_Header(struct zx_ctx* c, struct zxwsf_dise_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_dise_Header(struct zx_ctx* c, struct zxwsf_dise_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_dise_Header(struct zxwsf_dise_Header_s* x);
char* zxwsf_ENC_SO_dise_Header(struct zxwsf_dise_Header_s* x, char* p);
char* zxwsf_ENC_WO_dise_Header(struct zxwsf_dise_Header_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_dise_Header(struct zx_ctx* c, struct zxwsf_dise_Header_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_dise_Header(struct zx_ctx* c, struct zxwsf_dise_Header_s* x);

struct zxwsf_dise_Header_s {
  ZX_ELEM_EXT
  zxwsf_dise_Header_EXT
  struct zxwsf_a_MessageID_s* MessageID;	/* {0,1} nada */
  struct zxwsf_a_RelatesTo_s* RelatesTo;	/* {0,1} nada */
  struct zxwsf_a_ReplyTo_s* ReplyTo;	/* {0,1} nada */
  struct zxwsf_a_From_s* From;	/* {0,1} nada */
  struct zxwsf_a_FaultTo_s* FaultTo;	/* {0,1} nada */
  struct zxwsf_a_To_s* To;	/* {0,1} nada */
  struct zxwsf_a_Action_s* Action;	/* {0,1} nada */
  struct zxwsf_sbf_Framework_s* Framework;	/* {0,1} nada */
  struct zxwsf_b_Framework_s* b_Framework;	/* {0,1} nada */
  struct zxwsf_b_Sender_s* Sender;	/* {0,1} nada */
  struct zxwsf_b_CredentialsContext_s* CredentialsContext;	/* {0,1} nada */
  struct zxwsf_b_EndpointUpdate_s* EndpointUpdate;	/* {0,1} nada */
  struct zx_elem_s* Timeout;	/* {0,1} TimeoutType */
  struct zxwsf_b_ProcessingContext_s* ProcessingContext;	/* {0,1} nada */
  struct zxwsf_b_ApplicationEPR_s* ApplicationEPR;	/* {0,1} nada */
  struct zxwsf_b_RedirectRequest_s* RedirectRequest;	/* {0,1}  */
};

struct zxwsf_a_MessageID_s* zxwsf_dise_Header_GET_MessageID(struct zxwsf_dise_Header_s* x, int n);
struct zxwsf_a_RelatesTo_s* zxwsf_dise_Header_GET_RelatesTo(struct zxwsf_dise_Header_s* x, int n);
struct zxwsf_a_ReplyTo_s* zxwsf_dise_Header_GET_ReplyTo(struct zxwsf_dise_Header_s* x, int n);
struct zxwsf_a_From_s* zxwsf_dise_Header_GET_From(struct zxwsf_dise_Header_s* x, int n);
struct zxwsf_a_FaultTo_s* zxwsf_dise_Header_GET_FaultTo(struct zxwsf_dise_Header_s* x, int n);
struct zxwsf_a_To_s* zxwsf_dise_Header_GET_To(struct zxwsf_dise_Header_s* x, int n);
struct zxwsf_a_Action_s* zxwsf_dise_Header_GET_Action(struct zxwsf_dise_Header_s* x, int n);
struct zxwsf_sbf_Framework_s* zxwsf_dise_Header_GET_Framework(struct zxwsf_dise_Header_s* x, int n);
struct zxwsf_b_Framework_s* zxwsf_dise_Header_GET_b_Framework(struct zxwsf_dise_Header_s* x, int n);
struct zxwsf_b_Sender_s* zxwsf_dise_Header_GET_Sender(struct zxwsf_dise_Header_s* x, int n);
struct zxwsf_b_CredentialsContext_s* zxwsf_dise_Header_GET_CredentialsContext(struct zxwsf_dise_Header_s* x, int n);
struct zxwsf_b_EndpointUpdate_s* zxwsf_dise_Header_GET_EndpointUpdate(struct zxwsf_dise_Header_s* x, int n);
struct zx_elem_s* zxwsf_dise_Header_GET_Timeout(struct zxwsf_dise_Header_s* x, int n);
struct zxwsf_b_ProcessingContext_s* zxwsf_dise_Header_GET_ProcessingContext(struct zxwsf_dise_Header_s* x, int n);
struct zxwsf_b_ApplicationEPR_s* zxwsf_dise_Header_GET_ApplicationEPR(struct zxwsf_dise_Header_s* x, int n);
struct zxwsf_b_RedirectRequest_s* zxwsf_dise_Header_GET_RedirectRequest(struct zxwsf_dise_Header_s* x, int n);
int zxwsf_dise_Header_NUM_MessageID(struct zxwsf_dise_Header_s* x);
int zxwsf_dise_Header_NUM_RelatesTo(struct zxwsf_dise_Header_s* x);
int zxwsf_dise_Header_NUM_ReplyTo(struct zxwsf_dise_Header_s* x);
int zxwsf_dise_Header_NUM_From(struct zxwsf_dise_Header_s* x);
int zxwsf_dise_Header_NUM_FaultTo(struct zxwsf_dise_Header_s* x);
int zxwsf_dise_Header_NUM_To(struct zxwsf_dise_Header_s* x);
int zxwsf_dise_Header_NUM_Action(struct zxwsf_dise_Header_s* x);
int zxwsf_dise_Header_NUM_Framework(struct zxwsf_dise_Header_s* x);
int zxwsf_dise_Header_NUM_b_Framework(struct zxwsf_dise_Header_s* x);
int zxwsf_dise_Header_NUM_Sender(struct zxwsf_dise_Header_s* x);
int zxwsf_dise_Header_NUM_CredentialsContext(struct zxwsf_dise_Header_s* x);
int zxwsf_dise_Header_NUM_EndpointUpdate(struct zxwsf_dise_Header_s* x);
int zxwsf_dise_Header_NUM_Timeout(struct zxwsf_dise_Header_s* x);
int zxwsf_dise_Header_NUM_ProcessingContext(struct zxwsf_dise_Header_s* x);
int zxwsf_dise_Header_NUM_ApplicationEPR(struct zxwsf_dise_Header_s* x);
int zxwsf_dise_Header_NUM_RedirectRequest(struct zxwsf_dise_Header_s* x);
struct zxwsf_a_MessageID_s* zxwsf_dise_Header_POP_MessageID(struct zxwsf_dise_Header_s* x);
struct zxwsf_a_RelatesTo_s* zxwsf_dise_Header_POP_RelatesTo(struct zxwsf_dise_Header_s* x);
struct zxwsf_a_ReplyTo_s* zxwsf_dise_Header_POP_ReplyTo(struct zxwsf_dise_Header_s* x);
struct zxwsf_a_From_s* zxwsf_dise_Header_POP_From(struct zxwsf_dise_Header_s* x);
struct zxwsf_a_FaultTo_s* zxwsf_dise_Header_POP_FaultTo(struct zxwsf_dise_Header_s* x);
struct zxwsf_a_To_s* zxwsf_dise_Header_POP_To(struct zxwsf_dise_Header_s* x);
struct zxwsf_a_Action_s* zxwsf_dise_Header_POP_Action(struct zxwsf_dise_Header_s* x);
struct zxwsf_sbf_Framework_s* zxwsf_dise_Header_POP_Framework(struct zxwsf_dise_Header_s* x);
struct zxwsf_b_Framework_s* zxwsf_dise_Header_POP_b_Framework(struct zxwsf_dise_Header_s* x);
struct zxwsf_b_Sender_s* zxwsf_dise_Header_POP_Sender(struct zxwsf_dise_Header_s* x);
struct zxwsf_b_CredentialsContext_s* zxwsf_dise_Header_POP_CredentialsContext(struct zxwsf_dise_Header_s* x);
struct zxwsf_b_EndpointUpdate_s* zxwsf_dise_Header_POP_EndpointUpdate(struct zxwsf_dise_Header_s* x);
struct zx_elem_s* zxwsf_dise_Header_POP_Timeout(struct zxwsf_dise_Header_s* x);
struct zxwsf_b_ProcessingContext_s* zxwsf_dise_Header_POP_ProcessingContext(struct zxwsf_dise_Header_s* x);
struct zxwsf_b_ApplicationEPR_s* zxwsf_dise_Header_POP_ApplicationEPR(struct zxwsf_dise_Header_s* x);
struct zxwsf_b_RedirectRequest_s* zxwsf_dise_Header_POP_RedirectRequest(struct zxwsf_dise_Header_s* x);
void zxwsf_dise_Header_PUSH_MessageID(struct zxwsf_dise_Header_s* x, struct zxwsf_a_MessageID_s* y);
void zxwsf_dise_Header_PUSH_RelatesTo(struct zxwsf_dise_Header_s* x, struct zxwsf_a_RelatesTo_s* y);
void zxwsf_dise_Header_PUSH_ReplyTo(struct zxwsf_dise_Header_s* x, struct zxwsf_a_ReplyTo_s* y);
void zxwsf_dise_Header_PUSH_From(struct zxwsf_dise_Header_s* x, struct zxwsf_a_From_s* y);
void zxwsf_dise_Header_PUSH_FaultTo(struct zxwsf_dise_Header_s* x, struct zxwsf_a_FaultTo_s* y);
void zxwsf_dise_Header_PUSH_To(struct zxwsf_dise_Header_s* x, struct zxwsf_a_To_s* y);
void zxwsf_dise_Header_PUSH_Action(struct zxwsf_dise_Header_s* x, struct zxwsf_a_Action_s* y);
void zxwsf_dise_Header_PUSH_Framework(struct zxwsf_dise_Header_s* x, struct zxwsf_sbf_Framework_s* y);
void zxwsf_dise_Header_PUSH_b_Framework(struct zxwsf_dise_Header_s* x, struct zxwsf_b_Framework_s* y);
void zxwsf_dise_Header_PUSH_Sender(struct zxwsf_dise_Header_s* x, struct zxwsf_b_Sender_s* y);
void zxwsf_dise_Header_PUSH_CredentialsContext(struct zxwsf_dise_Header_s* x, struct zxwsf_b_CredentialsContext_s* y);
void zxwsf_dise_Header_PUSH_EndpointUpdate(struct zxwsf_dise_Header_s* x, struct zxwsf_b_EndpointUpdate_s* y);
void zxwsf_dise_Header_PUSH_Timeout(struct zxwsf_dise_Header_s* x, struct zx_elem_s* y);
void zxwsf_dise_Header_PUSH_ProcessingContext(struct zxwsf_dise_Header_s* x, struct zxwsf_b_ProcessingContext_s* y);
void zxwsf_dise_Header_PUSH_ApplicationEPR(struct zxwsf_dise_Header_s* x, struct zxwsf_b_ApplicationEPR_s* y);
void zxwsf_dise_Header_PUSH_RedirectRequest(struct zxwsf_dise_Header_s* x, struct zxwsf_b_RedirectRequest_s* y);
void zxwsf_dise_Header_PUT_MessageID(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_MessageID_s* y);
void zxwsf_dise_Header_PUT_RelatesTo(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_RelatesTo_s* y);
void zxwsf_dise_Header_PUT_ReplyTo(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_ReplyTo_s* y);
void zxwsf_dise_Header_PUT_From(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_From_s* y);
void zxwsf_dise_Header_PUT_FaultTo(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_FaultTo_s* y);
void zxwsf_dise_Header_PUT_To(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_To_s* y);
void zxwsf_dise_Header_PUT_Action(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_Action_s* y);
void zxwsf_dise_Header_PUT_Framework(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_sbf_Framework_s* y);
void zxwsf_dise_Header_PUT_b_Framework(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_Framework_s* y);
void zxwsf_dise_Header_PUT_Sender(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_Sender_s* y);
void zxwsf_dise_Header_PUT_CredentialsContext(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_CredentialsContext_s* y);
void zxwsf_dise_Header_PUT_EndpointUpdate(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_EndpointUpdate_s* y);
void zxwsf_dise_Header_PUT_Timeout(struct zxwsf_dise_Header_s* x, int n, struct zx_elem_s* y);
void zxwsf_dise_Header_PUT_ProcessingContext(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_ProcessingContext_s* y);
void zxwsf_dise_Header_PUT_ApplicationEPR(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_ApplicationEPR_s* y);
void zxwsf_dise_Header_PUT_RedirectRequest(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_RedirectRequest_s* y);
void zxwsf_dise_Header_ADD_MessageID(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_MessageID_s* z);
void zxwsf_dise_Header_ADD_RelatesTo(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_RelatesTo_s* z);
void zxwsf_dise_Header_ADD_ReplyTo(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_ReplyTo_s* z);
void zxwsf_dise_Header_ADD_From(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_From_s* z);
void zxwsf_dise_Header_ADD_FaultTo(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_FaultTo_s* z);
void zxwsf_dise_Header_ADD_To(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_To_s* z);
void zxwsf_dise_Header_ADD_Action(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_Action_s* z);
void zxwsf_dise_Header_ADD_Framework(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_sbf_Framework_s* z);
void zxwsf_dise_Header_ADD_b_Framework(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_Framework_s* z);
void zxwsf_dise_Header_ADD_Sender(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_Sender_s* z);
void zxwsf_dise_Header_ADD_CredentialsContext(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_CredentialsContext_s* z);
void zxwsf_dise_Header_ADD_EndpointUpdate(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_EndpointUpdate_s* z);
void zxwsf_dise_Header_ADD_Timeout(struct zxwsf_dise_Header_s* x, int n, struct zx_elem_s* z);
void zxwsf_dise_Header_ADD_ProcessingContext(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_ProcessingContext_s* z);
void zxwsf_dise_Header_ADD_ApplicationEPR(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_ApplicationEPR_s* z);
void zxwsf_dise_Header_ADD_RedirectRequest(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_RedirectRequest_s* z);
void zxwsf_dise_Header_DEL_MessageID(struct zxwsf_dise_Header_s* x, int n);
void zxwsf_dise_Header_DEL_RelatesTo(struct zxwsf_dise_Header_s* x, int n);
void zxwsf_dise_Header_DEL_ReplyTo(struct zxwsf_dise_Header_s* x, int n);
void zxwsf_dise_Header_DEL_From(struct zxwsf_dise_Header_s* x, int n);
void zxwsf_dise_Header_DEL_FaultTo(struct zxwsf_dise_Header_s* x, int n);
void zxwsf_dise_Header_DEL_To(struct zxwsf_dise_Header_s* x, int n);
void zxwsf_dise_Header_DEL_Action(struct zxwsf_dise_Header_s* x, int n);
void zxwsf_dise_Header_DEL_Framework(struct zxwsf_dise_Header_s* x, int n);
void zxwsf_dise_Header_DEL_b_Framework(struct zxwsf_dise_Header_s* x, int n);
void zxwsf_dise_Header_DEL_Sender(struct zxwsf_dise_Header_s* x, int n);
void zxwsf_dise_Header_DEL_CredentialsContext(struct zxwsf_dise_Header_s* x, int n);
void zxwsf_dise_Header_DEL_EndpointUpdate(struct zxwsf_dise_Header_s* x, int n);
void zxwsf_dise_Header_DEL_Timeout(struct zxwsf_dise_Header_s* x, int n);
void zxwsf_dise_Header_DEL_ProcessingContext(struct zxwsf_dise_Header_s* x, int n);
void zxwsf_dise_Header_DEL_ApplicationEPR(struct zxwsf_dise_Header_s* x, int n);
void zxwsf_dise_Header_DEL_RedirectRequest(struct zxwsf_dise_Header_s* x, int n);
void zxwsf_dise_Header_REV_MessageID(struct zxwsf_dise_Header_s* x);
void zxwsf_dise_Header_REV_RelatesTo(struct zxwsf_dise_Header_s* x);
void zxwsf_dise_Header_REV_ReplyTo(struct zxwsf_dise_Header_s* x);
void zxwsf_dise_Header_REV_From(struct zxwsf_dise_Header_s* x);
void zxwsf_dise_Header_REV_FaultTo(struct zxwsf_dise_Header_s* x);
void zxwsf_dise_Header_REV_To(struct zxwsf_dise_Header_s* x);
void zxwsf_dise_Header_REV_Action(struct zxwsf_dise_Header_s* x);
void zxwsf_dise_Header_REV_Framework(struct zxwsf_dise_Header_s* x);
void zxwsf_dise_Header_REV_b_Framework(struct zxwsf_dise_Header_s* x);
void zxwsf_dise_Header_REV_Sender(struct zxwsf_dise_Header_s* x);
void zxwsf_dise_Header_REV_CredentialsContext(struct zxwsf_dise_Header_s* x);
void zxwsf_dise_Header_REV_EndpointUpdate(struct zxwsf_dise_Header_s* x);
void zxwsf_dise_Header_REV_Timeout(struct zxwsf_dise_Header_s* x);
void zxwsf_dise_Header_REV_ProcessingContext(struct zxwsf_dise_Header_s* x);
void zxwsf_dise_Header_REV_ApplicationEPR(struct zxwsf_dise_Header_s* x);
void zxwsf_dise_Header_REV_RedirectRequest(struct zxwsf_dise_Header_s* x);

/* -------------------------- dise_detail -------------------------- */
/* refby( zxwsf_dise_Fault_s ) */
#ifndef zxwsf_dise_detail_EXT
#define zxwsf_dise_detail_EXT
#endif

struct zxwsf_dise_detail_s* zxwsf_DEC_dise_detail(struct zx_ctx* c);
struct zxwsf_dise_detail_s* zxwsf_NEW_dise_detail(struct zx_ctx* c);
struct zxwsf_dise_detail_s* zxwsf_DEEP_CLONE_dise_detail(struct zx_ctx* c, struct zxwsf_dise_detail_s* x, int dup_strs);
void zxwsf_DUP_STRS_dise_detail(struct zx_ctx* c, struct zxwsf_dise_detail_s* x);
void zxwsf_FREE_dise_detail(struct zx_ctx* c, struct zxwsf_dise_detail_s* x, int free_strs);
int zxwsf_WALK_SO_dise_detail(struct zx_ctx* c, struct zxwsf_dise_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_dise_detail(struct zx_ctx* c, struct zxwsf_dise_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_dise_detail(struct zxwsf_dise_detail_s* x);
char* zxwsf_ENC_SO_dise_detail(struct zxwsf_dise_detail_s* x, char* p);
char* zxwsf_ENC_WO_dise_detail(struct zxwsf_dise_detail_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_dise_detail(struct zx_ctx* c, struct zxwsf_dise_detail_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_dise_detail(struct zx_ctx* c, struct zxwsf_dise_detail_s* x);

struct zxwsf_dise_detail_s {
  ZX_ELEM_EXT
  zxwsf_dise_detail_EXT
};


/* -------------------------- e_Body -------------------------- */
/* refby( zxwsf_e_Envelope_s ) */
#ifndef zxwsf_e_Body_EXT
#define zxwsf_e_Body_EXT
#endif

struct zxwsf_e_Body_s* zxwsf_DEC_e_Body(struct zx_ctx* c);
struct zxwsf_e_Body_s* zxwsf_NEW_e_Body(struct zx_ctx* c);
struct zxwsf_e_Body_s* zxwsf_DEEP_CLONE_e_Body(struct zx_ctx* c, struct zxwsf_e_Body_s* x, int dup_strs);
void zxwsf_DUP_STRS_e_Body(struct zx_ctx* c, struct zxwsf_e_Body_s* x);
void zxwsf_FREE_e_Body(struct zx_ctx* c, struct zxwsf_e_Body_s* x, int free_strs);
int zxwsf_WALK_SO_e_Body(struct zx_ctx* c, struct zxwsf_e_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_e_Body(struct zx_ctx* c, struct zxwsf_e_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_e_Body(struct zxwsf_e_Body_s* x);
char* zxwsf_ENC_SO_e_Body(struct zxwsf_e_Body_s* x, char* p);
char* zxwsf_ENC_WO_e_Body(struct zxwsf_e_Body_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_e_Body(struct zx_ctx* c, struct zxwsf_e_Body_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_e_Body(struct zx_ctx* c, struct zxwsf_e_Body_s* x);

struct zxwsf_e_Body_s {
  ZX_ELEM_EXT
  zxwsf_e_Body_EXT
  struct zxwsf_di_Query_s* Query;	/* {0,1} nada */
  struct zxwsf_di_QueryResponse_s* QueryResponse;	/* {0,1} nada */
  struct zxwsf_di12_Query_s* di12_Query;	/* {0,1} nada */
  struct zxwsf_di12_QueryResponse_s* di12_QueryResponse;	/* {0,1} nada */
  struct zxwsf_di12_Modify_s* Modify;	/* {0,1} nada */
  struct zxwsf_di12_ModifyResponse_s* ModifyResponse;	/* {0,1} nada */
  struct zxwsf_e_Fault_s* Fault;	/* {0,1} nada */
};

struct zxwsf_di_Query_s* zxwsf_e_Body_GET_Query(struct zxwsf_e_Body_s* x, int n);
struct zxwsf_di_QueryResponse_s* zxwsf_e_Body_GET_QueryResponse(struct zxwsf_e_Body_s* x, int n);
struct zxwsf_di12_Query_s* zxwsf_e_Body_GET_di12_Query(struct zxwsf_e_Body_s* x, int n);
struct zxwsf_di12_QueryResponse_s* zxwsf_e_Body_GET_di12_QueryResponse(struct zxwsf_e_Body_s* x, int n);
struct zxwsf_di12_Modify_s* zxwsf_e_Body_GET_Modify(struct zxwsf_e_Body_s* x, int n);
struct zxwsf_di12_ModifyResponse_s* zxwsf_e_Body_GET_ModifyResponse(struct zxwsf_e_Body_s* x, int n);
struct zxwsf_e_Fault_s* zxwsf_e_Body_GET_Fault(struct zxwsf_e_Body_s* x, int n);
int zxwsf_e_Body_NUM_Query(struct zxwsf_e_Body_s* x);
int zxwsf_e_Body_NUM_QueryResponse(struct zxwsf_e_Body_s* x);
int zxwsf_e_Body_NUM_di12_Query(struct zxwsf_e_Body_s* x);
int zxwsf_e_Body_NUM_di12_QueryResponse(struct zxwsf_e_Body_s* x);
int zxwsf_e_Body_NUM_Modify(struct zxwsf_e_Body_s* x);
int zxwsf_e_Body_NUM_ModifyResponse(struct zxwsf_e_Body_s* x);
int zxwsf_e_Body_NUM_Fault(struct zxwsf_e_Body_s* x);
struct zxwsf_di_Query_s* zxwsf_e_Body_POP_Query(struct zxwsf_e_Body_s* x);
struct zxwsf_di_QueryResponse_s* zxwsf_e_Body_POP_QueryResponse(struct zxwsf_e_Body_s* x);
struct zxwsf_di12_Query_s* zxwsf_e_Body_POP_di12_Query(struct zxwsf_e_Body_s* x);
struct zxwsf_di12_QueryResponse_s* zxwsf_e_Body_POP_di12_QueryResponse(struct zxwsf_e_Body_s* x);
struct zxwsf_di12_Modify_s* zxwsf_e_Body_POP_Modify(struct zxwsf_e_Body_s* x);
struct zxwsf_di12_ModifyResponse_s* zxwsf_e_Body_POP_ModifyResponse(struct zxwsf_e_Body_s* x);
struct zxwsf_e_Fault_s* zxwsf_e_Body_POP_Fault(struct zxwsf_e_Body_s* x);
void zxwsf_e_Body_PUSH_Query(struct zxwsf_e_Body_s* x, struct zxwsf_di_Query_s* y);
void zxwsf_e_Body_PUSH_QueryResponse(struct zxwsf_e_Body_s* x, struct zxwsf_di_QueryResponse_s* y);
void zxwsf_e_Body_PUSH_di12_Query(struct zxwsf_e_Body_s* x, struct zxwsf_di12_Query_s* y);
void zxwsf_e_Body_PUSH_di12_QueryResponse(struct zxwsf_e_Body_s* x, struct zxwsf_di12_QueryResponse_s* y);
void zxwsf_e_Body_PUSH_Modify(struct zxwsf_e_Body_s* x, struct zxwsf_di12_Modify_s* y);
void zxwsf_e_Body_PUSH_ModifyResponse(struct zxwsf_e_Body_s* x, struct zxwsf_di12_ModifyResponse_s* y);
void zxwsf_e_Body_PUSH_Fault(struct zxwsf_e_Body_s* x, struct zxwsf_e_Fault_s* y);
void zxwsf_e_Body_PUT_Query(struct zxwsf_e_Body_s* x, int n, struct zxwsf_di_Query_s* y);
void zxwsf_e_Body_PUT_QueryResponse(struct zxwsf_e_Body_s* x, int n, struct zxwsf_di_QueryResponse_s* y);
void zxwsf_e_Body_PUT_di12_Query(struct zxwsf_e_Body_s* x, int n, struct zxwsf_di12_Query_s* y);
void zxwsf_e_Body_PUT_di12_QueryResponse(struct zxwsf_e_Body_s* x, int n, struct zxwsf_di12_QueryResponse_s* y);
void zxwsf_e_Body_PUT_Modify(struct zxwsf_e_Body_s* x, int n, struct zxwsf_di12_Modify_s* y);
void zxwsf_e_Body_PUT_ModifyResponse(struct zxwsf_e_Body_s* x, int n, struct zxwsf_di12_ModifyResponse_s* y);
void zxwsf_e_Body_PUT_Fault(struct zxwsf_e_Body_s* x, int n, struct zxwsf_e_Fault_s* y);
void zxwsf_e_Body_ADD_Query(struct zxwsf_e_Body_s* x, int n, struct zxwsf_di_Query_s* z);
void zxwsf_e_Body_ADD_QueryResponse(struct zxwsf_e_Body_s* x, int n, struct zxwsf_di_QueryResponse_s* z);
void zxwsf_e_Body_ADD_di12_Query(struct zxwsf_e_Body_s* x, int n, struct zxwsf_di12_Query_s* z);
void zxwsf_e_Body_ADD_di12_QueryResponse(struct zxwsf_e_Body_s* x, int n, struct zxwsf_di12_QueryResponse_s* z);
void zxwsf_e_Body_ADD_Modify(struct zxwsf_e_Body_s* x, int n, struct zxwsf_di12_Modify_s* z);
void zxwsf_e_Body_ADD_ModifyResponse(struct zxwsf_e_Body_s* x, int n, struct zxwsf_di12_ModifyResponse_s* z);
void zxwsf_e_Body_ADD_Fault(struct zxwsf_e_Body_s* x, int n, struct zxwsf_e_Fault_s* z);
void zxwsf_e_Body_DEL_Query(struct zxwsf_e_Body_s* x, int n);
void zxwsf_e_Body_DEL_QueryResponse(struct zxwsf_e_Body_s* x, int n);
void zxwsf_e_Body_DEL_di12_Query(struct zxwsf_e_Body_s* x, int n);
void zxwsf_e_Body_DEL_di12_QueryResponse(struct zxwsf_e_Body_s* x, int n);
void zxwsf_e_Body_DEL_Modify(struct zxwsf_e_Body_s* x, int n);
void zxwsf_e_Body_DEL_ModifyResponse(struct zxwsf_e_Body_s* x, int n);
void zxwsf_e_Body_DEL_Fault(struct zxwsf_e_Body_s* x, int n);
void zxwsf_e_Body_REV_Query(struct zxwsf_e_Body_s* x);
void zxwsf_e_Body_REV_QueryResponse(struct zxwsf_e_Body_s* x);
void zxwsf_e_Body_REV_di12_Query(struct zxwsf_e_Body_s* x);
void zxwsf_e_Body_REV_di12_QueryResponse(struct zxwsf_e_Body_s* x);
void zxwsf_e_Body_REV_Modify(struct zxwsf_e_Body_s* x);
void zxwsf_e_Body_REV_ModifyResponse(struct zxwsf_e_Body_s* x);
void zxwsf_e_Body_REV_Fault(struct zxwsf_e_Body_s* x);

/* -------------------------- e_Envelope -------------------------- */
/* refby( ) */
#ifndef zxwsf_e_Envelope_EXT
#define zxwsf_e_Envelope_EXT
#endif

struct zxwsf_e_Envelope_s* zxwsf_DEC_e_Envelope(struct zx_ctx* c);
struct zxwsf_e_Envelope_s* zxwsf_NEW_e_Envelope(struct zx_ctx* c);
struct zxwsf_e_Envelope_s* zxwsf_DEEP_CLONE_e_Envelope(struct zx_ctx* c, struct zxwsf_e_Envelope_s* x, int dup_strs);
void zxwsf_DUP_STRS_e_Envelope(struct zx_ctx* c, struct zxwsf_e_Envelope_s* x);
void zxwsf_FREE_e_Envelope(struct zx_ctx* c, struct zxwsf_e_Envelope_s* x, int free_strs);
int zxwsf_WALK_SO_e_Envelope(struct zx_ctx* c, struct zxwsf_e_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_e_Envelope(struct zx_ctx* c, struct zxwsf_e_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_e_Envelope(struct zxwsf_e_Envelope_s* x);
char* zxwsf_ENC_SO_e_Envelope(struct zxwsf_e_Envelope_s* x, char* p);
char* zxwsf_ENC_WO_e_Envelope(struct zxwsf_e_Envelope_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_e_Envelope(struct zx_ctx* c, struct zxwsf_e_Envelope_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_e_Envelope(struct zx_ctx* c, struct zxwsf_e_Envelope_s* x);

struct zxwsf_e_Envelope_s {
  ZX_ELEM_EXT
  zxwsf_e_Envelope_EXT
  struct zxwsf_e_Header_s* Header;	/* {0,1} nada */
  struct zxwsf_e_Body_s* Body;	/* {1,1} nada */
};

struct zxwsf_e_Header_s* zxwsf_e_Envelope_GET_Header(struct zxwsf_e_Envelope_s* x, int n);
struct zxwsf_e_Body_s* zxwsf_e_Envelope_GET_Body(struct zxwsf_e_Envelope_s* x, int n);
int zxwsf_e_Envelope_NUM_Header(struct zxwsf_e_Envelope_s* x);
int zxwsf_e_Envelope_NUM_Body(struct zxwsf_e_Envelope_s* x);
struct zxwsf_e_Header_s* zxwsf_e_Envelope_POP_Header(struct zxwsf_e_Envelope_s* x);
struct zxwsf_e_Body_s* zxwsf_e_Envelope_POP_Body(struct zxwsf_e_Envelope_s* x);
void zxwsf_e_Envelope_PUSH_Header(struct zxwsf_e_Envelope_s* x, struct zxwsf_e_Header_s* y);
void zxwsf_e_Envelope_PUSH_Body(struct zxwsf_e_Envelope_s* x, struct zxwsf_e_Body_s* y);
void zxwsf_e_Envelope_PUT_Header(struct zxwsf_e_Envelope_s* x, int n, struct zxwsf_e_Header_s* y);
void zxwsf_e_Envelope_PUT_Body(struct zxwsf_e_Envelope_s* x, int n, struct zxwsf_e_Body_s* y);
void zxwsf_e_Envelope_ADD_Header(struct zxwsf_e_Envelope_s* x, int n, struct zxwsf_e_Header_s* z);
void zxwsf_e_Envelope_ADD_Body(struct zxwsf_e_Envelope_s* x, int n, struct zxwsf_e_Body_s* z);
void zxwsf_e_Envelope_DEL_Header(struct zxwsf_e_Envelope_s* x, int n);
void zxwsf_e_Envelope_DEL_Body(struct zxwsf_e_Envelope_s* x, int n);
void zxwsf_e_Envelope_REV_Header(struct zxwsf_e_Envelope_s* x);
void zxwsf_e_Envelope_REV_Body(struct zxwsf_e_Envelope_s* x);

/* -------------------------- e_Fault -------------------------- */
/* refby( zxwsf_e_Body_s ) */
#ifndef zxwsf_e_Fault_EXT
#define zxwsf_e_Fault_EXT
#endif

struct zxwsf_e_Fault_s* zxwsf_DEC_e_Fault(struct zx_ctx* c);
struct zxwsf_e_Fault_s* zxwsf_NEW_e_Fault(struct zx_ctx* c);
struct zxwsf_e_Fault_s* zxwsf_DEEP_CLONE_e_Fault(struct zx_ctx* c, struct zxwsf_e_Fault_s* x, int dup_strs);
void zxwsf_DUP_STRS_e_Fault(struct zx_ctx* c, struct zxwsf_e_Fault_s* x);
void zxwsf_FREE_e_Fault(struct zx_ctx* c, struct zxwsf_e_Fault_s* x, int free_strs);
int zxwsf_WALK_SO_e_Fault(struct zx_ctx* c, struct zxwsf_e_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_e_Fault(struct zx_ctx* c, struct zxwsf_e_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_e_Fault(struct zxwsf_e_Fault_s* x);
char* zxwsf_ENC_SO_e_Fault(struct zxwsf_e_Fault_s* x, char* p);
char* zxwsf_ENC_WO_e_Fault(struct zxwsf_e_Fault_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_e_Fault(struct zx_ctx* c, struct zxwsf_e_Fault_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_e_Fault(struct zx_ctx* c, struct zxwsf_e_Fault_s* x);

struct zxwsf_e_Fault_s {
  ZX_ELEM_EXT
  zxwsf_e_Fault_EXT
  struct zx_elem_s* faultcode;	/* {1,1} xs:QName */
  struct zx_elem_s* faultstring;	/* {1,1} xs:string */
  struct zx_elem_s* faultactor;	/* {0,1} xs:anyURI */
  struct zxwsf_e_detail_s* detail;	/* {0,1}  */
};

struct zx_elem_s* zxwsf_e_Fault_GET_faultcode(struct zxwsf_e_Fault_s* x, int n);
struct zx_elem_s* zxwsf_e_Fault_GET_faultstring(struct zxwsf_e_Fault_s* x, int n);
struct zx_elem_s* zxwsf_e_Fault_GET_faultactor(struct zxwsf_e_Fault_s* x, int n);
struct zxwsf_e_detail_s* zxwsf_e_Fault_GET_detail(struct zxwsf_e_Fault_s* x, int n);
int zxwsf_e_Fault_NUM_faultcode(struct zxwsf_e_Fault_s* x);
int zxwsf_e_Fault_NUM_faultstring(struct zxwsf_e_Fault_s* x);
int zxwsf_e_Fault_NUM_faultactor(struct zxwsf_e_Fault_s* x);
int zxwsf_e_Fault_NUM_detail(struct zxwsf_e_Fault_s* x);
struct zx_elem_s* zxwsf_e_Fault_POP_faultcode(struct zxwsf_e_Fault_s* x);
struct zx_elem_s* zxwsf_e_Fault_POP_faultstring(struct zxwsf_e_Fault_s* x);
struct zx_elem_s* zxwsf_e_Fault_POP_faultactor(struct zxwsf_e_Fault_s* x);
struct zxwsf_e_detail_s* zxwsf_e_Fault_POP_detail(struct zxwsf_e_Fault_s* x);
void zxwsf_e_Fault_PUSH_faultcode(struct zxwsf_e_Fault_s* x, struct zx_elem_s* y);
void zxwsf_e_Fault_PUSH_faultstring(struct zxwsf_e_Fault_s* x, struct zx_elem_s* y);
void zxwsf_e_Fault_PUSH_faultactor(struct zxwsf_e_Fault_s* x, struct zx_elem_s* y);
void zxwsf_e_Fault_PUSH_detail(struct zxwsf_e_Fault_s* x, struct zxwsf_e_detail_s* y);
void zxwsf_e_Fault_PUT_faultcode(struct zxwsf_e_Fault_s* x, int n, struct zx_elem_s* y);
void zxwsf_e_Fault_PUT_faultstring(struct zxwsf_e_Fault_s* x, int n, struct zx_elem_s* y);
void zxwsf_e_Fault_PUT_faultactor(struct zxwsf_e_Fault_s* x, int n, struct zx_elem_s* y);
void zxwsf_e_Fault_PUT_detail(struct zxwsf_e_Fault_s* x, int n, struct zxwsf_e_detail_s* y);
void zxwsf_e_Fault_ADD_faultcode(struct zxwsf_e_Fault_s* x, int n, struct zx_elem_s* z);
void zxwsf_e_Fault_ADD_faultstring(struct zxwsf_e_Fault_s* x, int n, struct zx_elem_s* z);
void zxwsf_e_Fault_ADD_faultactor(struct zxwsf_e_Fault_s* x, int n, struct zx_elem_s* z);
void zxwsf_e_Fault_ADD_detail(struct zxwsf_e_Fault_s* x, int n, struct zxwsf_e_detail_s* z);
void zxwsf_e_Fault_DEL_faultcode(struct zxwsf_e_Fault_s* x, int n);
void zxwsf_e_Fault_DEL_faultstring(struct zxwsf_e_Fault_s* x, int n);
void zxwsf_e_Fault_DEL_faultactor(struct zxwsf_e_Fault_s* x, int n);
void zxwsf_e_Fault_DEL_detail(struct zxwsf_e_Fault_s* x, int n);
void zxwsf_e_Fault_REV_faultcode(struct zxwsf_e_Fault_s* x);
void zxwsf_e_Fault_REV_faultstring(struct zxwsf_e_Fault_s* x);
void zxwsf_e_Fault_REV_faultactor(struct zxwsf_e_Fault_s* x);
void zxwsf_e_Fault_REV_detail(struct zxwsf_e_Fault_s* x);

/* -------------------------- e_Header -------------------------- */
/* refby( zxwsf_e_Envelope_s ) */
#ifndef zxwsf_e_Header_EXT
#define zxwsf_e_Header_EXT
#endif

struct zxwsf_e_Header_s* zxwsf_DEC_e_Header(struct zx_ctx* c);
struct zxwsf_e_Header_s* zxwsf_NEW_e_Header(struct zx_ctx* c);
struct zxwsf_e_Header_s* zxwsf_DEEP_CLONE_e_Header(struct zx_ctx* c, struct zxwsf_e_Header_s* x, int dup_strs);
void zxwsf_DUP_STRS_e_Header(struct zx_ctx* c, struct zxwsf_e_Header_s* x);
void zxwsf_FREE_e_Header(struct zx_ctx* c, struct zxwsf_e_Header_s* x, int free_strs);
int zxwsf_WALK_SO_e_Header(struct zx_ctx* c, struct zxwsf_e_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_e_Header(struct zx_ctx* c, struct zxwsf_e_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_e_Header(struct zxwsf_e_Header_s* x);
char* zxwsf_ENC_SO_e_Header(struct zxwsf_e_Header_s* x, char* p);
char* zxwsf_ENC_WO_e_Header(struct zxwsf_e_Header_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_e_Header(struct zx_ctx* c, struct zxwsf_e_Header_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_e_Header(struct zx_ctx* c, struct zxwsf_e_Header_s* x);

struct zxwsf_e_Header_s {
  ZX_ELEM_EXT
  zxwsf_e_Header_EXT
  struct zxwsf_a_MessageID_s* MessageID;	/* {0,1} nada */
  struct zxwsf_a_RelatesTo_s* RelatesTo;	/* {0,1} nada */
  struct zxwsf_a_ReplyTo_s* ReplyTo;	/* {0,1} nada */
  struct zxwsf_a_From_s* From;	/* {0,1} nada */
  struct zxwsf_a_FaultTo_s* FaultTo;	/* {0,1} nada */
  struct zxwsf_a_To_s* To;	/* {0,1} nada */
  struct zxwsf_a_Action_s* Action;	/* {0,1} nada */
  struct zxwsf_sbf_Framework_s* Framework;	/* {0,1} nada */
  struct zxwsf_b_Framework_s* b_Framework;	/* {0,1} nada */
  struct zxwsf_b_Sender_s* Sender;	/* {0,1} nada */
  struct zxwsf_b_TargetIdentity_s* TargetIdentity;	/* {0,1} nada */
  struct zxwsf_b_CredentialsContext_s* CredentialsContext;	/* {0,1} nada */
  struct zxwsf_b_EndpointUpdate_s* EndpointUpdate;	/* {0,1} nada */
  struct zx_elem_s* Timeout;	/* {0,1} TimeoutType */
  struct zxwsf_b_ProcessingContext_s* ProcessingContext;	/* {0,1} nada */
  struct zxwsf_b_Consent_s* Consent;	/* {0,1} nada */
  struct zxwsf_b_UsageDirective_s* UsageDirective;	/* {0,1} nada */
  struct zxwsf_b_ApplicationEPR_s* ApplicationEPR;	/* {0,1} nada */
  struct zxwsf_b_UserInteraction_s* UserInteraction;	/* {0,1} nada */
  struct zxwsf_b_RedirectRequest_s* RedirectRequest;	/* {0,1}  */
  struct zxwsf_b12_Correlation_s* Correlation;	/* {0,1} nada */
  struct zxwsf_b12_Provider_s* Provider;	/* {0,1} nada */
  struct zxwsf_b12_ProcessingContext_s* b12_ProcessingContext;	/* {0,1} nada */
  struct zxwsf_b12_Consent_s* b12_Consent;	/* {0,1} nada */
  struct zxwsf_b12_UsageDirective_s* b12_UsageDirective;	/* {0,1} nada */
};

struct zxwsf_a_MessageID_s* zxwsf_e_Header_GET_MessageID(struct zxwsf_e_Header_s* x, int n);
struct zxwsf_a_RelatesTo_s* zxwsf_e_Header_GET_RelatesTo(struct zxwsf_e_Header_s* x, int n);
struct zxwsf_a_ReplyTo_s* zxwsf_e_Header_GET_ReplyTo(struct zxwsf_e_Header_s* x, int n);
struct zxwsf_a_From_s* zxwsf_e_Header_GET_From(struct zxwsf_e_Header_s* x, int n);
struct zxwsf_a_FaultTo_s* zxwsf_e_Header_GET_FaultTo(struct zxwsf_e_Header_s* x, int n);
struct zxwsf_a_To_s* zxwsf_e_Header_GET_To(struct zxwsf_e_Header_s* x, int n);
struct zxwsf_a_Action_s* zxwsf_e_Header_GET_Action(struct zxwsf_e_Header_s* x, int n);
struct zxwsf_sbf_Framework_s* zxwsf_e_Header_GET_Framework(struct zxwsf_e_Header_s* x, int n);
struct zxwsf_b_Framework_s* zxwsf_e_Header_GET_b_Framework(struct zxwsf_e_Header_s* x, int n);
struct zxwsf_b_Sender_s* zxwsf_e_Header_GET_Sender(struct zxwsf_e_Header_s* x, int n);
struct zxwsf_b_TargetIdentity_s* zxwsf_e_Header_GET_TargetIdentity(struct zxwsf_e_Header_s* x, int n);
struct zxwsf_b_CredentialsContext_s* zxwsf_e_Header_GET_CredentialsContext(struct zxwsf_e_Header_s* x, int n);
struct zxwsf_b_EndpointUpdate_s* zxwsf_e_Header_GET_EndpointUpdate(struct zxwsf_e_Header_s* x, int n);
struct zx_elem_s* zxwsf_e_Header_GET_Timeout(struct zxwsf_e_Header_s* x, int n);
struct zxwsf_b_ProcessingContext_s* zxwsf_e_Header_GET_ProcessingContext(struct zxwsf_e_Header_s* x, int n);
struct zxwsf_b_Consent_s* zxwsf_e_Header_GET_Consent(struct zxwsf_e_Header_s* x, int n);
struct zxwsf_b_UsageDirective_s* zxwsf_e_Header_GET_UsageDirective(struct zxwsf_e_Header_s* x, int n);
struct zxwsf_b_ApplicationEPR_s* zxwsf_e_Header_GET_ApplicationEPR(struct zxwsf_e_Header_s* x, int n);
struct zxwsf_b_UserInteraction_s* zxwsf_e_Header_GET_UserInteraction(struct zxwsf_e_Header_s* x, int n);
struct zxwsf_b_RedirectRequest_s* zxwsf_e_Header_GET_RedirectRequest(struct zxwsf_e_Header_s* x, int n);
struct zxwsf_b12_Correlation_s* zxwsf_e_Header_GET_Correlation(struct zxwsf_e_Header_s* x, int n);
struct zxwsf_b12_Provider_s* zxwsf_e_Header_GET_Provider(struct zxwsf_e_Header_s* x, int n);
struct zxwsf_b12_ProcessingContext_s* zxwsf_e_Header_GET_b12_ProcessingContext(struct zxwsf_e_Header_s* x, int n);
struct zxwsf_b12_Consent_s* zxwsf_e_Header_GET_b12_Consent(struct zxwsf_e_Header_s* x, int n);
struct zxwsf_b12_UsageDirective_s* zxwsf_e_Header_GET_b12_UsageDirective(struct zxwsf_e_Header_s* x, int n);
int zxwsf_e_Header_NUM_MessageID(struct zxwsf_e_Header_s* x);
int zxwsf_e_Header_NUM_RelatesTo(struct zxwsf_e_Header_s* x);
int zxwsf_e_Header_NUM_ReplyTo(struct zxwsf_e_Header_s* x);
int zxwsf_e_Header_NUM_From(struct zxwsf_e_Header_s* x);
int zxwsf_e_Header_NUM_FaultTo(struct zxwsf_e_Header_s* x);
int zxwsf_e_Header_NUM_To(struct zxwsf_e_Header_s* x);
int zxwsf_e_Header_NUM_Action(struct zxwsf_e_Header_s* x);
int zxwsf_e_Header_NUM_Framework(struct zxwsf_e_Header_s* x);
int zxwsf_e_Header_NUM_b_Framework(struct zxwsf_e_Header_s* x);
int zxwsf_e_Header_NUM_Sender(struct zxwsf_e_Header_s* x);
int zxwsf_e_Header_NUM_TargetIdentity(struct zxwsf_e_Header_s* x);
int zxwsf_e_Header_NUM_CredentialsContext(struct zxwsf_e_Header_s* x);
int zxwsf_e_Header_NUM_EndpointUpdate(struct zxwsf_e_Header_s* x);
int zxwsf_e_Header_NUM_Timeout(struct zxwsf_e_Header_s* x);
int zxwsf_e_Header_NUM_ProcessingContext(struct zxwsf_e_Header_s* x);
int zxwsf_e_Header_NUM_Consent(struct zxwsf_e_Header_s* x);
int zxwsf_e_Header_NUM_UsageDirective(struct zxwsf_e_Header_s* x);
int zxwsf_e_Header_NUM_ApplicationEPR(struct zxwsf_e_Header_s* x);
int zxwsf_e_Header_NUM_UserInteraction(struct zxwsf_e_Header_s* x);
int zxwsf_e_Header_NUM_RedirectRequest(struct zxwsf_e_Header_s* x);
int zxwsf_e_Header_NUM_Correlation(struct zxwsf_e_Header_s* x);
int zxwsf_e_Header_NUM_Provider(struct zxwsf_e_Header_s* x);
int zxwsf_e_Header_NUM_b12_ProcessingContext(struct zxwsf_e_Header_s* x);
int zxwsf_e_Header_NUM_b12_Consent(struct zxwsf_e_Header_s* x);
int zxwsf_e_Header_NUM_b12_UsageDirective(struct zxwsf_e_Header_s* x);
struct zxwsf_a_MessageID_s* zxwsf_e_Header_POP_MessageID(struct zxwsf_e_Header_s* x);
struct zxwsf_a_RelatesTo_s* zxwsf_e_Header_POP_RelatesTo(struct zxwsf_e_Header_s* x);
struct zxwsf_a_ReplyTo_s* zxwsf_e_Header_POP_ReplyTo(struct zxwsf_e_Header_s* x);
struct zxwsf_a_From_s* zxwsf_e_Header_POP_From(struct zxwsf_e_Header_s* x);
struct zxwsf_a_FaultTo_s* zxwsf_e_Header_POP_FaultTo(struct zxwsf_e_Header_s* x);
struct zxwsf_a_To_s* zxwsf_e_Header_POP_To(struct zxwsf_e_Header_s* x);
struct zxwsf_a_Action_s* zxwsf_e_Header_POP_Action(struct zxwsf_e_Header_s* x);
struct zxwsf_sbf_Framework_s* zxwsf_e_Header_POP_Framework(struct zxwsf_e_Header_s* x);
struct zxwsf_b_Framework_s* zxwsf_e_Header_POP_b_Framework(struct zxwsf_e_Header_s* x);
struct zxwsf_b_Sender_s* zxwsf_e_Header_POP_Sender(struct zxwsf_e_Header_s* x);
struct zxwsf_b_TargetIdentity_s* zxwsf_e_Header_POP_TargetIdentity(struct zxwsf_e_Header_s* x);
struct zxwsf_b_CredentialsContext_s* zxwsf_e_Header_POP_CredentialsContext(struct zxwsf_e_Header_s* x);
struct zxwsf_b_EndpointUpdate_s* zxwsf_e_Header_POP_EndpointUpdate(struct zxwsf_e_Header_s* x);
struct zx_elem_s* zxwsf_e_Header_POP_Timeout(struct zxwsf_e_Header_s* x);
struct zxwsf_b_ProcessingContext_s* zxwsf_e_Header_POP_ProcessingContext(struct zxwsf_e_Header_s* x);
struct zxwsf_b_Consent_s* zxwsf_e_Header_POP_Consent(struct zxwsf_e_Header_s* x);
struct zxwsf_b_UsageDirective_s* zxwsf_e_Header_POP_UsageDirective(struct zxwsf_e_Header_s* x);
struct zxwsf_b_ApplicationEPR_s* zxwsf_e_Header_POP_ApplicationEPR(struct zxwsf_e_Header_s* x);
struct zxwsf_b_UserInteraction_s* zxwsf_e_Header_POP_UserInteraction(struct zxwsf_e_Header_s* x);
struct zxwsf_b_RedirectRequest_s* zxwsf_e_Header_POP_RedirectRequest(struct zxwsf_e_Header_s* x);
struct zxwsf_b12_Correlation_s* zxwsf_e_Header_POP_Correlation(struct zxwsf_e_Header_s* x);
struct zxwsf_b12_Provider_s* zxwsf_e_Header_POP_Provider(struct zxwsf_e_Header_s* x);
struct zxwsf_b12_ProcessingContext_s* zxwsf_e_Header_POP_b12_ProcessingContext(struct zxwsf_e_Header_s* x);
struct zxwsf_b12_Consent_s* zxwsf_e_Header_POP_b12_Consent(struct zxwsf_e_Header_s* x);
struct zxwsf_b12_UsageDirective_s* zxwsf_e_Header_POP_b12_UsageDirective(struct zxwsf_e_Header_s* x);
void zxwsf_e_Header_PUSH_MessageID(struct zxwsf_e_Header_s* x, struct zxwsf_a_MessageID_s* y);
void zxwsf_e_Header_PUSH_RelatesTo(struct zxwsf_e_Header_s* x, struct zxwsf_a_RelatesTo_s* y);
void zxwsf_e_Header_PUSH_ReplyTo(struct zxwsf_e_Header_s* x, struct zxwsf_a_ReplyTo_s* y);
void zxwsf_e_Header_PUSH_From(struct zxwsf_e_Header_s* x, struct zxwsf_a_From_s* y);
void zxwsf_e_Header_PUSH_FaultTo(struct zxwsf_e_Header_s* x, struct zxwsf_a_FaultTo_s* y);
void zxwsf_e_Header_PUSH_To(struct zxwsf_e_Header_s* x, struct zxwsf_a_To_s* y);
void zxwsf_e_Header_PUSH_Action(struct zxwsf_e_Header_s* x, struct zxwsf_a_Action_s* y);
void zxwsf_e_Header_PUSH_Framework(struct zxwsf_e_Header_s* x, struct zxwsf_sbf_Framework_s* y);
void zxwsf_e_Header_PUSH_b_Framework(struct zxwsf_e_Header_s* x, struct zxwsf_b_Framework_s* y);
void zxwsf_e_Header_PUSH_Sender(struct zxwsf_e_Header_s* x, struct zxwsf_b_Sender_s* y);
void zxwsf_e_Header_PUSH_TargetIdentity(struct zxwsf_e_Header_s* x, struct zxwsf_b_TargetIdentity_s* y);
void zxwsf_e_Header_PUSH_CredentialsContext(struct zxwsf_e_Header_s* x, struct zxwsf_b_CredentialsContext_s* y);
void zxwsf_e_Header_PUSH_EndpointUpdate(struct zxwsf_e_Header_s* x, struct zxwsf_b_EndpointUpdate_s* y);
void zxwsf_e_Header_PUSH_Timeout(struct zxwsf_e_Header_s* x, struct zx_elem_s* y);
void zxwsf_e_Header_PUSH_ProcessingContext(struct zxwsf_e_Header_s* x, struct zxwsf_b_ProcessingContext_s* y);
void zxwsf_e_Header_PUSH_Consent(struct zxwsf_e_Header_s* x, struct zxwsf_b_Consent_s* y);
void zxwsf_e_Header_PUSH_UsageDirective(struct zxwsf_e_Header_s* x, struct zxwsf_b_UsageDirective_s* y);
void zxwsf_e_Header_PUSH_ApplicationEPR(struct zxwsf_e_Header_s* x, struct zxwsf_b_ApplicationEPR_s* y);
void zxwsf_e_Header_PUSH_UserInteraction(struct zxwsf_e_Header_s* x, struct zxwsf_b_UserInteraction_s* y);
void zxwsf_e_Header_PUSH_RedirectRequest(struct zxwsf_e_Header_s* x, struct zxwsf_b_RedirectRequest_s* y);
void zxwsf_e_Header_PUSH_Correlation(struct zxwsf_e_Header_s* x, struct zxwsf_b12_Correlation_s* y);
void zxwsf_e_Header_PUSH_Provider(struct zxwsf_e_Header_s* x, struct zxwsf_b12_Provider_s* y);
void zxwsf_e_Header_PUSH_b12_ProcessingContext(struct zxwsf_e_Header_s* x, struct zxwsf_b12_ProcessingContext_s* y);
void zxwsf_e_Header_PUSH_b12_Consent(struct zxwsf_e_Header_s* x, struct zxwsf_b12_Consent_s* y);
void zxwsf_e_Header_PUSH_b12_UsageDirective(struct zxwsf_e_Header_s* x, struct zxwsf_b12_UsageDirective_s* y);
void zxwsf_e_Header_PUT_MessageID(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_MessageID_s* y);
void zxwsf_e_Header_PUT_RelatesTo(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_RelatesTo_s* y);
void zxwsf_e_Header_PUT_ReplyTo(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_ReplyTo_s* y);
void zxwsf_e_Header_PUT_From(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_From_s* y);
void zxwsf_e_Header_PUT_FaultTo(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_FaultTo_s* y);
void zxwsf_e_Header_PUT_To(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_To_s* y);
void zxwsf_e_Header_PUT_Action(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_Action_s* y);
void zxwsf_e_Header_PUT_Framework(struct zxwsf_e_Header_s* x, int n, struct zxwsf_sbf_Framework_s* y);
void zxwsf_e_Header_PUT_b_Framework(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_Framework_s* y);
void zxwsf_e_Header_PUT_Sender(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_Sender_s* y);
void zxwsf_e_Header_PUT_TargetIdentity(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_TargetIdentity_s* y);
void zxwsf_e_Header_PUT_CredentialsContext(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_CredentialsContext_s* y);
void zxwsf_e_Header_PUT_EndpointUpdate(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_EndpointUpdate_s* y);
void zxwsf_e_Header_PUT_Timeout(struct zxwsf_e_Header_s* x, int n, struct zx_elem_s* y);
void zxwsf_e_Header_PUT_ProcessingContext(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_ProcessingContext_s* y);
void zxwsf_e_Header_PUT_Consent(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_Consent_s* y);
void zxwsf_e_Header_PUT_UsageDirective(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_UsageDirective_s* y);
void zxwsf_e_Header_PUT_ApplicationEPR(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_ApplicationEPR_s* y);
void zxwsf_e_Header_PUT_UserInteraction(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_UserInteraction_s* y);
void zxwsf_e_Header_PUT_RedirectRequest(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_RedirectRequest_s* y);
void zxwsf_e_Header_PUT_Correlation(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b12_Correlation_s* y);
void zxwsf_e_Header_PUT_Provider(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b12_Provider_s* y);
void zxwsf_e_Header_PUT_b12_ProcessingContext(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b12_ProcessingContext_s* y);
void zxwsf_e_Header_PUT_b12_Consent(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b12_Consent_s* y);
void zxwsf_e_Header_PUT_b12_UsageDirective(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b12_UsageDirective_s* y);
void zxwsf_e_Header_ADD_MessageID(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_MessageID_s* z);
void zxwsf_e_Header_ADD_RelatesTo(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_RelatesTo_s* z);
void zxwsf_e_Header_ADD_ReplyTo(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_ReplyTo_s* z);
void zxwsf_e_Header_ADD_From(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_From_s* z);
void zxwsf_e_Header_ADD_FaultTo(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_FaultTo_s* z);
void zxwsf_e_Header_ADD_To(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_To_s* z);
void zxwsf_e_Header_ADD_Action(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_Action_s* z);
void zxwsf_e_Header_ADD_Framework(struct zxwsf_e_Header_s* x, int n, struct zxwsf_sbf_Framework_s* z);
void zxwsf_e_Header_ADD_b_Framework(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_Framework_s* z);
void zxwsf_e_Header_ADD_Sender(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_Sender_s* z);
void zxwsf_e_Header_ADD_TargetIdentity(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_TargetIdentity_s* z);
void zxwsf_e_Header_ADD_CredentialsContext(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_CredentialsContext_s* z);
void zxwsf_e_Header_ADD_EndpointUpdate(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_EndpointUpdate_s* z);
void zxwsf_e_Header_ADD_Timeout(struct zxwsf_e_Header_s* x, int n, struct zx_elem_s* z);
void zxwsf_e_Header_ADD_ProcessingContext(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_ProcessingContext_s* z);
void zxwsf_e_Header_ADD_Consent(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_Consent_s* z);
void zxwsf_e_Header_ADD_UsageDirective(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_UsageDirective_s* z);
void zxwsf_e_Header_ADD_ApplicationEPR(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_ApplicationEPR_s* z);
void zxwsf_e_Header_ADD_UserInteraction(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_UserInteraction_s* z);
void zxwsf_e_Header_ADD_RedirectRequest(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_RedirectRequest_s* z);
void zxwsf_e_Header_ADD_Correlation(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b12_Correlation_s* z);
void zxwsf_e_Header_ADD_Provider(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b12_Provider_s* z);
void zxwsf_e_Header_ADD_b12_ProcessingContext(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b12_ProcessingContext_s* z);
void zxwsf_e_Header_ADD_b12_Consent(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b12_Consent_s* z);
void zxwsf_e_Header_ADD_b12_UsageDirective(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b12_UsageDirective_s* z);
void zxwsf_e_Header_DEL_MessageID(struct zxwsf_e_Header_s* x, int n);
void zxwsf_e_Header_DEL_RelatesTo(struct zxwsf_e_Header_s* x, int n);
void zxwsf_e_Header_DEL_ReplyTo(struct zxwsf_e_Header_s* x, int n);
void zxwsf_e_Header_DEL_From(struct zxwsf_e_Header_s* x, int n);
void zxwsf_e_Header_DEL_FaultTo(struct zxwsf_e_Header_s* x, int n);
void zxwsf_e_Header_DEL_To(struct zxwsf_e_Header_s* x, int n);
void zxwsf_e_Header_DEL_Action(struct zxwsf_e_Header_s* x, int n);
void zxwsf_e_Header_DEL_Framework(struct zxwsf_e_Header_s* x, int n);
void zxwsf_e_Header_DEL_b_Framework(struct zxwsf_e_Header_s* x, int n);
void zxwsf_e_Header_DEL_Sender(struct zxwsf_e_Header_s* x, int n);
void zxwsf_e_Header_DEL_TargetIdentity(struct zxwsf_e_Header_s* x, int n);
void zxwsf_e_Header_DEL_CredentialsContext(struct zxwsf_e_Header_s* x, int n);
void zxwsf_e_Header_DEL_EndpointUpdate(struct zxwsf_e_Header_s* x, int n);
void zxwsf_e_Header_DEL_Timeout(struct zxwsf_e_Header_s* x, int n);
void zxwsf_e_Header_DEL_ProcessingContext(struct zxwsf_e_Header_s* x, int n);
void zxwsf_e_Header_DEL_Consent(struct zxwsf_e_Header_s* x, int n);
void zxwsf_e_Header_DEL_UsageDirective(struct zxwsf_e_Header_s* x, int n);
void zxwsf_e_Header_DEL_ApplicationEPR(struct zxwsf_e_Header_s* x, int n);
void zxwsf_e_Header_DEL_UserInteraction(struct zxwsf_e_Header_s* x, int n);
void zxwsf_e_Header_DEL_RedirectRequest(struct zxwsf_e_Header_s* x, int n);
void zxwsf_e_Header_DEL_Correlation(struct zxwsf_e_Header_s* x, int n);
void zxwsf_e_Header_DEL_Provider(struct zxwsf_e_Header_s* x, int n);
void zxwsf_e_Header_DEL_b12_ProcessingContext(struct zxwsf_e_Header_s* x, int n);
void zxwsf_e_Header_DEL_b12_Consent(struct zxwsf_e_Header_s* x, int n);
void zxwsf_e_Header_DEL_b12_UsageDirective(struct zxwsf_e_Header_s* x, int n);
void zxwsf_e_Header_REV_MessageID(struct zxwsf_e_Header_s* x);
void zxwsf_e_Header_REV_RelatesTo(struct zxwsf_e_Header_s* x);
void zxwsf_e_Header_REV_ReplyTo(struct zxwsf_e_Header_s* x);
void zxwsf_e_Header_REV_From(struct zxwsf_e_Header_s* x);
void zxwsf_e_Header_REV_FaultTo(struct zxwsf_e_Header_s* x);
void zxwsf_e_Header_REV_To(struct zxwsf_e_Header_s* x);
void zxwsf_e_Header_REV_Action(struct zxwsf_e_Header_s* x);
void zxwsf_e_Header_REV_Framework(struct zxwsf_e_Header_s* x);
void zxwsf_e_Header_REV_b_Framework(struct zxwsf_e_Header_s* x);
void zxwsf_e_Header_REV_Sender(struct zxwsf_e_Header_s* x);
void zxwsf_e_Header_REV_TargetIdentity(struct zxwsf_e_Header_s* x);
void zxwsf_e_Header_REV_CredentialsContext(struct zxwsf_e_Header_s* x);
void zxwsf_e_Header_REV_EndpointUpdate(struct zxwsf_e_Header_s* x);
void zxwsf_e_Header_REV_Timeout(struct zxwsf_e_Header_s* x);
void zxwsf_e_Header_REV_ProcessingContext(struct zxwsf_e_Header_s* x);
void zxwsf_e_Header_REV_Consent(struct zxwsf_e_Header_s* x);
void zxwsf_e_Header_REV_UsageDirective(struct zxwsf_e_Header_s* x);
void zxwsf_e_Header_REV_ApplicationEPR(struct zxwsf_e_Header_s* x);
void zxwsf_e_Header_REV_UserInteraction(struct zxwsf_e_Header_s* x);
void zxwsf_e_Header_REV_RedirectRequest(struct zxwsf_e_Header_s* x);
void zxwsf_e_Header_REV_Correlation(struct zxwsf_e_Header_s* x);
void zxwsf_e_Header_REV_Provider(struct zxwsf_e_Header_s* x);
void zxwsf_e_Header_REV_b12_ProcessingContext(struct zxwsf_e_Header_s* x);
void zxwsf_e_Header_REV_b12_Consent(struct zxwsf_e_Header_s* x);
void zxwsf_e_Header_REV_b12_UsageDirective(struct zxwsf_e_Header_s* x);

/* -------------------------- e_detail -------------------------- */
/* refby( zxwsf_e_Fault_s ) */
#ifndef zxwsf_e_detail_EXT
#define zxwsf_e_detail_EXT
#endif

struct zxwsf_e_detail_s* zxwsf_DEC_e_detail(struct zx_ctx* c);
struct zxwsf_e_detail_s* zxwsf_NEW_e_detail(struct zx_ctx* c);
struct zxwsf_e_detail_s* zxwsf_DEEP_CLONE_e_detail(struct zx_ctx* c, struct zxwsf_e_detail_s* x, int dup_strs);
void zxwsf_DUP_STRS_e_detail(struct zx_ctx* c, struct zxwsf_e_detail_s* x);
void zxwsf_FREE_e_detail(struct zx_ctx* c, struct zxwsf_e_detail_s* x, int free_strs);
int zxwsf_WALK_SO_e_detail(struct zx_ctx* c, struct zxwsf_e_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_e_detail(struct zx_ctx* c, struct zxwsf_e_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_e_detail(struct zxwsf_e_detail_s* x);
char* zxwsf_ENC_SO_e_detail(struct zxwsf_e_detail_s* x, char* p);
char* zxwsf_ENC_WO_e_detail(struct zxwsf_e_detail_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_e_detail(struct zx_ctx* c, struct zxwsf_e_detail_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_e_detail(struct zx_ctx* c, struct zxwsf_e_detail_s* x);

struct zxwsf_e_detail_s {
  ZX_ELEM_EXT
  zxwsf_e_detail_EXT
};


/* -------------------------- is12_Confirm -------------------------- */
/* refby( zxwsf_is12_Inquiry_s ) */
#ifndef zxwsf_is12_Confirm_EXT
#define zxwsf_is12_Confirm_EXT
#endif

struct zxwsf_is12_Confirm_s* zxwsf_DEC_is12_Confirm(struct zx_ctx* c);
struct zxwsf_is12_Confirm_s* zxwsf_NEW_is12_Confirm(struct zx_ctx* c);
struct zxwsf_is12_Confirm_s* zxwsf_DEEP_CLONE_is12_Confirm(struct zx_ctx* c, struct zxwsf_is12_Confirm_s* x, int dup_strs);
void zxwsf_DUP_STRS_is12_Confirm(struct zx_ctx* c, struct zxwsf_is12_Confirm_s* x);
void zxwsf_FREE_is12_Confirm(struct zx_ctx* c, struct zxwsf_is12_Confirm_s* x, int free_strs);
int zxwsf_WALK_SO_is12_Confirm(struct zx_ctx* c, struct zxwsf_is12_Confirm_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is12_Confirm(struct zx_ctx* c, struct zxwsf_is12_Confirm_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is12_Confirm(struct zxwsf_is12_Confirm_s* x);
char* zxwsf_ENC_SO_is12_Confirm(struct zxwsf_is12_Confirm_s* x, char* p);
char* zxwsf_ENC_WO_is12_Confirm(struct zxwsf_is12_Confirm_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is12_Confirm(struct zx_ctx* c, struct zxwsf_is12_Confirm_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is12_Confirm(struct zx_ctx* c, struct zxwsf_is12_Confirm_s* x);

struct zxwsf_is12_Confirm_s {
  ZX_ELEM_EXT
  zxwsf_is12_Confirm_EXT
  struct zxwsf_is12_Help_s* Help;	/* {0,1} nada */
  struct zx_elem_s* Hint;	/* {0,1} xs:string */
  struct zx_elem_s* Label;	/* {0,1} xs:normalizedString */
  struct zx_elem_s* Value;	/* {0,1} xs:normalizedString */
  struct zx_str_s* name;	/* {1,1} attribute xs:ID */
};

struct zx_str_s* zxwsf_is12_Confirm_GET_name(struct zxwsf_is12_Confirm_s* x);
struct zxwsf_is12_Help_s* zxwsf_is12_Confirm_GET_Help(struct zxwsf_is12_Confirm_s* x, int n);
struct zx_elem_s* zxwsf_is12_Confirm_GET_Hint(struct zxwsf_is12_Confirm_s* x, int n);
struct zx_elem_s* zxwsf_is12_Confirm_GET_Label(struct zxwsf_is12_Confirm_s* x, int n);
struct zx_elem_s* zxwsf_is12_Confirm_GET_Value(struct zxwsf_is12_Confirm_s* x, int n);
int zxwsf_is12_Confirm_NUM_Help(struct zxwsf_is12_Confirm_s* x);
int zxwsf_is12_Confirm_NUM_Hint(struct zxwsf_is12_Confirm_s* x);
int zxwsf_is12_Confirm_NUM_Label(struct zxwsf_is12_Confirm_s* x);
int zxwsf_is12_Confirm_NUM_Value(struct zxwsf_is12_Confirm_s* x);
struct zxwsf_is12_Help_s* zxwsf_is12_Confirm_POP_Help(struct zxwsf_is12_Confirm_s* x);
struct zx_elem_s* zxwsf_is12_Confirm_POP_Hint(struct zxwsf_is12_Confirm_s* x);
struct zx_elem_s* zxwsf_is12_Confirm_POP_Label(struct zxwsf_is12_Confirm_s* x);
struct zx_elem_s* zxwsf_is12_Confirm_POP_Value(struct zxwsf_is12_Confirm_s* x);
void zxwsf_is12_Confirm_PUSH_Help(struct zxwsf_is12_Confirm_s* x, struct zxwsf_is12_Help_s* y);
void zxwsf_is12_Confirm_PUSH_Hint(struct zxwsf_is12_Confirm_s* x, struct zx_elem_s* y);
void zxwsf_is12_Confirm_PUSH_Label(struct zxwsf_is12_Confirm_s* x, struct zx_elem_s* y);
void zxwsf_is12_Confirm_PUSH_Value(struct zxwsf_is12_Confirm_s* x, struct zx_elem_s* y);
void zxwsf_is12_Confirm_PUT_name(struct zxwsf_is12_Confirm_s* x, struct zx_str_s* y);
void zxwsf_is12_Confirm_PUT_Help(struct zxwsf_is12_Confirm_s* x, int n, struct zxwsf_is12_Help_s* y);
void zxwsf_is12_Confirm_PUT_Hint(struct zxwsf_is12_Confirm_s* x, int n, struct zx_elem_s* y);
void zxwsf_is12_Confirm_PUT_Label(struct zxwsf_is12_Confirm_s* x, int n, struct zx_elem_s* y);
void zxwsf_is12_Confirm_PUT_Value(struct zxwsf_is12_Confirm_s* x, int n, struct zx_elem_s* y);
void zxwsf_is12_Confirm_ADD_Help(struct zxwsf_is12_Confirm_s* x, int n, struct zxwsf_is12_Help_s* z);
void zxwsf_is12_Confirm_ADD_Hint(struct zxwsf_is12_Confirm_s* x, int n, struct zx_elem_s* z);
void zxwsf_is12_Confirm_ADD_Label(struct zxwsf_is12_Confirm_s* x, int n, struct zx_elem_s* z);
void zxwsf_is12_Confirm_ADD_Value(struct zxwsf_is12_Confirm_s* x, int n, struct zx_elem_s* z);
void zxwsf_is12_Confirm_DEL_Help(struct zxwsf_is12_Confirm_s* x, int n);
void zxwsf_is12_Confirm_DEL_Hint(struct zxwsf_is12_Confirm_s* x, int n);
void zxwsf_is12_Confirm_DEL_Label(struct zxwsf_is12_Confirm_s* x, int n);
void zxwsf_is12_Confirm_DEL_Value(struct zxwsf_is12_Confirm_s* x, int n);
void zxwsf_is12_Confirm_REV_Help(struct zxwsf_is12_Confirm_s* x);
void zxwsf_is12_Confirm_REV_Hint(struct zxwsf_is12_Confirm_s* x);
void zxwsf_is12_Confirm_REV_Label(struct zxwsf_is12_Confirm_s* x);
void zxwsf_is12_Confirm_REV_Value(struct zxwsf_is12_Confirm_s* x);

/* -------------------------- is12_EncryptedResourceID -------------------------- */
/* refby( ) */
#ifndef zxwsf_is12_EncryptedResourceID_EXT
#define zxwsf_is12_EncryptedResourceID_EXT
#endif

struct zxwsf_is12_EncryptedResourceID_s* zxwsf_DEC_is12_EncryptedResourceID(struct zx_ctx* c);
struct zxwsf_is12_EncryptedResourceID_s* zxwsf_NEW_is12_EncryptedResourceID(struct zx_ctx* c);
struct zxwsf_is12_EncryptedResourceID_s* zxwsf_DEEP_CLONE_is12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_is12_EncryptedResourceID_s* x, int dup_strs);
void zxwsf_DUP_STRS_is12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_is12_EncryptedResourceID_s* x);
void zxwsf_FREE_is12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_is12_EncryptedResourceID_s* x, int free_strs);
int zxwsf_WALK_SO_is12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_is12_EncryptedResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_is12_EncryptedResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is12_EncryptedResourceID(struct zxwsf_is12_EncryptedResourceID_s* x);
char* zxwsf_ENC_SO_is12_EncryptedResourceID(struct zxwsf_is12_EncryptedResourceID_s* x, char* p);
char* zxwsf_ENC_WO_is12_EncryptedResourceID(struct zxwsf_is12_EncryptedResourceID_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_is12_EncryptedResourceID_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_is12_EncryptedResourceID_s* x);

struct zxwsf_is12_EncryptedResourceID_s {
  ZX_ELEM_EXT
  zxwsf_is12_EncryptedResourceID_EXT
  struct zx_elem_s* EncryptedData;	/* {1,1}  */
  struct zx_elem_s* EncryptedKey;	/* {1,1}  */
};

struct zx_elem_s* zxwsf_is12_EncryptedResourceID_GET_EncryptedData(struct zxwsf_is12_EncryptedResourceID_s* x, int n);
struct zx_elem_s* zxwsf_is12_EncryptedResourceID_GET_EncryptedKey(struct zxwsf_is12_EncryptedResourceID_s* x, int n);
int zxwsf_is12_EncryptedResourceID_NUM_EncryptedData(struct zxwsf_is12_EncryptedResourceID_s* x);
int zxwsf_is12_EncryptedResourceID_NUM_EncryptedKey(struct zxwsf_is12_EncryptedResourceID_s* x);
struct zx_elem_s* zxwsf_is12_EncryptedResourceID_POP_EncryptedData(struct zxwsf_is12_EncryptedResourceID_s* x);
struct zx_elem_s* zxwsf_is12_EncryptedResourceID_POP_EncryptedKey(struct zxwsf_is12_EncryptedResourceID_s* x);
void zxwsf_is12_EncryptedResourceID_PUSH_EncryptedData(struct zxwsf_is12_EncryptedResourceID_s* x, struct zx_elem_s* y);
void zxwsf_is12_EncryptedResourceID_PUSH_EncryptedKey(struct zxwsf_is12_EncryptedResourceID_s* x, struct zx_elem_s* y);
void zxwsf_is12_EncryptedResourceID_PUT_EncryptedData(struct zxwsf_is12_EncryptedResourceID_s* x, int n, struct zx_elem_s* y);
void zxwsf_is12_EncryptedResourceID_PUT_EncryptedKey(struct zxwsf_is12_EncryptedResourceID_s* x, int n, struct zx_elem_s* y);
void zxwsf_is12_EncryptedResourceID_ADD_EncryptedData(struct zxwsf_is12_EncryptedResourceID_s* x, int n, struct zx_elem_s* z);
void zxwsf_is12_EncryptedResourceID_ADD_EncryptedKey(struct zxwsf_is12_EncryptedResourceID_s* x, int n, struct zx_elem_s* z);
void zxwsf_is12_EncryptedResourceID_DEL_EncryptedData(struct zxwsf_is12_EncryptedResourceID_s* x, int n);
void zxwsf_is12_EncryptedResourceID_DEL_EncryptedKey(struct zxwsf_is12_EncryptedResourceID_s* x, int n);
void zxwsf_is12_EncryptedResourceID_REV_EncryptedData(struct zxwsf_is12_EncryptedResourceID_s* x);
void zxwsf_is12_EncryptedResourceID_REV_EncryptedKey(struct zxwsf_is12_EncryptedResourceID_s* x);

/* -------------------------- is12_Extension -------------------------- */
/* refby( ) */
#ifndef zxwsf_is12_Extension_EXT
#define zxwsf_is12_Extension_EXT
#endif

struct zxwsf_is12_Extension_s* zxwsf_DEC_is12_Extension(struct zx_ctx* c);
struct zxwsf_is12_Extension_s* zxwsf_NEW_is12_Extension(struct zx_ctx* c);
struct zxwsf_is12_Extension_s* zxwsf_DEEP_CLONE_is12_Extension(struct zx_ctx* c, struct zxwsf_is12_Extension_s* x, int dup_strs);
void zxwsf_DUP_STRS_is12_Extension(struct zx_ctx* c, struct zxwsf_is12_Extension_s* x);
void zxwsf_FREE_is12_Extension(struct zx_ctx* c, struct zxwsf_is12_Extension_s* x, int free_strs);
int zxwsf_WALK_SO_is12_Extension(struct zx_ctx* c, struct zxwsf_is12_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is12_Extension(struct zx_ctx* c, struct zxwsf_is12_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is12_Extension(struct zxwsf_is12_Extension_s* x);
char* zxwsf_ENC_SO_is12_Extension(struct zxwsf_is12_Extension_s* x, char* p);
char* zxwsf_ENC_WO_is12_Extension(struct zxwsf_is12_Extension_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is12_Extension(struct zx_ctx* c, struct zxwsf_is12_Extension_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is12_Extension(struct zx_ctx* c, struct zxwsf_is12_Extension_s* x);

struct zxwsf_is12_Extension_s {
  ZX_ELEM_EXT
  zxwsf_is12_Extension_EXT
};


/* -------------------------- is12_Help -------------------------- */
/* refby( zxwsf_is12_Select_s zxwsf_is12_Inquiry_s zxwsf_is12_Text_s zxwsf_is12_Confirm_s ) */
#ifndef zxwsf_is12_Help_EXT
#define zxwsf_is12_Help_EXT
#endif

struct zxwsf_is12_Help_s* zxwsf_DEC_is12_Help(struct zx_ctx* c);
struct zxwsf_is12_Help_s* zxwsf_NEW_is12_Help(struct zx_ctx* c);
struct zxwsf_is12_Help_s* zxwsf_DEEP_CLONE_is12_Help(struct zx_ctx* c, struct zxwsf_is12_Help_s* x, int dup_strs);
void zxwsf_DUP_STRS_is12_Help(struct zx_ctx* c, struct zxwsf_is12_Help_s* x);
void zxwsf_FREE_is12_Help(struct zx_ctx* c, struct zxwsf_is12_Help_s* x, int free_strs);
int zxwsf_WALK_SO_is12_Help(struct zx_ctx* c, struct zxwsf_is12_Help_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is12_Help(struct zx_ctx* c, struct zxwsf_is12_Help_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is12_Help(struct zxwsf_is12_Help_s* x);
char* zxwsf_ENC_SO_is12_Help(struct zxwsf_is12_Help_s* x, char* p);
char* zxwsf_ENC_WO_is12_Help(struct zxwsf_is12_Help_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is12_Help(struct zx_ctx* c, struct zxwsf_is12_Help_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is12_Help(struct zx_ctx* c, struct zxwsf_is12_Help_s* x);

struct zxwsf_is12_Help_s {
  ZX_ELEM_EXT
  zxwsf_is12_Help_EXT
  struct zx_str_s* label;	/* {0,1} attribute xs:string */
  struct zx_str_s* link;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* moreLink;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxwsf_is12_Help_GET_label(struct zxwsf_is12_Help_s* x);
struct zx_str_s* zxwsf_is12_Help_GET_link(struct zxwsf_is12_Help_s* x);
struct zx_str_s* zxwsf_is12_Help_GET_moreLink(struct zxwsf_is12_Help_s* x);
void zxwsf_is12_Help_PUT_label(struct zxwsf_is12_Help_s* x, struct zx_str_s* y);
void zxwsf_is12_Help_PUT_link(struct zxwsf_is12_Help_s* x, struct zx_str_s* y);
void zxwsf_is12_Help_PUT_moreLink(struct zxwsf_is12_Help_s* x, struct zx_str_s* y);

/* -------------------------- is12_Inquiry -------------------------- */
/* refby( zxwsf_is12_InteractionStatement_s zxwsf_is12_InteractionRequest_s ) */
#ifndef zxwsf_is12_Inquiry_EXT
#define zxwsf_is12_Inquiry_EXT
#endif

struct zxwsf_is12_Inquiry_s* zxwsf_DEC_is12_Inquiry(struct zx_ctx* c);
struct zxwsf_is12_Inquiry_s* zxwsf_NEW_is12_Inquiry(struct zx_ctx* c);
struct zxwsf_is12_Inquiry_s* zxwsf_DEEP_CLONE_is12_Inquiry(struct zx_ctx* c, struct zxwsf_is12_Inquiry_s* x, int dup_strs);
void zxwsf_DUP_STRS_is12_Inquiry(struct zx_ctx* c, struct zxwsf_is12_Inquiry_s* x);
void zxwsf_FREE_is12_Inquiry(struct zx_ctx* c, struct zxwsf_is12_Inquiry_s* x, int free_strs);
int zxwsf_WALK_SO_is12_Inquiry(struct zx_ctx* c, struct zxwsf_is12_Inquiry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is12_Inquiry(struct zx_ctx* c, struct zxwsf_is12_Inquiry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is12_Inquiry(struct zxwsf_is12_Inquiry_s* x);
char* zxwsf_ENC_SO_is12_Inquiry(struct zxwsf_is12_Inquiry_s* x, char* p);
char* zxwsf_ENC_WO_is12_Inquiry(struct zxwsf_is12_Inquiry_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is12_Inquiry(struct zx_ctx* c, struct zxwsf_is12_Inquiry_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is12_Inquiry(struct zx_ctx* c, struct zxwsf_is12_Inquiry_s* x);

struct zxwsf_is12_Inquiry_s {
  ZX_ELEM_EXT
  zxwsf_is12_Inquiry_EXT
  struct zxwsf_is12_Help_s* Help;	/* {0,1} nada */
  struct zxwsf_is12_Select_s* Select;	/* {0,-1} nada */
  struct zxwsf_is12_Confirm_s* Confirm;	/* {0,-1}  */
  struct zxwsf_is12_Text_s* Text;	/* {0,-1} nada */
  struct zx_str_s* id;	/* {0,1} attribute xs:ID */
  struct zx_str_s* title;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zxwsf_is12_Inquiry_GET_id(struct zxwsf_is12_Inquiry_s* x);
struct zx_str_s* zxwsf_is12_Inquiry_GET_title(struct zxwsf_is12_Inquiry_s* x);
struct zxwsf_is12_Help_s* zxwsf_is12_Inquiry_GET_Help(struct zxwsf_is12_Inquiry_s* x, int n);
struct zxwsf_is12_Select_s* zxwsf_is12_Inquiry_GET_Select(struct zxwsf_is12_Inquiry_s* x, int n);
struct zxwsf_is12_Confirm_s* zxwsf_is12_Inquiry_GET_Confirm(struct zxwsf_is12_Inquiry_s* x, int n);
struct zxwsf_is12_Text_s* zxwsf_is12_Inquiry_GET_Text(struct zxwsf_is12_Inquiry_s* x, int n);
int zxwsf_is12_Inquiry_NUM_Help(struct zxwsf_is12_Inquiry_s* x);
int zxwsf_is12_Inquiry_NUM_Select(struct zxwsf_is12_Inquiry_s* x);
int zxwsf_is12_Inquiry_NUM_Confirm(struct zxwsf_is12_Inquiry_s* x);
int zxwsf_is12_Inquiry_NUM_Text(struct zxwsf_is12_Inquiry_s* x);
struct zxwsf_is12_Help_s* zxwsf_is12_Inquiry_POP_Help(struct zxwsf_is12_Inquiry_s* x);
struct zxwsf_is12_Select_s* zxwsf_is12_Inquiry_POP_Select(struct zxwsf_is12_Inquiry_s* x);
struct zxwsf_is12_Confirm_s* zxwsf_is12_Inquiry_POP_Confirm(struct zxwsf_is12_Inquiry_s* x);
struct zxwsf_is12_Text_s* zxwsf_is12_Inquiry_POP_Text(struct zxwsf_is12_Inquiry_s* x);
void zxwsf_is12_Inquiry_PUSH_Help(struct zxwsf_is12_Inquiry_s* x, struct zxwsf_is12_Help_s* y);
void zxwsf_is12_Inquiry_PUSH_Select(struct zxwsf_is12_Inquiry_s* x, struct zxwsf_is12_Select_s* y);
void zxwsf_is12_Inquiry_PUSH_Confirm(struct zxwsf_is12_Inquiry_s* x, struct zxwsf_is12_Confirm_s* y);
void zxwsf_is12_Inquiry_PUSH_Text(struct zxwsf_is12_Inquiry_s* x, struct zxwsf_is12_Text_s* y);
void zxwsf_is12_Inquiry_PUT_id(struct zxwsf_is12_Inquiry_s* x, struct zx_str_s* y);
void zxwsf_is12_Inquiry_PUT_title(struct zxwsf_is12_Inquiry_s* x, struct zx_str_s* y);
void zxwsf_is12_Inquiry_PUT_Help(struct zxwsf_is12_Inquiry_s* x, int n, struct zxwsf_is12_Help_s* y);
void zxwsf_is12_Inquiry_PUT_Select(struct zxwsf_is12_Inquiry_s* x, int n, struct zxwsf_is12_Select_s* y);
void zxwsf_is12_Inquiry_PUT_Confirm(struct zxwsf_is12_Inquiry_s* x, int n, struct zxwsf_is12_Confirm_s* y);
void zxwsf_is12_Inquiry_PUT_Text(struct zxwsf_is12_Inquiry_s* x, int n, struct zxwsf_is12_Text_s* y);
void zxwsf_is12_Inquiry_ADD_Help(struct zxwsf_is12_Inquiry_s* x, int n, struct zxwsf_is12_Help_s* z);
void zxwsf_is12_Inquiry_ADD_Select(struct zxwsf_is12_Inquiry_s* x, int n, struct zxwsf_is12_Select_s* z);
void zxwsf_is12_Inquiry_ADD_Confirm(struct zxwsf_is12_Inquiry_s* x, int n, struct zxwsf_is12_Confirm_s* z);
void zxwsf_is12_Inquiry_ADD_Text(struct zxwsf_is12_Inquiry_s* x, int n, struct zxwsf_is12_Text_s* z);
void zxwsf_is12_Inquiry_DEL_Help(struct zxwsf_is12_Inquiry_s* x, int n);
void zxwsf_is12_Inquiry_DEL_Select(struct zxwsf_is12_Inquiry_s* x, int n);
void zxwsf_is12_Inquiry_DEL_Confirm(struct zxwsf_is12_Inquiry_s* x, int n);
void zxwsf_is12_Inquiry_DEL_Text(struct zxwsf_is12_Inquiry_s* x, int n);
void zxwsf_is12_Inquiry_REV_Help(struct zxwsf_is12_Inquiry_s* x);
void zxwsf_is12_Inquiry_REV_Select(struct zxwsf_is12_Inquiry_s* x);
void zxwsf_is12_Inquiry_REV_Confirm(struct zxwsf_is12_Inquiry_s* x);
void zxwsf_is12_Inquiry_REV_Text(struct zxwsf_is12_Inquiry_s* x);

/* -------------------------- is12_InteractionRequest -------------------------- */
/* refby( ) */
#ifndef zxwsf_is12_InteractionRequest_EXT
#define zxwsf_is12_InteractionRequest_EXT
#endif

struct zxwsf_is12_InteractionRequest_s* zxwsf_DEC_is12_InteractionRequest(struct zx_ctx* c);
struct zxwsf_is12_InteractionRequest_s* zxwsf_NEW_is12_InteractionRequest(struct zx_ctx* c);
struct zxwsf_is12_InteractionRequest_s* zxwsf_DEEP_CLONE_is12_InteractionRequest(struct zx_ctx* c, struct zxwsf_is12_InteractionRequest_s* x, int dup_strs);
void zxwsf_DUP_STRS_is12_InteractionRequest(struct zx_ctx* c, struct zxwsf_is12_InteractionRequest_s* x);
void zxwsf_FREE_is12_InteractionRequest(struct zx_ctx* c, struct zxwsf_is12_InteractionRequest_s* x, int free_strs);
int zxwsf_WALK_SO_is12_InteractionRequest(struct zx_ctx* c, struct zxwsf_is12_InteractionRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is12_InteractionRequest(struct zx_ctx* c, struct zxwsf_is12_InteractionRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is12_InteractionRequest(struct zxwsf_is12_InteractionRequest_s* x);
char* zxwsf_ENC_SO_is12_InteractionRequest(struct zxwsf_is12_InteractionRequest_s* x, char* p);
char* zxwsf_ENC_WO_is12_InteractionRequest(struct zxwsf_is12_InteractionRequest_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is12_InteractionRequest(struct zx_ctx* c, struct zxwsf_is12_InteractionRequest_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is12_InteractionRequest(struct zx_ctx* c, struct zxwsf_is12_InteractionRequest_s* x);

struct zxwsf_is12_InteractionRequest_s {
  ZX_ELEM_EXT
  zxwsf_is12_InteractionRequest_EXT
  struct zxwsf_is12_Inquiry_s* Inquiry;	/* {1,-1} nada */
  struct zx_elem_s* KeyInfo;	/* {0,1}  */
  struct zx_str_s* id;	/* {0,1} attribute xs:ID */
  struct zx_str_s* language;	/* {0,1} attribute xs:NMTOKENS */
  struct zx_str_s* maxInteractTime;	/* {0,1} attribute xs:integer */
  struct zx_str_s* signed_is_c_keyword;	/* {0,1} attribute xs:token */
};

struct zx_str_s* zxwsf_is12_InteractionRequest_GET_id(struct zxwsf_is12_InteractionRequest_s* x);
struct zx_str_s* zxwsf_is12_InteractionRequest_GET_language(struct zxwsf_is12_InteractionRequest_s* x);
struct zx_str_s* zxwsf_is12_InteractionRequest_GET_maxInteractTime(struct zxwsf_is12_InteractionRequest_s* x);
struct zx_str_s* zxwsf_is12_InteractionRequest_GET_signed_is_c_keyword(struct zxwsf_is12_InteractionRequest_s* x);
struct zxwsf_is12_Inquiry_s* zxwsf_is12_InteractionRequest_GET_Inquiry(struct zxwsf_is12_InteractionRequest_s* x, int n);
struct zx_elem_s* zxwsf_is12_InteractionRequest_GET_KeyInfo(struct zxwsf_is12_InteractionRequest_s* x, int n);
int zxwsf_is12_InteractionRequest_NUM_Inquiry(struct zxwsf_is12_InteractionRequest_s* x);
int zxwsf_is12_InteractionRequest_NUM_KeyInfo(struct zxwsf_is12_InteractionRequest_s* x);
struct zxwsf_is12_Inquiry_s* zxwsf_is12_InteractionRequest_POP_Inquiry(struct zxwsf_is12_InteractionRequest_s* x);
struct zx_elem_s* zxwsf_is12_InteractionRequest_POP_KeyInfo(struct zxwsf_is12_InteractionRequest_s* x);
void zxwsf_is12_InteractionRequest_PUSH_Inquiry(struct zxwsf_is12_InteractionRequest_s* x, struct zxwsf_is12_Inquiry_s* y);
void zxwsf_is12_InteractionRequest_PUSH_KeyInfo(struct zxwsf_is12_InteractionRequest_s* x, struct zx_elem_s* y);
void zxwsf_is12_InteractionRequest_PUT_id(struct zxwsf_is12_InteractionRequest_s* x, struct zx_str_s* y);
void zxwsf_is12_InteractionRequest_PUT_language(struct zxwsf_is12_InteractionRequest_s* x, struct zx_str_s* y);
void zxwsf_is12_InteractionRequest_PUT_maxInteractTime(struct zxwsf_is12_InteractionRequest_s* x, struct zx_str_s* y);
void zxwsf_is12_InteractionRequest_PUT_signed_is_c_keyword(struct zxwsf_is12_InteractionRequest_s* x, struct zx_str_s* y);
void zxwsf_is12_InteractionRequest_PUT_Inquiry(struct zxwsf_is12_InteractionRequest_s* x, int n, struct zxwsf_is12_Inquiry_s* y);
void zxwsf_is12_InteractionRequest_PUT_KeyInfo(struct zxwsf_is12_InteractionRequest_s* x, int n, struct zx_elem_s* y);
void zxwsf_is12_InteractionRequest_ADD_Inquiry(struct zxwsf_is12_InteractionRequest_s* x, int n, struct zxwsf_is12_Inquiry_s* z);
void zxwsf_is12_InteractionRequest_ADD_KeyInfo(struct zxwsf_is12_InteractionRequest_s* x, int n, struct zx_elem_s* z);
void zxwsf_is12_InteractionRequest_DEL_Inquiry(struct zxwsf_is12_InteractionRequest_s* x, int n);
void zxwsf_is12_InteractionRequest_DEL_KeyInfo(struct zxwsf_is12_InteractionRequest_s* x, int n);
void zxwsf_is12_InteractionRequest_REV_Inquiry(struct zxwsf_is12_InteractionRequest_s* x);
void zxwsf_is12_InteractionRequest_REV_KeyInfo(struct zxwsf_is12_InteractionRequest_s* x);

/* -------------------------- is12_InteractionResponse -------------------------- */
/* refby( ) */
#ifndef zxwsf_is12_InteractionResponse_EXT
#define zxwsf_is12_InteractionResponse_EXT
#endif

struct zxwsf_is12_InteractionResponse_s* zxwsf_DEC_is12_InteractionResponse(struct zx_ctx* c);
struct zxwsf_is12_InteractionResponse_s* zxwsf_NEW_is12_InteractionResponse(struct zx_ctx* c);
struct zxwsf_is12_InteractionResponse_s* zxwsf_DEEP_CLONE_is12_InteractionResponse(struct zx_ctx* c, struct zxwsf_is12_InteractionResponse_s* x, int dup_strs);
void zxwsf_DUP_STRS_is12_InteractionResponse(struct zx_ctx* c, struct zxwsf_is12_InteractionResponse_s* x);
void zxwsf_FREE_is12_InteractionResponse(struct zx_ctx* c, struct zxwsf_is12_InteractionResponse_s* x, int free_strs);
int zxwsf_WALK_SO_is12_InteractionResponse(struct zx_ctx* c, struct zxwsf_is12_InteractionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is12_InteractionResponse(struct zx_ctx* c, struct zxwsf_is12_InteractionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is12_InteractionResponse(struct zxwsf_is12_InteractionResponse_s* x);
char* zxwsf_ENC_SO_is12_InteractionResponse(struct zxwsf_is12_InteractionResponse_s* x, char* p);
char* zxwsf_ENC_WO_is12_InteractionResponse(struct zxwsf_is12_InteractionResponse_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is12_InteractionResponse(struct zx_ctx* c, struct zxwsf_is12_InteractionResponse_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is12_InteractionResponse(struct zx_ctx* c, struct zxwsf_is12_InteractionResponse_s* x);

struct zxwsf_is12_InteractionResponse_s {
  ZX_ELEM_EXT
  zxwsf_is12_InteractionResponse_EXT
  struct zxwsf_is12_Status_s* Status;	/* {1,1} nada */
  struct zxwsf_is12_InteractionStatement_s* InteractionStatement;	/* {0,-1}  */
  struct zxwsf_is12_Parameter_s* Parameter;	/* {0,-1}  */
};

struct zxwsf_is12_Status_s* zxwsf_is12_InteractionResponse_GET_Status(struct zxwsf_is12_InteractionResponse_s* x, int n);
struct zxwsf_is12_InteractionStatement_s* zxwsf_is12_InteractionResponse_GET_InteractionStatement(struct zxwsf_is12_InteractionResponse_s* x, int n);
struct zxwsf_is12_Parameter_s* zxwsf_is12_InteractionResponse_GET_Parameter(struct zxwsf_is12_InteractionResponse_s* x, int n);
int zxwsf_is12_InteractionResponse_NUM_Status(struct zxwsf_is12_InteractionResponse_s* x);
int zxwsf_is12_InteractionResponse_NUM_InteractionStatement(struct zxwsf_is12_InteractionResponse_s* x);
int zxwsf_is12_InteractionResponse_NUM_Parameter(struct zxwsf_is12_InteractionResponse_s* x);
struct zxwsf_is12_Status_s* zxwsf_is12_InteractionResponse_POP_Status(struct zxwsf_is12_InteractionResponse_s* x);
struct zxwsf_is12_InteractionStatement_s* zxwsf_is12_InteractionResponse_POP_InteractionStatement(struct zxwsf_is12_InteractionResponse_s* x);
struct zxwsf_is12_Parameter_s* zxwsf_is12_InteractionResponse_POP_Parameter(struct zxwsf_is12_InteractionResponse_s* x);
void zxwsf_is12_InteractionResponse_PUSH_Status(struct zxwsf_is12_InteractionResponse_s* x, struct zxwsf_is12_Status_s* y);
void zxwsf_is12_InteractionResponse_PUSH_InteractionStatement(struct zxwsf_is12_InteractionResponse_s* x, struct zxwsf_is12_InteractionStatement_s* y);
void zxwsf_is12_InteractionResponse_PUSH_Parameter(struct zxwsf_is12_InteractionResponse_s* x, struct zxwsf_is12_Parameter_s* y);
void zxwsf_is12_InteractionResponse_PUT_Status(struct zxwsf_is12_InteractionResponse_s* x, int n, struct zxwsf_is12_Status_s* y);
void zxwsf_is12_InteractionResponse_PUT_InteractionStatement(struct zxwsf_is12_InteractionResponse_s* x, int n, struct zxwsf_is12_InteractionStatement_s* y);
void zxwsf_is12_InteractionResponse_PUT_Parameter(struct zxwsf_is12_InteractionResponse_s* x, int n, struct zxwsf_is12_Parameter_s* y);
void zxwsf_is12_InteractionResponse_ADD_Status(struct zxwsf_is12_InteractionResponse_s* x, int n, struct zxwsf_is12_Status_s* z);
void zxwsf_is12_InteractionResponse_ADD_InteractionStatement(struct zxwsf_is12_InteractionResponse_s* x, int n, struct zxwsf_is12_InteractionStatement_s* z);
void zxwsf_is12_InteractionResponse_ADD_Parameter(struct zxwsf_is12_InteractionResponse_s* x, int n, struct zxwsf_is12_Parameter_s* z);
void zxwsf_is12_InteractionResponse_DEL_Status(struct zxwsf_is12_InteractionResponse_s* x, int n);
void zxwsf_is12_InteractionResponse_DEL_InteractionStatement(struct zxwsf_is12_InteractionResponse_s* x, int n);
void zxwsf_is12_InteractionResponse_DEL_Parameter(struct zxwsf_is12_InteractionResponse_s* x, int n);
void zxwsf_is12_InteractionResponse_REV_Status(struct zxwsf_is12_InteractionResponse_s* x);
void zxwsf_is12_InteractionResponse_REV_InteractionStatement(struct zxwsf_is12_InteractionResponse_s* x);
void zxwsf_is12_InteractionResponse_REV_Parameter(struct zxwsf_is12_InteractionResponse_s* x);

/* -------------------------- is12_InteractionService -------------------------- */
/* refby( zxwsf_is12_UserInteraction_s ) */
#ifndef zxwsf_is12_InteractionService_EXT
#define zxwsf_is12_InteractionService_EXT
#endif

struct zxwsf_is12_InteractionService_s* zxwsf_DEC_is12_InteractionService(struct zx_ctx* c);
struct zxwsf_is12_InteractionService_s* zxwsf_NEW_is12_InteractionService(struct zx_ctx* c);
struct zxwsf_is12_InteractionService_s* zxwsf_DEEP_CLONE_is12_InteractionService(struct zx_ctx* c, struct zxwsf_is12_InteractionService_s* x, int dup_strs);
void zxwsf_DUP_STRS_is12_InteractionService(struct zx_ctx* c, struct zxwsf_is12_InteractionService_s* x);
void zxwsf_FREE_is12_InteractionService(struct zx_ctx* c, struct zxwsf_is12_InteractionService_s* x, int free_strs);
int zxwsf_WALK_SO_is12_InteractionService(struct zx_ctx* c, struct zxwsf_is12_InteractionService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is12_InteractionService(struct zx_ctx* c, struct zxwsf_is12_InteractionService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is12_InteractionService(struct zxwsf_is12_InteractionService_s* x);
char* zxwsf_ENC_SO_is12_InteractionService(struct zxwsf_is12_InteractionService_s* x, char* p);
char* zxwsf_ENC_WO_is12_InteractionService(struct zxwsf_is12_InteractionService_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is12_InteractionService(struct zx_ctx* c, struct zxwsf_is12_InteractionService_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is12_InteractionService(struct zx_ctx* c, struct zxwsf_is12_InteractionService_s* x);

struct zxwsf_is12_InteractionService_s {
  ZX_ELEM_EXT
  zxwsf_is12_InteractionService_EXT
  struct zxwsf_di12_ServiceInstance_s* ServiceInstance;	/* {1,1}  */
  struct zxwsf_di12_Options_s* Options;	/* {0,1}  */
  struct zx_elem_s* Abstract;	/* {0,1} xs:string */
  struct zx_str_s* entryID;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zxwsf_is12_InteractionService_GET_entryID(struct zxwsf_is12_InteractionService_s* x);
struct zxwsf_di12_ServiceInstance_s* zxwsf_is12_InteractionService_GET_ServiceInstance(struct zxwsf_is12_InteractionService_s* x, int n);
struct zxwsf_di12_Options_s* zxwsf_is12_InteractionService_GET_Options(struct zxwsf_is12_InteractionService_s* x, int n);
struct zx_elem_s* zxwsf_is12_InteractionService_GET_Abstract(struct zxwsf_is12_InteractionService_s* x, int n);
int zxwsf_is12_InteractionService_NUM_ServiceInstance(struct zxwsf_is12_InteractionService_s* x);
int zxwsf_is12_InteractionService_NUM_Options(struct zxwsf_is12_InteractionService_s* x);
int zxwsf_is12_InteractionService_NUM_Abstract(struct zxwsf_is12_InteractionService_s* x);
struct zxwsf_di12_ServiceInstance_s* zxwsf_is12_InteractionService_POP_ServiceInstance(struct zxwsf_is12_InteractionService_s* x);
struct zxwsf_di12_Options_s* zxwsf_is12_InteractionService_POP_Options(struct zxwsf_is12_InteractionService_s* x);
struct zx_elem_s* zxwsf_is12_InteractionService_POP_Abstract(struct zxwsf_is12_InteractionService_s* x);
void zxwsf_is12_InteractionService_PUSH_ServiceInstance(struct zxwsf_is12_InteractionService_s* x, struct zxwsf_di12_ServiceInstance_s* y);
void zxwsf_is12_InteractionService_PUSH_Options(struct zxwsf_is12_InteractionService_s* x, struct zxwsf_di12_Options_s* y);
void zxwsf_is12_InteractionService_PUSH_Abstract(struct zxwsf_is12_InteractionService_s* x, struct zx_elem_s* y);
void zxwsf_is12_InteractionService_PUT_entryID(struct zxwsf_is12_InteractionService_s* x, struct zx_str_s* y);
void zxwsf_is12_InteractionService_PUT_ServiceInstance(struct zxwsf_is12_InteractionService_s* x, int n, struct zxwsf_di12_ServiceInstance_s* y);
void zxwsf_is12_InteractionService_PUT_Options(struct zxwsf_is12_InteractionService_s* x, int n, struct zxwsf_di12_Options_s* y);
void zxwsf_is12_InteractionService_PUT_Abstract(struct zxwsf_is12_InteractionService_s* x, int n, struct zx_elem_s* y);
void zxwsf_is12_InteractionService_ADD_ServiceInstance(struct zxwsf_is12_InteractionService_s* x, int n, struct zxwsf_di12_ServiceInstance_s* z);
void zxwsf_is12_InteractionService_ADD_Options(struct zxwsf_is12_InteractionService_s* x, int n, struct zxwsf_di12_Options_s* z);
void zxwsf_is12_InteractionService_ADD_Abstract(struct zxwsf_is12_InteractionService_s* x, int n, struct zx_elem_s* z);
void zxwsf_is12_InteractionService_DEL_ServiceInstance(struct zxwsf_is12_InteractionService_s* x, int n);
void zxwsf_is12_InteractionService_DEL_Options(struct zxwsf_is12_InteractionService_s* x, int n);
void zxwsf_is12_InteractionService_DEL_Abstract(struct zxwsf_is12_InteractionService_s* x, int n);
void zxwsf_is12_InteractionService_REV_ServiceInstance(struct zxwsf_is12_InteractionService_s* x);
void zxwsf_is12_InteractionService_REV_Options(struct zxwsf_is12_InteractionService_s* x);
void zxwsf_is12_InteractionService_REV_Abstract(struct zxwsf_is12_InteractionService_s* x);

/* -------------------------- is12_InteractionStatement -------------------------- */
/* refby( zxwsf_is12_InteractionResponse_s ) */
#ifndef zxwsf_is12_InteractionStatement_EXT
#define zxwsf_is12_InteractionStatement_EXT
#endif

struct zxwsf_is12_InteractionStatement_s* zxwsf_DEC_is12_InteractionStatement(struct zx_ctx* c);
struct zxwsf_is12_InteractionStatement_s* zxwsf_NEW_is12_InteractionStatement(struct zx_ctx* c);
struct zxwsf_is12_InteractionStatement_s* zxwsf_DEEP_CLONE_is12_InteractionStatement(struct zx_ctx* c, struct zxwsf_is12_InteractionStatement_s* x, int dup_strs);
void zxwsf_DUP_STRS_is12_InteractionStatement(struct zx_ctx* c, struct zxwsf_is12_InteractionStatement_s* x);
void zxwsf_FREE_is12_InteractionStatement(struct zx_ctx* c, struct zxwsf_is12_InteractionStatement_s* x, int free_strs);
int zxwsf_WALK_SO_is12_InteractionStatement(struct zx_ctx* c, struct zxwsf_is12_InteractionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is12_InteractionStatement(struct zx_ctx* c, struct zxwsf_is12_InteractionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is12_InteractionStatement(struct zxwsf_is12_InteractionStatement_s* x);
char* zxwsf_ENC_SO_is12_InteractionStatement(struct zxwsf_is12_InteractionStatement_s* x, char* p);
char* zxwsf_ENC_WO_is12_InteractionStatement(struct zxwsf_is12_InteractionStatement_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is12_InteractionStatement(struct zx_ctx* c, struct zxwsf_is12_InteractionStatement_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is12_InteractionStatement(struct zx_ctx* c, struct zxwsf_is12_InteractionStatement_s* x);

struct zxwsf_is12_InteractionStatement_s {
  ZX_ELEM_EXT
  zxwsf_is12_InteractionStatement_EXT
  struct zxwsf_is12_Inquiry_s* Inquiry;	/* {1,-1} nada */
  struct zx_elem_s* Signature;	/* {1,1}  */
};

struct zxwsf_is12_Inquiry_s* zxwsf_is12_InteractionStatement_GET_Inquiry(struct zxwsf_is12_InteractionStatement_s* x, int n);
struct zx_elem_s* zxwsf_is12_InteractionStatement_GET_Signature(struct zxwsf_is12_InteractionStatement_s* x, int n);
int zxwsf_is12_InteractionStatement_NUM_Inquiry(struct zxwsf_is12_InteractionStatement_s* x);
int zxwsf_is12_InteractionStatement_NUM_Signature(struct zxwsf_is12_InteractionStatement_s* x);
struct zxwsf_is12_Inquiry_s* zxwsf_is12_InteractionStatement_POP_Inquiry(struct zxwsf_is12_InteractionStatement_s* x);
struct zx_elem_s* zxwsf_is12_InteractionStatement_POP_Signature(struct zxwsf_is12_InteractionStatement_s* x);
void zxwsf_is12_InteractionStatement_PUSH_Inquiry(struct zxwsf_is12_InteractionStatement_s* x, struct zxwsf_is12_Inquiry_s* y);
void zxwsf_is12_InteractionStatement_PUSH_Signature(struct zxwsf_is12_InteractionStatement_s* x, struct zx_elem_s* y);
void zxwsf_is12_InteractionStatement_PUT_Inquiry(struct zxwsf_is12_InteractionStatement_s* x, int n, struct zxwsf_is12_Inquiry_s* y);
void zxwsf_is12_InteractionStatement_PUT_Signature(struct zxwsf_is12_InteractionStatement_s* x, int n, struct zx_elem_s* y);
void zxwsf_is12_InteractionStatement_ADD_Inquiry(struct zxwsf_is12_InteractionStatement_s* x, int n, struct zxwsf_is12_Inquiry_s* z);
void zxwsf_is12_InteractionStatement_ADD_Signature(struct zxwsf_is12_InteractionStatement_s* x, int n, struct zx_elem_s* z);
void zxwsf_is12_InteractionStatement_DEL_Inquiry(struct zxwsf_is12_InteractionStatement_s* x, int n);
void zxwsf_is12_InteractionStatement_DEL_Signature(struct zxwsf_is12_InteractionStatement_s* x, int n);
void zxwsf_is12_InteractionStatement_REV_Inquiry(struct zxwsf_is12_InteractionStatement_s* x);
void zxwsf_is12_InteractionStatement_REV_Signature(struct zxwsf_is12_InteractionStatement_s* x);

/* -------------------------- is12_Item -------------------------- */
/* refby( zxwsf_is12_Select_s ) */
#ifndef zxwsf_is12_Item_EXT
#define zxwsf_is12_Item_EXT
#endif

struct zxwsf_is12_Item_s* zxwsf_DEC_is12_Item(struct zx_ctx* c);
struct zxwsf_is12_Item_s* zxwsf_NEW_is12_Item(struct zx_ctx* c);
struct zxwsf_is12_Item_s* zxwsf_DEEP_CLONE_is12_Item(struct zx_ctx* c, struct zxwsf_is12_Item_s* x, int dup_strs);
void zxwsf_DUP_STRS_is12_Item(struct zx_ctx* c, struct zxwsf_is12_Item_s* x);
void zxwsf_FREE_is12_Item(struct zx_ctx* c, struct zxwsf_is12_Item_s* x, int free_strs);
int zxwsf_WALK_SO_is12_Item(struct zx_ctx* c, struct zxwsf_is12_Item_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is12_Item(struct zx_ctx* c, struct zxwsf_is12_Item_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is12_Item(struct zxwsf_is12_Item_s* x);
char* zxwsf_ENC_SO_is12_Item(struct zxwsf_is12_Item_s* x, char* p);
char* zxwsf_ENC_WO_is12_Item(struct zxwsf_is12_Item_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is12_Item(struct zx_ctx* c, struct zxwsf_is12_Item_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is12_Item(struct zx_ctx* c, struct zxwsf_is12_Item_s* x);

struct zxwsf_is12_Item_s {
  ZX_ELEM_EXT
  zxwsf_is12_Item_EXT
  struct zx_elem_s* Hint;	/* {0,1} xs:string */
  struct zx_str_s* label;	/* {0,1} attribute xs:string */
  struct zx_str_s* value;	/* {1,1} attribute xs:string */
};

struct zx_str_s* zxwsf_is12_Item_GET_label(struct zxwsf_is12_Item_s* x);
struct zx_str_s* zxwsf_is12_Item_GET_value(struct zxwsf_is12_Item_s* x);
struct zx_elem_s* zxwsf_is12_Item_GET_Hint(struct zxwsf_is12_Item_s* x, int n);
int zxwsf_is12_Item_NUM_Hint(struct zxwsf_is12_Item_s* x);
struct zx_elem_s* zxwsf_is12_Item_POP_Hint(struct zxwsf_is12_Item_s* x);
void zxwsf_is12_Item_PUSH_Hint(struct zxwsf_is12_Item_s* x, struct zx_elem_s* y);
void zxwsf_is12_Item_PUT_label(struct zxwsf_is12_Item_s* x, struct zx_str_s* y);
void zxwsf_is12_Item_PUT_value(struct zxwsf_is12_Item_s* x, struct zx_str_s* y);
void zxwsf_is12_Item_PUT_Hint(struct zxwsf_is12_Item_s* x, int n, struct zx_elem_s* y);
void zxwsf_is12_Item_ADD_Hint(struct zxwsf_is12_Item_s* x, int n, struct zx_elem_s* z);
void zxwsf_is12_Item_DEL_Hint(struct zxwsf_is12_Item_s* x, int n);
void zxwsf_is12_Item_REV_Hint(struct zxwsf_is12_Item_s* x);

/* -------------------------- is12_Parameter -------------------------- */
/* refby( zxwsf_is12_InteractionResponse_s ) */
#ifndef zxwsf_is12_Parameter_EXT
#define zxwsf_is12_Parameter_EXT
#endif

struct zxwsf_is12_Parameter_s* zxwsf_DEC_is12_Parameter(struct zx_ctx* c);
struct zxwsf_is12_Parameter_s* zxwsf_NEW_is12_Parameter(struct zx_ctx* c);
struct zxwsf_is12_Parameter_s* zxwsf_DEEP_CLONE_is12_Parameter(struct zx_ctx* c, struct zxwsf_is12_Parameter_s* x, int dup_strs);
void zxwsf_DUP_STRS_is12_Parameter(struct zx_ctx* c, struct zxwsf_is12_Parameter_s* x);
void zxwsf_FREE_is12_Parameter(struct zx_ctx* c, struct zxwsf_is12_Parameter_s* x, int free_strs);
int zxwsf_WALK_SO_is12_Parameter(struct zx_ctx* c, struct zxwsf_is12_Parameter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is12_Parameter(struct zx_ctx* c, struct zxwsf_is12_Parameter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is12_Parameter(struct zxwsf_is12_Parameter_s* x);
char* zxwsf_ENC_SO_is12_Parameter(struct zxwsf_is12_Parameter_s* x, char* p);
char* zxwsf_ENC_WO_is12_Parameter(struct zxwsf_is12_Parameter_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is12_Parameter(struct zx_ctx* c, struct zxwsf_is12_Parameter_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is12_Parameter(struct zx_ctx* c, struct zxwsf_is12_Parameter_s* x);

struct zxwsf_is12_Parameter_s {
  ZX_ELEM_EXT
  zxwsf_is12_Parameter_EXT
  struct zx_str_s* name;	/* {1,1} attribute xs:ID */
  struct zx_str_s* value;	/* {1,1} attribute xs:string */
};

struct zx_str_s* zxwsf_is12_Parameter_GET_name(struct zxwsf_is12_Parameter_s* x);
struct zx_str_s* zxwsf_is12_Parameter_GET_value(struct zxwsf_is12_Parameter_s* x);
void zxwsf_is12_Parameter_PUT_name(struct zxwsf_is12_Parameter_s* x, struct zx_str_s* y);
void zxwsf_is12_Parameter_PUT_value(struct zxwsf_is12_Parameter_s* x, struct zx_str_s* y);

/* -------------------------- is12_RedirectRequest -------------------------- */
/* refby( ) */
#ifndef zxwsf_is12_RedirectRequest_EXT
#define zxwsf_is12_RedirectRequest_EXT
#endif

struct zxwsf_is12_RedirectRequest_s* zxwsf_DEC_is12_RedirectRequest(struct zx_ctx* c);
struct zxwsf_is12_RedirectRequest_s* zxwsf_NEW_is12_RedirectRequest(struct zx_ctx* c);
struct zxwsf_is12_RedirectRequest_s* zxwsf_DEEP_CLONE_is12_RedirectRequest(struct zx_ctx* c, struct zxwsf_is12_RedirectRequest_s* x, int dup_strs);
void zxwsf_DUP_STRS_is12_RedirectRequest(struct zx_ctx* c, struct zxwsf_is12_RedirectRequest_s* x);
void zxwsf_FREE_is12_RedirectRequest(struct zx_ctx* c, struct zxwsf_is12_RedirectRequest_s* x, int free_strs);
int zxwsf_WALK_SO_is12_RedirectRequest(struct zx_ctx* c, struct zxwsf_is12_RedirectRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is12_RedirectRequest(struct zx_ctx* c, struct zxwsf_is12_RedirectRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is12_RedirectRequest(struct zxwsf_is12_RedirectRequest_s* x);
char* zxwsf_ENC_SO_is12_RedirectRequest(struct zxwsf_is12_RedirectRequest_s* x, char* p);
char* zxwsf_ENC_WO_is12_RedirectRequest(struct zxwsf_is12_RedirectRequest_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is12_RedirectRequest(struct zx_ctx* c, struct zxwsf_is12_RedirectRequest_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is12_RedirectRequest(struct zx_ctx* c, struct zxwsf_is12_RedirectRequest_s* x);

struct zxwsf_is12_RedirectRequest_s {
  ZX_ELEM_EXT
  zxwsf_is12_RedirectRequest_EXT
  struct zx_str_s* redirectURL;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zxwsf_is12_RedirectRequest_GET_redirectURL(struct zxwsf_is12_RedirectRequest_s* x);
void zxwsf_is12_RedirectRequest_PUT_redirectURL(struct zxwsf_is12_RedirectRequest_s* x, struct zx_str_s* y);

/* -------------------------- is12_ResourceID -------------------------- */
/* refby( ) */
#ifndef zxwsf_is12_ResourceID_EXT
#define zxwsf_is12_ResourceID_EXT
#endif

struct zxwsf_is12_ResourceID_s* zxwsf_DEC_is12_ResourceID(struct zx_ctx* c);
struct zxwsf_is12_ResourceID_s* zxwsf_NEW_is12_ResourceID(struct zx_ctx* c);
struct zxwsf_is12_ResourceID_s* zxwsf_DEEP_CLONE_is12_ResourceID(struct zx_ctx* c, struct zxwsf_is12_ResourceID_s* x, int dup_strs);
void zxwsf_DUP_STRS_is12_ResourceID(struct zx_ctx* c, struct zxwsf_is12_ResourceID_s* x);
void zxwsf_FREE_is12_ResourceID(struct zx_ctx* c, struct zxwsf_is12_ResourceID_s* x, int free_strs);
int zxwsf_WALK_SO_is12_ResourceID(struct zx_ctx* c, struct zxwsf_is12_ResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is12_ResourceID(struct zx_ctx* c, struct zxwsf_is12_ResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is12_ResourceID(struct zxwsf_is12_ResourceID_s* x);
char* zxwsf_ENC_SO_is12_ResourceID(struct zxwsf_is12_ResourceID_s* x, char* p);
char* zxwsf_ENC_WO_is12_ResourceID(struct zxwsf_is12_ResourceID_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is12_ResourceID(struct zx_ctx* c, struct zxwsf_is12_ResourceID_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is12_ResourceID(struct zx_ctx* c, struct zxwsf_is12_ResourceID_s* x);

struct zxwsf_is12_ResourceID_s {
  ZX_ELEM_EXT
  zxwsf_is12_ResourceID_EXT
  struct zx_str_s* id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zxwsf_is12_ResourceID_GET_id(struct zxwsf_is12_ResourceID_s* x);
void zxwsf_is12_ResourceID_PUT_id(struct zxwsf_is12_ResourceID_s* x, struct zx_str_s* y);

/* -------------------------- is12_Select -------------------------- */
/* refby( zxwsf_is12_Inquiry_s ) */
#ifndef zxwsf_is12_Select_EXT
#define zxwsf_is12_Select_EXT
#endif

struct zxwsf_is12_Select_s* zxwsf_DEC_is12_Select(struct zx_ctx* c);
struct zxwsf_is12_Select_s* zxwsf_NEW_is12_Select(struct zx_ctx* c);
struct zxwsf_is12_Select_s* zxwsf_DEEP_CLONE_is12_Select(struct zx_ctx* c, struct zxwsf_is12_Select_s* x, int dup_strs);
void zxwsf_DUP_STRS_is12_Select(struct zx_ctx* c, struct zxwsf_is12_Select_s* x);
void zxwsf_FREE_is12_Select(struct zx_ctx* c, struct zxwsf_is12_Select_s* x, int free_strs);
int zxwsf_WALK_SO_is12_Select(struct zx_ctx* c, struct zxwsf_is12_Select_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is12_Select(struct zx_ctx* c, struct zxwsf_is12_Select_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is12_Select(struct zxwsf_is12_Select_s* x);
char* zxwsf_ENC_SO_is12_Select(struct zxwsf_is12_Select_s* x, char* p);
char* zxwsf_ENC_WO_is12_Select(struct zxwsf_is12_Select_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is12_Select(struct zx_ctx* c, struct zxwsf_is12_Select_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is12_Select(struct zx_ctx* c, struct zxwsf_is12_Select_s* x);

struct zxwsf_is12_Select_s {
  ZX_ELEM_EXT
  zxwsf_is12_Select_EXT
  struct zxwsf_is12_Help_s* Help;	/* {0,1} nada */
  struct zx_elem_s* Hint;	/* {0,1} xs:string */
  struct zx_elem_s* Label;	/* {0,1} xs:normalizedString */
  struct zx_elem_s* Value;	/* {0,1} xs:normalizedString */
  struct zx_str_s* name;	/* {1,1} attribute xs:ID */
  struct zxwsf_is12_Item_s* Item;	/* {2,unbounded}  */
  struct zx_str_s* multiple;	/* {0,1} attribute xs:boolean */
};

struct zx_str_s* zxwsf_is12_Select_GET_name(struct zxwsf_is12_Select_s* x);
struct zx_str_s* zxwsf_is12_Select_GET_multiple(struct zxwsf_is12_Select_s* x);
struct zxwsf_is12_Help_s* zxwsf_is12_Select_GET_Help(struct zxwsf_is12_Select_s* x, int n);
struct zx_elem_s* zxwsf_is12_Select_GET_Hint(struct zxwsf_is12_Select_s* x, int n);
struct zx_elem_s* zxwsf_is12_Select_GET_Label(struct zxwsf_is12_Select_s* x, int n);
struct zx_elem_s* zxwsf_is12_Select_GET_Value(struct zxwsf_is12_Select_s* x, int n);
struct zxwsf_is12_Item_s* zxwsf_is12_Select_GET_Item(struct zxwsf_is12_Select_s* x, int n);
int zxwsf_is12_Select_NUM_Help(struct zxwsf_is12_Select_s* x);
int zxwsf_is12_Select_NUM_Hint(struct zxwsf_is12_Select_s* x);
int zxwsf_is12_Select_NUM_Label(struct zxwsf_is12_Select_s* x);
int zxwsf_is12_Select_NUM_Value(struct zxwsf_is12_Select_s* x);
int zxwsf_is12_Select_NUM_Item(struct zxwsf_is12_Select_s* x);
struct zxwsf_is12_Help_s* zxwsf_is12_Select_POP_Help(struct zxwsf_is12_Select_s* x);
struct zx_elem_s* zxwsf_is12_Select_POP_Hint(struct zxwsf_is12_Select_s* x);
struct zx_elem_s* zxwsf_is12_Select_POP_Label(struct zxwsf_is12_Select_s* x);
struct zx_elem_s* zxwsf_is12_Select_POP_Value(struct zxwsf_is12_Select_s* x);
struct zxwsf_is12_Item_s* zxwsf_is12_Select_POP_Item(struct zxwsf_is12_Select_s* x);
void zxwsf_is12_Select_PUSH_Help(struct zxwsf_is12_Select_s* x, struct zxwsf_is12_Help_s* y);
void zxwsf_is12_Select_PUSH_Hint(struct zxwsf_is12_Select_s* x, struct zx_elem_s* y);
void zxwsf_is12_Select_PUSH_Label(struct zxwsf_is12_Select_s* x, struct zx_elem_s* y);
void zxwsf_is12_Select_PUSH_Value(struct zxwsf_is12_Select_s* x, struct zx_elem_s* y);
void zxwsf_is12_Select_PUSH_Item(struct zxwsf_is12_Select_s* x, struct zxwsf_is12_Item_s* y);
void zxwsf_is12_Select_PUT_name(struct zxwsf_is12_Select_s* x, struct zx_str_s* y);
void zxwsf_is12_Select_PUT_multiple(struct zxwsf_is12_Select_s* x, struct zx_str_s* y);
void zxwsf_is12_Select_PUT_Help(struct zxwsf_is12_Select_s* x, int n, struct zxwsf_is12_Help_s* y);
void zxwsf_is12_Select_PUT_Hint(struct zxwsf_is12_Select_s* x, int n, struct zx_elem_s* y);
void zxwsf_is12_Select_PUT_Label(struct zxwsf_is12_Select_s* x, int n, struct zx_elem_s* y);
void zxwsf_is12_Select_PUT_Value(struct zxwsf_is12_Select_s* x, int n, struct zx_elem_s* y);
void zxwsf_is12_Select_PUT_Item(struct zxwsf_is12_Select_s* x, int n, struct zxwsf_is12_Item_s* y);
void zxwsf_is12_Select_ADD_Help(struct zxwsf_is12_Select_s* x, int n, struct zxwsf_is12_Help_s* z);
void zxwsf_is12_Select_ADD_Hint(struct zxwsf_is12_Select_s* x, int n, struct zx_elem_s* z);
void zxwsf_is12_Select_ADD_Label(struct zxwsf_is12_Select_s* x, int n, struct zx_elem_s* z);
void zxwsf_is12_Select_ADD_Value(struct zxwsf_is12_Select_s* x, int n, struct zx_elem_s* z);
void zxwsf_is12_Select_ADD_Item(struct zxwsf_is12_Select_s* x, int n, struct zxwsf_is12_Item_s* z);
void zxwsf_is12_Select_DEL_Help(struct zxwsf_is12_Select_s* x, int n);
void zxwsf_is12_Select_DEL_Hint(struct zxwsf_is12_Select_s* x, int n);
void zxwsf_is12_Select_DEL_Label(struct zxwsf_is12_Select_s* x, int n);
void zxwsf_is12_Select_DEL_Value(struct zxwsf_is12_Select_s* x, int n);
void zxwsf_is12_Select_DEL_Item(struct zxwsf_is12_Select_s* x, int n);
void zxwsf_is12_Select_REV_Help(struct zxwsf_is12_Select_s* x);
void zxwsf_is12_Select_REV_Hint(struct zxwsf_is12_Select_s* x);
void zxwsf_is12_Select_REV_Label(struct zxwsf_is12_Select_s* x);
void zxwsf_is12_Select_REV_Value(struct zxwsf_is12_Select_s* x);
void zxwsf_is12_Select_REV_Item(struct zxwsf_is12_Select_s* x);

/* -------------------------- is12_Status -------------------------- */
/* refby( zxwsf_is12_Status_s zxwsf_is12_InteractionResponse_s ) */
#ifndef zxwsf_is12_Status_EXT
#define zxwsf_is12_Status_EXT
#endif

struct zxwsf_is12_Status_s* zxwsf_DEC_is12_Status(struct zx_ctx* c);
struct zxwsf_is12_Status_s* zxwsf_NEW_is12_Status(struct zx_ctx* c);
struct zxwsf_is12_Status_s* zxwsf_DEEP_CLONE_is12_Status(struct zx_ctx* c, struct zxwsf_is12_Status_s* x, int dup_strs);
void zxwsf_DUP_STRS_is12_Status(struct zx_ctx* c, struct zxwsf_is12_Status_s* x);
void zxwsf_FREE_is12_Status(struct zx_ctx* c, struct zxwsf_is12_Status_s* x, int free_strs);
int zxwsf_WALK_SO_is12_Status(struct zx_ctx* c, struct zxwsf_is12_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is12_Status(struct zx_ctx* c, struct zxwsf_is12_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is12_Status(struct zxwsf_is12_Status_s* x);
char* zxwsf_ENC_SO_is12_Status(struct zxwsf_is12_Status_s* x, char* p);
char* zxwsf_ENC_WO_is12_Status(struct zxwsf_is12_Status_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is12_Status(struct zx_ctx* c, struct zxwsf_is12_Status_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is12_Status(struct zx_ctx* c, struct zxwsf_is12_Status_s* x);

struct zxwsf_is12_Status_s {
  ZX_ELEM_EXT
  zxwsf_is12_Status_EXT
  struct zxwsf_is12_Status_s* Status;	/* {0,-1} nada */
  struct zx_str_s* code;	/* {1,1} attribute xs:QName */
  struct zx_str_s* ref;	/* {0,1} attribute xs:string */
  struct zx_str_s* comment;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zxwsf_is12_Status_GET_code(struct zxwsf_is12_Status_s* x);
struct zx_str_s* zxwsf_is12_Status_GET_ref(struct zxwsf_is12_Status_s* x);
struct zx_str_s* zxwsf_is12_Status_GET_comment(struct zxwsf_is12_Status_s* x);
struct zxwsf_is12_Status_s* zxwsf_is12_Status_GET_Status(struct zxwsf_is12_Status_s* x, int n);
int zxwsf_is12_Status_NUM_Status(struct zxwsf_is12_Status_s* x);
struct zxwsf_is12_Status_s* zxwsf_is12_Status_POP_Status(struct zxwsf_is12_Status_s* x);
void zxwsf_is12_Status_PUSH_Status(struct zxwsf_is12_Status_s* x, struct zxwsf_is12_Status_s* y);
void zxwsf_is12_Status_PUT_code(struct zxwsf_is12_Status_s* x, struct zx_str_s* y);
void zxwsf_is12_Status_PUT_ref(struct zxwsf_is12_Status_s* x, struct zx_str_s* y);
void zxwsf_is12_Status_PUT_comment(struct zxwsf_is12_Status_s* x, struct zx_str_s* y);
void zxwsf_is12_Status_PUT_Status(struct zxwsf_is12_Status_s* x, int n, struct zxwsf_is12_Status_s* y);
void zxwsf_is12_Status_ADD_Status(struct zxwsf_is12_Status_s* x, int n, struct zxwsf_is12_Status_s* z);
void zxwsf_is12_Status_DEL_Status(struct zxwsf_is12_Status_s* x, int n);
void zxwsf_is12_Status_REV_Status(struct zxwsf_is12_Status_s* x);

/* -------------------------- is12_Text -------------------------- */
/* refby( zxwsf_is12_Inquiry_s ) */
#ifndef zxwsf_is12_Text_EXT
#define zxwsf_is12_Text_EXT
#endif

struct zxwsf_is12_Text_s* zxwsf_DEC_is12_Text(struct zx_ctx* c);
struct zxwsf_is12_Text_s* zxwsf_NEW_is12_Text(struct zx_ctx* c);
struct zxwsf_is12_Text_s* zxwsf_DEEP_CLONE_is12_Text(struct zx_ctx* c, struct zxwsf_is12_Text_s* x, int dup_strs);
void zxwsf_DUP_STRS_is12_Text(struct zx_ctx* c, struct zxwsf_is12_Text_s* x);
void zxwsf_FREE_is12_Text(struct zx_ctx* c, struct zxwsf_is12_Text_s* x, int free_strs);
int zxwsf_WALK_SO_is12_Text(struct zx_ctx* c, struct zxwsf_is12_Text_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is12_Text(struct zx_ctx* c, struct zxwsf_is12_Text_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is12_Text(struct zxwsf_is12_Text_s* x);
char* zxwsf_ENC_SO_is12_Text(struct zxwsf_is12_Text_s* x, char* p);
char* zxwsf_ENC_WO_is12_Text(struct zxwsf_is12_Text_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is12_Text(struct zx_ctx* c, struct zxwsf_is12_Text_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is12_Text(struct zx_ctx* c, struct zxwsf_is12_Text_s* x);

struct zxwsf_is12_Text_s {
  ZX_ELEM_EXT
  zxwsf_is12_Text_EXT
  struct zxwsf_is12_Help_s* Help;	/* {0,1} nada */
  struct zx_elem_s* Hint;	/* {0,1} xs:string */
  struct zx_elem_s* Label;	/* {0,1} xs:normalizedString */
  struct zx_elem_s* Value;	/* {0,1} xs:normalizedString */
  struct zx_str_s* name;	/* {1,1} attribute xs:ID */
  struct zx_str_s* minChars;	/* {0,1} attribute xs:integer */
  struct zx_str_s* maxChars;	/* {0,1} attribute xs:integer */
  struct zx_str_s* format;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zxwsf_is12_Text_GET_name(struct zxwsf_is12_Text_s* x);
struct zx_str_s* zxwsf_is12_Text_GET_minChars(struct zxwsf_is12_Text_s* x);
struct zx_str_s* zxwsf_is12_Text_GET_maxChars(struct zxwsf_is12_Text_s* x);
struct zx_str_s* zxwsf_is12_Text_GET_format(struct zxwsf_is12_Text_s* x);
struct zxwsf_is12_Help_s* zxwsf_is12_Text_GET_Help(struct zxwsf_is12_Text_s* x, int n);
struct zx_elem_s* zxwsf_is12_Text_GET_Hint(struct zxwsf_is12_Text_s* x, int n);
struct zx_elem_s* zxwsf_is12_Text_GET_Label(struct zxwsf_is12_Text_s* x, int n);
struct zx_elem_s* zxwsf_is12_Text_GET_Value(struct zxwsf_is12_Text_s* x, int n);
int zxwsf_is12_Text_NUM_Help(struct zxwsf_is12_Text_s* x);
int zxwsf_is12_Text_NUM_Hint(struct zxwsf_is12_Text_s* x);
int zxwsf_is12_Text_NUM_Label(struct zxwsf_is12_Text_s* x);
int zxwsf_is12_Text_NUM_Value(struct zxwsf_is12_Text_s* x);
struct zxwsf_is12_Help_s* zxwsf_is12_Text_POP_Help(struct zxwsf_is12_Text_s* x);
struct zx_elem_s* zxwsf_is12_Text_POP_Hint(struct zxwsf_is12_Text_s* x);
struct zx_elem_s* zxwsf_is12_Text_POP_Label(struct zxwsf_is12_Text_s* x);
struct zx_elem_s* zxwsf_is12_Text_POP_Value(struct zxwsf_is12_Text_s* x);
void zxwsf_is12_Text_PUSH_Help(struct zxwsf_is12_Text_s* x, struct zxwsf_is12_Help_s* y);
void zxwsf_is12_Text_PUSH_Hint(struct zxwsf_is12_Text_s* x, struct zx_elem_s* y);
void zxwsf_is12_Text_PUSH_Label(struct zxwsf_is12_Text_s* x, struct zx_elem_s* y);
void zxwsf_is12_Text_PUSH_Value(struct zxwsf_is12_Text_s* x, struct zx_elem_s* y);
void zxwsf_is12_Text_PUT_name(struct zxwsf_is12_Text_s* x, struct zx_str_s* y);
void zxwsf_is12_Text_PUT_minChars(struct zxwsf_is12_Text_s* x, struct zx_str_s* y);
void zxwsf_is12_Text_PUT_maxChars(struct zxwsf_is12_Text_s* x, struct zx_str_s* y);
void zxwsf_is12_Text_PUT_format(struct zxwsf_is12_Text_s* x, struct zx_str_s* y);
void zxwsf_is12_Text_PUT_Help(struct zxwsf_is12_Text_s* x, int n, struct zxwsf_is12_Help_s* y);
void zxwsf_is12_Text_PUT_Hint(struct zxwsf_is12_Text_s* x, int n, struct zx_elem_s* y);
void zxwsf_is12_Text_PUT_Label(struct zxwsf_is12_Text_s* x, int n, struct zx_elem_s* y);
void zxwsf_is12_Text_PUT_Value(struct zxwsf_is12_Text_s* x, int n, struct zx_elem_s* y);
void zxwsf_is12_Text_ADD_Help(struct zxwsf_is12_Text_s* x, int n, struct zxwsf_is12_Help_s* z);
void zxwsf_is12_Text_ADD_Hint(struct zxwsf_is12_Text_s* x, int n, struct zx_elem_s* z);
void zxwsf_is12_Text_ADD_Label(struct zxwsf_is12_Text_s* x, int n, struct zx_elem_s* z);
void zxwsf_is12_Text_ADD_Value(struct zxwsf_is12_Text_s* x, int n, struct zx_elem_s* z);
void zxwsf_is12_Text_DEL_Help(struct zxwsf_is12_Text_s* x, int n);
void zxwsf_is12_Text_DEL_Hint(struct zxwsf_is12_Text_s* x, int n);
void zxwsf_is12_Text_DEL_Label(struct zxwsf_is12_Text_s* x, int n);
void zxwsf_is12_Text_DEL_Value(struct zxwsf_is12_Text_s* x, int n);
void zxwsf_is12_Text_REV_Help(struct zxwsf_is12_Text_s* x);
void zxwsf_is12_Text_REV_Hint(struct zxwsf_is12_Text_s* x);
void zxwsf_is12_Text_REV_Label(struct zxwsf_is12_Text_s* x);
void zxwsf_is12_Text_REV_Value(struct zxwsf_is12_Text_s* x);

/* -------------------------- is12_UserInteraction -------------------------- */
/* refby( ) */
#ifndef zxwsf_is12_UserInteraction_EXT
#define zxwsf_is12_UserInteraction_EXT
#endif

struct zxwsf_is12_UserInteraction_s* zxwsf_DEC_is12_UserInteraction(struct zx_ctx* c);
struct zxwsf_is12_UserInteraction_s* zxwsf_NEW_is12_UserInteraction(struct zx_ctx* c);
struct zxwsf_is12_UserInteraction_s* zxwsf_DEEP_CLONE_is12_UserInteraction(struct zx_ctx* c, struct zxwsf_is12_UserInteraction_s* x, int dup_strs);
void zxwsf_DUP_STRS_is12_UserInteraction(struct zx_ctx* c, struct zxwsf_is12_UserInteraction_s* x);
void zxwsf_FREE_is12_UserInteraction(struct zx_ctx* c, struct zxwsf_is12_UserInteraction_s* x, int free_strs);
int zxwsf_WALK_SO_is12_UserInteraction(struct zx_ctx* c, struct zxwsf_is12_UserInteraction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is12_UserInteraction(struct zx_ctx* c, struct zxwsf_is12_UserInteraction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is12_UserInteraction(struct zxwsf_is12_UserInteraction_s* x);
char* zxwsf_ENC_SO_is12_UserInteraction(struct zxwsf_is12_UserInteraction_s* x, char* p);
char* zxwsf_ENC_WO_is12_UserInteraction(struct zxwsf_is12_UserInteraction_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is12_UserInteraction(struct zx_ctx* c, struct zxwsf_is12_UserInteraction_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is12_UserInteraction(struct zx_ctx* c, struct zxwsf_is12_UserInteraction_s* x);

struct zxwsf_is12_UserInteraction_s {
  ZX_ELEM_EXT
  zxwsf_is12_UserInteraction_EXT
  struct zxwsf_is12_InteractionService_s* InteractionService;	/* {0,1}  */
  struct zx_str_s* id;	/* {0,1} attribute xs:ID */
  struct zx_str_s* interact;	/* {0,1} attribute xs:QName */
  struct zx_str_s* language;	/* {0,1} attribute xs:NMTOKENS */
  struct zx_str_s* redirect;	/* {0,1} attribute xs:boolean */
  struct zx_str_s* maxInteractTime;	/* {0,1} attribute xs:integer */
  struct zx_str_s* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* mustUnderstand;	/* {0,1} attribute xs:boolean */
};

struct zx_str_s* zxwsf_is12_UserInteraction_GET_id(struct zxwsf_is12_UserInteraction_s* x);
struct zx_str_s* zxwsf_is12_UserInteraction_GET_interact(struct zxwsf_is12_UserInteraction_s* x);
struct zx_str_s* zxwsf_is12_UserInteraction_GET_language(struct zxwsf_is12_UserInteraction_s* x);
struct zx_str_s* zxwsf_is12_UserInteraction_GET_redirect(struct zxwsf_is12_UserInteraction_s* x);
struct zx_str_s* zxwsf_is12_UserInteraction_GET_maxInteractTime(struct zxwsf_is12_UserInteraction_s* x);
struct zx_str_s* zxwsf_is12_UserInteraction_GET_actor(struct zxwsf_is12_UserInteraction_s* x);
struct zx_str_s* zxwsf_is12_UserInteraction_GET_mustUnderstand(struct zxwsf_is12_UserInteraction_s* x);
struct zxwsf_is12_InteractionService_s* zxwsf_is12_UserInteraction_GET_InteractionService(struct zxwsf_is12_UserInteraction_s* x, int n);
int zxwsf_is12_UserInteraction_NUM_InteractionService(struct zxwsf_is12_UserInteraction_s* x);
struct zxwsf_is12_InteractionService_s* zxwsf_is12_UserInteraction_POP_InteractionService(struct zxwsf_is12_UserInteraction_s* x);
void zxwsf_is12_UserInteraction_PUSH_InteractionService(struct zxwsf_is12_UserInteraction_s* x, struct zxwsf_is12_InteractionService_s* y);
void zxwsf_is12_UserInteraction_PUT_id(struct zxwsf_is12_UserInteraction_s* x, struct zx_str_s* y);
void zxwsf_is12_UserInteraction_PUT_interact(struct zxwsf_is12_UserInteraction_s* x, struct zx_str_s* y);
void zxwsf_is12_UserInteraction_PUT_language(struct zxwsf_is12_UserInteraction_s* x, struct zx_str_s* y);
void zxwsf_is12_UserInteraction_PUT_redirect(struct zxwsf_is12_UserInteraction_s* x, struct zx_str_s* y);
void zxwsf_is12_UserInteraction_PUT_maxInteractTime(struct zxwsf_is12_UserInteraction_s* x, struct zx_str_s* y);
void zxwsf_is12_UserInteraction_PUT_actor(struct zxwsf_is12_UserInteraction_s* x, struct zx_str_s* y);
void zxwsf_is12_UserInteraction_PUT_mustUnderstand(struct zxwsf_is12_UserInteraction_s* x, struct zx_str_s* y);
void zxwsf_is12_UserInteraction_PUT_InteractionService(struct zxwsf_is12_UserInteraction_s* x, int n, struct zxwsf_is12_InteractionService_s* y);
void zxwsf_is12_UserInteraction_ADD_InteractionService(struct zxwsf_is12_UserInteraction_s* x, int n, struct zxwsf_is12_InteractionService_s* z);
void zxwsf_is12_UserInteraction_DEL_InteractionService(struct zxwsf_is12_UserInteraction_s* x, int n);
void zxwsf_is12_UserInteraction_REV_InteractionService(struct zxwsf_is12_UserInteraction_s* x);

/* -------------------------- is_Confirm -------------------------- */
/* refby( zxwsf_is_Inquiry_s ) */
#ifndef zxwsf_is_Confirm_EXT
#define zxwsf_is_Confirm_EXT
#endif

struct zxwsf_is_Confirm_s* zxwsf_DEC_is_Confirm(struct zx_ctx* c);
struct zxwsf_is_Confirm_s* zxwsf_NEW_is_Confirm(struct zx_ctx* c);
struct zxwsf_is_Confirm_s* zxwsf_DEEP_CLONE_is_Confirm(struct zx_ctx* c, struct zxwsf_is_Confirm_s* x, int dup_strs);
void zxwsf_DUP_STRS_is_Confirm(struct zx_ctx* c, struct zxwsf_is_Confirm_s* x);
void zxwsf_FREE_is_Confirm(struct zx_ctx* c, struct zxwsf_is_Confirm_s* x, int free_strs);
int zxwsf_WALK_SO_is_Confirm(struct zx_ctx* c, struct zxwsf_is_Confirm_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is_Confirm(struct zx_ctx* c, struct zxwsf_is_Confirm_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is_Confirm(struct zxwsf_is_Confirm_s* x);
char* zxwsf_ENC_SO_is_Confirm(struct zxwsf_is_Confirm_s* x, char* p);
char* zxwsf_ENC_WO_is_Confirm(struct zxwsf_is_Confirm_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is_Confirm(struct zx_ctx* c, struct zxwsf_is_Confirm_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is_Confirm(struct zx_ctx* c, struct zxwsf_is_Confirm_s* x);

struct zxwsf_is_Confirm_s {
  ZX_ELEM_EXT
  zxwsf_is_Confirm_EXT
  struct zxwsf_is_Help_s* Help;	/* {0,1} nada */
  struct zx_elem_s* Hint;	/* {0,1} xs:string */
  struct zx_elem_s* Label;	/* {0,1} xs:normalizedString */
  struct zx_elem_s* Value;	/* {0,1} xs:normalizedString */
  struct zx_str_s* name;	/* {1,1} attribute xs:ID */
};

struct zx_str_s* zxwsf_is_Confirm_GET_name(struct zxwsf_is_Confirm_s* x);
struct zxwsf_is_Help_s* zxwsf_is_Confirm_GET_Help(struct zxwsf_is_Confirm_s* x, int n);
struct zx_elem_s* zxwsf_is_Confirm_GET_Hint(struct zxwsf_is_Confirm_s* x, int n);
struct zx_elem_s* zxwsf_is_Confirm_GET_Label(struct zxwsf_is_Confirm_s* x, int n);
struct zx_elem_s* zxwsf_is_Confirm_GET_Value(struct zxwsf_is_Confirm_s* x, int n);
int zxwsf_is_Confirm_NUM_Help(struct zxwsf_is_Confirm_s* x);
int zxwsf_is_Confirm_NUM_Hint(struct zxwsf_is_Confirm_s* x);
int zxwsf_is_Confirm_NUM_Label(struct zxwsf_is_Confirm_s* x);
int zxwsf_is_Confirm_NUM_Value(struct zxwsf_is_Confirm_s* x);
struct zxwsf_is_Help_s* zxwsf_is_Confirm_POP_Help(struct zxwsf_is_Confirm_s* x);
struct zx_elem_s* zxwsf_is_Confirm_POP_Hint(struct zxwsf_is_Confirm_s* x);
struct zx_elem_s* zxwsf_is_Confirm_POP_Label(struct zxwsf_is_Confirm_s* x);
struct zx_elem_s* zxwsf_is_Confirm_POP_Value(struct zxwsf_is_Confirm_s* x);
void zxwsf_is_Confirm_PUSH_Help(struct zxwsf_is_Confirm_s* x, struct zxwsf_is_Help_s* y);
void zxwsf_is_Confirm_PUSH_Hint(struct zxwsf_is_Confirm_s* x, struct zx_elem_s* y);
void zxwsf_is_Confirm_PUSH_Label(struct zxwsf_is_Confirm_s* x, struct zx_elem_s* y);
void zxwsf_is_Confirm_PUSH_Value(struct zxwsf_is_Confirm_s* x, struct zx_elem_s* y);
void zxwsf_is_Confirm_PUT_name(struct zxwsf_is_Confirm_s* x, struct zx_str_s* y);
void zxwsf_is_Confirm_PUT_Help(struct zxwsf_is_Confirm_s* x, int n, struct zxwsf_is_Help_s* y);
void zxwsf_is_Confirm_PUT_Hint(struct zxwsf_is_Confirm_s* x, int n, struct zx_elem_s* y);
void zxwsf_is_Confirm_PUT_Label(struct zxwsf_is_Confirm_s* x, int n, struct zx_elem_s* y);
void zxwsf_is_Confirm_PUT_Value(struct zxwsf_is_Confirm_s* x, int n, struct zx_elem_s* y);
void zxwsf_is_Confirm_ADD_Help(struct zxwsf_is_Confirm_s* x, int n, struct zxwsf_is_Help_s* z);
void zxwsf_is_Confirm_ADD_Hint(struct zxwsf_is_Confirm_s* x, int n, struct zx_elem_s* z);
void zxwsf_is_Confirm_ADD_Label(struct zxwsf_is_Confirm_s* x, int n, struct zx_elem_s* z);
void zxwsf_is_Confirm_ADD_Value(struct zxwsf_is_Confirm_s* x, int n, struct zx_elem_s* z);
void zxwsf_is_Confirm_DEL_Help(struct zxwsf_is_Confirm_s* x, int n);
void zxwsf_is_Confirm_DEL_Hint(struct zxwsf_is_Confirm_s* x, int n);
void zxwsf_is_Confirm_DEL_Label(struct zxwsf_is_Confirm_s* x, int n);
void zxwsf_is_Confirm_DEL_Value(struct zxwsf_is_Confirm_s* x, int n);
void zxwsf_is_Confirm_REV_Help(struct zxwsf_is_Confirm_s* x);
void zxwsf_is_Confirm_REV_Hint(struct zxwsf_is_Confirm_s* x);
void zxwsf_is_Confirm_REV_Label(struct zxwsf_is_Confirm_s* x);
void zxwsf_is_Confirm_REV_Value(struct zxwsf_is_Confirm_s* x);

/* -------------------------- is_Help -------------------------- */
/* refby( zxwsf_is_Confirm_s zxwsf_is_Text_s zxwsf_is_Select_s zxwsf_is_Inquiry_s ) */
#ifndef zxwsf_is_Help_EXT
#define zxwsf_is_Help_EXT
#endif

struct zxwsf_is_Help_s* zxwsf_DEC_is_Help(struct zx_ctx* c);
struct zxwsf_is_Help_s* zxwsf_NEW_is_Help(struct zx_ctx* c);
struct zxwsf_is_Help_s* zxwsf_DEEP_CLONE_is_Help(struct zx_ctx* c, struct zxwsf_is_Help_s* x, int dup_strs);
void zxwsf_DUP_STRS_is_Help(struct zx_ctx* c, struct zxwsf_is_Help_s* x);
void zxwsf_FREE_is_Help(struct zx_ctx* c, struct zxwsf_is_Help_s* x, int free_strs);
int zxwsf_WALK_SO_is_Help(struct zx_ctx* c, struct zxwsf_is_Help_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is_Help(struct zx_ctx* c, struct zxwsf_is_Help_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is_Help(struct zxwsf_is_Help_s* x);
char* zxwsf_ENC_SO_is_Help(struct zxwsf_is_Help_s* x, char* p);
char* zxwsf_ENC_WO_is_Help(struct zxwsf_is_Help_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is_Help(struct zx_ctx* c, struct zxwsf_is_Help_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is_Help(struct zx_ctx* c, struct zxwsf_is_Help_s* x);

struct zxwsf_is_Help_s {
  ZX_ELEM_EXT
  zxwsf_is_Help_EXT
  struct zx_str_s* label;	/* {0,1} attribute xs:string */
  struct zx_str_s* link;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* moreLink;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxwsf_is_Help_GET_label(struct zxwsf_is_Help_s* x);
struct zx_str_s* zxwsf_is_Help_GET_link(struct zxwsf_is_Help_s* x);
struct zx_str_s* zxwsf_is_Help_GET_moreLink(struct zxwsf_is_Help_s* x);
void zxwsf_is_Help_PUT_label(struct zxwsf_is_Help_s* x, struct zx_str_s* y);
void zxwsf_is_Help_PUT_link(struct zxwsf_is_Help_s* x, struct zx_str_s* y);
void zxwsf_is_Help_PUT_moreLink(struct zxwsf_is_Help_s* x, struct zx_str_s* y);

/* -------------------------- is_Inquiry -------------------------- */
/* refby( zxwsf_is_InteractionRequest_s zxwsf_is_InteractionStatement_s ) */
#ifndef zxwsf_is_Inquiry_EXT
#define zxwsf_is_Inquiry_EXT
#endif

struct zxwsf_is_Inquiry_s* zxwsf_DEC_is_Inquiry(struct zx_ctx* c);
struct zxwsf_is_Inquiry_s* zxwsf_NEW_is_Inquiry(struct zx_ctx* c);
struct zxwsf_is_Inquiry_s* zxwsf_DEEP_CLONE_is_Inquiry(struct zx_ctx* c, struct zxwsf_is_Inquiry_s* x, int dup_strs);
void zxwsf_DUP_STRS_is_Inquiry(struct zx_ctx* c, struct zxwsf_is_Inquiry_s* x);
void zxwsf_FREE_is_Inquiry(struct zx_ctx* c, struct zxwsf_is_Inquiry_s* x, int free_strs);
int zxwsf_WALK_SO_is_Inquiry(struct zx_ctx* c, struct zxwsf_is_Inquiry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is_Inquiry(struct zx_ctx* c, struct zxwsf_is_Inquiry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is_Inquiry(struct zxwsf_is_Inquiry_s* x);
char* zxwsf_ENC_SO_is_Inquiry(struct zxwsf_is_Inquiry_s* x, char* p);
char* zxwsf_ENC_WO_is_Inquiry(struct zxwsf_is_Inquiry_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is_Inquiry(struct zx_ctx* c, struct zxwsf_is_Inquiry_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is_Inquiry(struct zx_ctx* c, struct zxwsf_is_Inquiry_s* x);

struct zxwsf_is_Inquiry_s {
  ZX_ELEM_EXT
  zxwsf_is_Inquiry_EXT
  struct zxwsf_is_Help_s* Help;	/* {0,1} nada */
  struct zxwsf_is_Select_s* Select;	/* {0,-1} nada */
  struct zxwsf_is_Confirm_s* Confirm;	/* {0,-1}  */
  struct zxwsf_is_Text_s* Text;	/* {0,-1} nada */
  struct zx_str_s* id;	/* {0,1} attribute xs:ID */
  struct zx_str_s* title;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zxwsf_is_Inquiry_GET_id(struct zxwsf_is_Inquiry_s* x);
struct zx_str_s* zxwsf_is_Inquiry_GET_title(struct zxwsf_is_Inquiry_s* x);
struct zxwsf_is_Help_s* zxwsf_is_Inquiry_GET_Help(struct zxwsf_is_Inquiry_s* x, int n);
struct zxwsf_is_Select_s* zxwsf_is_Inquiry_GET_Select(struct zxwsf_is_Inquiry_s* x, int n);
struct zxwsf_is_Confirm_s* zxwsf_is_Inquiry_GET_Confirm(struct zxwsf_is_Inquiry_s* x, int n);
struct zxwsf_is_Text_s* zxwsf_is_Inquiry_GET_Text(struct zxwsf_is_Inquiry_s* x, int n);
int zxwsf_is_Inquiry_NUM_Help(struct zxwsf_is_Inquiry_s* x);
int zxwsf_is_Inquiry_NUM_Select(struct zxwsf_is_Inquiry_s* x);
int zxwsf_is_Inquiry_NUM_Confirm(struct zxwsf_is_Inquiry_s* x);
int zxwsf_is_Inquiry_NUM_Text(struct zxwsf_is_Inquiry_s* x);
struct zxwsf_is_Help_s* zxwsf_is_Inquiry_POP_Help(struct zxwsf_is_Inquiry_s* x);
struct zxwsf_is_Select_s* zxwsf_is_Inquiry_POP_Select(struct zxwsf_is_Inquiry_s* x);
struct zxwsf_is_Confirm_s* zxwsf_is_Inquiry_POP_Confirm(struct zxwsf_is_Inquiry_s* x);
struct zxwsf_is_Text_s* zxwsf_is_Inquiry_POP_Text(struct zxwsf_is_Inquiry_s* x);
void zxwsf_is_Inquiry_PUSH_Help(struct zxwsf_is_Inquiry_s* x, struct zxwsf_is_Help_s* y);
void zxwsf_is_Inquiry_PUSH_Select(struct zxwsf_is_Inquiry_s* x, struct zxwsf_is_Select_s* y);
void zxwsf_is_Inquiry_PUSH_Confirm(struct zxwsf_is_Inquiry_s* x, struct zxwsf_is_Confirm_s* y);
void zxwsf_is_Inquiry_PUSH_Text(struct zxwsf_is_Inquiry_s* x, struct zxwsf_is_Text_s* y);
void zxwsf_is_Inquiry_PUT_id(struct zxwsf_is_Inquiry_s* x, struct zx_str_s* y);
void zxwsf_is_Inquiry_PUT_title(struct zxwsf_is_Inquiry_s* x, struct zx_str_s* y);
void zxwsf_is_Inquiry_PUT_Help(struct zxwsf_is_Inquiry_s* x, int n, struct zxwsf_is_Help_s* y);
void zxwsf_is_Inquiry_PUT_Select(struct zxwsf_is_Inquiry_s* x, int n, struct zxwsf_is_Select_s* y);
void zxwsf_is_Inquiry_PUT_Confirm(struct zxwsf_is_Inquiry_s* x, int n, struct zxwsf_is_Confirm_s* y);
void zxwsf_is_Inquiry_PUT_Text(struct zxwsf_is_Inquiry_s* x, int n, struct zxwsf_is_Text_s* y);
void zxwsf_is_Inquiry_ADD_Help(struct zxwsf_is_Inquiry_s* x, int n, struct zxwsf_is_Help_s* z);
void zxwsf_is_Inquiry_ADD_Select(struct zxwsf_is_Inquiry_s* x, int n, struct zxwsf_is_Select_s* z);
void zxwsf_is_Inquiry_ADD_Confirm(struct zxwsf_is_Inquiry_s* x, int n, struct zxwsf_is_Confirm_s* z);
void zxwsf_is_Inquiry_ADD_Text(struct zxwsf_is_Inquiry_s* x, int n, struct zxwsf_is_Text_s* z);
void zxwsf_is_Inquiry_DEL_Help(struct zxwsf_is_Inquiry_s* x, int n);
void zxwsf_is_Inquiry_DEL_Select(struct zxwsf_is_Inquiry_s* x, int n);
void zxwsf_is_Inquiry_DEL_Confirm(struct zxwsf_is_Inquiry_s* x, int n);
void zxwsf_is_Inquiry_DEL_Text(struct zxwsf_is_Inquiry_s* x, int n);
void zxwsf_is_Inquiry_REV_Help(struct zxwsf_is_Inquiry_s* x);
void zxwsf_is_Inquiry_REV_Select(struct zxwsf_is_Inquiry_s* x);
void zxwsf_is_Inquiry_REV_Confirm(struct zxwsf_is_Inquiry_s* x);
void zxwsf_is_Inquiry_REV_Text(struct zxwsf_is_Inquiry_s* x);

/* -------------------------- is_InteractionRequest -------------------------- */
/* refby( ) */
#ifndef zxwsf_is_InteractionRequest_EXT
#define zxwsf_is_InteractionRequest_EXT
#endif

struct zxwsf_is_InteractionRequest_s* zxwsf_DEC_is_InteractionRequest(struct zx_ctx* c);
struct zxwsf_is_InteractionRequest_s* zxwsf_NEW_is_InteractionRequest(struct zx_ctx* c);
struct zxwsf_is_InteractionRequest_s* zxwsf_DEEP_CLONE_is_InteractionRequest(struct zx_ctx* c, struct zxwsf_is_InteractionRequest_s* x, int dup_strs);
void zxwsf_DUP_STRS_is_InteractionRequest(struct zx_ctx* c, struct zxwsf_is_InteractionRequest_s* x);
void zxwsf_FREE_is_InteractionRequest(struct zx_ctx* c, struct zxwsf_is_InteractionRequest_s* x, int free_strs);
int zxwsf_WALK_SO_is_InteractionRequest(struct zx_ctx* c, struct zxwsf_is_InteractionRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is_InteractionRequest(struct zx_ctx* c, struct zxwsf_is_InteractionRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is_InteractionRequest(struct zxwsf_is_InteractionRequest_s* x);
char* zxwsf_ENC_SO_is_InteractionRequest(struct zxwsf_is_InteractionRequest_s* x, char* p);
char* zxwsf_ENC_WO_is_InteractionRequest(struct zxwsf_is_InteractionRequest_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is_InteractionRequest(struct zx_ctx* c, struct zxwsf_is_InteractionRequest_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is_InteractionRequest(struct zx_ctx* c, struct zxwsf_is_InteractionRequest_s* x);

struct zxwsf_is_InteractionRequest_s {
  ZX_ELEM_EXT
  zxwsf_is_InteractionRequest_EXT
  struct zxwsf_is_Inquiry_s* Inquiry;	/* {1,-1} nada */
  struct zx_elem_s* KeyInfo;	/* {0,1}  */
  struct zx_str_s* id;	/* {0,1} attribute xs:ID */
  struct zx_str_s* language;	/* {0,1} attribute xs:NMTOKENS */
  struct zx_str_s* maxInteractTime;	/* {0,1} attribute xs:integer */
  struct zx_str_s* signed_is_c_keyword;	/* {0,1} attribute xs:token */
};

struct zx_str_s* zxwsf_is_InteractionRequest_GET_id(struct zxwsf_is_InteractionRequest_s* x);
struct zx_str_s* zxwsf_is_InteractionRequest_GET_language(struct zxwsf_is_InteractionRequest_s* x);
struct zx_str_s* zxwsf_is_InteractionRequest_GET_maxInteractTime(struct zxwsf_is_InteractionRequest_s* x);
struct zx_str_s* zxwsf_is_InteractionRequest_GET_signed_is_c_keyword(struct zxwsf_is_InteractionRequest_s* x);
struct zxwsf_is_Inquiry_s* zxwsf_is_InteractionRequest_GET_Inquiry(struct zxwsf_is_InteractionRequest_s* x, int n);
struct zx_elem_s* zxwsf_is_InteractionRequest_GET_KeyInfo(struct zxwsf_is_InteractionRequest_s* x, int n);
int zxwsf_is_InteractionRequest_NUM_Inquiry(struct zxwsf_is_InteractionRequest_s* x);
int zxwsf_is_InteractionRequest_NUM_KeyInfo(struct zxwsf_is_InteractionRequest_s* x);
struct zxwsf_is_Inquiry_s* zxwsf_is_InteractionRequest_POP_Inquiry(struct zxwsf_is_InteractionRequest_s* x);
struct zx_elem_s* zxwsf_is_InteractionRequest_POP_KeyInfo(struct zxwsf_is_InteractionRequest_s* x);
void zxwsf_is_InteractionRequest_PUSH_Inquiry(struct zxwsf_is_InteractionRequest_s* x, struct zxwsf_is_Inquiry_s* y);
void zxwsf_is_InteractionRequest_PUSH_KeyInfo(struct zxwsf_is_InteractionRequest_s* x, struct zx_elem_s* y);
void zxwsf_is_InteractionRequest_PUT_id(struct zxwsf_is_InteractionRequest_s* x, struct zx_str_s* y);
void zxwsf_is_InteractionRequest_PUT_language(struct zxwsf_is_InteractionRequest_s* x, struct zx_str_s* y);
void zxwsf_is_InteractionRequest_PUT_maxInteractTime(struct zxwsf_is_InteractionRequest_s* x, struct zx_str_s* y);
void zxwsf_is_InteractionRequest_PUT_signed_is_c_keyword(struct zxwsf_is_InteractionRequest_s* x, struct zx_str_s* y);
void zxwsf_is_InteractionRequest_PUT_Inquiry(struct zxwsf_is_InteractionRequest_s* x, int n, struct zxwsf_is_Inquiry_s* y);
void zxwsf_is_InteractionRequest_PUT_KeyInfo(struct zxwsf_is_InteractionRequest_s* x, int n, struct zx_elem_s* y);
void zxwsf_is_InteractionRequest_ADD_Inquiry(struct zxwsf_is_InteractionRequest_s* x, int n, struct zxwsf_is_Inquiry_s* z);
void zxwsf_is_InteractionRequest_ADD_KeyInfo(struct zxwsf_is_InteractionRequest_s* x, int n, struct zx_elem_s* z);
void zxwsf_is_InteractionRequest_DEL_Inquiry(struct zxwsf_is_InteractionRequest_s* x, int n);
void zxwsf_is_InteractionRequest_DEL_KeyInfo(struct zxwsf_is_InteractionRequest_s* x, int n);
void zxwsf_is_InteractionRequest_REV_Inquiry(struct zxwsf_is_InteractionRequest_s* x);
void zxwsf_is_InteractionRequest_REV_KeyInfo(struct zxwsf_is_InteractionRequest_s* x);

/* -------------------------- is_InteractionResponse -------------------------- */
/* refby( ) */
#ifndef zxwsf_is_InteractionResponse_EXT
#define zxwsf_is_InteractionResponse_EXT
#endif

struct zxwsf_is_InteractionResponse_s* zxwsf_DEC_is_InteractionResponse(struct zx_ctx* c);
struct zxwsf_is_InteractionResponse_s* zxwsf_NEW_is_InteractionResponse(struct zx_ctx* c);
struct zxwsf_is_InteractionResponse_s* zxwsf_DEEP_CLONE_is_InteractionResponse(struct zx_ctx* c, struct zxwsf_is_InteractionResponse_s* x, int dup_strs);
void zxwsf_DUP_STRS_is_InteractionResponse(struct zx_ctx* c, struct zxwsf_is_InteractionResponse_s* x);
void zxwsf_FREE_is_InteractionResponse(struct zx_ctx* c, struct zxwsf_is_InteractionResponse_s* x, int free_strs);
int zxwsf_WALK_SO_is_InteractionResponse(struct zx_ctx* c, struct zxwsf_is_InteractionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is_InteractionResponse(struct zx_ctx* c, struct zxwsf_is_InteractionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is_InteractionResponse(struct zxwsf_is_InteractionResponse_s* x);
char* zxwsf_ENC_SO_is_InteractionResponse(struct zxwsf_is_InteractionResponse_s* x, char* p);
char* zxwsf_ENC_WO_is_InteractionResponse(struct zxwsf_is_InteractionResponse_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is_InteractionResponse(struct zx_ctx* c, struct zxwsf_is_InteractionResponse_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is_InteractionResponse(struct zx_ctx* c, struct zxwsf_is_InteractionResponse_s* x);

struct zxwsf_is_InteractionResponse_s {
  ZX_ELEM_EXT
  zxwsf_is_InteractionResponse_EXT
  struct zxwsf_lu_Status_s* Status;	/* {1,1} nada */
  struct zxwsf_is_InteractionStatement_s* InteractionStatement;	/* {0,-1}  */
  struct zxwsf_is_Parameter_s* Parameter;	/* {0,-1}  */
};

struct zxwsf_lu_Status_s* zxwsf_is_InteractionResponse_GET_Status(struct zxwsf_is_InteractionResponse_s* x, int n);
struct zxwsf_is_InteractionStatement_s* zxwsf_is_InteractionResponse_GET_InteractionStatement(struct zxwsf_is_InteractionResponse_s* x, int n);
struct zxwsf_is_Parameter_s* zxwsf_is_InteractionResponse_GET_Parameter(struct zxwsf_is_InteractionResponse_s* x, int n);
int zxwsf_is_InteractionResponse_NUM_Status(struct zxwsf_is_InteractionResponse_s* x);
int zxwsf_is_InteractionResponse_NUM_InteractionStatement(struct zxwsf_is_InteractionResponse_s* x);
int zxwsf_is_InteractionResponse_NUM_Parameter(struct zxwsf_is_InteractionResponse_s* x);
struct zxwsf_lu_Status_s* zxwsf_is_InteractionResponse_POP_Status(struct zxwsf_is_InteractionResponse_s* x);
struct zxwsf_is_InteractionStatement_s* zxwsf_is_InteractionResponse_POP_InteractionStatement(struct zxwsf_is_InteractionResponse_s* x);
struct zxwsf_is_Parameter_s* zxwsf_is_InteractionResponse_POP_Parameter(struct zxwsf_is_InteractionResponse_s* x);
void zxwsf_is_InteractionResponse_PUSH_Status(struct zxwsf_is_InteractionResponse_s* x, struct zxwsf_lu_Status_s* y);
void zxwsf_is_InteractionResponse_PUSH_InteractionStatement(struct zxwsf_is_InteractionResponse_s* x, struct zxwsf_is_InteractionStatement_s* y);
void zxwsf_is_InteractionResponse_PUSH_Parameter(struct zxwsf_is_InteractionResponse_s* x, struct zxwsf_is_Parameter_s* y);
void zxwsf_is_InteractionResponse_PUT_Status(struct zxwsf_is_InteractionResponse_s* x, int n, struct zxwsf_lu_Status_s* y);
void zxwsf_is_InteractionResponse_PUT_InteractionStatement(struct zxwsf_is_InteractionResponse_s* x, int n, struct zxwsf_is_InteractionStatement_s* y);
void zxwsf_is_InteractionResponse_PUT_Parameter(struct zxwsf_is_InteractionResponse_s* x, int n, struct zxwsf_is_Parameter_s* y);
void zxwsf_is_InteractionResponse_ADD_Status(struct zxwsf_is_InteractionResponse_s* x, int n, struct zxwsf_lu_Status_s* z);
void zxwsf_is_InteractionResponse_ADD_InteractionStatement(struct zxwsf_is_InteractionResponse_s* x, int n, struct zxwsf_is_InteractionStatement_s* z);
void zxwsf_is_InteractionResponse_ADD_Parameter(struct zxwsf_is_InteractionResponse_s* x, int n, struct zxwsf_is_Parameter_s* z);
void zxwsf_is_InteractionResponse_DEL_Status(struct zxwsf_is_InteractionResponse_s* x, int n);
void zxwsf_is_InteractionResponse_DEL_InteractionStatement(struct zxwsf_is_InteractionResponse_s* x, int n);
void zxwsf_is_InteractionResponse_DEL_Parameter(struct zxwsf_is_InteractionResponse_s* x, int n);
void zxwsf_is_InteractionResponse_REV_Status(struct zxwsf_is_InteractionResponse_s* x);
void zxwsf_is_InteractionResponse_REV_InteractionStatement(struct zxwsf_is_InteractionResponse_s* x);
void zxwsf_is_InteractionResponse_REV_Parameter(struct zxwsf_is_InteractionResponse_s* x);

/* -------------------------- is_InteractionStatement -------------------------- */
/* refby( zxwsf_is_InteractionResponse_s ) */
#ifndef zxwsf_is_InteractionStatement_EXT
#define zxwsf_is_InteractionStatement_EXT
#endif

struct zxwsf_is_InteractionStatement_s* zxwsf_DEC_is_InteractionStatement(struct zx_ctx* c);
struct zxwsf_is_InteractionStatement_s* zxwsf_NEW_is_InteractionStatement(struct zx_ctx* c);
struct zxwsf_is_InteractionStatement_s* zxwsf_DEEP_CLONE_is_InteractionStatement(struct zx_ctx* c, struct zxwsf_is_InteractionStatement_s* x, int dup_strs);
void zxwsf_DUP_STRS_is_InteractionStatement(struct zx_ctx* c, struct zxwsf_is_InteractionStatement_s* x);
void zxwsf_FREE_is_InteractionStatement(struct zx_ctx* c, struct zxwsf_is_InteractionStatement_s* x, int free_strs);
int zxwsf_WALK_SO_is_InteractionStatement(struct zx_ctx* c, struct zxwsf_is_InteractionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is_InteractionStatement(struct zx_ctx* c, struct zxwsf_is_InteractionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is_InteractionStatement(struct zxwsf_is_InteractionStatement_s* x);
char* zxwsf_ENC_SO_is_InteractionStatement(struct zxwsf_is_InteractionStatement_s* x, char* p);
char* zxwsf_ENC_WO_is_InteractionStatement(struct zxwsf_is_InteractionStatement_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is_InteractionStatement(struct zx_ctx* c, struct zxwsf_is_InteractionStatement_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is_InteractionStatement(struct zx_ctx* c, struct zxwsf_is_InteractionStatement_s* x);

struct zxwsf_is_InteractionStatement_s {
  ZX_ELEM_EXT
  zxwsf_is_InteractionStatement_EXT
  struct zxwsf_is_Inquiry_s* Inquiry;	/* {1,-1} nada */
  struct zx_elem_s* Signature;	/* {1,1}  */
};

struct zxwsf_is_Inquiry_s* zxwsf_is_InteractionStatement_GET_Inquiry(struct zxwsf_is_InteractionStatement_s* x, int n);
struct zx_elem_s* zxwsf_is_InteractionStatement_GET_Signature(struct zxwsf_is_InteractionStatement_s* x, int n);
int zxwsf_is_InteractionStatement_NUM_Inquiry(struct zxwsf_is_InteractionStatement_s* x);
int zxwsf_is_InteractionStatement_NUM_Signature(struct zxwsf_is_InteractionStatement_s* x);
struct zxwsf_is_Inquiry_s* zxwsf_is_InteractionStatement_POP_Inquiry(struct zxwsf_is_InteractionStatement_s* x);
struct zx_elem_s* zxwsf_is_InteractionStatement_POP_Signature(struct zxwsf_is_InteractionStatement_s* x);
void zxwsf_is_InteractionStatement_PUSH_Inquiry(struct zxwsf_is_InteractionStatement_s* x, struct zxwsf_is_Inquiry_s* y);
void zxwsf_is_InteractionStatement_PUSH_Signature(struct zxwsf_is_InteractionStatement_s* x, struct zx_elem_s* y);
void zxwsf_is_InteractionStatement_PUT_Inquiry(struct zxwsf_is_InteractionStatement_s* x, int n, struct zxwsf_is_Inquiry_s* y);
void zxwsf_is_InteractionStatement_PUT_Signature(struct zxwsf_is_InteractionStatement_s* x, int n, struct zx_elem_s* y);
void zxwsf_is_InteractionStatement_ADD_Inquiry(struct zxwsf_is_InteractionStatement_s* x, int n, struct zxwsf_is_Inquiry_s* z);
void zxwsf_is_InteractionStatement_ADD_Signature(struct zxwsf_is_InteractionStatement_s* x, int n, struct zx_elem_s* z);
void zxwsf_is_InteractionStatement_DEL_Inquiry(struct zxwsf_is_InteractionStatement_s* x, int n);
void zxwsf_is_InteractionStatement_DEL_Signature(struct zxwsf_is_InteractionStatement_s* x, int n);
void zxwsf_is_InteractionStatement_REV_Inquiry(struct zxwsf_is_InteractionStatement_s* x);
void zxwsf_is_InteractionStatement_REV_Signature(struct zxwsf_is_InteractionStatement_s* x);

/* -------------------------- is_Item -------------------------- */
/* refby( zxwsf_is_Select_s ) */
#ifndef zxwsf_is_Item_EXT
#define zxwsf_is_Item_EXT
#endif

struct zxwsf_is_Item_s* zxwsf_DEC_is_Item(struct zx_ctx* c);
struct zxwsf_is_Item_s* zxwsf_NEW_is_Item(struct zx_ctx* c);
struct zxwsf_is_Item_s* zxwsf_DEEP_CLONE_is_Item(struct zx_ctx* c, struct zxwsf_is_Item_s* x, int dup_strs);
void zxwsf_DUP_STRS_is_Item(struct zx_ctx* c, struct zxwsf_is_Item_s* x);
void zxwsf_FREE_is_Item(struct zx_ctx* c, struct zxwsf_is_Item_s* x, int free_strs);
int zxwsf_WALK_SO_is_Item(struct zx_ctx* c, struct zxwsf_is_Item_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is_Item(struct zx_ctx* c, struct zxwsf_is_Item_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is_Item(struct zxwsf_is_Item_s* x);
char* zxwsf_ENC_SO_is_Item(struct zxwsf_is_Item_s* x, char* p);
char* zxwsf_ENC_WO_is_Item(struct zxwsf_is_Item_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is_Item(struct zx_ctx* c, struct zxwsf_is_Item_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is_Item(struct zx_ctx* c, struct zxwsf_is_Item_s* x);

struct zxwsf_is_Item_s {
  ZX_ELEM_EXT
  zxwsf_is_Item_EXT
  struct zx_elem_s* Hint;	/* {0,1} xs:string */
  struct zx_str_s* label;	/* {0,1} attribute xs:string */
  struct zx_str_s* value;	/* {1,1} attribute xs:string */
};

struct zx_str_s* zxwsf_is_Item_GET_label(struct zxwsf_is_Item_s* x);
struct zx_str_s* zxwsf_is_Item_GET_value(struct zxwsf_is_Item_s* x);
struct zx_elem_s* zxwsf_is_Item_GET_Hint(struct zxwsf_is_Item_s* x, int n);
int zxwsf_is_Item_NUM_Hint(struct zxwsf_is_Item_s* x);
struct zx_elem_s* zxwsf_is_Item_POP_Hint(struct zxwsf_is_Item_s* x);
void zxwsf_is_Item_PUSH_Hint(struct zxwsf_is_Item_s* x, struct zx_elem_s* y);
void zxwsf_is_Item_PUT_label(struct zxwsf_is_Item_s* x, struct zx_str_s* y);
void zxwsf_is_Item_PUT_value(struct zxwsf_is_Item_s* x, struct zx_str_s* y);
void zxwsf_is_Item_PUT_Hint(struct zxwsf_is_Item_s* x, int n, struct zx_elem_s* y);
void zxwsf_is_Item_ADD_Hint(struct zxwsf_is_Item_s* x, int n, struct zx_elem_s* z);
void zxwsf_is_Item_DEL_Hint(struct zxwsf_is_Item_s* x, int n);
void zxwsf_is_Item_REV_Hint(struct zxwsf_is_Item_s* x);

/* -------------------------- is_Parameter -------------------------- */
/* refby( zxwsf_is_InteractionResponse_s ) */
#ifndef zxwsf_is_Parameter_EXT
#define zxwsf_is_Parameter_EXT
#endif

struct zxwsf_is_Parameter_s* zxwsf_DEC_is_Parameter(struct zx_ctx* c);
struct zxwsf_is_Parameter_s* zxwsf_NEW_is_Parameter(struct zx_ctx* c);
struct zxwsf_is_Parameter_s* zxwsf_DEEP_CLONE_is_Parameter(struct zx_ctx* c, struct zxwsf_is_Parameter_s* x, int dup_strs);
void zxwsf_DUP_STRS_is_Parameter(struct zx_ctx* c, struct zxwsf_is_Parameter_s* x);
void zxwsf_FREE_is_Parameter(struct zx_ctx* c, struct zxwsf_is_Parameter_s* x, int free_strs);
int zxwsf_WALK_SO_is_Parameter(struct zx_ctx* c, struct zxwsf_is_Parameter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is_Parameter(struct zx_ctx* c, struct zxwsf_is_Parameter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is_Parameter(struct zxwsf_is_Parameter_s* x);
char* zxwsf_ENC_SO_is_Parameter(struct zxwsf_is_Parameter_s* x, char* p);
char* zxwsf_ENC_WO_is_Parameter(struct zxwsf_is_Parameter_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is_Parameter(struct zx_ctx* c, struct zxwsf_is_Parameter_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is_Parameter(struct zx_ctx* c, struct zxwsf_is_Parameter_s* x);

struct zxwsf_is_Parameter_s {
  ZX_ELEM_EXT
  zxwsf_is_Parameter_EXT
  struct zx_str_s* name;	/* {1,1} attribute xs:ID */
  struct zx_str_s* value;	/* {1,1} attribute xs:string */
};

struct zx_str_s* zxwsf_is_Parameter_GET_name(struct zxwsf_is_Parameter_s* x);
struct zx_str_s* zxwsf_is_Parameter_GET_value(struct zxwsf_is_Parameter_s* x);
void zxwsf_is_Parameter_PUT_name(struct zxwsf_is_Parameter_s* x, struct zx_str_s* y);
void zxwsf_is_Parameter_PUT_value(struct zxwsf_is_Parameter_s* x, struct zx_str_s* y);

/* -------------------------- is_Select -------------------------- */
/* refby( zxwsf_is_Inquiry_s ) */
#ifndef zxwsf_is_Select_EXT
#define zxwsf_is_Select_EXT
#endif

struct zxwsf_is_Select_s* zxwsf_DEC_is_Select(struct zx_ctx* c);
struct zxwsf_is_Select_s* zxwsf_NEW_is_Select(struct zx_ctx* c);
struct zxwsf_is_Select_s* zxwsf_DEEP_CLONE_is_Select(struct zx_ctx* c, struct zxwsf_is_Select_s* x, int dup_strs);
void zxwsf_DUP_STRS_is_Select(struct zx_ctx* c, struct zxwsf_is_Select_s* x);
void zxwsf_FREE_is_Select(struct zx_ctx* c, struct zxwsf_is_Select_s* x, int free_strs);
int zxwsf_WALK_SO_is_Select(struct zx_ctx* c, struct zxwsf_is_Select_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is_Select(struct zx_ctx* c, struct zxwsf_is_Select_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is_Select(struct zxwsf_is_Select_s* x);
char* zxwsf_ENC_SO_is_Select(struct zxwsf_is_Select_s* x, char* p);
char* zxwsf_ENC_WO_is_Select(struct zxwsf_is_Select_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is_Select(struct zx_ctx* c, struct zxwsf_is_Select_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is_Select(struct zx_ctx* c, struct zxwsf_is_Select_s* x);

struct zxwsf_is_Select_s {
  ZX_ELEM_EXT
  zxwsf_is_Select_EXT
  struct zxwsf_is_Help_s* Help;	/* {0,1} nada */
  struct zx_elem_s* Hint;	/* {0,1} xs:string */
  struct zx_elem_s* Label;	/* {0,1} xs:normalizedString */
  struct zx_elem_s* Value;	/* {0,1} xs:normalizedString */
  struct zx_str_s* name;	/* {1,1} attribute xs:ID */
  struct zxwsf_is_Item_s* Item;	/* {2,unbounded}  */
  struct zx_str_s* multiple;	/* {0,1} attribute xs:boolean */
};

struct zx_str_s* zxwsf_is_Select_GET_name(struct zxwsf_is_Select_s* x);
struct zx_str_s* zxwsf_is_Select_GET_multiple(struct zxwsf_is_Select_s* x);
struct zxwsf_is_Help_s* zxwsf_is_Select_GET_Help(struct zxwsf_is_Select_s* x, int n);
struct zx_elem_s* zxwsf_is_Select_GET_Hint(struct zxwsf_is_Select_s* x, int n);
struct zx_elem_s* zxwsf_is_Select_GET_Label(struct zxwsf_is_Select_s* x, int n);
struct zx_elem_s* zxwsf_is_Select_GET_Value(struct zxwsf_is_Select_s* x, int n);
struct zxwsf_is_Item_s* zxwsf_is_Select_GET_Item(struct zxwsf_is_Select_s* x, int n);
int zxwsf_is_Select_NUM_Help(struct zxwsf_is_Select_s* x);
int zxwsf_is_Select_NUM_Hint(struct zxwsf_is_Select_s* x);
int zxwsf_is_Select_NUM_Label(struct zxwsf_is_Select_s* x);
int zxwsf_is_Select_NUM_Value(struct zxwsf_is_Select_s* x);
int zxwsf_is_Select_NUM_Item(struct zxwsf_is_Select_s* x);
struct zxwsf_is_Help_s* zxwsf_is_Select_POP_Help(struct zxwsf_is_Select_s* x);
struct zx_elem_s* zxwsf_is_Select_POP_Hint(struct zxwsf_is_Select_s* x);
struct zx_elem_s* zxwsf_is_Select_POP_Label(struct zxwsf_is_Select_s* x);
struct zx_elem_s* zxwsf_is_Select_POP_Value(struct zxwsf_is_Select_s* x);
struct zxwsf_is_Item_s* zxwsf_is_Select_POP_Item(struct zxwsf_is_Select_s* x);
void zxwsf_is_Select_PUSH_Help(struct zxwsf_is_Select_s* x, struct zxwsf_is_Help_s* y);
void zxwsf_is_Select_PUSH_Hint(struct zxwsf_is_Select_s* x, struct zx_elem_s* y);
void zxwsf_is_Select_PUSH_Label(struct zxwsf_is_Select_s* x, struct zx_elem_s* y);
void zxwsf_is_Select_PUSH_Value(struct zxwsf_is_Select_s* x, struct zx_elem_s* y);
void zxwsf_is_Select_PUSH_Item(struct zxwsf_is_Select_s* x, struct zxwsf_is_Item_s* y);
void zxwsf_is_Select_PUT_name(struct zxwsf_is_Select_s* x, struct zx_str_s* y);
void zxwsf_is_Select_PUT_multiple(struct zxwsf_is_Select_s* x, struct zx_str_s* y);
void zxwsf_is_Select_PUT_Help(struct zxwsf_is_Select_s* x, int n, struct zxwsf_is_Help_s* y);
void zxwsf_is_Select_PUT_Hint(struct zxwsf_is_Select_s* x, int n, struct zx_elem_s* y);
void zxwsf_is_Select_PUT_Label(struct zxwsf_is_Select_s* x, int n, struct zx_elem_s* y);
void zxwsf_is_Select_PUT_Value(struct zxwsf_is_Select_s* x, int n, struct zx_elem_s* y);
void zxwsf_is_Select_PUT_Item(struct zxwsf_is_Select_s* x, int n, struct zxwsf_is_Item_s* y);
void zxwsf_is_Select_ADD_Help(struct zxwsf_is_Select_s* x, int n, struct zxwsf_is_Help_s* z);
void zxwsf_is_Select_ADD_Hint(struct zxwsf_is_Select_s* x, int n, struct zx_elem_s* z);
void zxwsf_is_Select_ADD_Label(struct zxwsf_is_Select_s* x, int n, struct zx_elem_s* z);
void zxwsf_is_Select_ADD_Value(struct zxwsf_is_Select_s* x, int n, struct zx_elem_s* z);
void zxwsf_is_Select_ADD_Item(struct zxwsf_is_Select_s* x, int n, struct zxwsf_is_Item_s* z);
void zxwsf_is_Select_DEL_Help(struct zxwsf_is_Select_s* x, int n);
void zxwsf_is_Select_DEL_Hint(struct zxwsf_is_Select_s* x, int n);
void zxwsf_is_Select_DEL_Label(struct zxwsf_is_Select_s* x, int n);
void zxwsf_is_Select_DEL_Value(struct zxwsf_is_Select_s* x, int n);
void zxwsf_is_Select_DEL_Item(struct zxwsf_is_Select_s* x, int n);
void zxwsf_is_Select_REV_Help(struct zxwsf_is_Select_s* x);
void zxwsf_is_Select_REV_Hint(struct zxwsf_is_Select_s* x);
void zxwsf_is_Select_REV_Label(struct zxwsf_is_Select_s* x);
void zxwsf_is_Select_REV_Value(struct zxwsf_is_Select_s* x);
void zxwsf_is_Select_REV_Item(struct zxwsf_is_Select_s* x);

/* -------------------------- is_Text -------------------------- */
/* refby( zxwsf_is_Inquiry_s ) */
#ifndef zxwsf_is_Text_EXT
#define zxwsf_is_Text_EXT
#endif

struct zxwsf_is_Text_s* zxwsf_DEC_is_Text(struct zx_ctx* c);
struct zxwsf_is_Text_s* zxwsf_NEW_is_Text(struct zx_ctx* c);
struct zxwsf_is_Text_s* zxwsf_DEEP_CLONE_is_Text(struct zx_ctx* c, struct zxwsf_is_Text_s* x, int dup_strs);
void zxwsf_DUP_STRS_is_Text(struct zx_ctx* c, struct zxwsf_is_Text_s* x);
void zxwsf_FREE_is_Text(struct zx_ctx* c, struct zxwsf_is_Text_s* x, int free_strs);
int zxwsf_WALK_SO_is_Text(struct zx_ctx* c, struct zxwsf_is_Text_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_is_Text(struct zx_ctx* c, struct zxwsf_is_Text_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_is_Text(struct zxwsf_is_Text_s* x);
char* zxwsf_ENC_SO_is_Text(struct zxwsf_is_Text_s* x, char* p);
char* zxwsf_ENC_WO_is_Text(struct zxwsf_is_Text_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_is_Text(struct zx_ctx* c, struct zxwsf_is_Text_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_is_Text(struct zx_ctx* c, struct zxwsf_is_Text_s* x);

struct zxwsf_is_Text_s {
  ZX_ELEM_EXT
  zxwsf_is_Text_EXT
  struct zxwsf_is_Help_s* Help;	/* {0,1} nada */
  struct zx_elem_s* Hint;	/* {0,1} xs:string */
  struct zx_elem_s* Label;	/* {0,1} xs:normalizedString */
  struct zx_elem_s* Value;	/* {0,1} xs:normalizedString */
  struct zx_str_s* name;	/* {1,1} attribute xs:ID */
  struct zx_str_s* minChars;	/* {0,1} attribute xs:integer */
  struct zx_str_s* maxChars;	/* {0,1} attribute xs:integer */
  struct zx_str_s* format;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zxwsf_is_Text_GET_name(struct zxwsf_is_Text_s* x);
struct zx_str_s* zxwsf_is_Text_GET_minChars(struct zxwsf_is_Text_s* x);
struct zx_str_s* zxwsf_is_Text_GET_maxChars(struct zxwsf_is_Text_s* x);
struct zx_str_s* zxwsf_is_Text_GET_format(struct zxwsf_is_Text_s* x);
struct zxwsf_is_Help_s* zxwsf_is_Text_GET_Help(struct zxwsf_is_Text_s* x, int n);
struct zx_elem_s* zxwsf_is_Text_GET_Hint(struct zxwsf_is_Text_s* x, int n);
struct zx_elem_s* zxwsf_is_Text_GET_Label(struct zxwsf_is_Text_s* x, int n);
struct zx_elem_s* zxwsf_is_Text_GET_Value(struct zxwsf_is_Text_s* x, int n);
int zxwsf_is_Text_NUM_Help(struct zxwsf_is_Text_s* x);
int zxwsf_is_Text_NUM_Hint(struct zxwsf_is_Text_s* x);
int zxwsf_is_Text_NUM_Label(struct zxwsf_is_Text_s* x);
int zxwsf_is_Text_NUM_Value(struct zxwsf_is_Text_s* x);
struct zxwsf_is_Help_s* zxwsf_is_Text_POP_Help(struct zxwsf_is_Text_s* x);
struct zx_elem_s* zxwsf_is_Text_POP_Hint(struct zxwsf_is_Text_s* x);
struct zx_elem_s* zxwsf_is_Text_POP_Label(struct zxwsf_is_Text_s* x);
struct zx_elem_s* zxwsf_is_Text_POP_Value(struct zxwsf_is_Text_s* x);
void zxwsf_is_Text_PUSH_Help(struct zxwsf_is_Text_s* x, struct zxwsf_is_Help_s* y);
void zxwsf_is_Text_PUSH_Hint(struct zxwsf_is_Text_s* x, struct zx_elem_s* y);
void zxwsf_is_Text_PUSH_Label(struct zxwsf_is_Text_s* x, struct zx_elem_s* y);
void zxwsf_is_Text_PUSH_Value(struct zxwsf_is_Text_s* x, struct zx_elem_s* y);
void zxwsf_is_Text_PUT_name(struct zxwsf_is_Text_s* x, struct zx_str_s* y);
void zxwsf_is_Text_PUT_minChars(struct zxwsf_is_Text_s* x, struct zx_str_s* y);
void zxwsf_is_Text_PUT_maxChars(struct zxwsf_is_Text_s* x, struct zx_str_s* y);
void zxwsf_is_Text_PUT_format(struct zxwsf_is_Text_s* x, struct zx_str_s* y);
void zxwsf_is_Text_PUT_Help(struct zxwsf_is_Text_s* x, int n, struct zxwsf_is_Help_s* y);
void zxwsf_is_Text_PUT_Hint(struct zxwsf_is_Text_s* x, int n, struct zx_elem_s* y);
void zxwsf_is_Text_PUT_Label(struct zxwsf_is_Text_s* x, int n, struct zx_elem_s* y);
void zxwsf_is_Text_PUT_Value(struct zxwsf_is_Text_s* x, int n, struct zx_elem_s* y);
void zxwsf_is_Text_ADD_Help(struct zxwsf_is_Text_s* x, int n, struct zxwsf_is_Help_s* z);
void zxwsf_is_Text_ADD_Hint(struct zxwsf_is_Text_s* x, int n, struct zx_elem_s* z);
void zxwsf_is_Text_ADD_Label(struct zxwsf_is_Text_s* x, int n, struct zx_elem_s* z);
void zxwsf_is_Text_ADD_Value(struct zxwsf_is_Text_s* x, int n, struct zx_elem_s* z);
void zxwsf_is_Text_DEL_Help(struct zxwsf_is_Text_s* x, int n);
void zxwsf_is_Text_DEL_Hint(struct zxwsf_is_Text_s* x, int n);
void zxwsf_is_Text_DEL_Label(struct zxwsf_is_Text_s* x, int n);
void zxwsf_is_Text_DEL_Value(struct zxwsf_is_Text_s* x, int n);
void zxwsf_is_Text_REV_Help(struct zxwsf_is_Text_s* x);
void zxwsf_is_Text_REV_Hint(struct zxwsf_is_Text_s* x);
void zxwsf_is_Text_REV_Label(struct zxwsf_is_Text_s* x);
void zxwsf_is_Text_REV_Value(struct zxwsf_is_Text_s* x);

/* -------------------------- lu_Extension -------------------------- */
/* refby( ) */
#ifndef zxwsf_lu_Extension_EXT
#define zxwsf_lu_Extension_EXT
#endif

struct zxwsf_lu_Extension_s* zxwsf_DEC_lu_Extension(struct zx_ctx* c);
struct zxwsf_lu_Extension_s* zxwsf_NEW_lu_Extension(struct zx_ctx* c);
struct zxwsf_lu_Extension_s* zxwsf_DEEP_CLONE_lu_Extension(struct zx_ctx* c, struct zxwsf_lu_Extension_s* x, int dup_strs);
void zxwsf_DUP_STRS_lu_Extension(struct zx_ctx* c, struct zxwsf_lu_Extension_s* x);
void zxwsf_FREE_lu_Extension(struct zx_ctx* c, struct zxwsf_lu_Extension_s* x, int free_strs);
int zxwsf_WALK_SO_lu_Extension(struct zx_ctx* c, struct zxwsf_lu_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_lu_Extension(struct zx_ctx* c, struct zxwsf_lu_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_lu_Extension(struct zxwsf_lu_Extension_s* x);
char* zxwsf_ENC_SO_lu_Extension(struct zxwsf_lu_Extension_s* x, char* p);
char* zxwsf_ENC_WO_lu_Extension(struct zxwsf_lu_Extension_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_lu_Extension(struct zx_ctx* c, struct zxwsf_lu_Extension_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_lu_Extension(struct zx_ctx* c, struct zxwsf_lu_Extension_s* x);

struct zxwsf_lu_Extension_s {
  ZX_ELEM_EXT
  zxwsf_lu_Extension_EXT
};


/* -------------------------- lu_Status -------------------------- */
/* refby( zxwsf_di_SvcMDReplaceResponse_s zxwsf_di_QueryResponse_s zxwsf_di_SvcMDAssociationQueryResponse_s zxwsf_di_SvcMDQueryResponse_s zxwsf_di_SvcMDDeleteResponse_s zxwsf_di_SvcMDRegisterResponse_s zxwsf_di_SvcMDAssociationAddResponse_s zxwsf_di_SvcMDAssociationDeleteResponse_s zxwsf_lu_Status_s zxwsf_is_InteractionResponse_s ) */
#ifndef zxwsf_lu_Status_EXT
#define zxwsf_lu_Status_EXT
#endif

struct zxwsf_lu_Status_s* zxwsf_DEC_lu_Status(struct zx_ctx* c);
struct zxwsf_lu_Status_s* zxwsf_NEW_lu_Status(struct zx_ctx* c);
struct zxwsf_lu_Status_s* zxwsf_DEEP_CLONE_lu_Status(struct zx_ctx* c, struct zxwsf_lu_Status_s* x, int dup_strs);
void zxwsf_DUP_STRS_lu_Status(struct zx_ctx* c, struct zxwsf_lu_Status_s* x);
void zxwsf_FREE_lu_Status(struct zx_ctx* c, struct zxwsf_lu_Status_s* x, int free_strs);
int zxwsf_WALK_SO_lu_Status(struct zx_ctx* c, struct zxwsf_lu_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_lu_Status(struct zx_ctx* c, struct zxwsf_lu_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_lu_Status(struct zxwsf_lu_Status_s* x);
char* zxwsf_ENC_SO_lu_Status(struct zxwsf_lu_Status_s* x, char* p);
char* zxwsf_ENC_WO_lu_Status(struct zxwsf_lu_Status_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_lu_Status(struct zx_ctx* c, struct zxwsf_lu_Status_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_lu_Status(struct zx_ctx* c, struct zxwsf_lu_Status_s* x);

struct zxwsf_lu_Status_s {
  ZX_ELEM_EXT
  zxwsf_lu_Status_EXT
  struct zxwsf_lu_Status_s* Status;	/* {0,-1} nada */
  struct zx_str_s* code;	/* {1,1} attribute xs:QName */
  struct zx_str_s* ref;	/* {0,1} attribute xs:string */
  struct zx_str_s* comment;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zxwsf_lu_Status_GET_code(struct zxwsf_lu_Status_s* x);
struct zx_str_s* zxwsf_lu_Status_GET_ref(struct zxwsf_lu_Status_s* x);
struct zx_str_s* zxwsf_lu_Status_GET_comment(struct zxwsf_lu_Status_s* x);
struct zxwsf_lu_Status_s* zxwsf_lu_Status_GET_Status(struct zxwsf_lu_Status_s* x, int n);
int zxwsf_lu_Status_NUM_Status(struct zxwsf_lu_Status_s* x);
struct zxwsf_lu_Status_s* zxwsf_lu_Status_POP_Status(struct zxwsf_lu_Status_s* x);
void zxwsf_lu_Status_PUSH_Status(struct zxwsf_lu_Status_s* x, struct zxwsf_lu_Status_s* y);
void zxwsf_lu_Status_PUT_code(struct zxwsf_lu_Status_s* x, struct zx_str_s* y);
void zxwsf_lu_Status_PUT_ref(struct zxwsf_lu_Status_s* x, struct zx_str_s* y);
void zxwsf_lu_Status_PUT_comment(struct zxwsf_lu_Status_s* x, struct zx_str_s* y);
void zxwsf_lu_Status_PUT_Status(struct zxwsf_lu_Status_s* x, int n, struct zxwsf_lu_Status_s* y);
void zxwsf_lu_Status_ADD_Status(struct zxwsf_lu_Status_s* x, int n, struct zxwsf_lu_Status_s* z);
void zxwsf_lu_Status_DEL_Status(struct zxwsf_lu_Status_s* x, int n);
void zxwsf_lu_Status_REV_Status(struct zxwsf_lu_Status_s* x);

/* -------------------------- lu_TestResult -------------------------- */
/* refby( ) */
#ifndef zxwsf_lu_TestResult_EXT
#define zxwsf_lu_TestResult_EXT
#endif

struct zxwsf_lu_TestResult_s* zxwsf_DEC_lu_TestResult(struct zx_ctx* c);
struct zxwsf_lu_TestResult_s* zxwsf_NEW_lu_TestResult(struct zx_ctx* c);
struct zxwsf_lu_TestResult_s* zxwsf_DEEP_CLONE_lu_TestResult(struct zx_ctx* c, struct zxwsf_lu_TestResult_s* x, int dup_strs);
void zxwsf_DUP_STRS_lu_TestResult(struct zx_ctx* c, struct zxwsf_lu_TestResult_s* x);
void zxwsf_FREE_lu_TestResult(struct zx_ctx* c, struct zxwsf_lu_TestResult_s* x, int free_strs);
int zxwsf_WALK_SO_lu_TestResult(struct zx_ctx* c, struct zxwsf_lu_TestResult_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_lu_TestResult(struct zx_ctx* c, struct zxwsf_lu_TestResult_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_lu_TestResult(struct zxwsf_lu_TestResult_s* x);
char* zxwsf_ENC_SO_lu_TestResult(struct zxwsf_lu_TestResult_s* x, char* p);
char* zxwsf_ENC_WO_lu_TestResult(struct zxwsf_lu_TestResult_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_lu_TestResult(struct zx_ctx* c, struct zxwsf_lu_TestResult_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_lu_TestResult(struct zx_ctx* c, struct zxwsf_lu_TestResult_s* x);

struct zxwsf_lu_TestResult_s {
  ZX_ELEM_EXT
  zxwsf_lu_TestResult_EXT
  struct zx_str_s* itemIDRef;	/* {1,1} attribute lu:IDReferenceType */
};

struct zx_str_s* zxwsf_lu_TestResult_GET_itemIDRef(struct zxwsf_lu_TestResult_s* x);
void zxwsf_lu_TestResult_PUT_itemIDRef(struct zxwsf_lu_TestResult_s* x, struct zx_str_s* y);

/* -------------------------- sbf_Framework -------------------------- */
/* refby( zxwsf_e_Header_s zxwsf_dise_Header_s zxwsf_di_EndpointContext_s ) */
#ifndef zxwsf_sbf_Framework_EXT
#define zxwsf_sbf_Framework_EXT
#endif

struct zxwsf_sbf_Framework_s* zxwsf_DEC_sbf_Framework(struct zx_ctx* c);
struct zxwsf_sbf_Framework_s* zxwsf_NEW_sbf_Framework(struct zx_ctx* c);
struct zxwsf_sbf_Framework_s* zxwsf_DEEP_CLONE_sbf_Framework(struct zx_ctx* c, struct zxwsf_sbf_Framework_s* x, int dup_strs);
void zxwsf_DUP_STRS_sbf_Framework(struct zx_ctx* c, struct zxwsf_sbf_Framework_s* x);
void zxwsf_FREE_sbf_Framework(struct zx_ctx* c, struct zxwsf_sbf_Framework_s* x, int free_strs);
int zxwsf_WALK_SO_sbf_Framework(struct zx_ctx* c, struct zxwsf_sbf_Framework_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_sbf_Framework(struct zx_ctx* c, struct zxwsf_sbf_Framework_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_sbf_Framework(struct zxwsf_sbf_Framework_s* x);
char* zxwsf_ENC_SO_sbf_Framework(struct zxwsf_sbf_Framework_s* x, char* p);
char* zxwsf_ENC_WO_sbf_Framework(struct zxwsf_sbf_Framework_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_sbf_Framework(struct zx_ctx* c, struct zxwsf_sbf_Framework_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_sbf_Framework(struct zx_ctx* c, struct zxwsf_sbf_Framework_s* x);

struct zxwsf_sbf_Framework_s {
  ZX_ELEM_EXT
  zxwsf_sbf_Framework_EXT
  struct zx_str_s* version;	/* {1,1} attribute xs:string */
};

struct zx_str_s* zxwsf_sbf_Framework_GET_version(struct zxwsf_sbf_Framework_s* x);
void zxwsf_sbf_Framework_PUT_version(struct zxwsf_sbf_Framework_s* x, struct zx_str_s* y);

/* -------------------------- sec12_ProxyInfoConfirmationData -------------------------- */
/* refby( ) */
#ifndef zxwsf_sec12_ProxyInfoConfirmationData_EXT
#define zxwsf_sec12_ProxyInfoConfirmationData_EXT
#endif

struct zxwsf_sec12_ProxyInfoConfirmationData_s* zxwsf_DEC_sec12_ProxyInfoConfirmationData(struct zx_ctx* c);
struct zxwsf_sec12_ProxyInfoConfirmationData_s* zxwsf_NEW_sec12_ProxyInfoConfirmationData(struct zx_ctx* c);
struct zxwsf_sec12_ProxyInfoConfirmationData_s* zxwsf_DEEP_CLONE_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int dup_strs);
void zxwsf_DUP_STRS_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zxwsf_sec12_ProxyInfoConfirmationData_s* x);
void zxwsf_FREE_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int free_strs);
int zxwsf_WALK_SO_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_sec12_ProxyInfoConfirmationData(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x);
char* zxwsf_ENC_SO_sec12_ProxyInfoConfirmationData(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, char* p);
char* zxwsf_ENC_WO_sec12_ProxyInfoConfirmationData(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zxwsf_sec12_ProxyInfoConfirmationData_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zxwsf_sec12_ProxyInfoConfirmationData_s* x);

struct zxwsf_sec12_ProxyInfoConfirmationData_s {
  ZX_ELEM_EXT
  zxwsf_sec12_ProxyInfoConfirmationData_EXT
  struct zx_elem_s* AssertionIDReference;	/* {1,1}  */
  struct zx_elem_s* Issuer;	/* {1,1} xs:string */
  struct zx_elem_s* IssueInstant;	/* {1,1} xs:dateTime */
  struct zx_elem_s* Signature;	/* {0,1}  */
  struct zx_str_s* id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zxwsf_sec12_ProxyInfoConfirmationData_GET_id(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x);
struct zx_elem_s* zxwsf_sec12_ProxyInfoConfirmationData_GET_AssertionIDReference(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n);
struct zx_elem_s* zxwsf_sec12_ProxyInfoConfirmationData_GET_Issuer(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n);
struct zx_elem_s* zxwsf_sec12_ProxyInfoConfirmationData_GET_IssueInstant(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n);
struct zx_elem_s* zxwsf_sec12_ProxyInfoConfirmationData_GET_Signature(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n);
int zxwsf_sec12_ProxyInfoConfirmationData_NUM_AssertionIDReference(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x);
int zxwsf_sec12_ProxyInfoConfirmationData_NUM_Issuer(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x);
int zxwsf_sec12_ProxyInfoConfirmationData_NUM_IssueInstant(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x);
int zxwsf_sec12_ProxyInfoConfirmationData_NUM_Signature(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x);
struct zx_elem_s* zxwsf_sec12_ProxyInfoConfirmationData_POP_AssertionIDReference(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x);
struct zx_elem_s* zxwsf_sec12_ProxyInfoConfirmationData_POP_Issuer(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x);
struct zx_elem_s* zxwsf_sec12_ProxyInfoConfirmationData_POP_IssueInstant(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x);
struct zx_elem_s* zxwsf_sec12_ProxyInfoConfirmationData_POP_Signature(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x);
void zxwsf_sec12_ProxyInfoConfirmationData_PUSH_AssertionIDReference(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, struct zx_elem_s* y);
void zxwsf_sec12_ProxyInfoConfirmationData_PUSH_Issuer(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, struct zx_elem_s* y);
void zxwsf_sec12_ProxyInfoConfirmationData_PUSH_IssueInstant(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, struct zx_elem_s* y);
void zxwsf_sec12_ProxyInfoConfirmationData_PUSH_Signature(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, struct zx_elem_s* y);
void zxwsf_sec12_ProxyInfoConfirmationData_PUT_id(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, struct zx_str_s* y);
void zxwsf_sec12_ProxyInfoConfirmationData_PUT_AssertionIDReference(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* y);
void zxwsf_sec12_ProxyInfoConfirmationData_PUT_Issuer(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* y);
void zxwsf_sec12_ProxyInfoConfirmationData_PUT_IssueInstant(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* y);
void zxwsf_sec12_ProxyInfoConfirmationData_PUT_Signature(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* y);
void zxwsf_sec12_ProxyInfoConfirmationData_ADD_AssertionIDReference(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* z);
void zxwsf_sec12_ProxyInfoConfirmationData_ADD_Issuer(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* z);
void zxwsf_sec12_ProxyInfoConfirmationData_ADD_IssueInstant(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* z);
void zxwsf_sec12_ProxyInfoConfirmationData_ADD_Signature(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* z);
void zxwsf_sec12_ProxyInfoConfirmationData_DEL_AssertionIDReference(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n);
void zxwsf_sec12_ProxyInfoConfirmationData_DEL_Issuer(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n);
void zxwsf_sec12_ProxyInfoConfirmationData_DEL_IssueInstant(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n);
void zxwsf_sec12_ProxyInfoConfirmationData_DEL_Signature(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n);
void zxwsf_sec12_ProxyInfoConfirmationData_REV_AssertionIDReference(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x);
void zxwsf_sec12_ProxyInfoConfirmationData_REV_Issuer(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x);
void zxwsf_sec12_ProxyInfoConfirmationData_REV_IssueInstant(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x);
void zxwsf_sec12_ProxyInfoConfirmationData_REV_Signature(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x);

/* -------------------------- sec12_ResourceAccessStatement -------------------------- */
/* refby( ) */
#ifndef zxwsf_sec12_ResourceAccessStatement_EXT
#define zxwsf_sec12_ResourceAccessStatement_EXT
#endif

struct zxwsf_sec12_ResourceAccessStatement_s* zxwsf_DEC_sec12_ResourceAccessStatement(struct zx_ctx* c);
struct zxwsf_sec12_ResourceAccessStatement_s* zxwsf_NEW_sec12_ResourceAccessStatement(struct zx_ctx* c);
struct zxwsf_sec12_ResourceAccessStatement_s* zxwsf_DEEP_CLONE_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zxwsf_sec12_ResourceAccessStatement_s* x, int dup_strs);
void zxwsf_DUP_STRS_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zxwsf_sec12_ResourceAccessStatement_s* x);
void zxwsf_FREE_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zxwsf_sec12_ResourceAccessStatement_s* x, int free_strs);
int zxwsf_WALK_SO_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zxwsf_sec12_ResourceAccessStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zxwsf_sec12_ResourceAccessStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_sec12_ResourceAccessStatement(struct zxwsf_sec12_ResourceAccessStatement_s* x);
char* zxwsf_ENC_SO_sec12_ResourceAccessStatement(struct zxwsf_sec12_ResourceAccessStatement_s* x, char* p);
char* zxwsf_ENC_WO_sec12_ResourceAccessStatement(struct zxwsf_sec12_ResourceAccessStatement_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zxwsf_sec12_ResourceAccessStatement_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zxwsf_sec12_ResourceAccessStatement_s* x);

struct zxwsf_sec12_ResourceAccessStatement_s {
  ZX_ELEM_EXT
  zxwsf_sec12_ResourceAccessStatement_EXT
  struct zx_elem_s* ProxySubject;	/* {1,1} sa11:SubjectType */
  struct zxwsf_sec12_SessionContext_s* SessionContext;	/* {0,1} nada */
};

struct zx_elem_s* zxwsf_sec12_ResourceAccessStatement_GET_ProxySubject(struct zxwsf_sec12_ResourceAccessStatement_s* x, int n);
struct zxwsf_sec12_SessionContext_s* zxwsf_sec12_ResourceAccessStatement_GET_SessionContext(struct zxwsf_sec12_ResourceAccessStatement_s* x, int n);
int zxwsf_sec12_ResourceAccessStatement_NUM_ProxySubject(struct zxwsf_sec12_ResourceAccessStatement_s* x);
int zxwsf_sec12_ResourceAccessStatement_NUM_SessionContext(struct zxwsf_sec12_ResourceAccessStatement_s* x);
struct zx_elem_s* zxwsf_sec12_ResourceAccessStatement_POP_ProxySubject(struct zxwsf_sec12_ResourceAccessStatement_s* x);
struct zxwsf_sec12_SessionContext_s* zxwsf_sec12_ResourceAccessStatement_POP_SessionContext(struct zxwsf_sec12_ResourceAccessStatement_s* x);
void zxwsf_sec12_ResourceAccessStatement_PUSH_ProxySubject(struct zxwsf_sec12_ResourceAccessStatement_s* x, struct zx_elem_s* y);
void zxwsf_sec12_ResourceAccessStatement_PUSH_SessionContext(struct zxwsf_sec12_ResourceAccessStatement_s* x, struct zxwsf_sec12_SessionContext_s* y);
void zxwsf_sec12_ResourceAccessStatement_PUT_ProxySubject(struct zxwsf_sec12_ResourceAccessStatement_s* x, int n, struct zx_elem_s* y);
void zxwsf_sec12_ResourceAccessStatement_PUT_SessionContext(struct zxwsf_sec12_ResourceAccessStatement_s* x, int n, struct zxwsf_sec12_SessionContext_s* y);
void zxwsf_sec12_ResourceAccessStatement_ADD_ProxySubject(struct zxwsf_sec12_ResourceAccessStatement_s* x, int n, struct zx_elem_s* z);
void zxwsf_sec12_ResourceAccessStatement_ADD_SessionContext(struct zxwsf_sec12_ResourceAccessStatement_s* x, int n, struct zxwsf_sec12_SessionContext_s* z);
void zxwsf_sec12_ResourceAccessStatement_DEL_ProxySubject(struct zxwsf_sec12_ResourceAccessStatement_s* x, int n);
void zxwsf_sec12_ResourceAccessStatement_DEL_SessionContext(struct zxwsf_sec12_ResourceAccessStatement_s* x, int n);
void zxwsf_sec12_ResourceAccessStatement_REV_ProxySubject(struct zxwsf_sec12_ResourceAccessStatement_s* x);
void zxwsf_sec12_ResourceAccessStatement_REV_SessionContext(struct zxwsf_sec12_ResourceAccessStatement_s* x);

/* -------------------------- sec12_SessionContext -------------------------- */
/* refby( zxwsf_sec12_SessionContextStatement_s zxwsf_sec12_ResourceAccessStatement_s ) */
#ifndef zxwsf_sec12_SessionContext_EXT
#define zxwsf_sec12_SessionContext_EXT
#endif

struct zxwsf_sec12_SessionContext_s* zxwsf_DEC_sec12_SessionContext(struct zx_ctx* c);
struct zxwsf_sec12_SessionContext_s* zxwsf_NEW_sec12_SessionContext(struct zx_ctx* c);
struct zxwsf_sec12_SessionContext_s* zxwsf_DEEP_CLONE_sec12_SessionContext(struct zx_ctx* c, struct zxwsf_sec12_SessionContext_s* x, int dup_strs);
void zxwsf_DUP_STRS_sec12_SessionContext(struct zx_ctx* c, struct zxwsf_sec12_SessionContext_s* x);
void zxwsf_FREE_sec12_SessionContext(struct zx_ctx* c, struct zxwsf_sec12_SessionContext_s* x, int free_strs);
int zxwsf_WALK_SO_sec12_SessionContext(struct zx_ctx* c, struct zxwsf_sec12_SessionContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_sec12_SessionContext(struct zx_ctx* c, struct zxwsf_sec12_SessionContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_sec12_SessionContext(struct zxwsf_sec12_SessionContext_s* x);
char* zxwsf_ENC_SO_sec12_SessionContext(struct zxwsf_sec12_SessionContext_s* x, char* p);
char* zxwsf_ENC_WO_sec12_SessionContext(struct zxwsf_sec12_SessionContext_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_sec12_SessionContext(struct zx_ctx* c, struct zxwsf_sec12_SessionContext_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_sec12_SessionContext(struct zx_ctx* c, struct zxwsf_sec12_SessionContext_s* x);

struct zxwsf_sec12_SessionContext_s {
  ZX_ELEM_EXT
  zxwsf_sec12_SessionContext_EXT
  struct zx_elem_s* SessionSubject;	/* {1,1} ff12:SubjectType */
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zx_elem_s* RequestAuthnContext;	/* {0,1}  */
  struct zx_str_s* SessionIndex;	/* {0,1} attribute xs:string */
  struct zx_str_s* AuthenticationInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str_s* AssertionIssueInstant;	/* {1,1} attribute xs:dateTime */
};

struct zx_str_s* zxwsf_sec12_SessionContext_GET_SessionIndex(struct zxwsf_sec12_SessionContext_s* x);
struct zx_str_s* zxwsf_sec12_SessionContext_GET_AuthenticationInstant(struct zxwsf_sec12_SessionContext_s* x);
struct zx_str_s* zxwsf_sec12_SessionContext_GET_AssertionIssueInstant(struct zxwsf_sec12_SessionContext_s* x);
struct zx_elem_s* zxwsf_sec12_SessionContext_GET_SessionSubject(struct zxwsf_sec12_SessionContext_s* x, int n);
struct zx_elem_s* zxwsf_sec12_SessionContext_GET_ProviderID(struct zxwsf_sec12_SessionContext_s* x, int n);
struct zx_elem_s* zxwsf_sec12_SessionContext_GET_RequestAuthnContext(struct zxwsf_sec12_SessionContext_s* x, int n);
int zxwsf_sec12_SessionContext_NUM_SessionSubject(struct zxwsf_sec12_SessionContext_s* x);
int zxwsf_sec12_SessionContext_NUM_ProviderID(struct zxwsf_sec12_SessionContext_s* x);
int zxwsf_sec12_SessionContext_NUM_RequestAuthnContext(struct zxwsf_sec12_SessionContext_s* x);
struct zx_elem_s* zxwsf_sec12_SessionContext_POP_SessionSubject(struct zxwsf_sec12_SessionContext_s* x);
struct zx_elem_s* zxwsf_sec12_SessionContext_POP_ProviderID(struct zxwsf_sec12_SessionContext_s* x);
struct zx_elem_s* zxwsf_sec12_SessionContext_POP_RequestAuthnContext(struct zxwsf_sec12_SessionContext_s* x);
void zxwsf_sec12_SessionContext_PUSH_SessionSubject(struct zxwsf_sec12_SessionContext_s* x, struct zx_elem_s* y);
void zxwsf_sec12_SessionContext_PUSH_ProviderID(struct zxwsf_sec12_SessionContext_s* x, struct zx_elem_s* y);
void zxwsf_sec12_SessionContext_PUSH_RequestAuthnContext(struct zxwsf_sec12_SessionContext_s* x, struct zx_elem_s* y);
void zxwsf_sec12_SessionContext_PUT_SessionIndex(struct zxwsf_sec12_SessionContext_s* x, struct zx_str_s* y);
void zxwsf_sec12_SessionContext_PUT_AuthenticationInstant(struct zxwsf_sec12_SessionContext_s* x, struct zx_str_s* y);
void zxwsf_sec12_SessionContext_PUT_AssertionIssueInstant(struct zxwsf_sec12_SessionContext_s* x, struct zx_str_s* y);
void zxwsf_sec12_SessionContext_PUT_SessionSubject(struct zxwsf_sec12_SessionContext_s* x, int n, struct zx_elem_s* y);
void zxwsf_sec12_SessionContext_PUT_ProviderID(struct zxwsf_sec12_SessionContext_s* x, int n, struct zx_elem_s* y);
void zxwsf_sec12_SessionContext_PUT_RequestAuthnContext(struct zxwsf_sec12_SessionContext_s* x, int n, struct zx_elem_s* y);
void zxwsf_sec12_SessionContext_ADD_SessionSubject(struct zxwsf_sec12_SessionContext_s* x, int n, struct zx_elem_s* z);
void zxwsf_sec12_SessionContext_ADD_ProviderID(struct zxwsf_sec12_SessionContext_s* x, int n, struct zx_elem_s* z);
void zxwsf_sec12_SessionContext_ADD_RequestAuthnContext(struct zxwsf_sec12_SessionContext_s* x, int n, struct zx_elem_s* z);
void zxwsf_sec12_SessionContext_DEL_SessionSubject(struct zxwsf_sec12_SessionContext_s* x, int n);
void zxwsf_sec12_SessionContext_DEL_ProviderID(struct zxwsf_sec12_SessionContext_s* x, int n);
void zxwsf_sec12_SessionContext_DEL_RequestAuthnContext(struct zxwsf_sec12_SessionContext_s* x, int n);
void zxwsf_sec12_SessionContext_REV_SessionSubject(struct zxwsf_sec12_SessionContext_s* x);
void zxwsf_sec12_SessionContext_REV_ProviderID(struct zxwsf_sec12_SessionContext_s* x);
void zxwsf_sec12_SessionContext_REV_RequestAuthnContext(struct zxwsf_sec12_SessionContext_s* x);

/* -------------------------- sec12_SessionContextStatement -------------------------- */
/* refby( ) */
#ifndef zxwsf_sec12_SessionContextStatement_EXT
#define zxwsf_sec12_SessionContextStatement_EXT
#endif

struct zxwsf_sec12_SessionContextStatement_s* zxwsf_DEC_sec12_SessionContextStatement(struct zx_ctx* c);
struct zxwsf_sec12_SessionContextStatement_s* zxwsf_NEW_sec12_SessionContextStatement(struct zx_ctx* c);
struct zxwsf_sec12_SessionContextStatement_s* zxwsf_DEEP_CLONE_sec12_SessionContextStatement(struct zx_ctx* c, struct zxwsf_sec12_SessionContextStatement_s* x, int dup_strs);
void zxwsf_DUP_STRS_sec12_SessionContextStatement(struct zx_ctx* c, struct zxwsf_sec12_SessionContextStatement_s* x);
void zxwsf_FREE_sec12_SessionContextStatement(struct zx_ctx* c, struct zxwsf_sec12_SessionContextStatement_s* x, int free_strs);
int zxwsf_WALK_SO_sec12_SessionContextStatement(struct zx_ctx* c, struct zxwsf_sec12_SessionContextStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_sec12_SessionContextStatement(struct zx_ctx* c, struct zxwsf_sec12_SessionContextStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_sec12_SessionContextStatement(struct zxwsf_sec12_SessionContextStatement_s* x);
char* zxwsf_ENC_SO_sec12_SessionContextStatement(struct zxwsf_sec12_SessionContextStatement_s* x, char* p);
char* zxwsf_ENC_WO_sec12_SessionContextStatement(struct zxwsf_sec12_SessionContextStatement_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_sec12_SessionContextStatement(struct zx_ctx* c, struct zxwsf_sec12_SessionContextStatement_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_sec12_SessionContextStatement(struct zx_ctx* c, struct zxwsf_sec12_SessionContextStatement_s* x);

struct zxwsf_sec12_SessionContextStatement_s {
  ZX_ELEM_EXT
  zxwsf_sec12_SessionContextStatement_EXT
  struct zx_elem_s* ProxySubject;	/* {0,1} sa11:SubjectType */
  struct zxwsf_sec12_SessionContext_s* SessionContext;	/* {1,1} nada */
};

struct zx_elem_s* zxwsf_sec12_SessionContextStatement_GET_ProxySubject(struct zxwsf_sec12_SessionContextStatement_s* x, int n);
struct zxwsf_sec12_SessionContext_s* zxwsf_sec12_SessionContextStatement_GET_SessionContext(struct zxwsf_sec12_SessionContextStatement_s* x, int n);
int zxwsf_sec12_SessionContextStatement_NUM_ProxySubject(struct zxwsf_sec12_SessionContextStatement_s* x);
int zxwsf_sec12_SessionContextStatement_NUM_SessionContext(struct zxwsf_sec12_SessionContextStatement_s* x);
struct zx_elem_s* zxwsf_sec12_SessionContextStatement_POP_ProxySubject(struct zxwsf_sec12_SessionContextStatement_s* x);
struct zxwsf_sec12_SessionContext_s* zxwsf_sec12_SessionContextStatement_POP_SessionContext(struct zxwsf_sec12_SessionContextStatement_s* x);
void zxwsf_sec12_SessionContextStatement_PUSH_ProxySubject(struct zxwsf_sec12_SessionContextStatement_s* x, struct zx_elem_s* y);
void zxwsf_sec12_SessionContextStatement_PUSH_SessionContext(struct zxwsf_sec12_SessionContextStatement_s* x, struct zxwsf_sec12_SessionContext_s* y);
void zxwsf_sec12_SessionContextStatement_PUT_ProxySubject(struct zxwsf_sec12_SessionContextStatement_s* x, int n, struct zx_elem_s* y);
void zxwsf_sec12_SessionContextStatement_PUT_SessionContext(struct zxwsf_sec12_SessionContextStatement_s* x, int n, struct zxwsf_sec12_SessionContext_s* y);
void zxwsf_sec12_SessionContextStatement_ADD_ProxySubject(struct zxwsf_sec12_SessionContextStatement_s* x, int n, struct zx_elem_s* z);
void zxwsf_sec12_SessionContextStatement_ADD_SessionContext(struct zxwsf_sec12_SessionContextStatement_s* x, int n, struct zxwsf_sec12_SessionContext_s* z);
void zxwsf_sec12_SessionContextStatement_DEL_ProxySubject(struct zxwsf_sec12_SessionContextStatement_s* x, int n);
void zxwsf_sec12_SessionContextStatement_DEL_SessionContext(struct zxwsf_sec12_SessionContextStatement_s* x, int n);
void zxwsf_sec12_SessionContextStatement_REV_ProxySubject(struct zxwsf_sec12_SessionContextStatement_s* x);
void zxwsf_sec12_SessionContextStatement_REV_SessionContext(struct zxwsf_sec12_SessionContextStatement_s* x);

/* -------------------------- sec12_ValidityRestrictionCondition -------------------------- */
/* refby( ) */
#ifndef zxwsf_sec12_ValidityRestrictionCondition_EXT
#define zxwsf_sec12_ValidityRestrictionCondition_EXT
#endif

struct zxwsf_sec12_ValidityRestrictionCondition_s* zxwsf_DEC_sec12_ValidityRestrictionCondition(struct zx_ctx* c);
struct zxwsf_sec12_ValidityRestrictionCondition_s* zxwsf_NEW_sec12_ValidityRestrictionCondition(struct zx_ctx* c);
struct zxwsf_sec12_ValidityRestrictionCondition_s* zxwsf_DEEP_CLONE_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zxwsf_sec12_ValidityRestrictionCondition_s* x, int dup_strs);
void zxwsf_DUP_STRS_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zxwsf_sec12_ValidityRestrictionCondition_s* x);
void zxwsf_FREE_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zxwsf_sec12_ValidityRestrictionCondition_s* x, int free_strs);
int zxwsf_WALK_SO_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zxwsf_sec12_ValidityRestrictionCondition_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zxwsf_sec12_ValidityRestrictionCondition_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_sec12_ValidityRestrictionCondition(struct zxwsf_sec12_ValidityRestrictionCondition_s* x);
char* zxwsf_ENC_SO_sec12_ValidityRestrictionCondition(struct zxwsf_sec12_ValidityRestrictionCondition_s* x, char* p);
char* zxwsf_ENC_WO_sec12_ValidityRestrictionCondition(struct zxwsf_sec12_ValidityRestrictionCondition_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zxwsf_sec12_ValidityRestrictionCondition_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zxwsf_sec12_ValidityRestrictionCondition_s* x);

struct zxwsf_sec12_ValidityRestrictionCondition_s {
  ZX_ELEM_EXT
  zxwsf_sec12_ValidityRestrictionCondition_EXT
  struct zx_elem_s* NumberOfUses;	/* {1,1} xs:integer */
};

struct zx_elem_s* zxwsf_sec12_ValidityRestrictionCondition_GET_NumberOfUses(struct zxwsf_sec12_ValidityRestrictionCondition_s* x, int n);
int zxwsf_sec12_ValidityRestrictionCondition_NUM_NumberOfUses(struct zxwsf_sec12_ValidityRestrictionCondition_s* x);
struct zx_elem_s* zxwsf_sec12_ValidityRestrictionCondition_POP_NumberOfUses(struct zxwsf_sec12_ValidityRestrictionCondition_s* x);
void zxwsf_sec12_ValidityRestrictionCondition_PUSH_NumberOfUses(struct zxwsf_sec12_ValidityRestrictionCondition_s* x, struct zx_elem_s* y);
void zxwsf_sec12_ValidityRestrictionCondition_PUT_NumberOfUses(struct zxwsf_sec12_ValidityRestrictionCondition_s* x, int n, struct zx_elem_s* y);
void zxwsf_sec12_ValidityRestrictionCondition_ADD_NumberOfUses(struct zxwsf_sec12_ValidityRestrictionCondition_s* x, int n, struct zx_elem_s* z);
void zxwsf_sec12_ValidityRestrictionCondition_DEL_NumberOfUses(struct zxwsf_sec12_ValidityRestrictionCondition_s* x, int n);
void zxwsf_sec12_ValidityRestrictionCondition_REV_NumberOfUses(struct zxwsf_sec12_ValidityRestrictionCondition_s* x);

/* -------------------------- sec_Token -------------------------- */
/* refby( zxwsf_di_SecurityContext_s ) */
#ifndef zxwsf_sec_Token_EXT
#define zxwsf_sec_Token_EXT
#endif

struct zxwsf_sec_Token_s* zxwsf_DEC_sec_Token(struct zx_ctx* c);
struct zxwsf_sec_Token_s* zxwsf_NEW_sec_Token(struct zx_ctx* c);
struct zxwsf_sec_Token_s* zxwsf_DEEP_CLONE_sec_Token(struct zx_ctx* c, struct zxwsf_sec_Token_s* x, int dup_strs);
void zxwsf_DUP_STRS_sec_Token(struct zx_ctx* c, struct zxwsf_sec_Token_s* x);
void zxwsf_FREE_sec_Token(struct zx_ctx* c, struct zxwsf_sec_Token_s* x, int free_strs);
int zxwsf_WALK_SO_sec_Token(struct zx_ctx* c, struct zxwsf_sec_Token_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_sec_Token(struct zx_ctx* c, struct zxwsf_sec_Token_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_sec_Token(struct zxwsf_sec_Token_s* x);
char* zxwsf_ENC_SO_sec_Token(struct zxwsf_sec_Token_s* x, char* p);
char* zxwsf_ENC_WO_sec_Token(struct zxwsf_sec_Token_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_sec_Token(struct zx_ctx* c, struct zxwsf_sec_Token_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_sec_Token(struct zx_ctx* c, struct zxwsf_sec_Token_s* x);

struct zxwsf_sec_Token_s {
  ZX_ELEM_EXT
  zxwsf_sec_Token_EXT
  struct zx_str_s* id;	/* {0,1} attribute xs:ID */
  struct zx_str_s* ref;	/* {0,1} attribute xs:string */
  struct zx_str_s* usage;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxwsf_sec_Token_GET_id(struct zxwsf_sec_Token_s* x);
struct zx_str_s* zxwsf_sec_Token_GET_ref(struct zxwsf_sec_Token_s* x);
struct zx_str_s* zxwsf_sec_Token_GET_usage(struct zxwsf_sec_Token_s* x);
void zxwsf_sec_Token_PUT_id(struct zxwsf_sec_Token_s* x, struct zx_str_s* y);
void zxwsf_sec_Token_PUT_ref(struct zxwsf_sec_Token_s* x, struct zx_str_s* y);
void zxwsf_sec_Token_PUT_usage(struct zxwsf_sec_Token_s* x, struct zx_str_s* y);

/* -------------------------- sec_TokenPolicy -------------------------- */
/* refby( ) */
#ifndef zxwsf_sec_TokenPolicy_EXT
#define zxwsf_sec_TokenPolicy_EXT
#endif

struct zxwsf_sec_TokenPolicy_s* zxwsf_DEC_sec_TokenPolicy(struct zx_ctx* c);
struct zxwsf_sec_TokenPolicy_s* zxwsf_NEW_sec_TokenPolicy(struct zx_ctx* c);
struct zxwsf_sec_TokenPolicy_s* zxwsf_DEEP_CLONE_sec_TokenPolicy(struct zx_ctx* c, struct zxwsf_sec_TokenPolicy_s* x, int dup_strs);
void zxwsf_DUP_STRS_sec_TokenPolicy(struct zx_ctx* c, struct zxwsf_sec_TokenPolicy_s* x);
void zxwsf_FREE_sec_TokenPolicy(struct zx_ctx* c, struct zxwsf_sec_TokenPolicy_s* x, int free_strs);
int zxwsf_WALK_SO_sec_TokenPolicy(struct zx_ctx* c, struct zxwsf_sec_TokenPolicy_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_sec_TokenPolicy(struct zx_ctx* c, struct zxwsf_sec_TokenPolicy_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_sec_TokenPolicy(struct zxwsf_sec_TokenPolicy_s* x);
char* zxwsf_ENC_SO_sec_TokenPolicy(struct zxwsf_sec_TokenPolicy_s* x, char* p);
char* zxwsf_ENC_WO_sec_TokenPolicy(struct zxwsf_sec_TokenPolicy_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_sec_TokenPolicy(struct zx_ctx* c, struct zxwsf_sec_TokenPolicy_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_sec_TokenPolicy(struct zx_ctx* c, struct zxwsf_sec_TokenPolicy_s* x);

struct zxwsf_sec_TokenPolicy_s {
  ZX_ELEM_EXT
  zxwsf_sec_TokenPolicy_EXT
  struct zx_str_s* validUntil;	/* {0,1} attribute xs:dateTime */
  struct zx_str_s* issueTo;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* type;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* wantDSEPR;	/* {0,1} attribute xs:boolean */
};

struct zx_str_s* zxwsf_sec_TokenPolicy_GET_validUntil(struct zxwsf_sec_TokenPolicy_s* x);
struct zx_str_s* zxwsf_sec_TokenPolicy_GET_issueTo(struct zxwsf_sec_TokenPolicy_s* x);
struct zx_str_s* zxwsf_sec_TokenPolicy_GET_type(struct zxwsf_sec_TokenPolicy_s* x);
struct zx_str_s* zxwsf_sec_TokenPolicy_GET_wantDSEPR(struct zxwsf_sec_TokenPolicy_s* x);
void zxwsf_sec_TokenPolicy_PUT_validUntil(struct zxwsf_sec_TokenPolicy_s* x, struct zx_str_s* y);
void zxwsf_sec_TokenPolicy_PUT_issueTo(struct zxwsf_sec_TokenPolicy_s* x, struct zx_str_s* y);
void zxwsf_sec_TokenPolicy_PUT_type(struct zxwsf_sec_TokenPolicy_s* x, struct zx_str_s* y);
void zxwsf_sec_TokenPolicy_PUT_wantDSEPR(struct zxwsf_sec_TokenPolicy_s* x, struct zx_str_s* y);

/* -------------------------- sec_TransitedProvider -------------------------- */
/* refby( zxwsf_sec_TransitedProviderPath_s ) */
#ifndef zxwsf_sec_TransitedProvider_EXT
#define zxwsf_sec_TransitedProvider_EXT
#endif

struct zxwsf_sec_TransitedProvider_s* zxwsf_DEC_sec_TransitedProvider(struct zx_ctx* c);
struct zxwsf_sec_TransitedProvider_s* zxwsf_NEW_sec_TransitedProvider(struct zx_ctx* c);
struct zxwsf_sec_TransitedProvider_s* zxwsf_DEEP_CLONE_sec_TransitedProvider(struct zx_ctx* c, struct zxwsf_sec_TransitedProvider_s* x, int dup_strs);
void zxwsf_DUP_STRS_sec_TransitedProvider(struct zx_ctx* c, struct zxwsf_sec_TransitedProvider_s* x);
void zxwsf_FREE_sec_TransitedProvider(struct zx_ctx* c, struct zxwsf_sec_TransitedProvider_s* x, int free_strs);
int zxwsf_WALK_SO_sec_TransitedProvider(struct zx_ctx* c, struct zxwsf_sec_TransitedProvider_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_sec_TransitedProvider(struct zx_ctx* c, struct zxwsf_sec_TransitedProvider_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_sec_TransitedProvider(struct zxwsf_sec_TransitedProvider_s* x);
char* zxwsf_ENC_SO_sec_TransitedProvider(struct zxwsf_sec_TransitedProvider_s* x, char* p);
char* zxwsf_ENC_WO_sec_TransitedProvider(struct zxwsf_sec_TransitedProvider_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_sec_TransitedProvider(struct zx_ctx* c, struct zxwsf_sec_TransitedProvider_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_sec_TransitedProvider(struct zx_ctx* c, struct zxwsf_sec_TransitedProvider_s* x);

struct zxwsf_sec_TransitedProvider_s {
  ZX_ELEM_EXT
  zxwsf_sec_TransitedProvider_EXT
  struct zx_str_s* timeStamp;	/* {0,1} attribute xs:dateTime */
  struct zx_str_s* confirmationURI;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxwsf_sec_TransitedProvider_GET_timeStamp(struct zxwsf_sec_TransitedProvider_s* x);
struct zx_str_s* zxwsf_sec_TransitedProvider_GET_confirmationURI(struct zxwsf_sec_TransitedProvider_s* x);
void zxwsf_sec_TransitedProvider_PUT_timeStamp(struct zxwsf_sec_TransitedProvider_s* x, struct zx_str_s* y);
void zxwsf_sec_TransitedProvider_PUT_confirmationURI(struct zxwsf_sec_TransitedProvider_s* x, struct zx_str_s* y);

/* -------------------------- sec_TransitedProviderPath -------------------------- */
/* refby( ) */
#ifndef zxwsf_sec_TransitedProviderPath_EXT
#define zxwsf_sec_TransitedProviderPath_EXT
#endif

struct zxwsf_sec_TransitedProviderPath_s* zxwsf_DEC_sec_TransitedProviderPath(struct zx_ctx* c);
struct zxwsf_sec_TransitedProviderPath_s* zxwsf_NEW_sec_TransitedProviderPath(struct zx_ctx* c);
struct zxwsf_sec_TransitedProviderPath_s* zxwsf_DEEP_CLONE_sec_TransitedProviderPath(struct zx_ctx* c, struct zxwsf_sec_TransitedProviderPath_s* x, int dup_strs);
void zxwsf_DUP_STRS_sec_TransitedProviderPath(struct zx_ctx* c, struct zxwsf_sec_TransitedProviderPath_s* x);
void zxwsf_FREE_sec_TransitedProviderPath(struct zx_ctx* c, struct zxwsf_sec_TransitedProviderPath_s* x, int free_strs);
int zxwsf_WALK_SO_sec_TransitedProviderPath(struct zx_ctx* c, struct zxwsf_sec_TransitedProviderPath_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_sec_TransitedProviderPath(struct zx_ctx* c, struct zxwsf_sec_TransitedProviderPath_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_sec_TransitedProviderPath(struct zxwsf_sec_TransitedProviderPath_s* x);
char* zxwsf_ENC_SO_sec_TransitedProviderPath(struct zxwsf_sec_TransitedProviderPath_s* x, char* p);
char* zxwsf_ENC_WO_sec_TransitedProviderPath(struct zxwsf_sec_TransitedProviderPath_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_sec_TransitedProviderPath(struct zx_ctx* c, struct zxwsf_sec_TransitedProviderPath_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_sec_TransitedProviderPath(struct zx_ctx* c, struct zxwsf_sec_TransitedProviderPath_s* x);

struct zxwsf_sec_TransitedProviderPath_s {
  ZX_ELEM_EXT
  zxwsf_sec_TransitedProviderPath_EXT
  struct zxwsf_sec_TransitedProvider_s* TransitedProvider;	/* {1,-1} nada */
};

struct zxwsf_sec_TransitedProvider_s* zxwsf_sec_TransitedProviderPath_GET_TransitedProvider(struct zxwsf_sec_TransitedProviderPath_s* x, int n);
int zxwsf_sec_TransitedProviderPath_NUM_TransitedProvider(struct zxwsf_sec_TransitedProviderPath_s* x);
struct zxwsf_sec_TransitedProvider_s* zxwsf_sec_TransitedProviderPath_POP_TransitedProvider(struct zxwsf_sec_TransitedProviderPath_s* x);
void zxwsf_sec_TransitedProviderPath_PUSH_TransitedProvider(struct zxwsf_sec_TransitedProviderPath_s* x, struct zxwsf_sec_TransitedProvider_s* y);
void zxwsf_sec_TransitedProviderPath_PUT_TransitedProvider(struct zxwsf_sec_TransitedProviderPath_s* x, int n, struct zxwsf_sec_TransitedProvider_s* y);
void zxwsf_sec_TransitedProviderPath_ADD_TransitedProvider(struct zxwsf_sec_TransitedProviderPath_s* x, int n, struct zxwsf_sec_TransitedProvider_s* z);
void zxwsf_sec_TransitedProviderPath_DEL_TransitedProvider(struct zxwsf_sec_TransitedProviderPath_s* x, int n);
void zxwsf_sec_TransitedProviderPath_REV_TransitedProvider(struct zxwsf_sec_TransitedProviderPath_s* x);

/* -------------------------- wsse_BinarySecurityToken -------------------------- */
/* refby( ) */
#ifndef zxwsf_wsse_BinarySecurityToken_EXT
#define zxwsf_wsse_BinarySecurityToken_EXT
#endif

struct zxwsf_wsse_BinarySecurityToken_s* zxwsf_DEC_wsse_BinarySecurityToken(struct zx_ctx* c);
struct zxwsf_wsse_BinarySecurityToken_s* zxwsf_NEW_wsse_BinarySecurityToken(struct zx_ctx* c);
struct zxwsf_wsse_BinarySecurityToken_s* zxwsf_DEEP_CLONE_wsse_BinarySecurityToken(struct zx_ctx* c, struct zxwsf_wsse_BinarySecurityToken_s* x, int dup_strs);
void zxwsf_DUP_STRS_wsse_BinarySecurityToken(struct zx_ctx* c, struct zxwsf_wsse_BinarySecurityToken_s* x);
void zxwsf_FREE_wsse_BinarySecurityToken(struct zx_ctx* c, struct zxwsf_wsse_BinarySecurityToken_s* x, int free_strs);
int zxwsf_WALK_SO_wsse_BinarySecurityToken(struct zx_ctx* c, struct zxwsf_wsse_BinarySecurityToken_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_wsse_BinarySecurityToken(struct zx_ctx* c, struct zxwsf_wsse_BinarySecurityToken_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_wsse_BinarySecurityToken(struct zxwsf_wsse_BinarySecurityToken_s* x);
char* zxwsf_ENC_SO_wsse_BinarySecurityToken(struct zxwsf_wsse_BinarySecurityToken_s* x, char* p);
char* zxwsf_ENC_WO_wsse_BinarySecurityToken(struct zxwsf_wsse_BinarySecurityToken_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_wsse_BinarySecurityToken(struct zx_ctx* c, struct zxwsf_wsse_BinarySecurityToken_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_wsse_BinarySecurityToken(struct zx_ctx* c, struct zxwsf_wsse_BinarySecurityToken_s* x);

struct zxwsf_wsse_BinarySecurityToken_s {
  ZX_ELEM_EXT
  zxwsf_wsse_BinarySecurityToken_EXT
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
  struct zx_str_s* EncodingType;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* ValueType;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxwsf_wsse_BinarySecurityToken_GET_Id(struct zxwsf_wsse_BinarySecurityToken_s* x);
struct zx_str_s* zxwsf_wsse_BinarySecurityToken_GET_EncodingType(struct zxwsf_wsse_BinarySecurityToken_s* x);
struct zx_str_s* zxwsf_wsse_BinarySecurityToken_GET_ValueType(struct zxwsf_wsse_BinarySecurityToken_s* x);
void zxwsf_wsse_BinarySecurityToken_PUT_Id(struct zxwsf_wsse_BinarySecurityToken_s* x, struct zx_str_s* y);
void zxwsf_wsse_BinarySecurityToken_PUT_EncodingType(struct zxwsf_wsse_BinarySecurityToken_s* x, struct zx_str_s* y);
void zxwsf_wsse_BinarySecurityToken_PUT_ValueType(struct zxwsf_wsse_BinarySecurityToken_s* x, struct zx_str_s* y);

/* -------------------------- wsse_Embedded -------------------------- */
/* refby( ) */
#ifndef zxwsf_wsse_Embedded_EXT
#define zxwsf_wsse_Embedded_EXT
#endif

struct zxwsf_wsse_Embedded_s* zxwsf_DEC_wsse_Embedded(struct zx_ctx* c);
struct zxwsf_wsse_Embedded_s* zxwsf_NEW_wsse_Embedded(struct zx_ctx* c);
struct zxwsf_wsse_Embedded_s* zxwsf_DEEP_CLONE_wsse_Embedded(struct zx_ctx* c, struct zxwsf_wsse_Embedded_s* x, int dup_strs);
void zxwsf_DUP_STRS_wsse_Embedded(struct zx_ctx* c, struct zxwsf_wsse_Embedded_s* x);
void zxwsf_FREE_wsse_Embedded(struct zx_ctx* c, struct zxwsf_wsse_Embedded_s* x, int free_strs);
int zxwsf_WALK_SO_wsse_Embedded(struct zx_ctx* c, struct zxwsf_wsse_Embedded_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_wsse_Embedded(struct zx_ctx* c, struct zxwsf_wsse_Embedded_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_wsse_Embedded(struct zxwsf_wsse_Embedded_s* x);
char* zxwsf_ENC_SO_wsse_Embedded(struct zxwsf_wsse_Embedded_s* x, char* p);
char* zxwsf_ENC_WO_wsse_Embedded(struct zxwsf_wsse_Embedded_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_wsse_Embedded(struct zx_ctx* c, struct zxwsf_wsse_Embedded_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_wsse_Embedded(struct zx_ctx* c, struct zxwsf_wsse_Embedded_s* x);

struct zxwsf_wsse_Embedded_s {
  ZX_ELEM_EXT
  zxwsf_wsse_Embedded_EXT
  struct zx_str_s* ValueType;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxwsf_wsse_Embedded_GET_ValueType(struct zxwsf_wsse_Embedded_s* x);
void zxwsf_wsse_Embedded_PUT_ValueType(struct zxwsf_wsse_Embedded_s* x, struct zx_str_s* y);

/* -------------------------- wsse_KeyIdentifier -------------------------- */
/* refby( ) */
#ifndef zxwsf_wsse_KeyIdentifier_EXT
#define zxwsf_wsse_KeyIdentifier_EXT
#endif

struct zxwsf_wsse_KeyIdentifier_s* zxwsf_DEC_wsse_KeyIdentifier(struct zx_ctx* c);
struct zxwsf_wsse_KeyIdentifier_s* zxwsf_NEW_wsse_KeyIdentifier(struct zx_ctx* c);
struct zxwsf_wsse_KeyIdentifier_s* zxwsf_DEEP_CLONE_wsse_KeyIdentifier(struct zx_ctx* c, struct zxwsf_wsse_KeyIdentifier_s* x, int dup_strs);
void zxwsf_DUP_STRS_wsse_KeyIdentifier(struct zx_ctx* c, struct zxwsf_wsse_KeyIdentifier_s* x);
void zxwsf_FREE_wsse_KeyIdentifier(struct zx_ctx* c, struct zxwsf_wsse_KeyIdentifier_s* x, int free_strs);
int zxwsf_WALK_SO_wsse_KeyIdentifier(struct zx_ctx* c, struct zxwsf_wsse_KeyIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_wsse_KeyIdentifier(struct zx_ctx* c, struct zxwsf_wsse_KeyIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_wsse_KeyIdentifier(struct zxwsf_wsse_KeyIdentifier_s* x);
char* zxwsf_ENC_SO_wsse_KeyIdentifier(struct zxwsf_wsse_KeyIdentifier_s* x, char* p);
char* zxwsf_ENC_WO_wsse_KeyIdentifier(struct zxwsf_wsse_KeyIdentifier_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_wsse_KeyIdentifier(struct zx_ctx* c, struct zxwsf_wsse_KeyIdentifier_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_wsse_KeyIdentifier(struct zx_ctx* c, struct zxwsf_wsse_KeyIdentifier_s* x);

struct zxwsf_wsse_KeyIdentifier_s {
  ZX_ELEM_EXT
  zxwsf_wsse_KeyIdentifier_EXT
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
  struct zx_str_s* EncodingType;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* ValueType;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxwsf_wsse_KeyIdentifier_GET_Id(struct zxwsf_wsse_KeyIdentifier_s* x);
struct zx_str_s* zxwsf_wsse_KeyIdentifier_GET_EncodingType(struct zxwsf_wsse_KeyIdentifier_s* x);
struct zx_str_s* zxwsf_wsse_KeyIdentifier_GET_ValueType(struct zxwsf_wsse_KeyIdentifier_s* x);
void zxwsf_wsse_KeyIdentifier_PUT_Id(struct zxwsf_wsse_KeyIdentifier_s* x, struct zx_str_s* y);
void zxwsf_wsse_KeyIdentifier_PUT_EncodingType(struct zxwsf_wsse_KeyIdentifier_s* x, struct zx_str_s* y);
void zxwsf_wsse_KeyIdentifier_PUT_ValueType(struct zxwsf_wsse_KeyIdentifier_s* x, struct zx_str_s* y);

/* -------------------------- wsse_Nonce -------------------------- */
/* refby( ) */
#ifndef zxwsf_wsse_Nonce_EXT
#define zxwsf_wsse_Nonce_EXT
#endif

struct zxwsf_wsse_Nonce_s* zxwsf_DEC_wsse_Nonce(struct zx_ctx* c);
struct zxwsf_wsse_Nonce_s* zxwsf_NEW_wsse_Nonce(struct zx_ctx* c);
struct zxwsf_wsse_Nonce_s* zxwsf_DEEP_CLONE_wsse_Nonce(struct zx_ctx* c, struct zxwsf_wsse_Nonce_s* x, int dup_strs);
void zxwsf_DUP_STRS_wsse_Nonce(struct zx_ctx* c, struct zxwsf_wsse_Nonce_s* x);
void zxwsf_FREE_wsse_Nonce(struct zx_ctx* c, struct zxwsf_wsse_Nonce_s* x, int free_strs);
int zxwsf_WALK_SO_wsse_Nonce(struct zx_ctx* c, struct zxwsf_wsse_Nonce_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_wsse_Nonce(struct zx_ctx* c, struct zxwsf_wsse_Nonce_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_wsse_Nonce(struct zxwsf_wsse_Nonce_s* x);
char* zxwsf_ENC_SO_wsse_Nonce(struct zxwsf_wsse_Nonce_s* x, char* p);
char* zxwsf_ENC_WO_wsse_Nonce(struct zxwsf_wsse_Nonce_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_wsse_Nonce(struct zx_ctx* c, struct zxwsf_wsse_Nonce_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_wsse_Nonce(struct zx_ctx* c, struct zxwsf_wsse_Nonce_s* x);

struct zxwsf_wsse_Nonce_s {
  ZX_ELEM_EXT
  zxwsf_wsse_Nonce_EXT
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
  struct zx_str_s* EncodingType;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxwsf_wsse_Nonce_GET_Id(struct zxwsf_wsse_Nonce_s* x);
struct zx_str_s* zxwsf_wsse_Nonce_GET_EncodingType(struct zxwsf_wsse_Nonce_s* x);
void zxwsf_wsse_Nonce_PUT_Id(struct zxwsf_wsse_Nonce_s* x, struct zx_str_s* y);
void zxwsf_wsse_Nonce_PUT_EncodingType(struct zxwsf_wsse_Nonce_s* x, struct zx_str_s* y);

/* -------------------------- wsse_Password -------------------------- */
/* refby( ) */
#ifndef zxwsf_wsse_Password_EXT
#define zxwsf_wsse_Password_EXT
#endif

struct zxwsf_wsse_Password_s* zxwsf_DEC_wsse_Password(struct zx_ctx* c);
struct zxwsf_wsse_Password_s* zxwsf_NEW_wsse_Password(struct zx_ctx* c);
struct zxwsf_wsse_Password_s* zxwsf_DEEP_CLONE_wsse_Password(struct zx_ctx* c, struct zxwsf_wsse_Password_s* x, int dup_strs);
void zxwsf_DUP_STRS_wsse_Password(struct zx_ctx* c, struct zxwsf_wsse_Password_s* x);
void zxwsf_FREE_wsse_Password(struct zx_ctx* c, struct zxwsf_wsse_Password_s* x, int free_strs);
int zxwsf_WALK_SO_wsse_Password(struct zx_ctx* c, struct zxwsf_wsse_Password_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_wsse_Password(struct zx_ctx* c, struct zxwsf_wsse_Password_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_wsse_Password(struct zxwsf_wsse_Password_s* x);
char* zxwsf_ENC_SO_wsse_Password(struct zxwsf_wsse_Password_s* x, char* p);
char* zxwsf_ENC_WO_wsse_Password(struct zxwsf_wsse_Password_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_wsse_Password(struct zx_ctx* c, struct zxwsf_wsse_Password_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_wsse_Password(struct zx_ctx* c, struct zxwsf_wsse_Password_s* x);

struct zxwsf_wsse_Password_s {
  ZX_ELEM_EXT
  zxwsf_wsse_Password_EXT
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
  struct zx_str_s* Type;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxwsf_wsse_Password_GET_Id(struct zxwsf_wsse_Password_s* x);
struct zx_str_s* zxwsf_wsse_Password_GET_Type(struct zxwsf_wsse_Password_s* x);
void zxwsf_wsse_Password_PUT_Id(struct zxwsf_wsse_Password_s* x, struct zx_str_s* y);
void zxwsf_wsse_Password_PUT_Type(struct zxwsf_wsse_Password_s* x, struct zx_str_s* y);

/* -------------------------- wsse_Reference -------------------------- */
/* refby( ) */
#ifndef zxwsf_wsse_Reference_EXT
#define zxwsf_wsse_Reference_EXT
#endif

struct zxwsf_wsse_Reference_s* zxwsf_DEC_wsse_Reference(struct zx_ctx* c);
struct zxwsf_wsse_Reference_s* zxwsf_NEW_wsse_Reference(struct zx_ctx* c);
struct zxwsf_wsse_Reference_s* zxwsf_DEEP_CLONE_wsse_Reference(struct zx_ctx* c, struct zxwsf_wsse_Reference_s* x, int dup_strs);
void zxwsf_DUP_STRS_wsse_Reference(struct zx_ctx* c, struct zxwsf_wsse_Reference_s* x);
void zxwsf_FREE_wsse_Reference(struct zx_ctx* c, struct zxwsf_wsse_Reference_s* x, int free_strs);
int zxwsf_WALK_SO_wsse_Reference(struct zx_ctx* c, struct zxwsf_wsse_Reference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_wsse_Reference(struct zx_ctx* c, struct zxwsf_wsse_Reference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_wsse_Reference(struct zxwsf_wsse_Reference_s* x);
char* zxwsf_ENC_SO_wsse_Reference(struct zxwsf_wsse_Reference_s* x, char* p);
char* zxwsf_ENC_WO_wsse_Reference(struct zxwsf_wsse_Reference_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_wsse_Reference(struct zx_ctx* c, struct zxwsf_wsse_Reference_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_wsse_Reference(struct zx_ctx* c, struct zxwsf_wsse_Reference_s* x);

struct zxwsf_wsse_Reference_s {
  ZX_ELEM_EXT
  zxwsf_wsse_Reference_EXT
  struct zx_str_s* URI;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* ValueType;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxwsf_wsse_Reference_GET_URI(struct zxwsf_wsse_Reference_s* x);
struct zx_str_s* zxwsf_wsse_Reference_GET_ValueType(struct zxwsf_wsse_Reference_s* x);
void zxwsf_wsse_Reference_PUT_URI(struct zxwsf_wsse_Reference_s* x, struct zx_str_s* y);
void zxwsf_wsse_Reference_PUT_ValueType(struct zxwsf_wsse_Reference_s* x, struct zx_str_s* y);

/* -------------------------- wsse_Security -------------------------- */
/* refby( ) */
#ifndef zxwsf_wsse_Security_EXT
#define zxwsf_wsse_Security_EXT
#endif

struct zxwsf_wsse_Security_s* zxwsf_DEC_wsse_Security(struct zx_ctx* c);
struct zxwsf_wsse_Security_s* zxwsf_NEW_wsse_Security(struct zx_ctx* c);
struct zxwsf_wsse_Security_s* zxwsf_DEEP_CLONE_wsse_Security(struct zx_ctx* c, struct zxwsf_wsse_Security_s* x, int dup_strs);
void zxwsf_DUP_STRS_wsse_Security(struct zx_ctx* c, struct zxwsf_wsse_Security_s* x);
void zxwsf_FREE_wsse_Security(struct zx_ctx* c, struct zxwsf_wsse_Security_s* x, int free_strs);
int zxwsf_WALK_SO_wsse_Security(struct zx_ctx* c, struct zxwsf_wsse_Security_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_wsse_Security(struct zx_ctx* c, struct zxwsf_wsse_Security_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_wsse_Security(struct zxwsf_wsse_Security_s* x);
char* zxwsf_ENC_SO_wsse_Security(struct zxwsf_wsse_Security_s* x, char* p);
char* zxwsf_ENC_WO_wsse_Security(struct zxwsf_wsse_Security_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_wsse_Security(struct zx_ctx* c, struct zxwsf_wsse_Security_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_wsse_Security(struct zx_ctx* c, struct zxwsf_wsse_Security_s* x);

struct zxwsf_wsse_Security_s {
  ZX_ELEM_EXT
  zxwsf_wsse_Security_EXT
};


/* -------------------------- wsse_SecurityTokenReference -------------------------- */
/* refby( ) */
#ifndef zxwsf_wsse_SecurityTokenReference_EXT
#define zxwsf_wsse_SecurityTokenReference_EXT
#endif

struct zxwsf_wsse_SecurityTokenReference_s* zxwsf_DEC_wsse_SecurityTokenReference(struct zx_ctx* c);
struct zxwsf_wsse_SecurityTokenReference_s* zxwsf_NEW_wsse_SecurityTokenReference(struct zx_ctx* c);
struct zxwsf_wsse_SecurityTokenReference_s* zxwsf_DEEP_CLONE_wsse_SecurityTokenReference(struct zx_ctx* c, struct zxwsf_wsse_SecurityTokenReference_s* x, int dup_strs);
void zxwsf_DUP_STRS_wsse_SecurityTokenReference(struct zx_ctx* c, struct zxwsf_wsse_SecurityTokenReference_s* x);
void zxwsf_FREE_wsse_SecurityTokenReference(struct zx_ctx* c, struct zxwsf_wsse_SecurityTokenReference_s* x, int free_strs);
int zxwsf_WALK_SO_wsse_SecurityTokenReference(struct zx_ctx* c, struct zxwsf_wsse_SecurityTokenReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_wsse_SecurityTokenReference(struct zx_ctx* c, struct zxwsf_wsse_SecurityTokenReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_wsse_SecurityTokenReference(struct zxwsf_wsse_SecurityTokenReference_s* x);
char* zxwsf_ENC_SO_wsse_SecurityTokenReference(struct zxwsf_wsse_SecurityTokenReference_s* x, char* p);
char* zxwsf_ENC_WO_wsse_SecurityTokenReference(struct zxwsf_wsse_SecurityTokenReference_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_wsse_SecurityTokenReference(struct zx_ctx* c, struct zxwsf_wsse_SecurityTokenReference_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_wsse_SecurityTokenReference(struct zx_ctx* c, struct zxwsf_wsse_SecurityTokenReference_s* x);

struct zxwsf_wsse_SecurityTokenReference_s {
  ZX_ELEM_EXT
  zxwsf_wsse_SecurityTokenReference_EXT
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
  struct zx_str_s* Usage;	/* {0,1} attribute wsse:tUsage */
};

struct zx_str_s* zxwsf_wsse_SecurityTokenReference_GET_Id(struct zxwsf_wsse_SecurityTokenReference_s* x);
struct zx_str_s* zxwsf_wsse_SecurityTokenReference_GET_Usage(struct zxwsf_wsse_SecurityTokenReference_s* x);
void zxwsf_wsse_SecurityTokenReference_PUT_Id(struct zxwsf_wsse_SecurityTokenReference_s* x, struct zx_str_s* y);
void zxwsf_wsse_SecurityTokenReference_PUT_Usage(struct zxwsf_wsse_SecurityTokenReference_s* x, struct zx_str_s* y);

/* -------------------------- wsse_TransformationParameters -------------------------- */
/* refby( ) */
#ifndef zxwsf_wsse_TransformationParameters_EXT
#define zxwsf_wsse_TransformationParameters_EXT
#endif

struct zxwsf_wsse_TransformationParameters_s* zxwsf_DEC_wsse_TransformationParameters(struct zx_ctx* c);
struct zxwsf_wsse_TransformationParameters_s* zxwsf_NEW_wsse_TransformationParameters(struct zx_ctx* c);
struct zxwsf_wsse_TransformationParameters_s* zxwsf_DEEP_CLONE_wsse_TransformationParameters(struct zx_ctx* c, struct zxwsf_wsse_TransformationParameters_s* x, int dup_strs);
void zxwsf_DUP_STRS_wsse_TransformationParameters(struct zx_ctx* c, struct zxwsf_wsse_TransformationParameters_s* x);
void zxwsf_FREE_wsse_TransformationParameters(struct zx_ctx* c, struct zxwsf_wsse_TransformationParameters_s* x, int free_strs);
int zxwsf_WALK_SO_wsse_TransformationParameters(struct zx_ctx* c, struct zxwsf_wsse_TransformationParameters_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_wsse_TransformationParameters(struct zx_ctx* c, struct zxwsf_wsse_TransformationParameters_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_wsse_TransformationParameters(struct zxwsf_wsse_TransformationParameters_s* x);
char* zxwsf_ENC_SO_wsse_TransformationParameters(struct zxwsf_wsse_TransformationParameters_s* x, char* p);
char* zxwsf_ENC_WO_wsse_TransformationParameters(struct zxwsf_wsse_TransformationParameters_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_wsse_TransformationParameters(struct zx_ctx* c, struct zxwsf_wsse_TransformationParameters_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_wsse_TransformationParameters(struct zx_ctx* c, struct zxwsf_wsse_TransformationParameters_s* x);

struct zxwsf_wsse_TransformationParameters_s {
  ZX_ELEM_EXT
  zxwsf_wsse_TransformationParameters_EXT
};


/* -------------------------- wsse_Username -------------------------- */
/* refby( zxwsf_wsse_UsernameToken_s ) */
#ifndef zxwsf_wsse_Username_EXT
#define zxwsf_wsse_Username_EXT
#endif

struct zxwsf_wsse_Username_s* zxwsf_DEC_wsse_Username(struct zx_ctx* c);
struct zxwsf_wsse_Username_s* zxwsf_NEW_wsse_Username(struct zx_ctx* c);
struct zxwsf_wsse_Username_s* zxwsf_DEEP_CLONE_wsse_Username(struct zx_ctx* c, struct zxwsf_wsse_Username_s* x, int dup_strs);
void zxwsf_DUP_STRS_wsse_Username(struct zx_ctx* c, struct zxwsf_wsse_Username_s* x);
void zxwsf_FREE_wsse_Username(struct zx_ctx* c, struct zxwsf_wsse_Username_s* x, int free_strs);
int zxwsf_WALK_SO_wsse_Username(struct zx_ctx* c, struct zxwsf_wsse_Username_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_wsse_Username(struct zx_ctx* c, struct zxwsf_wsse_Username_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_wsse_Username(struct zxwsf_wsse_Username_s* x);
char* zxwsf_ENC_SO_wsse_Username(struct zxwsf_wsse_Username_s* x, char* p);
char* zxwsf_ENC_WO_wsse_Username(struct zxwsf_wsse_Username_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_wsse_Username(struct zx_ctx* c, struct zxwsf_wsse_Username_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_wsse_Username(struct zx_ctx* c, struct zxwsf_wsse_Username_s* x);

struct zxwsf_wsse_Username_s {
  ZX_ELEM_EXT
  zxwsf_wsse_Username_EXT
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zxwsf_wsse_Username_GET_Id(struct zxwsf_wsse_Username_s* x);
void zxwsf_wsse_Username_PUT_Id(struct zxwsf_wsse_Username_s* x, struct zx_str_s* y);

/* -------------------------- wsse_UsernameToken -------------------------- */
/* refby( ) */
#ifndef zxwsf_wsse_UsernameToken_EXT
#define zxwsf_wsse_UsernameToken_EXT
#endif

struct zxwsf_wsse_UsernameToken_s* zxwsf_DEC_wsse_UsernameToken(struct zx_ctx* c);
struct zxwsf_wsse_UsernameToken_s* zxwsf_NEW_wsse_UsernameToken(struct zx_ctx* c);
struct zxwsf_wsse_UsernameToken_s* zxwsf_DEEP_CLONE_wsse_UsernameToken(struct zx_ctx* c, struct zxwsf_wsse_UsernameToken_s* x, int dup_strs);
void zxwsf_DUP_STRS_wsse_UsernameToken(struct zx_ctx* c, struct zxwsf_wsse_UsernameToken_s* x);
void zxwsf_FREE_wsse_UsernameToken(struct zx_ctx* c, struct zxwsf_wsse_UsernameToken_s* x, int free_strs);
int zxwsf_WALK_SO_wsse_UsernameToken(struct zx_ctx* c, struct zxwsf_wsse_UsernameToken_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_wsse_UsernameToken(struct zx_ctx* c, struct zxwsf_wsse_UsernameToken_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_wsse_UsernameToken(struct zxwsf_wsse_UsernameToken_s* x);
char* zxwsf_ENC_SO_wsse_UsernameToken(struct zxwsf_wsse_UsernameToken_s* x, char* p);
char* zxwsf_ENC_WO_wsse_UsernameToken(struct zxwsf_wsse_UsernameToken_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_wsse_UsernameToken(struct zx_ctx* c, struct zxwsf_wsse_UsernameToken_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_wsse_UsernameToken(struct zx_ctx* c, struct zxwsf_wsse_UsernameToken_s* x);

struct zxwsf_wsse_UsernameToken_s {
  ZX_ELEM_EXT
  zxwsf_wsse_UsernameToken_EXT
  struct zxwsf_wsse_Username_s* Username;	/* {1,1}  */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zxwsf_wsse_UsernameToken_GET_Id(struct zxwsf_wsse_UsernameToken_s* x);
struct zxwsf_wsse_Username_s* zxwsf_wsse_UsernameToken_GET_Username(struct zxwsf_wsse_UsernameToken_s* x, int n);
int zxwsf_wsse_UsernameToken_NUM_Username(struct zxwsf_wsse_UsernameToken_s* x);
struct zxwsf_wsse_Username_s* zxwsf_wsse_UsernameToken_POP_Username(struct zxwsf_wsse_UsernameToken_s* x);
void zxwsf_wsse_UsernameToken_PUSH_Username(struct zxwsf_wsse_UsernameToken_s* x, struct zxwsf_wsse_Username_s* y);
void zxwsf_wsse_UsernameToken_PUT_Id(struct zxwsf_wsse_UsernameToken_s* x, struct zx_str_s* y);
void zxwsf_wsse_UsernameToken_PUT_Username(struct zxwsf_wsse_UsernameToken_s* x, int n, struct zxwsf_wsse_Username_s* y);
void zxwsf_wsse_UsernameToken_ADD_Username(struct zxwsf_wsse_UsernameToken_s* x, int n, struct zxwsf_wsse_Username_s* z);
void zxwsf_wsse_UsernameToken_DEL_Username(struct zxwsf_wsse_UsernameToken_s* x, int n);
void zxwsf_wsse_UsernameToken_REV_Username(struct zxwsf_wsse_UsernameToken_s* x);

/* -------------------------- wsu_Created -------------------------- */
/* refby( zxwsf_wsu_Timestamp_s ) */
#ifndef zxwsf_wsu_Created_EXT
#define zxwsf_wsu_Created_EXT
#endif

struct zxwsf_wsu_Created_s* zxwsf_DEC_wsu_Created(struct zx_ctx* c);
struct zxwsf_wsu_Created_s* zxwsf_NEW_wsu_Created(struct zx_ctx* c);
struct zxwsf_wsu_Created_s* zxwsf_DEEP_CLONE_wsu_Created(struct zx_ctx* c, struct zxwsf_wsu_Created_s* x, int dup_strs);
void zxwsf_DUP_STRS_wsu_Created(struct zx_ctx* c, struct zxwsf_wsu_Created_s* x);
void zxwsf_FREE_wsu_Created(struct zx_ctx* c, struct zxwsf_wsu_Created_s* x, int free_strs);
int zxwsf_WALK_SO_wsu_Created(struct zx_ctx* c, struct zxwsf_wsu_Created_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_wsu_Created(struct zx_ctx* c, struct zxwsf_wsu_Created_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_wsu_Created(struct zxwsf_wsu_Created_s* x);
char* zxwsf_ENC_SO_wsu_Created(struct zxwsf_wsu_Created_s* x, char* p);
char* zxwsf_ENC_WO_wsu_Created(struct zxwsf_wsu_Created_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_wsu_Created(struct zx_ctx* c, struct zxwsf_wsu_Created_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_wsu_Created(struct zx_ctx* c, struct zxwsf_wsu_Created_s* x);

struct zxwsf_wsu_Created_s {
  ZX_ELEM_EXT
  zxwsf_wsu_Created_EXT
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zxwsf_wsu_Created_GET_Id(struct zxwsf_wsu_Created_s* x);
void zxwsf_wsu_Created_PUT_Id(struct zxwsf_wsu_Created_s* x, struct zx_str_s* y);

/* -------------------------- wsu_Expires -------------------------- */
/* refby( zxwsf_wsu_Timestamp_s ) */
#ifndef zxwsf_wsu_Expires_EXT
#define zxwsf_wsu_Expires_EXT
#endif

struct zxwsf_wsu_Expires_s* zxwsf_DEC_wsu_Expires(struct zx_ctx* c);
struct zxwsf_wsu_Expires_s* zxwsf_NEW_wsu_Expires(struct zx_ctx* c);
struct zxwsf_wsu_Expires_s* zxwsf_DEEP_CLONE_wsu_Expires(struct zx_ctx* c, struct zxwsf_wsu_Expires_s* x, int dup_strs);
void zxwsf_DUP_STRS_wsu_Expires(struct zx_ctx* c, struct zxwsf_wsu_Expires_s* x);
void zxwsf_FREE_wsu_Expires(struct zx_ctx* c, struct zxwsf_wsu_Expires_s* x, int free_strs);
int zxwsf_WALK_SO_wsu_Expires(struct zx_ctx* c, struct zxwsf_wsu_Expires_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_wsu_Expires(struct zx_ctx* c, struct zxwsf_wsu_Expires_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_wsu_Expires(struct zxwsf_wsu_Expires_s* x);
char* zxwsf_ENC_SO_wsu_Expires(struct zxwsf_wsu_Expires_s* x, char* p);
char* zxwsf_ENC_WO_wsu_Expires(struct zxwsf_wsu_Expires_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_wsu_Expires(struct zx_ctx* c, struct zxwsf_wsu_Expires_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_wsu_Expires(struct zx_ctx* c, struct zxwsf_wsu_Expires_s* x);

struct zxwsf_wsu_Expires_s {
  ZX_ELEM_EXT
  zxwsf_wsu_Expires_EXT
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zxwsf_wsu_Expires_GET_Id(struct zxwsf_wsu_Expires_s* x);
void zxwsf_wsu_Expires_PUT_Id(struct zxwsf_wsu_Expires_s* x, struct zx_str_s* y);

/* -------------------------- wsu_Timestamp -------------------------- */
/* refby( ) */
#ifndef zxwsf_wsu_Timestamp_EXT
#define zxwsf_wsu_Timestamp_EXT
#endif

struct zxwsf_wsu_Timestamp_s* zxwsf_DEC_wsu_Timestamp(struct zx_ctx* c);
struct zxwsf_wsu_Timestamp_s* zxwsf_NEW_wsu_Timestamp(struct zx_ctx* c);
struct zxwsf_wsu_Timestamp_s* zxwsf_DEEP_CLONE_wsu_Timestamp(struct zx_ctx* c, struct zxwsf_wsu_Timestamp_s* x, int dup_strs);
void zxwsf_DUP_STRS_wsu_Timestamp(struct zx_ctx* c, struct zxwsf_wsu_Timestamp_s* x);
void zxwsf_FREE_wsu_Timestamp(struct zx_ctx* c, struct zxwsf_wsu_Timestamp_s* x, int free_strs);
int zxwsf_WALK_SO_wsu_Timestamp(struct zx_ctx* c, struct zxwsf_wsu_Timestamp_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_wsu_Timestamp(struct zx_ctx* c, struct zxwsf_wsu_Timestamp_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_wsu_Timestamp(struct zxwsf_wsu_Timestamp_s* x);
char* zxwsf_ENC_SO_wsu_Timestamp(struct zxwsf_wsu_Timestamp_s* x, char* p);
char* zxwsf_ENC_WO_wsu_Timestamp(struct zxwsf_wsu_Timestamp_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_wsu_Timestamp(struct zx_ctx* c, struct zxwsf_wsu_Timestamp_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_wsu_Timestamp(struct zx_ctx* c, struct zxwsf_wsu_Timestamp_s* x);

struct zxwsf_wsu_Timestamp_s {
  ZX_ELEM_EXT
  zxwsf_wsu_Timestamp_EXT
  struct zxwsf_wsu_Created_s* Created;	/* {0,1} nada */
  struct zxwsf_wsu_Expires_s* Expires;	/* {0,1} nada */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zxwsf_wsu_Timestamp_GET_Id(struct zxwsf_wsu_Timestamp_s* x);
struct zxwsf_wsu_Created_s* zxwsf_wsu_Timestamp_GET_Created(struct zxwsf_wsu_Timestamp_s* x, int n);
struct zxwsf_wsu_Expires_s* zxwsf_wsu_Timestamp_GET_Expires(struct zxwsf_wsu_Timestamp_s* x, int n);
int zxwsf_wsu_Timestamp_NUM_Created(struct zxwsf_wsu_Timestamp_s* x);
int zxwsf_wsu_Timestamp_NUM_Expires(struct zxwsf_wsu_Timestamp_s* x);
struct zxwsf_wsu_Created_s* zxwsf_wsu_Timestamp_POP_Created(struct zxwsf_wsu_Timestamp_s* x);
struct zxwsf_wsu_Expires_s* zxwsf_wsu_Timestamp_POP_Expires(struct zxwsf_wsu_Timestamp_s* x);
void zxwsf_wsu_Timestamp_PUSH_Created(struct zxwsf_wsu_Timestamp_s* x, struct zxwsf_wsu_Created_s* y);
void zxwsf_wsu_Timestamp_PUSH_Expires(struct zxwsf_wsu_Timestamp_s* x, struct zxwsf_wsu_Expires_s* y);
void zxwsf_wsu_Timestamp_PUT_Id(struct zxwsf_wsu_Timestamp_s* x, struct zx_str_s* y);
void zxwsf_wsu_Timestamp_PUT_Created(struct zxwsf_wsu_Timestamp_s* x, int n, struct zxwsf_wsu_Created_s* y);
void zxwsf_wsu_Timestamp_PUT_Expires(struct zxwsf_wsu_Timestamp_s* x, int n, struct zxwsf_wsu_Expires_s* y);
void zxwsf_wsu_Timestamp_ADD_Created(struct zxwsf_wsu_Timestamp_s* x, int n, struct zxwsf_wsu_Created_s* z);
void zxwsf_wsu_Timestamp_ADD_Expires(struct zxwsf_wsu_Timestamp_s* x, int n, struct zxwsf_wsu_Expires_s* z);
void zxwsf_wsu_Timestamp_DEL_Created(struct zxwsf_wsu_Timestamp_s* x, int n);
void zxwsf_wsu_Timestamp_DEL_Expires(struct zxwsf_wsu_Timestamp_s* x, int n);
void zxwsf_wsu_Timestamp_REV_Created(struct zxwsf_wsu_Timestamp_s* x);
void zxwsf_wsu_Timestamp_REV_Expires(struct zxwsf_wsu_Timestamp_s* x);

/* -------------------------- root -------------------------- */
/* refby( ) */
#ifndef zxwsf_root_EXT
#define zxwsf_root_EXT
#endif

struct zxwsf_root_s* zxwsf_DEC_root(struct zx_ctx* c);
struct zxwsf_root_s* zxwsf_NEW_root(struct zx_ctx* c);
struct zxwsf_root_s* zxwsf_DEEP_CLONE_root(struct zx_ctx* c, struct zxwsf_root_s* x, int dup_strs);
void zxwsf_DUP_STRS_root(struct zx_ctx* c, struct zxwsf_root_s* x);
void zxwsf_FREE_root(struct zx_ctx* c, struct zxwsf_root_s* x, int free_strs);
int zxwsf_WALK_SO_root(struct zx_ctx* c, struct zxwsf_root_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_root(struct zx_ctx* c, struct zxwsf_root_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_LEN_root(struct zxwsf_root_s* x);
char* zxwsf_ENC_SO_root(struct zxwsf_root_s* x, char* p);
char* zxwsf_ENC_WO_root(struct zxwsf_root_s* x, char* p);
struct zx_str_s* zxwsf_EASY_ENC_SO_root(struct zx_ctx* c, struct zxwsf_root_s* x);
struct zx_str_s* zxwsf_EASY_ENC_WO_root(struct zx_ctx* c, struct zxwsf_root_s* x);

struct zxwsf_root_s {
  ZX_ELEM_EXT
  zxwsf_root_EXT
  struct zxwsf_e_Envelope_s* Envelope;	/* {0,-1} root */
  struct zxwsf_dise_Envelope_s* dise_Envelope;	/* {0,-1} root */
};

struct zxwsf_e_Envelope_s* zxwsf_root_GET_Envelope(struct zxwsf_root_s* x, int n);
struct zxwsf_dise_Envelope_s* zxwsf_root_GET_dise_Envelope(struct zxwsf_root_s* x, int n);
int zxwsf_root_NUM_Envelope(struct zxwsf_root_s* x);
int zxwsf_root_NUM_dise_Envelope(struct zxwsf_root_s* x);
struct zxwsf_e_Envelope_s* zxwsf_root_POP_Envelope(struct zxwsf_root_s* x);
struct zxwsf_dise_Envelope_s* zxwsf_root_POP_dise_Envelope(struct zxwsf_root_s* x);
void zxwsf_root_PUSH_Envelope(struct zxwsf_root_s* x, struct zxwsf_e_Envelope_s* y);
void zxwsf_root_PUSH_dise_Envelope(struct zxwsf_root_s* x, struct zxwsf_dise_Envelope_s* y);
void zxwsf_root_PUT_Envelope(struct zxwsf_root_s* x, int n, struct zxwsf_e_Envelope_s* y);
void zxwsf_root_PUT_dise_Envelope(struct zxwsf_root_s* x, int n, struct zxwsf_dise_Envelope_s* y);
void zxwsf_root_ADD_Envelope(struct zxwsf_root_s* x, int n, struct zxwsf_e_Envelope_s* z);
void zxwsf_root_ADD_dise_Envelope(struct zxwsf_root_s* x, int n, struct zxwsf_dise_Envelope_s* z);
void zxwsf_root_DEL_Envelope(struct zxwsf_root_s* x, int n);
void zxwsf_root_DEL_dise_Envelope(struct zxwsf_root_s* x, int n);
void zxwsf_root_REV_Envelope(struct zxwsf_root_s* x);
void zxwsf_root_REV_dise_Envelope(struct zxwsf_root_s* x);

int zxwsf_LEN_simple_elem(struct zx_elem_s* x , int simplelen);
char* zxwsf_ENC_SO_simple_elem(struct zx_elem_s* x, char* p, char* simpletag, int simplelen);
char* zxwsf_ENC_WO_simple_elem(struct zx_elem_s* x, char* p, char* simpletag, int simplelen);
struct zx_str_s* zxwsf_EASY_ENC_SO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, char* simpletag, int simplelen);
struct zx_str_s* zxwsf_EASY_ENC_WO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, char* simpletag, int simplelen);
struct zx_elem_s* zxwsf_DEC_simple_elem(struct zx_ctx* c, int tok);
struct zx_any_elem_s* zxwsf_DEC_wrong_elem(struct zx_ctx* c, char* nam, int namlen);
void zxwsf_DUP_STRS_simple_elem(struct zx_ctx* c, struct zx_elem_s* x);
struct zx_elem_s* zxwsf_DEEP_CLONE_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, int dup_strs);
void zxwsf_FREE_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, int free_strs);
int zxwsf_WALK_SO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxwsf_WALK_WO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
struct zx_elem_s* zxwsf_NEXT_simple_elem(struct zx_ctx* c, struct zx_elem_s* x);

#endif
