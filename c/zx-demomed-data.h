/* c/zx-demomed-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_demomed_data_h
#define _c_zx_demomed_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- demomed_DeleteObjectRequest -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_demomed_DeleteObjectRequest_EXT
#define zx_demomed_DeleteObjectRequest_EXT
#endif

struct zx_demomed_DeleteObjectRequest_s* zx_DEC_demomed_DeleteObjectRequest(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_demomed_DeleteObjectRequest_s* zx_NEW_demomed_DeleteObjectRequest(struct zx_ctx* c);
void zx_FREE_demomed_DeleteObjectRequest(struct zx_ctx* c, struct zx_demomed_DeleteObjectRequest_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_demomed_DeleteObjectRequest_s* zx_DEEP_CLONE_demomed_DeleteObjectRequest(struct zx_ctx* c, struct zx_demomed_DeleteObjectRequest_s* x, int dup_strs);
void zx_DUP_STRS_demomed_DeleteObjectRequest(struct zx_ctx* c, struct zx_demomed_DeleteObjectRequest_s* x);
int zx_WALK_SO_demomed_DeleteObjectRequest(struct zx_ctx* c, struct zx_demomed_DeleteObjectRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_demomed_DeleteObjectRequest(struct zx_ctx* c, struct zx_demomed_DeleteObjectRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_demomed_DeleteObjectRequest(struct zx_ctx* c, struct zx_demomed_DeleteObjectRequest_s* x);
int zx_LEN_WO_demomed_DeleteObjectRequest(struct zx_ctx* c, struct zx_demomed_DeleteObjectRequest_s* x);
char* zx_ENC_SO_demomed_DeleteObjectRequest(struct zx_ctx* c, struct zx_demomed_DeleteObjectRequest_s* x, char* p);
char* zx_ENC_WO_demomed_DeleteObjectRequest(struct zx_ctx* c, struct zx_demomed_DeleteObjectRequest_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_demomed_DeleteObjectRequest(struct zx_ctx* c, struct zx_demomed_DeleteObjectRequest_s* x);
struct zx_str* zx_EASY_ENC_WO_demomed_DeleteObjectRequest(struct zx_ctx* c, struct zx_demomed_DeleteObjectRequest_s* x);

struct zx_demomed_DeleteObjectRequest_s {
  ZX_ELEM_EXT
  zx_demomed_DeleteObjectRequest_EXT
  struct zx_elem_s* ObjectID;	/* {1,-1} xs:string */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_demomed_DeleteObjectRequest_GET_ObjectID(struct zx_demomed_DeleteObjectRequest_s* x, int n);

int zx_demomed_DeleteObjectRequest_NUM_ObjectID(struct zx_demomed_DeleteObjectRequest_s* x);

struct zx_elem_s* zx_demomed_DeleteObjectRequest_POP_ObjectID(struct zx_demomed_DeleteObjectRequest_s* x);

void zx_demomed_DeleteObjectRequest_PUSH_ObjectID(struct zx_demomed_DeleteObjectRequest_s* x, struct zx_elem_s* y);


void zx_demomed_DeleteObjectRequest_PUT_ObjectID(struct zx_demomed_DeleteObjectRequest_s* x, int n, struct zx_elem_s* y);

void zx_demomed_DeleteObjectRequest_ADD_ObjectID(struct zx_demomed_DeleteObjectRequest_s* x, int n, struct zx_elem_s* z);

void zx_demomed_DeleteObjectRequest_DEL_ObjectID(struct zx_demomed_DeleteObjectRequest_s* x, int n);

void zx_demomed_DeleteObjectRequest_REV_ObjectID(struct zx_demomed_DeleteObjectRequest_s* x);

#endif
/* -------------------------- demomed_DeleteObjectResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_demomed_DeleteObjectResponse_EXT
#define zx_demomed_DeleteObjectResponse_EXT
#endif

struct zx_demomed_DeleteObjectResponse_s* zx_DEC_demomed_DeleteObjectResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_demomed_DeleteObjectResponse_s* zx_NEW_demomed_DeleteObjectResponse(struct zx_ctx* c);
void zx_FREE_demomed_DeleteObjectResponse(struct zx_ctx* c, struct zx_demomed_DeleteObjectResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_demomed_DeleteObjectResponse_s* zx_DEEP_CLONE_demomed_DeleteObjectResponse(struct zx_ctx* c, struct zx_demomed_DeleteObjectResponse_s* x, int dup_strs);
void zx_DUP_STRS_demomed_DeleteObjectResponse(struct zx_ctx* c, struct zx_demomed_DeleteObjectResponse_s* x);
int zx_WALK_SO_demomed_DeleteObjectResponse(struct zx_ctx* c, struct zx_demomed_DeleteObjectResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_demomed_DeleteObjectResponse(struct zx_ctx* c, struct zx_demomed_DeleteObjectResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_demomed_DeleteObjectResponse(struct zx_ctx* c, struct zx_demomed_DeleteObjectResponse_s* x);
int zx_LEN_WO_demomed_DeleteObjectResponse(struct zx_ctx* c, struct zx_demomed_DeleteObjectResponse_s* x);
char* zx_ENC_SO_demomed_DeleteObjectResponse(struct zx_ctx* c, struct zx_demomed_DeleteObjectResponse_s* x, char* p);
char* zx_ENC_WO_demomed_DeleteObjectResponse(struct zx_ctx* c, struct zx_demomed_DeleteObjectResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_demomed_DeleteObjectResponse(struct zx_ctx* c, struct zx_demomed_DeleteObjectResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_demomed_DeleteObjectResponse(struct zx_ctx* c, struct zx_demomed_DeleteObjectResponse_s* x);

struct zx_demomed_DeleteObjectResponse_s {
  ZX_ELEM_EXT
  zx_demomed_DeleteObjectResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
  struct zx_elem_s* Count;	/* {1,1} xs:integer */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_demomed_DeleteObjectResponse_GET_Status(struct zx_demomed_DeleteObjectResponse_s* x, int n);
struct zx_elem_s* zx_demomed_DeleteObjectResponse_GET_Count(struct zx_demomed_DeleteObjectResponse_s* x, int n);

int zx_demomed_DeleteObjectResponse_NUM_Status(struct zx_demomed_DeleteObjectResponse_s* x);
int zx_demomed_DeleteObjectResponse_NUM_Count(struct zx_demomed_DeleteObjectResponse_s* x);

struct zx_lu_Status_s* zx_demomed_DeleteObjectResponse_POP_Status(struct zx_demomed_DeleteObjectResponse_s* x);
struct zx_elem_s* zx_demomed_DeleteObjectResponse_POP_Count(struct zx_demomed_DeleteObjectResponse_s* x);

void zx_demomed_DeleteObjectResponse_PUSH_Status(struct zx_demomed_DeleteObjectResponse_s* x, struct zx_lu_Status_s* y);
void zx_demomed_DeleteObjectResponse_PUSH_Count(struct zx_demomed_DeleteObjectResponse_s* x, struct zx_elem_s* y);


void zx_demomed_DeleteObjectResponse_PUT_Status(struct zx_demomed_DeleteObjectResponse_s* x, int n, struct zx_lu_Status_s* y);
void zx_demomed_DeleteObjectResponse_PUT_Count(struct zx_demomed_DeleteObjectResponse_s* x, int n, struct zx_elem_s* y);

void zx_demomed_DeleteObjectResponse_ADD_Status(struct zx_demomed_DeleteObjectResponse_s* x, int n, struct zx_lu_Status_s* z);
void zx_demomed_DeleteObjectResponse_ADD_Count(struct zx_demomed_DeleteObjectResponse_s* x, int n, struct zx_elem_s* z);

void zx_demomed_DeleteObjectResponse_DEL_Status(struct zx_demomed_DeleteObjectResponse_s* x, int n);
void zx_demomed_DeleteObjectResponse_DEL_Count(struct zx_demomed_DeleteObjectResponse_s* x, int n);

void zx_demomed_DeleteObjectResponse_REV_Status(struct zx_demomed_DeleteObjectResponse_s* x);
void zx_demomed_DeleteObjectResponse_REV_Count(struct zx_demomed_DeleteObjectResponse_s* x);

#endif
/* -------------------------- demomed_GetObjectListRequest -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_demomed_GetObjectListRequest_EXT
#define zx_demomed_GetObjectListRequest_EXT
#endif

struct zx_demomed_GetObjectListRequest_s* zx_DEC_demomed_GetObjectListRequest(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_demomed_GetObjectListRequest_s* zx_NEW_demomed_GetObjectListRequest(struct zx_ctx* c);
void zx_FREE_demomed_GetObjectListRequest(struct zx_ctx* c, struct zx_demomed_GetObjectListRequest_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_demomed_GetObjectListRequest_s* zx_DEEP_CLONE_demomed_GetObjectListRequest(struct zx_ctx* c, struct zx_demomed_GetObjectListRequest_s* x, int dup_strs);
void zx_DUP_STRS_demomed_GetObjectListRequest(struct zx_ctx* c, struct zx_demomed_GetObjectListRequest_s* x);
int zx_WALK_SO_demomed_GetObjectListRequest(struct zx_ctx* c, struct zx_demomed_GetObjectListRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_demomed_GetObjectListRequest(struct zx_ctx* c, struct zx_demomed_GetObjectListRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_demomed_GetObjectListRequest(struct zx_ctx* c, struct zx_demomed_GetObjectListRequest_s* x);
int zx_LEN_WO_demomed_GetObjectListRequest(struct zx_ctx* c, struct zx_demomed_GetObjectListRequest_s* x);
char* zx_ENC_SO_demomed_GetObjectListRequest(struct zx_ctx* c, struct zx_demomed_GetObjectListRequest_s* x, char* p);
char* zx_ENC_WO_demomed_GetObjectListRequest(struct zx_ctx* c, struct zx_demomed_GetObjectListRequest_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_demomed_GetObjectListRequest(struct zx_ctx* c, struct zx_demomed_GetObjectListRequest_s* x);
struct zx_str* zx_EASY_ENC_WO_demomed_GetObjectListRequest(struct zx_ctx* c, struct zx_demomed_GetObjectListRequest_s* x);

struct zx_demomed_GetObjectListRequest_s {
  ZX_ELEM_EXT
  zx_demomed_GetObjectListRequest_EXT
  struct zx_demomed_ObjectSearchParm_s* ObjectSearchParm;	/* {1,1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_demomed_ObjectSearchParm_s* zx_demomed_GetObjectListRequest_GET_ObjectSearchParm(struct zx_demomed_GetObjectListRequest_s* x, int n);

int zx_demomed_GetObjectListRequest_NUM_ObjectSearchParm(struct zx_demomed_GetObjectListRequest_s* x);

struct zx_demomed_ObjectSearchParm_s* zx_demomed_GetObjectListRequest_POP_ObjectSearchParm(struct zx_demomed_GetObjectListRequest_s* x);

void zx_demomed_GetObjectListRequest_PUSH_ObjectSearchParm(struct zx_demomed_GetObjectListRequest_s* x, struct zx_demomed_ObjectSearchParm_s* y);


void zx_demomed_GetObjectListRequest_PUT_ObjectSearchParm(struct zx_demomed_GetObjectListRequest_s* x, int n, struct zx_demomed_ObjectSearchParm_s* y);

void zx_demomed_GetObjectListRequest_ADD_ObjectSearchParm(struct zx_demomed_GetObjectListRequest_s* x, int n, struct zx_demomed_ObjectSearchParm_s* z);

void zx_demomed_GetObjectListRequest_DEL_ObjectSearchParm(struct zx_demomed_GetObjectListRequest_s* x, int n);

void zx_demomed_GetObjectListRequest_REV_ObjectSearchParm(struct zx_demomed_GetObjectListRequest_s* x);

#endif
/* -------------------------- demomed_GetObjectListResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_demomed_GetObjectListResponse_EXT
#define zx_demomed_GetObjectListResponse_EXT
#endif

struct zx_demomed_GetObjectListResponse_s* zx_DEC_demomed_GetObjectListResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_demomed_GetObjectListResponse_s* zx_NEW_demomed_GetObjectListResponse(struct zx_ctx* c);
void zx_FREE_demomed_GetObjectListResponse(struct zx_ctx* c, struct zx_demomed_GetObjectListResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_demomed_GetObjectListResponse_s* zx_DEEP_CLONE_demomed_GetObjectListResponse(struct zx_ctx* c, struct zx_demomed_GetObjectListResponse_s* x, int dup_strs);
void zx_DUP_STRS_demomed_GetObjectListResponse(struct zx_ctx* c, struct zx_demomed_GetObjectListResponse_s* x);
int zx_WALK_SO_demomed_GetObjectListResponse(struct zx_ctx* c, struct zx_demomed_GetObjectListResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_demomed_GetObjectListResponse(struct zx_ctx* c, struct zx_demomed_GetObjectListResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_demomed_GetObjectListResponse(struct zx_ctx* c, struct zx_demomed_GetObjectListResponse_s* x);
int zx_LEN_WO_demomed_GetObjectListResponse(struct zx_ctx* c, struct zx_demomed_GetObjectListResponse_s* x);
char* zx_ENC_SO_demomed_GetObjectListResponse(struct zx_ctx* c, struct zx_demomed_GetObjectListResponse_s* x, char* p);
char* zx_ENC_WO_demomed_GetObjectListResponse(struct zx_ctx* c, struct zx_demomed_GetObjectListResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_demomed_GetObjectListResponse(struct zx_ctx* c, struct zx_demomed_GetObjectListResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_demomed_GetObjectListResponse(struct zx_ctx* c, struct zx_demomed_GetObjectListResponse_s* x);

struct zx_demomed_GetObjectListResponse_s {
  ZX_ELEM_EXT
  zx_demomed_GetObjectListResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
  struct zx_demomed_ObjectInfo_s* ObjectInfo;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_demomed_GetObjectListResponse_GET_Status(struct zx_demomed_GetObjectListResponse_s* x, int n);
struct zx_demomed_ObjectInfo_s* zx_demomed_GetObjectListResponse_GET_ObjectInfo(struct zx_demomed_GetObjectListResponse_s* x, int n);

int zx_demomed_GetObjectListResponse_NUM_Status(struct zx_demomed_GetObjectListResponse_s* x);
int zx_demomed_GetObjectListResponse_NUM_ObjectInfo(struct zx_demomed_GetObjectListResponse_s* x);

struct zx_lu_Status_s* zx_demomed_GetObjectListResponse_POP_Status(struct zx_demomed_GetObjectListResponse_s* x);
struct zx_demomed_ObjectInfo_s* zx_demomed_GetObjectListResponse_POP_ObjectInfo(struct zx_demomed_GetObjectListResponse_s* x);

void zx_demomed_GetObjectListResponse_PUSH_Status(struct zx_demomed_GetObjectListResponse_s* x, struct zx_lu_Status_s* y);
void zx_demomed_GetObjectListResponse_PUSH_ObjectInfo(struct zx_demomed_GetObjectListResponse_s* x, struct zx_demomed_ObjectInfo_s* y);


void zx_demomed_GetObjectListResponse_PUT_Status(struct zx_demomed_GetObjectListResponse_s* x, int n, struct zx_lu_Status_s* y);
void zx_demomed_GetObjectListResponse_PUT_ObjectInfo(struct zx_demomed_GetObjectListResponse_s* x, int n, struct zx_demomed_ObjectInfo_s* y);

void zx_demomed_GetObjectListResponse_ADD_Status(struct zx_demomed_GetObjectListResponse_s* x, int n, struct zx_lu_Status_s* z);
void zx_demomed_GetObjectListResponse_ADD_ObjectInfo(struct zx_demomed_GetObjectListResponse_s* x, int n, struct zx_demomed_ObjectInfo_s* z);

void zx_demomed_GetObjectListResponse_DEL_Status(struct zx_demomed_GetObjectListResponse_s* x, int n);
void zx_demomed_GetObjectListResponse_DEL_ObjectInfo(struct zx_demomed_GetObjectListResponse_s* x, int n);

void zx_demomed_GetObjectListResponse_REV_Status(struct zx_demomed_GetObjectListResponse_s* x);
void zx_demomed_GetObjectListResponse_REV_ObjectInfo(struct zx_demomed_GetObjectListResponse_s* x);

#endif
/* -------------------------- demomed_GetObjectRequest -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_demomed_GetObjectRequest_EXT
#define zx_demomed_GetObjectRequest_EXT
#endif

struct zx_demomed_GetObjectRequest_s* zx_DEC_demomed_GetObjectRequest(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_demomed_GetObjectRequest_s* zx_NEW_demomed_GetObjectRequest(struct zx_ctx* c);
void zx_FREE_demomed_GetObjectRequest(struct zx_ctx* c, struct zx_demomed_GetObjectRequest_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_demomed_GetObjectRequest_s* zx_DEEP_CLONE_demomed_GetObjectRequest(struct zx_ctx* c, struct zx_demomed_GetObjectRequest_s* x, int dup_strs);
void zx_DUP_STRS_demomed_GetObjectRequest(struct zx_ctx* c, struct zx_demomed_GetObjectRequest_s* x);
int zx_WALK_SO_demomed_GetObjectRequest(struct zx_ctx* c, struct zx_demomed_GetObjectRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_demomed_GetObjectRequest(struct zx_ctx* c, struct zx_demomed_GetObjectRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_demomed_GetObjectRequest(struct zx_ctx* c, struct zx_demomed_GetObjectRequest_s* x);
int zx_LEN_WO_demomed_GetObjectRequest(struct zx_ctx* c, struct zx_demomed_GetObjectRequest_s* x);
char* zx_ENC_SO_demomed_GetObjectRequest(struct zx_ctx* c, struct zx_demomed_GetObjectRequest_s* x, char* p);
char* zx_ENC_WO_demomed_GetObjectRequest(struct zx_ctx* c, struct zx_demomed_GetObjectRequest_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_demomed_GetObjectRequest(struct zx_ctx* c, struct zx_demomed_GetObjectRequest_s* x);
struct zx_str* zx_EASY_ENC_WO_demomed_GetObjectRequest(struct zx_ctx* c, struct zx_demomed_GetObjectRequest_s* x);

struct zx_demomed_GetObjectRequest_s {
  ZX_ELEM_EXT
  zx_demomed_GetObjectRequest_EXT
  struct zx_elem_s* ObjectID;	/* {1,-1} xs:string */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_demomed_GetObjectRequest_GET_ObjectID(struct zx_demomed_GetObjectRequest_s* x, int n);

int zx_demomed_GetObjectRequest_NUM_ObjectID(struct zx_demomed_GetObjectRequest_s* x);

struct zx_elem_s* zx_demomed_GetObjectRequest_POP_ObjectID(struct zx_demomed_GetObjectRequest_s* x);

void zx_demomed_GetObjectRequest_PUSH_ObjectID(struct zx_demomed_GetObjectRequest_s* x, struct zx_elem_s* y);


void zx_demomed_GetObjectRequest_PUT_ObjectID(struct zx_demomed_GetObjectRequest_s* x, int n, struct zx_elem_s* y);

void zx_demomed_GetObjectRequest_ADD_ObjectID(struct zx_demomed_GetObjectRequest_s* x, int n, struct zx_elem_s* z);

void zx_demomed_GetObjectRequest_DEL_ObjectID(struct zx_demomed_GetObjectRequest_s* x, int n);

void zx_demomed_GetObjectRequest_REV_ObjectID(struct zx_demomed_GetObjectRequest_s* x);

#endif
/* -------------------------- demomed_GetObjectResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_demomed_GetObjectResponse_EXT
#define zx_demomed_GetObjectResponse_EXT
#endif

struct zx_demomed_GetObjectResponse_s* zx_DEC_demomed_GetObjectResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_demomed_GetObjectResponse_s* zx_NEW_demomed_GetObjectResponse(struct zx_ctx* c);
void zx_FREE_demomed_GetObjectResponse(struct zx_ctx* c, struct zx_demomed_GetObjectResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_demomed_GetObjectResponse_s* zx_DEEP_CLONE_demomed_GetObjectResponse(struct zx_ctx* c, struct zx_demomed_GetObjectResponse_s* x, int dup_strs);
void zx_DUP_STRS_demomed_GetObjectResponse(struct zx_ctx* c, struct zx_demomed_GetObjectResponse_s* x);
int zx_WALK_SO_demomed_GetObjectResponse(struct zx_ctx* c, struct zx_demomed_GetObjectResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_demomed_GetObjectResponse(struct zx_ctx* c, struct zx_demomed_GetObjectResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_demomed_GetObjectResponse(struct zx_ctx* c, struct zx_demomed_GetObjectResponse_s* x);
int zx_LEN_WO_demomed_GetObjectResponse(struct zx_ctx* c, struct zx_demomed_GetObjectResponse_s* x);
char* zx_ENC_SO_demomed_GetObjectResponse(struct zx_ctx* c, struct zx_demomed_GetObjectResponse_s* x, char* p);
char* zx_ENC_WO_demomed_GetObjectResponse(struct zx_ctx* c, struct zx_demomed_GetObjectResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_demomed_GetObjectResponse(struct zx_ctx* c, struct zx_demomed_GetObjectResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_demomed_GetObjectResponse(struct zx_ctx* c, struct zx_demomed_GetObjectResponse_s* x);

struct zx_demomed_GetObjectResponse_s {
  ZX_ELEM_EXT
  zx_demomed_GetObjectResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
  struct zx_demomed_ObjectData_s* ObjectData;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_demomed_GetObjectResponse_GET_Status(struct zx_demomed_GetObjectResponse_s* x, int n);
struct zx_demomed_ObjectData_s* zx_demomed_GetObjectResponse_GET_ObjectData(struct zx_demomed_GetObjectResponse_s* x, int n);

int zx_demomed_GetObjectResponse_NUM_Status(struct zx_demomed_GetObjectResponse_s* x);
int zx_demomed_GetObjectResponse_NUM_ObjectData(struct zx_demomed_GetObjectResponse_s* x);

struct zx_lu_Status_s* zx_demomed_GetObjectResponse_POP_Status(struct zx_demomed_GetObjectResponse_s* x);
struct zx_demomed_ObjectData_s* zx_demomed_GetObjectResponse_POP_ObjectData(struct zx_demomed_GetObjectResponse_s* x);

void zx_demomed_GetObjectResponse_PUSH_Status(struct zx_demomed_GetObjectResponse_s* x, struct zx_lu_Status_s* y);
void zx_demomed_GetObjectResponse_PUSH_ObjectData(struct zx_demomed_GetObjectResponse_s* x, struct zx_demomed_ObjectData_s* y);


void zx_demomed_GetObjectResponse_PUT_Status(struct zx_demomed_GetObjectResponse_s* x, int n, struct zx_lu_Status_s* y);
void zx_demomed_GetObjectResponse_PUT_ObjectData(struct zx_demomed_GetObjectResponse_s* x, int n, struct zx_demomed_ObjectData_s* y);

void zx_demomed_GetObjectResponse_ADD_Status(struct zx_demomed_GetObjectResponse_s* x, int n, struct zx_lu_Status_s* z);
void zx_demomed_GetObjectResponse_ADD_ObjectData(struct zx_demomed_GetObjectResponse_s* x, int n, struct zx_demomed_ObjectData_s* z);

void zx_demomed_GetObjectResponse_DEL_Status(struct zx_demomed_GetObjectResponse_s* x, int n);
void zx_demomed_GetObjectResponse_DEL_ObjectData(struct zx_demomed_GetObjectResponse_s* x, int n);

void zx_demomed_GetObjectResponse_REV_Status(struct zx_demomed_GetObjectResponse_s* x);
void zx_demomed_GetObjectResponse_REV_ObjectData(struct zx_demomed_GetObjectResponse_s* x);

#endif
/* -------------------------- demomed_Object -------------------------- */
/* refby( zx_demomed_StoreObjectRequest_s ) */
#ifndef zx_demomed_Object_EXT
#define zx_demomed_Object_EXT
#endif

struct zx_demomed_Object_s* zx_DEC_demomed_Object(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_demomed_Object_s* zx_NEW_demomed_Object(struct zx_ctx* c);
void zx_FREE_demomed_Object(struct zx_ctx* c, struct zx_demomed_Object_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_demomed_Object_s* zx_DEEP_CLONE_demomed_Object(struct zx_ctx* c, struct zx_demomed_Object_s* x, int dup_strs);
void zx_DUP_STRS_demomed_Object(struct zx_ctx* c, struct zx_demomed_Object_s* x);
int zx_WALK_SO_demomed_Object(struct zx_ctx* c, struct zx_demomed_Object_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_demomed_Object(struct zx_ctx* c, struct zx_demomed_Object_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_demomed_Object(struct zx_ctx* c, struct zx_demomed_Object_s* x);
int zx_LEN_WO_demomed_Object(struct zx_ctx* c, struct zx_demomed_Object_s* x);
char* zx_ENC_SO_demomed_Object(struct zx_ctx* c, struct zx_demomed_Object_s* x, char* p);
char* zx_ENC_WO_demomed_Object(struct zx_ctx* c, struct zx_demomed_Object_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_demomed_Object(struct zx_ctx* c, struct zx_demomed_Object_s* x);
struct zx_str* zx_EASY_ENC_WO_demomed_Object(struct zx_ctx* c, struct zx_demomed_Object_s* x);

struct zx_demomed_Object_s {
  ZX_ELEM_EXT
  zx_demomed_Object_EXT
  struct zx_demomed_ObjectInfo_s* ObjectInfo;	/* {1,1}  */
  struct zx_demomed_ObjectData_s* ObjectData;	/* {1,1}  */
  struct zx_str* reqID;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_demomed_Object_GET_reqID(struct zx_demomed_Object_s* x);

struct zx_demomed_ObjectInfo_s* zx_demomed_Object_GET_ObjectInfo(struct zx_demomed_Object_s* x, int n);
struct zx_demomed_ObjectData_s* zx_demomed_Object_GET_ObjectData(struct zx_demomed_Object_s* x, int n);

int zx_demomed_Object_NUM_ObjectInfo(struct zx_demomed_Object_s* x);
int zx_demomed_Object_NUM_ObjectData(struct zx_demomed_Object_s* x);

struct zx_demomed_ObjectInfo_s* zx_demomed_Object_POP_ObjectInfo(struct zx_demomed_Object_s* x);
struct zx_demomed_ObjectData_s* zx_demomed_Object_POP_ObjectData(struct zx_demomed_Object_s* x);

void zx_demomed_Object_PUSH_ObjectInfo(struct zx_demomed_Object_s* x, struct zx_demomed_ObjectInfo_s* y);
void zx_demomed_Object_PUSH_ObjectData(struct zx_demomed_Object_s* x, struct zx_demomed_ObjectData_s* y);

void zx_demomed_Object_PUT_reqID(struct zx_demomed_Object_s* x, struct zx_str* y);

void zx_demomed_Object_PUT_ObjectInfo(struct zx_demomed_Object_s* x, int n, struct zx_demomed_ObjectInfo_s* y);
void zx_demomed_Object_PUT_ObjectData(struct zx_demomed_Object_s* x, int n, struct zx_demomed_ObjectData_s* y);

void zx_demomed_Object_ADD_ObjectInfo(struct zx_demomed_Object_s* x, int n, struct zx_demomed_ObjectInfo_s* z);
void zx_demomed_Object_ADD_ObjectData(struct zx_demomed_Object_s* x, int n, struct zx_demomed_ObjectData_s* z);

void zx_demomed_Object_DEL_ObjectInfo(struct zx_demomed_Object_s* x, int n);
void zx_demomed_Object_DEL_ObjectData(struct zx_demomed_Object_s* x, int n);

void zx_demomed_Object_REV_ObjectInfo(struct zx_demomed_Object_s* x);
void zx_demomed_Object_REV_ObjectData(struct zx_demomed_Object_s* x);

#endif
/* -------------------------- demomed_ObjectData -------------------------- */
/* refby( zx_demomed_Object_s zx_demomed_GetObjectResponse_s ) */
#ifndef zx_demomed_ObjectData_EXT
#define zx_demomed_ObjectData_EXT
#endif

struct zx_demomed_ObjectData_s* zx_DEC_demomed_ObjectData(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_demomed_ObjectData_s* zx_NEW_demomed_ObjectData(struct zx_ctx* c);
void zx_FREE_demomed_ObjectData(struct zx_ctx* c, struct zx_demomed_ObjectData_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_demomed_ObjectData_s* zx_DEEP_CLONE_demomed_ObjectData(struct zx_ctx* c, struct zx_demomed_ObjectData_s* x, int dup_strs);
void zx_DUP_STRS_demomed_ObjectData(struct zx_ctx* c, struct zx_demomed_ObjectData_s* x);
int zx_WALK_SO_demomed_ObjectData(struct zx_ctx* c, struct zx_demomed_ObjectData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_demomed_ObjectData(struct zx_ctx* c, struct zx_demomed_ObjectData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_demomed_ObjectData(struct zx_ctx* c, struct zx_demomed_ObjectData_s* x);
int zx_LEN_WO_demomed_ObjectData(struct zx_ctx* c, struct zx_demomed_ObjectData_s* x);
char* zx_ENC_SO_demomed_ObjectData(struct zx_ctx* c, struct zx_demomed_ObjectData_s* x, char* p);
char* zx_ENC_WO_demomed_ObjectData(struct zx_ctx* c, struct zx_demomed_ObjectData_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_demomed_ObjectData(struct zx_ctx* c, struct zx_demomed_ObjectData_s* x);
struct zx_str* zx_EASY_ENC_WO_demomed_ObjectData(struct zx_ctx* c, struct zx_demomed_ObjectData_s* x);

struct zx_demomed_ObjectData_s {
  ZX_ELEM_EXT
  zx_demomed_ObjectData_EXT
  struct zx_str* objectID;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_demomed_ObjectData_GET_objectID(struct zx_demomed_ObjectData_s* x);





void zx_demomed_ObjectData_PUT_objectID(struct zx_demomed_ObjectData_s* x, struct zx_str* y);





#endif
/* -------------------------- demomed_ObjectInfo -------------------------- */
/* refby( zx_demomed_Object_s zx_demomed_GetObjectListResponse_s ) */
#ifndef zx_demomed_ObjectInfo_EXT
#define zx_demomed_ObjectInfo_EXT
#endif

struct zx_demomed_ObjectInfo_s* zx_DEC_demomed_ObjectInfo(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_demomed_ObjectInfo_s* zx_NEW_demomed_ObjectInfo(struct zx_ctx* c);
void zx_FREE_demomed_ObjectInfo(struct zx_ctx* c, struct zx_demomed_ObjectInfo_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_demomed_ObjectInfo_s* zx_DEEP_CLONE_demomed_ObjectInfo(struct zx_ctx* c, struct zx_demomed_ObjectInfo_s* x, int dup_strs);
void zx_DUP_STRS_demomed_ObjectInfo(struct zx_ctx* c, struct zx_demomed_ObjectInfo_s* x);
int zx_WALK_SO_demomed_ObjectInfo(struct zx_ctx* c, struct zx_demomed_ObjectInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_demomed_ObjectInfo(struct zx_ctx* c, struct zx_demomed_ObjectInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_demomed_ObjectInfo(struct zx_ctx* c, struct zx_demomed_ObjectInfo_s* x);
int zx_LEN_WO_demomed_ObjectInfo(struct zx_ctx* c, struct zx_demomed_ObjectInfo_s* x);
char* zx_ENC_SO_demomed_ObjectInfo(struct zx_ctx* c, struct zx_demomed_ObjectInfo_s* x, char* p);
char* zx_ENC_WO_demomed_ObjectInfo(struct zx_ctx* c, struct zx_demomed_ObjectInfo_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_demomed_ObjectInfo(struct zx_ctx* c, struct zx_demomed_ObjectInfo_s* x);
struct zx_str* zx_EASY_ENC_WO_demomed_ObjectInfo(struct zx_ctx* c, struct zx_demomed_ObjectInfo_s* x);

struct zx_demomed_ObjectInfo_s {
  ZX_ELEM_EXT
  zx_demomed_ObjectInfo_EXT
  struct zx_elem_s* Dir;	/* {1,1} xs:string */
  struct zx_elem_s* Name;	/* {1,1} xs:string */
  struct zx_elem_s* Type;	/* {1,1} xs:string */
  struct zx_elem_s* Created;	/* {1,1} xs:dateTime */
  struct zx_elem_s* Comment;	/* {0,1} xs:string */
  struct zx_str* objectID;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_demomed_ObjectInfo_GET_objectID(struct zx_demomed_ObjectInfo_s* x);

struct zx_elem_s* zx_demomed_ObjectInfo_GET_Dir(struct zx_demomed_ObjectInfo_s* x, int n);
struct zx_elem_s* zx_demomed_ObjectInfo_GET_Name(struct zx_demomed_ObjectInfo_s* x, int n);
struct zx_elem_s* zx_demomed_ObjectInfo_GET_Type(struct zx_demomed_ObjectInfo_s* x, int n);
struct zx_elem_s* zx_demomed_ObjectInfo_GET_Created(struct zx_demomed_ObjectInfo_s* x, int n);
struct zx_elem_s* zx_demomed_ObjectInfo_GET_Comment(struct zx_demomed_ObjectInfo_s* x, int n);

int zx_demomed_ObjectInfo_NUM_Dir(struct zx_demomed_ObjectInfo_s* x);
int zx_demomed_ObjectInfo_NUM_Name(struct zx_demomed_ObjectInfo_s* x);
int zx_demomed_ObjectInfo_NUM_Type(struct zx_demomed_ObjectInfo_s* x);
int zx_demomed_ObjectInfo_NUM_Created(struct zx_demomed_ObjectInfo_s* x);
int zx_demomed_ObjectInfo_NUM_Comment(struct zx_demomed_ObjectInfo_s* x);

struct zx_elem_s* zx_demomed_ObjectInfo_POP_Dir(struct zx_demomed_ObjectInfo_s* x);
struct zx_elem_s* zx_demomed_ObjectInfo_POP_Name(struct zx_demomed_ObjectInfo_s* x);
struct zx_elem_s* zx_demomed_ObjectInfo_POP_Type(struct zx_demomed_ObjectInfo_s* x);
struct zx_elem_s* zx_demomed_ObjectInfo_POP_Created(struct zx_demomed_ObjectInfo_s* x);
struct zx_elem_s* zx_demomed_ObjectInfo_POP_Comment(struct zx_demomed_ObjectInfo_s* x);

void zx_demomed_ObjectInfo_PUSH_Dir(struct zx_demomed_ObjectInfo_s* x, struct zx_elem_s* y);
void zx_demomed_ObjectInfo_PUSH_Name(struct zx_demomed_ObjectInfo_s* x, struct zx_elem_s* y);
void zx_demomed_ObjectInfo_PUSH_Type(struct zx_demomed_ObjectInfo_s* x, struct zx_elem_s* y);
void zx_demomed_ObjectInfo_PUSH_Created(struct zx_demomed_ObjectInfo_s* x, struct zx_elem_s* y);
void zx_demomed_ObjectInfo_PUSH_Comment(struct zx_demomed_ObjectInfo_s* x, struct zx_elem_s* y);

void zx_demomed_ObjectInfo_PUT_objectID(struct zx_demomed_ObjectInfo_s* x, struct zx_str* y);

void zx_demomed_ObjectInfo_PUT_Dir(struct zx_demomed_ObjectInfo_s* x, int n, struct zx_elem_s* y);
void zx_demomed_ObjectInfo_PUT_Name(struct zx_demomed_ObjectInfo_s* x, int n, struct zx_elem_s* y);
void zx_demomed_ObjectInfo_PUT_Type(struct zx_demomed_ObjectInfo_s* x, int n, struct zx_elem_s* y);
void zx_demomed_ObjectInfo_PUT_Created(struct zx_demomed_ObjectInfo_s* x, int n, struct zx_elem_s* y);
void zx_demomed_ObjectInfo_PUT_Comment(struct zx_demomed_ObjectInfo_s* x, int n, struct zx_elem_s* y);

void zx_demomed_ObjectInfo_ADD_Dir(struct zx_demomed_ObjectInfo_s* x, int n, struct zx_elem_s* z);
void zx_demomed_ObjectInfo_ADD_Name(struct zx_demomed_ObjectInfo_s* x, int n, struct zx_elem_s* z);
void zx_demomed_ObjectInfo_ADD_Type(struct zx_demomed_ObjectInfo_s* x, int n, struct zx_elem_s* z);
void zx_demomed_ObjectInfo_ADD_Created(struct zx_demomed_ObjectInfo_s* x, int n, struct zx_elem_s* z);
void zx_demomed_ObjectInfo_ADD_Comment(struct zx_demomed_ObjectInfo_s* x, int n, struct zx_elem_s* z);

void zx_demomed_ObjectInfo_DEL_Dir(struct zx_demomed_ObjectInfo_s* x, int n);
void zx_demomed_ObjectInfo_DEL_Name(struct zx_demomed_ObjectInfo_s* x, int n);
void zx_demomed_ObjectInfo_DEL_Type(struct zx_demomed_ObjectInfo_s* x, int n);
void zx_demomed_ObjectInfo_DEL_Created(struct zx_demomed_ObjectInfo_s* x, int n);
void zx_demomed_ObjectInfo_DEL_Comment(struct zx_demomed_ObjectInfo_s* x, int n);

void zx_demomed_ObjectInfo_REV_Dir(struct zx_demomed_ObjectInfo_s* x);
void zx_demomed_ObjectInfo_REV_Name(struct zx_demomed_ObjectInfo_s* x);
void zx_demomed_ObjectInfo_REV_Type(struct zx_demomed_ObjectInfo_s* x);
void zx_demomed_ObjectInfo_REV_Created(struct zx_demomed_ObjectInfo_s* x);
void zx_demomed_ObjectInfo_REV_Comment(struct zx_demomed_ObjectInfo_s* x);

#endif
/* -------------------------- demomed_ObjectSearchParm -------------------------- */
/* refby( zx_demomed_GetObjectListRequest_s ) */
#ifndef zx_demomed_ObjectSearchParm_EXT
#define zx_demomed_ObjectSearchParm_EXT
#endif

struct zx_demomed_ObjectSearchParm_s* zx_DEC_demomed_ObjectSearchParm(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_demomed_ObjectSearchParm_s* zx_NEW_demomed_ObjectSearchParm(struct zx_ctx* c);
void zx_FREE_demomed_ObjectSearchParm(struct zx_ctx* c, struct zx_demomed_ObjectSearchParm_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_demomed_ObjectSearchParm_s* zx_DEEP_CLONE_demomed_ObjectSearchParm(struct zx_ctx* c, struct zx_demomed_ObjectSearchParm_s* x, int dup_strs);
void zx_DUP_STRS_demomed_ObjectSearchParm(struct zx_ctx* c, struct zx_demomed_ObjectSearchParm_s* x);
int zx_WALK_SO_demomed_ObjectSearchParm(struct zx_ctx* c, struct zx_demomed_ObjectSearchParm_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_demomed_ObjectSearchParm(struct zx_ctx* c, struct zx_demomed_ObjectSearchParm_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_demomed_ObjectSearchParm(struct zx_ctx* c, struct zx_demomed_ObjectSearchParm_s* x);
int zx_LEN_WO_demomed_ObjectSearchParm(struct zx_ctx* c, struct zx_demomed_ObjectSearchParm_s* x);
char* zx_ENC_SO_demomed_ObjectSearchParm(struct zx_ctx* c, struct zx_demomed_ObjectSearchParm_s* x, char* p);
char* zx_ENC_WO_demomed_ObjectSearchParm(struct zx_ctx* c, struct zx_demomed_ObjectSearchParm_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_demomed_ObjectSearchParm(struct zx_ctx* c, struct zx_demomed_ObjectSearchParm_s* x);
struct zx_str* zx_EASY_ENC_WO_demomed_ObjectSearchParm(struct zx_ctx* c, struct zx_demomed_ObjectSearchParm_s* x);

struct zx_demomed_ObjectSearchParm_s {
  ZX_ELEM_EXT
  zx_demomed_ObjectSearchParm_EXT
  struct zx_elem_s* Dir;	/* {0,1} xs:string */
  struct zx_elem_s* Name;	/* {0,1} xs:string */
  struct zx_elem_s* Type;	/* {0,1} xs:string */
  struct zx_elem_s* objectID;	/* {0,1} xs:string */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_demomed_ObjectSearchParm_GET_Dir(struct zx_demomed_ObjectSearchParm_s* x, int n);
struct zx_elem_s* zx_demomed_ObjectSearchParm_GET_Name(struct zx_demomed_ObjectSearchParm_s* x, int n);
struct zx_elem_s* zx_demomed_ObjectSearchParm_GET_Type(struct zx_demomed_ObjectSearchParm_s* x, int n);
struct zx_elem_s* zx_demomed_ObjectSearchParm_GET_objectID(struct zx_demomed_ObjectSearchParm_s* x, int n);

int zx_demomed_ObjectSearchParm_NUM_Dir(struct zx_demomed_ObjectSearchParm_s* x);
int zx_demomed_ObjectSearchParm_NUM_Name(struct zx_demomed_ObjectSearchParm_s* x);
int zx_demomed_ObjectSearchParm_NUM_Type(struct zx_demomed_ObjectSearchParm_s* x);
int zx_demomed_ObjectSearchParm_NUM_objectID(struct zx_demomed_ObjectSearchParm_s* x);

struct zx_elem_s* zx_demomed_ObjectSearchParm_POP_Dir(struct zx_demomed_ObjectSearchParm_s* x);
struct zx_elem_s* zx_demomed_ObjectSearchParm_POP_Name(struct zx_demomed_ObjectSearchParm_s* x);
struct zx_elem_s* zx_demomed_ObjectSearchParm_POP_Type(struct zx_demomed_ObjectSearchParm_s* x);
struct zx_elem_s* zx_demomed_ObjectSearchParm_POP_objectID(struct zx_demomed_ObjectSearchParm_s* x);

void zx_demomed_ObjectSearchParm_PUSH_Dir(struct zx_demomed_ObjectSearchParm_s* x, struct zx_elem_s* y);
void zx_demomed_ObjectSearchParm_PUSH_Name(struct zx_demomed_ObjectSearchParm_s* x, struct zx_elem_s* y);
void zx_demomed_ObjectSearchParm_PUSH_Type(struct zx_demomed_ObjectSearchParm_s* x, struct zx_elem_s* y);
void zx_demomed_ObjectSearchParm_PUSH_objectID(struct zx_demomed_ObjectSearchParm_s* x, struct zx_elem_s* y);


void zx_demomed_ObjectSearchParm_PUT_Dir(struct zx_demomed_ObjectSearchParm_s* x, int n, struct zx_elem_s* y);
void zx_demomed_ObjectSearchParm_PUT_Name(struct zx_demomed_ObjectSearchParm_s* x, int n, struct zx_elem_s* y);
void zx_demomed_ObjectSearchParm_PUT_Type(struct zx_demomed_ObjectSearchParm_s* x, int n, struct zx_elem_s* y);
void zx_demomed_ObjectSearchParm_PUT_objectID(struct zx_demomed_ObjectSearchParm_s* x, int n, struct zx_elem_s* y);

void zx_demomed_ObjectSearchParm_ADD_Dir(struct zx_demomed_ObjectSearchParm_s* x, int n, struct zx_elem_s* z);
void zx_demomed_ObjectSearchParm_ADD_Name(struct zx_demomed_ObjectSearchParm_s* x, int n, struct zx_elem_s* z);
void zx_demomed_ObjectSearchParm_ADD_Type(struct zx_demomed_ObjectSearchParm_s* x, int n, struct zx_elem_s* z);
void zx_demomed_ObjectSearchParm_ADD_objectID(struct zx_demomed_ObjectSearchParm_s* x, int n, struct zx_elem_s* z);

void zx_demomed_ObjectSearchParm_DEL_Dir(struct zx_demomed_ObjectSearchParm_s* x, int n);
void zx_demomed_ObjectSearchParm_DEL_Name(struct zx_demomed_ObjectSearchParm_s* x, int n);
void zx_demomed_ObjectSearchParm_DEL_Type(struct zx_demomed_ObjectSearchParm_s* x, int n);
void zx_demomed_ObjectSearchParm_DEL_objectID(struct zx_demomed_ObjectSearchParm_s* x, int n);

void zx_demomed_ObjectSearchParm_REV_Dir(struct zx_demomed_ObjectSearchParm_s* x);
void zx_demomed_ObjectSearchParm_REV_Name(struct zx_demomed_ObjectSearchParm_s* x);
void zx_demomed_ObjectSearchParm_REV_Type(struct zx_demomed_ObjectSearchParm_s* x);
void zx_demomed_ObjectSearchParm_REV_objectID(struct zx_demomed_ObjectSearchParm_s* x);

#endif
/* -------------------------- demomed_ObjectStoreInfo -------------------------- */
/* refby( zx_demomed_StoreObjectResponse_s ) */
#ifndef zx_demomed_ObjectStoreInfo_EXT
#define zx_demomed_ObjectStoreInfo_EXT
#endif

struct zx_demomed_ObjectStoreInfo_s* zx_DEC_demomed_ObjectStoreInfo(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_demomed_ObjectStoreInfo_s* zx_NEW_demomed_ObjectStoreInfo(struct zx_ctx* c);
void zx_FREE_demomed_ObjectStoreInfo(struct zx_ctx* c, struct zx_demomed_ObjectStoreInfo_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_demomed_ObjectStoreInfo_s* zx_DEEP_CLONE_demomed_ObjectStoreInfo(struct zx_ctx* c, struct zx_demomed_ObjectStoreInfo_s* x, int dup_strs);
void zx_DUP_STRS_demomed_ObjectStoreInfo(struct zx_ctx* c, struct zx_demomed_ObjectStoreInfo_s* x);
int zx_WALK_SO_demomed_ObjectStoreInfo(struct zx_ctx* c, struct zx_demomed_ObjectStoreInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_demomed_ObjectStoreInfo(struct zx_ctx* c, struct zx_demomed_ObjectStoreInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_demomed_ObjectStoreInfo(struct zx_ctx* c, struct zx_demomed_ObjectStoreInfo_s* x);
int zx_LEN_WO_demomed_ObjectStoreInfo(struct zx_ctx* c, struct zx_demomed_ObjectStoreInfo_s* x);
char* zx_ENC_SO_demomed_ObjectStoreInfo(struct zx_ctx* c, struct zx_demomed_ObjectStoreInfo_s* x, char* p);
char* zx_ENC_WO_demomed_ObjectStoreInfo(struct zx_ctx* c, struct zx_demomed_ObjectStoreInfo_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_demomed_ObjectStoreInfo(struct zx_ctx* c, struct zx_demomed_ObjectStoreInfo_s* x);
struct zx_str* zx_EASY_ENC_WO_demomed_ObjectStoreInfo(struct zx_ctx* c, struct zx_demomed_ObjectStoreInfo_s* x);

struct zx_demomed_ObjectStoreInfo_s {
  ZX_ELEM_EXT
  zx_demomed_ObjectStoreInfo_EXT
  struct zx_str* storeRef;	/* {1,1} attribute xs:string */
  struct zx_str* objectID;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_demomed_ObjectStoreInfo_GET_storeRef(struct zx_demomed_ObjectStoreInfo_s* x);
struct zx_str* zx_demomed_ObjectStoreInfo_GET_objectID(struct zx_demomed_ObjectStoreInfo_s* x);





void zx_demomed_ObjectStoreInfo_PUT_storeRef(struct zx_demomed_ObjectStoreInfo_s* x, struct zx_str* y);
void zx_demomed_ObjectStoreInfo_PUT_objectID(struct zx_demomed_ObjectStoreInfo_s* x, struct zx_str* y);





#endif
/* -------------------------- demomed_StoreObjectRequest -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_demomed_StoreObjectRequest_EXT
#define zx_demomed_StoreObjectRequest_EXT
#endif

struct zx_demomed_StoreObjectRequest_s* zx_DEC_demomed_StoreObjectRequest(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_demomed_StoreObjectRequest_s* zx_NEW_demomed_StoreObjectRequest(struct zx_ctx* c);
void zx_FREE_demomed_StoreObjectRequest(struct zx_ctx* c, struct zx_demomed_StoreObjectRequest_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_demomed_StoreObjectRequest_s* zx_DEEP_CLONE_demomed_StoreObjectRequest(struct zx_ctx* c, struct zx_demomed_StoreObjectRequest_s* x, int dup_strs);
void zx_DUP_STRS_demomed_StoreObjectRequest(struct zx_ctx* c, struct zx_demomed_StoreObjectRequest_s* x);
int zx_WALK_SO_demomed_StoreObjectRequest(struct zx_ctx* c, struct zx_demomed_StoreObjectRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_demomed_StoreObjectRequest(struct zx_ctx* c, struct zx_demomed_StoreObjectRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_demomed_StoreObjectRequest(struct zx_ctx* c, struct zx_demomed_StoreObjectRequest_s* x);
int zx_LEN_WO_demomed_StoreObjectRequest(struct zx_ctx* c, struct zx_demomed_StoreObjectRequest_s* x);
char* zx_ENC_SO_demomed_StoreObjectRequest(struct zx_ctx* c, struct zx_demomed_StoreObjectRequest_s* x, char* p);
char* zx_ENC_WO_demomed_StoreObjectRequest(struct zx_ctx* c, struct zx_demomed_StoreObjectRequest_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_demomed_StoreObjectRequest(struct zx_ctx* c, struct zx_demomed_StoreObjectRequest_s* x);
struct zx_str* zx_EASY_ENC_WO_demomed_StoreObjectRequest(struct zx_ctx* c, struct zx_demomed_StoreObjectRequest_s* x);

struct zx_demomed_StoreObjectRequest_s {
  ZX_ELEM_EXT
  zx_demomed_StoreObjectRequest_EXT
  struct zx_demomed_Object_s* Object;	/* {1,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_demomed_Object_s* zx_demomed_StoreObjectRequest_GET_Object(struct zx_demomed_StoreObjectRequest_s* x, int n);

int zx_demomed_StoreObjectRequest_NUM_Object(struct zx_demomed_StoreObjectRequest_s* x);

struct zx_demomed_Object_s* zx_demomed_StoreObjectRequest_POP_Object(struct zx_demomed_StoreObjectRequest_s* x);

void zx_demomed_StoreObjectRequest_PUSH_Object(struct zx_demomed_StoreObjectRequest_s* x, struct zx_demomed_Object_s* y);


void zx_demomed_StoreObjectRequest_PUT_Object(struct zx_demomed_StoreObjectRequest_s* x, int n, struct zx_demomed_Object_s* y);

void zx_demomed_StoreObjectRequest_ADD_Object(struct zx_demomed_StoreObjectRequest_s* x, int n, struct zx_demomed_Object_s* z);

void zx_demomed_StoreObjectRequest_DEL_Object(struct zx_demomed_StoreObjectRequest_s* x, int n);

void zx_demomed_StoreObjectRequest_REV_Object(struct zx_demomed_StoreObjectRequest_s* x);

#endif
/* -------------------------- demomed_StoreObjectResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_demomed_StoreObjectResponse_EXT
#define zx_demomed_StoreObjectResponse_EXT
#endif

struct zx_demomed_StoreObjectResponse_s* zx_DEC_demomed_StoreObjectResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_demomed_StoreObjectResponse_s* zx_NEW_demomed_StoreObjectResponse(struct zx_ctx* c);
void zx_FREE_demomed_StoreObjectResponse(struct zx_ctx* c, struct zx_demomed_StoreObjectResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_demomed_StoreObjectResponse_s* zx_DEEP_CLONE_demomed_StoreObjectResponse(struct zx_ctx* c, struct zx_demomed_StoreObjectResponse_s* x, int dup_strs);
void zx_DUP_STRS_demomed_StoreObjectResponse(struct zx_ctx* c, struct zx_demomed_StoreObjectResponse_s* x);
int zx_WALK_SO_demomed_StoreObjectResponse(struct zx_ctx* c, struct zx_demomed_StoreObjectResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_demomed_StoreObjectResponse(struct zx_ctx* c, struct zx_demomed_StoreObjectResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_demomed_StoreObjectResponse(struct zx_ctx* c, struct zx_demomed_StoreObjectResponse_s* x);
int zx_LEN_WO_demomed_StoreObjectResponse(struct zx_ctx* c, struct zx_demomed_StoreObjectResponse_s* x);
char* zx_ENC_SO_demomed_StoreObjectResponse(struct zx_ctx* c, struct zx_demomed_StoreObjectResponse_s* x, char* p);
char* zx_ENC_WO_demomed_StoreObjectResponse(struct zx_ctx* c, struct zx_demomed_StoreObjectResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_demomed_StoreObjectResponse(struct zx_ctx* c, struct zx_demomed_StoreObjectResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_demomed_StoreObjectResponse(struct zx_ctx* c, struct zx_demomed_StoreObjectResponse_s* x);

struct zx_demomed_StoreObjectResponse_s {
  ZX_ELEM_EXT
  zx_demomed_StoreObjectResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
  struct zx_demomed_ObjectStoreInfo_s* ObjectStoreInfo;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_demomed_StoreObjectResponse_GET_Status(struct zx_demomed_StoreObjectResponse_s* x, int n);
struct zx_demomed_ObjectStoreInfo_s* zx_demomed_StoreObjectResponse_GET_ObjectStoreInfo(struct zx_demomed_StoreObjectResponse_s* x, int n);

int zx_demomed_StoreObjectResponse_NUM_Status(struct zx_demomed_StoreObjectResponse_s* x);
int zx_demomed_StoreObjectResponse_NUM_ObjectStoreInfo(struct zx_demomed_StoreObjectResponse_s* x);

struct zx_lu_Status_s* zx_demomed_StoreObjectResponse_POP_Status(struct zx_demomed_StoreObjectResponse_s* x);
struct zx_demomed_ObjectStoreInfo_s* zx_demomed_StoreObjectResponse_POP_ObjectStoreInfo(struct zx_demomed_StoreObjectResponse_s* x);

void zx_demomed_StoreObjectResponse_PUSH_Status(struct zx_demomed_StoreObjectResponse_s* x, struct zx_lu_Status_s* y);
void zx_demomed_StoreObjectResponse_PUSH_ObjectStoreInfo(struct zx_demomed_StoreObjectResponse_s* x, struct zx_demomed_ObjectStoreInfo_s* y);


void zx_demomed_StoreObjectResponse_PUT_Status(struct zx_demomed_StoreObjectResponse_s* x, int n, struct zx_lu_Status_s* y);
void zx_demomed_StoreObjectResponse_PUT_ObjectStoreInfo(struct zx_demomed_StoreObjectResponse_s* x, int n, struct zx_demomed_ObjectStoreInfo_s* y);

void zx_demomed_StoreObjectResponse_ADD_Status(struct zx_demomed_StoreObjectResponse_s* x, int n, struct zx_lu_Status_s* z);
void zx_demomed_StoreObjectResponse_ADD_ObjectStoreInfo(struct zx_demomed_StoreObjectResponse_s* x, int n, struct zx_demomed_ObjectStoreInfo_s* z);

void zx_demomed_StoreObjectResponse_DEL_Status(struct zx_demomed_StoreObjectResponse_s* x, int n);
void zx_demomed_StoreObjectResponse_DEL_ObjectStoreInfo(struct zx_demomed_StoreObjectResponse_s* x, int n);

void zx_demomed_StoreObjectResponse_REV_Status(struct zx_demomed_StoreObjectResponse_s* x);
void zx_demomed_StoreObjectResponse_REV_ObjectStoreInfo(struct zx_demomed_StoreObjectResponse_s* x);

#endif

#endif
