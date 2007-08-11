/* c/zx-cb-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_cb_data_h
#define _c_zx_cb_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- cb_By -------------------------- */
/* refby( ) */
#ifndef zx_cb_By_EXT
#define zx_cb_By_EXT
#endif

struct zx_cb_By_s* zx_DEC_cb_By(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_By_s* zx_NEW_cb_By(struct zx_ctx* c);
void zx_FREE_cb_By(struct zx_ctx* c, struct zx_cb_By_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_By_s* zx_DEEP_CLONE_cb_By(struct zx_ctx* c, struct zx_cb_By_s* x, int dup_strs);
void zx_DUP_STRS_cb_By(struct zx_ctx* c, struct zx_cb_By_s* x);
int zx_WALK_SO_cb_By(struct zx_ctx* c, struct zx_cb_By_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_By(struct zx_ctx* c, struct zx_cb_By_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_By(struct zx_ctx* c, struct zx_cb_By_s* x);
int zx_LEN_WO_cb_By(struct zx_ctx* c, struct zx_cb_By_s* x);
char* zx_ENC_SO_cb_By(struct zx_ctx* c, struct zx_cb_By_s* x, char* p);
char* zx_ENC_WO_cb_By(struct zx_ctx* c, struct zx_cb_By_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_By(struct zx_ctx* c, struct zx_cb_By_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_By(struct zx_ctx* c, struct zx_cb_By_s* x);

struct zx_cb_By_s {
  ZX_ELEM_EXT
  zx_cb_By_EXT
  struct zx_str* sortAlg;	/* {0,1} attribute asc */
  struct zx_str* sortWeight;	/* {0,1} attribute xs:number */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_By_GET_sortAlg(struct zx_cb_By_s* x);
struct zx_str* zx_cb_By_GET_sortWeight(struct zx_cb_By_s* x);





void zx_cb_By_PUT_sortAlg(struct zx_cb_By_s* x, struct zx_str* y);
void zx_cb_By_PUT_sortWeight(struct zx_cb_By_s* x, struct zx_str* y);





#endif
/* -------------------------- cb_Create -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_cb_Create_EXT
#define zx_cb_Create_EXT
#endif

struct zx_cb_Create_s* zx_DEC_cb_Create(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_Create_s* zx_NEW_cb_Create(struct zx_ctx* c);
void zx_FREE_cb_Create(struct zx_ctx* c, struct zx_cb_Create_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_Create_s* zx_DEEP_CLONE_cb_Create(struct zx_ctx* c, struct zx_cb_Create_s* x, int dup_strs);
void zx_DUP_STRS_cb_Create(struct zx_ctx* c, struct zx_cb_Create_s* x);
int zx_WALK_SO_cb_Create(struct zx_ctx* c, struct zx_cb_Create_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_Create(struct zx_ctx* c, struct zx_cb_Create_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_Create(struct zx_ctx* c, struct zx_cb_Create_s* x);
int zx_LEN_WO_cb_Create(struct zx_ctx* c, struct zx_cb_Create_s* x);
char* zx_ENC_SO_cb_Create(struct zx_ctx* c, struct zx_cb_Create_s* x, char* p);
char* zx_ENC_WO_cb_Create(struct zx_ctx* c, struct zx_cb_Create_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_Create(struct zx_ctx* c, struct zx_cb_Create_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_Create(struct zx_ctx* c, struct zx_cb_Create_s* x);

struct zx_cb_Create_s {
  ZX_ELEM_EXT
  zx_cb_Create_EXT
  struct zx_cb_ResourceID_s* ResourceID;	/* {0,1} nada */
  struct zx_cb_EncryptedResourceID_s* EncryptedResourceID;	/* {0,1} nada */
  struct zx_cb_Subscription_s* Subscription;	/* {0,-1} nada */
  struct zx_cb_CreateItem_s* CreateItem;	/* {1,-1}  */
  struct zx_cb_ItemSelection_s* ItemSelection;	/* {0,-1} nada */
  struct zx_cb_Extension_s* Extension;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_Create_GET_id(struct zx_cb_Create_s* x);

struct zx_cb_ResourceID_s* zx_cb_Create_GET_ResourceID(struct zx_cb_Create_s* x, int n);
struct zx_cb_EncryptedResourceID_s* zx_cb_Create_GET_EncryptedResourceID(struct zx_cb_Create_s* x, int n);
struct zx_cb_Subscription_s* zx_cb_Create_GET_Subscription(struct zx_cb_Create_s* x, int n);
struct zx_cb_CreateItem_s* zx_cb_Create_GET_CreateItem(struct zx_cb_Create_s* x, int n);
struct zx_cb_ItemSelection_s* zx_cb_Create_GET_ItemSelection(struct zx_cb_Create_s* x, int n);
struct zx_cb_Extension_s* zx_cb_Create_GET_Extension(struct zx_cb_Create_s* x, int n);

int zx_cb_Create_NUM_ResourceID(struct zx_cb_Create_s* x);
int zx_cb_Create_NUM_EncryptedResourceID(struct zx_cb_Create_s* x);
int zx_cb_Create_NUM_Subscription(struct zx_cb_Create_s* x);
int zx_cb_Create_NUM_CreateItem(struct zx_cb_Create_s* x);
int zx_cb_Create_NUM_ItemSelection(struct zx_cb_Create_s* x);
int zx_cb_Create_NUM_Extension(struct zx_cb_Create_s* x);

struct zx_cb_ResourceID_s* zx_cb_Create_POP_ResourceID(struct zx_cb_Create_s* x);
struct zx_cb_EncryptedResourceID_s* zx_cb_Create_POP_EncryptedResourceID(struct zx_cb_Create_s* x);
struct zx_cb_Subscription_s* zx_cb_Create_POP_Subscription(struct zx_cb_Create_s* x);
struct zx_cb_CreateItem_s* zx_cb_Create_POP_CreateItem(struct zx_cb_Create_s* x);
struct zx_cb_ItemSelection_s* zx_cb_Create_POP_ItemSelection(struct zx_cb_Create_s* x);
struct zx_cb_Extension_s* zx_cb_Create_POP_Extension(struct zx_cb_Create_s* x);

void zx_cb_Create_PUSH_ResourceID(struct zx_cb_Create_s* x, struct zx_cb_ResourceID_s* y);
void zx_cb_Create_PUSH_EncryptedResourceID(struct zx_cb_Create_s* x, struct zx_cb_EncryptedResourceID_s* y);
void zx_cb_Create_PUSH_Subscription(struct zx_cb_Create_s* x, struct zx_cb_Subscription_s* y);
void zx_cb_Create_PUSH_CreateItem(struct zx_cb_Create_s* x, struct zx_cb_CreateItem_s* y);
void zx_cb_Create_PUSH_ItemSelection(struct zx_cb_Create_s* x, struct zx_cb_ItemSelection_s* y);
void zx_cb_Create_PUSH_Extension(struct zx_cb_Create_s* x, struct zx_cb_Extension_s* y);

void zx_cb_Create_PUT_id(struct zx_cb_Create_s* x, struct zx_str* y);

void zx_cb_Create_PUT_ResourceID(struct zx_cb_Create_s* x, int n, struct zx_cb_ResourceID_s* y);
void zx_cb_Create_PUT_EncryptedResourceID(struct zx_cb_Create_s* x, int n, struct zx_cb_EncryptedResourceID_s* y);
void zx_cb_Create_PUT_Subscription(struct zx_cb_Create_s* x, int n, struct zx_cb_Subscription_s* y);
void zx_cb_Create_PUT_CreateItem(struct zx_cb_Create_s* x, int n, struct zx_cb_CreateItem_s* y);
void zx_cb_Create_PUT_ItemSelection(struct zx_cb_Create_s* x, int n, struct zx_cb_ItemSelection_s* y);
void zx_cb_Create_PUT_Extension(struct zx_cb_Create_s* x, int n, struct zx_cb_Extension_s* y);

void zx_cb_Create_ADD_ResourceID(struct zx_cb_Create_s* x, int n, struct zx_cb_ResourceID_s* z);
void zx_cb_Create_ADD_EncryptedResourceID(struct zx_cb_Create_s* x, int n, struct zx_cb_EncryptedResourceID_s* z);
void zx_cb_Create_ADD_Subscription(struct zx_cb_Create_s* x, int n, struct zx_cb_Subscription_s* z);
void zx_cb_Create_ADD_CreateItem(struct zx_cb_Create_s* x, int n, struct zx_cb_CreateItem_s* z);
void zx_cb_Create_ADD_ItemSelection(struct zx_cb_Create_s* x, int n, struct zx_cb_ItemSelection_s* z);
void zx_cb_Create_ADD_Extension(struct zx_cb_Create_s* x, int n, struct zx_cb_Extension_s* z);

void zx_cb_Create_DEL_ResourceID(struct zx_cb_Create_s* x, int n);
void zx_cb_Create_DEL_EncryptedResourceID(struct zx_cb_Create_s* x, int n);
void zx_cb_Create_DEL_Subscription(struct zx_cb_Create_s* x, int n);
void zx_cb_Create_DEL_CreateItem(struct zx_cb_Create_s* x, int n);
void zx_cb_Create_DEL_ItemSelection(struct zx_cb_Create_s* x, int n);
void zx_cb_Create_DEL_Extension(struct zx_cb_Create_s* x, int n);

void zx_cb_Create_REV_ResourceID(struct zx_cb_Create_s* x);
void zx_cb_Create_REV_EncryptedResourceID(struct zx_cb_Create_s* x);
void zx_cb_Create_REV_Subscription(struct zx_cb_Create_s* x);
void zx_cb_Create_REV_CreateItem(struct zx_cb_Create_s* x);
void zx_cb_Create_REV_ItemSelection(struct zx_cb_Create_s* x);
void zx_cb_Create_REV_Extension(struct zx_cb_Create_s* x);

#endif
/* -------------------------- cb_CreateItem -------------------------- */
/* refby( zx_cb_Create_s ) */
#ifndef zx_cb_CreateItem_EXT
#define zx_cb_CreateItem_EXT
#endif

struct zx_cb_CreateItem_s* zx_DEC_cb_CreateItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_CreateItem_s* zx_NEW_cb_CreateItem(struct zx_ctx* c);
void zx_FREE_cb_CreateItem(struct zx_ctx* c, struct zx_cb_CreateItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_CreateItem_s* zx_DEEP_CLONE_cb_CreateItem(struct zx_ctx* c, struct zx_cb_CreateItem_s* x, int dup_strs);
void zx_DUP_STRS_cb_CreateItem(struct zx_ctx* c, struct zx_cb_CreateItem_s* x);
int zx_WALK_SO_cb_CreateItem(struct zx_ctx* c, struct zx_cb_CreateItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_CreateItem(struct zx_ctx* c, struct zx_cb_CreateItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_CreateItem(struct zx_ctx* c, struct zx_cb_CreateItem_s* x);
int zx_LEN_WO_cb_CreateItem(struct zx_ctx* c, struct zx_cb_CreateItem_s* x);
char* zx_ENC_SO_cb_CreateItem(struct zx_ctx* c, struct zx_cb_CreateItem_s* x, char* p);
char* zx_ENC_WO_cb_CreateItem(struct zx_ctx* c, struct zx_cb_CreateItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_CreateItem(struct zx_ctx* c, struct zx_cb_CreateItem_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_CreateItem(struct zx_ctx* c, struct zx_cb_CreateItem_s* x);

struct zx_cb_CreateItem_s {
  ZX_ELEM_EXT
  zx_cb_CreateItem_EXT
  struct zx_cb_NewData_s* NewData;	/* {0,1}  */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* itemID;	/* {0,1} attribute xs:string */
  struct zx_str* objectType;	/* {0,1} attribute xs:NCName */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_CreateItem_GET_id(struct zx_cb_CreateItem_s* x);
struct zx_str* zx_cb_CreateItem_GET_itemID(struct zx_cb_CreateItem_s* x);
struct zx_str* zx_cb_CreateItem_GET_objectType(struct zx_cb_CreateItem_s* x);

struct zx_cb_NewData_s* zx_cb_CreateItem_GET_NewData(struct zx_cb_CreateItem_s* x, int n);

int zx_cb_CreateItem_NUM_NewData(struct zx_cb_CreateItem_s* x);

struct zx_cb_NewData_s* zx_cb_CreateItem_POP_NewData(struct zx_cb_CreateItem_s* x);

void zx_cb_CreateItem_PUSH_NewData(struct zx_cb_CreateItem_s* x, struct zx_cb_NewData_s* y);

void zx_cb_CreateItem_PUT_id(struct zx_cb_CreateItem_s* x, struct zx_str* y);
void zx_cb_CreateItem_PUT_itemID(struct zx_cb_CreateItem_s* x, struct zx_str* y);
void zx_cb_CreateItem_PUT_objectType(struct zx_cb_CreateItem_s* x, struct zx_str* y);

void zx_cb_CreateItem_PUT_NewData(struct zx_cb_CreateItem_s* x, int n, struct zx_cb_NewData_s* y);

void zx_cb_CreateItem_ADD_NewData(struct zx_cb_CreateItem_s* x, int n, struct zx_cb_NewData_s* z);

void zx_cb_CreateItem_DEL_NewData(struct zx_cb_CreateItem_s* x, int n);

void zx_cb_CreateItem_REV_NewData(struct zx_cb_CreateItem_s* x);

#endif
/* -------------------------- cb_CreateResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_cb_CreateResponse_EXT
#define zx_cb_CreateResponse_EXT
#endif

struct zx_cb_CreateResponse_s* zx_DEC_cb_CreateResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_CreateResponse_s* zx_NEW_cb_CreateResponse(struct zx_ctx* c);
void zx_FREE_cb_CreateResponse(struct zx_ctx* c, struct zx_cb_CreateResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_CreateResponse_s* zx_DEEP_CLONE_cb_CreateResponse(struct zx_ctx* c, struct zx_cb_CreateResponse_s* x, int dup_strs);
void zx_DUP_STRS_cb_CreateResponse(struct zx_ctx* c, struct zx_cb_CreateResponse_s* x);
int zx_WALK_SO_cb_CreateResponse(struct zx_ctx* c, struct zx_cb_CreateResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_CreateResponse(struct zx_ctx* c, struct zx_cb_CreateResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_CreateResponse(struct zx_ctx* c, struct zx_cb_CreateResponse_s* x);
int zx_LEN_WO_cb_CreateResponse(struct zx_ctx* c, struct zx_cb_CreateResponse_s* x);
char* zx_ENC_SO_cb_CreateResponse(struct zx_ctx* c, struct zx_cb_CreateResponse_s* x, char* p);
char* zx_ENC_WO_cb_CreateResponse(struct zx_ctx* c, struct zx_cb_CreateResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_CreateResponse(struct zx_ctx* c, struct zx_cb_CreateResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_CreateResponse(struct zx_ctx* c, struct zx_cb_CreateResponse_s* x);

struct zx_cb_CreateResponse_s {
  ZX_ELEM_EXT
  zx_cb_CreateResponse_EXT
  struct zx_cb_Status_s* Status;	/* {1,1} nada */
  struct zx_cb_ItemData_s* ItemData;	/* {0,-1} nada */
  struct zx_cb_Extension_s* Extension;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* timeStamp;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_CreateResponse_GET_id(struct zx_cb_CreateResponse_s* x);
struct zx_str* zx_cb_CreateResponse_GET_timeStamp(struct zx_cb_CreateResponse_s* x);

struct zx_cb_Status_s* zx_cb_CreateResponse_GET_Status(struct zx_cb_CreateResponse_s* x, int n);
struct zx_cb_ItemData_s* zx_cb_CreateResponse_GET_ItemData(struct zx_cb_CreateResponse_s* x, int n);
struct zx_cb_Extension_s* zx_cb_CreateResponse_GET_Extension(struct zx_cb_CreateResponse_s* x, int n);

int zx_cb_CreateResponse_NUM_Status(struct zx_cb_CreateResponse_s* x);
int zx_cb_CreateResponse_NUM_ItemData(struct zx_cb_CreateResponse_s* x);
int zx_cb_CreateResponse_NUM_Extension(struct zx_cb_CreateResponse_s* x);

struct zx_cb_Status_s* zx_cb_CreateResponse_POP_Status(struct zx_cb_CreateResponse_s* x);
struct zx_cb_ItemData_s* zx_cb_CreateResponse_POP_ItemData(struct zx_cb_CreateResponse_s* x);
struct zx_cb_Extension_s* zx_cb_CreateResponse_POP_Extension(struct zx_cb_CreateResponse_s* x);

void zx_cb_CreateResponse_PUSH_Status(struct zx_cb_CreateResponse_s* x, struct zx_cb_Status_s* y);
void zx_cb_CreateResponse_PUSH_ItemData(struct zx_cb_CreateResponse_s* x, struct zx_cb_ItemData_s* y);
void zx_cb_CreateResponse_PUSH_Extension(struct zx_cb_CreateResponse_s* x, struct zx_cb_Extension_s* y);

void zx_cb_CreateResponse_PUT_id(struct zx_cb_CreateResponse_s* x, struct zx_str* y);
void zx_cb_CreateResponse_PUT_timeStamp(struct zx_cb_CreateResponse_s* x, struct zx_str* y);

void zx_cb_CreateResponse_PUT_Status(struct zx_cb_CreateResponse_s* x, int n, struct zx_cb_Status_s* y);
void zx_cb_CreateResponse_PUT_ItemData(struct zx_cb_CreateResponse_s* x, int n, struct zx_cb_ItemData_s* y);
void zx_cb_CreateResponse_PUT_Extension(struct zx_cb_CreateResponse_s* x, int n, struct zx_cb_Extension_s* y);

void zx_cb_CreateResponse_ADD_Status(struct zx_cb_CreateResponse_s* x, int n, struct zx_cb_Status_s* z);
void zx_cb_CreateResponse_ADD_ItemData(struct zx_cb_CreateResponse_s* x, int n, struct zx_cb_ItemData_s* z);
void zx_cb_CreateResponse_ADD_Extension(struct zx_cb_CreateResponse_s* x, int n, struct zx_cb_Extension_s* z);

void zx_cb_CreateResponse_DEL_Status(struct zx_cb_CreateResponse_s* x, int n);
void zx_cb_CreateResponse_DEL_ItemData(struct zx_cb_CreateResponse_s* x, int n);
void zx_cb_CreateResponse_DEL_Extension(struct zx_cb_CreateResponse_s* x, int n);

void zx_cb_CreateResponse_REV_Status(struct zx_cb_CreateResponse_s* x);
void zx_cb_CreateResponse_REV_ItemData(struct zx_cb_CreateResponse_s* x);
void zx_cb_CreateResponse_REV_Extension(struct zx_cb_CreateResponse_s* x);

#endif
/* -------------------------- cb_Credential -------------------------- */
/* refby( zx_cb_NotifyTo_s zx_cb_NotifyAdminTo_s ) */
#ifndef zx_cb_Credential_EXT
#define zx_cb_Credential_EXT
#endif

struct zx_cb_Credential_s* zx_DEC_cb_Credential(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_Credential_s* zx_NEW_cb_Credential(struct zx_ctx* c);
void zx_FREE_cb_Credential(struct zx_ctx* c, struct zx_cb_Credential_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_Credential_s* zx_DEEP_CLONE_cb_Credential(struct zx_ctx* c, struct zx_cb_Credential_s* x, int dup_strs);
void zx_DUP_STRS_cb_Credential(struct zx_ctx* c, struct zx_cb_Credential_s* x);
int zx_WALK_SO_cb_Credential(struct zx_ctx* c, struct zx_cb_Credential_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_Credential(struct zx_ctx* c, struct zx_cb_Credential_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_Credential(struct zx_ctx* c, struct zx_cb_Credential_s* x);
int zx_LEN_WO_cb_Credential(struct zx_ctx* c, struct zx_cb_Credential_s* x);
char* zx_ENC_SO_cb_Credential(struct zx_ctx* c, struct zx_cb_Credential_s* x, char* p);
char* zx_ENC_WO_cb_Credential(struct zx_ctx* c, struct zx_cb_Credential_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_Credential(struct zx_ctx* c, struct zx_cb_Credential_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_Credential(struct zx_ctx* c, struct zx_cb_Credential_s* x);

struct zx_cb_Credential_s {
  ZX_ELEM_EXT
  zx_cb_Credential_EXT
  struct zx_sa_Assertion_s* Assertion;	/* {0,1} nada */
  struct zx_str* notOnOrAfter;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_Credential_GET_notOnOrAfter(struct zx_cb_Credential_s* x);

struct zx_sa_Assertion_s* zx_cb_Credential_GET_Assertion(struct zx_cb_Credential_s* x, int n);

int zx_cb_Credential_NUM_Assertion(struct zx_cb_Credential_s* x);

struct zx_sa_Assertion_s* zx_cb_Credential_POP_Assertion(struct zx_cb_Credential_s* x);

void zx_cb_Credential_PUSH_Assertion(struct zx_cb_Credential_s* x, struct zx_sa_Assertion_s* y);

void zx_cb_Credential_PUT_notOnOrAfter(struct zx_cb_Credential_s* x, struct zx_str* y);

void zx_cb_Credential_PUT_Assertion(struct zx_cb_Credential_s* x, int n, struct zx_sa_Assertion_s* y);

void zx_cb_Credential_ADD_Assertion(struct zx_cb_Credential_s* x, int n, struct zx_sa_Assertion_s* z);

void zx_cb_Credential_DEL_Assertion(struct zx_cb_Credential_s* x, int n);

void zx_cb_Credential_REV_Assertion(struct zx_cb_Credential_s* x);

#endif
/* -------------------------- cb_Data -------------------------- */
/* refby( zx_cb_QueryResponse_s ) */
#ifndef zx_cb_Data_EXT
#define zx_cb_Data_EXT
#endif

struct zx_cb_Data_s* zx_DEC_cb_Data(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_Data_s* zx_NEW_cb_Data(struct zx_ctx* c);
void zx_FREE_cb_Data(struct zx_ctx* c, struct zx_cb_Data_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_Data_s* zx_DEEP_CLONE_cb_Data(struct zx_ctx* c, struct zx_cb_Data_s* x, int dup_strs);
void zx_DUP_STRS_cb_Data(struct zx_ctx* c, struct zx_cb_Data_s* x);
int zx_WALK_SO_cb_Data(struct zx_ctx* c, struct zx_cb_Data_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_Data(struct zx_ctx* c, struct zx_cb_Data_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_Data(struct zx_ctx* c, struct zx_cb_Data_s* x);
int zx_LEN_WO_cb_Data(struct zx_ctx* c, struct zx_cb_Data_s* x);
char* zx_ENC_SO_cb_Data(struct zx_ctx* c, struct zx_cb_Data_s* x, char* p);
char* zx_ENC_WO_cb_Data(struct zx_ctx* c, struct zx_cb_Data_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_Data(struct zx_ctx* c, struct zx_cb_Data_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_Data(struct zx_ctx* c, struct zx_cb_Data_s* x);

struct zx_cb_Data_s {
  ZX_ELEM_EXT
  zx_cb_Data_EXT
  struct zx_elem_s* Card;	/* {0,-1} cb:CardType */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* itemIDRef;	/* {0,1} attribute xs:string */
  struct zx_str* notSorted;	/* {0,1} attribute Now */
  struct zx_str* remaining;	/* {0,1} attribute xs:integer */
  struct zx_str* nextOffset;	/* {0,1} attribute xs:nonNegativeInteger */
  struct zx_str* setID;	/* {0,1} attribute xs:string */
  struct zx_str* changeFormat;	/* {0,1} attribute ChangedElements */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_Data_GET_id(struct zx_cb_Data_s* x);
struct zx_str* zx_cb_Data_GET_itemIDRef(struct zx_cb_Data_s* x);
struct zx_str* zx_cb_Data_GET_notSorted(struct zx_cb_Data_s* x);
struct zx_str* zx_cb_Data_GET_remaining(struct zx_cb_Data_s* x);
struct zx_str* zx_cb_Data_GET_nextOffset(struct zx_cb_Data_s* x);
struct zx_str* zx_cb_Data_GET_setID(struct zx_cb_Data_s* x);
struct zx_str* zx_cb_Data_GET_changeFormat(struct zx_cb_Data_s* x);

struct zx_elem_s* zx_cb_Data_GET_Card(struct zx_cb_Data_s* x, int n);

int zx_cb_Data_NUM_Card(struct zx_cb_Data_s* x);

struct zx_elem_s* zx_cb_Data_POP_Card(struct zx_cb_Data_s* x);

void zx_cb_Data_PUSH_Card(struct zx_cb_Data_s* x, struct zx_elem_s* y);

void zx_cb_Data_PUT_id(struct zx_cb_Data_s* x, struct zx_str* y);
void zx_cb_Data_PUT_itemIDRef(struct zx_cb_Data_s* x, struct zx_str* y);
void zx_cb_Data_PUT_notSorted(struct zx_cb_Data_s* x, struct zx_str* y);
void zx_cb_Data_PUT_remaining(struct zx_cb_Data_s* x, struct zx_str* y);
void zx_cb_Data_PUT_nextOffset(struct zx_cb_Data_s* x, struct zx_str* y);
void zx_cb_Data_PUT_setID(struct zx_cb_Data_s* x, struct zx_str* y);
void zx_cb_Data_PUT_changeFormat(struct zx_cb_Data_s* x, struct zx_str* y);

void zx_cb_Data_PUT_Card(struct zx_cb_Data_s* x, int n, struct zx_elem_s* y);

void zx_cb_Data_ADD_Card(struct zx_cb_Data_s* x, int n, struct zx_elem_s* z);

void zx_cb_Data_DEL_Card(struct zx_cb_Data_s* x, int n);

void zx_cb_Data_REV_Card(struct zx_cb_Data_s* x);

#endif
/* -------------------------- cb_Delete -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_cb_Delete_EXT
#define zx_cb_Delete_EXT
#endif

struct zx_cb_Delete_s* zx_DEC_cb_Delete(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_Delete_s* zx_NEW_cb_Delete(struct zx_ctx* c);
void zx_FREE_cb_Delete(struct zx_ctx* c, struct zx_cb_Delete_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_Delete_s* zx_DEEP_CLONE_cb_Delete(struct zx_ctx* c, struct zx_cb_Delete_s* x, int dup_strs);
void zx_DUP_STRS_cb_Delete(struct zx_ctx* c, struct zx_cb_Delete_s* x);
int zx_WALK_SO_cb_Delete(struct zx_ctx* c, struct zx_cb_Delete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_Delete(struct zx_ctx* c, struct zx_cb_Delete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_Delete(struct zx_ctx* c, struct zx_cb_Delete_s* x);
int zx_LEN_WO_cb_Delete(struct zx_ctx* c, struct zx_cb_Delete_s* x);
char* zx_ENC_SO_cb_Delete(struct zx_ctx* c, struct zx_cb_Delete_s* x, char* p);
char* zx_ENC_WO_cb_Delete(struct zx_ctx* c, struct zx_cb_Delete_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_Delete(struct zx_ctx* c, struct zx_cb_Delete_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_Delete(struct zx_ctx* c, struct zx_cb_Delete_s* x);

struct zx_cb_Delete_s {
  ZX_ELEM_EXT
  zx_cb_Delete_EXT
  struct zx_cb_ResourceID_s* ResourceID;	/* {0,1} nada */
  struct zx_cb_EncryptedResourceID_s* EncryptedResourceID;	/* {0,1} nada */
  struct zx_cb_DeleteItem_s* DeleteItem;	/* {1,-1}  */
  struct zx_cb_Extension_s* Extension;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_Delete_GET_id(struct zx_cb_Delete_s* x);

struct zx_cb_ResourceID_s* zx_cb_Delete_GET_ResourceID(struct zx_cb_Delete_s* x, int n);
struct zx_cb_EncryptedResourceID_s* zx_cb_Delete_GET_EncryptedResourceID(struct zx_cb_Delete_s* x, int n);
struct zx_cb_DeleteItem_s* zx_cb_Delete_GET_DeleteItem(struct zx_cb_Delete_s* x, int n);
struct zx_cb_Extension_s* zx_cb_Delete_GET_Extension(struct zx_cb_Delete_s* x, int n);

int zx_cb_Delete_NUM_ResourceID(struct zx_cb_Delete_s* x);
int zx_cb_Delete_NUM_EncryptedResourceID(struct zx_cb_Delete_s* x);
int zx_cb_Delete_NUM_DeleteItem(struct zx_cb_Delete_s* x);
int zx_cb_Delete_NUM_Extension(struct zx_cb_Delete_s* x);

struct zx_cb_ResourceID_s* zx_cb_Delete_POP_ResourceID(struct zx_cb_Delete_s* x);
struct zx_cb_EncryptedResourceID_s* zx_cb_Delete_POP_EncryptedResourceID(struct zx_cb_Delete_s* x);
struct zx_cb_DeleteItem_s* zx_cb_Delete_POP_DeleteItem(struct zx_cb_Delete_s* x);
struct zx_cb_Extension_s* zx_cb_Delete_POP_Extension(struct zx_cb_Delete_s* x);

void zx_cb_Delete_PUSH_ResourceID(struct zx_cb_Delete_s* x, struct zx_cb_ResourceID_s* y);
void zx_cb_Delete_PUSH_EncryptedResourceID(struct zx_cb_Delete_s* x, struct zx_cb_EncryptedResourceID_s* y);
void zx_cb_Delete_PUSH_DeleteItem(struct zx_cb_Delete_s* x, struct zx_cb_DeleteItem_s* y);
void zx_cb_Delete_PUSH_Extension(struct zx_cb_Delete_s* x, struct zx_cb_Extension_s* y);

void zx_cb_Delete_PUT_id(struct zx_cb_Delete_s* x, struct zx_str* y);

void zx_cb_Delete_PUT_ResourceID(struct zx_cb_Delete_s* x, int n, struct zx_cb_ResourceID_s* y);
void zx_cb_Delete_PUT_EncryptedResourceID(struct zx_cb_Delete_s* x, int n, struct zx_cb_EncryptedResourceID_s* y);
void zx_cb_Delete_PUT_DeleteItem(struct zx_cb_Delete_s* x, int n, struct zx_cb_DeleteItem_s* y);
void zx_cb_Delete_PUT_Extension(struct zx_cb_Delete_s* x, int n, struct zx_cb_Extension_s* y);

void zx_cb_Delete_ADD_ResourceID(struct zx_cb_Delete_s* x, int n, struct zx_cb_ResourceID_s* z);
void zx_cb_Delete_ADD_EncryptedResourceID(struct zx_cb_Delete_s* x, int n, struct zx_cb_EncryptedResourceID_s* z);
void zx_cb_Delete_ADD_DeleteItem(struct zx_cb_Delete_s* x, int n, struct zx_cb_DeleteItem_s* z);
void zx_cb_Delete_ADD_Extension(struct zx_cb_Delete_s* x, int n, struct zx_cb_Extension_s* z);

void zx_cb_Delete_DEL_ResourceID(struct zx_cb_Delete_s* x, int n);
void zx_cb_Delete_DEL_EncryptedResourceID(struct zx_cb_Delete_s* x, int n);
void zx_cb_Delete_DEL_DeleteItem(struct zx_cb_Delete_s* x, int n);
void zx_cb_Delete_DEL_Extension(struct zx_cb_Delete_s* x, int n);

void zx_cb_Delete_REV_ResourceID(struct zx_cb_Delete_s* x);
void zx_cb_Delete_REV_EncryptedResourceID(struct zx_cb_Delete_s* x);
void zx_cb_Delete_REV_DeleteItem(struct zx_cb_Delete_s* x);
void zx_cb_Delete_REV_Extension(struct zx_cb_Delete_s* x);

#endif
/* -------------------------- cb_DeleteItem -------------------------- */
/* refby( zx_cb_Delete_s ) */
#ifndef zx_cb_DeleteItem_EXT
#define zx_cb_DeleteItem_EXT
#endif

struct zx_cb_DeleteItem_s* zx_DEC_cb_DeleteItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_DeleteItem_s* zx_NEW_cb_DeleteItem(struct zx_ctx* c);
void zx_FREE_cb_DeleteItem(struct zx_ctx* c, struct zx_cb_DeleteItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_DeleteItem_s* zx_DEEP_CLONE_cb_DeleteItem(struct zx_ctx* c, struct zx_cb_DeleteItem_s* x, int dup_strs);
void zx_DUP_STRS_cb_DeleteItem(struct zx_ctx* c, struct zx_cb_DeleteItem_s* x);
int zx_WALK_SO_cb_DeleteItem(struct zx_ctx* c, struct zx_cb_DeleteItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_DeleteItem(struct zx_ctx* c, struct zx_cb_DeleteItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_DeleteItem(struct zx_ctx* c, struct zx_cb_DeleteItem_s* x);
int zx_LEN_WO_cb_DeleteItem(struct zx_ctx* c, struct zx_cb_DeleteItem_s* x);
char* zx_ENC_SO_cb_DeleteItem(struct zx_ctx* c, struct zx_cb_DeleteItem_s* x, char* p);
char* zx_ENC_WO_cb_DeleteItem(struct zx_ctx* c, struct zx_cb_DeleteItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_DeleteItem(struct zx_ctx* c, struct zx_cb_DeleteItem_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_DeleteItem(struct zx_ctx* c, struct zx_cb_DeleteItem_s* x);

struct zx_cb_DeleteItem_s {
  ZX_ELEM_EXT
  zx_cb_DeleteItem_EXT
  struct zx_elem_s* Select;	/* {0,1} SelectType */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* itemID;	/* {0,1} attribute xs:string */
  struct zx_str* notChangedSince;	/* {0,1} attribute xs:dateTime */
  struct zx_str* objectType;	/* {0,1} attribute xs:NCName */
  struct zx_str* predefined;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_DeleteItem_GET_id(struct zx_cb_DeleteItem_s* x);
struct zx_str* zx_cb_DeleteItem_GET_itemID(struct zx_cb_DeleteItem_s* x);
struct zx_str* zx_cb_DeleteItem_GET_notChangedSince(struct zx_cb_DeleteItem_s* x);
struct zx_str* zx_cb_DeleteItem_GET_objectType(struct zx_cb_DeleteItem_s* x);
struct zx_str* zx_cb_DeleteItem_GET_predefined(struct zx_cb_DeleteItem_s* x);

struct zx_elem_s* zx_cb_DeleteItem_GET_Select(struct zx_cb_DeleteItem_s* x, int n);

int zx_cb_DeleteItem_NUM_Select(struct zx_cb_DeleteItem_s* x);

struct zx_elem_s* zx_cb_DeleteItem_POP_Select(struct zx_cb_DeleteItem_s* x);

void zx_cb_DeleteItem_PUSH_Select(struct zx_cb_DeleteItem_s* x, struct zx_elem_s* y);

void zx_cb_DeleteItem_PUT_id(struct zx_cb_DeleteItem_s* x, struct zx_str* y);
void zx_cb_DeleteItem_PUT_itemID(struct zx_cb_DeleteItem_s* x, struct zx_str* y);
void zx_cb_DeleteItem_PUT_notChangedSince(struct zx_cb_DeleteItem_s* x, struct zx_str* y);
void zx_cb_DeleteItem_PUT_objectType(struct zx_cb_DeleteItem_s* x, struct zx_str* y);
void zx_cb_DeleteItem_PUT_predefined(struct zx_cb_DeleteItem_s* x, struct zx_str* y);

void zx_cb_DeleteItem_PUT_Select(struct zx_cb_DeleteItem_s* x, int n, struct zx_elem_s* y);

void zx_cb_DeleteItem_ADD_Select(struct zx_cb_DeleteItem_s* x, int n, struct zx_elem_s* z);

void zx_cb_DeleteItem_DEL_Select(struct zx_cb_DeleteItem_s* x, int n);

void zx_cb_DeleteItem_REV_Select(struct zx_cb_DeleteItem_s* x);

#endif
/* -------------------------- cb_DeleteResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_cb_DeleteResponse_EXT
#define zx_cb_DeleteResponse_EXT
#endif

struct zx_cb_DeleteResponse_s* zx_DEC_cb_DeleteResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_DeleteResponse_s* zx_NEW_cb_DeleteResponse(struct zx_ctx* c);
void zx_FREE_cb_DeleteResponse(struct zx_ctx* c, struct zx_cb_DeleteResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_DeleteResponse_s* zx_DEEP_CLONE_cb_DeleteResponse(struct zx_ctx* c, struct zx_cb_DeleteResponse_s* x, int dup_strs);
void zx_DUP_STRS_cb_DeleteResponse(struct zx_ctx* c, struct zx_cb_DeleteResponse_s* x);
int zx_WALK_SO_cb_DeleteResponse(struct zx_ctx* c, struct zx_cb_DeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_DeleteResponse(struct zx_ctx* c, struct zx_cb_DeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_DeleteResponse(struct zx_ctx* c, struct zx_cb_DeleteResponse_s* x);
int zx_LEN_WO_cb_DeleteResponse(struct zx_ctx* c, struct zx_cb_DeleteResponse_s* x);
char* zx_ENC_SO_cb_DeleteResponse(struct zx_ctx* c, struct zx_cb_DeleteResponse_s* x, char* p);
char* zx_ENC_WO_cb_DeleteResponse(struct zx_ctx* c, struct zx_cb_DeleteResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_DeleteResponse(struct zx_ctx* c, struct zx_cb_DeleteResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_DeleteResponse(struct zx_ctx* c, struct zx_cb_DeleteResponse_s* x);

struct zx_cb_DeleteResponse_s {
  ZX_ELEM_EXT
  zx_cb_DeleteResponse_EXT
  struct zx_cb_Status_s* Status;	/* {1,1} nada */
  struct zx_cb_Extension_s* Extension;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_DeleteResponse_GET_id(struct zx_cb_DeleteResponse_s* x);

struct zx_cb_Status_s* zx_cb_DeleteResponse_GET_Status(struct zx_cb_DeleteResponse_s* x, int n);
struct zx_cb_Extension_s* zx_cb_DeleteResponse_GET_Extension(struct zx_cb_DeleteResponse_s* x, int n);

int zx_cb_DeleteResponse_NUM_Status(struct zx_cb_DeleteResponse_s* x);
int zx_cb_DeleteResponse_NUM_Extension(struct zx_cb_DeleteResponse_s* x);

struct zx_cb_Status_s* zx_cb_DeleteResponse_POP_Status(struct zx_cb_DeleteResponse_s* x);
struct zx_cb_Extension_s* zx_cb_DeleteResponse_POP_Extension(struct zx_cb_DeleteResponse_s* x);

void zx_cb_DeleteResponse_PUSH_Status(struct zx_cb_DeleteResponse_s* x, struct zx_cb_Status_s* y);
void zx_cb_DeleteResponse_PUSH_Extension(struct zx_cb_DeleteResponse_s* x, struct zx_cb_Extension_s* y);

void zx_cb_DeleteResponse_PUT_id(struct zx_cb_DeleteResponse_s* x, struct zx_str* y);

void zx_cb_DeleteResponse_PUT_Status(struct zx_cb_DeleteResponse_s* x, int n, struct zx_cb_Status_s* y);
void zx_cb_DeleteResponse_PUT_Extension(struct zx_cb_DeleteResponse_s* x, int n, struct zx_cb_Extension_s* y);

void zx_cb_DeleteResponse_ADD_Status(struct zx_cb_DeleteResponse_s* x, int n, struct zx_cb_Status_s* z);
void zx_cb_DeleteResponse_ADD_Extension(struct zx_cb_DeleteResponse_s* x, int n, struct zx_cb_Extension_s* z);

void zx_cb_DeleteResponse_DEL_Status(struct zx_cb_DeleteResponse_s* x, int n);
void zx_cb_DeleteResponse_DEL_Extension(struct zx_cb_DeleteResponse_s* x, int n);

void zx_cb_DeleteResponse_REV_Status(struct zx_cb_DeleteResponse_s* x);
void zx_cb_DeleteResponse_REV_Extension(struct zx_cb_DeleteResponse_s* x);

#endif
/* -------------------------- cb_EncryptedResourceID -------------------------- */
/* refby( zx_cb_ReportUsage_s zx_cb_Query_s zx_cb_Modify_s zx_cb_Create_s zx_cb_Delete_s ) */
#ifndef zx_cb_EncryptedResourceID_EXT
#define zx_cb_EncryptedResourceID_EXT
#endif

struct zx_cb_EncryptedResourceID_s* zx_DEC_cb_EncryptedResourceID(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_EncryptedResourceID_s* zx_NEW_cb_EncryptedResourceID(struct zx_ctx* c);
void zx_FREE_cb_EncryptedResourceID(struct zx_ctx* c, struct zx_cb_EncryptedResourceID_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_EncryptedResourceID_s* zx_DEEP_CLONE_cb_EncryptedResourceID(struct zx_ctx* c, struct zx_cb_EncryptedResourceID_s* x, int dup_strs);
void zx_DUP_STRS_cb_EncryptedResourceID(struct zx_ctx* c, struct zx_cb_EncryptedResourceID_s* x);
int zx_WALK_SO_cb_EncryptedResourceID(struct zx_ctx* c, struct zx_cb_EncryptedResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_EncryptedResourceID(struct zx_ctx* c, struct zx_cb_EncryptedResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_EncryptedResourceID(struct zx_ctx* c, struct zx_cb_EncryptedResourceID_s* x);
int zx_LEN_WO_cb_EncryptedResourceID(struct zx_ctx* c, struct zx_cb_EncryptedResourceID_s* x);
char* zx_ENC_SO_cb_EncryptedResourceID(struct zx_ctx* c, struct zx_cb_EncryptedResourceID_s* x, char* p);
char* zx_ENC_WO_cb_EncryptedResourceID(struct zx_ctx* c, struct zx_cb_EncryptedResourceID_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_EncryptedResourceID(struct zx_ctx* c, struct zx_cb_EncryptedResourceID_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_EncryptedResourceID(struct zx_ctx* c, struct zx_cb_EncryptedResourceID_s* x);

struct zx_cb_EncryptedResourceID_s {
  ZX_ELEM_EXT
  zx_cb_EncryptedResourceID_EXT
  struct zx_xenc_EncryptedData_s* EncryptedData;	/* {1,1} nada */
  struct zx_xenc_EncryptedKey_s* EncryptedKey;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_xenc_EncryptedData_s* zx_cb_EncryptedResourceID_GET_EncryptedData(struct zx_cb_EncryptedResourceID_s* x, int n);
struct zx_xenc_EncryptedKey_s* zx_cb_EncryptedResourceID_GET_EncryptedKey(struct zx_cb_EncryptedResourceID_s* x, int n);

int zx_cb_EncryptedResourceID_NUM_EncryptedData(struct zx_cb_EncryptedResourceID_s* x);
int zx_cb_EncryptedResourceID_NUM_EncryptedKey(struct zx_cb_EncryptedResourceID_s* x);

struct zx_xenc_EncryptedData_s* zx_cb_EncryptedResourceID_POP_EncryptedData(struct zx_cb_EncryptedResourceID_s* x);
struct zx_xenc_EncryptedKey_s* zx_cb_EncryptedResourceID_POP_EncryptedKey(struct zx_cb_EncryptedResourceID_s* x);

void zx_cb_EncryptedResourceID_PUSH_EncryptedData(struct zx_cb_EncryptedResourceID_s* x, struct zx_xenc_EncryptedData_s* y);
void zx_cb_EncryptedResourceID_PUSH_EncryptedKey(struct zx_cb_EncryptedResourceID_s* x, struct zx_xenc_EncryptedKey_s* y);


void zx_cb_EncryptedResourceID_PUT_EncryptedData(struct zx_cb_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedData_s* y);
void zx_cb_EncryptedResourceID_PUT_EncryptedKey(struct zx_cb_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedKey_s* y);

void zx_cb_EncryptedResourceID_ADD_EncryptedData(struct zx_cb_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedData_s* z);
void zx_cb_EncryptedResourceID_ADD_EncryptedKey(struct zx_cb_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedKey_s* z);

void zx_cb_EncryptedResourceID_DEL_EncryptedData(struct zx_cb_EncryptedResourceID_s* x, int n);
void zx_cb_EncryptedResourceID_DEL_EncryptedKey(struct zx_cb_EncryptedResourceID_s* x, int n);

void zx_cb_EncryptedResourceID_REV_EncryptedData(struct zx_cb_EncryptedResourceID_s* x);
void zx_cb_EncryptedResourceID_REV_EncryptedKey(struct zx_cb_EncryptedResourceID_s* x);

#endif
/* -------------------------- cb_Extension -------------------------- */
/* refby( zx_cb_ModifyResponse_s zx_cb_NotifyResponse_s zx_cdm_vCard_s zx_cb_Query_s zx_cb_DeleteResponse_s zx_cb_Modify_s zx_cb_Create_s zx_cb_CreateResponse_s zx_cb_Delete_s zx_cb_QueryResponse_s zx_cb_Subscription_s zx_cb_Notify_s ) */
#ifndef zx_cb_Extension_EXT
#define zx_cb_Extension_EXT
#endif

struct zx_cb_Extension_s* zx_DEC_cb_Extension(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_Extension_s* zx_NEW_cb_Extension(struct zx_ctx* c);
void zx_FREE_cb_Extension(struct zx_ctx* c, struct zx_cb_Extension_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_Extension_s* zx_DEEP_CLONE_cb_Extension(struct zx_ctx* c, struct zx_cb_Extension_s* x, int dup_strs);
void zx_DUP_STRS_cb_Extension(struct zx_ctx* c, struct zx_cb_Extension_s* x);
int zx_WALK_SO_cb_Extension(struct zx_ctx* c, struct zx_cb_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_Extension(struct zx_ctx* c, struct zx_cb_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_Extension(struct zx_ctx* c, struct zx_cb_Extension_s* x);
int zx_LEN_WO_cb_Extension(struct zx_ctx* c, struct zx_cb_Extension_s* x);
char* zx_ENC_SO_cb_Extension(struct zx_ctx* c, struct zx_cb_Extension_s* x, char* p);
char* zx_ENC_WO_cb_Extension(struct zx_ctx* c, struct zx_cb_Extension_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_Extension(struct zx_ctx* c, struct zx_cb_Extension_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_Extension(struct zx_ctx* c, struct zx_cb_Extension_s* x);

struct zx_cb_Extension_s {
  ZX_ELEM_EXT
  zx_cb_Extension_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- cb_ItemData -------------------------- */
/* refby( zx_cb_ModifyResponse_s zx_cb_CreateResponse_s zx_cb_Notification_s ) */
#ifndef zx_cb_ItemData_EXT
#define zx_cb_ItemData_EXT
#endif

struct zx_cb_ItemData_s* zx_DEC_cb_ItemData(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_ItemData_s* zx_NEW_cb_ItemData(struct zx_ctx* c);
void zx_FREE_cb_ItemData(struct zx_ctx* c, struct zx_cb_ItemData_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_ItemData_s* zx_DEEP_CLONE_cb_ItemData(struct zx_ctx* c, struct zx_cb_ItemData_s* x, int dup_strs);
void zx_DUP_STRS_cb_ItemData(struct zx_ctx* c, struct zx_cb_ItemData_s* x);
int zx_WALK_SO_cb_ItemData(struct zx_ctx* c, struct zx_cb_ItemData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_ItemData(struct zx_ctx* c, struct zx_cb_ItemData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_ItemData(struct zx_ctx* c, struct zx_cb_ItemData_s* x);
int zx_LEN_WO_cb_ItemData(struct zx_ctx* c, struct zx_cb_ItemData_s* x);
char* zx_ENC_SO_cb_ItemData(struct zx_ctx* c, struct zx_cb_ItemData_s* x, char* p);
char* zx_ENC_WO_cb_ItemData(struct zx_ctx* c, struct zx_cb_ItemData_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_ItemData(struct zx_ctx* c, struct zx_cb_ItemData_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_ItemData(struct zx_ctx* c, struct zx_cb_ItemData_s* x);

struct zx_cb_ItemData_s {
  ZX_ELEM_EXT
  zx_cb_ItemData_EXT
  struct zx_elem_s* Card;	/* {0,-1} cb:CardType */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* itemIDRef;	/* {0,1} attribute xs:string */
  struct zx_str* notSorted;	/* {0,1} attribute Now */
  struct zx_str* changeFormat;	/* {0,1} attribute ChangedElements */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_ItemData_GET_id(struct zx_cb_ItemData_s* x);
struct zx_str* zx_cb_ItemData_GET_itemIDRef(struct zx_cb_ItemData_s* x);
struct zx_str* zx_cb_ItemData_GET_notSorted(struct zx_cb_ItemData_s* x);
struct zx_str* zx_cb_ItemData_GET_changeFormat(struct zx_cb_ItemData_s* x);

struct zx_elem_s* zx_cb_ItemData_GET_Card(struct zx_cb_ItemData_s* x, int n);

int zx_cb_ItemData_NUM_Card(struct zx_cb_ItemData_s* x);

struct zx_elem_s* zx_cb_ItemData_POP_Card(struct zx_cb_ItemData_s* x);

void zx_cb_ItemData_PUSH_Card(struct zx_cb_ItemData_s* x, struct zx_elem_s* y);

void zx_cb_ItemData_PUT_id(struct zx_cb_ItemData_s* x, struct zx_str* y);
void zx_cb_ItemData_PUT_itemIDRef(struct zx_cb_ItemData_s* x, struct zx_str* y);
void zx_cb_ItemData_PUT_notSorted(struct zx_cb_ItemData_s* x, struct zx_str* y);
void zx_cb_ItemData_PUT_changeFormat(struct zx_cb_ItemData_s* x, struct zx_str* y);

void zx_cb_ItemData_PUT_Card(struct zx_cb_ItemData_s* x, int n, struct zx_elem_s* y);

void zx_cb_ItemData_ADD_Card(struct zx_cb_ItemData_s* x, int n, struct zx_elem_s* z);

void zx_cb_ItemData_DEL_Card(struct zx_cb_ItemData_s* x, int n);

void zx_cb_ItemData_REV_Card(struct zx_cb_ItemData_s* x);

#endif
/* -------------------------- cb_ItemSelection -------------------------- */
/* refby( zx_cb_Modify_s zx_cb_Create_s zx_cb_Subscription_s ) */
#ifndef zx_cb_ItemSelection_EXT
#define zx_cb_ItemSelection_EXT
#endif

struct zx_cb_ItemSelection_s* zx_DEC_cb_ItemSelection(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_ItemSelection_s* zx_NEW_cb_ItemSelection(struct zx_ctx* c);
void zx_FREE_cb_ItemSelection(struct zx_ctx* c, struct zx_cb_ItemSelection_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_ItemSelection_s* zx_DEEP_CLONE_cb_ItemSelection(struct zx_ctx* c, struct zx_cb_ItemSelection_s* x, int dup_strs);
void zx_DUP_STRS_cb_ItemSelection(struct zx_ctx* c, struct zx_cb_ItemSelection_s* x);
int zx_WALK_SO_cb_ItemSelection(struct zx_ctx* c, struct zx_cb_ItemSelection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_ItemSelection(struct zx_ctx* c, struct zx_cb_ItemSelection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_ItemSelection(struct zx_ctx* c, struct zx_cb_ItemSelection_s* x);
int zx_LEN_WO_cb_ItemSelection(struct zx_ctx* c, struct zx_cb_ItemSelection_s* x);
char* zx_ENC_SO_cb_ItemSelection(struct zx_ctx* c, struct zx_cb_ItemSelection_s* x, char* p);
char* zx_ENC_WO_cb_ItemSelection(struct zx_ctx* c, struct zx_cb_ItemSelection_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_ItemSelection(struct zx_ctx* c, struct zx_cb_ItemSelection_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_ItemSelection(struct zx_ctx* c, struct zx_cb_ItemSelection_s* x);

struct zx_cb_ItemSelection_s {
  ZX_ELEM_EXT
  zx_cb_ItemSelection_EXT
  struct zx_str* format;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_ItemSelection_GET_format(struct zx_cb_ItemSelection_s* x);





void zx_cb_ItemSelection_PUT_format(struct zx_cb_ItemSelection_s* x, struct zx_str* y);





#endif
/* -------------------------- cb_Modification -------------------------- */
/* refby( zx_cb_Modify_s ) */
#ifndef zx_cb_Modification_EXT
#define zx_cb_Modification_EXT
#endif

struct zx_cb_Modification_s* zx_DEC_cb_Modification(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_Modification_s* zx_NEW_cb_Modification(struct zx_ctx* c);
void zx_FREE_cb_Modification(struct zx_ctx* c, struct zx_cb_Modification_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_Modification_s* zx_DEEP_CLONE_cb_Modification(struct zx_ctx* c, struct zx_cb_Modification_s* x, int dup_strs);
void zx_DUP_STRS_cb_Modification(struct zx_ctx* c, struct zx_cb_Modification_s* x);
int zx_WALK_SO_cb_Modification(struct zx_ctx* c, struct zx_cb_Modification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_Modification(struct zx_ctx* c, struct zx_cb_Modification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_Modification(struct zx_ctx* c, struct zx_cb_Modification_s* x);
int zx_LEN_WO_cb_Modification(struct zx_ctx* c, struct zx_cb_Modification_s* x);
char* zx_ENC_SO_cb_Modification(struct zx_ctx* c, struct zx_cb_Modification_s* x, char* p);
char* zx_ENC_WO_cb_Modification(struct zx_ctx* c, struct zx_cb_Modification_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_Modification(struct zx_ctx* c, struct zx_cb_Modification_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_Modification(struct zx_ctx* c, struct zx_cb_Modification_s* x);

struct zx_cb_Modification_s {
  ZX_ELEM_EXT
  zx_cb_Modification_EXT
  struct zx_elem_s* Select;	/* {0,1} SelectType */
  struct zx_cb_NewData_s* NewData;	/* {0,1}  */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* itemID;	/* {0,1} attribute xs:string */
  struct zx_str* notChangedSince;	/* {0,1} attribute xs:dateTime */
  struct zx_str* objectType;	/* {0,1} attribute xs:NCName */
  struct zx_str* overrideAllowed;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_Modification_GET_id(struct zx_cb_Modification_s* x);
struct zx_str* zx_cb_Modification_GET_itemID(struct zx_cb_Modification_s* x);
struct zx_str* zx_cb_Modification_GET_notChangedSince(struct zx_cb_Modification_s* x);
struct zx_str* zx_cb_Modification_GET_objectType(struct zx_cb_Modification_s* x);
struct zx_str* zx_cb_Modification_GET_overrideAllowed(struct zx_cb_Modification_s* x);

struct zx_elem_s* zx_cb_Modification_GET_Select(struct zx_cb_Modification_s* x, int n);
struct zx_cb_NewData_s* zx_cb_Modification_GET_NewData(struct zx_cb_Modification_s* x, int n);

int zx_cb_Modification_NUM_Select(struct zx_cb_Modification_s* x);
int zx_cb_Modification_NUM_NewData(struct zx_cb_Modification_s* x);

struct zx_elem_s* zx_cb_Modification_POP_Select(struct zx_cb_Modification_s* x);
struct zx_cb_NewData_s* zx_cb_Modification_POP_NewData(struct zx_cb_Modification_s* x);

void zx_cb_Modification_PUSH_Select(struct zx_cb_Modification_s* x, struct zx_elem_s* y);
void zx_cb_Modification_PUSH_NewData(struct zx_cb_Modification_s* x, struct zx_cb_NewData_s* y);

void zx_cb_Modification_PUT_id(struct zx_cb_Modification_s* x, struct zx_str* y);
void zx_cb_Modification_PUT_itemID(struct zx_cb_Modification_s* x, struct zx_str* y);
void zx_cb_Modification_PUT_notChangedSince(struct zx_cb_Modification_s* x, struct zx_str* y);
void zx_cb_Modification_PUT_objectType(struct zx_cb_Modification_s* x, struct zx_str* y);
void zx_cb_Modification_PUT_overrideAllowed(struct zx_cb_Modification_s* x, struct zx_str* y);

void zx_cb_Modification_PUT_Select(struct zx_cb_Modification_s* x, int n, struct zx_elem_s* y);
void zx_cb_Modification_PUT_NewData(struct zx_cb_Modification_s* x, int n, struct zx_cb_NewData_s* y);

void zx_cb_Modification_ADD_Select(struct zx_cb_Modification_s* x, int n, struct zx_elem_s* z);
void zx_cb_Modification_ADD_NewData(struct zx_cb_Modification_s* x, int n, struct zx_cb_NewData_s* z);

void zx_cb_Modification_DEL_Select(struct zx_cb_Modification_s* x, int n);
void zx_cb_Modification_DEL_NewData(struct zx_cb_Modification_s* x, int n);

void zx_cb_Modification_REV_Select(struct zx_cb_Modification_s* x);
void zx_cb_Modification_REV_NewData(struct zx_cb_Modification_s* x);

#endif
/* -------------------------- cb_Modify -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_cb_Modify_EXT
#define zx_cb_Modify_EXT
#endif

struct zx_cb_Modify_s* zx_DEC_cb_Modify(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_Modify_s* zx_NEW_cb_Modify(struct zx_ctx* c);
void zx_FREE_cb_Modify(struct zx_ctx* c, struct zx_cb_Modify_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_Modify_s* zx_DEEP_CLONE_cb_Modify(struct zx_ctx* c, struct zx_cb_Modify_s* x, int dup_strs);
void zx_DUP_STRS_cb_Modify(struct zx_ctx* c, struct zx_cb_Modify_s* x);
int zx_WALK_SO_cb_Modify(struct zx_ctx* c, struct zx_cb_Modify_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_Modify(struct zx_ctx* c, struct zx_cb_Modify_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_Modify(struct zx_ctx* c, struct zx_cb_Modify_s* x);
int zx_LEN_WO_cb_Modify(struct zx_ctx* c, struct zx_cb_Modify_s* x);
char* zx_ENC_SO_cb_Modify(struct zx_ctx* c, struct zx_cb_Modify_s* x, char* p);
char* zx_ENC_WO_cb_Modify(struct zx_ctx* c, struct zx_cb_Modify_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_Modify(struct zx_ctx* c, struct zx_cb_Modify_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_Modify(struct zx_ctx* c, struct zx_cb_Modify_s* x);

struct zx_cb_Modify_s {
  ZX_ELEM_EXT
  zx_cb_Modify_EXT
  struct zx_cb_ResourceID_s* ResourceID;	/* {0,1} nada */
  struct zx_cb_EncryptedResourceID_s* EncryptedResourceID;	/* {0,1} nada */
  struct zx_cb_Subscription_s* Subscription;	/* {0,-1} nada */
  struct zx_cb_Modification_s* Modification;	/* {1,-1}  */
  struct zx_cb_ItemSelection_s* ItemSelection;	/* {0,-1} nada */
  struct zx_cb_Extension_s* Extension;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_Modify_GET_id(struct zx_cb_Modify_s* x);

struct zx_cb_ResourceID_s* zx_cb_Modify_GET_ResourceID(struct zx_cb_Modify_s* x, int n);
struct zx_cb_EncryptedResourceID_s* zx_cb_Modify_GET_EncryptedResourceID(struct zx_cb_Modify_s* x, int n);
struct zx_cb_Subscription_s* zx_cb_Modify_GET_Subscription(struct zx_cb_Modify_s* x, int n);
struct zx_cb_Modification_s* zx_cb_Modify_GET_Modification(struct zx_cb_Modify_s* x, int n);
struct zx_cb_ItemSelection_s* zx_cb_Modify_GET_ItemSelection(struct zx_cb_Modify_s* x, int n);
struct zx_cb_Extension_s* zx_cb_Modify_GET_Extension(struct zx_cb_Modify_s* x, int n);

int zx_cb_Modify_NUM_ResourceID(struct zx_cb_Modify_s* x);
int zx_cb_Modify_NUM_EncryptedResourceID(struct zx_cb_Modify_s* x);
int zx_cb_Modify_NUM_Subscription(struct zx_cb_Modify_s* x);
int zx_cb_Modify_NUM_Modification(struct zx_cb_Modify_s* x);
int zx_cb_Modify_NUM_ItemSelection(struct zx_cb_Modify_s* x);
int zx_cb_Modify_NUM_Extension(struct zx_cb_Modify_s* x);

struct zx_cb_ResourceID_s* zx_cb_Modify_POP_ResourceID(struct zx_cb_Modify_s* x);
struct zx_cb_EncryptedResourceID_s* zx_cb_Modify_POP_EncryptedResourceID(struct zx_cb_Modify_s* x);
struct zx_cb_Subscription_s* zx_cb_Modify_POP_Subscription(struct zx_cb_Modify_s* x);
struct zx_cb_Modification_s* zx_cb_Modify_POP_Modification(struct zx_cb_Modify_s* x);
struct zx_cb_ItemSelection_s* zx_cb_Modify_POP_ItemSelection(struct zx_cb_Modify_s* x);
struct zx_cb_Extension_s* zx_cb_Modify_POP_Extension(struct zx_cb_Modify_s* x);

void zx_cb_Modify_PUSH_ResourceID(struct zx_cb_Modify_s* x, struct zx_cb_ResourceID_s* y);
void zx_cb_Modify_PUSH_EncryptedResourceID(struct zx_cb_Modify_s* x, struct zx_cb_EncryptedResourceID_s* y);
void zx_cb_Modify_PUSH_Subscription(struct zx_cb_Modify_s* x, struct zx_cb_Subscription_s* y);
void zx_cb_Modify_PUSH_Modification(struct zx_cb_Modify_s* x, struct zx_cb_Modification_s* y);
void zx_cb_Modify_PUSH_ItemSelection(struct zx_cb_Modify_s* x, struct zx_cb_ItemSelection_s* y);
void zx_cb_Modify_PUSH_Extension(struct zx_cb_Modify_s* x, struct zx_cb_Extension_s* y);

void zx_cb_Modify_PUT_id(struct zx_cb_Modify_s* x, struct zx_str* y);

void zx_cb_Modify_PUT_ResourceID(struct zx_cb_Modify_s* x, int n, struct zx_cb_ResourceID_s* y);
void zx_cb_Modify_PUT_EncryptedResourceID(struct zx_cb_Modify_s* x, int n, struct zx_cb_EncryptedResourceID_s* y);
void zx_cb_Modify_PUT_Subscription(struct zx_cb_Modify_s* x, int n, struct zx_cb_Subscription_s* y);
void zx_cb_Modify_PUT_Modification(struct zx_cb_Modify_s* x, int n, struct zx_cb_Modification_s* y);
void zx_cb_Modify_PUT_ItemSelection(struct zx_cb_Modify_s* x, int n, struct zx_cb_ItemSelection_s* y);
void zx_cb_Modify_PUT_Extension(struct zx_cb_Modify_s* x, int n, struct zx_cb_Extension_s* y);

void zx_cb_Modify_ADD_ResourceID(struct zx_cb_Modify_s* x, int n, struct zx_cb_ResourceID_s* z);
void zx_cb_Modify_ADD_EncryptedResourceID(struct zx_cb_Modify_s* x, int n, struct zx_cb_EncryptedResourceID_s* z);
void zx_cb_Modify_ADD_Subscription(struct zx_cb_Modify_s* x, int n, struct zx_cb_Subscription_s* z);
void zx_cb_Modify_ADD_Modification(struct zx_cb_Modify_s* x, int n, struct zx_cb_Modification_s* z);
void zx_cb_Modify_ADD_ItemSelection(struct zx_cb_Modify_s* x, int n, struct zx_cb_ItemSelection_s* z);
void zx_cb_Modify_ADD_Extension(struct zx_cb_Modify_s* x, int n, struct zx_cb_Extension_s* z);

void zx_cb_Modify_DEL_ResourceID(struct zx_cb_Modify_s* x, int n);
void zx_cb_Modify_DEL_EncryptedResourceID(struct zx_cb_Modify_s* x, int n);
void zx_cb_Modify_DEL_Subscription(struct zx_cb_Modify_s* x, int n);
void zx_cb_Modify_DEL_Modification(struct zx_cb_Modify_s* x, int n);
void zx_cb_Modify_DEL_ItemSelection(struct zx_cb_Modify_s* x, int n);
void zx_cb_Modify_DEL_Extension(struct zx_cb_Modify_s* x, int n);

void zx_cb_Modify_REV_ResourceID(struct zx_cb_Modify_s* x);
void zx_cb_Modify_REV_EncryptedResourceID(struct zx_cb_Modify_s* x);
void zx_cb_Modify_REV_Subscription(struct zx_cb_Modify_s* x);
void zx_cb_Modify_REV_Modification(struct zx_cb_Modify_s* x);
void zx_cb_Modify_REV_ItemSelection(struct zx_cb_Modify_s* x);
void zx_cb_Modify_REV_Extension(struct zx_cb_Modify_s* x);

#endif
/* -------------------------- cb_ModifyResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_cb_ModifyResponse_EXT
#define zx_cb_ModifyResponse_EXT
#endif

struct zx_cb_ModifyResponse_s* zx_DEC_cb_ModifyResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_ModifyResponse_s* zx_NEW_cb_ModifyResponse(struct zx_ctx* c);
void zx_FREE_cb_ModifyResponse(struct zx_ctx* c, struct zx_cb_ModifyResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_ModifyResponse_s* zx_DEEP_CLONE_cb_ModifyResponse(struct zx_ctx* c, struct zx_cb_ModifyResponse_s* x, int dup_strs);
void zx_DUP_STRS_cb_ModifyResponse(struct zx_ctx* c, struct zx_cb_ModifyResponse_s* x);
int zx_WALK_SO_cb_ModifyResponse(struct zx_ctx* c, struct zx_cb_ModifyResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_ModifyResponse(struct zx_ctx* c, struct zx_cb_ModifyResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_ModifyResponse(struct zx_ctx* c, struct zx_cb_ModifyResponse_s* x);
int zx_LEN_WO_cb_ModifyResponse(struct zx_ctx* c, struct zx_cb_ModifyResponse_s* x);
char* zx_ENC_SO_cb_ModifyResponse(struct zx_ctx* c, struct zx_cb_ModifyResponse_s* x, char* p);
char* zx_ENC_WO_cb_ModifyResponse(struct zx_ctx* c, struct zx_cb_ModifyResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_ModifyResponse(struct zx_ctx* c, struct zx_cb_ModifyResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_ModifyResponse(struct zx_ctx* c, struct zx_cb_ModifyResponse_s* x);

struct zx_cb_ModifyResponse_s {
  ZX_ELEM_EXT
  zx_cb_ModifyResponse_EXT
  struct zx_cb_Status_s* Status;	/* {1,1} nada */
  struct zx_cb_ItemData_s* ItemData;	/* {0,-1} nada */
  struct zx_cb_Extension_s* Extension;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* timeStamp;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_ModifyResponse_GET_id(struct zx_cb_ModifyResponse_s* x);
struct zx_str* zx_cb_ModifyResponse_GET_timeStamp(struct zx_cb_ModifyResponse_s* x);

struct zx_cb_Status_s* zx_cb_ModifyResponse_GET_Status(struct zx_cb_ModifyResponse_s* x, int n);
struct zx_cb_ItemData_s* zx_cb_ModifyResponse_GET_ItemData(struct zx_cb_ModifyResponse_s* x, int n);
struct zx_cb_Extension_s* zx_cb_ModifyResponse_GET_Extension(struct zx_cb_ModifyResponse_s* x, int n);

int zx_cb_ModifyResponse_NUM_Status(struct zx_cb_ModifyResponse_s* x);
int zx_cb_ModifyResponse_NUM_ItemData(struct zx_cb_ModifyResponse_s* x);
int zx_cb_ModifyResponse_NUM_Extension(struct zx_cb_ModifyResponse_s* x);

struct zx_cb_Status_s* zx_cb_ModifyResponse_POP_Status(struct zx_cb_ModifyResponse_s* x);
struct zx_cb_ItemData_s* zx_cb_ModifyResponse_POP_ItemData(struct zx_cb_ModifyResponse_s* x);
struct zx_cb_Extension_s* zx_cb_ModifyResponse_POP_Extension(struct zx_cb_ModifyResponse_s* x);

void zx_cb_ModifyResponse_PUSH_Status(struct zx_cb_ModifyResponse_s* x, struct zx_cb_Status_s* y);
void zx_cb_ModifyResponse_PUSH_ItemData(struct zx_cb_ModifyResponse_s* x, struct zx_cb_ItemData_s* y);
void zx_cb_ModifyResponse_PUSH_Extension(struct zx_cb_ModifyResponse_s* x, struct zx_cb_Extension_s* y);

void zx_cb_ModifyResponse_PUT_id(struct zx_cb_ModifyResponse_s* x, struct zx_str* y);
void zx_cb_ModifyResponse_PUT_timeStamp(struct zx_cb_ModifyResponse_s* x, struct zx_str* y);

void zx_cb_ModifyResponse_PUT_Status(struct zx_cb_ModifyResponse_s* x, int n, struct zx_cb_Status_s* y);
void zx_cb_ModifyResponse_PUT_ItemData(struct zx_cb_ModifyResponse_s* x, int n, struct zx_cb_ItemData_s* y);
void zx_cb_ModifyResponse_PUT_Extension(struct zx_cb_ModifyResponse_s* x, int n, struct zx_cb_Extension_s* y);

void zx_cb_ModifyResponse_ADD_Status(struct zx_cb_ModifyResponse_s* x, int n, struct zx_cb_Status_s* z);
void zx_cb_ModifyResponse_ADD_ItemData(struct zx_cb_ModifyResponse_s* x, int n, struct zx_cb_ItemData_s* z);
void zx_cb_ModifyResponse_ADD_Extension(struct zx_cb_ModifyResponse_s* x, int n, struct zx_cb_Extension_s* z);

void zx_cb_ModifyResponse_DEL_Status(struct zx_cb_ModifyResponse_s* x, int n);
void zx_cb_ModifyResponse_DEL_ItemData(struct zx_cb_ModifyResponse_s* x, int n);
void zx_cb_ModifyResponse_DEL_Extension(struct zx_cb_ModifyResponse_s* x, int n);

void zx_cb_ModifyResponse_REV_Status(struct zx_cb_ModifyResponse_s* x);
void zx_cb_ModifyResponse_REV_ItemData(struct zx_cb_ModifyResponse_s* x);
void zx_cb_ModifyResponse_REV_Extension(struct zx_cb_ModifyResponse_s* x);

#endif
/* -------------------------- cb_NewData -------------------------- */
/* refby( zx_cb_Modification_s zx_cb_CreateItem_s ) */
#ifndef zx_cb_NewData_EXT
#define zx_cb_NewData_EXT
#endif

struct zx_cb_NewData_s* zx_DEC_cb_NewData(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_NewData_s* zx_NEW_cb_NewData(struct zx_ctx* c);
void zx_FREE_cb_NewData(struct zx_ctx* c, struct zx_cb_NewData_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_NewData_s* zx_DEEP_CLONE_cb_NewData(struct zx_ctx* c, struct zx_cb_NewData_s* x, int dup_strs);
void zx_DUP_STRS_cb_NewData(struct zx_ctx* c, struct zx_cb_NewData_s* x);
int zx_WALK_SO_cb_NewData(struct zx_ctx* c, struct zx_cb_NewData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_NewData(struct zx_ctx* c, struct zx_cb_NewData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_NewData(struct zx_ctx* c, struct zx_cb_NewData_s* x);
int zx_LEN_WO_cb_NewData(struct zx_ctx* c, struct zx_cb_NewData_s* x);
char* zx_ENC_SO_cb_NewData(struct zx_ctx* c, struct zx_cb_NewData_s* x, char* p);
char* zx_ENC_WO_cb_NewData(struct zx_ctx* c, struct zx_cb_NewData_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_NewData(struct zx_ctx* c, struct zx_cb_NewData_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_NewData(struct zx_ctx* c, struct zx_cb_NewData_s* x);

struct zx_cb_NewData_s {
  ZX_ELEM_EXT
  zx_cb_NewData_EXT
  struct zx_elem_s* Card;	/* {0,-1} cb:CardType */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_cb_NewData_GET_Card(struct zx_cb_NewData_s* x, int n);

int zx_cb_NewData_NUM_Card(struct zx_cb_NewData_s* x);

struct zx_elem_s* zx_cb_NewData_POP_Card(struct zx_cb_NewData_s* x);

void zx_cb_NewData_PUSH_Card(struct zx_cb_NewData_s* x, struct zx_elem_s* y);


void zx_cb_NewData_PUT_Card(struct zx_cb_NewData_s* x, int n, struct zx_elem_s* y);

void zx_cb_NewData_ADD_Card(struct zx_cb_NewData_s* x, int n, struct zx_elem_s* z);

void zx_cb_NewData_DEL_Card(struct zx_cb_NewData_s* x, int n);

void zx_cb_NewData_REV_Card(struct zx_cb_NewData_s* x);

#endif
/* -------------------------- cb_Notification -------------------------- */
/* refby( zx_cb_Notify_s ) */
#ifndef zx_cb_Notification_EXT
#define zx_cb_Notification_EXT
#endif

struct zx_cb_Notification_s* zx_DEC_cb_Notification(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_Notification_s* zx_NEW_cb_Notification(struct zx_ctx* c);
void zx_FREE_cb_Notification(struct zx_ctx* c, struct zx_cb_Notification_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_Notification_s* zx_DEEP_CLONE_cb_Notification(struct zx_ctx* c, struct zx_cb_Notification_s* x, int dup_strs);
void zx_DUP_STRS_cb_Notification(struct zx_ctx* c, struct zx_cb_Notification_s* x);
int zx_WALK_SO_cb_Notification(struct zx_ctx* c, struct zx_cb_Notification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_Notification(struct zx_ctx* c, struct zx_cb_Notification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_Notification(struct zx_ctx* c, struct zx_cb_Notification_s* x);
int zx_LEN_WO_cb_Notification(struct zx_ctx* c, struct zx_cb_Notification_s* x);
char* zx_ENC_SO_cb_Notification(struct zx_ctx* c, struct zx_cb_Notification_s* x, char* p);
char* zx_ENC_WO_cb_Notification(struct zx_ctx* c, struct zx_cb_Notification_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_Notification(struct zx_ctx* c, struct zx_cb_Notification_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_Notification(struct zx_ctx* c, struct zx_cb_Notification_s* x);

struct zx_cb_Notification_s {
  ZX_ELEM_EXT
  zx_cb_Notification_EXT
  struct zx_cb_ItemData_s* ItemData;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* subscriptionID;	/* {1,1} attribute xs:string */
  struct zx_str* expires;	/* {0,1} attribute xs:dateTime */
  struct zx_str* endReason;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_Notification_GET_id(struct zx_cb_Notification_s* x);
struct zx_str* zx_cb_Notification_GET_subscriptionID(struct zx_cb_Notification_s* x);
struct zx_str* zx_cb_Notification_GET_expires(struct zx_cb_Notification_s* x);
struct zx_str* zx_cb_Notification_GET_endReason(struct zx_cb_Notification_s* x);

struct zx_cb_ItemData_s* zx_cb_Notification_GET_ItemData(struct zx_cb_Notification_s* x, int n);

int zx_cb_Notification_NUM_ItemData(struct zx_cb_Notification_s* x);

struct zx_cb_ItemData_s* zx_cb_Notification_POP_ItemData(struct zx_cb_Notification_s* x);

void zx_cb_Notification_PUSH_ItemData(struct zx_cb_Notification_s* x, struct zx_cb_ItemData_s* y);

void zx_cb_Notification_PUT_id(struct zx_cb_Notification_s* x, struct zx_str* y);
void zx_cb_Notification_PUT_subscriptionID(struct zx_cb_Notification_s* x, struct zx_str* y);
void zx_cb_Notification_PUT_expires(struct zx_cb_Notification_s* x, struct zx_str* y);
void zx_cb_Notification_PUT_endReason(struct zx_cb_Notification_s* x, struct zx_str* y);

void zx_cb_Notification_PUT_ItemData(struct zx_cb_Notification_s* x, int n, struct zx_cb_ItemData_s* y);

void zx_cb_Notification_ADD_ItemData(struct zx_cb_Notification_s* x, int n, struct zx_cb_ItemData_s* z);

void zx_cb_Notification_DEL_ItemData(struct zx_cb_Notification_s* x, int n);

void zx_cb_Notification_REV_ItemData(struct zx_cb_Notification_s* x);

#endif
/* -------------------------- cb_Notify -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_cb_Notify_EXT
#define zx_cb_Notify_EXT
#endif

struct zx_cb_Notify_s* zx_DEC_cb_Notify(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_Notify_s* zx_NEW_cb_Notify(struct zx_ctx* c);
void zx_FREE_cb_Notify(struct zx_ctx* c, struct zx_cb_Notify_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_Notify_s* zx_DEEP_CLONE_cb_Notify(struct zx_ctx* c, struct zx_cb_Notify_s* x, int dup_strs);
void zx_DUP_STRS_cb_Notify(struct zx_ctx* c, struct zx_cb_Notify_s* x);
int zx_WALK_SO_cb_Notify(struct zx_ctx* c, struct zx_cb_Notify_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_Notify(struct zx_ctx* c, struct zx_cb_Notify_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_Notify(struct zx_ctx* c, struct zx_cb_Notify_s* x);
int zx_LEN_WO_cb_Notify(struct zx_ctx* c, struct zx_cb_Notify_s* x);
char* zx_ENC_SO_cb_Notify(struct zx_ctx* c, struct zx_cb_Notify_s* x, char* p);
char* zx_ENC_WO_cb_Notify(struct zx_ctx* c, struct zx_cb_Notify_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_Notify(struct zx_ctx* c, struct zx_cb_Notify_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_Notify(struct zx_ctx* c, struct zx_cb_Notify_s* x);

struct zx_cb_Notify_s {
  ZX_ELEM_EXT
  zx_cb_Notify_EXT
  struct zx_cb_Notification_s* Notification;	/* {0,-1} nada */
  struct zx_cb_Extension_s* Extension;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* timeStamp;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_Notify_GET_id(struct zx_cb_Notify_s* x);
struct zx_str* zx_cb_Notify_GET_timeStamp(struct zx_cb_Notify_s* x);

struct zx_cb_Notification_s* zx_cb_Notify_GET_Notification(struct zx_cb_Notify_s* x, int n);
struct zx_cb_Extension_s* zx_cb_Notify_GET_Extension(struct zx_cb_Notify_s* x, int n);

int zx_cb_Notify_NUM_Notification(struct zx_cb_Notify_s* x);
int zx_cb_Notify_NUM_Extension(struct zx_cb_Notify_s* x);

struct zx_cb_Notification_s* zx_cb_Notify_POP_Notification(struct zx_cb_Notify_s* x);
struct zx_cb_Extension_s* zx_cb_Notify_POP_Extension(struct zx_cb_Notify_s* x);

void zx_cb_Notify_PUSH_Notification(struct zx_cb_Notify_s* x, struct zx_cb_Notification_s* y);
void zx_cb_Notify_PUSH_Extension(struct zx_cb_Notify_s* x, struct zx_cb_Extension_s* y);

void zx_cb_Notify_PUT_id(struct zx_cb_Notify_s* x, struct zx_str* y);
void zx_cb_Notify_PUT_timeStamp(struct zx_cb_Notify_s* x, struct zx_str* y);

void zx_cb_Notify_PUT_Notification(struct zx_cb_Notify_s* x, int n, struct zx_cb_Notification_s* y);
void zx_cb_Notify_PUT_Extension(struct zx_cb_Notify_s* x, int n, struct zx_cb_Extension_s* y);

void zx_cb_Notify_ADD_Notification(struct zx_cb_Notify_s* x, int n, struct zx_cb_Notification_s* z);
void zx_cb_Notify_ADD_Extension(struct zx_cb_Notify_s* x, int n, struct zx_cb_Extension_s* z);

void zx_cb_Notify_DEL_Notification(struct zx_cb_Notify_s* x, int n);
void zx_cb_Notify_DEL_Extension(struct zx_cb_Notify_s* x, int n);

void zx_cb_Notify_REV_Notification(struct zx_cb_Notify_s* x);
void zx_cb_Notify_REV_Extension(struct zx_cb_Notify_s* x);

#endif
/* -------------------------- cb_NotifyAdminTo -------------------------- */
/* refby( zx_cb_Subscription_s ) */
#ifndef zx_cb_NotifyAdminTo_EXT
#define zx_cb_NotifyAdminTo_EXT
#endif

struct zx_cb_NotifyAdminTo_s* zx_DEC_cb_NotifyAdminTo(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_NotifyAdminTo_s* zx_NEW_cb_NotifyAdminTo(struct zx_ctx* c);
void zx_FREE_cb_NotifyAdminTo(struct zx_ctx* c, struct zx_cb_NotifyAdminTo_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_NotifyAdminTo_s* zx_DEEP_CLONE_cb_NotifyAdminTo(struct zx_ctx* c, struct zx_cb_NotifyAdminTo_s* x, int dup_strs);
void zx_DUP_STRS_cb_NotifyAdminTo(struct zx_ctx* c, struct zx_cb_NotifyAdminTo_s* x);
int zx_WALK_SO_cb_NotifyAdminTo(struct zx_ctx* c, struct zx_cb_NotifyAdminTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_NotifyAdminTo(struct zx_ctx* c, struct zx_cb_NotifyAdminTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_NotifyAdminTo(struct zx_ctx* c, struct zx_cb_NotifyAdminTo_s* x);
int zx_LEN_WO_cb_NotifyAdminTo(struct zx_ctx* c, struct zx_cb_NotifyAdminTo_s* x);
char* zx_ENC_SO_cb_NotifyAdminTo(struct zx_ctx* c, struct zx_cb_NotifyAdminTo_s* x, char* p);
char* zx_ENC_WO_cb_NotifyAdminTo(struct zx_ctx* c, struct zx_cb_NotifyAdminTo_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_NotifyAdminTo(struct zx_ctx* c, struct zx_cb_NotifyAdminTo_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_NotifyAdminTo(struct zx_ctx* c, struct zx_cb_NotifyAdminTo_s* x);

struct zx_cb_NotifyAdminTo_s {
  ZX_ELEM_EXT
  zx_cb_NotifyAdminTo_EXT
  struct zx_elem_s* SecurityMechID;	/* {0,-1} xs:anyURI */
  struct zx_cb_Credential_s* Credential;	/* {0,-1}  */
  struct zx_elem_s* Endpoint;	/* {0,1} xs:anyURI */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_NotifyAdminTo_GET_id(struct zx_cb_NotifyAdminTo_s* x);

struct zx_elem_s* zx_cb_NotifyAdminTo_GET_SecurityMechID(struct zx_cb_NotifyAdminTo_s* x, int n);
struct zx_cb_Credential_s* zx_cb_NotifyAdminTo_GET_Credential(struct zx_cb_NotifyAdminTo_s* x, int n);
struct zx_elem_s* zx_cb_NotifyAdminTo_GET_Endpoint(struct zx_cb_NotifyAdminTo_s* x, int n);

int zx_cb_NotifyAdminTo_NUM_SecurityMechID(struct zx_cb_NotifyAdminTo_s* x);
int zx_cb_NotifyAdminTo_NUM_Credential(struct zx_cb_NotifyAdminTo_s* x);
int zx_cb_NotifyAdminTo_NUM_Endpoint(struct zx_cb_NotifyAdminTo_s* x);

struct zx_elem_s* zx_cb_NotifyAdminTo_POP_SecurityMechID(struct zx_cb_NotifyAdminTo_s* x);
struct zx_cb_Credential_s* zx_cb_NotifyAdminTo_POP_Credential(struct zx_cb_NotifyAdminTo_s* x);
struct zx_elem_s* zx_cb_NotifyAdminTo_POP_Endpoint(struct zx_cb_NotifyAdminTo_s* x);

void zx_cb_NotifyAdminTo_PUSH_SecurityMechID(struct zx_cb_NotifyAdminTo_s* x, struct zx_elem_s* y);
void zx_cb_NotifyAdminTo_PUSH_Credential(struct zx_cb_NotifyAdminTo_s* x, struct zx_cb_Credential_s* y);
void zx_cb_NotifyAdminTo_PUSH_Endpoint(struct zx_cb_NotifyAdminTo_s* x, struct zx_elem_s* y);

void zx_cb_NotifyAdminTo_PUT_id(struct zx_cb_NotifyAdminTo_s* x, struct zx_str* y);

void zx_cb_NotifyAdminTo_PUT_SecurityMechID(struct zx_cb_NotifyAdminTo_s* x, int n, struct zx_elem_s* y);
void zx_cb_NotifyAdminTo_PUT_Credential(struct zx_cb_NotifyAdminTo_s* x, int n, struct zx_cb_Credential_s* y);
void zx_cb_NotifyAdminTo_PUT_Endpoint(struct zx_cb_NotifyAdminTo_s* x, int n, struct zx_elem_s* y);

void zx_cb_NotifyAdminTo_ADD_SecurityMechID(struct zx_cb_NotifyAdminTo_s* x, int n, struct zx_elem_s* z);
void zx_cb_NotifyAdminTo_ADD_Credential(struct zx_cb_NotifyAdminTo_s* x, int n, struct zx_cb_Credential_s* z);
void zx_cb_NotifyAdminTo_ADD_Endpoint(struct zx_cb_NotifyAdminTo_s* x, int n, struct zx_elem_s* z);

void zx_cb_NotifyAdminTo_DEL_SecurityMechID(struct zx_cb_NotifyAdminTo_s* x, int n);
void zx_cb_NotifyAdminTo_DEL_Credential(struct zx_cb_NotifyAdminTo_s* x, int n);
void zx_cb_NotifyAdminTo_DEL_Endpoint(struct zx_cb_NotifyAdminTo_s* x, int n);

void zx_cb_NotifyAdminTo_REV_SecurityMechID(struct zx_cb_NotifyAdminTo_s* x);
void zx_cb_NotifyAdminTo_REV_Credential(struct zx_cb_NotifyAdminTo_s* x);
void zx_cb_NotifyAdminTo_REV_Endpoint(struct zx_cb_NotifyAdminTo_s* x);

#endif
/* -------------------------- cb_NotifyResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_cb_NotifyResponse_EXT
#define zx_cb_NotifyResponse_EXT
#endif

struct zx_cb_NotifyResponse_s* zx_DEC_cb_NotifyResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_NotifyResponse_s* zx_NEW_cb_NotifyResponse(struct zx_ctx* c);
void zx_FREE_cb_NotifyResponse(struct zx_ctx* c, struct zx_cb_NotifyResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_NotifyResponse_s* zx_DEEP_CLONE_cb_NotifyResponse(struct zx_ctx* c, struct zx_cb_NotifyResponse_s* x, int dup_strs);
void zx_DUP_STRS_cb_NotifyResponse(struct zx_ctx* c, struct zx_cb_NotifyResponse_s* x);
int zx_WALK_SO_cb_NotifyResponse(struct zx_ctx* c, struct zx_cb_NotifyResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_NotifyResponse(struct zx_ctx* c, struct zx_cb_NotifyResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_NotifyResponse(struct zx_ctx* c, struct zx_cb_NotifyResponse_s* x);
int zx_LEN_WO_cb_NotifyResponse(struct zx_ctx* c, struct zx_cb_NotifyResponse_s* x);
char* zx_ENC_SO_cb_NotifyResponse(struct zx_ctx* c, struct zx_cb_NotifyResponse_s* x, char* p);
char* zx_ENC_WO_cb_NotifyResponse(struct zx_ctx* c, struct zx_cb_NotifyResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_NotifyResponse(struct zx_ctx* c, struct zx_cb_NotifyResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_NotifyResponse(struct zx_ctx* c, struct zx_cb_NotifyResponse_s* x);

struct zx_cb_NotifyResponse_s {
  ZX_ELEM_EXT
  zx_cb_NotifyResponse_EXT
  struct zx_cb_Status_s* Status;	/* {1,1} nada */
  struct zx_cb_Extension_s* Extension;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_NotifyResponse_GET_id(struct zx_cb_NotifyResponse_s* x);

struct zx_cb_Status_s* zx_cb_NotifyResponse_GET_Status(struct zx_cb_NotifyResponse_s* x, int n);
struct zx_cb_Extension_s* zx_cb_NotifyResponse_GET_Extension(struct zx_cb_NotifyResponse_s* x, int n);

int zx_cb_NotifyResponse_NUM_Status(struct zx_cb_NotifyResponse_s* x);
int zx_cb_NotifyResponse_NUM_Extension(struct zx_cb_NotifyResponse_s* x);

struct zx_cb_Status_s* zx_cb_NotifyResponse_POP_Status(struct zx_cb_NotifyResponse_s* x);
struct zx_cb_Extension_s* zx_cb_NotifyResponse_POP_Extension(struct zx_cb_NotifyResponse_s* x);

void zx_cb_NotifyResponse_PUSH_Status(struct zx_cb_NotifyResponse_s* x, struct zx_cb_Status_s* y);
void zx_cb_NotifyResponse_PUSH_Extension(struct zx_cb_NotifyResponse_s* x, struct zx_cb_Extension_s* y);

void zx_cb_NotifyResponse_PUT_id(struct zx_cb_NotifyResponse_s* x, struct zx_str* y);

void zx_cb_NotifyResponse_PUT_Status(struct zx_cb_NotifyResponse_s* x, int n, struct zx_cb_Status_s* y);
void zx_cb_NotifyResponse_PUT_Extension(struct zx_cb_NotifyResponse_s* x, int n, struct zx_cb_Extension_s* y);

void zx_cb_NotifyResponse_ADD_Status(struct zx_cb_NotifyResponse_s* x, int n, struct zx_cb_Status_s* z);
void zx_cb_NotifyResponse_ADD_Extension(struct zx_cb_NotifyResponse_s* x, int n, struct zx_cb_Extension_s* z);

void zx_cb_NotifyResponse_DEL_Status(struct zx_cb_NotifyResponse_s* x, int n);
void zx_cb_NotifyResponse_DEL_Extension(struct zx_cb_NotifyResponse_s* x, int n);

void zx_cb_NotifyResponse_REV_Status(struct zx_cb_NotifyResponse_s* x);
void zx_cb_NotifyResponse_REV_Extension(struct zx_cb_NotifyResponse_s* x);

#endif
/* -------------------------- cb_NotifyTo -------------------------- */
/* refby( zx_cb_Subscription_s ) */
#ifndef zx_cb_NotifyTo_EXT
#define zx_cb_NotifyTo_EXT
#endif

struct zx_cb_NotifyTo_s* zx_DEC_cb_NotifyTo(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_NotifyTo_s* zx_NEW_cb_NotifyTo(struct zx_ctx* c);
void zx_FREE_cb_NotifyTo(struct zx_ctx* c, struct zx_cb_NotifyTo_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_NotifyTo_s* zx_DEEP_CLONE_cb_NotifyTo(struct zx_ctx* c, struct zx_cb_NotifyTo_s* x, int dup_strs);
void zx_DUP_STRS_cb_NotifyTo(struct zx_ctx* c, struct zx_cb_NotifyTo_s* x);
int zx_WALK_SO_cb_NotifyTo(struct zx_ctx* c, struct zx_cb_NotifyTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_NotifyTo(struct zx_ctx* c, struct zx_cb_NotifyTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_NotifyTo(struct zx_ctx* c, struct zx_cb_NotifyTo_s* x);
int zx_LEN_WO_cb_NotifyTo(struct zx_ctx* c, struct zx_cb_NotifyTo_s* x);
char* zx_ENC_SO_cb_NotifyTo(struct zx_ctx* c, struct zx_cb_NotifyTo_s* x, char* p);
char* zx_ENC_WO_cb_NotifyTo(struct zx_ctx* c, struct zx_cb_NotifyTo_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_NotifyTo(struct zx_ctx* c, struct zx_cb_NotifyTo_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_NotifyTo(struct zx_ctx* c, struct zx_cb_NotifyTo_s* x);

struct zx_cb_NotifyTo_s {
  ZX_ELEM_EXT
  zx_cb_NotifyTo_EXT
  struct zx_elem_s* SecurityMechID;	/* {0,-1} xs:anyURI */
  struct zx_cb_Credential_s* Credential;	/* {0,-1}  */
  struct zx_elem_s* Endpoint;	/* {0,1} xs:anyURI */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_NotifyTo_GET_id(struct zx_cb_NotifyTo_s* x);

struct zx_elem_s* zx_cb_NotifyTo_GET_SecurityMechID(struct zx_cb_NotifyTo_s* x, int n);
struct zx_cb_Credential_s* zx_cb_NotifyTo_GET_Credential(struct zx_cb_NotifyTo_s* x, int n);
struct zx_elem_s* zx_cb_NotifyTo_GET_Endpoint(struct zx_cb_NotifyTo_s* x, int n);

int zx_cb_NotifyTo_NUM_SecurityMechID(struct zx_cb_NotifyTo_s* x);
int zx_cb_NotifyTo_NUM_Credential(struct zx_cb_NotifyTo_s* x);
int zx_cb_NotifyTo_NUM_Endpoint(struct zx_cb_NotifyTo_s* x);

struct zx_elem_s* zx_cb_NotifyTo_POP_SecurityMechID(struct zx_cb_NotifyTo_s* x);
struct zx_cb_Credential_s* zx_cb_NotifyTo_POP_Credential(struct zx_cb_NotifyTo_s* x);
struct zx_elem_s* zx_cb_NotifyTo_POP_Endpoint(struct zx_cb_NotifyTo_s* x);

void zx_cb_NotifyTo_PUSH_SecurityMechID(struct zx_cb_NotifyTo_s* x, struct zx_elem_s* y);
void zx_cb_NotifyTo_PUSH_Credential(struct zx_cb_NotifyTo_s* x, struct zx_cb_Credential_s* y);
void zx_cb_NotifyTo_PUSH_Endpoint(struct zx_cb_NotifyTo_s* x, struct zx_elem_s* y);

void zx_cb_NotifyTo_PUT_id(struct zx_cb_NotifyTo_s* x, struct zx_str* y);

void zx_cb_NotifyTo_PUT_SecurityMechID(struct zx_cb_NotifyTo_s* x, int n, struct zx_elem_s* y);
void zx_cb_NotifyTo_PUT_Credential(struct zx_cb_NotifyTo_s* x, int n, struct zx_cb_Credential_s* y);
void zx_cb_NotifyTo_PUT_Endpoint(struct zx_cb_NotifyTo_s* x, int n, struct zx_elem_s* y);

void zx_cb_NotifyTo_ADD_SecurityMechID(struct zx_cb_NotifyTo_s* x, int n, struct zx_elem_s* z);
void zx_cb_NotifyTo_ADD_Credential(struct zx_cb_NotifyTo_s* x, int n, struct zx_cb_Credential_s* z);
void zx_cb_NotifyTo_ADD_Endpoint(struct zx_cb_NotifyTo_s* x, int n, struct zx_elem_s* z);

void zx_cb_NotifyTo_DEL_SecurityMechID(struct zx_cb_NotifyTo_s* x, int n);
void zx_cb_NotifyTo_DEL_Credential(struct zx_cb_NotifyTo_s* x, int n);
void zx_cb_NotifyTo_DEL_Endpoint(struct zx_cb_NotifyTo_s* x, int n);

void zx_cb_NotifyTo_REV_SecurityMechID(struct zx_cb_NotifyTo_s* x);
void zx_cb_NotifyTo_REV_Credential(struct zx_cb_NotifyTo_s* x);
void zx_cb_NotifyTo_REV_Endpoint(struct zx_cb_NotifyTo_s* x);

#endif
/* -------------------------- cb_Query -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_cb_Query_EXT
#define zx_cb_Query_EXT
#endif

struct zx_cb_Query_s* zx_DEC_cb_Query(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_Query_s* zx_NEW_cb_Query(struct zx_ctx* c);
void zx_FREE_cb_Query(struct zx_ctx* c, struct zx_cb_Query_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_Query_s* zx_DEEP_CLONE_cb_Query(struct zx_ctx* c, struct zx_cb_Query_s* x, int dup_strs);
void zx_DUP_STRS_cb_Query(struct zx_ctx* c, struct zx_cb_Query_s* x);
int zx_WALK_SO_cb_Query(struct zx_ctx* c, struct zx_cb_Query_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_Query(struct zx_ctx* c, struct zx_cb_Query_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_Query(struct zx_ctx* c, struct zx_cb_Query_s* x);
int zx_LEN_WO_cb_Query(struct zx_ctx* c, struct zx_cb_Query_s* x);
char* zx_ENC_SO_cb_Query(struct zx_ctx* c, struct zx_cb_Query_s* x, char* p);
char* zx_ENC_WO_cb_Query(struct zx_ctx* c, struct zx_cb_Query_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_Query(struct zx_ctx* c, struct zx_cb_Query_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_Query(struct zx_ctx* c, struct zx_cb_Query_s* x);

struct zx_cb_Query_s {
  ZX_ELEM_EXT
  zx_cb_Query_EXT
  struct zx_cb_ResourceID_s* ResourceID;	/* {0,1} nada */
  struct zx_cb_EncryptedResourceID_s* EncryptedResourceID;	/* {0,1} nada */
  struct zx_cb_Subscription_s* Subscription;	/* {0,-1} nada */
  struct zx_cb_QueryItem_s* QueryItem;	/* {0,-1}  */
  struct zx_cb_Extension_s* Extension;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_Query_GET_id(struct zx_cb_Query_s* x);

struct zx_cb_ResourceID_s* zx_cb_Query_GET_ResourceID(struct zx_cb_Query_s* x, int n);
struct zx_cb_EncryptedResourceID_s* zx_cb_Query_GET_EncryptedResourceID(struct zx_cb_Query_s* x, int n);
struct zx_cb_Subscription_s* zx_cb_Query_GET_Subscription(struct zx_cb_Query_s* x, int n);
struct zx_cb_QueryItem_s* zx_cb_Query_GET_QueryItem(struct zx_cb_Query_s* x, int n);
struct zx_cb_Extension_s* zx_cb_Query_GET_Extension(struct zx_cb_Query_s* x, int n);

int zx_cb_Query_NUM_ResourceID(struct zx_cb_Query_s* x);
int zx_cb_Query_NUM_EncryptedResourceID(struct zx_cb_Query_s* x);
int zx_cb_Query_NUM_Subscription(struct zx_cb_Query_s* x);
int zx_cb_Query_NUM_QueryItem(struct zx_cb_Query_s* x);
int zx_cb_Query_NUM_Extension(struct zx_cb_Query_s* x);

struct zx_cb_ResourceID_s* zx_cb_Query_POP_ResourceID(struct zx_cb_Query_s* x);
struct zx_cb_EncryptedResourceID_s* zx_cb_Query_POP_EncryptedResourceID(struct zx_cb_Query_s* x);
struct zx_cb_Subscription_s* zx_cb_Query_POP_Subscription(struct zx_cb_Query_s* x);
struct zx_cb_QueryItem_s* zx_cb_Query_POP_QueryItem(struct zx_cb_Query_s* x);
struct zx_cb_Extension_s* zx_cb_Query_POP_Extension(struct zx_cb_Query_s* x);

void zx_cb_Query_PUSH_ResourceID(struct zx_cb_Query_s* x, struct zx_cb_ResourceID_s* y);
void zx_cb_Query_PUSH_EncryptedResourceID(struct zx_cb_Query_s* x, struct zx_cb_EncryptedResourceID_s* y);
void zx_cb_Query_PUSH_Subscription(struct zx_cb_Query_s* x, struct zx_cb_Subscription_s* y);
void zx_cb_Query_PUSH_QueryItem(struct zx_cb_Query_s* x, struct zx_cb_QueryItem_s* y);
void zx_cb_Query_PUSH_Extension(struct zx_cb_Query_s* x, struct zx_cb_Extension_s* y);

void zx_cb_Query_PUT_id(struct zx_cb_Query_s* x, struct zx_str* y);

void zx_cb_Query_PUT_ResourceID(struct zx_cb_Query_s* x, int n, struct zx_cb_ResourceID_s* y);
void zx_cb_Query_PUT_EncryptedResourceID(struct zx_cb_Query_s* x, int n, struct zx_cb_EncryptedResourceID_s* y);
void zx_cb_Query_PUT_Subscription(struct zx_cb_Query_s* x, int n, struct zx_cb_Subscription_s* y);
void zx_cb_Query_PUT_QueryItem(struct zx_cb_Query_s* x, int n, struct zx_cb_QueryItem_s* y);
void zx_cb_Query_PUT_Extension(struct zx_cb_Query_s* x, int n, struct zx_cb_Extension_s* y);

void zx_cb_Query_ADD_ResourceID(struct zx_cb_Query_s* x, int n, struct zx_cb_ResourceID_s* z);
void zx_cb_Query_ADD_EncryptedResourceID(struct zx_cb_Query_s* x, int n, struct zx_cb_EncryptedResourceID_s* z);
void zx_cb_Query_ADD_Subscription(struct zx_cb_Query_s* x, int n, struct zx_cb_Subscription_s* z);
void zx_cb_Query_ADD_QueryItem(struct zx_cb_Query_s* x, int n, struct zx_cb_QueryItem_s* z);
void zx_cb_Query_ADD_Extension(struct zx_cb_Query_s* x, int n, struct zx_cb_Extension_s* z);

void zx_cb_Query_DEL_ResourceID(struct zx_cb_Query_s* x, int n);
void zx_cb_Query_DEL_EncryptedResourceID(struct zx_cb_Query_s* x, int n);
void zx_cb_Query_DEL_Subscription(struct zx_cb_Query_s* x, int n);
void zx_cb_Query_DEL_QueryItem(struct zx_cb_Query_s* x, int n);
void zx_cb_Query_DEL_Extension(struct zx_cb_Query_s* x, int n);

void zx_cb_Query_REV_ResourceID(struct zx_cb_Query_s* x);
void zx_cb_Query_REV_EncryptedResourceID(struct zx_cb_Query_s* x);
void zx_cb_Query_REV_Subscription(struct zx_cb_Query_s* x);
void zx_cb_Query_REV_QueryItem(struct zx_cb_Query_s* x);
void zx_cb_Query_REV_Extension(struct zx_cb_Query_s* x);

#endif
/* -------------------------- cb_QueryItem -------------------------- */
/* refby( zx_cb_Query_s ) */
#ifndef zx_cb_QueryItem_EXT
#define zx_cb_QueryItem_EXT
#endif

struct zx_cb_QueryItem_s* zx_DEC_cb_QueryItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_QueryItem_s* zx_NEW_cb_QueryItem(struct zx_ctx* c);
void zx_FREE_cb_QueryItem(struct zx_ctx* c, struct zx_cb_QueryItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_QueryItem_s* zx_DEEP_CLONE_cb_QueryItem(struct zx_ctx* c, struct zx_cb_QueryItem_s* x, int dup_strs);
void zx_DUP_STRS_cb_QueryItem(struct zx_ctx* c, struct zx_cb_QueryItem_s* x);
int zx_WALK_SO_cb_QueryItem(struct zx_ctx* c, struct zx_cb_QueryItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_QueryItem(struct zx_ctx* c, struct zx_cb_QueryItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_QueryItem(struct zx_ctx* c, struct zx_cb_QueryItem_s* x);
int zx_LEN_WO_cb_QueryItem(struct zx_ctx* c, struct zx_cb_QueryItem_s* x);
char* zx_ENC_SO_cb_QueryItem(struct zx_ctx* c, struct zx_cb_QueryItem_s* x, char* p);
char* zx_ENC_WO_cb_QueryItem(struct zx_ctx* c, struct zx_cb_QueryItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_QueryItem(struct zx_ctx* c, struct zx_cb_QueryItem_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_QueryItem(struct zx_ctx* c, struct zx_cb_QueryItem_s* x);

struct zx_cb_QueryItem_s {
  ZX_ELEM_EXT
  zx_cb_QueryItem_EXT
  struct zx_str* count;	/* {0,1} attribute xs:nonNegativeInteger */
  struct zx_str* offset;	/* {0,1} attribute xs:integer */
  struct zx_str* setID;	/* {0,1} attribute xs:string */
  struct zx_str* setReq;	/* {0,1} attribute Static */
  struct zx_str* format;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_QueryItem_GET_count(struct zx_cb_QueryItem_s* x);
struct zx_str* zx_cb_QueryItem_GET_offset(struct zx_cb_QueryItem_s* x);
struct zx_str* zx_cb_QueryItem_GET_setID(struct zx_cb_QueryItem_s* x);
struct zx_str* zx_cb_QueryItem_GET_setReq(struct zx_cb_QueryItem_s* x);
struct zx_str* zx_cb_QueryItem_GET_format(struct zx_cb_QueryItem_s* x);





void zx_cb_QueryItem_PUT_count(struct zx_cb_QueryItem_s* x, struct zx_str* y);
void zx_cb_QueryItem_PUT_offset(struct zx_cb_QueryItem_s* x, struct zx_str* y);
void zx_cb_QueryItem_PUT_setID(struct zx_cb_QueryItem_s* x, struct zx_str* y);
void zx_cb_QueryItem_PUT_setReq(struct zx_cb_QueryItem_s* x, struct zx_str* y);
void zx_cb_QueryItem_PUT_format(struct zx_cb_QueryItem_s* x, struct zx_str* y);





#endif
/* -------------------------- cb_QueryResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_cb_QueryResponse_EXT
#define zx_cb_QueryResponse_EXT
#endif

struct zx_cb_QueryResponse_s* zx_DEC_cb_QueryResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_QueryResponse_s* zx_NEW_cb_QueryResponse(struct zx_ctx* c);
void zx_FREE_cb_QueryResponse(struct zx_ctx* c, struct zx_cb_QueryResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_QueryResponse_s* zx_DEEP_CLONE_cb_QueryResponse(struct zx_ctx* c, struct zx_cb_QueryResponse_s* x, int dup_strs);
void zx_DUP_STRS_cb_QueryResponse(struct zx_ctx* c, struct zx_cb_QueryResponse_s* x);
int zx_WALK_SO_cb_QueryResponse(struct zx_ctx* c, struct zx_cb_QueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_QueryResponse(struct zx_ctx* c, struct zx_cb_QueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_QueryResponse(struct zx_ctx* c, struct zx_cb_QueryResponse_s* x);
int zx_LEN_WO_cb_QueryResponse(struct zx_ctx* c, struct zx_cb_QueryResponse_s* x);
char* zx_ENC_SO_cb_QueryResponse(struct zx_ctx* c, struct zx_cb_QueryResponse_s* x, char* p);
char* zx_ENC_WO_cb_QueryResponse(struct zx_ctx* c, struct zx_cb_QueryResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_QueryResponse(struct zx_ctx* c, struct zx_cb_QueryResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_QueryResponse(struct zx_ctx* c, struct zx_cb_QueryResponse_s* x);

struct zx_cb_QueryResponse_s {
  ZX_ELEM_EXT
  zx_cb_QueryResponse_EXT
  struct zx_cb_Status_s* Status;	/* {1,1} nada */
  struct zx_cb_Data_s* Data;	/* {0,-1}  */
  struct zx_cb_Extension_s* Extension;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* itemIDRef;	/* {0,1} attribute xs:string */
  struct zx_str* timeStamp;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_QueryResponse_GET_id(struct zx_cb_QueryResponse_s* x);
struct zx_str* zx_cb_QueryResponse_GET_itemIDRef(struct zx_cb_QueryResponse_s* x);
struct zx_str* zx_cb_QueryResponse_GET_timeStamp(struct zx_cb_QueryResponse_s* x);

struct zx_cb_Status_s* zx_cb_QueryResponse_GET_Status(struct zx_cb_QueryResponse_s* x, int n);
struct zx_cb_Data_s* zx_cb_QueryResponse_GET_Data(struct zx_cb_QueryResponse_s* x, int n);
struct zx_cb_Extension_s* zx_cb_QueryResponse_GET_Extension(struct zx_cb_QueryResponse_s* x, int n);

int zx_cb_QueryResponse_NUM_Status(struct zx_cb_QueryResponse_s* x);
int zx_cb_QueryResponse_NUM_Data(struct zx_cb_QueryResponse_s* x);
int zx_cb_QueryResponse_NUM_Extension(struct zx_cb_QueryResponse_s* x);

struct zx_cb_Status_s* zx_cb_QueryResponse_POP_Status(struct zx_cb_QueryResponse_s* x);
struct zx_cb_Data_s* zx_cb_QueryResponse_POP_Data(struct zx_cb_QueryResponse_s* x);
struct zx_cb_Extension_s* zx_cb_QueryResponse_POP_Extension(struct zx_cb_QueryResponse_s* x);

void zx_cb_QueryResponse_PUSH_Status(struct zx_cb_QueryResponse_s* x, struct zx_cb_Status_s* y);
void zx_cb_QueryResponse_PUSH_Data(struct zx_cb_QueryResponse_s* x, struct zx_cb_Data_s* y);
void zx_cb_QueryResponse_PUSH_Extension(struct zx_cb_QueryResponse_s* x, struct zx_cb_Extension_s* y);

void zx_cb_QueryResponse_PUT_id(struct zx_cb_QueryResponse_s* x, struct zx_str* y);
void zx_cb_QueryResponse_PUT_itemIDRef(struct zx_cb_QueryResponse_s* x, struct zx_str* y);
void zx_cb_QueryResponse_PUT_timeStamp(struct zx_cb_QueryResponse_s* x, struct zx_str* y);

void zx_cb_QueryResponse_PUT_Status(struct zx_cb_QueryResponse_s* x, int n, struct zx_cb_Status_s* y);
void zx_cb_QueryResponse_PUT_Data(struct zx_cb_QueryResponse_s* x, int n, struct zx_cb_Data_s* y);
void zx_cb_QueryResponse_PUT_Extension(struct zx_cb_QueryResponse_s* x, int n, struct zx_cb_Extension_s* y);

void zx_cb_QueryResponse_ADD_Status(struct zx_cb_QueryResponse_s* x, int n, struct zx_cb_Status_s* z);
void zx_cb_QueryResponse_ADD_Data(struct zx_cb_QueryResponse_s* x, int n, struct zx_cb_Data_s* z);
void zx_cb_QueryResponse_ADD_Extension(struct zx_cb_QueryResponse_s* x, int n, struct zx_cb_Extension_s* z);

void zx_cb_QueryResponse_DEL_Status(struct zx_cb_QueryResponse_s* x, int n);
void zx_cb_QueryResponse_DEL_Data(struct zx_cb_QueryResponse_s* x, int n);
void zx_cb_QueryResponse_DEL_Extension(struct zx_cb_QueryResponse_s* x, int n);

void zx_cb_QueryResponse_REV_Status(struct zx_cb_QueryResponse_s* x);
void zx_cb_QueryResponse_REV_Data(struct zx_cb_QueryResponse_s* x);
void zx_cb_QueryResponse_REV_Extension(struct zx_cb_QueryResponse_s* x);

#endif
/* -------------------------- cb_RefItem -------------------------- */
/* refby( zx_cb_Subscription_s ) */
#ifndef zx_cb_RefItem_EXT
#define zx_cb_RefItem_EXT
#endif

struct zx_cb_RefItem_s* zx_DEC_cb_RefItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_RefItem_s* zx_NEW_cb_RefItem(struct zx_ctx* c);
void zx_FREE_cb_RefItem(struct zx_ctx* c, struct zx_cb_RefItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_RefItem_s* zx_DEEP_CLONE_cb_RefItem(struct zx_ctx* c, struct zx_cb_RefItem_s* x, int dup_strs);
void zx_DUP_STRS_cb_RefItem(struct zx_ctx* c, struct zx_cb_RefItem_s* x);
int zx_WALK_SO_cb_RefItem(struct zx_ctx* c, struct zx_cb_RefItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_RefItem(struct zx_ctx* c, struct zx_cb_RefItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_RefItem(struct zx_ctx* c, struct zx_cb_RefItem_s* x);
int zx_LEN_WO_cb_RefItem(struct zx_ctx* c, struct zx_cb_RefItem_s* x);
char* zx_ENC_SO_cb_RefItem(struct zx_ctx* c, struct zx_cb_RefItem_s* x, char* p);
char* zx_ENC_WO_cb_RefItem(struct zx_ctx* c, struct zx_cb_RefItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_RefItem(struct zx_ctx* c, struct zx_cb_RefItem_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_RefItem(struct zx_ctx* c, struct zx_cb_RefItem_s* x);

struct zx_cb_RefItem_s {
  ZX_ELEM_EXT
  zx_cb_RefItem_EXT
  struct zx_str* subscriptionID;	/* {0,1} attribute xs:string */
  struct zx_str* ItemIDRef;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_RefItem_GET_subscriptionID(struct zx_cb_RefItem_s* x);
struct zx_str* zx_cb_RefItem_GET_ItemIDRef(struct zx_cb_RefItem_s* x);





void zx_cb_RefItem_PUT_subscriptionID(struct zx_cb_RefItem_s* x, struct zx_str* y);
void zx_cb_RefItem_PUT_ItemIDRef(struct zx_cb_RefItem_s* x, struct zx_str* y);





#endif
/* -------------------------- cb_ReportUsage -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_cb_ReportUsage_EXT
#define zx_cb_ReportUsage_EXT
#endif

struct zx_cb_ReportUsage_s* zx_DEC_cb_ReportUsage(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_ReportUsage_s* zx_NEW_cb_ReportUsage(struct zx_ctx* c);
void zx_FREE_cb_ReportUsage(struct zx_ctx* c, struct zx_cb_ReportUsage_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_ReportUsage_s* zx_DEEP_CLONE_cb_ReportUsage(struct zx_ctx* c, struct zx_cb_ReportUsage_s* x, int dup_strs);
void zx_DUP_STRS_cb_ReportUsage(struct zx_ctx* c, struct zx_cb_ReportUsage_s* x);
int zx_WALK_SO_cb_ReportUsage(struct zx_ctx* c, struct zx_cb_ReportUsage_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_ReportUsage(struct zx_ctx* c, struct zx_cb_ReportUsage_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_ReportUsage(struct zx_ctx* c, struct zx_cb_ReportUsage_s* x);
int zx_LEN_WO_cb_ReportUsage(struct zx_ctx* c, struct zx_cb_ReportUsage_s* x);
char* zx_ENC_SO_cb_ReportUsage(struct zx_ctx* c, struct zx_cb_ReportUsage_s* x, char* p);
char* zx_ENC_WO_cb_ReportUsage(struct zx_ctx* c, struct zx_cb_ReportUsage_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_ReportUsage(struct zx_ctx* c, struct zx_cb_ReportUsage_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_ReportUsage(struct zx_ctx* c, struct zx_cb_ReportUsage_s* x);

struct zx_cb_ReportUsage_s {
  ZX_ELEM_EXT
  zx_cb_ReportUsage_EXT
  struct zx_cb_ResourceID_s* ResourceID;	/* {0,1} nada */
  struct zx_cb_EncryptedResourceID_s* EncryptedResourceID;	/* {0,1} nada */
  struct zx_elem_s* CARDID;	/* {1,1} xs:anyURI */
  struct zx_cb_UsageType_s* UsageType;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_ReportUsage_GET_id(struct zx_cb_ReportUsage_s* x);

struct zx_cb_ResourceID_s* zx_cb_ReportUsage_GET_ResourceID(struct zx_cb_ReportUsage_s* x, int n);
struct zx_cb_EncryptedResourceID_s* zx_cb_ReportUsage_GET_EncryptedResourceID(struct zx_cb_ReportUsage_s* x, int n);
struct zx_elem_s* zx_cb_ReportUsage_GET_CARDID(struct zx_cb_ReportUsage_s* x, int n);
struct zx_cb_UsageType_s* zx_cb_ReportUsage_GET_UsageType(struct zx_cb_ReportUsage_s* x, int n);

int zx_cb_ReportUsage_NUM_ResourceID(struct zx_cb_ReportUsage_s* x);
int zx_cb_ReportUsage_NUM_EncryptedResourceID(struct zx_cb_ReportUsage_s* x);
int zx_cb_ReportUsage_NUM_CARDID(struct zx_cb_ReportUsage_s* x);
int zx_cb_ReportUsage_NUM_UsageType(struct zx_cb_ReportUsage_s* x);

struct zx_cb_ResourceID_s* zx_cb_ReportUsage_POP_ResourceID(struct zx_cb_ReportUsage_s* x);
struct zx_cb_EncryptedResourceID_s* zx_cb_ReportUsage_POP_EncryptedResourceID(struct zx_cb_ReportUsage_s* x);
struct zx_elem_s* zx_cb_ReportUsage_POP_CARDID(struct zx_cb_ReportUsage_s* x);
struct zx_cb_UsageType_s* zx_cb_ReportUsage_POP_UsageType(struct zx_cb_ReportUsage_s* x);

void zx_cb_ReportUsage_PUSH_ResourceID(struct zx_cb_ReportUsage_s* x, struct zx_cb_ResourceID_s* y);
void zx_cb_ReportUsage_PUSH_EncryptedResourceID(struct zx_cb_ReportUsage_s* x, struct zx_cb_EncryptedResourceID_s* y);
void zx_cb_ReportUsage_PUSH_CARDID(struct zx_cb_ReportUsage_s* x, struct zx_elem_s* y);
void zx_cb_ReportUsage_PUSH_UsageType(struct zx_cb_ReportUsage_s* x, struct zx_cb_UsageType_s* y);

void zx_cb_ReportUsage_PUT_id(struct zx_cb_ReportUsage_s* x, struct zx_str* y);

void zx_cb_ReportUsage_PUT_ResourceID(struct zx_cb_ReportUsage_s* x, int n, struct zx_cb_ResourceID_s* y);
void zx_cb_ReportUsage_PUT_EncryptedResourceID(struct zx_cb_ReportUsage_s* x, int n, struct zx_cb_EncryptedResourceID_s* y);
void zx_cb_ReportUsage_PUT_CARDID(struct zx_cb_ReportUsage_s* x, int n, struct zx_elem_s* y);
void zx_cb_ReportUsage_PUT_UsageType(struct zx_cb_ReportUsage_s* x, int n, struct zx_cb_UsageType_s* y);

void zx_cb_ReportUsage_ADD_ResourceID(struct zx_cb_ReportUsage_s* x, int n, struct zx_cb_ResourceID_s* z);
void zx_cb_ReportUsage_ADD_EncryptedResourceID(struct zx_cb_ReportUsage_s* x, int n, struct zx_cb_EncryptedResourceID_s* z);
void zx_cb_ReportUsage_ADD_CARDID(struct zx_cb_ReportUsage_s* x, int n, struct zx_elem_s* z);
void zx_cb_ReportUsage_ADD_UsageType(struct zx_cb_ReportUsage_s* x, int n, struct zx_cb_UsageType_s* z);

void zx_cb_ReportUsage_DEL_ResourceID(struct zx_cb_ReportUsage_s* x, int n);
void zx_cb_ReportUsage_DEL_EncryptedResourceID(struct zx_cb_ReportUsage_s* x, int n);
void zx_cb_ReportUsage_DEL_CARDID(struct zx_cb_ReportUsage_s* x, int n);
void zx_cb_ReportUsage_DEL_UsageType(struct zx_cb_ReportUsage_s* x, int n);

void zx_cb_ReportUsage_REV_ResourceID(struct zx_cb_ReportUsage_s* x);
void zx_cb_ReportUsage_REV_EncryptedResourceID(struct zx_cb_ReportUsage_s* x);
void zx_cb_ReportUsage_REV_CARDID(struct zx_cb_ReportUsage_s* x);
void zx_cb_ReportUsage_REV_UsageType(struct zx_cb_ReportUsage_s* x);

#endif
/* -------------------------- cb_ReportUsageResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_cb_ReportUsageResponse_EXT
#define zx_cb_ReportUsageResponse_EXT
#endif

struct zx_cb_ReportUsageResponse_s* zx_DEC_cb_ReportUsageResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_ReportUsageResponse_s* zx_NEW_cb_ReportUsageResponse(struct zx_ctx* c);
void zx_FREE_cb_ReportUsageResponse(struct zx_ctx* c, struct zx_cb_ReportUsageResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_ReportUsageResponse_s* zx_DEEP_CLONE_cb_ReportUsageResponse(struct zx_ctx* c, struct zx_cb_ReportUsageResponse_s* x, int dup_strs);
void zx_DUP_STRS_cb_ReportUsageResponse(struct zx_ctx* c, struct zx_cb_ReportUsageResponse_s* x);
int zx_WALK_SO_cb_ReportUsageResponse(struct zx_ctx* c, struct zx_cb_ReportUsageResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_ReportUsageResponse(struct zx_ctx* c, struct zx_cb_ReportUsageResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_ReportUsageResponse(struct zx_ctx* c, struct zx_cb_ReportUsageResponse_s* x);
int zx_LEN_WO_cb_ReportUsageResponse(struct zx_ctx* c, struct zx_cb_ReportUsageResponse_s* x);
char* zx_ENC_SO_cb_ReportUsageResponse(struct zx_ctx* c, struct zx_cb_ReportUsageResponse_s* x, char* p);
char* zx_ENC_WO_cb_ReportUsageResponse(struct zx_ctx* c, struct zx_cb_ReportUsageResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_ReportUsageResponse(struct zx_ctx* c, struct zx_cb_ReportUsageResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_ReportUsageResponse(struct zx_ctx* c, struct zx_cb_ReportUsageResponse_s* x);

struct zx_cb_ReportUsageResponse_s {
  ZX_ELEM_EXT
  zx_cb_ReportUsageResponse_EXT
  struct zx_cb_Status_s* Status;	/* {1,1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_ReportUsageResponse_GET_id(struct zx_cb_ReportUsageResponse_s* x);

struct zx_cb_Status_s* zx_cb_ReportUsageResponse_GET_Status(struct zx_cb_ReportUsageResponse_s* x, int n);

int zx_cb_ReportUsageResponse_NUM_Status(struct zx_cb_ReportUsageResponse_s* x);

struct zx_cb_Status_s* zx_cb_ReportUsageResponse_POP_Status(struct zx_cb_ReportUsageResponse_s* x);

void zx_cb_ReportUsageResponse_PUSH_Status(struct zx_cb_ReportUsageResponse_s* x, struct zx_cb_Status_s* y);

void zx_cb_ReportUsageResponse_PUT_id(struct zx_cb_ReportUsageResponse_s* x, struct zx_str* y);

void zx_cb_ReportUsageResponse_PUT_Status(struct zx_cb_ReportUsageResponse_s* x, int n, struct zx_cb_Status_s* y);

void zx_cb_ReportUsageResponse_ADD_Status(struct zx_cb_ReportUsageResponse_s* x, int n, struct zx_cb_Status_s* z);

void zx_cb_ReportUsageResponse_DEL_Status(struct zx_cb_ReportUsageResponse_s* x, int n);

void zx_cb_ReportUsageResponse_REV_Status(struct zx_cb_ReportUsageResponse_s* x);

#endif
/* -------------------------- cb_ResourceID -------------------------- */
/* refby( zx_cb_ReportUsage_s zx_cb_Query_s zx_cb_Modify_s zx_cb_Create_s zx_cb_Delete_s ) */
#ifndef zx_cb_ResourceID_EXT
#define zx_cb_ResourceID_EXT
#endif

struct zx_cb_ResourceID_s* zx_DEC_cb_ResourceID(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_ResourceID_s* zx_NEW_cb_ResourceID(struct zx_ctx* c);
void zx_FREE_cb_ResourceID(struct zx_ctx* c, struct zx_cb_ResourceID_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_ResourceID_s* zx_DEEP_CLONE_cb_ResourceID(struct zx_ctx* c, struct zx_cb_ResourceID_s* x, int dup_strs);
void zx_DUP_STRS_cb_ResourceID(struct zx_ctx* c, struct zx_cb_ResourceID_s* x);
int zx_WALK_SO_cb_ResourceID(struct zx_ctx* c, struct zx_cb_ResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_ResourceID(struct zx_ctx* c, struct zx_cb_ResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_ResourceID(struct zx_ctx* c, struct zx_cb_ResourceID_s* x);
int zx_LEN_WO_cb_ResourceID(struct zx_ctx* c, struct zx_cb_ResourceID_s* x);
char* zx_ENC_SO_cb_ResourceID(struct zx_ctx* c, struct zx_cb_ResourceID_s* x, char* p);
char* zx_ENC_WO_cb_ResourceID(struct zx_ctx* c, struct zx_cb_ResourceID_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_ResourceID(struct zx_ctx* c, struct zx_cb_ResourceID_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_ResourceID(struct zx_ctx* c, struct zx_cb_ResourceID_s* x);

struct zx_cb_ResourceID_s {
  ZX_ELEM_EXT
  zx_cb_ResourceID_EXT
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_ResourceID_GET_id(struct zx_cb_ResourceID_s* x);





void zx_cb_ResourceID_PUT_id(struct zx_cb_ResourceID_s* x, struct zx_str* y);





#endif
/* -------------------------- cb_Status -------------------------- */
/* refby( zx_cb_ModifyResponse_s zx_cb_NotifyResponse_s zx_cb_DeleteResponse_s zx_cb_Status_s zx_cb_CreateResponse_s zx_cb_QueryResponse_s zx_cb_ReportUsageResponse_s ) */
#ifndef zx_cb_Status_EXT
#define zx_cb_Status_EXT
#endif

struct zx_cb_Status_s* zx_DEC_cb_Status(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_Status_s* zx_NEW_cb_Status(struct zx_ctx* c);
void zx_FREE_cb_Status(struct zx_ctx* c, struct zx_cb_Status_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_Status_s* zx_DEEP_CLONE_cb_Status(struct zx_ctx* c, struct zx_cb_Status_s* x, int dup_strs);
void zx_DUP_STRS_cb_Status(struct zx_ctx* c, struct zx_cb_Status_s* x);
int zx_WALK_SO_cb_Status(struct zx_ctx* c, struct zx_cb_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_Status(struct zx_ctx* c, struct zx_cb_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_Status(struct zx_ctx* c, struct zx_cb_Status_s* x);
int zx_LEN_WO_cb_Status(struct zx_ctx* c, struct zx_cb_Status_s* x);
char* zx_ENC_SO_cb_Status(struct zx_ctx* c, struct zx_cb_Status_s* x, char* p);
char* zx_ENC_WO_cb_Status(struct zx_ctx* c, struct zx_cb_Status_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_Status(struct zx_ctx* c, struct zx_cb_Status_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_Status(struct zx_ctx* c, struct zx_cb_Status_s* x);

struct zx_cb_Status_s {
  ZX_ELEM_EXT
  zx_cb_Status_EXT
  struct zx_cb_Status_s* Status;	/* {0,-1} nada */
  struct zx_str* code;	/* {1,1} attribute xs:QName */
  struct zx_str* ref;	/* {0,1} attribute xs:string */
  struct zx_str* comment;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_Status_GET_code(struct zx_cb_Status_s* x);
struct zx_str* zx_cb_Status_GET_ref(struct zx_cb_Status_s* x);
struct zx_str* zx_cb_Status_GET_comment(struct zx_cb_Status_s* x);

struct zx_cb_Status_s* zx_cb_Status_GET_Status(struct zx_cb_Status_s* x, int n);

int zx_cb_Status_NUM_Status(struct zx_cb_Status_s* x);

struct zx_cb_Status_s* zx_cb_Status_POP_Status(struct zx_cb_Status_s* x);

void zx_cb_Status_PUSH_Status(struct zx_cb_Status_s* x, struct zx_cb_Status_s* y);

void zx_cb_Status_PUT_code(struct zx_cb_Status_s* x, struct zx_str* y);
void zx_cb_Status_PUT_ref(struct zx_cb_Status_s* x, struct zx_str* y);
void zx_cb_Status_PUT_comment(struct zx_cb_Status_s* x, struct zx_str* y);

void zx_cb_Status_PUT_Status(struct zx_cb_Status_s* x, int n, struct zx_cb_Status_s* y);

void zx_cb_Status_ADD_Status(struct zx_cb_Status_s* x, int n, struct zx_cb_Status_s* z);

void zx_cb_Status_DEL_Status(struct zx_cb_Status_s* x, int n);

void zx_cb_Status_REV_Status(struct zx_cb_Status_s* x);

#endif
/* -------------------------- cb_Subscription -------------------------- */
/* refby( zx_cb_Query_s zx_cb_Modify_s zx_cb_Create_s ) */
#ifndef zx_cb_Subscription_EXT
#define zx_cb_Subscription_EXT
#endif

struct zx_cb_Subscription_s* zx_DEC_cb_Subscription(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_Subscription_s* zx_NEW_cb_Subscription(struct zx_ctx* c);
void zx_FREE_cb_Subscription(struct zx_ctx* c, struct zx_cb_Subscription_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_Subscription_s* zx_DEEP_CLONE_cb_Subscription(struct zx_ctx* c, struct zx_cb_Subscription_s* x, int dup_strs);
void zx_DUP_STRS_cb_Subscription(struct zx_ctx* c, struct zx_cb_Subscription_s* x);
int zx_WALK_SO_cb_Subscription(struct zx_ctx* c, struct zx_cb_Subscription_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_Subscription(struct zx_ctx* c, struct zx_cb_Subscription_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_Subscription(struct zx_ctx* c, struct zx_cb_Subscription_s* x);
int zx_LEN_WO_cb_Subscription(struct zx_ctx* c, struct zx_cb_Subscription_s* x);
char* zx_ENC_SO_cb_Subscription(struct zx_ctx* c, struct zx_cb_Subscription_s* x, char* p);
char* zx_ENC_WO_cb_Subscription(struct zx_ctx* c, struct zx_cb_Subscription_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_Subscription(struct zx_ctx* c, struct zx_cb_Subscription_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_Subscription(struct zx_ctx* c, struct zx_cb_Subscription_s* x);

struct zx_cb_Subscription_s {
  ZX_ELEM_EXT
  zx_cb_Subscription_EXT
  struct zx_cb_ItemSelection_s* ItemSelection;	/* {0,-1} nada */
  struct zx_cb_RefItem_s* RefItem;	/* {0,-1}  */
  struct zx_cb_NotifyTo_s* NotifyTo;	/* {0,1}  */
  struct zx_cb_NotifyAdminTo_s* NotifyAdminTo;	/* {0,1}  */
  struct zx_elem_s* Aggregation;	/* {0,1} cb:AggregationType */
  struct zx_elem_s* Trigger;	/* {0,1} cb:TriggerType */
  struct zx_cb_Extension_s* Extension;	/* {0,-1} nada */
  struct zx_str* starts;	/* {0,1} attribute xs:dateTime */
  struct zx_str* expires;	/* {0,1} attribute xs:dateTime */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* subscriptionID;	/* {1,1} attribute xs:string */
  struct zx_str* includeData;	/* {0,1} attribute Yes */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_Subscription_GET_starts(struct zx_cb_Subscription_s* x);
struct zx_str* zx_cb_Subscription_GET_expires(struct zx_cb_Subscription_s* x);
struct zx_str* zx_cb_Subscription_GET_id(struct zx_cb_Subscription_s* x);
struct zx_str* zx_cb_Subscription_GET_subscriptionID(struct zx_cb_Subscription_s* x);
struct zx_str* zx_cb_Subscription_GET_includeData(struct zx_cb_Subscription_s* x);

struct zx_cb_ItemSelection_s* zx_cb_Subscription_GET_ItemSelection(struct zx_cb_Subscription_s* x, int n);
struct zx_cb_RefItem_s* zx_cb_Subscription_GET_RefItem(struct zx_cb_Subscription_s* x, int n);
struct zx_cb_NotifyTo_s* zx_cb_Subscription_GET_NotifyTo(struct zx_cb_Subscription_s* x, int n);
struct zx_cb_NotifyAdminTo_s* zx_cb_Subscription_GET_NotifyAdminTo(struct zx_cb_Subscription_s* x, int n);
struct zx_elem_s* zx_cb_Subscription_GET_Aggregation(struct zx_cb_Subscription_s* x, int n);
struct zx_elem_s* zx_cb_Subscription_GET_Trigger(struct zx_cb_Subscription_s* x, int n);
struct zx_cb_Extension_s* zx_cb_Subscription_GET_Extension(struct zx_cb_Subscription_s* x, int n);

int zx_cb_Subscription_NUM_ItemSelection(struct zx_cb_Subscription_s* x);
int zx_cb_Subscription_NUM_RefItem(struct zx_cb_Subscription_s* x);
int zx_cb_Subscription_NUM_NotifyTo(struct zx_cb_Subscription_s* x);
int zx_cb_Subscription_NUM_NotifyAdminTo(struct zx_cb_Subscription_s* x);
int zx_cb_Subscription_NUM_Aggregation(struct zx_cb_Subscription_s* x);
int zx_cb_Subscription_NUM_Trigger(struct zx_cb_Subscription_s* x);
int zx_cb_Subscription_NUM_Extension(struct zx_cb_Subscription_s* x);

struct zx_cb_ItemSelection_s* zx_cb_Subscription_POP_ItemSelection(struct zx_cb_Subscription_s* x);
struct zx_cb_RefItem_s* zx_cb_Subscription_POP_RefItem(struct zx_cb_Subscription_s* x);
struct zx_cb_NotifyTo_s* zx_cb_Subscription_POP_NotifyTo(struct zx_cb_Subscription_s* x);
struct zx_cb_NotifyAdminTo_s* zx_cb_Subscription_POP_NotifyAdminTo(struct zx_cb_Subscription_s* x);
struct zx_elem_s* zx_cb_Subscription_POP_Aggregation(struct zx_cb_Subscription_s* x);
struct zx_elem_s* zx_cb_Subscription_POP_Trigger(struct zx_cb_Subscription_s* x);
struct zx_cb_Extension_s* zx_cb_Subscription_POP_Extension(struct zx_cb_Subscription_s* x);

void zx_cb_Subscription_PUSH_ItemSelection(struct zx_cb_Subscription_s* x, struct zx_cb_ItemSelection_s* y);
void zx_cb_Subscription_PUSH_RefItem(struct zx_cb_Subscription_s* x, struct zx_cb_RefItem_s* y);
void zx_cb_Subscription_PUSH_NotifyTo(struct zx_cb_Subscription_s* x, struct zx_cb_NotifyTo_s* y);
void zx_cb_Subscription_PUSH_NotifyAdminTo(struct zx_cb_Subscription_s* x, struct zx_cb_NotifyAdminTo_s* y);
void zx_cb_Subscription_PUSH_Aggregation(struct zx_cb_Subscription_s* x, struct zx_elem_s* y);
void zx_cb_Subscription_PUSH_Trigger(struct zx_cb_Subscription_s* x, struct zx_elem_s* y);
void zx_cb_Subscription_PUSH_Extension(struct zx_cb_Subscription_s* x, struct zx_cb_Extension_s* y);

void zx_cb_Subscription_PUT_starts(struct zx_cb_Subscription_s* x, struct zx_str* y);
void zx_cb_Subscription_PUT_expires(struct zx_cb_Subscription_s* x, struct zx_str* y);
void zx_cb_Subscription_PUT_id(struct zx_cb_Subscription_s* x, struct zx_str* y);
void zx_cb_Subscription_PUT_subscriptionID(struct zx_cb_Subscription_s* x, struct zx_str* y);
void zx_cb_Subscription_PUT_includeData(struct zx_cb_Subscription_s* x, struct zx_str* y);

void zx_cb_Subscription_PUT_ItemSelection(struct zx_cb_Subscription_s* x, int n, struct zx_cb_ItemSelection_s* y);
void zx_cb_Subscription_PUT_RefItem(struct zx_cb_Subscription_s* x, int n, struct zx_cb_RefItem_s* y);
void zx_cb_Subscription_PUT_NotifyTo(struct zx_cb_Subscription_s* x, int n, struct zx_cb_NotifyTo_s* y);
void zx_cb_Subscription_PUT_NotifyAdminTo(struct zx_cb_Subscription_s* x, int n, struct zx_cb_NotifyAdminTo_s* y);
void zx_cb_Subscription_PUT_Aggregation(struct zx_cb_Subscription_s* x, int n, struct zx_elem_s* y);
void zx_cb_Subscription_PUT_Trigger(struct zx_cb_Subscription_s* x, int n, struct zx_elem_s* y);
void zx_cb_Subscription_PUT_Extension(struct zx_cb_Subscription_s* x, int n, struct zx_cb_Extension_s* y);

void zx_cb_Subscription_ADD_ItemSelection(struct zx_cb_Subscription_s* x, int n, struct zx_cb_ItemSelection_s* z);
void zx_cb_Subscription_ADD_RefItem(struct zx_cb_Subscription_s* x, int n, struct zx_cb_RefItem_s* z);
void zx_cb_Subscription_ADD_NotifyTo(struct zx_cb_Subscription_s* x, int n, struct zx_cb_NotifyTo_s* z);
void zx_cb_Subscription_ADD_NotifyAdminTo(struct zx_cb_Subscription_s* x, int n, struct zx_cb_NotifyAdminTo_s* z);
void zx_cb_Subscription_ADD_Aggregation(struct zx_cb_Subscription_s* x, int n, struct zx_elem_s* z);
void zx_cb_Subscription_ADD_Trigger(struct zx_cb_Subscription_s* x, int n, struct zx_elem_s* z);
void zx_cb_Subscription_ADD_Extension(struct zx_cb_Subscription_s* x, int n, struct zx_cb_Extension_s* z);

void zx_cb_Subscription_DEL_ItemSelection(struct zx_cb_Subscription_s* x, int n);
void zx_cb_Subscription_DEL_RefItem(struct zx_cb_Subscription_s* x, int n);
void zx_cb_Subscription_DEL_NotifyTo(struct zx_cb_Subscription_s* x, int n);
void zx_cb_Subscription_DEL_NotifyAdminTo(struct zx_cb_Subscription_s* x, int n);
void zx_cb_Subscription_DEL_Aggregation(struct zx_cb_Subscription_s* x, int n);
void zx_cb_Subscription_DEL_Trigger(struct zx_cb_Subscription_s* x, int n);
void zx_cb_Subscription_DEL_Extension(struct zx_cb_Subscription_s* x, int n);

void zx_cb_Subscription_REV_ItemSelection(struct zx_cb_Subscription_s* x);
void zx_cb_Subscription_REV_RefItem(struct zx_cb_Subscription_s* x);
void zx_cb_Subscription_REV_NotifyTo(struct zx_cb_Subscription_s* x);
void zx_cb_Subscription_REV_NotifyAdminTo(struct zx_cb_Subscription_s* x);
void zx_cb_Subscription_REV_Aggregation(struct zx_cb_Subscription_s* x);
void zx_cb_Subscription_REV_Trigger(struct zx_cb_Subscription_s* x);
void zx_cb_Subscription_REV_Extension(struct zx_cb_Subscription_s* x);

#endif
/* -------------------------- cb_UsageType -------------------------- */
/* refby( zx_cb_ReportUsage_s ) */
#ifndef zx_cb_UsageType_EXT
#define zx_cb_UsageType_EXT
#endif

struct zx_cb_UsageType_s* zx_DEC_cb_UsageType(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cb_UsageType_s* zx_NEW_cb_UsageType(struct zx_ctx* c);
void zx_FREE_cb_UsageType(struct zx_ctx* c, struct zx_cb_UsageType_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cb_UsageType_s* zx_DEEP_CLONE_cb_UsageType(struct zx_ctx* c, struct zx_cb_UsageType_s* x, int dup_strs);
void zx_DUP_STRS_cb_UsageType(struct zx_ctx* c, struct zx_cb_UsageType_s* x);
int zx_WALK_SO_cb_UsageType(struct zx_ctx* c, struct zx_cb_UsageType_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cb_UsageType(struct zx_ctx* c, struct zx_cb_UsageType_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cb_UsageType(struct zx_ctx* c, struct zx_cb_UsageType_s* x);
int zx_LEN_WO_cb_UsageType(struct zx_ctx* c, struct zx_cb_UsageType_s* x);
char* zx_ENC_SO_cb_UsageType(struct zx_ctx* c, struct zx_cb_UsageType_s* x, char* p);
char* zx_ENC_WO_cb_UsageType(struct zx_ctx* c, struct zx_cb_UsageType_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cb_UsageType(struct zx_ctx* c, struct zx_cb_UsageType_s* x);
struct zx_str* zx_EASY_ENC_WO_cb_UsageType(struct zx_ctx* c, struct zx_cb_UsageType_s* x);

struct zx_cb_UsageType_s {
  ZX_ELEM_EXT
  zx_cb_UsageType_EXT
  struct zx_str* success;	/* {0,1} attribute xs:boolean */
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cb_UsageType_GET_success(struct zx_cb_UsageType_s* x);
struct zx_str* zx_cb_UsageType_GET_id(struct zx_cb_UsageType_s* x);
struct zx_str* zx_cb_UsageType_GET_modificationTime(struct zx_cb_UsageType_s* x);
struct zx_str* zx_cb_UsageType_GET_ACC(struct zx_cb_UsageType_s* x);
struct zx_str* zx_cb_UsageType_GET_ACCTime(struct zx_cb_UsageType_s* x);
struct zx_str* zx_cb_UsageType_GET_modifier(struct zx_cb_UsageType_s* x);





void zx_cb_UsageType_PUT_success(struct zx_cb_UsageType_s* x, struct zx_str* y);
void zx_cb_UsageType_PUT_id(struct zx_cb_UsageType_s* x, struct zx_str* y);
void zx_cb_UsageType_PUT_modificationTime(struct zx_cb_UsageType_s* x, struct zx_str* y);
void zx_cb_UsageType_PUT_ACC(struct zx_cb_UsageType_s* x, struct zx_str* y);
void zx_cb_UsageType_PUT_ACCTime(struct zx_cb_UsageType_s* x, struct zx_str* y);
void zx_cb_UsageType_PUT_modifier(struct zx_cb_UsageType_s* x, struct zx_str* y);





#endif

#endif
