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
/* refby( zx_dap_Notify_s zx_ps_NotifyResponse_s zx_idhrxml_DeleteResponse_s zx_dap_Create_s zx_idhrxml_Notify_s zx_idhrxml_NotifyResponse_s zx_idhrxml_ModifyResponse_s zx_dap_ModifyResponse_s zx_idhrxml_Create_s zx_dap_CreateResponse_s zx_idhrxml_CreateResponse_s zx_ps_Subscription_s zx_dap_Delete_s zx_idhrxml_Delete_s zx_dap_Subscription_s zx_dap_NotifyResponse_s zx_dap_DeleteResponse_s zx_dap_QueryResponse_s zx_dap_Query_s zx_idhrxml_QueryResponse_s zx_idhrxml_Query_s zx_idhrxml_Modify_s zx_dap_Modify_s zx_idhrxml_Subscription_s ) */
#ifndef zx_lu_Extension_EXT
#define zx_lu_Extension_EXT
#endif

struct zx_lu_Extension_s* zx_DEC_lu_Extension(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_lu_Extension_s* zx_NEW_lu_Extension(struct zx_ctx* c);
void zx_FREE_lu_Extension(struct zx_ctx* c, struct zx_lu_Extension_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_lu_Extension_s* zx_DEEP_CLONE_lu_Extension(struct zx_ctx* c, struct zx_lu_Extension_s* x, int dup_strs);
void zx_DUP_STRS_lu_Extension(struct zx_ctx* c, struct zx_lu_Extension_s* x);
int zx_WALK_SO_lu_Extension(struct zx_ctx* c, struct zx_lu_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_lu_Extension(struct zx_ctx* c, struct zx_lu_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
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

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- lu_Status -------------------------- */
/* refby( zx_ps_NotifyResponse_s zx_idhrxml_DeleteResponse_s zx_di_SvcMDQueryResponse_s zx_shps_SetStatusResponse_s zx_di_SvcMDRegisterResponse_s zx_ps_RemoveCollectionResponse_s zx_shps_InvokeResponse_s zx_ps_QueryObjectsResponse_s zx_idhrxml_NotifyResponse_s zx_idp_GetProviderInfoResponse_s zx_di_SvcMDAssociationDeleteResponse_s zx_idhrxml_ModifyResponse_s zx_is_InteractionResponse_s zx_ps_RemoveFromCollectionResponse_s zx_ps_AddKnownEntityResponse_s zx_im_IdentityMappingResponse_s zx_di_SvcMDAssociationQueryResponse_s zx_dap_ModifyResponse_s zx_demomed_GetObjectResponse_s zx_di_SvcMDAssociationAddResponse_s zx_prov_PMEDisableResponse_s zx_idp_GetAssertionResponse_s zx_prov_PMGetStatusResponse_s zx_ps_TestMembershipResponse_s zx_shps_QueryRegisteredResponse_s zx_di_QueryResponse_s zx_dap_CreateResponse_s zx_idhrxml_CreateResponse_s zx_shps_ProxyInvokeResponse_s zx_ps_AddCollectionResponse_s zx_demomed_GetObjectListResponse_s zx_prov_PMEEnableResponse_s zx_lu_Status_s zx_pmm_PMSetStatusResponse_s zx_idp_CreatedStatusResponse_s zx_shps_QueryResponse_s zx_pmm_ProvisionResponse_s zx_ps_GetObjectInfoResponse_s zx_shps_RegisterResponse_s zx_prov_PMEUploadResponse_s zx_prov_PMActivateResponse_s zx_dap_NotifyResponse_s zx_dap_DeleteResponse_s zx_as_SASLResponse_s zx_prov_PMUpdateResponse_s zx_dap_QueryResponse_s zx_prov_PMEDownloadResponse_s zx_di_SvcMDDeleteResponse_s zx_shps_DeleteResponse_s zx_ps_AddEntityResponse_s zx_prov_PMGetDescriptorResponse_s zx_prov_PMERegisterResponse_s zx_prov_UpdateEPRResponse_s zx_pmm_PMUpdateResponse_s zx_idhrxml_QueryResponse_s zx_prov_PMRegisterDescriptorResponse_s zx_prov_PMDeactivateResponse_s zx_ps_SetObjectInfoResponse_s zx_ps_ListMembersResponse_s zx_prov_PMEGetInfoResponse_s zx_prov_PMDeleteResponse_s zx_ps_RemoveEntityResponse_s zx_pmm_PMDeleteResponse_s zx_prov_PMEDeleteResponse_s zx_pmm_PMDeactivateResponse_s zx_ps_AddToCollectionResponse_s zx_di_SvcMDReplaceResponse_s zx_shps_UpdateResponse_s zx_ps_ResolveIdentifierResponse_s zx_pmm_PMGetStatusResponse_s zx_prov_PMSetStatusResponse_s zx_shps_GetStatusResponse_s zx_demomed_StoreObjectResponse_s zx_pmm_PMActivateResponse_s zx_demomed_DeleteObjectResponse_s ) */
#ifndef zx_lu_Status_EXT
#define zx_lu_Status_EXT
#endif

struct zx_lu_Status_s* zx_DEC_lu_Status(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_lu_Status_s* zx_NEW_lu_Status(struct zx_ctx* c);
void zx_FREE_lu_Status(struct zx_ctx* c, struct zx_lu_Status_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_lu_Status_s* zx_DEEP_CLONE_lu_Status(struct zx_ctx* c, struct zx_lu_Status_s* x, int dup_strs);
void zx_DUP_STRS_lu_Status(struct zx_ctx* c, struct zx_lu_Status_s* x);
int zx_WALK_SO_lu_Status(struct zx_ctx* c, struct zx_lu_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_lu_Status(struct zx_ctx* c, struct zx_lu_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
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
  struct zx_str* ref;	/* {0,1} attribute xs:string */
  struct zx_str* comment;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_lu_Status_GET_code(struct zx_lu_Status_s* x);
struct zx_str* zx_lu_Status_GET_ref(struct zx_lu_Status_s* x);
struct zx_str* zx_lu_Status_GET_comment(struct zx_lu_Status_s* x);

struct zx_lu_Status_s* zx_lu_Status_GET_Status(struct zx_lu_Status_s* x, int n);

int zx_lu_Status_NUM_Status(struct zx_lu_Status_s* x);

struct zx_lu_Status_s* zx_lu_Status_POP_Status(struct zx_lu_Status_s* x);

void zx_lu_Status_PUSH_Status(struct zx_lu_Status_s* x, struct zx_lu_Status_s* y);

void zx_lu_Status_PUT_code(struct zx_lu_Status_s* x, struct zx_str* y);
void zx_lu_Status_PUT_ref(struct zx_lu_Status_s* x, struct zx_str* y);
void zx_lu_Status_PUT_comment(struct zx_lu_Status_s* x, struct zx_str* y);

void zx_lu_Status_PUT_Status(struct zx_lu_Status_s* x, int n, struct zx_lu_Status_s* y);

void zx_lu_Status_ADD_Status(struct zx_lu_Status_s* x, int n, struct zx_lu_Status_s* z);

void zx_lu_Status_DEL_Status(struct zx_lu_Status_s* x, int n);

void zx_lu_Status_REV_Status(struct zx_lu_Status_s* x);

#endif
/* -------------------------- lu_TestResult -------------------------- */
/* refby( zx_idhrxml_Notification_s zx_ps_Notification_s zx_dap_Notification_s ) */
#ifndef zx_lu_TestResult_EXT
#define zx_lu_TestResult_EXT
#endif

struct zx_lu_TestResult_s* zx_DEC_lu_TestResult(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_lu_TestResult_s* zx_NEW_lu_TestResult(struct zx_ctx* c);
void zx_FREE_lu_TestResult(struct zx_ctx* c, struct zx_lu_TestResult_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_lu_TestResult_s* zx_DEEP_CLONE_lu_TestResult(struct zx_ctx* c, struct zx_lu_TestResult_s* x, int dup_strs);
void zx_DUP_STRS_lu_TestResult(struct zx_ctx* c, struct zx_lu_TestResult_s* x);
int zx_WALK_SO_lu_TestResult(struct zx_ctx* c, struct zx_lu_TestResult_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_lu_TestResult(struct zx_ctx* c, struct zx_lu_TestResult_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_lu_TestResult(struct zx_ctx* c, struct zx_lu_TestResult_s* x);
int zx_LEN_WO_lu_TestResult(struct zx_ctx* c, struct zx_lu_TestResult_s* x);
char* zx_ENC_SO_lu_TestResult(struct zx_ctx* c, struct zx_lu_TestResult_s* x, char* p);
char* zx_ENC_WO_lu_TestResult(struct zx_ctx* c, struct zx_lu_TestResult_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_lu_TestResult(struct zx_ctx* c, struct zx_lu_TestResult_s* x);
struct zx_str* zx_EASY_ENC_WO_lu_TestResult(struct zx_ctx* c, struct zx_lu_TestResult_s* x);

struct zx_lu_TestResult_s {
  ZX_ELEM_EXT
  zx_lu_TestResult_EXT
  struct zx_str* itemIDRef;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_lu_TestResult_GET_itemIDRef(struct zx_lu_TestResult_s* x);





void zx_lu_TestResult_PUT_itemIDRef(struct zx_lu_TestResult_s* x, struct zx_str* y);





#endif

#endif
