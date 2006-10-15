/* c/zx-lu-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_lu_data_h
#define _c_zx_lu_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- lu_Extension -------------------------- */
/* refby( ) */
#ifndef zx_lu_Extension_EXT
#define zx_lu_Extension_EXT
#endif

struct zx_lu_Extension_s* zx_DEC_lu_Extension(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_lu_Extension_s* zx_NEW_lu_Extension(struct zx_ctx* c);
struct zx_lu_Extension_s* zx_DEEP_CLONE_lu_Extension(struct zx_ctx* c, struct zx_lu_Extension_s* x, int dup_strs);
void zx_DUP_STRS_lu_Extension(struct zx_ctx* c, struct zx_lu_Extension_s* x);
void zx_FREE_lu_Extension(struct zx_ctx* c, struct zx_lu_Extension_s* x, int free_strs);
int zx_WALK_SO_lu_Extension(struct zx_ctx* c, struct zx_lu_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_lu_Extension(struct zx_ctx* c, struct zx_lu_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_SO_lu_Extension(struct zx_ctx* c, struct zx_lu_Extension_s* x);
int zx_LEN_WO_lu_Extension(struct zx_ctx* c, struct zx_lu_Extension_s* x);
char* zx_ENC_SO_lu_Extension(struct zx_ctx* c, struct zx_lu_Extension_s* x, char* p);
char* zx_ENC_WO_lu_Extension(struct zx_ctx* c, struct zx_lu_Extension_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_lu_Extension(struct zx_ctx* c, struct zx_lu_Extension_s* x);
struct zx_str* zx_EASY_ENC_WO_lu_Extension(struct zx_ctx* c, struct zx_lu_Extension_s* x);

struct zx_lu_Extension_s {
  ZX_ELEM_EXT
  zx_lu_Extension_EXT
};


/* -------------------------- lu_Status -------------------------- */
/* refby( zx_di_SvcMDQueryResponse_s zx_di_SvcMDDeleteResponse_s zx_di_SvcMDRegisterResponse_s zx_di_SvcMDAssociationDeleteResponse_s zx_is_InteractionResponse_s zx_di_SvcMDAssociationQueryResponse_s zx_di_SvcMDAssociationAddResponse_s zx_di_QueryResponse_s zx_lu_Status_s zx_di_SvcMDReplaceResponse_s ) */
#ifndef zx_lu_Status_EXT
#define zx_lu_Status_EXT
#endif

struct zx_lu_Status_s* zx_DEC_lu_Status(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_lu_Status_s* zx_NEW_lu_Status(struct zx_ctx* c);
struct zx_lu_Status_s* zx_DEEP_CLONE_lu_Status(struct zx_ctx* c, struct zx_lu_Status_s* x, int dup_strs);
void zx_DUP_STRS_lu_Status(struct zx_ctx* c, struct zx_lu_Status_s* x);
void zx_FREE_lu_Status(struct zx_ctx* c, struct zx_lu_Status_s* x, int free_strs);
int zx_WALK_SO_lu_Status(struct zx_ctx* c, struct zx_lu_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_lu_Status(struct zx_ctx* c, struct zx_lu_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_SO_lu_Status(struct zx_ctx* c, struct zx_lu_Status_s* x);
int zx_LEN_WO_lu_Status(struct zx_ctx* c, struct zx_lu_Status_s* x);
char* zx_ENC_SO_lu_Status(struct zx_ctx* c, struct zx_lu_Status_s* x, char* p);
char* zx_ENC_WO_lu_Status(struct zx_ctx* c, struct zx_lu_Status_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_lu_Status(struct zx_ctx* c, struct zx_lu_Status_s* x);
struct zx_str* zx_EASY_ENC_WO_lu_Status(struct zx_ctx* c, struct zx_lu_Status_s* x);

struct zx_lu_Status_s {
  ZX_ELEM_EXT
  zx_lu_Status_EXT
  struct zx_lu_Status_s* Status;	/* {0,-1} nada */
  struct zx_str* code;	/* {1,1} attribute xs:QName */
  struct zx_str* comment;	/* {0,1} attribute xs:string */
  struct zx_str* ref;	/* {0,1} attribute xs:string */
};

struct zx_str* zx_lu_Status_GET_code(struct zx_lu_Status_s* x);
struct zx_str* zx_lu_Status_GET_comment(struct zx_lu_Status_s* x);
struct zx_str* zx_lu_Status_GET_ref(struct zx_lu_Status_s* x);
struct zx_lu_Status_s* zx_lu_Status_GET_Status(struct zx_lu_Status_s* x, int n);
int zx_lu_Status_NUM_Status(struct zx_lu_Status_s* x);
struct zx_lu_Status_s* zx_lu_Status_POP_Status(struct zx_lu_Status_s* x);
void zx_lu_Status_PUSH_Status(struct zx_lu_Status_s* x, struct zx_lu_Status_s* y);
void zx_lu_Status_PUT_code(struct zx_lu_Status_s* x, struct zx_str* y);
void zx_lu_Status_PUT_comment(struct zx_lu_Status_s* x, struct zx_str* y);
void zx_lu_Status_PUT_ref(struct zx_lu_Status_s* x, struct zx_str* y);
void zx_lu_Status_PUT_Status(struct zx_lu_Status_s* x, int n, struct zx_lu_Status_s* y);
void zx_lu_Status_ADD_Status(struct zx_lu_Status_s* x, int n, struct zx_lu_Status_s* z);
void zx_lu_Status_DEL_Status(struct zx_lu_Status_s* x, int n);
void zx_lu_Status_REV_Status(struct zx_lu_Status_s* x);

/* -------------------------- lu_TestResult -------------------------- */
/* refby( ) */
#ifndef zx_lu_TestResult_EXT
#define zx_lu_TestResult_EXT
#endif

struct zx_lu_TestResult_s* zx_DEC_lu_TestResult(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_lu_TestResult_s* zx_NEW_lu_TestResult(struct zx_ctx* c);
struct zx_lu_TestResult_s* zx_DEEP_CLONE_lu_TestResult(struct zx_ctx* c, struct zx_lu_TestResult_s* x, int dup_strs);
void zx_DUP_STRS_lu_TestResult(struct zx_ctx* c, struct zx_lu_TestResult_s* x);
void zx_FREE_lu_TestResult(struct zx_ctx* c, struct zx_lu_TestResult_s* x, int free_strs);
int zx_WALK_SO_lu_TestResult(struct zx_ctx* c, struct zx_lu_TestResult_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_lu_TestResult(struct zx_ctx* c, struct zx_lu_TestResult_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_SO_lu_TestResult(struct zx_ctx* c, struct zx_lu_TestResult_s* x);
int zx_LEN_WO_lu_TestResult(struct zx_ctx* c, struct zx_lu_TestResult_s* x);
char* zx_ENC_SO_lu_TestResult(struct zx_ctx* c, struct zx_lu_TestResult_s* x, char* p);
char* zx_ENC_WO_lu_TestResult(struct zx_ctx* c, struct zx_lu_TestResult_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_lu_TestResult(struct zx_ctx* c, struct zx_lu_TestResult_s* x);
struct zx_str* zx_EASY_ENC_WO_lu_TestResult(struct zx_ctx* c, struct zx_lu_TestResult_s* x);

struct zx_lu_TestResult_s {
  ZX_ELEM_EXT
  zx_lu_TestResult_EXT
  struct zx_str* itemIDRef;	/* {1,1} attribute lu:IDReferenceType */
};

struct zx_str* zx_lu_TestResult_GET_itemIDRef(struct zx_lu_TestResult_s* x);
void zx_lu_TestResult_PUT_itemIDRef(struct zx_lu_TestResult_s* x, struct zx_str* y);


#endif
