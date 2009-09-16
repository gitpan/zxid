/* c/zx-shps-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_shps_data_h
#define _c_zx_shps_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- shps_CallbackEPR -------------------------- */
/* refby( ) */
#ifndef zx_shps_CallbackEPR_EXT
#define zx_shps_CallbackEPR_EXT
#endif

struct zx_shps_CallbackEPR_s* zx_DEC_shps_CallbackEPR(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_CallbackEPR_s* zx_NEW_shps_CallbackEPR(struct zx_ctx* c);
void zx_FREE_shps_CallbackEPR(struct zx_ctx* c, struct zx_shps_CallbackEPR_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_CallbackEPR_s* zx_DEEP_CLONE_shps_CallbackEPR(struct zx_ctx* c, struct zx_shps_CallbackEPR_s* x, int dup_strs);
void zx_DUP_STRS_shps_CallbackEPR(struct zx_ctx* c, struct zx_shps_CallbackEPR_s* x);
int zx_WALK_SO_shps_CallbackEPR(struct zx_ctx* c, struct zx_shps_CallbackEPR_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_CallbackEPR(struct zx_ctx* c, struct zx_shps_CallbackEPR_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_CallbackEPR(struct zx_ctx* c, struct zx_shps_CallbackEPR_s* x);
int zx_LEN_WO_shps_CallbackEPR(struct zx_ctx* c, struct zx_shps_CallbackEPR_s* x);
char* zx_ENC_SO_shps_CallbackEPR(struct zx_ctx* c, struct zx_shps_CallbackEPR_s* x, char* p);
char* zx_ENC_WO_shps_CallbackEPR(struct zx_ctx* c, struct zx_shps_CallbackEPR_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_CallbackEPR(struct zx_ctx* c, struct zx_shps_CallbackEPR_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_CallbackEPR(struct zx_ctx* c, struct zx_shps_CallbackEPR_s* x);

struct zx_shps_CallbackEPR_s {
  ZX_ELEM_EXT
  zx_shps_CallbackEPR_EXT
  struct zx_a_Address_s* Address;	/* {1,1}  */
  struct zx_a_ReferenceParameters_s* ReferenceParameters;	/* {0,1} nada */
  struct zx_a_Metadata_s* Metadata;	/* {0,1} nada */
  struct zx_str* ID;	/* {0,1} attribute xs:anyURI */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* notOnOrAfter;	/* {0,1} attribute xs:dateTime */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_shps_CallbackEPR_GET_ID(struct zx_shps_CallbackEPR_s* x);
struct zx_str* zx_shps_CallbackEPR_GET_id(struct zx_shps_CallbackEPR_s* x);
struct zx_str* zx_shps_CallbackEPR_GET_notOnOrAfter(struct zx_shps_CallbackEPR_s* x);
struct zx_str* zx_shps_CallbackEPR_GET_Id(struct zx_shps_CallbackEPR_s* x);
struct zx_str* zx_shps_CallbackEPR_GET_actor(struct zx_shps_CallbackEPR_s* x);
struct zx_str* zx_shps_CallbackEPR_GET_mustUnderstand(struct zx_shps_CallbackEPR_s* x);

struct zx_a_Address_s* zx_shps_CallbackEPR_GET_Address(struct zx_shps_CallbackEPR_s* x, int n);
struct zx_a_ReferenceParameters_s* zx_shps_CallbackEPR_GET_ReferenceParameters(struct zx_shps_CallbackEPR_s* x, int n);
struct zx_a_Metadata_s* zx_shps_CallbackEPR_GET_Metadata(struct zx_shps_CallbackEPR_s* x, int n);

int zx_shps_CallbackEPR_NUM_Address(struct zx_shps_CallbackEPR_s* x);
int zx_shps_CallbackEPR_NUM_ReferenceParameters(struct zx_shps_CallbackEPR_s* x);
int zx_shps_CallbackEPR_NUM_Metadata(struct zx_shps_CallbackEPR_s* x);

struct zx_a_Address_s* zx_shps_CallbackEPR_POP_Address(struct zx_shps_CallbackEPR_s* x);
struct zx_a_ReferenceParameters_s* zx_shps_CallbackEPR_POP_ReferenceParameters(struct zx_shps_CallbackEPR_s* x);
struct zx_a_Metadata_s* zx_shps_CallbackEPR_POP_Metadata(struct zx_shps_CallbackEPR_s* x);

void zx_shps_CallbackEPR_PUSH_Address(struct zx_shps_CallbackEPR_s* x, struct zx_a_Address_s* y);
void zx_shps_CallbackEPR_PUSH_ReferenceParameters(struct zx_shps_CallbackEPR_s* x, struct zx_a_ReferenceParameters_s* y);
void zx_shps_CallbackEPR_PUSH_Metadata(struct zx_shps_CallbackEPR_s* x, struct zx_a_Metadata_s* y);

void zx_shps_CallbackEPR_PUT_ID(struct zx_shps_CallbackEPR_s* x, struct zx_str* y);
void zx_shps_CallbackEPR_PUT_id(struct zx_shps_CallbackEPR_s* x, struct zx_str* y);
void zx_shps_CallbackEPR_PUT_notOnOrAfter(struct zx_shps_CallbackEPR_s* x, struct zx_str* y);
void zx_shps_CallbackEPR_PUT_Id(struct zx_shps_CallbackEPR_s* x, struct zx_str* y);
void zx_shps_CallbackEPR_PUT_actor(struct zx_shps_CallbackEPR_s* x, struct zx_str* y);
void zx_shps_CallbackEPR_PUT_mustUnderstand(struct zx_shps_CallbackEPR_s* x, struct zx_str* y);

void zx_shps_CallbackEPR_PUT_Address(struct zx_shps_CallbackEPR_s* x, int n, struct zx_a_Address_s* y);
void zx_shps_CallbackEPR_PUT_ReferenceParameters(struct zx_shps_CallbackEPR_s* x, int n, struct zx_a_ReferenceParameters_s* y);
void zx_shps_CallbackEPR_PUT_Metadata(struct zx_shps_CallbackEPR_s* x, int n, struct zx_a_Metadata_s* y);

void zx_shps_CallbackEPR_ADD_Address(struct zx_shps_CallbackEPR_s* x, int n, struct zx_a_Address_s* z);
void zx_shps_CallbackEPR_ADD_ReferenceParameters(struct zx_shps_CallbackEPR_s* x, int n, struct zx_a_ReferenceParameters_s* z);
void zx_shps_CallbackEPR_ADD_Metadata(struct zx_shps_CallbackEPR_s* x, int n, struct zx_a_Metadata_s* z);

void zx_shps_CallbackEPR_DEL_Address(struct zx_shps_CallbackEPR_s* x, int n);
void zx_shps_CallbackEPR_DEL_ReferenceParameters(struct zx_shps_CallbackEPR_s* x, int n);
void zx_shps_CallbackEPR_DEL_Metadata(struct zx_shps_CallbackEPR_s* x, int n);

void zx_shps_CallbackEPR_REV_Address(struct zx_shps_CallbackEPR_s* x);
void zx_shps_CallbackEPR_REV_ReferenceParameters(struct zx_shps_CallbackEPR_s* x);
void zx_shps_CallbackEPR_REV_Metadata(struct zx_shps_CallbackEPR_s* x);

#endif
/* -------------------------- shps_Delete -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_shps_Delete_EXT
#define zx_shps_Delete_EXT
#endif

struct zx_shps_Delete_s* zx_DEC_shps_Delete(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_Delete_s* zx_NEW_shps_Delete(struct zx_ctx* c);
void zx_FREE_shps_Delete(struct zx_ctx* c, struct zx_shps_Delete_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_Delete_s* zx_DEEP_CLONE_shps_Delete(struct zx_ctx* c, struct zx_shps_Delete_s* x, int dup_strs);
void zx_DUP_STRS_shps_Delete(struct zx_ctx* c, struct zx_shps_Delete_s* x);
int zx_WALK_SO_shps_Delete(struct zx_ctx* c, struct zx_shps_Delete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_Delete(struct zx_ctx* c, struct zx_shps_Delete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_Delete(struct zx_ctx* c, struct zx_shps_Delete_s* x);
int zx_LEN_WO_shps_Delete(struct zx_ctx* c, struct zx_shps_Delete_s* x);
char* zx_ENC_SO_shps_Delete(struct zx_ctx* c, struct zx_shps_Delete_s* x, char* p);
char* zx_ENC_WO_shps_Delete(struct zx_ctx* c, struct zx_shps_Delete_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_Delete(struct zx_ctx* c, struct zx_shps_Delete_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_Delete(struct zx_ctx* c, struct zx_shps_Delete_s* x);

struct zx_shps_Delete_s {
  ZX_ELEM_EXT
  zx_shps_Delete_EXT
  struct zx_elem_s* ServiceHandle;	/* {1,-1} xs:anyURI */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_shps_Delete_GET_ServiceHandle(struct zx_shps_Delete_s* x, int n);

int zx_shps_Delete_NUM_ServiceHandle(struct zx_shps_Delete_s* x);

struct zx_elem_s* zx_shps_Delete_POP_ServiceHandle(struct zx_shps_Delete_s* x);

void zx_shps_Delete_PUSH_ServiceHandle(struct zx_shps_Delete_s* x, struct zx_elem_s* y);


void zx_shps_Delete_PUT_ServiceHandle(struct zx_shps_Delete_s* x, int n, struct zx_elem_s* y);

void zx_shps_Delete_ADD_ServiceHandle(struct zx_shps_Delete_s* x, int n, struct zx_elem_s* z);

void zx_shps_Delete_DEL_ServiceHandle(struct zx_shps_Delete_s* x, int n);

void zx_shps_Delete_REV_ServiceHandle(struct zx_shps_Delete_s* x);

#endif
/* -------------------------- shps_DeleteResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_shps_DeleteResponse_EXT
#define zx_shps_DeleteResponse_EXT
#endif

struct zx_shps_DeleteResponse_s* zx_DEC_shps_DeleteResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_DeleteResponse_s* zx_NEW_shps_DeleteResponse(struct zx_ctx* c);
void zx_FREE_shps_DeleteResponse(struct zx_ctx* c, struct zx_shps_DeleteResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_DeleteResponse_s* zx_DEEP_CLONE_shps_DeleteResponse(struct zx_ctx* c, struct zx_shps_DeleteResponse_s* x, int dup_strs);
void zx_DUP_STRS_shps_DeleteResponse(struct zx_ctx* c, struct zx_shps_DeleteResponse_s* x);
int zx_WALK_SO_shps_DeleteResponse(struct zx_ctx* c, struct zx_shps_DeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_DeleteResponse(struct zx_ctx* c, struct zx_shps_DeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_DeleteResponse(struct zx_ctx* c, struct zx_shps_DeleteResponse_s* x);
int zx_LEN_WO_shps_DeleteResponse(struct zx_ctx* c, struct zx_shps_DeleteResponse_s* x);
char* zx_ENC_SO_shps_DeleteResponse(struct zx_ctx* c, struct zx_shps_DeleteResponse_s* x, char* p);
char* zx_ENC_WO_shps_DeleteResponse(struct zx_ctx* c, struct zx_shps_DeleteResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_DeleteResponse(struct zx_ctx* c, struct zx_shps_DeleteResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_DeleteResponse(struct zx_ctx* c, struct zx_shps_DeleteResponse_s* x);

struct zx_shps_DeleteResponse_s {
  ZX_ELEM_EXT
  zx_shps_DeleteResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_shps_DeleteResponse_GET_Status(struct zx_shps_DeleteResponse_s* x, int n);

int zx_shps_DeleteResponse_NUM_Status(struct zx_shps_DeleteResponse_s* x);

struct zx_lu_Status_s* zx_shps_DeleteResponse_POP_Status(struct zx_shps_DeleteResponse_s* x);

void zx_shps_DeleteResponse_PUSH_Status(struct zx_shps_DeleteResponse_s* x, struct zx_lu_Status_s* y);


void zx_shps_DeleteResponse_PUT_Status(struct zx_shps_DeleteResponse_s* x, int n, struct zx_lu_Status_s* y);

void zx_shps_DeleteResponse_ADD_Status(struct zx_shps_DeleteResponse_s* x, int n, struct zx_lu_Status_s* z);

void zx_shps_DeleteResponse_DEL_Status(struct zx_shps_DeleteResponse_s* x, int n);

void zx_shps_DeleteResponse_REV_Status(struct zx_shps_DeleteResponse_s* x);

#endif
/* -------------------------- shps_GetStatus -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_shps_GetStatus_EXT
#define zx_shps_GetStatus_EXT
#endif

struct zx_shps_GetStatus_s* zx_DEC_shps_GetStatus(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_GetStatus_s* zx_NEW_shps_GetStatus(struct zx_ctx* c);
void zx_FREE_shps_GetStatus(struct zx_ctx* c, struct zx_shps_GetStatus_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_GetStatus_s* zx_DEEP_CLONE_shps_GetStatus(struct zx_ctx* c, struct zx_shps_GetStatus_s* x, int dup_strs);
void zx_DUP_STRS_shps_GetStatus(struct zx_ctx* c, struct zx_shps_GetStatus_s* x);
int zx_WALK_SO_shps_GetStatus(struct zx_ctx* c, struct zx_shps_GetStatus_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_GetStatus(struct zx_ctx* c, struct zx_shps_GetStatus_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_GetStatus(struct zx_ctx* c, struct zx_shps_GetStatus_s* x);
int zx_LEN_WO_shps_GetStatus(struct zx_ctx* c, struct zx_shps_GetStatus_s* x);
char* zx_ENC_SO_shps_GetStatus(struct zx_ctx* c, struct zx_shps_GetStatus_s* x, char* p);
char* zx_ENC_WO_shps_GetStatus(struct zx_ctx* c, struct zx_shps_GetStatus_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_GetStatus(struct zx_ctx* c, struct zx_shps_GetStatus_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_GetStatus(struct zx_ctx* c, struct zx_shps_GetStatus_s* x);

struct zx_shps_GetStatus_s {
  ZX_ELEM_EXT
  zx_shps_GetStatus_EXT
  struct zx_elem_s* ServiceHandle;	/* {1,-1} xs:anyURI */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_shps_GetStatus_GET_ServiceHandle(struct zx_shps_GetStatus_s* x, int n);

int zx_shps_GetStatus_NUM_ServiceHandle(struct zx_shps_GetStatus_s* x);

struct zx_elem_s* zx_shps_GetStatus_POP_ServiceHandle(struct zx_shps_GetStatus_s* x);

void zx_shps_GetStatus_PUSH_ServiceHandle(struct zx_shps_GetStatus_s* x, struct zx_elem_s* y);


void zx_shps_GetStatus_PUT_ServiceHandle(struct zx_shps_GetStatus_s* x, int n, struct zx_elem_s* y);

void zx_shps_GetStatus_ADD_ServiceHandle(struct zx_shps_GetStatus_s* x, int n, struct zx_elem_s* z);

void zx_shps_GetStatus_DEL_ServiceHandle(struct zx_shps_GetStatus_s* x, int n);

void zx_shps_GetStatus_REV_ServiceHandle(struct zx_shps_GetStatus_s* x);

#endif
/* -------------------------- shps_GetStatusResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_shps_GetStatusResponse_EXT
#define zx_shps_GetStatusResponse_EXT
#endif

struct zx_shps_GetStatusResponse_s* zx_DEC_shps_GetStatusResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_GetStatusResponse_s* zx_NEW_shps_GetStatusResponse(struct zx_ctx* c);
void zx_FREE_shps_GetStatusResponse(struct zx_ctx* c, struct zx_shps_GetStatusResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_GetStatusResponse_s* zx_DEEP_CLONE_shps_GetStatusResponse(struct zx_ctx* c, struct zx_shps_GetStatusResponse_s* x, int dup_strs);
void zx_DUP_STRS_shps_GetStatusResponse(struct zx_ctx* c, struct zx_shps_GetStatusResponse_s* x);
int zx_WALK_SO_shps_GetStatusResponse(struct zx_ctx* c, struct zx_shps_GetStatusResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_GetStatusResponse(struct zx_ctx* c, struct zx_shps_GetStatusResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_GetStatusResponse(struct zx_ctx* c, struct zx_shps_GetStatusResponse_s* x);
int zx_LEN_WO_shps_GetStatusResponse(struct zx_ctx* c, struct zx_shps_GetStatusResponse_s* x);
char* zx_ENC_SO_shps_GetStatusResponse(struct zx_ctx* c, struct zx_shps_GetStatusResponse_s* x, char* p);
char* zx_ENC_WO_shps_GetStatusResponse(struct zx_ctx* c, struct zx_shps_GetStatusResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_GetStatusResponse(struct zx_ctx* c, struct zx_shps_GetStatusResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_GetStatusResponse(struct zx_ctx* c, struct zx_shps_GetStatusResponse_s* x);

struct zx_shps_GetStatusResponse_s {
  ZX_ELEM_EXT
  zx_shps_GetStatusResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
  struct zx_shps_GetStatusResponseItem_s* GetStatusResponseItem;	/* {1,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_shps_GetStatusResponse_GET_Status(struct zx_shps_GetStatusResponse_s* x, int n);
struct zx_shps_GetStatusResponseItem_s* zx_shps_GetStatusResponse_GET_GetStatusResponseItem(struct zx_shps_GetStatusResponse_s* x, int n);

int zx_shps_GetStatusResponse_NUM_Status(struct zx_shps_GetStatusResponse_s* x);
int zx_shps_GetStatusResponse_NUM_GetStatusResponseItem(struct zx_shps_GetStatusResponse_s* x);

struct zx_lu_Status_s* zx_shps_GetStatusResponse_POP_Status(struct zx_shps_GetStatusResponse_s* x);
struct zx_shps_GetStatusResponseItem_s* zx_shps_GetStatusResponse_POP_GetStatusResponseItem(struct zx_shps_GetStatusResponse_s* x);

void zx_shps_GetStatusResponse_PUSH_Status(struct zx_shps_GetStatusResponse_s* x, struct zx_lu_Status_s* y);
void zx_shps_GetStatusResponse_PUSH_GetStatusResponseItem(struct zx_shps_GetStatusResponse_s* x, struct zx_shps_GetStatusResponseItem_s* y);


void zx_shps_GetStatusResponse_PUT_Status(struct zx_shps_GetStatusResponse_s* x, int n, struct zx_lu_Status_s* y);
void zx_shps_GetStatusResponse_PUT_GetStatusResponseItem(struct zx_shps_GetStatusResponse_s* x, int n, struct zx_shps_GetStatusResponseItem_s* y);

void zx_shps_GetStatusResponse_ADD_Status(struct zx_shps_GetStatusResponse_s* x, int n, struct zx_lu_Status_s* z);
void zx_shps_GetStatusResponse_ADD_GetStatusResponseItem(struct zx_shps_GetStatusResponse_s* x, int n, struct zx_shps_GetStatusResponseItem_s* z);

void zx_shps_GetStatusResponse_DEL_Status(struct zx_shps_GetStatusResponse_s* x, int n);
void zx_shps_GetStatusResponse_DEL_GetStatusResponseItem(struct zx_shps_GetStatusResponse_s* x, int n);

void zx_shps_GetStatusResponse_REV_Status(struct zx_shps_GetStatusResponse_s* x);
void zx_shps_GetStatusResponse_REV_GetStatusResponseItem(struct zx_shps_GetStatusResponse_s* x);

#endif
/* -------------------------- shps_GetStatusResponseItem -------------------------- */
/* refby( zx_shps_GetStatusResponse_s ) */
#ifndef zx_shps_GetStatusResponseItem_EXT
#define zx_shps_GetStatusResponseItem_EXT
#endif

struct zx_shps_GetStatusResponseItem_s* zx_DEC_shps_GetStatusResponseItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_GetStatusResponseItem_s* zx_NEW_shps_GetStatusResponseItem(struct zx_ctx* c);
void zx_FREE_shps_GetStatusResponseItem(struct zx_ctx* c, struct zx_shps_GetStatusResponseItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_GetStatusResponseItem_s* zx_DEEP_CLONE_shps_GetStatusResponseItem(struct zx_ctx* c, struct zx_shps_GetStatusResponseItem_s* x, int dup_strs);
void zx_DUP_STRS_shps_GetStatusResponseItem(struct zx_ctx* c, struct zx_shps_GetStatusResponseItem_s* x);
int zx_WALK_SO_shps_GetStatusResponseItem(struct zx_ctx* c, struct zx_shps_GetStatusResponseItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_GetStatusResponseItem(struct zx_ctx* c, struct zx_shps_GetStatusResponseItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_GetStatusResponseItem(struct zx_ctx* c, struct zx_shps_GetStatusResponseItem_s* x);
int zx_LEN_WO_shps_GetStatusResponseItem(struct zx_ctx* c, struct zx_shps_GetStatusResponseItem_s* x);
char* zx_ENC_SO_shps_GetStatusResponseItem(struct zx_ctx* c, struct zx_shps_GetStatusResponseItem_s* x, char* p);
char* zx_ENC_WO_shps_GetStatusResponseItem(struct zx_ctx* c, struct zx_shps_GetStatusResponseItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_GetStatusResponseItem(struct zx_ctx* c, struct zx_shps_GetStatusResponseItem_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_GetStatusResponseItem(struct zx_ctx* c, struct zx_shps_GetStatusResponseItem_s* x);

struct zx_shps_GetStatusResponseItem_s {
  ZX_ELEM_EXT
  zx_shps_GetStatusResponseItem_EXT
  struct zx_elem_s* ServiceHandle;	/* {1,1} xs:anyURI */
  struct zx_elem_s* ServiceStatus;	/* {1,1} xs:anyURI */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_shps_GetStatusResponseItem_GET_ServiceHandle(struct zx_shps_GetStatusResponseItem_s* x, int n);
struct zx_elem_s* zx_shps_GetStatusResponseItem_GET_ServiceStatus(struct zx_shps_GetStatusResponseItem_s* x, int n);

int zx_shps_GetStatusResponseItem_NUM_ServiceHandle(struct zx_shps_GetStatusResponseItem_s* x);
int zx_shps_GetStatusResponseItem_NUM_ServiceStatus(struct zx_shps_GetStatusResponseItem_s* x);

struct zx_elem_s* zx_shps_GetStatusResponseItem_POP_ServiceHandle(struct zx_shps_GetStatusResponseItem_s* x);
struct zx_elem_s* zx_shps_GetStatusResponseItem_POP_ServiceStatus(struct zx_shps_GetStatusResponseItem_s* x);

void zx_shps_GetStatusResponseItem_PUSH_ServiceHandle(struct zx_shps_GetStatusResponseItem_s* x, struct zx_elem_s* y);
void zx_shps_GetStatusResponseItem_PUSH_ServiceStatus(struct zx_shps_GetStatusResponseItem_s* x, struct zx_elem_s* y);


void zx_shps_GetStatusResponseItem_PUT_ServiceHandle(struct zx_shps_GetStatusResponseItem_s* x, int n, struct zx_elem_s* y);
void zx_shps_GetStatusResponseItem_PUT_ServiceStatus(struct zx_shps_GetStatusResponseItem_s* x, int n, struct zx_elem_s* y);

void zx_shps_GetStatusResponseItem_ADD_ServiceHandle(struct zx_shps_GetStatusResponseItem_s* x, int n, struct zx_elem_s* z);
void zx_shps_GetStatusResponseItem_ADD_ServiceStatus(struct zx_shps_GetStatusResponseItem_s* x, int n, struct zx_elem_s* z);

void zx_shps_GetStatusResponseItem_DEL_ServiceHandle(struct zx_shps_GetStatusResponseItem_s* x, int n);
void zx_shps_GetStatusResponseItem_DEL_ServiceStatus(struct zx_shps_GetStatusResponseItem_s* x, int n);

void zx_shps_GetStatusResponseItem_REV_ServiceHandle(struct zx_shps_GetStatusResponseItem_s* x);
void zx_shps_GetStatusResponseItem_REV_ServiceStatus(struct zx_shps_GetStatusResponseItem_s* x);

#endif
/* -------------------------- shps_InvocationContext -------------------------- */
/* refby( zx_shps_ProxyInvokeItem_s ) */
#ifndef zx_shps_InvocationContext_EXT
#define zx_shps_InvocationContext_EXT
#endif

struct zx_shps_InvocationContext_s* zx_DEC_shps_InvocationContext(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_InvocationContext_s* zx_NEW_shps_InvocationContext(struct zx_ctx* c);
void zx_FREE_shps_InvocationContext(struct zx_ctx* c, struct zx_shps_InvocationContext_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_InvocationContext_s* zx_DEEP_CLONE_shps_InvocationContext(struct zx_ctx* c, struct zx_shps_InvocationContext_s* x, int dup_strs);
void zx_DUP_STRS_shps_InvocationContext(struct zx_ctx* c, struct zx_shps_InvocationContext_s* x);
int zx_WALK_SO_shps_InvocationContext(struct zx_ctx* c, struct zx_shps_InvocationContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_InvocationContext(struct zx_ctx* c, struct zx_shps_InvocationContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_InvocationContext(struct zx_ctx* c, struct zx_shps_InvocationContext_s* x);
int zx_LEN_WO_shps_InvocationContext(struct zx_ctx* c, struct zx_shps_InvocationContext_s* x);
char* zx_ENC_SO_shps_InvocationContext(struct zx_ctx* c, struct zx_shps_InvocationContext_s* x, char* p);
char* zx_ENC_WO_shps_InvocationContext(struct zx_ctx* c, struct zx_shps_InvocationContext_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_InvocationContext(struct zx_ctx* c, struct zx_shps_InvocationContext_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_InvocationContext(struct zx_ctx* c, struct zx_shps_InvocationContext_s* x);

struct zx_shps_InvocationContext_s {
  ZX_ELEM_EXT
  zx_shps_InvocationContext_EXT
  struct zx_elem_s* InvokingProvider;	/* {1,1} xs:string */
  struct zx_elem_s* InvokingPrincipal;	/* {0,1} saml2:NameIDType */
  struct zx_elem_s* SecurityMechID;	/* {1,1} xs:anyURI */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_shps_InvocationContext_GET_InvokingProvider(struct zx_shps_InvocationContext_s* x, int n);
struct zx_elem_s* zx_shps_InvocationContext_GET_InvokingPrincipal(struct zx_shps_InvocationContext_s* x, int n);
struct zx_elem_s* zx_shps_InvocationContext_GET_SecurityMechID(struct zx_shps_InvocationContext_s* x, int n);

int zx_shps_InvocationContext_NUM_InvokingProvider(struct zx_shps_InvocationContext_s* x);
int zx_shps_InvocationContext_NUM_InvokingPrincipal(struct zx_shps_InvocationContext_s* x);
int zx_shps_InvocationContext_NUM_SecurityMechID(struct zx_shps_InvocationContext_s* x);

struct zx_elem_s* zx_shps_InvocationContext_POP_InvokingProvider(struct zx_shps_InvocationContext_s* x);
struct zx_elem_s* zx_shps_InvocationContext_POP_InvokingPrincipal(struct zx_shps_InvocationContext_s* x);
struct zx_elem_s* zx_shps_InvocationContext_POP_SecurityMechID(struct zx_shps_InvocationContext_s* x);

void zx_shps_InvocationContext_PUSH_InvokingProvider(struct zx_shps_InvocationContext_s* x, struct zx_elem_s* y);
void zx_shps_InvocationContext_PUSH_InvokingPrincipal(struct zx_shps_InvocationContext_s* x, struct zx_elem_s* y);
void zx_shps_InvocationContext_PUSH_SecurityMechID(struct zx_shps_InvocationContext_s* x, struct zx_elem_s* y);


void zx_shps_InvocationContext_PUT_InvokingProvider(struct zx_shps_InvocationContext_s* x, int n, struct zx_elem_s* y);
void zx_shps_InvocationContext_PUT_InvokingPrincipal(struct zx_shps_InvocationContext_s* x, int n, struct zx_elem_s* y);
void zx_shps_InvocationContext_PUT_SecurityMechID(struct zx_shps_InvocationContext_s* x, int n, struct zx_elem_s* y);

void zx_shps_InvocationContext_ADD_InvokingProvider(struct zx_shps_InvocationContext_s* x, int n, struct zx_elem_s* z);
void zx_shps_InvocationContext_ADD_InvokingPrincipal(struct zx_shps_InvocationContext_s* x, int n, struct zx_elem_s* z);
void zx_shps_InvocationContext_ADD_SecurityMechID(struct zx_shps_InvocationContext_s* x, int n, struct zx_elem_s* z);

void zx_shps_InvocationContext_DEL_InvokingProvider(struct zx_shps_InvocationContext_s* x, int n);
void zx_shps_InvocationContext_DEL_InvokingPrincipal(struct zx_shps_InvocationContext_s* x, int n);
void zx_shps_InvocationContext_DEL_SecurityMechID(struct zx_shps_InvocationContext_s* x, int n);

void zx_shps_InvocationContext_REV_InvokingProvider(struct zx_shps_InvocationContext_s* x);
void zx_shps_InvocationContext_REV_InvokingPrincipal(struct zx_shps_InvocationContext_s* x);
void zx_shps_InvocationContext_REV_SecurityMechID(struct zx_shps_InvocationContext_s* x);

#endif
/* -------------------------- shps_InvokeItem -------------------------- */
/* refby( ) */
#ifndef zx_shps_InvokeItem_EXT
#define zx_shps_InvokeItem_EXT
#endif

struct zx_shps_InvokeItem_s* zx_DEC_shps_InvokeItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_InvokeItem_s* zx_NEW_shps_InvokeItem(struct zx_ctx* c);
void zx_FREE_shps_InvokeItem(struct zx_ctx* c, struct zx_shps_InvokeItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_InvokeItem_s* zx_DEEP_CLONE_shps_InvokeItem(struct zx_ctx* c, struct zx_shps_InvokeItem_s* x, int dup_strs);
void zx_DUP_STRS_shps_InvokeItem(struct zx_ctx* c, struct zx_shps_InvokeItem_s* x);
int zx_WALK_SO_shps_InvokeItem(struct zx_ctx* c, struct zx_shps_InvokeItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_InvokeItem(struct zx_ctx* c, struct zx_shps_InvokeItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_InvokeItem(struct zx_ctx* c, struct zx_shps_InvokeItem_s* x);
int zx_LEN_WO_shps_InvokeItem(struct zx_ctx* c, struct zx_shps_InvokeItem_s* x);
char* zx_ENC_SO_shps_InvokeItem(struct zx_ctx* c, struct zx_shps_InvokeItem_s* x, char* p);
char* zx_ENC_WO_shps_InvokeItem(struct zx_ctx* c, struct zx_shps_InvokeItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_InvokeItem(struct zx_ctx* c, struct zx_shps_InvokeItem_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_InvokeItem(struct zx_ctx* c, struct zx_shps_InvokeItem_s* x);

struct zx_shps_InvokeItem_s {
  ZX_ELEM_EXT
  zx_shps_InvokeItem_EXT
  struct zx_elem_s* ServiceHandle;	/* {1,1} xs:anyURI */
  struct zx_str* itemID;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_shps_InvokeItem_GET_itemID(struct zx_shps_InvokeItem_s* x);

struct zx_elem_s* zx_shps_InvokeItem_GET_ServiceHandle(struct zx_shps_InvokeItem_s* x, int n);

int zx_shps_InvokeItem_NUM_ServiceHandle(struct zx_shps_InvokeItem_s* x);

struct zx_elem_s* zx_shps_InvokeItem_POP_ServiceHandle(struct zx_shps_InvokeItem_s* x);

void zx_shps_InvokeItem_PUSH_ServiceHandle(struct zx_shps_InvokeItem_s* x, struct zx_elem_s* y);

void zx_shps_InvokeItem_PUT_itemID(struct zx_shps_InvokeItem_s* x, struct zx_str* y);

void zx_shps_InvokeItem_PUT_ServiceHandle(struct zx_shps_InvokeItem_s* x, int n, struct zx_elem_s* y);

void zx_shps_InvokeItem_ADD_ServiceHandle(struct zx_shps_InvokeItem_s* x, int n, struct zx_elem_s* z);

void zx_shps_InvokeItem_DEL_ServiceHandle(struct zx_shps_InvokeItem_s* x, int n);

void zx_shps_InvokeItem_REV_ServiceHandle(struct zx_shps_InvokeItem_s* x);

#endif
/* -------------------------- shps_InvokeResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_shps_InvokeResponse_EXT
#define zx_shps_InvokeResponse_EXT
#endif

struct zx_shps_InvokeResponse_s* zx_DEC_shps_InvokeResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_InvokeResponse_s* zx_NEW_shps_InvokeResponse(struct zx_ctx* c);
void zx_FREE_shps_InvokeResponse(struct zx_ctx* c, struct zx_shps_InvokeResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_InvokeResponse_s* zx_DEEP_CLONE_shps_InvokeResponse(struct zx_ctx* c, struct zx_shps_InvokeResponse_s* x, int dup_strs);
void zx_DUP_STRS_shps_InvokeResponse(struct zx_ctx* c, struct zx_shps_InvokeResponse_s* x);
int zx_WALK_SO_shps_InvokeResponse(struct zx_ctx* c, struct zx_shps_InvokeResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_InvokeResponse(struct zx_ctx* c, struct zx_shps_InvokeResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_InvokeResponse(struct zx_ctx* c, struct zx_shps_InvokeResponse_s* x);
int zx_LEN_WO_shps_InvokeResponse(struct zx_ctx* c, struct zx_shps_InvokeResponse_s* x);
char* zx_ENC_SO_shps_InvokeResponse(struct zx_ctx* c, struct zx_shps_InvokeResponse_s* x, char* p);
char* zx_ENC_WO_shps_InvokeResponse(struct zx_ctx* c, struct zx_shps_InvokeResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_InvokeResponse(struct zx_ctx* c, struct zx_shps_InvokeResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_InvokeResponse(struct zx_ctx* c, struct zx_shps_InvokeResponse_s* x);

struct zx_shps_InvokeResponse_s {
  ZX_ELEM_EXT
  zx_shps_InvokeResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
  struct zx_shps_InvokeResponseItem_s* InvokeResponseItem;	/* {1,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_shps_InvokeResponse_GET_Status(struct zx_shps_InvokeResponse_s* x, int n);
struct zx_shps_InvokeResponseItem_s* zx_shps_InvokeResponse_GET_InvokeResponseItem(struct zx_shps_InvokeResponse_s* x, int n);

int zx_shps_InvokeResponse_NUM_Status(struct zx_shps_InvokeResponse_s* x);
int zx_shps_InvokeResponse_NUM_InvokeResponseItem(struct zx_shps_InvokeResponse_s* x);

struct zx_lu_Status_s* zx_shps_InvokeResponse_POP_Status(struct zx_shps_InvokeResponse_s* x);
struct zx_shps_InvokeResponseItem_s* zx_shps_InvokeResponse_POP_InvokeResponseItem(struct zx_shps_InvokeResponse_s* x);

void zx_shps_InvokeResponse_PUSH_Status(struct zx_shps_InvokeResponse_s* x, struct zx_lu_Status_s* y);
void zx_shps_InvokeResponse_PUSH_InvokeResponseItem(struct zx_shps_InvokeResponse_s* x, struct zx_shps_InvokeResponseItem_s* y);


void zx_shps_InvokeResponse_PUT_Status(struct zx_shps_InvokeResponse_s* x, int n, struct zx_lu_Status_s* y);
void zx_shps_InvokeResponse_PUT_InvokeResponseItem(struct zx_shps_InvokeResponse_s* x, int n, struct zx_shps_InvokeResponseItem_s* y);

void zx_shps_InvokeResponse_ADD_Status(struct zx_shps_InvokeResponse_s* x, int n, struct zx_lu_Status_s* z);
void zx_shps_InvokeResponse_ADD_InvokeResponseItem(struct zx_shps_InvokeResponse_s* x, int n, struct zx_shps_InvokeResponseItem_s* z);

void zx_shps_InvokeResponse_DEL_Status(struct zx_shps_InvokeResponse_s* x, int n);
void zx_shps_InvokeResponse_DEL_InvokeResponseItem(struct zx_shps_InvokeResponse_s* x, int n);

void zx_shps_InvokeResponse_REV_Status(struct zx_shps_InvokeResponse_s* x);
void zx_shps_InvokeResponse_REV_InvokeResponseItem(struct zx_shps_InvokeResponse_s* x);

#endif
/* -------------------------- shps_InvokeResponseItem -------------------------- */
/* refby( zx_shps_InvokeResponse_s ) */
#ifndef zx_shps_InvokeResponseItem_EXT
#define zx_shps_InvokeResponseItem_EXT
#endif

struct zx_shps_InvokeResponseItem_s* zx_DEC_shps_InvokeResponseItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_InvokeResponseItem_s* zx_NEW_shps_InvokeResponseItem(struct zx_ctx* c);
void zx_FREE_shps_InvokeResponseItem(struct zx_ctx* c, struct zx_shps_InvokeResponseItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_InvokeResponseItem_s* zx_DEEP_CLONE_shps_InvokeResponseItem(struct zx_ctx* c, struct zx_shps_InvokeResponseItem_s* x, int dup_strs);
void zx_DUP_STRS_shps_InvokeResponseItem(struct zx_ctx* c, struct zx_shps_InvokeResponseItem_s* x);
int zx_WALK_SO_shps_InvokeResponseItem(struct zx_ctx* c, struct zx_shps_InvokeResponseItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_InvokeResponseItem(struct zx_ctx* c, struct zx_shps_InvokeResponseItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_InvokeResponseItem(struct zx_ctx* c, struct zx_shps_InvokeResponseItem_s* x);
int zx_LEN_WO_shps_InvokeResponseItem(struct zx_ctx* c, struct zx_shps_InvokeResponseItem_s* x);
char* zx_ENC_SO_shps_InvokeResponseItem(struct zx_ctx* c, struct zx_shps_InvokeResponseItem_s* x, char* p);
char* zx_ENC_WO_shps_InvokeResponseItem(struct zx_ctx* c, struct zx_shps_InvokeResponseItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_InvokeResponseItem(struct zx_ctx* c, struct zx_shps_InvokeResponseItem_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_InvokeResponseItem(struct zx_ctx* c, struct zx_shps_InvokeResponseItem_s* x);

struct zx_shps_InvokeResponseItem_s {
  ZX_ELEM_EXT
  zx_shps_InvokeResponseItem_EXT
  struct zx_str* ref;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_shps_InvokeResponseItem_GET_ref(struct zx_shps_InvokeResponseItem_s* x);





void zx_shps_InvokeResponseItem_PUT_ref(struct zx_shps_InvokeResponseItem_s* x, struct zx_str* y);





#endif
/* -------------------------- shps_Poll -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_shps_Poll_EXT
#define zx_shps_Poll_EXT
#endif

struct zx_shps_Poll_s* zx_DEC_shps_Poll(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_Poll_s* zx_NEW_shps_Poll(struct zx_ctx* c);
void zx_FREE_shps_Poll(struct zx_ctx* c, struct zx_shps_Poll_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_Poll_s* zx_DEEP_CLONE_shps_Poll(struct zx_ctx* c, struct zx_shps_Poll_s* x, int dup_strs);
void zx_DUP_STRS_shps_Poll(struct zx_ctx* c, struct zx_shps_Poll_s* x);
int zx_WALK_SO_shps_Poll(struct zx_ctx* c, struct zx_shps_Poll_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_Poll(struct zx_ctx* c, struct zx_shps_Poll_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_Poll(struct zx_ctx* c, struct zx_shps_Poll_s* x);
int zx_LEN_WO_shps_Poll(struct zx_ctx* c, struct zx_shps_Poll_s* x);
char* zx_ENC_SO_shps_Poll(struct zx_ctx* c, struct zx_shps_Poll_s* x, char* p);
char* zx_ENC_WO_shps_Poll(struct zx_ctx* c, struct zx_shps_Poll_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_Poll(struct zx_ctx* c, struct zx_shps_Poll_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_Poll(struct zx_ctx* c, struct zx_shps_Poll_s* x);

struct zx_shps_Poll_s {
  ZX_ELEM_EXT
  zx_shps_Poll_EXT
  struct zx_a_Action_s* Action;	/* {0,-1} nada */
  struct zx_dp_Response_s* Response;	/* {0,-1} nada */
  struct zx_str* wait;	/* {1,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_shps_Poll_GET_wait(struct zx_shps_Poll_s* x);

struct zx_a_Action_s* zx_shps_Poll_GET_Action(struct zx_shps_Poll_s* x, int n);
struct zx_dp_Response_s* zx_shps_Poll_GET_Response(struct zx_shps_Poll_s* x, int n);

int zx_shps_Poll_NUM_Action(struct zx_shps_Poll_s* x);
int zx_shps_Poll_NUM_Response(struct zx_shps_Poll_s* x);

struct zx_a_Action_s* zx_shps_Poll_POP_Action(struct zx_shps_Poll_s* x);
struct zx_dp_Response_s* zx_shps_Poll_POP_Response(struct zx_shps_Poll_s* x);

void zx_shps_Poll_PUSH_Action(struct zx_shps_Poll_s* x, struct zx_a_Action_s* y);
void zx_shps_Poll_PUSH_Response(struct zx_shps_Poll_s* x, struct zx_dp_Response_s* y);

void zx_shps_Poll_PUT_wait(struct zx_shps_Poll_s* x, struct zx_str* y);

void zx_shps_Poll_PUT_Action(struct zx_shps_Poll_s* x, int n, struct zx_a_Action_s* y);
void zx_shps_Poll_PUT_Response(struct zx_shps_Poll_s* x, int n, struct zx_dp_Response_s* y);

void zx_shps_Poll_ADD_Action(struct zx_shps_Poll_s* x, int n, struct zx_a_Action_s* z);
void zx_shps_Poll_ADD_Response(struct zx_shps_Poll_s* x, int n, struct zx_dp_Response_s* z);

void zx_shps_Poll_DEL_Action(struct zx_shps_Poll_s* x, int n);
void zx_shps_Poll_DEL_Response(struct zx_shps_Poll_s* x, int n);

void zx_shps_Poll_REV_Action(struct zx_shps_Poll_s* x);
void zx_shps_Poll_REV_Response(struct zx_shps_Poll_s* x);

#endif
/* -------------------------- shps_PollResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_shps_PollResponse_EXT
#define zx_shps_PollResponse_EXT
#endif

struct zx_shps_PollResponse_s* zx_DEC_shps_PollResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_PollResponse_s* zx_NEW_shps_PollResponse(struct zx_ctx* c);
void zx_FREE_shps_PollResponse(struct zx_ctx* c, struct zx_shps_PollResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_PollResponse_s* zx_DEEP_CLONE_shps_PollResponse(struct zx_ctx* c, struct zx_shps_PollResponse_s* x, int dup_strs);
void zx_DUP_STRS_shps_PollResponse(struct zx_ctx* c, struct zx_shps_PollResponse_s* x);
int zx_WALK_SO_shps_PollResponse(struct zx_ctx* c, struct zx_shps_PollResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_PollResponse(struct zx_ctx* c, struct zx_shps_PollResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_PollResponse(struct zx_ctx* c, struct zx_shps_PollResponse_s* x);
int zx_LEN_WO_shps_PollResponse(struct zx_ctx* c, struct zx_shps_PollResponse_s* x);
char* zx_ENC_SO_shps_PollResponse(struct zx_ctx* c, struct zx_shps_PollResponse_s* x, char* p);
char* zx_ENC_WO_shps_PollResponse(struct zx_ctx* c, struct zx_shps_PollResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_PollResponse(struct zx_ctx* c, struct zx_shps_PollResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_PollResponse(struct zx_ctx* c, struct zx_shps_PollResponse_s* x);

struct zx_shps_PollResponse_s {
  ZX_ELEM_EXT
  zx_shps_PollResponse_EXT
  struct zx_dp_Request_s* Request;	/* {0,-1} nada */
  struct zx_str* nextPoll;	/* {0,1} attribute xs:integer */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_shps_PollResponse_GET_nextPoll(struct zx_shps_PollResponse_s* x);

struct zx_dp_Request_s* zx_shps_PollResponse_GET_Request(struct zx_shps_PollResponse_s* x, int n);

int zx_shps_PollResponse_NUM_Request(struct zx_shps_PollResponse_s* x);

struct zx_dp_Request_s* zx_shps_PollResponse_POP_Request(struct zx_shps_PollResponse_s* x);

void zx_shps_PollResponse_PUSH_Request(struct zx_shps_PollResponse_s* x, struct zx_dp_Request_s* y);

void zx_shps_PollResponse_PUT_nextPoll(struct zx_shps_PollResponse_s* x, struct zx_str* y);

void zx_shps_PollResponse_PUT_Request(struct zx_shps_PollResponse_s* x, int n, struct zx_dp_Request_s* y);

void zx_shps_PollResponse_ADD_Request(struct zx_shps_PollResponse_s* x, int n, struct zx_dp_Request_s* z);

void zx_shps_PollResponse_DEL_Request(struct zx_shps_PollResponse_s* x, int n);

void zx_shps_PollResponse_REV_Request(struct zx_shps_PollResponse_s* x);

#endif
/* -------------------------- shps_ProxyInvoke -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_shps_ProxyInvoke_EXT
#define zx_shps_ProxyInvoke_EXT
#endif

struct zx_shps_ProxyInvoke_s* zx_DEC_shps_ProxyInvoke(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_ProxyInvoke_s* zx_NEW_shps_ProxyInvoke(struct zx_ctx* c);
void zx_FREE_shps_ProxyInvoke(struct zx_ctx* c, struct zx_shps_ProxyInvoke_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_ProxyInvoke_s* zx_DEEP_CLONE_shps_ProxyInvoke(struct zx_ctx* c, struct zx_shps_ProxyInvoke_s* x, int dup_strs);
void zx_DUP_STRS_shps_ProxyInvoke(struct zx_ctx* c, struct zx_shps_ProxyInvoke_s* x);
int zx_WALK_SO_shps_ProxyInvoke(struct zx_ctx* c, struct zx_shps_ProxyInvoke_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_ProxyInvoke(struct zx_ctx* c, struct zx_shps_ProxyInvoke_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_ProxyInvoke(struct zx_ctx* c, struct zx_shps_ProxyInvoke_s* x);
int zx_LEN_WO_shps_ProxyInvoke(struct zx_ctx* c, struct zx_shps_ProxyInvoke_s* x);
char* zx_ENC_SO_shps_ProxyInvoke(struct zx_ctx* c, struct zx_shps_ProxyInvoke_s* x, char* p);
char* zx_ENC_WO_shps_ProxyInvoke(struct zx_ctx* c, struct zx_shps_ProxyInvoke_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_ProxyInvoke(struct zx_ctx* c, struct zx_shps_ProxyInvoke_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_ProxyInvoke(struct zx_ctx* c, struct zx_shps_ProxyInvoke_s* x);

struct zx_shps_ProxyInvoke_s {
  ZX_ELEM_EXT
  zx_shps_ProxyInvoke_EXT
  struct zx_shps_ProxyInvokeItem_s* ProxyInvokeItem;	/* {1,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_shps_ProxyInvokeItem_s* zx_shps_ProxyInvoke_GET_ProxyInvokeItem(struct zx_shps_ProxyInvoke_s* x, int n);

int zx_shps_ProxyInvoke_NUM_ProxyInvokeItem(struct zx_shps_ProxyInvoke_s* x);

struct zx_shps_ProxyInvokeItem_s* zx_shps_ProxyInvoke_POP_ProxyInvokeItem(struct zx_shps_ProxyInvoke_s* x);

void zx_shps_ProxyInvoke_PUSH_ProxyInvokeItem(struct zx_shps_ProxyInvoke_s* x, struct zx_shps_ProxyInvokeItem_s* y);


void zx_shps_ProxyInvoke_PUT_ProxyInvokeItem(struct zx_shps_ProxyInvoke_s* x, int n, struct zx_shps_ProxyInvokeItem_s* y);

void zx_shps_ProxyInvoke_ADD_ProxyInvokeItem(struct zx_shps_ProxyInvoke_s* x, int n, struct zx_shps_ProxyInvokeItem_s* z);

void zx_shps_ProxyInvoke_DEL_ProxyInvokeItem(struct zx_shps_ProxyInvoke_s* x, int n);

void zx_shps_ProxyInvoke_REV_ProxyInvokeItem(struct zx_shps_ProxyInvoke_s* x);

#endif
/* -------------------------- shps_ProxyInvokeItem -------------------------- */
/* refby( zx_shps_ProxyInvoke_s ) */
#ifndef zx_shps_ProxyInvokeItem_EXT
#define zx_shps_ProxyInvokeItem_EXT
#endif

struct zx_shps_ProxyInvokeItem_s* zx_DEC_shps_ProxyInvokeItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_ProxyInvokeItem_s* zx_NEW_shps_ProxyInvokeItem(struct zx_ctx* c);
void zx_FREE_shps_ProxyInvokeItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_ProxyInvokeItem_s* zx_DEEP_CLONE_shps_ProxyInvokeItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeItem_s* x, int dup_strs);
void zx_DUP_STRS_shps_ProxyInvokeItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeItem_s* x);
int zx_WALK_SO_shps_ProxyInvokeItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_ProxyInvokeItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_ProxyInvokeItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeItem_s* x);
int zx_LEN_WO_shps_ProxyInvokeItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeItem_s* x);
char* zx_ENC_SO_shps_ProxyInvokeItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeItem_s* x, char* p);
char* zx_ENC_WO_shps_ProxyInvokeItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_ProxyInvokeItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeItem_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_ProxyInvokeItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeItem_s* x);

struct zx_shps_ProxyInvokeItem_s {
  ZX_ELEM_EXT
  zx_shps_ProxyInvokeItem_EXT
  struct zx_elem_s* ServiceHandle;	/* {1,1} xs:anyURI */
  struct zx_shps_InvocationContext_s* InvocationContext;	/* {1,1} nada */
  struct zx_elem_s* RequestHeaders;	/* {0,1} xs:any */
  struct zx_str* itemID;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_shps_ProxyInvokeItem_GET_itemID(struct zx_shps_ProxyInvokeItem_s* x);

struct zx_elem_s* zx_shps_ProxyInvokeItem_GET_ServiceHandle(struct zx_shps_ProxyInvokeItem_s* x, int n);
struct zx_shps_InvocationContext_s* zx_shps_ProxyInvokeItem_GET_InvocationContext(struct zx_shps_ProxyInvokeItem_s* x, int n);
struct zx_elem_s* zx_shps_ProxyInvokeItem_GET_RequestHeaders(struct zx_shps_ProxyInvokeItem_s* x, int n);

int zx_shps_ProxyInvokeItem_NUM_ServiceHandle(struct zx_shps_ProxyInvokeItem_s* x);
int zx_shps_ProxyInvokeItem_NUM_InvocationContext(struct zx_shps_ProxyInvokeItem_s* x);
int zx_shps_ProxyInvokeItem_NUM_RequestHeaders(struct zx_shps_ProxyInvokeItem_s* x);

struct zx_elem_s* zx_shps_ProxyInvokeItem_POP_ServiceHandle(struct zx_shps_ProxyInvokeItem_s* x);
struct zx_shps_InvocationContext_s* zx_shps_ProxyInvokeItem_POP_InvocationContext(struct zx_shps_ProxyInvokeItem_s* x);
struct zx_elem_s* zx_shps_ProxyInvokeItem_POP_RequestHeaders(struct zx_shps_ProxyInvokeItem_s* x);

void zx_shps_ProxyInvokeItem_PUSH_ServiceHandle(struct zx_shps_ProxyInvokeItem_s* x, struct zx_elem_s* y);
void zx_shps_ProxyInvokeItem_PUSH_InvocationContext(struct zx_shps_ProxyInvokeItem_s* x, struct zx_shps_InvocationContext_s* y);
void zx_shps_ProxyInvokeItem_PUSH_RequestHeaders(struct zx_shps_ProxyInvokeItem_s* x, struct zx_elem_s* y);

void zx_shps_ProxyInvokeItem_PUT_itemID(struct zx_shps_ProxyInvokeItem_s* x, struct zx_str* y);

void zx_shps_ProxyInvokeItem_PUT_ServiceHandle(struct zx_shps_ProxyInvokeItem_s* x, int n, struct zx_elem_s* y);
void zx_shps_ProxyInvokeItem_PUT_InvocationContext(struct zx_shps_ProxyInvokeItem_s* x, int n, struct zx_shps_InvocationContext_s* y);
void zx_shps_ProxyInvokeItem_PUT_RequestHeaders(struct zx_shps_ProxyInvokeItem_s* x, int n, struct zx_elem_s* y);

void zx_shps_ProxyInvokeItem_ADD_ServiceHandle(struct zx_shps_ProxyInvokeItem_s* x, int n, struct zx_elem_s* z);
void zx_shps_ProxyInvokeItem_ADD_InvocationContext(struct zx_shps_ProxyInvokeItem_s* x, int n, struct zx_shps_InvocationContext_s* z);
void zx_shps_ProxyInvokeItem_ADD_RequestHeaders(struct zx_shps_ProxyInvokeItem_s* x, int n, struct zx_elem_s* z);

void zx_shps_ProxyInvokeItem_DEL_ServiceHandle(struct zx_shps_ProxyInvokeItem_s* x, int n);
void zx_shps_ProxyInvokeItem_DEL_InvocationContext(struct zx_shps_ProxyInvokeItem_s* x, int n);
void zx_shps_ProxyInvokeItem_DEL_RequestHeaders(struct zx_shps_ProxyInvokeItem_s* x, int n);

void zx_shps_ProxyInvokeItem_REV_ServiceHandle(struct zx_shps_ProxyInvokeItem_s* x);
void zx_shps_ProxyInvokeItem_REV_InvocationContext(struct zx_shps_ProxyInvokeItem_s* x);
void zx_shps_ProxyInvokeItem_REV_RequestHeaders(struct zx_shps_ProxyInvokeItem_s* x);

#endif
/* -------------------------- shps_ProxyInvokeResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_shps_ProxyInvokeResponse_EXT
#define zx_shps_ProxyInvokeResponse_EXT
#endif

struct zx_shps_ProxyInvokeResponse_s* zx_DEC_shps_ProxyInvokeResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_ProxyInvokeResponse_s* zx_NEW_shps_ProxyInvokeResponse(struct zx_ctx* c);
void zx_FREE_shps_ProxyInvokeResponse(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_ProxyInvokeResponse_s* zx_DEEP_CLONE_shps_ProxyInvokeResponse(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponse_s* x, int dup_strs);
void zx_DUP_STRS_shps_ProxyInvokeResponse(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponse_s* x);
int zx_WALK_SO_shps_ProxyInvokeResponse(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_ProxyInvokeResponse(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_ProxyInvokeResponse(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponse_s* x);
int zx_LEN_WO_shps_ProxyInvokeResponse(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponse_s* x);
char* zx_ENC_SO_shps_ProxyInvokeResponse(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponse_s* x, char* p);
char* zx_ENC_WO_shps_ProxyInvokeResponse(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_ProxyInvokeResponse(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_ProxyInvokeResponse(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponse_s* x);

struct zx_shps_ProxyInvokeResponse_s {
  ZX_ELEM_EXT
  zx_shps_ProxyInvokeResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
  struct zx_shps_ProxyInvokeResponseItem_s* ProxyInvokeResponseItem;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_shps_ProxyInvokeResponse_GET_Status(struct zx_shps_ProxyInvokeResponse_s* x, int n);
struct zx_shps_ProxyInvokeResponseItem_s* zx_shps_ProxyInvokeResponse_GET_ProxyInvokeResponseItem(struct zx_shps_ProxyInvokeResponse_s* x, int n);

int zx_shps_ProxyInvokeResponse_NUM_Status(struct zx_shps_ProxyInvokeResponse_s* x);
int zx_shps_ProxyInvokeResponse_NUM_ProxyInvokeResponseItem(struct zx_shps_ProxyInvokeResponse_s* x);

struct zx_lu_Status_s* zx_shps_ProxyInvokeResponse_POP_Status(struct zx_shps_ProxyInvokeResponse_s* x);
struct zx_shps_ProxyInvokeResponseItem_s* zx_shps_ProxyInvokeResponse_POP_ProxyInvokeResponseItem(struct zx_shps_ProxyInvokeResponse_s* x);

void zx_shps_ProxyInvokeResponse_PUSH_Status(struct zx_shps_ProxyInvokeResponse_s* x, struct zx_lu_Status_s* y);
void zx_shps_ProxyInvokeResponse_PUSH_ProxyInvokeResponseItem(struct zx_shps_ProxyInvokeResponse_s* x, struct zx_shps_ProxyInvokeResponseItem_s* y);


void zx_shps_ProxyInvokeResponse_PUT_Status(struct zx_shps_ProxyInvokeResponse_s* x, int n, struct zx_lu_Status_s* y);
void zx_shps_ProxyInvokeResponse_PUT_ProxyInvokeResponseItem(struct zx_shps_ProxyInvokeResponse_s* x, int n, struct zx_shps_ProxyInvokeResponseItem_s* y);

void zx_shps_ProxyInvokeResponse_ADD_Status(struct zx_shps_ProxyInvokeResponse_s* x, int n, struct zx_lu_Status_s* z);
void zx_shps_ProxyInvokeResponse_ADD_ProxyInvokeResponseItem(struct zx_shps_ProxyInvokeResponse_s* x, int n, struct zx_shps_ProxyInvokeResponseItem_s* z);

void zx_shps_ProxyInvokeResponse_DEL_Status(struct zx_shps_ProxyInvokeResponse_s* x, int n);
void zx_shps_ProxyInvokeResponse_DEL_ProxyInvokeResponseItem(struct zx_shps_ProxyInvokeResponse_s* x, int n);

void zx_shps_ProxyInvokeResponse_REV_Status(struct zx_shps_ProxyInvokeResponse_s* x);
void zx_shps_ProxyInvokeResponse_REV_ProxyInvokeResponseItem(struct zx_shps_ProxyInvokeResponse_s* x);

#endif
/* -------------------------- shps_ProxyInvokeResponseItem -------------------------- */
/* refby( zx_shps_ProxyInvokeResponse_s ) */
#ifndef zx_shps_ProxyInvokeResponseItem_EXT
#define zx_shps_ProxyInvokeResponseItem_EXT
#endif

struct zx_shps_ProxyInvokeResponseItem_s* zx_DEC_shps_ProxyInvokeResponseItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_ProxyInvokeResponseItem_s* zx_NEW_shps_ProxyInvokeResponseItem(struct zx_ctx* c);
void zx_FREE_shps_ProxyInvokeResponseItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponseItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_ProxyInvokeResponseItem_s* zx_DEEP_CLONE_shps_ProxyInvokeResponseItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponseItem_s* x, int dup_strs);
void zx_DUP_STRS_shps_ProxyInvokeResponseItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponseItem_s* x);
int zx_WALK_SO_shps_ProxyInvokeResponseItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponseItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_ProxyInvokeResponseItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponseItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_ProxyInvokeResponseItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponseItem_s* x);
int zx_LEN_WO_shps_ProxyInvokeResponseItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponseItem_s* x);
char* zx_ENC_SO_shps_ProxyInvokeResponseItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponseItem_s* x, char* p);
char* zx_ENC_WO_shps_ProxyInvokeResponseItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponseItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_ProxyInvokeResponseItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponseItem_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_ProxyInvokeResponseItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponseItem_s* x);

struct zx_shps_ProxyInvokeResponseItem_s {
  ZX_ELEM_EXT
  zx_shps_ProxyInvokeResponseItem_EXT
  struct zx_elem_s* ServiceHandle;	/* {1,1} xs:anyURI */
  struct zx_elem_s* ResponseHeaders;	/* {0,1} xs:any */
  struct zx_str* ref;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_shps_ProxyInvokeResponseItem_GET_ref(struct zx_shps_ProxyInvokeResponseItem_s* x);

struct zx_elem_s* zx_shps_ProxyInvokeResponseItem_GET_ServiceHandle(struct zx_shps_ProxyInvokeResponseItem_s* x, int n);
struct zx_elem_s* zx_shps_ProxyInvokeResponseItem_GET_ResponseHeaders(struct zx_shps_ProxyInvokeResponseItem_s* x, int n);

int zx_shps_ProxyInvokeResponseItem_NUM_ServiceHandle(struct zx_shps_ProxyInvokeResponseItem_s* x);
int zx_shps_ProxyInvokeResponseItem_NUM_ResponseHeaders(struct zx_shps_ProxyInvokeResponseItem_s* x);

struct zx_elem_s* zx_shps_ProxyInvokeResponseItem_POP_ServiceHandle(struct zx_shps_ProxyInvokeResponseItem_s* x);
struct zx_elem_s* zx_shps_ProxyInvokeResponseItem_POP_ResponseHeaders(struct zx_shps_ProxyInvokeResponseItem_s* x);

void zx_shps_ProxyInvokeResponseItem_PUSH_ServiceHandle(struct zx_shps_ProxyInvokeResponseItem_s* x, struct zx_elem_s* y);
void zx_shps_ProxyInvokeResponseItem_PUSH_ResponseHeaders(struct zx_shps_ProxyInvokeResponseItem_s* x, struct zx_elem_s* y);

void zx_shps_ProxyInvokeResponseItem_PUT_ref(struct zx_shps_ProxyInvokeResponseItem_s* x, struct zx_str* y);

void zx_shps_ProxyInvokeResponseItem_PUT_ServiceHandle(struct zx_shps_ProxyInvokeResponseItem_s* x, int n, struct zx_elem_s* y);
void zx_shps_ProxyInvokeResponseItem_PUT_ResponseHeaders(struct zx_shps_ProxyInvokeResponseItem_s* x, int n, struct zx_elem_s* y);

void zx_shps_ProxyInvokeResponseItem_ADD_ServiceHandle(struct zx_shps_ProxyInvokeResponseItem_s* x, int n, struct zx_elem_s* z);
void zx_shps_ProxyInvokeResponseItem_ADD_ResponseHeaders(struct zx_shps_ProxyInvokeResponseItem_s* x, int n, struct zx_elem_s* z);

void zx_shps_ProxyInvokeResponseItem_DEL_ServiceHandle(struct zx_shps_ProxyInvokeResponseItem_s* x, int n);
void zx_shps_ProxyInvokeResponseItem_DEL_ResponseHeaders(struct zx_shps_ProxyInvokeResponseItem_s* x, int n);

void zx_shps_ProxyInvokeResponseItem_REV_ServiceHandle(struct zx_shps_ProxyInvokeResponseItem_s* x);
void zx_shps_ProxyInvokeResponseItem_REV_ResponseHeaders(struct zx_shps_ProxyInvokeResponseItem_s* x);

#endif
/* -------------------------- shps_Query -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_shps_Query_EXT
#define zx_shps_Query_EXT
#endif

struct zx_shps_Query_s* zx_DEC_shps_Query(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_Query_s* zx_NEW_shps_Query(struct zx_ctx* c);
void zx_FREE_shps_Query(struct zx_ctx* c, struct zx_shps_Query_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_Query_s* zx_DEEP_CLONE_shps_Query(struct zx_ctx* c, struct zx_shps_Query_s* x, int dup_strs);
void zx_DUP_STRS_shps_Query(struct zx_ctx* c, struct zx_shps_Query_s* x);
int zx_WALK_SO_shps_Query(struct zx_ctx* c, struct zx_shps_Query_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_Query(struct zx_ctx* c, struct zx_shps_Query_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_Query(struct zx_ctx* c, struct zx_shps_Query_s* x);
int zx_LEN_WO_shps_Query(struct zx_ctx* c, struct zx_shps_Query_s* x);
char* zx_ENC_SO_shps_Query(struct zx_ctx* c, struct zx_shps_Query_s* x, char* p);
char* zx_ENC_WO_shps_Query(struct zx_ctx* c, struct zx_shps_Query_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_Query(struct zx_ctx* c, struct zx_shps_Query_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_Query(struct zx_ctx* c, struct zx_shps_Query_s* x);

struct zx_shps_Query_s {
  ZX_ELEM_EXT
  zx_shps_Query_EXT
  struct zx_di_RequestedService_s* RequestedService;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_di_RequestedService_s* zx_shps_Query_GET_RequestedService(struct zx_shps_Query_s* x, int n);

int zx_shps_Query_NUM_RequestedService(struct zx_shps_Query_s* x);

struct zx_di_RequestedService_s* zx_shps_Query_POP_RequestedService(struct zx_shps_Query_s* x);

void zx_shps_Query_PUSH_RequestedService(struct zx_shps_Query_s* x, struct zx_di_RequestedService_s* y);


void zx_shps_Query_PUT_RequestedService(struct zx_shps_Query_s* x, int n, struct zx_di_RequestedService_s* y);

void zx_shps_Query_ADD_RequestedService(struct zx_shps_Query_s* x, int n, struct zx_di_RequestedService_s* z);

void zx_shps_Query_DEL_RequestedService(struct zx_shps_Query_s* x, int n);

void zx_shps_Query_REV_RequestedService(struct zx_shps_Query_s* x);

#endif
/* -------------------------- shps_QueryRegistered -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_shps_QueryRegistered_EXT
#define zx_shps_QueryRegistered_EXT
#endif

struct zx_shps_QueryRegistered_s* zx_DEC_shps_QueryRegistered(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_QueryRegistered_s* zx_NEW_shps_QueryRegistered(struct zx_ctx* c);
void zx_FREE_shps_QueryRegistered(struct zx_ctx* c, struct zx_shps_QueryRegistered_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_QueryRegistered_s* zx_DEEP_CLONE_shps_QueryRegistered(struct zx_ctx* c, struct zx_shps_QueryRegistered_s* x, int dup_strs);
void zx_DUP_STRS_shps_QueryRegistered(struct zx_ctx* c, struct zx_shps_QueryRegistered_s* x);
int zx_WALK_SO_shps_QueryRegistered(struct zx_ctx* c, struct zx_shps_QueryRegistered_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_QueryRegistered(struct zx_ctx* c, struct zx_shps_QueryRegistered_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_QueryRegistered(struct zx_ctx* c, struct zx_shps_QueryRegistered_s* x);
int zx_LEN_WO_shps_QueryRegistered(struct zx_ctx* c, struct zx_shps_QueryRegistered_s* x);
char* zx_ENC_SO_shps_QueryRegistered(struct zx_ctx* c, struct zx_shps_QueryRegistered_s* x, char* p);
char* zx_ENC_WO_shps_QueryRegistered(struct zx_ctx* c, struct zx_shps_QueryRegistered_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_QueryRegistered(struct zx_ctx* c, struct zx_shps_QueryRegistered_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_QueryRegistered(struct zx_ctx* c, struct zx_shps_QueryRegistered_s* x);

struct zx_shps_QueryRegistered_s {
  ZX_ELEM_EXT
  zx_shps_QueryRegistered_EXT
  struct zx_elem_s* ServiceHandle;	/* {0,-1} xs:anyURI */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_shps_QueryRegistered_GET_ServiceHandle(struct zx_shps_QueryRegistered_s* x, int n);

int zx_shps_QueryRegistered_NUM_ServiceHandle(struct zx_shps_QueryRegistered_s* x);

struct zx_elem_s* zx_shps_QueryRegistered_POP_ServiceHandle(struct zx_shps_QueryRegistered_s* x);

void zx_shps_QueryRegistered_PUSH_ServiceHandle(struct zx_shps_QueryRegistered_s* x, struct zx_elem_s* y);


void zx_shps_QueryRegistered_PUT_ServiceHandle(struct zx_shps_QueryRegistered_s* x, int n, struct zx_elem_s* y);

void zx_shps_QueryRegistered_ADD_ServiceHandle(struct zx_shps_QueryRegistered_s* x, int n, struct zx_elem_s* z);

void zx_shps_QueryRegistered_DEL_ServiceHandle(struct zx_shps_QueryRegistered_s* x, int n);

void zx_shps_QueryRegistered_REV_ServiceHandle(struct zx_shps_QueryRegistered_s* x);

#endif
/* -------------------------- shps_QueryRegisteredResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_shps_QueryRegisteredResponse_EXT
#define zx_shps_QueryRegisteredResponse_EXT
#endif

struct zx_shps_QueryRegisteredResponse_s* zx_DEC_shps_QueryRegisteredResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_QueryRegisteredResponse_s* zx_NEW_shps_QueryRegisteredResponse(struct zx_ctx* c);
void zx_FREE_shps_QueryRegisteredResponse(struct zx_ctx* c, struct zx_shps_QueryRegisteredResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_QueryRegisteredResponse_s* zx_DEEP_CLONE_shps_QueryRegisteredResponse(struct zx_ctx* c, struct zx_shps_QueryRegisteredResponse_s* x, int dup_strs);
void zx_DUP_STRS_shps_QueryRegisteredResponse(struct zx_ctx* c, struct zx_shps_QueryRegisteredResponse_s* x);
int zx_WALK_SO_shps_QueryRegisteredResponse(struct zx_ctx* c, struct zx_shps_QueryRegisteredResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_QueryRegisteredResponse(struct zx_ctx* c, struct zx_shps_QueryRegisteredResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_QueryRegisteredResponse(struct zx_ctx* c, struct zx_shps_QueryRegisteredResponse_s* x);
int zx_LEN_WO_shps_QueryRegisteredResponse(struct zx_ctx* c, struct zx_shps_QueryRegisteredResponse_s* x);
char* zx_ENC_SO_shps_QueryRegisteredResponse(struct zx_ctx* c, struct zx_shps_QueryRegisteredResponse_s* x, char* p);
char* zx_ENC_WO_shps_QueryRegisteredResponse(struct zx_ctx* c, struct zx_shps_QueryRegisteredResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_QueryRegisteredResponse(struct zx_ctx* c, struct zx_shps_QueryRegisteredResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_QueryRegisteredResponse(struct zx_ctx* c, struct zx_shps_QueryRegisteredResponse_s* x);

struct zx_shps_QueryRegisteredResponse_s {
  ZX_ELEM_EXT
  zx_shps_QueryRegisteredResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
  struct zx_a_EndpointReference_s* EndpointReference;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_shps_QueryRegisteredResponse_GET_Status(struct zx_shps_QueryRegisteredResponse_s* x, int n);
struct zx_a_EndpointReference_s* zx_shps_QueryRegisteredResponse_GET_EndpointReference(struct zx_shps_QueryRegisteredResponse_s* x, int n);

int zx_shps_QueryRegisteredResponse_NUM_Status(struct zx_shps_QueryRegisteredResponse_s* x);
int zx_shps_QueryRegisteredResponse_NUM_EndpointReference(struct zx_shps_QueryRegisteredResponse_s* x);

struct zx_lu_Status_s* zx_shps_QueryRegisteredResponse_POP_Status(struct zx_shps_QueryRegisteredResponse_s* x);
struct zx_a_EndpointReference_s* zx_shps_QueryRegisteredResponse_POP_EndpointReference(struct zx_shps_QueryRegisteredResponse_s* x);

void zx_shps_QueryRegisteredResponse_PUSH_Status(struct zx_shps_QueryRegisteredResponse_s* x, struct zx_lu_Status_s* y);
void zx_shps_QueryRegisteredResponse_PUSH_EndpointReference(struct zx_shps_QueryRegisteredResponse_s* x, struct zx_a_EndpointReference_s* y);


void zx_shps_QueryRegisteredResponse_PUT_Status(struct zx_shps_QueryRegisteredResponse_s* x, int n, struct zx_lu_Status_s* y);
void zx_shps_QueryRegisteredResponse_PUT_EndpointReference(struct zx_shps_QueryRegisteredResponse_s* x, int n, struct zx_a_EndpointReference_s* y);

void zx_shps_QueryRegisteredResponse_ADD_Status(struct zx_shps_QueryRegisteredResponse_s* x, int n, struct zx_lu_Status_s* z);
void zx_shps_QueryRegisteredResponse_ADD_EndpointReference(struct zx_shps_QueryRegisteredResponse_s* x, int n, struct zx_a_EndpointReference_s* z);

void zx_shps_QueryRegisteredResponse_DEL_Status(struct zx_shps_QueryRegisteredResponse_s* x, int n);
void zx_shps_QueryRegisteredResponse_DEL_EndpointReference(struct zx_shps_QueryRegisteredResponse_s* x, int n);

void zx_shps_QueryRegisteredResponse_REV_Status(struct zx_shps_QueryRegisteredResponse_s* x);
void zx_shps_QueryRegisteredResponse_REV_EndpointReference(struct zx_shps_QueryRegisteredResponse_s* x);

#endif
/* -------------------------- shps_QueryResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_shps_QueryResponse_EXT
#define zx_shps_QueryResponse_EXT
#endif

struct zx_shps_QueryResponse_s* zx_DEC_shps_QueryResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_QueryResponse_s* zx_NEW_shps_QueryResponse(struct zx_ctx* c);
void zx_FREE_shps_QueryResponse(struct zx_ctx* c, struct zx_shps_QueryResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_QueryResponse_s* zx_DEEP_CLONE_shps_QueryResponse(struct zx_ctx* c, struct zx_shps_QueryResponse_s* x, int dup_strs);
void zx_DUP_STRS_shps_QueryResponse(struct zx_ctx* c, struct zx_shps_QueryResponse_s* x);
int zx_WALK_SO_shps_QueryResponse(struct zx_ctx* c, struct zx_shps_QueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_QueryResponse(struct zx_ctx* c, struct zx_shps_QueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_QueryResponse(struct zx_ctx* c, struct zx_shps_QueryResponse_s* x);
int zx_LEN_WO_shps_QueryResponse(struct zx_ctx* c, struct zx_shps_QueryResponse_s* x);
char* zx_ENC_SO_shps_QueryResponse(struct zx_ctx* c, struct zx_shps_QueryResponse_s* x, char* p);
char* zx_ENC_WO_shps_QueryResponse(struct zx_ctx* c, struct zx_shps_QueryResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_QueryResponse(struct zx_ctx* c, struct zx_shps_QueryResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_QueryResponse(struct zx_ctx* c, struct zx_shps_QueryResponse_s* x);

struct zx_shps_QueryResponse_s {
  ZX_ELEM_EXT
  zx_shps_QueryResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
  struct zx_a_EndpointReference_s* EndpointReference;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_shps_QueryResponse_GET_Status(struct zx_shps_QueryResponse_s* x, int n);
struct zx_a_EndpointReference_s* zx_shps_QueryResponse_GET_EndpointReference(struct zx_shps_QueryResponse_s* x, int n);

int zx_shps_QueryResponse_NUM_Status(struct zx_shps_QueryResponse_s* x);
int zx_shps_QueryResponse_NUM_EndpointReference(struct zx_shps_QueryResponse_s* x);

struct zx_lu_Status_s* zx_shps_QueryResponse_POP_Status(struct zx_shps_QueryResponse_s* x);
struct zx_a_EndpointReference_s* zx_shps_QueryResponse_POP_EndpointReference(struct zx_shps_QueryResponse_s* x);

void zx_shps_QueryResponse_PUSH_Status(struct zx_shps_QueryResponse_s* x, struct zx_lu_Status_s* y);
void zx_shps_QueryResponse_PUSH_EndpointReference(struct zx_shps_QueryResponse_s* x, struct zx_a_EndpointReference_s* y);


void zx_shps_QueryResponse_PUT_Status(struct zx_shps_QueryResponse_s* x, int n, struct zx_lu_Status_s* y);
void zx_shps_QueryResponse_PUT_EndpointReference(struct zx_shps_QueryResponse_s* x, int n, struct zx_a_EndpointReference_s* y);

void zx_shps_QueryResponse_ADD_Status(struct zx_shps_QueryResponse_s* x, int n, struct zx_lu_Status_s* z);
void zx_shps_QueryResponse_ADD_EndpointReference(struct zx_shps_QueryResponse_s* x, int n, struct zx_a_EndpointReference_s* z);

void zx_shps_QueryResponse_DEL_Status(struct zx_shps_QueryResponse_s* x, int n);
void zx_shps_QueryResponse_DEL_EndpointReference(struct zx_shps_QueryResponse_s* x, int n);

void zx_shps_QueryResponse_REV_Status(struct zx_shps_QueryResponse_s* x);
void zx_shps_QueryResponse_REV_EndpointReference(struct zx_shps_QueryResponse_s* x);

#endif
/* -------------------------- shps_Register -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_shps_Register_EXT
#define zx_shps_Register_EXT
#endif

struct zx_shps_Register_s* zx_DEC_shps_Register(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_Register_s* zx_NEW_shps_Register(struct zx_ctx* c);
void zx_FREE_shps_Register(struct zx_ctx* c, struct zx_shps_Register_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_Register_s* zx_DEEP_CLONE_shps_Register(struct zx_ctx* c, struct zx_shps_Register_s* x, int dup_strs);
void zx_DUP_STRS_shps_Register(struct zx_ctx* c, struct zx_shps_Register_s* x);
int zx_WALK_SO_shps_Register(struct zx_ctx* c, struct zx_shps_Register_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_Register(struct zx_ctx* c, struct zx_shps_Register_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_Register(struct zx_ctx* c, struct zx_shps_Register_s* x);
int zx_LEN_WO_shps_Register(struct zx_ctx* c, struct zx_shps_Register_s* x);
char* zx_ENC_SO_shps_Register(struct zx_ctx* c, struct zx_shps_Register_s* x, char* p);
char* zx_ENC_WO_shps_Register(struct zx_ctx* c, struct zx_shps_Register_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_Register(struct zx_ctx* c, struct zx_shps_Register_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_Register(struct zx_ctx* c, struct zx_shps_Register_s* x);

struct zx_shps_Register_s {
  ZX_ELEM_EXT
  zx_shps_Register_EXT
  struct zx_a_EndpointReference_s* EndpointReference;	/* {1,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_a_EndpointReference_s* zx_shps_Register_GET_EndpointReference(struct zx_shps_Register_s* x, int n);

int zx_shps_Register_NUM_EndpointReference(struct zx_shps_Register_s* x);

struct zx_a_EndpointReference_s* zx_shps_Register_POP_EndpointReference(struct zx_shps_Register_s* x);

void zx_shps_Register_PUSH_EndpointReference(struct zx_shps_Register_s* x, struct zx_a_EndpointReference_s* y);


void zx_shps_Register_PUT_EndpointReference(struct zx_shps_Register_s* x, int n, struct zx_a_EndpointReference_s* y);

void zx_shps_Register_ADD_EndpointReference(struct zx_shps_Register_s* x, int n, struct zx_a_EndpointReference_s* z);

void zx_shps_Register_DEL_EndpointReference(struct zx_shps_Register_s* x, int n);

void zx_shps_Register_REV_EndpointReference(struct zx_shps_Register_s* x);

#endif
/* -------------------------- shps_RegisterResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_shps_RegisterResponse_EXT
#define zx_shps_RegisterResponse_EXT
#endif

struct zx_shps_RegisterResponse_s* zx_DEC_shps_RegisterResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_RegisterResponse_s* zx_NEW_shps_RegisterResponse(struct zx_ctx* c);
void zx_FREE_shps_RegisterResponse(struct zx_ctx* c, struct zx_shps_RegisterResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_RegisterResponse_s* zx_DEEP_CLONE_shps_RegisterResponse(struct zx_ctx* c, struct zx_shps_RegisterResponse_s* x, int dup_strs);
void zx_DUP_STRS_shps_RegisterResponse(struct zx_ctx* c, struct zx_shps_RegisterResponse_s* x);
int zx_WALK_SO_shps_RegisterResponse(struct zx_ctx* c, struct zx_shps_RegisterResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_RegisterResponse(struct zx_ctx* c, struct zx_shps_RegisterResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_RegisterResponse(struct zx_ctx* c, struct zx_shps_RegisterResponse_s* x);
int zx_LEN_WO_shps_RegisterResponse(struct zx_ctx* c, struct zx_shps_RegisterResponse_s* x);
char* zx_ENC_SO_shps_RegisterResponse(struct zx_ctx* c, struct zx_shps_RegisterResponse_s* x, char* p);
char* zx_ENC_WO_shps_RegisterResponse(struct zx_ctx* c, struct zx_shps_RegisterResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_RegisterResponse(struct zx_ctx* c, struct zx_shps_RegisterResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_RegisterResponse(struct zx_ctx* c, struct zx_shps_RegisterResponse_s* x);

struct zx_shps_RegisterResponse_s {
  ZX_ELEM_EXT
  zx_shps_RegisterResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
  struct zx_shps_RegisterResponseItem_s* RegisterResponseItem;	/* {1,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_shps_RegisterResponse_GET_Status(struct zx_shps_RegisterResponse_s* x, int n);
struct zx_shps_RegisterResponseItem_s* zx_shps_RegisterResponse_GET_RegisterResponseItem(struct zx_shps_RegisterResponse_s* x, int n);

int zx_shps_RegisterResponse_NUM_Status(struct zx_shps_RegisterResponse_s* x);
int zx_shps_RegisterResponse_NUM_RegisterResponseItem(struct zx_shps_RegisterResponse_s* x);

struct zx_lu_Status_s* zx_shps_RegisterResponse_POP_Status(struct zx_shps_RegisterResponse_s* x);
struct zx_shps_RegisterResponseItem_s* zx_shps_RegisterResponse_POP_RegisterResponseItem(struct zx_shps_RegisterResponse_s* x);

void zx_shps_RegisterResponse_PUSH_Status(struct zx_shps_RegisterResponse_s* x, struct zx_lu_Status_s* y);
void zx_shps_RegisterResponse_PUSH_RegisterResponseItem(struct zx_shps_RegisterResponse_s* x, struct zx_shps_RegisterResponseItem_s* y);


void zx_shps_RegisterResponse_PUT_Status(struct zx_shps_RegisterResponse_s* x, int n, struct zx_lu_Status_s* y);
void zx_shps_RegisterResponse_PUT_RegisterResponseItem(struct zx_shps_RegisterResponse_s* x, int n, struct zx_shps_RegisterResponseItem_s* y);

void zx_shps_RegisterResponse_ADD_Status(struct zx_shps_RegisterResponse_s* x, int n, struct zx_lu_Status_s* z);
void zx_shps_RegisterResponse_ADD_RegisterResponseItem(struct zx_shps_RegisterResponse_s* x, int n, struct zx_shps_RegisterResponseItem_s* z);

void zx_shps_RegisterResponse_DEL_Status(struct zx_shps_RegisterResponse_s* x, int n);
void zx_shps_RegisterResponse_DEL_RegisterResponseItem(struct zx_shps_RegisterResponse_s* x, int n);

void zx_shps_RegisterResponse_REV_Status(struct zx_shps_RegisterResponse_s* x);
void zx_shps_RegisterResponse_REV_RegisterResponseItem(struct zx_shps_RegisterResponse_s* x);

#endif
/* -------------------------- shps_RegisterResponseItem -------------------------- */
/* refby( zx_shps_RegisterResponse_s ) */
#ifndef zx_shps_RegisterResponseItem_EXT
#define zx_shps_RegisterResponseItem_EXT
#endif

struct zx_shps_RegisterResponseItem_s* zx_DEC_shps_RegisterResponseItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_RegisterResponseItem_s* zx_NEW_shps_RegisterResponseItem(struct zx_ctx* c);
void zx_FREE_shps_RegisterResponseItem(struct zx_ctx* c, struct zx_shps_RegisterResponseItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_RegisterResponseItem_s* zx_DEEP_CLONE_shps_RegisterResponseItem(struct zx_ctx* c, struct zx_shps_RegisterResponseItem_s* x, int dup_strs);
void zx_DUP_STRS_shps_RegisterResponseItem(struct zx_ctx* c, struct zx_shps_RegisterResponseItem_s* x);
int zx_WALK_SO_shps_RegisterResponseItem(struct zx_ctx* c, struct zx_shps_RegisterResponseItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_RegisterResponseItem(struct zx_ctx* c, struct zx_shps_RegisterResponseItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_RegisterResponseItem(struct zx_ctx* c, struct zx_shps_RegisterResponseItem_s* x);
int zx_LEN_WO_shps_RegisterResponseItem(struct zx_ctx* c, struct zx_shps_RegisterResponseItem_s* x);
char* zx_ENC_SO_shps_RegisterResponseItem(struct zx_ctx* c, struct zx_shps_RegisterResponseItem_s* x, char* p);
char* zx_ENC_WO_shps_RegisterResponseItem(struct zx_ctx* c, struct zx_shps_RegisterResponseItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_RegisterResponseItem(struct zx_ctx* c, struct zx_shps_RegisterResponseItem_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_RegisterResponseItem(struct zx_ctx* c, struct zx_shps_RegisterResponseItem_s* x);

struct zx_shps_RegisterResponseItem_s {
  ZX_ELEM_EXT
  zx_shps_RegisterResponseItem_EXT
  struct zx_elem_s* ServiceHandle;	/* {1,1} xs:anyURI */
  struct zx_str* ref;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_shps_RegisterResponseItem_GET_ref(struct zx_shps_RegisterResponseItem_s* x);

struct zx_elem_s* zx_shps_RegisterResponseItem_GET_ServiceHandle(struct zx_shps_RegisterResponseItem_s* x, int n);

int zx_shps_RegisterResponseItem_NUM_ServiceHandle(struct zx_shps_RegisterResponseItem_s* x);

struct zx_elem_s* zx_shps_RegisterResponseItem_POP_ServiceHandle(struct zx_shps_RegisterResponseItem_s* x);

void zx_shps_RegisterResponseItem_PUSH_ServiceHandle(struct zx_shps_RegisterResponseItem_s* x, struct zx_elem_s* y);

void zx_shps_RegisterResponseItem_PUT_ref(struct zx_shps_RegisterResponseItem_s* x, struct zx_str* y);

void zx_shps_RegisterResponseItem_PUT_ServiceHandle(struct zx_shps_RegisterResponseItem_s* x, int n, struct zx_elem_s* y);

void zx_shps_RegisterResponseItem_ADD_ServiceHandle(struct zx_shps_RegisterResponseItem_s* x, int n, struct zx_elem_s* z);

void zx_shps_RegisterResponseItem_DEL_ServiceHandle(struct zx_shps_RegisterResponseItem_s* x, int n);

void zx_shps_RegisterResponseItem_REV_ServiceHandle(struct zx_shps_RegisterResponseItem_s* x);

#endif
/* -------------------------- shps_SetStatus -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_shps_SetStatus_EXT
#define zx_shps_SetStatus_EXT
#endif

struct zx_shps_SetStatus_s* zx_DEC_shps_SetStatus(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_SetStatus_s* zx_NEW_shps_SetStatus(struct zx_ctx* c);
void zx_FREE_shps_SetStatus(struct zx_ctx* c, struct zx_shps_SetStatus_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_SetStatus_s* zx_DEEP_CLONE_shps_SetStatus(struct zx_ctx* c, struct zx_shps_SetStatus_s* x, int dup_strs);
void zx_DUP_STRS_shps_SetStatus(struct zx_ctx* c, struct zx_shps_SetStatus_s* x);
int zx_WALK_SO_shps_SetStatus(struct zx_ctx* c, struct zx_shps_SetStatus_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_SetStatus(struct zx_ctx* c, struct zx_shps_SetStatus_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_SetStatus(struct zx_ctx* c, struct zx_shps_SetStatus_s* x);
int zx_LEN_WO_shps_SetStatus(struct zx_ctx* c, struct zx_shps_SetStatus_s* x);
char* zx_ENC_SO_shps_SetStatus(struct zx_ctx* c, struct zx_shps_SetStatus_s* x, char* p);
char* zx_ENC_WO_shps_SetStatus(struct zx_ctx* c, struct zx_shps_SetStatus_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_SetStatus(struct zx_ctx* c, struct zx_shps_SetStatus_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_SetStatus(struct zx_ctx* c, struct zx_shps_SetStatus_s* x);

struct zx_shps_SetStatus_s {
  ZX_ELEM_EXT
  zx_shps_SetStatus_EXT
  struct zx_shps_SetStatusItem_s* SetStatusItem;	/* {1,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_shps_SetStatusItem_s* zx_shps_SetStatus_GET_SetStatusItem(struct zx_shps_SetStatus_s* x, int n);

int zx_shps_SetStatus_NUM_SetStatusItem(struct zx_shps_SetStatus_s* x);

struct zx_shps_SetStatusItem_s* zx_shps_SetStatus_POP_SetStatusItem(struct zx_shps_SetStatus_s* x);

void zx_shps_SetStatus_PUSH_SetStatusItem(struct zx_shps_SetStatus_s* x, struct zx_shps_SetStatusItem_s* y);


void zx_shps_SetStatus_PUT_SetStatusItem(struct zx_shps_SetStatus_s* x, int n, struct zx_shps_SetStatusItem_s* y);

void zx_shps_SetStatus_ADD_SetStatusItem(struct zx_shps_SetStatus_s* x, int n, struct zx_shps_SetStatusItem_s* z);

void zx_shps_SetStatus_DEL_SetStatusItem(struct zx_shps_SetStatus_s* x, int n);

void zx_shps_SetStatus_REV_SetStatusItem(struct zx_shps_SetStatus_s* x);

#endif
/* -------------------------- shps_SetStatusItem -------------------------- */
/* refby( zx_shps_SetStatus_s ) */
#ifndef zx_shps_SetStatusItem_EXT
#define zx_shps_SetStatusItem_EXT
#endif

struct zx_shps_SetStatusItem_s* zx_DEC_shps_SetStatusItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_SetStatusItem_s* zx_NEW_shps_SetStatusItem(struct zx_ctx* c);
void zx_FREE_shps_SetStatusItem(struct zx_ctx* c, struct zx_shps_SetStatusItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_SetStatusItem_s* zx_DEEP_CLONE_shps_SetStatusItem(struct zx_ctx* c, struct zx_shps_SetStatusItem_s* x, int dup_strs);
void zx_DUP_STRS_shps_SetStatusItem(struct zx_ctx* c, struct zx_shps_SetStatusItem_s* x);
int zx_WALK_SO_shps_SetStatusItem(struct zx_ctx* c, struct zx_shps_SetStatusItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_SetStatusItem(struct zx_ctx* c, struct zx_shps_SetStatusItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_SetStatusItem(struct zx_ctx* c, struct zx_shps_SetStatusItem_s* x);
int zx_LEN_WO_shps_SetStatusItem(struct zx_ctx* c, struct zx_shps_SetStatusItem_s* x);
char* zx_ENC_SO_shps_SetStatusItem(struct zx_ctx* c, struct zx_shps_SetStatusItem_s* x, char* p);
char* zx_ENC_WO_shps_SetStatusItem(struct zx_ctx* c, struct zx_shps_SetStatusItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_SetStatusItem(struct zx_ctx* c, struct zx_shps_SetStatusItem_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_SetStatusItem(struct zx_ctx* c, struct zx_shps_SetStatusItem_s* x);

struct zx_shps_SetStatusItem_s {
  ZX_ELEM_EXT
  zx_shps_SetStatusItem_EXT
  struct zx_elem_s* ServiceStatus;	/* {1,1} xs:anyURI */
  struct zx_elem_s* ServiceHandle;	/* {1,-1} xs:anyURI */
  struct zx_str* itemID;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_shps_SetStatusItem_GET_itemID(struct zx_shps_SetStatusItem_s* x);

struct zx_elem_s* zx_shps_SetStatusItem_GET_ServiceStatus(struct zx_shps_SetStatusItem_s* x, int n);
struct zx_elem_s* zx_shps_SetStatusItem_GET_ServiceHandle(struct zx_shps_SetStatusItem_s* x, int n);

int zx_shps_SetStatusItem_NUM_ServiceStatus(struct zx_shps_SetStatusItem_s* x);
int zx_shps_SetStatusItem_NUM_ServiceHandle(struct zx_shps_SetStatusItem_s* x);

struct zx_elem_s* zx_shps_SetStatusItem_POP_ServiceStatus(struct zx_shps_SetStatusItem_s* x);
struct zx_elem_s* zx_shps_SetStatusItem_POP_ServiceHandle(struct zx_shps_SetStatusItem_s* x);

void zx_shps_SetStatusItem_PUSH_ServiceStatus(struct zx_shps_SetStatusItem_s* x, struct zx_elem_s* y);
void zx_shps_SetStatusItem_PUSH_ServiceHandle(struct zx_shps_SetStatusItem_s* x, struct zx_elem_s* y);

void zx_shps_SetStatusItem_PUT_itemID(struct zx_shps_SetStatusItem_s* x, struct zx_str* y);

void zx_shps_SetStatusItem_PUT_ServiceStatus(struct zx_shps_SetStatusItem_s* x, int n, struct zx_elem_s* y);
void zx_shps_SetStatusItem_PUT_ServiceHandle(struct zx_shps_SetStatusItem_s* x, int n, struct zx_elem_s* y);

void zx_shps_SetStatusItem_ADD_ServiceStatus(struct zx_shps_SetStatusItem_s* x, int n, struct zx_elem_s* z);
void zx_shps_SetStatusItem_ADD_ServiceHandle(struct zx_shps_SetStatusItem_s* x, int n, struct zx_elem_s* z);

void zx_shps_SetStatusItem_DEL_ServiceStatus(struct zx_shps_SetStatusItem_s* x, int n);
void zx_shps_SetStatusItem_DEL_ServiceHandle(struct zx_shps_SetStatusItem_s* x, int n);

void zx_shps_SetStatusItem_REV_ServiceStatus(struct zx_shps_SetStatusItem_s* x);
void zx_shps_SetStatusItem_REV_ServiceHandle(struct zx_shps_SetStatusItem_s* x);

#endif
/* -------------------------- shps_SetStatusResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_shps_SetStatusResponse_EXT
#define zx_shps_SetStatusResponse_EXT
#endif

struct zx_shps_SetStatusResponse_s* zx_DEC_shps_SetStatusResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_SetStatusResponse_s* zx_NEW_shps_SetStatusResponse(struct zx_ctx* c);
void zx_FREE_shps_SetStatusResponse(struct zx_ctx* c, struct zx_shps_SetStatusResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_SetStatusResponse_s* zx_DEEP_CLONE_shps_SetStatusResponse(struct zx_ctx* c, struct zx_shps_SetStatusResponse_s* x, int dup_strs);
void zx_DUP_STRS_shps_SetStatusResponse(struct zx_ctx* c, struct zx_shps_SetStatusResponse_s* x);
int zx_WALK_SO_shps_SetStatusResponse(struct zx_ctx* c, struct zx_shps_SetStatusResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_SetStatusResponse(struct zx_ctx* c, struct zx_shps_SetStatusResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_SetStatusResponse(struct zx_ctx* c, struct zx_shps_SetStatusResponse_s* x);
int zx_LEN_WO_shps_SetStatusResponse(struct zx_ctx* c, struct zx_shps_SetStatusResponse_s* x);
char* zx_ENC_SO_shps_SetStatusResponse(struct zx_ctx* c, struct zx_shps_SetStatusResponse_s* x, char* p);
char* zx_ENC_WO_shps_SetStatusResponse(struct zx_ctx* c, struct zx_shps_SetStatusResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_SetStatusResponse(struct zx_ctx* c, struct zx_shps_SetStatusResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_SetStatusResponse(struct zx_ctx* c, struct zx_shps_SetStatusResponse_s* x);

struct zx_shps_SetStatusResponse_s {
  ZX_ELEM_EXT
  zx_shps_SetStatusResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_shps_SetStatusResponse_GET_Status(struct zx_shps_SetStatusResponse_s* x, int n);

int zx_shps_SetStatusResponse_NUM_Status(struct zx_shps_SetStatusResponse_s* x);

struct zx_lu_Status_s* zx_shps_SetStatusResponse_POP_Status(struct zx_shps_SetStatusResponse_s* x);

void zx_shps_SetStatusResponse_PUSH_Status(struct zx_shps_SetStatusResponse_s* x, struct zx_lu_Status_s* y);


void zx_shps_SetStatusResponse_PUT_Status(struct zx_shps_SetStatusResponse_s* x, int n, struct zx_lu_Status_s* y);

void zx_shps_SetStatusResponse_ADD_Status(struct zx_shps_SetStatusResponse_s* x, int n, struct zx_lu_Status_s* z);

void zx_shps_SetStatusResponse_DEL_Status(struct zx_shps_SetStatusResponse_s* x, int n);

void zx_shps_SetStatusResponse_REV_Status(struct zx_shps_SetStatusResponse_s* x);

#endif
/* -------------------------- shps_Update -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_shps_Update_EXT
#define zx_shps_Update_EXT
#endif

struct zx_shps_Update_s* zx_DEC_shps_Update(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_Update_s* zx_NEW_shps_Update(struct zx_ctx* c);
void zx_FREE_shps_Update(struct zx_ctx* c, struct zx_shps_Update_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_Update_s* zx_DEEP_CLONE_shps_Update(struct zx_ctx* c, struct zx_shps_Update_s* x, int dup_strs);
void zx_DUP_STRS_shps_Update(struct zx_ctx* c, struct zx_shps_Update_s* x);
int zx_WALK_SO_shps_Update(struct zx_ctx* c, struct zx_shps_Update_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_Update(struct zx_ctx* c, struct zx_shps_Update_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_Update(struct zx_ctx* c, struct zx_shps_Update_s* x);
int zx_LEN_WO_shps_Update(struct zx_ctx* c, struct zx_shps_Update_s* x);
char* zx_ENC_SO_shps_Update(struct zx_ctx* c, struct zx_shps_Update_s* x, char* p);
char* zx_ENC_WO_shps_Update(struct zx_ctx* c, struct zx_shps_Update_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_Update(struct zx_ctx* c, struct zx_shps_Update_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_Update(struct zx_ctx* c, struct zx_shps_Update_s* x);

struct zx_shps_Update_s {
  ZX_ELEM_EXT
  zx_shps_Update_EXT
  struct zx_shps_UpdateItem_s* UpdateItem;	/* {1,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_shps_UpdateItem_s* zx_shps_Update_GET_UpdateItem(struct zx_shps_Update_s* x, int n);

int zx_shps_Update_NUM_UpdateItem(struct zx_shps_Update_s* x);

struct zx_shps_UpdateItem_s* zx_shps_Update_POP_UpdateItem(struct zx_shps_Update_s* x);

void zx_shps_Update_PUSH_UpdateItem(struct zx_shps_Update_s* x, struct zx_shps_UpdateItem_s* y);


void zx_shps_Update_PUT_UpdateItem(struct zx_shps_Update_s* x, int n, struct zx_shps_UpdateItem_s* y);

void zx_shps_Update_ADD_UpdateItem(struct zx_shps_Update_s* x, int n, struct zx_shps_UpdateItem_s* z);

void zx_shps_Update_DEL_UpdateItem(struct zx_shps_Update_s* x, int n);

void zx_shps_Update_REV_UpdateItem(struct zx_shps_Update_s* x);

#endif
/* -------------------------- shps_UpdateItem -------------------------- */
/* refby( zx_shps_Update_s ) */
#ifndef zx_shps_UpdateItem_EXT
#define zx_shps_UpdateItem_EXT
#endif

struct zx_shps_UpdateItem_s* zx_DEC_shps_UpdateItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_UpdateItem_s* zx_NEW_shps_UpdateItem(struct zx_ctx* c);
void zx_FREE_shps_UpdateItem(struct zx_ctx* c, struct zx_shps_UpdateItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_UpdateItem_s* zx_DEEP_CLONE_shps_UpdateItem(struct zx_ctx* c, struct zx_shps_UpdateItem_s* x, int dup_strs);
void zx_DUP_STRS_shps_UpdateItem(struct zx_ctx* c, struct zx_shps_UpdateItem_s* x);
int zx_WALK_SO_shps_UpdateItem(struct zx_ctx* c, struct zx_shps_UpdateItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_UpdateItem(struct zx_ctx* c, struct zx_shps_UpdateItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_UpdateItem(struct zx_ctx* c, struct zx_shps_UpdateItem_s* x);
int zx_LEN_WO_shps_UpdateItem(struct zx_ctx* c, struct zx_shps_UpdateItem_s* x);
char* zx_ENC_SO_shps_UpdateItem(struct zx_ctx* c, struct zx_shps_UpdateItem_s* x, char* p);
char* zx_ENC_WO_shps_UpdateItem(struct zx_ctx* c, struct zx_shps_UpdateItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_UpdateItem(struct zx_ctx* c, struct zx_shps_UpdateItem_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_UpdateItem(struct zx_ctx* c, struct zx_shps_UpdateItem_s* x);

struct zx_shps_UpdateItem_s {
  ZX_ELEM_EXT
  zx_shps_UpdateItem_EXT
  struct zx_elem_s* ServiceHandle;	/* {1,1} xs:anyURI */
  struct zx_a_EndpointReference_s* EndpointReference;	/* {1,1} nada */
  struct zx_str* itemID;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_shps_UpdateItem_GET_itemID(struct zx_shps_UpdateItem_s* x);

struct zx_elem_s* zx_shps_UpdateItem_GET_ServiceHandle(struct zx_shps_UpdateItem_s* x, int n);
struct zx_a_EndpointReference_s* zx_shps_UpdateItem_GET_EndpointReference(struct zx_shps_UpdateItem_s* x, int n);

int zx_shps_UpdateItem_NUM_ServiceHandle(struct zx_shps_UpdateItem_s* x);
int zx_shps_UpdateItem_NUM_EndpointReference(struct zx_shps_UpdateItem_s* x);

struct zx_elem_s* zx_shps_UpdateItem_POP_ServiceHandle(struct zx_shps_UpdateItem_s* x);
struct zx_a_EndpointReference_s* zx_shps_UpdateItem_POP_EndpointReference(struct zx_shps_UpdateItem_s* x);

void zx_shps_UpdateItem_PUSH_ServiceHandle(struct zx_shps_UpdateItem_s* x, struct zx_elem_s* y);
void zx_shps_UpdateItem_PUSH_EndpointReference(struct zx_shps_UpdateItem_s* x, struct zx_a_EndpointReference_s* y);

void zx_shps_UpdateItem_PUT_itemID(struct zx_shps_UpdateItem_s* x, struct zx_str* y);

void zx_shps_UpdateItem_PUT_ServiceHandle(struct zx_shps_UpdateItem_s* x, int n, struct zx_elem_s* y);
void zx_shps_UpdateItem_PUT_EndpointReference(struct zx_shps_UpdateItem_s* x, int n, struct zx_a_EndpointReference_s* y);

void zx_shps_UpdateItem_ADD_ServiceHandle(struct zx_shps_UpdateItem_s* x, int n, struct zx_elem_s* z);
void zx_shps_UpdateItem_ADD_EndpointReference(struct zx_shps_UpdateItem_s* x, int n, struct zx_a_EndpointReference_s* z);

void zx_shps_UpdateItem_DEL_ServiceHandle(struct zx_shps_UpdateItem_s* x, int n);
void zx_shps_UpdateItem_DEL_EndpointReference(struct zx_shps_UpdateItem_s* x, int n);

void zx_shps_UpdateItem_REV_ServiceHandle(struct zx_shps_UpdateItem_s* x);
void zx_shps_UpdateItem_REV_EndpointReference(struct zx_shps_UpdateItem_s* x);

#endif
/* -------------------------- shps_UpdateResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_shps_UpdateResponse_EXT
#define zx_shps_UpdateResponse_EXT
#endif

struct zx_shps_UpdateResponse_s* zx_DEC_shps_UpdateResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_shps_UpdateResponse_s* zx_NEW_shps_UpdateResponse(struct zx_ctx* c);
void zx_FREE_shps_UpdateResponse(struct zx_ctx* c, struct zx_shps_UpdateResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_shps_UpdateResponse_s* zx_DEEP_CLONE_shps_UpdateResponse(struct zx_ctx* c, struct zx_shps_UpdateResponse_s* x, int dup_strs);
void zx_DUP_STRS_shps_UpdateResponse(struct zx_ctx* c, struct zx_shps_UpdateResponse_s* x);
int zx_WALK_SO_shps_UpdateResponse(struct zx_ctx* c, struct zx_shps_UpdateResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_shps_UpdateResponse(struct zx_ctx* c, struct zx_shps_UpdateResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_shps_UpdateResponse(struct zx_ctx* c, struct zx_shps_UpdateResponse_s* x);
int zx_LEN_WO_shps_UpdateResponse(struct zx_ctx* c, struct zx_shps_UpdateResponse_s* x);
char* zx_ENC_SO_shps_UpdateResponse(struct zx_ctx* c, struct zx_shps_UpdateResponse_s* x, char* p);
char* zx_ENC_WO_shps_UpdateResponse(struct zx_ctx* c, struct zx_shps_UpdateResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_shps_UpdateResponse(struct zx_ctx* c, struct zx_shps_UpdateResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_shps_UpdateResponse(struct zx_ctx* c, struct zx_shps_UpdateResponse_s* x);

struct zx_shps_UpdateResponse_s {
  ZX_ELEM_EXT
  zx_shps_UpdateResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_shps_UpdateResponse_GET_Status(struct zx_shps_UpdateResponse_s* x, int n);

int zx_shps_UpdateResponse_NUM_Status(struct zx_shps_UpdateResponse_s* x);

struct zx_lu_Status_s* zx_shps_UpdateResponse_POP_Status(struct zx_shps_UpdateResponse_s* x);

void zx_shps_UpdateResponse_PUSH_Status(struct zx_shps_UpdateResponse_s* x, struct zx_lu_Status_s* y);


void zx_shps_UpdateResponse_PUT_Status(struct zx_shps_UpdateResponse_s* x, int n, struct zx_lu_Status_s* y);

void zx_shps_UpdateResponse_ADD_Status(struct zx_shps_UpdateResponse_s* x, int n, struct zx_lu_Status_s* z);

void zx_shps_UpdateResponse_DEL_Status(struct zx_shps_UpdateResponse_s* x, int n);

void zx_shps_UpdateResponse_REV_Status(struct zx_shps_UpdateResponse_s* x);

#endif

#endif