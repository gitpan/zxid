/* c/zx-md-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_md_data_h
#define _c_zx_md_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- md_AdditionalMetadataLocation -------------------------- */
/* refby( zx_md_EntityDescriptor_s ) */
#ifndef zx_md_AdditionalMetadataLocation_EXT
#define zx_md_AdditionalMetadataLocation_EXT
#endif

struct zx_md_AdditionalMetadataLocation_s* zx_DEC_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_AdditionalMetadataLocation_s* zx_NEW_md_AdditionalMetadataLocation(struct zx_ctx* c);
void zx_FREE_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zx_md_AdditionalMetadataLocation_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_AdditionalMetadataLocation_s* zx_DEEP_CLONE_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zx_md_AdditionalMetadataLocation_s* x, int dup_strs);
void zx_DUP_STRS_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zx_md_AdditionalMetadataLocation_s* x);
int zx_WALK_SO_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zx_md_AdditionalMetadataLocation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zx_md_AdditionalMetadataLocation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zx_md_AdditionalMetadataLocation_s* x);
int zx_LEN_WO_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zx_md_AdditionalMetadataLocation_s* x);
char* zx_ENC_SO_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zx_md_AdditionalMetadataLocation_s* x, char* p);
char* zx_ENC_WO_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zx_md_AdditionalMetadataLocation_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zx_md_AdditionalMetadataLocation_s* x);
struct zx_str* zx_EASY_ENC_WO_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zx_md_AdditionalMetadataLocation_s* x);

struct zx_md_AdditionalMetadataLocation_s {
  ZX_ELEM_EXT
  zx_md_AdditionalMetadataLocation_EXT
  struct zx_str* namespace;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_AdditionalMetadataLocation_GET_namespace(struct zx_md_AdditionalMetadataLocation_s* x);





void zx_md_AdditionalMetadataLocation_PUT_namespace(struct zx_md_AdditionalMetadataLocation_s* x, struct zx_str* y);





#endif
/* -------------------------- md_AffiliationDescriptor -------------------------- */
/* refby( zx_md_EntityDescriptor_s ) */
#ifndef zx_md_AffiliationDescriptor_EXT
#define zx_md_AffiliationDescriptor_EXT
#endif

struct zx_md_AffiliationDescriptor_s* zx_DEC_md_AffiliationDescriptor(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_AffiliationDescriptor_s* zx_NEW_md_AffiliationDescriptor(struct zx_ctx* c);
void zx_FREE_md_AffiliationDescriptor(struct zx_ctx* c, struct zx_md_AffiliationDescriptor_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_AffiliationDescriptor_s* zx_DEEP_CLONE_md_AffiliationDescriptor(struct zx_ctx* c, struct zx_md_AffiliationDescriptor_s* x, int dup_strs);
void zx_DUP_STRS_md_AffiliationDescriptor(struct zx_ctx* c, struct zx_md_AffiliationDescriptor_s* x);
int zx_WALK_SO_md_AffiliationDescriptor(struct zx_ctx* c, struct zx_md_AffiliationDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_AffiliationDescriptor(struct zx_ctx* c, struct zx_md_AffiliationDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_AffiliationDescriptor(struct zx_ctx* c, struct zx_md_AffiliationDescriptor_s* x);
int zx_LEN_WO_md_AffiliationDescriptor(struct zx_ctx* c, struct zx_md_AffiliationDescriptor_s* x);
char* zx_ENC_SO_md_AffiliationDescriptor(struct zx_ctx* c, struct zx_md_AffiliationDescriptor_s* x, char* p);
char* zx_ENC_WO_md_AffiliationDescriptor(struct zx_ctx* c, struct zx_md_AffiliationDescriptor_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_AffiliationDescriptor(struct zx_ctx* c, struct zx_md_AffiliationDescriptor_s* x);
struct zx_str* zx_EASY_ENC_WO_md_AffiliationDescriptor(struct zx_ctx* c, struct zx_md_AffiliationDescriptor_s* x);

struct zx_md_AffiliationDescriptor_s {
  ZX_ELEM_EXT
  zx_md_AffiliationDescriptor_EXT
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_md_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_elem_s* AffiliateMember;	/* {1,-1} xs:anyURI */
  struct zx_md_KeyDescriptor_s* KeyDescriptor;	/* {0,-1} nada */
  struct zx_str* affiliationOwnerID;	/* {1,1} attribute m20:entityIDType */
  struct zx_str* validUntil;	/* {0,1} attribute xs:dateTime */
  struct zx_str* cacheDuration;	/* {0,1} attribute xs:duration */
  struct zx_str* ID;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_AffiliationDescriptor_GET_affiliationOwnerID(struct zx_md_AffiliationDescriptor_s* x);
struct zx_str* zx_md_AffiliationDescriptor_GET_validUntil(struct zx_md_AffiliationDescriptor_s* x);
struct zx_str* zx_md_AffiliationDescriptor_GET_cacheDuration(struct zx_md_AffiliationDescriptor_s* x);
struct zx_str* zx_md_AffiliationDescriptor_GET_ID(struct zx_md_AffiliationDescriptor_s* x);

struct zx_ds_Signature_s* zx_md_AffiliationDescriptor_GET_Signature(struct zx_md_AffiliationDescriptor_s* x, int n);
struct zx_md_Extensions_s* zx_md_AffiliationDescriptor_GET_Extensions(struct zx_md_AffiliationDescriptor_s* x, int n);
struct zx_elem_s* zx_md_AffiliationDescriptor_GET_AffiliateMember(struct zx_md_AffiliationDescriptor_s* x, int n);
struct zx_md_KeyDescriptor_s* zx_md_AffiliationDescriptor_GET_KeyDescriptor(struct zx_md_AffiliationDescriptor_s* x, int n);

int zx_md_AffiliationDescriptor_NUM_Signature(struct zx_md_AffiliationDescriptor_s* x);
int zx_md_AffiliationDescriptor_NUM_Extensions(struct zx_md_AffiliationDescriptor_s* x);
int zx_md_AffiliationDescriptor_NUM_AffiliateMember(struct zx_md_AffiliationDescriptor_s* x);
int zx_md_AffiliationDescriptor_NUM_KeyDescriptor(struct zx_md_AffiliationDescriptor_s* x);

struct zx_ds_Signature_s* zx_md_AffiliationDescriptor_POP_Signature(struct zx_md_AffiliationDescriptor_s* x);
struct zx_md_Extensions_s* zx_md_AffiliationDescriptor_POP_Extensions(struct zx_md_AffiliationDescriptor_s* x);
struct zx_elem_s* zx_md_AffiliationDescriptor_POP_AffiliateMember(struct zx_md_AffiliationDescriptor_s* x);
struct zx_md_KeyDescriptor_s* zx_md_AffiliationDescriptor_POP_KeyDescriptor(struct zx_md_AffiliationDescriptor_s* x);

void zx_md_AffiliationDescriptor_PUSH_Signature(struct zx_md_AffiliationDescriptor_s* x, struct zx_ds_Signature_s* y);
void zx_md_AffiliationDescriptor_PUSH_Extensions(struct zx_md_AffiliationDescriptor_s* x, struct zx_md_Extensions_s* y);
void zx_md_AffiliationDescriptor_PUSH_AffiliateMember(struct zx_md_AffiliationDescriptor_s* x, struct zx_elem_s* y);
void zx_md_AffiliationDescriptor_PUSH_KeyDescriptor(struct zx_md_AffiliationDescriptor_s* x, struct zx_md_KeyDescriptor_s* y);

void zx_md_AffiliationDescriptor_PUT_affiliationOwnerID(struct zx_md_AffiliationDescriptor_s* x, struct zx_str* y);
void zx_md_AffiliationDescriptor_PUT_validUntil(struct zx_md_AffiliationDescriptor_s* x, struct zx_str* y);
void zx_md_AffiliationDescriptor_PUT_cacheDuration(struct zx_md_AffiliationDescriptor_s* x, struct zx_str* y);
void zx_md_AffiliationDescriptor_PUT_ID(struct zx_md_AffiliationDescriptor_s* x, struct zx_str* y);

void zx_md_AffiliationDescriptor_PUT_Signature(struct zx_md_AffiliationDescriptor_s* x, int n, struct zx_ds_Signature_s* y);
void zx_md_AffiliationDescriptor_PUT_Extensions(struct zx_md_AffiliationDescriptor_s* x, int n, struct zx_md_Extensions_s* y);
void zx_md_AffiliationDescriptor_PUT_AffiliateMember(struct zx_md_AffiliationDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_md_AffiliationDescriptor_PUT_KeyDescriptor(struct zx_md_AffiliationDescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* y);

void zx_md_AffiliationDescriptor_ADD_Signature(struct zx_md_AffiliationDescriptor_s* x, int n, struct zx_ds_Signature_s* z);
void zx_md_AffiliationDescriptor_ADD_Extensions(struct zx_md_AffiliationDescriptor_s* x, int n, struct zx_md_Extensions_s* z);
void zx_md_AffiliationDescriptor_ADD_AffiliateMember(struct zx_md_AffiliationDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_md_AffiliationDescriptor_ADD_KeyDescriptor(struct zx_md_AffiliationDescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* z);

void zx_md_AffiliationDescriptor_DEL_Signature(struct zx_md_AffiliationDescriptor_s* x, int n);
void zx_md_AffiliationDescriptor_DEL_Extensions(struct zx_md_AffiliationDescriptor_s* x, int n);
void zx_md_AffiliationDescriptor_DEL_AffiliateMember(struct zx_md_AffiliationDescriptor_s* x, int n);
void zx_md_AffiliationDescriptor_DEL_KeyDescriptor(struct zx_md_AffiliationDescriptor_s* x, int n);

void zx_md_AffiliationDescriptor_REV_Signature(struct zx_md_AffiliationDescriptor_s* x);
void zx_md_AffiliationDescriptor_REV_Extensions(struct zx_md_AffiliationDescriptor_s* x);
void zx_md_AffiliationDescriptor_REV_AffiliateMember(struct zx_md_AffiliationDescriptor_s* x);
void zx_md_AffiliationDescriptor_REV_KeyDescriptor(struct zx_md_AffiliationDescriptor_s* x);

#endif
/* -------------------------- md_ArtifactResolutionService -------------------------- */
/* refby( zx_md_SPSSODescriptor_s zx_md_IDPSSODescriptor_s ) */
#ifndef zx_md_ArtifactResolutionService_EXT
#define zx_md_ArtifactResolutionService_EXT
#endif

struct zx_md_ArtifactResolutionService_s* zx_DEC_md_ArtifactResolutionService(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_ArtifactResolutionService_s* zx_NEW_md_ArtifactResolutionService(struct zx_ctx* c);
void zx_FREE_md_ArtifactResolutionService(struct zx_ctx* c, struct zx_md_ArtifactResolutionService_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_ArtifactResolutionService_s* zx_DEEP_CLONE_md_ArtifactResolutionService(struct zx_ctx* c, struct zx_md_ArtifactResolutionService_s* x, int dup_strs);
void zx_DUP_STRS_md_ArtifactResolutionService(struct zx_ctx* c, struct zx_md_ArtifactResolutionService_s* x);
int zx_WALK_SO_md_ArtifactResolutionService(struct zx_ctx* c, struct zx_md_ArtifactResolutionService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_ArtifactResolutionService(struct zx_ctx* c, struct zx_md_ArtifactResolutionService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_ArtifactResolutionService(struct zx_ctx* c, struct zx_md_ArtifactResolutionService_s* x);
int zx_LEN_WO_md_ArtifactResolutionService(struct zx_ctx* c, struct zx_md_ArtifactResolutionService_s* x);
char* zx_ENC_SO_md_ArtifactResolutionService(struct zx_ctx* c, struct zx_md_ArtifactResolutionService_s* x, char* p);
char* zx_ENC_WO_md_ArtifactResolutionService(struct zx_ctx* c, struct zx_md_ArtifactResolutionService_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_ArtifactResolutionService(struct zx_ctx* c, struct zx_md_ArtifactResolutionService_s* x);
struct zx_str* zx_EASY_ENC_WO_md_ArtifactResolutionService(struct zx_ctx* c, struct zx_md_ArtifactResolutionService_s* x);

struct zx_md_ArtifactResolutionService_s {
  ZX_ELEM_EXT
  zx_md_ArtifactResolutionService_EXT
  struct zx_str* Binding;	/* {1,1} attribute xs:anyURI */
  struct zx_str* Location;	/* {1,1} attribute xs:anyURI */
  struct zx_str* ResponseLocation;	/* {0,1} attribute xs:anyURI */
  struct zx_str* index;	/* {0,1} attribute xs:unsignedShort */
  struct zx_str* isDefault;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_ArtifactResolutionService_GET_Binding(struct zx_md_ArtifactResolutionService_s* x);
struct zx_str* zx_md_ArtifactResolutionService_GET_Location(struct zx_md_ArtifactResolutionService_s* x);
struct zx_str* zx_md_ArtifactResolutionService_GET_ResponseLocation(struct zx_md_ArtifactResolutionService_s* x);
struct zx_str* zx_md_ArtifactResolutionService_GET_index(struct zx_md_ArtifactResolutionService_s* x);
struct zx_str* zx_md_ArtifactResolutionService_GET_isDefault(struct zx_md_ArtifactResolutionService_s* x);





void zx_md_ArtifactResolutionService_PUT_Binding(struct zx_md_ArtifactResolutionService_s* x, struct zx_str* y);
void zx_md_ArtifactResolutionService_PUT_Location(struct zx_md_ArtifactResolutionService_s* x, struct zx_str* y);
void zx_md_ArtifactResolutionService_PUT_ResponseLocation(struct zx_md_ArtifactResolutionService_s* x, struct zx_str* y);
void zx_md_ArtifactResolutionService_PUT_index(struct zx_md_ArtifactResolutionService_s* x, struct zx_str* y);
void zx_md_ArtifactResolutionService_PUT_isDefault(struct zx_md_ArtifactResolutionService_s* x, struct zx_str* y);





#endif
/* -------------------------- md_AssertionConsumerService -------------------------- */
/* refby( zx_md_SPSSODescriptor_s ) */
#ifndef zx_md_AssertionConsumerService_EXT
#define zx_md_AssertionConsumerService_EXT
#endif

struct zx_md_AssertionConsumerService_s* zx_DEC_md_AssertionConsumerService(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_AssertionConsumerService_s* zx_NEW_md_AssertionConsumerService(struct zx_ctx* c);
void zx_FREE_md_AssertionConsumerService(struct zx_ctx* c, struct zx_md_AssertionConsumerService_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_AssertionConsumerService_s* zx_DEEP_CLONE_md_AssertionConsumerService(struct zx_ctx* c, struct zx_md_AssertionConsumerService_s* x, int dup_strs);
void zx_DUP_STRS_md_AssertionConsumerService(struct zx_ctx* c, struct zx_md_AssertionConsumerService_s* x);
int zx_WALK_SO_md_AssertionConsumerService(struct zx_ctx* c, struct zx_md_AssertionConsumerService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_AssertionConsumerService(struct zx_ctx* c, struct zx_md_AssertionConsumerService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_AssertionConsumerService(struct zx_ctx* c, struct zx_md_AssertionConsumerService_s* x);
int zx_LEN_WO_md_AssertionConsumerService(struct zx_ctx* c, struct zx_md_AssertionConsumerService_s* x);
char* zx_ENC_SO_md_AssertionConsumerService(struct zx_ctx* c, struct zx_md_AssertionConsumerService_s* x, char* p);
char* zx_ENC_WO_md_AssertionConsumerService(struct zx_ctx* c, struct zx_md_AssertionConsumerService_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_AssertionConsumerService(struct zx_ctx* c, struct zx_md_AssertionConsumerService_s* x);
struct zx_str* zx_EASY_ENC_WO_md_AssertionConsumerService(struct zx_ctx* c, struct zx_md_AssertionConsumerService_s* x);

struct zx_md_AssertionConsumerService_s {
  ZX_ELEM_EXT
  zx_md_AssertionConsumerService_EXT
  struct zx_str* Binding;	/* {1,1} attribute xs:anyURI */
  struct zx_str* Location;	/* {1,1} attribute xs:anyURI */
  struct zx_str* ResponseLocation;	/* {0,1} attribute xs:anyURI */
  struct zx_str* index;	/* {0,1} attribute xs:unsignedShort */
  struct zx_str* isDefault;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_AssertionConsumerService_GET_Binding(struct zx_md_AssertionConsumerService_s* x);
struct zx_str* zx_md_AssertionConsumerService_GET_Location(struct zx_md_AssertionConsumerService_s* x);
struct zx_str* zx_md_AssertionConsumerService_GET_ResponseLocation(struct zx_md_AssertionConsumerService_s* x);
struct zx_str* zx_md_AssertionConsumerService_GET_index(struct zx_md_AssertionConsumerService_s* x);
struct zx_str* zx_md_AssertionConsumerService_GET_isDefault(struct zx_md_AssertionConsumerService_s* x);





void zx_md_AssertionConsumerService_PUT_Binding(struct zx_md_AssertionConsumerService_s* x, struct zx_str* y);
void zx_md_AssertionConsumerService_PUT_Location(struct zx_md_AssertionConsumerService_s* x, struct zx_str* y);
void zx_md_AssertionConsumerService_PUT_ResponseLocation(struct zx_md_AssertionConsumerService_s* x, struct zx_str* y);
void zx_md_AssertionConsumerService_PUT_index(struct zx_md_AssertionConsumerService_s* x, struct zx_str* y);
void zx_md_AssertionConsumerService_PUT_isDefault(struct zx_md_AssertionConsumerService_s* x, struct zx_str* y);





#endif
/* -------------------------- md_AssertionIDRequestService -------------------------- */
/* refby( zx_md_PDPDescriptor_s zx_md_AuthnAuthorityDescriptor_s zx_md_AttributeAuthorityDescriptor_s zx_md_IDPSSODescriptor_s ) */
#ifndef zx_md_AssertionIDRequestService_EXT
#define zx_md_AssertionIDRequestService_EXT
#endif

struct zx_md_AssertionIDRequestService_s* zx_DEC_md_AssertionIDRequestService(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_AssertionIDRequestService_s* zx_NEW_md_AssertionIDRequestService(struct zx_ctx* c);
void zx_FREE_md_AssertionIDRequestService(struct zx_ctx* c, struct zx_md_AssertionIDRequestService_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_AssertionIDRequestService_s* zx_DEEP_CLONE_md_AssertionIDRequestService(struct zx_ctx* c, struct zx_md_AssertionIDRequestService_s* x, int dup_strs);
void zx_DUP_STRS_md_AssertionIDRequestService(struct zx_ctx* c, struct zx_md_AssertionIDRequestService_s* x);
int zx_WALK_SO_md_AssertionIDRequestService(struct zx_ctx* c, struct zx_md_AssertionIDRequestService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_AssertionIDRequestService(struct zx_ctx* c, struct zx_md_AssertionIDRequestService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_AssertionIDRequestService(struct zx_ctx* c, struct zx_md_AssertionIDRequestService_s* x);
int zx_LEN_WO_md_AssertionIDRequestService(struct zx_ctx* c, struct zx_md_AssertionIDRequestService_s* x);
char* zx_ENC_SO_md_AssertionIDRequestService(struct zx_ctx* c, struct zx_md_AssertionIDRequestService_s* x, char* p);
char* zx_ENC_WO_md_AssertionIDRequestService(struct zx_ctx* c, struct zx_md_AssertionIDRequestService_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_AssertionIDRequestService(struct zx_ctx* c, struct zx_md_AssertionIDRequestService_s* x);
struct zx_str* zx_EASY_ENC_WO_md_AssertionIDRequestService(struct zx_ctx* c, struct zx_md_AssertionIDRequestService_s* x);

struct zx_md_AssertionIDRequestService_s {
  ZX_ELEM_EXT
  zx_md_AssertionIDRequestService_EXT
  struct zx_str* Binding;	/* {1,1} attribute xs:anyURI */
  struct zx_str* Location;	/* {1,1} attribute xs:anyURI */
  struct zx_str* ResponseLocation;	/* {0,1} attribute xs:anyURI */
  struct zx_str* index;	/* {0,1} attribute xs:unsignedShort */
  struct zx_str* isDefault;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_AssertionIDRequestService_GET_Binding(struct zx_md_AssertionIDRequestService_s* x);
struct zx_str* zx_md_AssertionIDRequestService_GET_Location(struct zx_md_AssertionIDRequestService_s* x);
struct zx_str* zx_md_AssertionIDRequestService_GET_ResponseLocation(struct zx_md_AssertionIDRequestService_s* x);
struct zx_str* zx_md_AssertionIDRequestService_GET_index(struct zx_md_AssertionIDRequestService_s* x);
struct zx_str* zx_md_AssertionIDRequestService_GET_isDefault(struct zx_md_AssertionIDRequestService_s* x);





void zx_md_AssertionIDRequestService_PUT_Binding(struct zx_md_AssertionIDRequestService_s* x, struct zx_str* y);
void zx_md_AssertionIDRequestService_PUT_Location(struct zx_md_AssertionIDRequestService_s* x, struct zx_str* y);
void zx_md_AssertionIDRequestService_PUT_ResponseLocation(struct zx_md_AssertionIDRequestService_s* x, struct zx_str* y);
void zx_md_AssertionIDRequestService_PUT_index(struct zx_md_AssertionIDRequestService_s* x, struct zx_str* y);
void zx_md_AssertionIDRequestService_PUT_isDefault(struct zx_md_AssertionIDRequestService_s* x, struct zx_str* y);





#endif
/* -------------------------- md_AttributeAuthorityDescriptor -------------------------- */
/* refby( zx_md_EntityDescriptor_s ) */
#ifndef zx_md_AttributeAuthorityDescriptor_EXT
#define zx_md_AttributeAuthorityDescriptor_EXT
#endif

struct zx_md_AttributeAuthorityDescriptor_s* zx_DEC_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_AttributeAuthorityDescriptor_s* zx_NEW_md_AttributeAuthorityDescriptor(struct zx_ctx* c);
void zx_FREE_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zx_md_AttributeAuthorityDescriptor_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_AttributeAuthorityDescriptor_s* zx_DEEP_CLONE_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zx_md_AttributeAuthorityDescriptor_s* x, int dup_strs);
void zx_DUP_STRS_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zx_md_AttributeAuthorityDescriptor_s* x);
int zx_WALK_SO_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zx_md_AttributeAuthorityDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zx_md_AttributeAuthorityDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zx_md_AttributeAuthorityDescriptor_s* x);
int zx_LEN_WO_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zx_md_AttributeAuthorityDescriptor_s* x);
char* zx_ENC_SO_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zx_md_AttributeAuthorityDescriptor_s* x, char* p);
char* zx_ENC_WO_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zx_md_AttributeAuthorityDescriptor_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zx_md_AttributeAuthorityDescriptor_s* x);
struct zx_str* zx_EASY_ENC_WO_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zx_md_AttributeAuthorityDescriptor_s* x);

struct zx_md_AttributeAuthorityDescriptor_s {
  ZX_ELEM_EXT
  zx_md_AttributeAuthorityDescriptor_EXT
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_md_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_md_KeyDescriptor_s* KeyDescriptor;	/* {0,-1} nada */
  struct zx_md_Organization_s* Organization;	/* {0,1} nada */
  struct zx_md_ContactPerson_s* ContactPerson;	/* {0,-1} nada */
  struct zx_md_AttributeService_s* AttributeService;	/* {1,-1} nada */
  struct zx_md_AssertionIDRequestService_s* AssertionIDRequestService;	/* {0,-1} nada */
  struct zx_elem_s* NameIDFormat;	/* {0,-1} xs:anyURI */
  struct zx_elem_s* AttributeProfile;	/* {0,-1} xs:anyURI */
  struct zx_sa_Attribute_s* Attribute;	/* {0,-1} nada */
  struct zx_str* ID;	/* {0,1} attribute xs:ID */
  struct zx_str* validUntil;	/* {0,1} attribute xs:dateTime */
  struct zx_str* cacheDuration;	/* {0,1} attribute xs:duration */
  struct zx_str* protocolSupportEnumeration;	/* {1,1} attribute xs:string */
  struct zx_str* errorURL;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_AttributeAuthorityDescriptor_GET_ID(struct zx_md_AttributeAuthorityDescriptor_s* x);
struct zx_str* zx_md_AttributeAuthorityDescriptor_GET_validUntil(struct zx_md_AttributeAuthorityDescriptor_s* x);
struct zx_str* zx_md_AttributeAuthorityDescriptor_GET_cacheDuration(struct zx_md_AttributeAuthorityDescriptor_s* x);
struct zx_str* zx_md_AttributeAuthorityDescriptor_GET_protocolSupportEnumeration(struct zx_md_AttributeAuthorityDescriptor_s* x);
struct zx_str* zx_md_AttributeAuthorityDescriptor_GET_errorURL(struct zx_md_AttributeAuthorityDescriptor_s* x);

struct zx_ds_Signature_s* zx_md_AttributeAuthorityDescriptor_GET_Signature(struct zx_md_AttributeAuthorityDescriptor_s* x, int n);
struct zx_md_Extensions_s* zx_md_AttributeAuthorityDescriptor_GET_Extensions(struct zx_md_AttributeAuthorityDescriptor_s* x, int n);
struct zx_md_KeyDescriptor_s* zx_md_AttributeAuthorityDescriptor_GET_KeyDescriptor(struct zx_md_AttributeAuthorityDescriptor_s* x, int n);
struct zx_md_Organization_s* zx_md_AttributeAuthorityDescriptor_GET_Organization(struct zx_md_AttributeAuthorityDescriptor_s* x, int n);
struct zx_md_ContactPerson_s* zx_md_AttributeAuthorityDescriptor_GET_ContactPerson(struct zx_md_AttributeAuthorityDescriptor_s* x, int n);
struct zx_md_AttributeService_s* zx_md_AttributeAuthorityDescriptor_GET_AttributeService(struct zx_md_AttributeAuthorityDescriptor_s* x, int n);
struct zx_md_AssertionIDRequestService_s* zx_md_AttributeAuthorityDescriptor_GET_AssertionIDRequestService(struct zx_md_AttributeAuthorityDescriptor_s* x, int n);
struct zx_elem_s* zx_md_AttributeAuthorityDescriptor_GET_NameIDFormat(struct zx_md_AttributeAuthorityDescriptor_s* x, int n);
struct zx_elem_s* zx_md_AttributeAuthorityDescriptor_GET_AttributeProfile(struct zx_md_AttributeAuthorityDescriptor_s* x, int n);
struct zx_sa_Attribute_s* zx_md_AttributeAuthorityDescriptor_GET_Attribute(struct zx_md_AttributeAuthorityDescriptor_s* x, int n);

int zx_md_AttributeAuthorityDescriptor_NUM_Signature(struct zx_md_AttributeAuthorityDescriptor_s* x);
int zx_md_AttributeAuthorityDescriptor_NUM_Extensions(struct zx_md_AttributeAuthorityDescriptor_s* x);
int zx_md_AttributeAuthorityDescriptor_NUM_KeyDescriptor(struct zx_md_AttributeAuthorityDescriptor_s* x);
int zx_md_AttributeAuthorityDescriptor_NUM_Organization(struct zx_md_AttributeAuthorityDescriptor_s* x);
int zx_md_AttributeAuthorityDescriptor_NUM_ContactPerson(struct zx_md_AttributeAuthorityDescriptor_s* x);
int zx_md_AttributeAuthorityDescriptor_NUM_AttributeService(struct zx_md_AttributeAuthorityDescriptor_s* x);
int zx_md_AttributeAuthorityDescriptor_NUM_AssertionIDRequestService(struct zx_md_AttributeAuthorityDescriptor_s* x);
int zx_md_AttributeAuthorityDescriptor_NUM_NameIDFormat(struct zx_md_AttributeAuthorityDescriptor_s* x);
int zx_md_AttributeAuthorityDescriptor_NUM_AttributeProfile(struct zx_md_AttributeAuthorityDescriptor_s* x);
int zx_md_AttributeAuthorityDescriptor_NUM_Attribute(struct zx_md_AttributeAuthorityDescriptor_s* x);

struct zx_ds_Signature_s* zx_md_AttributeAuthorityDescriptor_POP_Signature(struct zx_md_AttributeAuthorityDescriptor_s* x);
struct zx_md_Extensions_s* zx_md_AttributeAuthorityDescriptor_POP_Extensions(struct zx_md_AttributeAuthorityDescriptor_s* x);
struct zx_md_KeyDescriptor_s* zx_md_AttributeAuthorityDescriptor_POP_KeyDescriptor(struct zx_md_AttributeAuthorityDescriptor_s* x);
struct zx_md_Organization_s* zx_md_AttributeAuthorityDescriptor_POP_Organization(struct zx_md_AttributeAuthorityDescriptor_s* x);
struct zx_md_ContactPerson_s* zx_md_AttributeAuthorityDescriptor_POP_ContactPerson(struct zx_md_AttributeAuthorityDescriptor_s* x);
struct zx_md_AttributeService_s* zx_md_AttributeAuthorityDescriptor_POP_AttributeService(struct zx_md_AttributeAuthorityDescriptor_s* x);
struct zx_md_AssertionIDRequestService_s* zx_md_AttributeAuthorityDescriptor_POP_AssertionIDRequestService(struct zx_md_AttributeAuthorityDescriptor_s* x);
struct zx_elem_s* zx_md_AttributeAuthorityDescriptor_POP_NameIDFormat(struct zx_md_AttributeAuthorityDescriptor_s* x);
struct zx_elem_s* zx_md_AttributeAuthorityDescriptor_POP_AttributeProfile(struct zx_md_AttributeAuthorityDescriptor_s* x);
struct zx_sa_Attribute_s* zx_md_AttributeAuthorityDescriptor_POP_Attribute(struct zx_md_AttributeAuthorityDescriptor_s* x);

void zx_md_AttributeAuthorityDescriptor_PUSH_Signature(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_ds_Signature_s* y);
void zx_md_AttributeAuthorityDescriptor_PUSH_Extensions(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_md_Extensions_s* y);
void zx_md_AttributeAuthorityDescriptor_PUSH_KeyDescriptor(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_md_KeyDescriptor_s* y);
void zx_md_AttributeAuthorityDescriptor_PUSH_Organization(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_md_Organization_s* y);
void zx_md_AttributeAuthorityDescriptor_PUSH_ContactPerson(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_md_ContactPerson_s* y);
void zx_md_AttributeAuthorityDescriptor_PUSH_AttributeService(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_md_AttributeService_s* y);
void zx_md_AttributeAuthorityDescriptor_PUSH_AssertionIDRequestService(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_md_AssertionIDRequestService_s* y);
void zx_md_AttributeAuthorityDescriptor_PUSH_NameIDFormat(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_elem_s* y);
void zx_md_AttributeAuthorityDescriptor_PUSH_AttributeProfile(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_elem_s* y);
void zx_md_AttributeAuthorityDescriptor_PUSH_Attribute(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_sa_Attribute_s* y);

void zx_md_AttributeAuthorityDescriptor_PUT_ID(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_str* y);
void zx_md_AttributeAuthorityDescriptor_PUT_validUntil(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_str* y);
void zx_md_AttributeAuthorityDescriptor_PUT_cacheDuration(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_str* y);
void zx_md_AttributeAuthorityDescriptor_PUT_protocolSupportEnumeration(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_str* y);
void zx_md_AttributeAuthorityDescriptor_PUT_errorURL(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_str* y);

void zx_md_AttributeAuthorityDescriptor_PUT_Signature(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_ds_Signature_s* y);
void zx_md_AttributeAuthorityDescriptor_PUT_Extensions(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_md_Extensions_s* y);
void zx_md_AttributeAuthorityDescriptor_PUT_KeyDescriptor(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* y);
void zx_md_AttributeAuthorityDescriptor_PUT_Organization(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_md_Organization_s* y);
void zx_md_AttributeAuthorityDescriptor_PUT_ContactPerson(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_md_ContactPerson_s* y);
void zx_md_AttributeAuthorityDescriptor_PUT_AttributeService(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_md_AttributeService_s* y);
void zx_md_AttributeAuthorityDescriptor_PUT_AssertionIDRequestService(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_md_AssertionIDRequestService_s* y);
void zx_md_AttributeAuthorityDescriptor_PUT_NameIDFormat(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_md_AttributeAuthorityDescriptor_PUT_AttributeProfile(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_md_AttributeAuthorityDescriptor_PUT_Attribute(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_sa_Attribute_s* y);

void zx_md_AttributeAuthorityDescriptor_ADD_Signature(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_ds_Signature_s* z);
void zx_md_AttributeAuthorityDescriptor_ADD_Extensions(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_md_Extensions_s* z);
void zx_md_AttributeAuthorityDescriptor_ADD_KeyDescriptor(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* z);
void zx_md_AttributeAuthorityDescriptor_ADD_Organization(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_md_Organization_s* z);
void zx_md_AttributeAuthorityDescriptor_ADD_ContactPerson(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_md_ContactPerson_s* z);
void zx_md_AttributeAuthorityDescriptor_ADD_AttributeService(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_md_AttributeService_s* z);
void zx_md_AttributeAuthorityDescriptor_ADD_AssertionIDRequestService(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_md_AssertionIDRequestService_s* z);
void zx_md_AttributeAuthorityDescriptor_ADD_NameIDFormat(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_md_AttributeAuthorityDescriptor_ADD_AttributeProfile(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_md_AttributeAuthorityDescriptor_ADD_Attribute(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_sa_Attribute_s* z);

void zx_md_AttributeAuthorityDescriptor_DEL_Signature(struct zx_md_AttributeAuthorityDescriptor_s* x, int n);
void zx_md_AttributeAuthorityDescriptor_DEL_Extensions(struct zx_md_AttributeAuthorityDescriptor_s* x, int n);
void zx_md_AttributeAuthorityDescriptor_DEL_KeyDescriptor(struct zx_md_AttributeAuthorityDescriptor_s* x, int n);
void zx_md_AttributeAuthorityDescriptor_DEL_Organization(struct zx_md_AttributeAuthorityDescriptor_s* x, int n);
void zx_md_AttributeAuthorityDescriptor_DEL_ContactPerson(struct zx_md_AttributeAuthorityDescriptor_s* x, int n);
void zx_md_AttributeAuthorityDescriptor_DEL_AttributeService(struct zx_md_AttributeAuthorityDescriptor_s* x, int n);
void zx_md_AttributeAuthorityDescriptor_DEL_AssertionIDRequestService(struct zx_md_AttributeAuthorityDescriptor_s* x, int n);
void zx_md_AttributeAuthorityDescriptor_DEL_NameIDFormat(struct zx_md_AttributeAuthorityDescriptor_s* x, int n);
void zx_md_AttributeAuthorityDescriptor_DEL_AttributeProfile(struct zx_md_AttributeAuthorityDescriptor_s* x, int n);
void zx_md_AttributeAuthorityDescriptor_DEL_Attribute(struct zx_md_AttributeAuthorityDescriptor_s* x, int n);

void zx_md_AttributeAuthorityDescriptor_REV_Signature(struct zx_md_AttributeAuthorityDescriptor_s* x);
void zx_md_AttributeAuthorityDescriptor_REV_Extensions(struct zx_md_AttributeAuthorityDescriptor_s* x);
void zx_md_AttributeAuthorityDescriptor_REV_KeyDescriptor(struct zx_md_AttributeAuthorityDescriptor_s* x);
void zx_md_AttributeAuthorityDescriptor_REV_Organization(struct zx_md_AttributeAuthorityDescriptor_s* x);
void zx_md_AttributeAuthorityDescriptor_REV_ContactPerson(struct zx_md_AttributeAuthorityDescriptor_s* x);
void zx_md_AttributeAuthorityDescriptor_REV_AttributeService(struct zx_md_AttributeAuthorityDescriptor_s* x);
void zx_md_AttributeAuthorityDescriptor_REV_AssertionIDRequestService(struct zx_md_AttributeAuthorityDescriptor_s* x);
void zx_md_AttributeAuthorityDescriptor_REV_NameIDFormat(struct zx_md_AttributeAuthorityDescriptor_s* x);
void zx_md_AttributeAuthorityDescriptor_REV_AttributeProfile(struct zx_md_AttributeAuthorityDescriptor_s* x);
void zx_md_AttributeAuthorityDescriptor_REV_Attribute(struct zx_md_AttributeAuthorityDescriptor_s* x);

#endif
/* -------------------------- md_AttributeConsumingService -------------------------- */
/* refby( zx_md_SPSSODescriptor_s ) */
#ifndef zx_md_AttributeConsumingService_EXT
#define zx_md_AttributeConsumingService_EXT
#endif

struct zx_md_AttributeConsumingService_s* zx_DEC_md_AttributeConsumingService(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_AttributeConsumingService_s* zx_NEW_md_AttributeConsumingService(struct zx_ctx* c);
void zx_FREE_md_AttributeConsumingService(struct zx_ctx* c, struct zx_md_AttributeConsumingService_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_AttributeConsumingService_s* zx_DEEP_CLONE_md_AttributeConsumingService(struct zx_ctx* c, struct zx_md_AttributeConsumingService_s* x, int dup_strs);
void zx_DUP_STRS_md_AttributeConsumingService(struct zx_ctx* c, struct zx_md_AttributeConsumingService_s* x);
int zx_WALK_SO_md_AttributeConsumingService(struct zx_ctx* c, struct zx_md_AttributeConsumingService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_AttributeConsumingService(struct zx_ctx* c, struct zx_md_AttributeConsumingService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_AttributeConsumingService(struct zx_ctx* c, struct zx_md_AttributeConsumingService_s* x);
int zx_LEN_WO_md_AttributeConsumingService(struct zx_ctx* c, struct zx_md_AttributeConsumingService_s* x);
char* zx_ENC_SO_md_AttributeConsumingService(struct zx_ctx* c, struct zx_md_AttributeConsumingService_s* x, char* p);
char* zx_ENC_WO_md_AttributeConsumingService(struct zx_ctx* c, struct zx_md_AttributeConsumingService_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_AttributeConsumingService(struct zx_ctx* c, struct zx_md_AttributeConsumingService_s* x);
struct zx_str* zx_EASY_ENC_WO_md_AttributeConsumingService(struct zx_ctx* c, struct zx_md_AttributeConsumingService_s* x);

struct zx_md_AttributeConsumingService_s {
  ZX_ELEM_EXT
  zx_md_AttributeConsumingService_EXT
  struct zx_md_ServiceName_s* ServiceName;	/* {1,-1} nada */
  struct zx_md_ServiceDescription_s* ServiceDescription;	/* {0,-1} nada */
  struct zx_md_RequestedAttribute_s* RequestedAttribute;	/* {1,-1} nada */
  struct zx_str* index;	/* {1,1} attribute xs:unsignedShort */
  struct zx_str* isDefault;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_AttributeConsumingService_GET_index(struct zx_md_AttributeConsumingService_s* x);
struct zx_str* zx_md_AttributeConsumingService_GET_isDefault(struct zx_md_AttributeConsumingService_s* x);

struct zx_md_ServiceName_s* zx_md_AttributeConsumingService_GET_ServiceName(struct zx_md_AttributeConsumingService_s* x, int n);
struct zx_md_ServiceDescription_s* zx_md_AttributeConsumingService_GET_ServiceDescription(struct zx_md_AttributeConsumingService_s* x, int n);
struct zx_md_RequestedAttribute_s* zx_md_AttributeConsumingService_GET_RequestedAttribute(struct zx_md_AttributeConsumingService_s* x, int n);

int zx_md_AttributeConsumingService_NUM_ServiceName(struct zx_md_AttributeConsumingService_s* x);
int zx_md_AttributeConsumingService_NUM_ServiceDescription(struct zx_md_AttributeConsumingService_s* x);
int zx_md_AttributeConsumingService_NUM_RequestedAttribute(struct zx_md_AttributeConsumingService_s* x);

struct zx_md_ServiceName_s* zx_md_AttributeConsumingService_POP_ServiceName(struct zx_md_AttributeConsumingService_s* x);
struct zx_md_ServiceDescription_s* zx_md_AttributeConsumingService_POP_ServiceDescription(struct zx_md_AttributeConsumingService_s* x);
struct zx_md_RequestedAttribute_s* zx_md_AttributeConsumingService_POP_RequestedAttribute(struct zx_md_AttributeConsumingService_s* x);

void zx_md_AttributeConsumingService_PUSH_ServiceName(struct zx_md_AttributeConsumingService_s* x, struct zx_md_ServiceName_s* y);
void zx_md_AttributeConsumingService_PUSH_ServiceDescription(struct zx_md_AttributeConsumingService_s* x, struct zx_md_ServiceDescription_s* y);
void zx_md_AttributeConsumingService_PUSH_RequestedAttribute(struct zx_md_AttributeConsumingService_s* x, struct zx_md_RequestedAttribute_s* y);

void zx_md_AttributeConsumingService_PUT_index(struct zx_md_AttributeConsumingService_s* x, struct zx_str* y);
void zx_md_AttributeConsumingService_PUT_isDefault(struct zx_md_AttributeConsumingService_s* x, struct zx_str* y);

void zx_md_AttributeConsumingService_PUT_ServiceName(struct zx_md_AttributeConsumingService_s* x, int n, struct zx_md_ServiceName_s* y);
void zx_md_AttributeConsumingService_PUT_ServiceDescription(struct zx_md_AttributeConsumingService_s* x, int n, struct zx_md_ServiceDescription_s* y);
void zx_md_AttributeConsumingService_PUT_RequestedAttribute(struct zx_md_AttributeConsumingService_s* x, int n, struct zx_md_RequestedAttribute_s* y);

void zx_md_AttributeConsumingService_ADD_ServiceName(struct zx_md_AttributeConsumingService_s* x, int n, struct zx_md_ServiceName_s* z);
void zx_md_AttributeConsumingService_ADD_ServiceDescription(struct zx_md_AttributeConsumingService_s* x, int n, struct zx_md_ServiceDescription_s* z);
void zx_md_AttributeConsumingService_ADD_RequestedAttribute(struct zx_md_AttributeConsumingService_s* x, int n, struct zx_md_RequestedAttribute_s* z);

void zx_md_AttributeConsumingService_DEL_ServiceName(struct zx_md_AttributeConsumingService_s* x, int n);
void zx_md_AttributeConsumingService_DEL_ServiceDescription(struct zx_md_AttributeConsumingService_s* x, int n);
void zx_md_AttributeConsumingService_DEL_RequestedAttribute(struct zx_md_AttributeConsumingService_s* x, int n);

void zx_md_AttributeConsumingService_REV_ServiceName(struct zx_md_AttributeConsumingService_s* x);
void zx_md_AttributeConsumingService_REV_ServiceDescription(struct zx_md_AttributeConsumingService_s* x);
void zx_md_AttributeConsumingService_REV_RequestedAttribute(struct zx_md_AttributeConsumingService_s* x);

#endif
/* -------------------------- md_AttributeService -------------------------- */
/* refby( zx_md_AttributeAuthorityDescriptor_s ) */
#ifndef zx_md_AttributeService_EXT
#define zx_md_AttributeService_EXT
#endif

struct zx_md_AttributeService_s* zx_DEC_md_AttributeService(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_AttributeService_s* zx_NEW_md_AttributeService(struct zx_ctx* c);
void zx_FREE_md_AttributeService(struct zx_ctx* c, struct zx_md_AttributeService_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_AttributeService_s* zx_DEEP_CLONE_md_AttributeService(struct zx_ctx* c, struct zx_md_AttributeService_s* x, int dup_strs);
void zx_DUP_STRS_md_AttributeService(struct zx_ctx* c, struct zx_md_AttributeService_s* x);
int zx_WALK_SO_md_AttributeService(struct zx_ctx* c, struct zx_md_AttributeService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_AttributeService(struct zx_ctx* c, struct zx_md_AttributeService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_AttributeService(struct zx_ctx* c, struct zx_md_AttributeService_s* x);
int zx_LEN_WO_md_AttributeService(struct zx_ctx* c, struct zx_md_AttributeService_s* x);
char* zx_ENC_SO_md_AttributeService(struct zx_ctx* c, struct zx_md_AttributeService_s* x, char* p);
char* zx_ENC_WO_md_AttributeService(struct zx_ctx* c, struct zx_md_AttributeService_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_AttributeService(struct zx_ctx* c, struct zx_md_AttributeService_s* x);
struct zx_str* zx_EASY_ENC_WO_md_AttributeService(struct zx_ctx* c, struct zx_md_AttributeService_s* x);

struct zx_md_AttributeService_s {
  ZX_ELEM_EXT
  zx_md_AttributeService_EXT
  struct zx_str* Binding;	/* {1,1} attribute xs:anyURI */
  struct zx_str* Location;	/* {1,1} attribute xs:anyURI */
  struct zx_str* ResponseLocation;	/* {0,1} attribute xs:anyURI */
  struct zx_str* index;	/* {0,1} attribute xs:unsignedShort */
  struct zx_str* isDefault;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_AttributeService_GET_Binding(struct zx_md_AttributeService_s* x);
struct zx_str* zx_md_AttributeService_GET_Location(struct zx_md_AttributeService_s* x);
struct zx_str* zx_md_AttributeService_GET_ResponseLocation(struct zx_md_AttributeService_s* x);
struct zx_str* zx_md_AttributeService_GET_index(struct zx_md_AttributeService_s* x);
struct zx_str* zx_md_AttributeService_GET_isDefault(struct zx_md_AttributeService_s* x);





void zx_md_AttributeService_PUT_Binding(struct zx_md_AttributeService_s* x, struct zx_str* y);
void zx_md_AttributeService_PUT_Location(struct zx_md_AttributeService_s* x, struct zx_str* y);
void zx_md_AttributeService_PUT_ResponseLocation(struct zx_md_AttributeService_s* x, struct zx_str* y);
void zx_md_AttributeService_PUT_index(struct zx_md_AttributeService_s* x, struct zx_str* y);
void zx_md_AttributeService_PUT_isDefault(struct zx_md_AttributeService_s* x, struct zx_str* y);





#endif
/* -------------------------- md_AuthnAuthorityDescriptor -------------------------- */
/* refby( zx_md_EntityDescriptor_s ) */
#ifndef zx_md_AuthnAuthorityDescriptor_EXT
#define zx_md_AuthnAuthorityDescriptor_EXT
#endif

struct zx_md_AuthnAuthorityDescriptor_s* zx_DEC_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_AuthnAuthorityDescriptor_s* zx_NEW_md_AuthnAuthorityDescriptor(struct zx_ctx* c);
void zx_FREE_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zx_md_AuthnAuthorityDescriptor_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_AuthnAuthorityDescriptor_s* zx_DEEP_CLONE_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zx_md_AuthnAuthorityDescriptor_s* x, int dup_strs);
void zx_DUP_STRS_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zx_md_AuthnAuthorityDescriptor_s* x);
int zx_WALK_SO_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zx_md_AuthnAuthorityDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zx_md_AuthnAuthorityDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zx_md_AuthnAuthorityDescriptor_s* x);
int zx_LEN_WO_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zx_md_AuthnAuthorityDescriptor_s* x);
char* zx_ENC_SO_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zx_md_AuthnAuthorityDescriptor_s* x, char* p);
char* zx_ENC_WO_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zx_md_AuthnAuthorityDescriptor_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zx_md_AuthnAuthorityDescriptor_s* x);
struct zx_str* zx_EASY_ENC_WO_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zx_md_AuthnAuthorityDescriptor_s* x);

struct zx_md_AuthnAuthorityDescriptor_s {
  ZX_ELEM_EXT
  zx_md_AuthnAuthorityDescriptor_EXT
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_md_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_md_KeyDescriptor_s* KeyDescriptor;	/* {0,-1} nada */
  struct zx_md_Organization_s* Organization;	/* {0,1} nada */
  struct zx_md_ContactPerson_s* ContactPerson;	/* {0,-1} nada */
  struct zx_md_AuthnQueryService_s* AuthnQueryService;	/* {1,-1} nada */
  struct zx_md_AssertionIDRequestService_s* AssertionIDRequestService;	/* {0,-1} nada */
  struct zx_elem_s* NameIDFormat;	/* {0,-1} xs:anyURI */
  struct zx_str* ID;	/* {0,1} attribute xs:ID */
  struct zx_str* validUntil;	/* {0,1} attribute xs:dateTime */
  struct zx_str* cacheDuration;	/* {0,1} attribute xs:duration */
  struct zx_str* protocolSupportEnumeration;	/* {1,1} attribute xs:string */
  struct zx_str* errorURL;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_AuthnAuthorityDescriptor_GET_ID(struct zx_md_AuthnAuthorityDescriptor_s* x);
struct zx_str* zx_md_AuthnAuthorityDescriptor_GET_validUntil(struct zx_md_AuthnAuthorityDescriptor_s* x);
struct zx_str* zx_md_AuthnAuthorityDescriptor_GET_cacheDuration(struct zx_md_AuthnAuthorityDescriptor_s* x);
struct zx_str* zx_md_AuthnAuthorityDescriptor_GET_protocolSupportEnumeration(struct zx_md_AuthnAuthorityDescriptor_s* x);
struct zx_str* zx_md_AuthnAuthorityDescriptor_GET_errorURL(struct zx_md_AuthnAuthorityDescriptor_s* x);

struct zx_ds_Signature_s* zx_md_AuthnAuthorityDescriptor_GET_Signature(struct zx_md_AuthnAuthorityDescriptor_s* x, int n);
struct zx_md_Extensions_s* zx_md_AuthnAuthorityDescriptor_GET_Extensions(struct zx_md_AuthnAuthorityDescriptor_s* x, int n);
struct zx_md_KeyDescriptor_s* zx_md_AuthnAuthorityDescriptor_GET_KeyDescriptor(struct zx_md_AuthnAuthorityDescriptor_s* x, int n);
struct zx_md_Organization_s* zx_md_AuthnAuthorityDescriptor_GET_Organization(struct zx_md_AuthnAuthorityDescriptor_s* x, int n);
struct zx_md_ContactPerson_s* zx_md_AuthnAuthorityDescriptor_GET_ContactPerson(struct zx_md_AuthnAuthorityDescriptor_s* x, int n);
struct zx_md_AuthnQueryService_s* zx_md_AuthnAuthorityDescriptor_GET_AuthnQueryService(struct zx_md_AuthnAuthorityDescriptor_s* x, int n);
struct zx_md_AssertionIDRequestService_s* zx_md_AuthnAuthorityDescriptor_GET_AssertionIDRequestService(struct zx_md_AuthnAuthorityDescriptor_s* x, int n);
struct zx_elem_s* zx_md_AuthnAuthorityDescriptor_GET_NameIDFormat(struct zx_md_AuthnAuthorityDescriptor_s* x, int n);

int zx_md_AuthnAuthorityDescriptor_NUM_Signature(struct zx_md_AuthnAuthorityDescriptor_s* x);
int zx_md_AuthnAuthorityDescriptor_NUM_Extensions(struct zx_md_AuthnAuthorityDescriptor_s* x);
int zx_md_AuthnAuthorityDescriptor_NUM_KeyDescriptor(struct zx_md_AuthnAuthorityDescriptor_s* x);
int zx_md_AuthnAuthorityDescriptor_NUM_Organization(struct zx_md_AuthnAuthorityDescriptor_s* x);
int zx_md_AuthnAuthorityDescriptor_NUM_ContactPerson(struct zx_md_AuthnAuthorityDescriptor_s* x);
int zx_md_AuthnAuthorityDescriptor_NUM_AuthnQueryService(struct zx_md_AuthnAuthorityDescriptor_s* x);
int zx_md_AuthnAuthorityDescriptor_NUM_AssertionIDRequestService(struct zx_md_AuthnAuthorityDescriptor_s* x);
int zx_md_AuthnAuthorityDescriptor_NUM_NameIDFormat(struct zx_md_AuthnAuthorityDescriptor_s* x);

struct zx_ds_Signature_s* zx_md_AuthnAuthorityDescriptor_POP_Signature(struct zx_md_AuthnAuthorityDescriptor_s* x);
struct zx_md_Extensions_s* zx_md_AuthnAuthorityDescriptor_POP_Extensions(struct zx_md_AuthnAuthorityDescriptor_s* x);
struct zx_md_KeyDescriptor_s* zx_md_AuthnAuthorityDescriptor_POP_KeyDescriptor(struct zx_md_AuthnAuthorityDescriptor_s* x);
struct zx_md_Organization_s* zx_md_AuthnAuthorityDescriptor_POP_Organization(struct zx_md_AuthnAuthorityDescriptor_s* x);
struct zx_md_ContactPerson_s* zx_md_AuthnAuthorityDescriptor_POP_ContactPerson(struct zx_md_AuthnAuthorityDescriptor_s* x);
struct zx_md_AuthnQueryService_s* zx_md_AuthnAuthorityDescriptor_POP_AuthnQueryService(struct zx_md_AuthnAuthorityDescriptor_s* x);
struct zx_md_AssertionIDRequestService_s* zx_md_AuthnAuthorityDescriptor_POP_AssertionIDRequestService(struct zx_md_AuthnAuthorityDescriptor_s* x);
struct zx_elem_s* zx_md_AuthnAuthorityDescriptor_POP_NameIDFormat(struct zx_md_AuthnAuthorityDescriptor_s* x);

void zx_md_AuthnAuthorityDescriptor_PUSH_Signature(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_ds_Signature_s* y);
void zx_md_AuthnAuthorityDescriptor_PUSH_Extensions(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_md_Extensions_s* y);
void zx_md_AuthnAuthorityDescriptor_PUSH_KeyDescriptor(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_md_KeyDescriptor_s* y);
void zx_md_AuthnAuthorityDescriptor_PUSH_Organization(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_md_Organization_s* y);
void zx_md_AuthnAuthorityDescriptor_PUSH_ContactPerson(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_md_ContactPerson_s* y);
void zx_md_AuthnAuthorityDescriptor_PUSH_AuthnQueryService(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_md_AuthnQueryService_s* y);
void zx_md_AuthnAuthorityDescriptor_PUSH_AssertionIDRequestService(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_md_AssertionIDRequestService_s* y);
void zx_md_AuthnAuthorityDescriptor_PUSH_NameIDFormat(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_elem_s* y);

void zx_md_AuthnAuthorityDescriptor_PUT_ID(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_str* y);
void zx_md_AuthnAuthorityDescriptor_PUT_validUntil(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_str* y);
void zx_md_AuthnAuthorityDescriptor_PUT_cacheDuration(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_str* y);
void zx_md_AuthnAuthorityDescriptor_PUT_protocolSupportEnumeration(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_str* y);
void zx_md_AuthnAuthorityDescriptor_PUT_errorURL(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_str* y);

void zx_md_AuthnAuthorityDescriptor_PUT_Signature(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_ds_Signature_s* y);
void zx_md_AuthnAuthorityDescriptor_PUT_Extensions(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_md_Extensions_s* y);
void zx_md_AuthnAuthorityDescriptor_PUT_KeyDescriptor(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* y);
void zx_md_AuthnAuthorityDescriptor_PUT_Organization(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_md_Organization_s* y);
void zx_md_AuthnAuthorityDescriptor_PUT_ContactPerson(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_md_ContactPerson_s* y);
void zx_md_AuthnAuthorityDescriptor_PUT_AuthnQueryService(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_md_AuthnQueryService_s* y);
void zx_md_AuthnAuthorityDescriptor_PUT_AssertionIDRequestService(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_md_AssertionIDRequestService_s* y);
void zx_md_AuthnAuthorityDescriptor_PUT_NameIDFormat(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_elem_s* y);

void zx_md_AuthnAuthorityDescriptor_ADD_Signature(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_ds_Signature_s* z);
void zx_md_AuthnAuthorityDescriptor_ADD_Extensions(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_md_Extensions_s* z);
void zx_md_AuthnAuthorityDescriptor_ADD_KeyDescriptor(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* z);
void zx_md_AuthnAuthorityDescriptor_ADD_Organization(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_md_Organization_s* z);
void zx_md_AuthnAuthorityDescriptor_ADD_ContactPerson(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_md_ContactPerson_s* z);
void zx_md_AuthnAuthorityDescriptor_ADD_AuthnQueryService(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_md_AuthnQueryService_s* z);
void zx_md_AuthnAuthorityDescriptor_ADD_AssertionIDRequestService(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_md_AssertionIDRequestService_s* z);
void zx_md_AuthnAuthorityDescriptor_ADD_NameIDFormat(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_elem_s* z);

void zx_md_AuthnAuthorityDescriptor_DEL_Signature(struct zx_md_AuthnAuthorityDescriptor_s* x, int n);
void zx_md_AuthnAuthorityDescriptor_DEL_Extensions(struct zx_md_AuthnAuthorityDescriptor_s* x, int n);
void zx_md_AuthnAuthorityDescriptor_DEL_KeyDescriptor(struct zx_md_AuthnAuthorityDescriptor_s* x, int n);
void zx_md_AuthnAuthorityDescriptor_DEL_Organization(struct zx_md_AuthnAuthorityDescriptor_s* x, int n);
void zx_md_AuthnAuthorityDescriptor_DEL_ContactPerson(struct zx_md_AuthnAuthorityDescriptor_s* x, int n);
void zx_md_AuthnAuthorityDescriptor_DEL_AuthnQueryService(struct zx_md_AuthnAuthorityDescriptor_s* x, int n);
void zx_md_AuthnAuthorityDescriptor_DEL_AssertionIDRequestService(struct zx_md_AuthnAuthorityDescriptor_s* x, int n);
void zx_md_AuthnAuthorityDescriptor_DEL_NameIDFormat(struct zx_md_AuthnAuthorityDescriptor_s* x, int n);

void zx_md_AuthnAuthorityDescriptor_REV_Signature(struct zx_md_AuthnAuthorityDescriptor_s* x);
void zx_md_AuthnAuthorityDescriptor_REV_Extensions(struct zx_md_AuthnAuthorityDescriptor_s* x);
void zx_md_AuthnAuthorityDescriptor_REV_KeyDescriptor(struct zx_md_AuthnAuthorityDescriptor_s* x);
void zx_md_AuthnAuthorityDescriptor_REV_Organization(struct zx_md_AuthnAuthorityDescriptor_s* x);
void zx_md_AuthnAuthorityDescriptor_REV_ContactPerson(struct zx_md_AuthnAuthorityDescriptor_s* x);
void zx_md_AuthnAuthorityDescriptor_REV_AuthnQueryService(struct zx_md_AuthnAuthorityDescriptor_s* x);
void zx_md_AuthnAuthorityDescriptor_REV_AssertionIDRequestService(struct zx_md_AuthnAuthorityDescriptor_s* x);
void zx_md_AuthnAuthorityDescriptor_REV_NameIDFormat(struct zx_md_AuthnAuthorityDescriptor_s* x);

#endif
/* -------------------------- md_AuthnQueryService -------------------------- */
/* refby( zx_md_AuthnAuthorityDescriptor_s ) */
#ifndef zx_md_AuthnQueryService_EXT
#define zx_md_AuthnQueryService_EXT
#endif

struct zx_md_AuthnQueryService_s* zx_DEC_md_AuthnQueryService(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_AuthnQueryService_s* zx_NEW_md_AuthnQueryService(struct zx_ctx* c);
void zx_FREE_md_AuthnQueryService(struct zx_ctx* c, struct zx_md_AuthnQueryService_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_AuthnQueryService_s* zx_DEEP_CLONE_md_AuthnQueryService(struct zx_ctx* c, struct zx_md_AuthnQueryService_s* x, int dup_strs);
void zx_DUP_STRS_md_AuthnQueryService(struct zx_ctx* c, struct zx_md_AuthnQueryService_s* x);
int zx_WALK_SO_md_AuthnQueryService(struct zx_ctx* c, struct zx_md_AuthnQueryService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_AuthnQueryService(struct zx_ctx* c, struct zx_md_AuthnQueryService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_AuthnQueryService(struct zx_ctx* c, struct zx_md_AuthnQueryService_s* x);
int zx_LEN_WO_md_AuthnQueryService(struct zx_ctx* c, struct zx_md_AuthnQueryService_s* x);
char* zx_ENC_SO_md_AuthnQueryService(struct zx_ctx* c, struct zx_md_AuthnQueryService_s* x, char* p);
char* zx_ENC_WO_md_AuthnQueryService(struct zx_ctx* c, struct zx_md_AuthnQueryService_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_AuthnQueryService(struct zx_ctx* c, struct zx_md_AuthnQueryService_s* x);
struct zx_str* zx_EASY_ENC_WO_md_AuthnQueryService(struct zx_ctx* c, struct zx_md_AuthnQueryService_s* x);

struct zx_md_AuthnQueryService_s {
  ZX_ELEM_EXT
  zx_md_AuthnQueryService_EXT
  struct zx_str* Binding;	/* {1,1} attribute xs:anyURI */
  struct zx_str* Location;	/* {1,1} attribute xs:anyURI */
  struct zx_str* ResponseLocation;	/* {0,1} attribute xs:anyURI */
  struct zx_str* index;	/* {0,1} attribute xs:unsignedShort */
  struct zx_str* isDefault;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_AuthnQueryService_GET_Binding(struct zx_md_AuthnQueryService_s* x);
struct zx_str* zx_md_AuthnQueryService_GET_Location(struct zx_md_AuthnQueryService_s* x);
struct zx_str* zx_md_AuthnQueryService_GET_ResponseLocation(struct zx_md_AuthnQueryService_s* x);
struct zx_str* zx_md_AuthnQueryService_GET_index(struct zx_md_AuthnQueryService_s* x);
struct zx_str* zx_md_AuthnQueryService_GET_isDefault(struct zx_md_AuthnQueryService_s* x);





void zx_md_AuthnQueryService_PUT_Binding(struct zx_md_AuthnQueryService_s* x, struct zx_str* y);
void zx_md_AuthnQueryService_PUT_Location(struct zx_md_AuthnQueryService_s* x, struct zx_str* y);
void zx_md_AuthnQueryService_PUT_ResponseLocation(struct zx_md_AuthnQueryService_s* x, struct zx_str* y);
void zx_md_AuthnQueryService_PUT_index(struct zx_md_AuthnQueryService_s* x, struct zx_str* y);
void zx_md_AuthnQueryService_PUT_isDefault(struct zx_md_AuthnQueryService_s* x, struct zx_str* y);





#endif
/* -------------------------- md_AuthzService -------------------------- */
/* refby( zx_md_PDPDescriptor_s ) */
#ifndef zx_md_AuthzService_EXT
#define zx_md_AuthzService_EXT
#endif

struct zx_md_AuthzService_s* zx_DEC_md_AuthzService(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_AuthzService_s* zx_NEW_md_AuthzService(struct zx_ctx* c);
void zx_FREE_md_AuthzService(struct zx_ctx* c, struct zx_md_AuthzService_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_AuthzService_s* zx_DEEP_CLONE_md_AuthzService(struct zx_ctx* c, struct zx_md_AuthzService_s* x, int dup_strs);
void zx_DUP_STRS_md_AuthzService(struct zx_ctx* c, struct zx_md_AuthzService_s* x);
int zx_WALK_SO_md_AuthzService(struct zx_ctx* c, struct zx_md_AuthzService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_AuthzService(struct zx_ctx* c, struct zx_md_AuthzService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_AuthzService(struct zx_ctx* c, struct zx_md_AuthzService_s* x);
int zx_LEN_WO_md_AuthzService(struct zx_ctx* c, struct zx_md_AuthzService_s* x);
char* zx_ENC_SO_md_AuthzService(struct zx_ctx* c, struct zx_md_AuthzService_s* x, char* p);
char* zx_ENC_WO_md_AuthzService(struct zx_ctx* c, struct zx_md_AuthzService_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_AuthzService(struct zx_ctx* c, struct zx_md_AuthzService_s* x);
struct zx_str* zx_EASY_ENC_WO_md_AuthzService(struct zx_ctx* c, struct zx_md_AuthzService_s* x);

struct zx_md_AuthzService_s {
  ZX_ELEM_EXT
  zx_md_AuthzService_EXT
  struct zx_str* Binding;	/* {1,1} attribute xs:anyURI */
  struct zx_str* Location;	/* {1,1} attribute xs:anyURI */
  struct zx_str* ResponseLocation;	/* {0,1} attribute xs:anyURI */
  struct zx_str* index;	/* {0,1} attribute xs:unsignedShort */
  struct zx_str* isDefault;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_AuthzService_GET_Binding(struct zx_md_AuthzService_s* x);
struct zx_str* zx_md_AuthzService_GET_Location(struct zx_md_AuthzService_s* x);
struct zx_str* zx_md_AuthzService_GET_ResponseLocation(struct zx_md_AuthzService_s* x);
struct zx_str* zx_md_AuthzService_GET_index(struct zx_md_AuthzService_s* x);
struct zx_str* zx_md_AuthzService_GET_isDefault(struct zx_md_AuthzService_s* x);





void zx_md_AuthzService_PUT_Binding(struct zx_md_AuthzService_s* x, struct zx_str* y);
void zx_md_AuthzService_PUT_Location(struct zx_md_AuthzService_s* x, struct zx_str* y);
void zx_md_AuthzService_PUT_ResponseLocation(struct zx_md_AuthzService_s* x, struct zx_str* y);
void zx_md_AuthzService_PUT_index(struct zx_md_AuthzService_s* x, struct zx_str* y);
void zx_md_AuthzService_PUT_isDefault(struct zx_md_AuthzService_s* x, struct zx_str* y);





#endif
/* -------------------------- md_ContactPerson -------------------------- */
/* refby( zx_md_EntityDescriptor_s zx_md_PDPDescriptor_s zx_md_RoleDescriptor_s zx_md_SPSSODescriptor_s zx_md_AuthnAuthorityDescriptor_s zx_md_AttributeAuthorityDescriptor_s zx_md_IDPSSODescriptor_s ) */
#ifndef zx_md_ContactPerson_EXT
#define zx_md_ContactPerson_EXT
#endif

struct zx_md_ContactPerson_s* zx_DEC_md_ContactPerson(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_ContactPerson_s* zx_NEW_md_ContactPerson(struct zx_ctx* c);
void zx_FREE_md_ContactPerson(struct zx_ctx* c, struct zx_md_ContactPerson_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_ContactPerson_s* zx_DEEP_CLONE_md_ContactPerson(struct zx_ctx* c, struct zx_md_ContactPerson_s* x, int dup_strs);
void zx_DUP_STRS_md_ContactPerson(struct zx_ctx* c, struct zx_md_ContactPerson_s* x);
int zx_WALK_SO_md_ContactPerson(struct zx_ctx* c, struct zx_md_ContactPerson_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_ContactPerson(struct zx_ctx* c, struct zx_md_ContactPerson_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_ContactPerson(struct zx_ctx* c, struct zx_md_ContactPerson_s* x);
int zx_LEN_WO_md_ContactPerson(struct zx_ctx* c, struct zx_md_ContactPerson_s* x);
char* zx_ENC_SO_md_ContactPerson(struct zx_ctx* c, struct zx_md_ContactPerson_s* x, char* p);
char* zx_ENC_WO_md_ContactPerson(struct zx_ctx* c, struct zx_md_ContactPerson_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_ContactPerson(struct zx_ctx* c, struct zx_md_ContactPerson_s* x);
struct zx_str* zx_EASY_ENC_WO_md_ContactPerson(struct zx_ctx* c, struct zx_md_ContactPerson_s* x);

struct zx_md_ContactPerson_s {
  ZX_ELEM_EXT
  zx_md_ContactPerson_EXT
  struct zx_md_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_elem_s* Company;	/* {0,1} xs:string */
  struct zx_elem_s* GivenName;	/* {0,1} xs:string */
  struct zx_elem_s* SurName;	/* {0,1} xs:string */
  struct zx_elem_s* EmailAddress;	/* {0,-1} xs:anyURI */
  struct zx_elem_s* TelephoneNumber;	/* {0,-1} xs:string */
  struct zx_str* contactType;	/* {1,1} attribute hrxml:ContactTypeStringExtensionType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_ContactPerson_GET_contactType(struct zx_md_ContactPerson_s* x);

struct zx_md_Extensions_s* zx_md_ContactPerson_GET_Extensions(struct zx_md_ContactPerson_s* x, int n);
struct zx_elem_s* zx_md_ContactPerson_GET_Company(struct zx_md_ContactPerson_s* x, int n);
struct zx_elem_s* zx_md_ContactPerson_GET_GivenName(struct zx_md_ContactPerson_s* x, int n);
struct zx_elem_s* zx_md_ContactPerson_GET_SurName(struct zx_md_ContactPerson_s* x, int n);
struct zx_elem_s* zx_md_ContactPerson_GET_EmailAddress(struct zx_md_ContactPerson_s* x, int n);
struct zx_elem_s* zx_md_ContactPerson_GET_TelephoneNumber(struct zx_md_ContactPerson_s* x, int n);

int zx_md_ContactPerson_NUM_Extensions(struct zx_md_ContactPerson_s* x);
int zx_md_ContactPerson_NUM_Company(struct zx_md_ContactPerson_s* x);
int zx_md_ContactPerson_NUM_GivenName(struct zx_md_ContactPerson_s* x);
int zx_md_ContactPerson_NUM_SurName(struct zx_md_ContactPerson_s* x);
int zx_md_ContactPerson_NUM_EmailAddress(struct zx_md_ContactPerson_s* x);
int zx_md_ContactPerson_NUM_TelephoneNumber(struct zx_md_ContactPerson_s* x);

struct zx_md_Extensions_s* zx_md_ContactPerson_POP_Extensions(struct zx_md_ContactPerson_s* x);
struct zx_elem_s* zx_md_ContactPerson_POP_Company(struct zx_md_ContactPerson_s* x);
struct zx_elem_s* zx_md_ContactPerson_POP_GivenName(struct zx_md_ContactPerson_s* x);
struct zx_elem_s* zx_md_ContactPerson_POP_SurName(struct zx_md_ContactPerson_s* x);
struct zx_elem_s* zx_md_ContactPerson_POP_EmailAddress(struct zx_md_ContactPerson_s* x);
struct zx_elem_s* zx_md_ContactPerson_POP_TelephoneNumber(struct zx_md_ContactPerson_s* x);

void zx_md_ContactPerson_PUSH_Extensions(struct zx_md_ContactPerson_s* x, struct zx_md_Extensions_s* y);
void zx_md_ContactPerson_PUSH_Company(struct zx_md_ContactPerson_s* x, struct zx_elem_s* y);
void zx_md_ContactPerson_PUSH_GivenName(struct zx_md_ContactPerson_s* x, struct zx_elem_s* y);
void zx_md_ContactPerson_PUSH_SurName(struct zx_md_ContactPerson_s* x, struct zx_elem_s* y);
void zx_md_ContactPerson_PUSH_EmailAddress(struct zx_md_ContactPerson_s* x, struct zx_elem_s* y);
void zx_md_ContactPerson_PUSH_TelephoneNumber(struct zx_md_ContactPerson_s* x, struct zx_elem_s* y);

void zx_md_ContactPerson_PUT_contactType(struct zx_md_ContactPerson_s* x, struct zx_str* y);

void zx_md_ContactPerson_PUT_Extensions(struct zx_md_ContactPerson_s* x, int n, struct zx_md_Extensions_s* y);
void zx_md_ContactPerson_PUT_Company(struct zx_md_ContactPerson_s* x, int n, struct zx_elem_s* y);
void zx_md_ContactPerson_PUT_GivenName(struct zx_md_ContactPerson_s* x, int n, struct zx_elem_s* y);
void zx_md_ContactPerson_PUT_SurName(struct zx_md_ContactPerson_s* x, int n, struct zx_elem_s* y);
void zx_md_ContactPerson_PUT_EmailAddress(struct zx_md_ContactPerson_s* x, int n, struct zx_elem_s* y);
void zx_md_ContactPerson_PUT_TelephoneNumber(struct zx_md_ContactPerson_s* x, int n, struct zx_elem_s* y);

void zx_md_ContactPerson_ADD_Extensions(struct zx_md_ContactPerson_s* x, int n, struct zx_md_Extensions_s* z);
void zx_md_ContactPerson_ADD_Company(struct zx_md_ContactPerson_s* x, int n, struct zx_elem_s* z);
void zx_md_ContactPerson_ADD_GivenName(struct zx_md_ContactPerson_s* x, int n, struct zx_elem_s* z);
void zx_md_ContactPerson_ADD_SurName(struct zx_md_ContactPerson_s* x, int n, struct zx_elem_s* z);
void zx_md_ContactPerson_ADD_EmailAddress(struct zx_md_ContactPerson_s* x, int n, struct zx_elem_s* z);
void zx_md_ContactPerson_ADD_TelephoneNumber(struct zx_md_ContactPerson_s* x, int n, struct zx_elem_s* z);

void zx_md_ContactPerson_DEL_Extensions(struct zx_md_ContactPerson_s* x, int n);
void zx_md_ContactPerson_DEL_Company(struct zx_md_ContactPerson_s* x, int n);
void zx_md_ContactPerson_DEL_GivenName(struct zx_md_ContactPerson_s* x, int n);
void zx_md_ContactPerson_DEL_SurName(struct zx_md_ContactPerson_s* x, int n);
void zx_md_ContactPerson_DEL_EmailAddress(struct zx_md_ContactPerson_s* x, int n);
void zx_md_ContactPerson_DEL_TelephoneNumber(struct zx_md_ContactPerson_s* x, int n);

void zx_md_ContactPerson_REV_Extensions(struct zx_md_ContactPerson_s* x);
void zx_md_ContactPerson_REV_Company(struct zx_md_ContactPerson_s* x);
void zx_md_ContactPerson_REV_GivenName(struct zx_md_ContactPerson_s* x);
void zx_md_ContactPerson_REV_SurName(struct zx_md_ContactPerson_s* x);
void zx_md_ContactPerson_REV_EmailAddress(struct zx_md_ContactPerson_s* x);
void zx_md_ContactPerson_REV_TelephoneNumber(struct zx_md_ContactPerson_s* x);

#endif
/* -------------------------- md_EncryptionMethod -------------------------- */
/* refby( zx_md_KeyDescriptor_s ) */
#ifndef zx_md_EncryptionMethod_EXT
#define zx_md_EncryptionMethod_EXT
#endif

struct zx_md_EncryptionMethod_s* zx_DEC_md_EncryptionMethod(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_EncryptionMethod_s* zx_NEW_md_EncryptionMethod(struct zx_ctx* c);
void zx_FREE_md_EncryptionMethod(struct zx_ctx* c, struct zx_md_EncryptionMethod_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_EncryptionMethod_s* zx_DEEP_CLONE_md_EncryptionMethod(struct zx_ctx* c, struct zx_md_EncryptionMethod_s* x, int dup_strs);
void zx_DUP_STRS_md_EncryptionMethod(struct zx_ctx* c, struct zx_md_EncryptionMethod_s* x);
int zx_WALK_SO_md_EncryptionMethod(struct zx_ctx* c, struct zx_md_EncryptionMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_EncryptionMethod(struct zx_ctx* c, struct zx_md_EncryptionMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_EncryptionMethod(struct zx_ctx* c, struct zx_md_EncryptionMethod_s* x);
int zx_LEN_WO_md_EncryptionMethod(struct zx_ctx* c, struct zx_md_EncryptionMethod_s* x);
char* zx_ENC_SO_md_EncryptionMethod(struct zx_ctx* c, struct zx_md_EncryptionMethod_s* x, char* p);
char* zx_ENC_WO_md_EncryptionMethod(struct zx_ctx* c, struct zx_md_EncryptionMethod_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_EncryptionMethod(struct zx_ctx* c, struct zx_md_EncryptionMethod_s* x);
struct zx_str* zx_EASY_ENC_WO_md_EncryptionMethod(struct zx_ctx* c, struct zx_md_EncryptionMethod_s* x);

struct zx_md_EncryptionMethod_s {
  ZX_ELEM_EXT
  zx_md_EncryptionMethod_EXT
  struct zx_elem_s* KeySize;	/* {0,1} xs:integer */
  struct zx_elem_s* OAEPparams;	/* {0,1} xs:base64Binary */
  struct zx_str* Algorithm;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_EncryptionMethod_GET_Algorithm(struct zx_md_EncryptionMethod_s* x);

struct zx_elem_s* zx_md_EncryptionMethod_GET_KeySize(struct zx_md_EncryptionMethod_s* x, int n);
struct zx_elem_s* zx_md_EncryptionMethod_GET_OAEPparams(struct zx_md_EncryptionMethod_s* x, int n);

int zx_md_EncryptionMethod_NUM_KeySize(struct zx_md_EncryptionMethod_s* x);
int zx_md_EncryptionMethod_NUM_OAEPparams(struct zx_md_EncryptionMethod_s* x);

struct zx_elem_s* zx_md_EncryptionMethod_POP_KeySize(struct zx_md_EncryptionMethod_s* x);
struct zx_elem_s* zx_md_EncryptionMethod_POP_OAEPparams(struct zx_md_EncryptionMethod_s* x);

void zx_md_EncryptionMethod_PUSH_KeySize(struct zx_md_EncryptionMethod_s* x, struct zx_elem_s* y);
void zx_md_EncryptionMethod_PUSH_OAEPparams(struct zx_md_EncryptionMethod_s* x, struct zx_elem_s* y);

void zx_md_EncryptionMethod_PUT_Algorithm(struct zx_md_EncryptionMethod_s* x, struct zx_str* y);

void zx_md_EncryptionMethod_PUT_KeySize(struct zx_md_EncryptionMethod_s* x, int n, struct zx_elem_s* y);
void zx_md_EncryptionMethod_PUT_OAEPparams(struct zx_md_EncryptionMethod_s* x, int n, struct zx_elem_s* y);

void zx_md_EncryptionMethod_ADD_KeySize(struct zx_md_EncryptionMethod_s* x, int n, struct zx_elem_s* z);
void zx_md_EncryptionMethod_ADD_OAEPparams(struct zx_md_EncryptionMethod_s* x, int n, struct zx_elem_s* z);

void zx_md_EncryptionMethod_DEL_KeySize(struct zx_md_EncryptionMethod_s* x, int n);
void zx_md_EncryptionMethod_DEL_OAEPparams(struct zx_md_EncryptionMethod_s* x, int n);

void zx_md_EncryptionMethod_REV_KeySize(struct zx_md_EncryptionMethod_s* x);
void zx_md_EncryptionMethod_REV_OAEPparams(struct zx_md_EncryptionMethod_s* x);

#endif
/* -------------------------- md_EntitiesDescriptor -------------------------- */
/* refby( zx_md_EntitiesDescriptor_s ) */
#ifndef zx_md_EntitiesDescriptor_EXT
#define zx_md_EntitiesDescriptor_EXT
#endif

struct zx_md_EntitiesDescriptor_s* zx_DEC_md_EntitiesDescriptor(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_EntitiesDescriptor_s* zx_NEW_md_EntitiesDescriptor(struct zx_ctx* c);
void zx_FREE_md_EntitiesDescriptor(struct zx_ctx* c, struct zx_md_EntitiesDescriptor_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_EntitiesDescriptor_s* zx_DEEP_CLONE_md_EntitiesDescriptor(struct zx_ctx* c, struct zx_md_EntitiesDescriptor_s* x, int dup_strs);
void zx_DUP_STRS_md_EntitiesDescriptor(struct zx_ctx* c, struct zx_md_EntitiesDescriptor_s* x);
int zx_WALK_SO_md_EntitiesDescriptor(struct zx_ctx* c, struct zx_md_EntitiesDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_EntitiesDescriptor(struct zx_ctx* c, struct zx_md_EntitiesDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_EntitiesDescriptor(struct zx_ctx* c, struct zx_md_EntitiesDescriptor_s* x);
int zx_LEN_WO_md_EntitiesDescriptor(struct zx_ctx* c, struct zx_md_EntitiesDescriptor_s* x);
char* zx_ENC_SO_md_EntitiesDescriptor(struct zx_ctx* c, struct zx_md_EntitiesDescriptor_s* x, char* p);
char* zx_ENC_WO_md_EntitiesDescriptor(struct zx_ctx* c, struct zx_md_EntitiesDescriptor_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_EntitiesDescriptor(struct zx_ctx* c, struct zx_md_EntitiesDescriptor_s* x);
struct zx_str* zx_EASY_ENC_WO_md_EntitiesDescriptor(struct zx_ctx* c, struct zx_md_EntitiesDescriptor_s* x);

struct zx_md_EntitiesDescriptor_s {
  ZX_ELEM_EXT
  zx_md_EntitiesDescriptor_EXT
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_md_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_md_EntityDescriptor_s* EntityDescriptor;	/* {0,-1} nada */
  struct zx_md_EntitiesDescriptor_s* EntitiesDescriptor;	/* {0,-1} nada */
  struct zx_str* validUntil;	/* {0,1} attribute xs:dateTime */
  struct zx_str* cacheDuration;	/* {0,1} attribute xs:duration */
  struct zx_str* ID;	/* {0,1} attribute xs:ID */
  struct zx_str* Name;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_EntitiesDescriptor_GET_validUntil(struct zx_md_EntitiesDescriptor_s* x);
struct zx_str* zx_md_EntitiesDescriptor_GET_cacheDuration(struct zx_md_EntitiesDescriptor_s* x);
struct zx_str* zx_md_EntitiesDescriptor_GET_ID(struct zx_md_EntitiesDescriptor_s* x);
struct zx_str* zx_md_EntitiesDescriptor_GET_Name(struct zx_md_EntitiesDescriptor_s* x);

struct zx_ds_Signature_s* zx_md_EntitiesDescriptor_GET_Signature(struct zx_md_EntitiesDescriptor_s* x, int n);
struct zx_md_Extensions_s* zx_md_EntitiesDescriptor_GET_Extensions(struct zx_md_EntitiesDescriptor_s* x, int n);
struct zx_md_EntityDescriptor_s* zx_md_EntitiesDescriptor_GET_EntityDescriptor(struct zx_md_EntitiesDescriptor_s* x, int n);
struct zx_md_EntitiesDescriptor_s* zx_md_EntitiesDescriptor_GET_EntitiesDescriptor(struct zx_md_EntitiesDescriptor_s* x, int n);

int zx_md_EntitiesDescriptor_NUM_Signature(struct zx_md_EntitiesDescriptor_s* x);
int zx_md_EntitiesDescriptor_NUM_Extensions(struct zx_md_EntitiesDescriptor_s* x);
int zx_md_EntitiesDescriptor_NUM_EntityDescriptor(struct zx_md_EntitiesDescriptor_s* x);
int zx_md_EntitiesDescriptor_NUM_EntitiesDescriptor(struct zx_md_EntitiesDescriptor_s* x);

struct zx_ds_Signature_s* zx_md_EntitiesDescriptor_POP_Signature(struct zx_md_EntitiesDescriptor_s* x);
struct zx_md_Extensions_s* zx_md_EntitiesDescriptor_POP_Extensions(struct zx_md_EntitiesDescriptor_s* x);
struct zx_md_EntityDescriptor_s* zx_md_EntitiesDescriptor_POP_EntityDescriptor(struct zx_md_EntitiesDescriptor_s* x);
struct zx_md_EntitiesDescriptor_s* zx_md_EntitiesDescriptor_POP_EntitiesDescriptor(struct zx_md_EntitiesDescriptor_s* x);

void zx_md_EntitiesDescriptor_PUSH_Signature(struct zx_md_EntitiesDescriptor_s* x, struct zx_ds_Signature_s* y);
void zx_md_EntitiesDescriptor_PUSH_Extensions(struct zx_md_EntitiesDescriptor_s* x, struct zx_md_Extensions_s* y);
void zx_md_EntitiesDescriptor_PUSH_EntityDescriptor(struct zx_md_EntitiesDescriptor_s* x, struct zx_md_EntityDescriptor_s* y);
void zx_md_EntitiesDescriptor_PUSH_EntitiesDescriptor(struct zx_md_EntitiesDescriptor_s* x, struct zx_md_EntitiesDescriptor_s* y);

void zx_md_EntitiesDescriptor_PUT_validUntil(struct zx_md_EntitiesDescriptor_s* x, struct zx_str* y);
void zx_md_EntitiesDescriptor_PUT_cacheDuration(struct zx_md_EntitiesDescriptor_s* x, struct zx_str* y);
void zx_md_EntitiesDescriptor_PUT_ID(struct zx_md_EntitiesDescriptor_s* x, struct zx_str* y);
void zx_md_EntitiesDescriptor_PUT_Name(struct zx_md_EntitiesDescriptor_s* x, struct zx_str* y);

void zx_md_EntitiesDescriptor_PUT_Signature(struct zx_md_EntitiesDescriptor_s* x, int n, struct zx_ds_Signature_s* y);
void zx_md_EntitiesDescriptor_PUT_Extensions(struct zx_md_EntitiesDescriptor_s* x, int n, struct zx_md_Extensions_s* y);
void zx_md_EntitiesDescriptor_PUT_EntityDescriptor(struct zx_md_EntitiesDescriptor_s* x, int n, struct zx_md_EntityDescriptor_s* y);
void zx_md_EntitiesDescriptor_PUT_EntitiesDescriptor(struct zx_md_EntitiesDescriptor_s* x, int n, struct zx_md_EntitiesDescriptor_s* y);

void zx_md_EntitiesDescriptor_ADD_Signature(struct zx_md_EntitiesDescriptor_s* x, int n, struct zx_ds_Signature_s* z);
void zx_md_EntitiesDescriptor_ADD_Extensions(struct zx_md_EntitiesDescriptor_s* x, int n, struct zx_md_Extensions_s* z);
void zx_md_EntitiesDescriptor_ADD_EntityDescriptor(struct zx_md_EntitiesDescriptor_s* x, int n, struct zx_md_EntityDescriptor_s* z);
void zx_md_EntitiesDescriptor_ADD_EntitiesDescriptor(struct zx_md_EntitiesDescriptor_s* x, int n, struct zx_md_EntitiesDescriptor_s* z);

void zx_md_EntitiesDescriptor_DEL_Signature(struct zx_md_EntitiesDescriptor_s* x, int n);
void zx_md_EntitiesDescriptor_DEL_Extensions(struct zx_md_EntitiesDescriptor_s* x, int n);
void zx_md_EntitiesDescriptor_DEL_EntityDescriptor(struct zx_md_EntitiesDescriptor_s* x, int n);
void zx_md_EntitiesDescriptor_DEL_EntitiesDescriptor(struct zx_md_EntitiesDescriptor_s* x, int n);

void zx_md_EntitiesDescriptor_REV_Signature(struct zx_md_EntitiesDescriptor_s* x);
void zx_md_EntitiesDescriptor_REV_Extensions(struct zx_md_EntitiesDescriptor_s* x);
void zx_md_EntitiesDescriptor_REV_EntityDescriptor(struct zx_md_EntitiesDescriptor_s* x);
void zx_md_EntitiesDescriptor_REV_EntitiesDescriptor(struct zx_md_EntitiesDescriptor_s* x);

#endif
/* -------------------------- md_EntityDescriptor -------------------------- */
/* refby( zx_md_EntitiesDescriptor_s ) */
#ifndef zx_md_EntityDescriptor_EXT
#define zx_md_EntityDescriptor_EXT
#endif

struct zx_md_EntityDescriptor_s* zx_DEC_md_EntityDescriptor(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_EntityDescriptor_s* zx_NEW_md_EntityDescriptor(struct zx_ctx* c);
void zx_FREE_md_EntityDescriptor(struct zx_ctx* c, struct zx_md_EntityDescriptor_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_EntityDescriptor_s* zx_DEEP_CLONE_md_EntityDescriptor(struct zx_ctx* c, struct zx_md_EntityDescriptor_s* x, int dup_strs);
void zx_DUP_STRS_md_EntityDescriptor(struct zx_ctx* c, struct zx_md_EntityDescriptor_s* x);
int zx_WALK_SO_md_EntityDescriptor(struct zx_ctx* c, struct zx_md_EntityDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_EntityDescriptor(struct zx_ctx* c, struct zx_md_EntityDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_EntityDescriptor(struct zx_ctx* c, struct zx_md_EntityDescriptor_s* x);
int zx_LEN_WO_md_EntityDescriptor(struct zx_ctx* c, struct zx_md_EntityDescriptor_s* x);
char* zx_ENC_SO_md_EntityDescriptor(struct zx_ctx* c, struct zx_md_EntityDescriptor_s* x, char* p);
char* zx_ENC_WO_md_EntityDescriptor(struct zx_ctx* c, struct zx_md_EntityDescriptor_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_EntityDescriptor(struct zx_ctx* c, struct zx_md_EntityDescriptor_s* x);
struct zx_str* zx_EASY_ENC_WO_md_EntityDescriptor(struct zx_ctx* c, struct zx_md_EntityDescriptor_s* x);

struct zx_md_EntityDescriptor_s {
  ZX_ELEM_EXT
  zx_md_EntityDescriptor_EXT
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_md_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_md_RoleDescriptor_s* RoleDescriptor;	/* {0,-1} nada */
  struct zx_md_IDPSSODescriptor_s* IDPSSODescriptor;	/* {0,-1} nada */
  struct zx_md_SPSSODescriptor_s* SPSSODescriptor;	/* {0,-1} nada */
  struct zx_md_AuthnAuthorityDescriptor_s* AuthnAuthorityDescriptor;	/* {0,-1} nada */
  struct zx_md_AttributeAuthorityDescriptor_s* AttributeAuthorityDescriptor;	/* {0,-1} nada */
  struct zx_md_PDPDescriptor_s* PDPDescriptor;	/* {0,-1} nada */
  struct zx_md_AffiliationDescriptor_s* AffiliationDescriptor;	/* {0,-1} nada */
  struct zx_md_Organization_s* Organization;	/* {0,1} nada */
  struct zx_md_ContactPerson_s* ContactPerson;	/* {0,-1} nada */
  struct zx_md_AdditionalMetadataLocation_s* AdditionalMetadataLocation;	/* {0,-1} nada */
  struct zx_str* entityID;	/* {1,1} attribute md:entityIDType */
  struct zx_str* validUntil;	/* {0,1} attribute xs:dateTime */
  struct zx_str* cacheDuration;	/* {0,1} attribute xs:duration */
  struct zx_str* ID;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_EntityDescriptor_GET_entityID(struct zx_md_EntityDescriptor_s* x);
struct zx_str* zx_md_EntityDescriptor_GET_validUntil(struct zx_md_EntityDescriptor_s* x);
struct zx_str* zx_md_EntityDescriptor_GET_cacheDuration(struct zx_md_EntityDescriptor_s* x);
struct zx_str* zx_md_EntityDescriptor_GET_ID(struct zx_md_EntityDescriptor_s* x);

struct zx_ds_Signature_s* zx_md_EntityDescriptor_GET_Signature(struct zx_md_EntityDescriptor_s* x, int n);
struct zx_md_Extensions_s* zx_md_EntityDescriptor_GET_Extensions(struct zx_md_EntityDescriptor_s* x, int n);
struct zx_md_RoleDescriptor_s* zx_md_EntityDescriptor_GET_RoleDescriptor(struct zx_md_EntityDescriptor_s* x, int n);
struct zx_md_IDPSSODescriptor_s* zx_md_EntityDescriptor_GET_IDPSSODescriptor(struct zx_md_EntityDescriptor_s* x, int n);
struct zx_md_SPSSODescriptor_s* zx_md_EntityDescriptor_GET_SPSSODescriptor(struct zx_md_EntityDescriptor_s* x, int n);
struct zx_md_AuthnAuthorityDescriptor_s* zx_md_EntityDescriptor_GET_AuthnAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x, int n);
struct zx_md_AttributeAuthorityDescriptor_s* zx_md_EntityDescriptor_GET_AttributeAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x, int n);
struct zx_md_PDPDescriptor_s* zx_md_EntityDescriptor_GET_PDPDescriptor(struct zx_md_EntityDescriptor_s* x, int n);
struct zx_md_AffiliationDescriptor_s* zx_md_EntityDescriptor_GET_AffiliationDescriptor(struct zx_md_EntityDescriptor_s* x, int n);
struct zx_md_Organization_s* zx_md_EntityDescriptor_GET_Organization(struct zx_md_EntityDescriptor_s* x, int n);
struct zx_md_ContactPerson_s* zx_md_EntityDescriptor_GET_ContactPerson(struct zx_md_EntityDescriptor_s* x, int n);
struct zx_md_AdditionalMetadataLocation_s* zx_md_EntityDescriptor_GET_AdditionalMetadataLocation(struct zx_md_EntityDescriptor_s* x, int n);

int zx_md_EntityDescriptor_NUM_Signature(struct zx_md_EntityDescriptor_s* x);
int zx_md_EntityDescriptor_NUM_Extensions(struct zx_md_EntityDescriptor_s* x);
int zx_md_EntityDescriptor_NUM_RoleDescriptor(struct zx_md_EntityDescriptor_s* x);
int zx_md_EntityDescriptor_NUM_IDPSSODescriptor(struct zx_md_EntityDescriptor_s* x);
int zx_md_EntityDescriptor_NUM_SPSSODescriptor(struct zx_md_EntityDescriptor_s* x);
int zx_md_EntityDescriptor_NUM_AuthnAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x);
int zx_md_EntityDescriptor_NUM_AttributeAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x);
int zx_md_EntityDescriptor_NUM_PDPDescriptor(struct zx_md_EntityDescriptor_s* x);
int zx_md_EntityDescriptor_NUM_AffiliationDescriptor(struct zx_md_EntityDescriptor_s* x);
int zx_md_EntityDescriptor_NUM_Organization(struct zx_md_EntityDescriptor_s* x);
int zx_md_EntityDescriptor_NUM_ContactPerson(struct zx_md_EntityDescriptor_s* x);
int zx_md_EntityDescriptor_NUM_AdditionalMetadataLocation(struct zx_md_EntityDescriptor_s* x);

struct zx_ds_Signature_s* zx_md_EntityDescriptor_POP_Signature(struct zx_md_EntityDescriptor_s* x);
struct zx_md_Extensions_s* zx_md_EntityDescriptor_POP_Extensions(struct zx_md_EntityDescriptor_s* x);
struct zx_md_RoleDescriptor_s* zx_md_EntityDescriptor_POP_RoleDescriptor(struct zx_md_EntityDescriptor_s* x);
struct zx_md_IDPSSODescriptor_s* zx_md_EntityDescriptor_POP_IDPSSODescriptor(struct zx_md_EntityDescriptor_s* x);
struct zx_md_SPSSODescriptor_s* zx_md_EntityDescriptor_POP_SPSSODescriptor(struct zx_md_EntityDescriptor_s* x);
struct zx_md_AuthnAuthorityDescriptor_s* zx_md_EntityDescriptor_POP_AuthnAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x);
struct zx_md_AttributeAuthorityDescriptor_s* zx_md_EntityDescriptor_POP_AttributeAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x);
struct zx_md_PDPDescriptor_s* zx_md_EntityDescriptor_POP_PDPDescriptor(struct zx_md_EntityDescriptor_s* x);
struct zx_md_AffiliationDescriptor_s* zx_md_EntityDescriptor_POP_AffiliationDescriptor(struct zx_md_EntityDescriptor_s* x);
struct zx_md_Organization_s* zx_md_EntityDescriptor_POP_Organization(struct zx_md_EntityDescriptor_s* x);
struct zx_md_ContactPerson_s* zx_md_EntityDescriptor_POP_ContactPerson(struct zx_md_EntityDescriptor_s* x);
struct zx_md_AdditionalMetadataLocation_s* zx_md_EntityDescriptor_POP_AdditionalMetadataLocation(struct zx_md_EntityDescriptor_s* x);

void zx_md_EntityDescriptor_PUSH_Signature(struct zx_md_EntityDescriptor_s* x, struct zx_ds_Signature_s* y);
void zx_md_EntityDescriptor_PUSH_Extensions(struct zx_md_EntityDescriptor_s* x, struct zx_md_Extensions_s* y);
void zx_md_EntityDescriptor_PUSH_RoleDescriptor(struct zx_md_EntityDescriptor_s* x, struct zx_md_RoleDescriptor_s* y);
void zx_md_EntityDescriptor_PUSH_IDPSSODescriptor(struct zx_md_EntityDescriptor_s* x, struct zx_md_IDPSSODescriptor_s* y);
void zx_md_EntityDescriptor_PUSH_SPSSODescriptor(struct zx_md_EntityDescriptor_s* x, struct zx_md_SPSSODescriptor_s* y);
void zx_md_EntityDescriptor_PUSH_AuthnAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x, struct zx_md_AuthnAuthorityDescriptor_s* y);
void zx_md_EntityDescriptor_PUSH_AttributeAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x, struct zx_md_AttributeAuthorityDescriptor_s* y);
void zx_md_EntityDescriptor_PUSH_PDPDescriptor(struct zx_md_EntityDescriptor_s* x, struct zx_md_PDPDescriptor_s* y);
void zx_md_EntityDescriptor_PUSH_AffiliationDescriptor(struct zx_md_EntityDescriptor_s* x, struct zx_md_AffiliationDescriptor_s* y);
void zx_md_EntityDescriptor_PUSH_Organization(struct zx_md_EntityDescriptor_s* x, struct zx_md_Organization_s* y);
void zx_md_EntityDescriptor_PUSH_ContactPerson(struct zx_md_EntityDescriptor_s* x, struct zx_md_ContactPerson_s* y);
void zx_md_EntityDescriptor_PUSH_AdditionalMetadataLocation(struct zx_md_EntityDescriptor_s* x, struct zx_md_AdditionalMetadataLocation_s* y);

void zx_md_EntityDescriptor_PUT_entityID(struct zx_md_EntityDescriptor_s* x, struct zx_str* y);
void zx_md_EntityDescriptor_PUT_validUntil(struct zx_md_EntityDescriptor_s* x, struct zx_str* y);
void zx_md_EntityDescriptor_PUT_cacheDuration(struct zx_md_EntityDescriptor_s* x, struct zx_str* y);
void zx_md_EntityDescriptor_PUT_ID(struct zx_md_EntityDescriptor_s* x, struct zx_str* y);

void zx_md_EntityDescriptor_PUT_Signature(struct zx_md_EntityDescriptor_s* x, int n, struct zx_ds_Signature_s* y);
void zx_md_EntityDescriptor_PUT_Extensions(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_Extensions_s* y);
void zx_md_EntityDescriptor_PUT_RoleDescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_RoleDescriptor_s* y);
void zx_md_EntityDescriptor_PUT_IDPSSODescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_IDPSSODescriptor_s* y);
void zx_md_EntityDescriptor_PUT_SPSSODescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_SPSSODescriptor_s* y);
void zx_md_EntityDescriptor_PUT_AuthnAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_AuthnAuthorityDescriptor_s* y);
void zx_md_EntityDescriptor_PUT_AttributeAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_AttributeAuthorityDescriptor_s* y);
void zx_md_EntityDescriptor_PUT_PDPDescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_PDPDescriptor_s* y);
void zx_md_EntityDescriptor_PUT_AffiliationDescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_AffiliationDescriptor_s* y);
void zx_md_EntityDescriptor_PUT_Organization(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_Organization_s* y);
void zx_md_EntityDescriptor_PUT_ContactPerson(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_ContactPerson_s* y);
void zx_md_EntityDescriptor_PUT_AdditionalMetadataLocation(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_AdditionalMetadataLocation_s* y);

void zx_md_EntityDescriptor_ADD_Signature(struct zx_md_EntityDescriptor_s* x, int n, struct zx_ds_Signature_s* z);
void zx_md_EntityDescriptor_ADD_Extensions(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_Extensions_s* z);
void zx_md_EntityDescriptor_ADD_RoleDescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_RoleDescriptor_s* z);
void zx_md_EntityDescriptor_ADD_IDPSSODescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_IDPSSODescriptor_s* z);
void zx_md_EntityDescriptor_ADD_SPSSODescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_SPSSODescriptor_s* z);
void zx_md_EntityDescriptor_ADD_AuthnAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_AuthnAuthorityDescriptor_s* z);
void zx_md_EntityDescriptor_ADD_AttributeAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_AttributeAuthorityDescriptor_s* z);
void zx_md_EntityDescriptor_ADD_PDPDescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_PDPDescriptor_s* z);
void zx_md_EntityDescriptor_ADD_AffiliationDescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_AffiliationDescriptor_s* z);
void zx_md_EntityDescriptor_ADD_Organization(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_Organization_s* z);
void zx_md_EntityDescriptor_ADD_ContactPerson(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_ContactPerson_s* z);
void zx_md_EntityDescriptor_ADD_AdditionalMetadataLocation(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_AdditionalMetadataLocation_s* z);

void zx_md_EntityDescriptor_DEL_Signature(struct zx_md_EntityDescriptor_s* x, int n);
void zx_md_EntityDescriptor_DEL_Extensions(struct zx_md_EntityDescriptor_s* x, int n);
void zx_md_EntityDescriptor_DEL_RoleDescriptor(struct zx_md_EntityDescriptor_s* x, int n);
void zx_md_EntityDescriptor_DEL_IDPSSODescriptor(struct zx_md_EntityDescriptor_s* x, int n);
void zx_md_EntityDescriptor_DEL_SPSSODescriptor(struct zx_md_EntityDescriptor_s* x, int n);
void zx_md_EntityDescriptor_DEL_AuthnAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x, int n);
void zx_md_EntityDescriptor_DEL_AttributeAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x, int n);
void zx_md_EntityDescriptor_DEL_PDPDescriptor(struct zx_md_EntityDescriptor_s* x, int n);
void zx_md_EntityDescriptor_DEL_AffiliationDescriptor(struct zx_md_EntityDescriptor_s* x, int n);
void zx_md_EntityDescriptor_DEL_Organization(struct zx_md_EntityDescriptor_s* x, int n);
void zx_md_EntityDescriptor_DEL_ContactPerson(struct zx_md_EntityDescriptor_s* x, int n);
void zx_md_EntityDescriptor_DEL_AdditionalMetadataLocation(struct zx_md_EntityDescriptor_s* x, int n);

void zx_md_EntityDescriptor_REV_Signature(struct zx_md_EntityDescriptor_s* x);
void zx_md_EntityDescriptor_REV_Extensions(struct zx_md_EntityDescriptor_s* x);
void zx_md_EntityDescriptor_REV_RoleDescriptor(struct zx_md_EntityDescriptor_s* x);
void zx_md_EntityDescriptor_REV_IDPSSODescriptor(struct zx_md_EntityDescriptor_s* x);
void zx_md_EntityDescriptor_REV_SPSSODescriptor(struct zx_md_EntityDescriptor_s* x);
void zx_md_EntityDescriptor_REV_AuthnAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x);
void zx_md_EntityDescriptor_REV_AttributeAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x);
void zx_md_EntityDescriptor_REV_PDPDescriptor(struct zx_md_EntityDescriptor_s* x);
void zx_md_EntityDescriptor_REV_AffiliationDescriptor(struct zx_md_EntityDescriptor_s* x);
void zx_md_EntityDescriptor_REV_Organization(struct zx_md_EntityDescriptor_s* x);
void zx_md_EntityDescriptor_REV_ContactPerson(struct zx_md_EntityDescriptor_s* x);
void zx_md_EntityDescriptor_REV_AdditionalMetadataLocation(struct zx_md_EntityDescriptor_s* x);

#endif
/* -------------------------- md_Extensions -------------------------- */
/* refby( zx_md_AffiliationDescriptor_s zx_md_Organization_s zx_md_EntityDescriptor_s zx_md_PDPDescriptor_s zx_md_RoleDescriptor_s zx_md_SPSSODescriptor_s zx_md_AuthnAuthorityDescriptor_s zx_md_ContactPerson_s zx_md_AttributeAuthorityDescriptor_s zx_md_IDPSSODescriptor_s zx_md_EntitiesDescriptor_s ) */
#ifndef zx_md_Extensions_EXT
#define zx_md_Extensions_EXT
#endif

struct zx_md_Extensions_s* zx_DEC_md_Extensions(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_Extensions_s* zx_NEW_md_Extensions(struct zx_ctx* c);
void zx_FREE_md_Extensions(struct zx_ctx* c, struct zx_md_Extensions_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_Extensions_s* zx_DEEP_CLONE_md_Extensions(struct zx_ctx* c, struct zx_md_Extensions_s* x, int dup_strs);
void zx_DUP_STRS_md_Extensions(struct zx_ctx* c, struct zx_md_Extensions_s* x);
int zx_WALK_SO_md_Extensions(struct zx_ctx* c, struct zx_md_Extensions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_Extensions(struct zx_ctx* c, struct zx_md_Extensions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_Extensions(struct zx_ctx* c, struct zx_md_Extensions_s* x);
int zx_LEN_WO_md_Extensions(struct zx_ctx* c, struct zx_md_Extensions_s* x);
char* zx_ENC_SO_md_Extensions(struct zx_ctx* c, struct zx_md_Extensions_s* x, char* p);
char* zx_ENC_WO_md_Extensions(struct zx_ctx* c, struct zx_md_Extensions_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_Extensions(struct zx_ctx* c, struct zx_md_Extensions_s* x);
struct zx_str* zx_EASY_ENC_WO_md_Extensions(struct zx_ctx* c, struct zx_md_Extensions_s* x);

struct zx_md_Extensions_s {
  ZX_ELEM_EXT
  zx_md_Extensions_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- md_IDPSSODescriptor -------------------------- */
/* refby( zx_md_EntityDescriptor_s ) */
#ifndef zx_md_IDPSSODescriptor_EXT
#define zx_md_IDPSSODescriptor_EXT
#endif

struct zx_md_IDPSSODescriptor_s* zx_DEC_md_IDPSSODescriptor(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_IDPSSODescriptor_s* zx_NEW_md_IDPSSODescriptor(struct zx_ctx* c);
void zx_FREE_md_IDPSSODescriptor(struct zx_ctx* c, struct zx_md_IDPSSODescriptor_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_IDPSSODescriptor_s* zx_DEEP_CLONE_md_IDPSSODescriptor(struct zx_ctx* c, struct zx_md_IDPSSODescriptor_s* x, int dup_strs);
void zx_DUP_STRS_md_IDPSSODescriptor(struct zx_ctx* c, struct zx_md_IDPSSODescriptor_s* x);
int zx_WALK_SO_md_IDPSSODescriptor(struct zx_ctx* c, struct zx_md_IDPSSODescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_IDPSSODescriptor(struct zx_ctx* c, struct zx_md_IDPSSODescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_IDPSSODescriptor(struct zx_ctx* c, struct zx_md_IDPSSODescriptor_s* x);
int zx_LEN_WO_md_IDPSSODescriptor(struct zx_ctx* c, struct zx_md_IDPSSODescriptor_s* x);
char* zx_ENC_SO_md_IDPSSODescriptor(struct zx_ctx* c, struct zx_md_IDPSSODescriptor_s* x, char* p);
char* zx_ENC_WO_md_IDPSSODescriptor(struct zx_ctx* c, struct zx_md_IDPSSODescriptor_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_IDPSSODescriptor(struct zx_ctx* c, struct zx_md_IDPSSODescriptor_s* x);
struct zx_str* zx_EASY_ENC_WO_md_IDPSSODescriptor(struct zx_ctx* c, struct zx_md_IDPSSODescriptor_s* x);

struct zx_md_IDPSSODescriptor_s {
  ZX_ELEM_EXT
  zx_md_IDPSSODescriptor_EXT
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_md_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_md_KeyDescriptor_s* KeyDescriptor;	/* {0,-1} nada */
  struct zx_md_Organization_s* Organization;	/* {0,1} nada */
  struct zx_md_ContactPerson_s* ContactPerson;	/* {0,-1} nada */
  struct zx_md_ArtifactResolutionService_s* ArtifactResolutionService;	/* {0,-1} nada */
  struct zx_md_SingleLogoutService_s* SingleLogoutService;	/* {0,-1} nada */
  struct zx_md_ManageNameIDService_s* ManageNameIDService;	/* {0,-1} nada */
  struct zx_elem_s* NameIDFormat;	/* {0,-1} xs:anyURI */
  struct zx_md_SingleSignOnService_s* SingleSignOnService;	/* {1,-1} nada */
  struct zx_md_NameIDMappingService_s* NameIDMappingService;	/* {0,-1} nada */
  struct zx_md_AssertionIDRequestService_s* AssertionIDRequestService;	/* {0,-1} nada */
  struct zx_elem_s* AttributeProfile;	/* {0,-1} xs:anyURI */
  struct zx_sa_Attribute_s* Attribute;	/* {0,-1} nada */
  struct zx_str* ID;	/* {0,1} attribute xs:ID */
  struct zx_str* validUntil;	/* {0,1} attribute xs:dateTime */
  struct zx_str* cacheDuration;	/* {0,1} attribute xs:duration */
  struct zx_str* protocolSupportEnumeration;	/* {1,1} attribute xs:string */
  struct zx_str* errorURL;	/* {0,1} attribute xs:anyURI */
  struct zx_str* WantAuthnRequestsSigned;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_IDPSSODescriptor_GET_ID(struct zx_md_IDPSSODescriptor_s* x);
struct zx_str* zx_md_IDPSSODescriptor_GET_validUntil(struct zx_md_IDPSSODescriptor_s* x);
struct zx_str* zx_md_IDPSSODescriptor_GET_cacheDuration(struct zx_md_IDPSSODescriptor_s* x);
struct zx_str* zx_md_IDPSSODescriptor_GET_protocolSupportEnumeration(struct zx_md_IDPSSODescriptor_s* x);
struct zx_str* zx_md_IDPSSODescriptor_GET_errorURL(struct zx_md_IDPSSODescriptor_s* x);
struct zx_str* zx_md_IDPSSODescriptor_GET_WantAuthnRequestsSigned(struct zx_md_IDPSSODescriptor_s* x);

struct zx_ds_Signature_s* zx_md_IDPSSODescriptor_GET_Signature(struct zx_md_IDPSSODescriptor_s* x, int n);
struct zx_md_Extensions_s* zx_md_IDPSSODescriptor_GET_Extensions(struct zx_md_IDPSSODescriptor_s* x, int n);
struct zx_md_KeyDescriptor_s* zx_md_IDPSSODescriptor_GET_KeyDescriptor(struct zx_md_IDPSSODescriptor_s* x, int n);
struct zx_md_Organization_s* zx_md_IDPSSODescriptor_GET_Organization(struct zx_md_IDPSSODescriptor_s* x, int n);
struct zx_md_ContactPerson_s* zx_md_IDPSSODescriptor_GET_ContactPerson(struct zx_md_IDPSSODescriptor_s* x, int n);
struct zx_md_ArtifactResolutionService_s* zx_md_IDPSSODescriptor_GET_ArtifactResolutionService(struct zx_md_IDPSSODescriptor_s* x, int n);
struct zx_md_SingleLogoutService_s* zx_md_IDPSSODescriptor_GET_SingleLogoutService(struct zx_md_IDPSSODescriptor_s* x, int n);
struct zx_md_ManageNameIDService_s* zx_md_IDPSSODescriptor_GET_ManageNameIDService(struct zx_md_IDPSSODescriptor_s* x, int n);
struct zx_elem_s* zx_md_IDPSSODescriptor_GET_NameIDFormat(struct zx_md_IDPSSODescriptor_s* x, int n);
struct zx_md_SingleSignOnService_s* zx_md_IDPSSODescriptor_GET_SingleSignOnService(struct zx_md_IDPSSODescriptor_s* x, int n);
struct zx_md_NameIDMappingService_s* zx_md_IDPSSODescriptor_GET_NameIDMappingService(struct zx_md_IDPSSODescriptor_s* x, int n);
struct zx_md_AssertionIDRequestService_s* zx_md_IDPSSODescriptor_GET_AssertionIDRequestService(struct zx_md_IDPSSODescriptor_s* x, int n);
struct zx_elem_s* zx_md_IDPSSODescriptor_GET_AttributeProfile(struct zx_md_IDPSSODescriptor_s* x, int n);
struct zx_sa_Attribute_s* zx_md_IDPSSODescriptor_GET_Attribute(struct zx_md_IDPSSODescriptor_s* x, int n);

int zx_md_IDPSSODescriptor_NUM_Signature(struct zx_md_IDPSSODescriptor_s* x);
int zx_md_IDPSSODescriptor_NUM_Extensions(struct zx_md_IDPSSODescriptor_s* x);
int zx_md_IDPSSODescriptor_NUM_KeyDescriptor(struct zx_md_IDPSSODescriptor_s* x);
int zx_md_IDPSSODescriptor_NUM_Organization(struct zx_md_IDPSSODescriptor_s* x);
int zx_md_IDPSSODescriptor_NUM_ContactPerson(struct zx_md_IDPSSODescriptor_s* x);
int zx_md_IDPSSODescriptor_NUM_ArtifactResolutionService(struct zx_md_IDPSSODescriptor_s* x);
int zx_md_IDPSSODescriptor_NUM_SingleLogoutService(struct zx_md_IDPSSODescriptor_s* x);
int zx_md_IDPSSODescriptor_NUM_ManageNameIDService(struct zx_md_IDPSSODescriptor_s* x);
int zx_md_IDPSSODescriptor_NUM_NameIDFormat(struct zx_md_IDPSSODescriptor_s* x);
int zx_md_IDPSSODescriptor_NUM_SingleSignOnService(struct zx_md_IDPSSODescriptor_s* x);
int zx_md_IDPSSODescriptor_NUM_NameIDMappingService(struct zx_md_IDPSSODescriptor_s* x);
int zx_md_IDPSSODescriptor_NUM_AssertionIDRequestService(struct zx_md_IDPSSODescriptor_s* x);
int zx_md_IDPSSODescriptor_NUM_AttributeProfile(struct zx_md_IDPSSODescriptor_s* x);
int zx_md_IDPSSODescriptor_NUM_Attribute(struct zx_md_IDPSSODescriptor_s* x);

struct zx_ds_Signature_s* zx_md_IDPSSODescriptor_POP_Signature(struct zx_md_IDPSSODescriptor_s* x);
struct zx_md_Extensions_s* zx_md_IDPSSODescriptor_POP_Extensions(struct zx_md_IDPSSODescriptor_s* x);
struct zx_md_KeyDescriptor_s* zx_md_IDPSSODescriptor_POP_KeyDescriptor(struct zx_md_IDPSSODescriptor_s* x);
struct zx_md_Organization_s* zx_md_IDPSSODescriptor_POP_Organization(struct zx_md_IDPSSODescriptor_s* x);
struct zx_md_ContactPerson_s* zx_md_IDPSSODescriptor_POP_ContactPerson(struct zx_md_IDPSSODescriptor_s* x);
struct zx_md_ArtifactResolutionService_s* zx_md_IDPSSODescriptor_POP_ArtifactResolutionService(struct zx_md_IDPSSODescriptor_s* x);
struct zx_md_SingleLogoutService_s* zx_md_IDPSSODescriptor_POP_SingleLogoutService(struct zx_md_IDPSSODescriptor_s* x);
struct zx_md_ManageNameIDService_s* zx_md_IDPSSODescriptor_POP_ManageNameIDService(struct zx_md_IDPSSODescriptor_s* x);
struct zx_elem_s* zx_md_IDPSSODescriptor_POP_NameIDFormat(struct zx_md_IDPSSODescriptor_s* x);
struct zx_md_SingleSignOnService_s* zx_md_IDPSSODescriptor_POP_SingleSignOnService(struct zx_md_IDPSSODescriptor_s* x);
struct zx_md_NameIDMappingService_s* zx_md_IDPSSODescriptor_POP_NameIDMappingService(struct zx_md_IDPSSODescriptor_s* x);
struct zx_md_AssertionIDRequestService_s* zx_md_IDPSSODescriptor_POP_AssertionIDRequestService(struct zx_md_IDPSSODescriptor_s* x);
struct zx_elem_s* zx_md_IDPSSODescriptor_POP_AttributeProfile(struct zx_md_IDPSSODescriptor_s* x);
struct zx_sa_Attribute_s* zx_md_IDPSSODescriptor_POP_Attribute(struct zx_md_IDPSSODescriptor_s* x);

void zx_md_IDPSSODescriptor_PUSH_Signature(struct zx_md_IDPSSODescriptor_s* x, struct zx_ds_Signature_s* y);
void zx_md_IDPSSODescriptor_PUSH_Extensions(struct zx_md_IDPSSODescriptor_s* x, struct zx_md_Extensions_s* y);
void zx_md_IDPSSODescriptor_PUSH_KeyDescriptor(struct zx_md_IDPSSODescriptor_s* x, struct zx_md_KeyDescriptor_s* y);
void zx_md_IDPSSODescriptor_PUSH_Organization(struct zx_md_IDPSSODescriptor_s* x, struct zx_md_Organization_s* y);
void zx_md_IDPSSODescriptor_PUSH_ContactPerson(struct zx_md_IDPSSODescriptor_s* x, struct zx_md_ContactPerson_s* y);
void zx_md_IDPSSODescriptor_PUSH_ArtifactResolutionService(struct zx_md_IDPSSODescriptor_s* x, struct zx_md_ArtifactResolutionService_s* y);
void zx_md_IDPSSODescriptor_PUSH_SingleLogoutService(struct zx_md_IDPSSODescriptor_s* x, struct zx_md_SingleLogoutService_s* y);
void zx_md_IDPSSODescriptor_PUSH_ManageNameIDService(struct zx_md_IDPSSODescriptor_s* x, struct zx_md_ManageNameIDService_s* y);
void zx_md_IDPSSODescriptor_PUSH_NameIDFormat(struct zx_md_IDPSSODescriptor_s* x, struct zx_elem_s* y);
void zx_md_IDPSSODescriptor_PUSH_SingleSignOnService(struct zx_md_IDPSSODescriptor_s* x, struct zx_md_SingleSignOnService_s* y);
void zx_md_IDPSSODescriptor_PUSH_NameIDMappingService(struct zx_md_IDPSSODescriptor_s* x, struct zx_md_NameIDMappingService_s* y);
void zx_md_IDPSSODescriptor_PUSH_AssertionIDRequestService(struct zx_md_IDPSSODescriptor_s* x, struct zx_md_AssertionIDRequestService_s* y);
void zx_md_IDPSSODescriptor_PUSH_AttributeProfile(struct zx_md_IDPSSODescriptor_s* x, struct zx_elem_s* y);
void zx_md_IDPSSODescriptor_PUSH_Attribute(struct zx_md_IDPSSODescriptor_s* x, struct zx_sa_Attribute_s* y);

void zx_md_IDPSSODescriptor_PUT_ID(struct zx_md_IDPSSODescriptor_s* x, struct zx_str* y);
void zx_md_IDPSSODescriptor_PUT_validUntil(struct zx_md_IDPSSODescriptor_s* x, struct zx_str* y);
void zx_md_IDPSSODescriptor_PUT_cacheDuration(struct zx_md_IDPSSODescriptor_s* x, struct zx_str* y);
void zx_md_IDPSSODescriptor_PUT_protocolSupportEnumeration(struct zx_md_IDPSSODescriptor_s* x, struct zx_str* y);
void zx_md_IDPSSODescriptor_PUT_errorURL(struct zx_md_IDPSSODescriptor_s* x, struct zx_str* y);
void zx_md_IDPSSODescriptor_PUT_WantAuthnRequestsSigned(struct zx_md_IDPSSODescriptor_s* x, struct zx_str* y);

void zx_md_IDPSSODescriptor_PUT_Signature(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_ds_Signature_s* y);
void zx_md_IDPSSODescriptor_PUT_Extensions(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_Extensions_s* y);
void zx_md_IDPSSODescriptor_PUT_KeyDescriptor(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* y);
void zx_md_IDPSSODescriptor_PUT_Organization(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_Organization_s* y);
void zx_md_IDPSSODescriptor_PUT_ContactPerson(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_ContactPerson_s* y);
void zx_md_IDPSSODescriptor_PUT_ArtifactResolutionService(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_ArtifactResolutionService_s* y);
void zx_md_IDPSSODescriptor_PUT_SingleLogoutService(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_SingleLogoutService_s* y);
void zx_md_IDPSSODescriptor_PUT_ManageNameIDService(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_ManageNameIDService_s* y);
void zx_md_IDPSSODescriptor_PUT_NameIDFormat(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_elem_s* y);
void zx_md_IDPSSODescriptor_PUT_SingleSignOnService(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_SingleSignOnService_s* y);
void zx_md_IDPSSODescriptor_PUT_NameIDMappingService(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_NameIDMappingService_s* y);
void zx_md_IDPSSODescriptor_PUT_AssertionIDRequestService(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_AssertionIDRequestService_s* y);
void zx_md_IDPSSODescriptor_PUT_AttributeProfile(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_elem_s* y);
void zx_md_IDPSSODescriptor_PUT_Attribute(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_sa_Attribute_s* y);

void zx_md_IDPSSODescriptor_ADD_Signature(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_ds_Signature_s* z);
void zx_md_IDPSSODescriptor_ADD_Extensions(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_Extensions_s* z);
void zx_md_IDPSSODescriptor_ADD_KeyDescriptor(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* z);
void zx_md_IDPSSODescriptor_ADD_Organization(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_Organization_s* z);
void zx_md_IDPSSODescriptor_ADD_ContactPerson(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_ContactPerson_s* z);
void zx_md_IDPSSODescriptor_ADD_ArtifactResolutionService(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_ArtifactResolutionService_s* z);
void zx_md_IDPSSODescriptor_ADD_SingleLogoutService(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_SingleLogoutService_s* z);
void zx_md_IDPSSODescriptor_ADD_ManageNameIDService(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_ManageNameIDService_s* z);
void zx_md_IDPSSODescriptor_ADD_NameIDFormat(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_elem_s* z);
void zx_md_IDPSSODescriptor_ADD_SingleSignOnService(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_SingleSignOnService_s* z);
void zx_md_IDPSSODescriptor_ADD_NameIDMappingService(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_NameIDMappingService_s* z);
void zx_md_IDPSSODescriptor_ADD_AssertionIDRequestService(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_AssertionIDRequestService_s* z);
void zx_md_IDPSSODescriptor_ADD_AttributeProfile(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_elem_s* z);
void zx_md_IDPSSODescriptor_ADD_Attribute(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_sa_Attribute_s* z);

void zx_md_IDPSSODescriptor_DEL_Signature(struct zx_md_IDPSSODescriptor_s* x, int n);
void zx_md_IDPSSODescriptor_DEL_Extensions(struct zx_md_IDPSSODescriptor_s* x, int n);
void zx_md_IDPSSODescriptor_DEL_KeyDescriptor(struct zx_md_IDPSSODescriptor_s* x, int n);
void zx_md_IDPSSODescriptor_DEL_Organization(struct zx_md_IDPSSODescriptor_s* x, int n);
void zx_md_IDPSSODescriptor_DEL_ContactPerson(struct zx_md_IDPSSODescriptor_s* x, int n);
void zx_md_IDPSSODescriptor_DEL_ArtifactResolutionService(struct zx_md_IDPSSODescriptor_s* x, int n);
void zx_md_IDPSSODescriptor_DEL_SingleLogoutService(struct zx_md_IDPSSODescriptor_s* x, int n);
void zx_md_IDPSSODescriptor_DEL_ManageNameIDService(struct zx_md_IDPSSODescriptor_s* x, int n);
void zx_md_IDPSSODescriptor_DEL_NameIDFormat(struct zx_md_IDPSSODescriptor_s* x, int n);
void zx_md_IDPSSODescriptor_DEL_SingleSignOnService(struct zx_md_IDPSSODescriptor_s* x, int n);
void zx_md_IDPSSODescriptor_DEL_NameIDMappingService(struct zx_md_IDPSSODescriptor_s* x, int n);
void zx_md_IDPSSODescriptor_DEL_AssertionIDRequestService(struct zx_md_IDPSSODescriptor_s* x, int n);
void zx_md_IDPSSODescriptor_DEL_AttributeProfile(struct zx_md_IDPSSODescriptor_s* x, int n);
void zx_md_IDPSSODescriptor_DEL_Attribute(struct zx_md_IDPSSODescriptor_s* x, int n);

void zx_md_IDPSSODescriptor_REV_Signature(struct zx_md_IDPSSODescriptor_s* x);
void zx_md_IDPSSODescriptor_REV_Extensions(struct zx_md_IDPSSODescriptor_s* x);
void zx_md_IDPSSODescriptor_REV_KeyDescriptor(struct zx_md_IDPSSODescriptor_s* x);
void zx_md_IDPSSODescriptor_REV_Organization(struct zx_md_IDPSSODescriptor_s* x);
void zx_md_IDPSSODescriptor_REV_ContactPerson(struct zx_md_IDPSSODescriptor_s* x);
void zx_md_IDPSSODescriptor_REV_ArtifactResolutionService(struct zx_md_IDPSSODescriptor_s* x);
void zx_md_IDPSSODescriptor_REV_SingleLogoutService(struct zx_md_IDPSSODescriptor_s* x);
void zx_md_IDPSSODescriptor_REV_ManageNameIDService(struct zx_md_IDPSSODescriptor_s* x);
void zx_md_IDPSSODescriptor_REV_NameIDFormat(struct zx_md_IDPSSODescriptor_s* x);
void zx_md_IDPSSODescriptor_REV_SingleSignOnService(struct zx_md_IDPSSODescriptor_s* x);
void zx_md_IDPSSODescriptor_REV_NameIDMappingService(struct zx_md_IDPSSODescriptor_s* x);
void zx_md_IDPSSODescriptor_REV_AssertionIDRequestService(struct zx_md_IDPSSODescriptor_s* x);
void zx_md_IDPSSODescriptor_REV_AttributeProfile(struct zx_md_IDPSSODescriptor_s* x);
void zx_md_IDPSSODescriptor_REV_Attribute(struct zx_md_IDPSSODescriptor_s* x);

#endif
/* -------------------------- md_KeyDescriptor -------------------------- */
/* refby( zx_md_AffiliationDescriptor_s zx_di_Keys_s zx_md_PDPDescriptor_s zx_md_RoleDescriptor_s zx_md_SPSSODescriptor_s zx_md_AuthnAuthorityDescriptor_s zx_md_AttributeAuthorityDescriptor_s zx_md_IDPSSODescriptor_s ) */
#ifndef zx_md_KeyDescriptor_EXT
#define zx_md_KeyDescriptor_EXT
#endif

struct zx_md_KeyDescriptor_s* zx_DEC_md_KeyDescriptor(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_KeyDescriptor_s* zx_NEW_md_KeyDescriptor(struct zx_ctx* c);
void zx_FREE_md_KeyDescriptor(struct zx_ctx* c, struct zx_md_KeyDescriptor_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_KeyDescriptor_s* zx_DEEP_CLONE_md_KeyDescriptor(struct zx_ctx* c, struct zx_md_KeyDescriptor_s* x, int dup_strs);
void zx_DUP_STRS_md_KeyDescriptor(struct zx_ctx* c, struct zx_md_KeyDescriptor_s* x);
int zx_WALK_SO_md_KeyDescriptor(struct zx_ctx* c, struct zx_md_KeyDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_KeyDescriptor(struct zx_ctx* c, struct zx_md_KeyDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_KeyDescriptor(struct zx_ctx* c, struct zx_md_KeyDescriptor_s* x);
int zx_LEN_WO_md_KeyDescriptor(struct zx_ctx* c, struct zx_md_KeyDescriptor_s* x);
char* zx_ENC_SO_md_KeyDescriptor(struct zx_ctx* c, struct zx_md_KeyDescriptor_s* x, char* p);
char* zx_ENC_WO_md_KeyDescriptor(struct zx_ctx* c, struct zx_md_KeyDescriptor_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_KeyDescriptor(struct zx_ctx* c, struct zx_md_KeyDescriptor_s* x);
struct zx_str* zx_EASY_ENC_WO_md_KeyDescriptor(struct zx_ctx* c, struct zx_md_KeyDescriptor_s* x);

struct zx_md_KeyDescriptor_s {
  ZX_ELEM_EXT
  zx_md_KeyDescriptor_EXT
  struct zx_ds_KeyInfo_s* KeyInfo;	/* {1,1} nada */
  struct zx_md_EncryptionMethod_s* EncryptionMethod;	/* {0,-1} nada */
  struct zx_str* use;	/* {0,1} attribute keyTypes */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_KeyDescriptor_GET_use(struct zx_md_KeyDescriptor_s* x);

struct zx_ds_KeyInfo_s* zx_md_KeyDescriptor_GET_KeyInfo(struct zx_md_KeyDescriptor_s* x, int n);
struct zx_md_EncryptionMethod_s* zx_md_KeyDescriptor_GET_EncryptionMethod(struct zx_md_KeyDescriptor_s* x, int n);

int zx_md_KeyDescriptor_NUM_KeyInfo(struct zx_md_KeyDescriptor_s* x);
int zx_md_KeyDescriptor_NUM_EncryptionMethod(struct zx_md_KeyDescriptor_s* x);

struct zx_ds_KeyInfo_s* zx_md_KeyDescriptor_POP_KeyInfo(struct zx_md_KeyDescriptor_s* x);
struct zx_md_EncryptionMethod_s* zx_md_KeyDescriptor_POP_EncryptionMethod(struct zx_md_KeyDescriptor_s* x);

void zx_md_KeyDescriptor_PUSH_KeyInfo(struct zx_md_KeyDescriptor_s* x, struct zx_ds_KeyInfo_s* y);
void zx_md_KeyDescriptor_PUSH_EncryptionMethod(struct zx_md_KeyDescriptor_s* x, struct zx_md_EncryptionMethod_s* y);

void zx_md_KeyDescriptor_PUT_use(struct zx_md_KeyDescriptor_s* x, struct zx_str* y);

void zx_md_KeyDescriptor_PUT_KeyInfo(struct zx_md_KeyDescriptor_s* x, int n, struct zx_ds_KeyInfo_s* y);
void zx_md_KeyDescriptor_PUT_EncryptionMethod(struct zx_md_KeyDescriptor_s* x, int n, struct zx_md_EncryptionMethod_s* y);

void zx_md_KeyDescriptor_ADD_KeyInfo(struct zx_md_KeyDescriptor_s* x, int n, struct zx_ds_KeyInfo_s* z);
void zx_md_KeyDescriptor_ADD_EncryptionMethod(struct zx_md_KeyDescriptor_s* x, int n, struct zx_md_EncryptionMethod_s* z);

void zx_md_KeyDescriptor_DEL_KeyInfo(struct zx_md_KeyDescriptor_s* x, int n);
void zx_md_KeyDescriptor_DEL_EncryptionMethod(struct zx_md_KeyDescriptor_s* x, int n);

void zx_md_KeyDescriptor_REV_KeyInfo(struct zx_md_KeyDescriptor_s* x);
void zx_md_KeyDescriptor_REV_EncryptionMethod(struct zx_md_KeyDescriptor_s* x);

#endif
/* -------------------------- md_ManageNameIDService -------------------------- */
/* refby( zx_md_SPSSODescriptor_s zx_md_IDPSSODescriptor_s ) */
#ifndef zx_md_ManageNameIDService_EXT
#define zx_md_ManageNameIDService_EXT
#endif

struct zx_md_ManageNameIDService_s* zx_DEC_md_ManageNameIDService(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_ManageNameIDService_s* zx_NEW_md_ManageNameIDService(struct zx_ctx* c);
void zx_FREE_md_ManageNameIDService(struct zx_ctx* c, struct zx_md_ManageNameIDService_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_ManageNameIDService_s* zx_DEEP_CLONE_md_ManageNameIDService(struct zx_ctx* c, struct zx_md_ManageNameIDService_s* x, int dup_strs);
void zx_DUP_STRS_md_ManageNameIDService(struct zx_ctx* c, struct zx_md_ManageNameIDService_s* x);
int zx_WALK_SO_md_ManageNameIDService(struct zx_ctx* c, struct zx_md_ManageNameIDService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_ManageNameIDService(struct zx_ctx* c, struct zx_md_ManageNameIDService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_ManageNameIDService(struct zx_ctx* c, struct zx_md_ManageNameIDService_s* x);
int zx_LEN_WO_md_ManageNameIDService(struct zx_ctx* c, struct zx_md_ManageNameIDService_s* x);
char* zx_ENC_SO_md_ManageNameIDService(struct zx_ctx* c, struct zx_md_ManageNameIDService_s* x, char* p);
char* zx_ENC_WO_md_ManageNameIDService(struct zx_ctx* c, struct zx_md_ManageNameIDService_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_ManageNameIDService(struct zx_ctx* c, struct zx_md_ManageNameIDService_s* x);
struct zx_str* zx_EASY_ENC_WO_md_ManageNameIDService(struct zx_ctx* c, struct zx_md_ManageNameIDService_s* x);

struct zx_md_ManageNameIDService_s {
  ZX_ELEM_EXT
  zx_md_ManageNameIDService_EXT
  struct zx_str* Binding;	/* {1,1} attribute xs:anyURI */
  struct zx_str* Location;	/* {1,1} attribute xs:anyURI */
  struct zx_str* ResponseLocation;	/* {0,1} attribute xs:anyURI */
  struct zx_str* index;	/* {0,1} attribute xs:unsignedShort */
  struct zx_str* isDefault;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_ManageNameIDService_GET_Binding(struct zx_md_ManageNameIDService_s* x);
struct zx_str* zx_md_ManageNameIDService_GET_Location(struct zx_md_ManageNameIDService_s* x);
struct zx_str* zx_md_ManageNameIDService_GET_ResponseLocation(struct zx_md_ManageNameIDService_s* x);
struct zx_str* zx_md_ManageNameIDService_GET_index(struct zx_md_ManageNameIDService_s* x);
struct zx_str* zx_md_ManageNameIDService_GET_isDefault(struct zx_md_ManageNameIDService_s* x);





void zx_md_ManageNameIDService_PUT_Binding(struct zx_md_ManageNameIDService_s* x, struct zx_str* y);
void zx_md_ManageNameIDService_PUT_Location(struct zx_md_ManageNameIDService_s* x, struct zx_str* y);
void zx_md_ManageNameIDService_PUT_ResponseLocation(struct zx_md_ManageNameIDService_s* x, struct zx_str* y);
void zx_md_ManageNameIDService_PUT_index(struct zx_md_ManageNameIDService_s* x, struct zx_str* y);
void zx_md_ManageNameIDService_PUT_isDefault(struct zx_md_ManageNameIDService_s* x, struct zx_str* y);





#endif
/* -------------------------- md_NameIDMappingService -------------------------- */
/* refby( zx_md_IDPSSODescriptor_s ) */
#ifndef zx_md_NameIDMappingService_EXT
#define zx_md_NameIDMappingService_EXT
#endif

struct zx_md_NameIDMappingService_s* zx_DEC_md_NameIDMappingService(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_NameIDMappingService_s* zx_NEW_md_NameIDMappingService(struct zx_ctx* c);
void zx_FREE_md_NameIDMappingService(struct zx_ctx* c, struct zx_md_NameIDMappingService_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_NameIDMappingService_s* zx_DEEP_CLONE_md_NameIDMappingService(struct zx_ctx* c, struct zx_md_NameIDMappingService_s* x, int dup_strs);
void zx_DUP_STRS_md_NameIDMappingService(struct zx_ctx* c, struct zx_md_NameIDMappingService_s* x);
int zx_WALK_SO_md_NameIDMappingService(struct zx_ctx* c, struct zx_md_NameIDMappingService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_NameIDMappingService(struct zx_ctx* c, struct zx_md_NameIDMappingService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_NameIDMappingService(struct zx_ctx* c, struct zx_md_NameIDMappingService_s* x);
int zx_LEN_WO_md_NameIDMappingService(struct zx_ctx* c, struct zx_md_NameIDMappingService_s* x);
char* zx_ENC_SO_md_NameIDMappingService(struct zx_ctx* c, struct zx_md_NameIDMappingService_s* x, char* p);
char* zx_ENC_WO_md_NameIDMappingService(struct zx_ctx* c, struct zx_md_NameIDMappingService_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_NameIDMappingService(struct zx_ctx* c, struct zx_md_NameIDMappingService_s* x);
struct zx_str* zx_EASY_ENC_WO_md_NameIDMappingService(struct zx_ctx* c, struct zx_md_NameIDMappingService_s* x);

struct zx_md_NameIDMappingService_s {
  ZX_ELEM_EXT
  zx_md_NameIDMappingService_EXT
  struct zx_str* Binding;	/* {1,1} attribute xs:anyURI */
  struct zx_str* Location;	/* {1,1} attribute xs:anyURI */
  struct zx_str* ResponseLocation;	/* {0,1} attribute xs:anyURI */
  struct zx_str* index;	/* {0,1} attribute xs:unsignedShort */
  struct zx_str* isDefault;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_NameIDMappingService_GET_Binding(struct zx_md_NameIDMappingService_s* x);
struct zx_str* zx_md_NameIDMappingService_GET_Location(struct zx_md_NameIDMappingService_s* x);
struct zx_str* zx_md_NameIDMappingService_GET_ResponseLocation(struct zx_md_NameIDMappingService_s* x);
struct zx_str* zx_md_NameIDMappingService_GET_index(struct zx_md_NameIDMappingService_s* x);
struct zx_str* zx_md_NameIDMappingService_GET_isDefault(struct zx_md_NameIDMappingService_s* x);





void zx_md_NameIDMappingService_PUT_Binding(struct zx_md_NameIDMappingService_s* x, struct zx_str* y);
void zx_md_NameIDMappingService_PUT_Location(struct zx_md_NameIDMappingService_s* x, struct zx_str* y);
void zx_md_NameIDMappingService_PUT_ResponseLocation(struct zx_md_NameIDMappingService_s* x, struct zx_str* y);
void zx_md_NameIDMappingService_PUT_index(struct zx_md_NameIDMappingService_s* x, struct zx_str* y);
void zx_md_NameIDMappingService_PUT_isDefault(struct zx_md_NameIDMappingService_s* x, struct zx_str* y);





#endif
/* -------------------------- md_Organization -------------------------- */
/* refby( zx_md_EntityDescriptor_s zx_md_PDPDescriptor_s zx_md_RoleDescriptor_s zx_md_SPSSODescriptor_s zx_md_AuthnAuthorityDescriptor_s zx_md_AttributeAuthorityDescriptor_s zx_md_IDPSSODescriptor_s ) */
#ifndef zx_md_Organization_EXT
#define zx_md_Organization_EXT
#endif

struct zx_md_Organization_s* zx_DEC_md_Organization(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_Organization_s* zx_NEW_md_Organization(struct zx_ctx* c);
void zx_FREE_md_Organization(struct zx_ctx* c, struct zx_md_Organization_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_Organization_s* zx_DEEP_CLONE_md_Organization(struct zx_ctx* c, struct zx_md_Organization_s* x, int dup_strs);
void zx_DUP_STRS_md_Organization(struct zx_ctx* c, struct zx_md_Organization_s* x);
int zx_WALK_SO_md_Organization(struct zx_ctx* c, struct zx_md_Organization_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_Organization(struct zx_ctx* c, struct zx_md_Organization_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_Organization(struct zx_ctx* c, struct zx_md_Organization_s* x);
int zx_LEN_WO_md_Organization(struct zx_ctx* c, struct zx_md_Organization_s* x);
char* zx_ENC_SO_md_Organization(struct zx_ctx* c, struct zx_md_Organization_s* x, char* p);
char* zx_ENC_WO_md_Organization(struct zx_ctx* c, struct zx_md_Organization_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_Organization(struct zx_ctx* c, struct zx_md_Organization_s* x);
struct zx_str* zx_EASY_ENC_WO_md_Organization(struct zx_ctx* c, struct zx_md_Organization_s* x);

struct zx_md_Organization_s {
  ZX_ELEM_EXT
  zx_md_Organization_EXT
  struct zx_md_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_md_OrganizationName_s* OrganizationName;	/* {1,-1} nada */
  struct zx_md_OrganizationDisplayName_s* OrganizationDisplayName;	/* {1,-1} nada */
  struct zx_md_OrganizationURL_s* OrganizationURL;	/* {1,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_md_Extensions_s* zx_md_Organization_GET_Extensions(struct zx_md_Organization_s* x, int n);
struct zx_md_OrganizationName_s* zx_md_Organization_GET_OrganizationName(struct zx_md_Organization_s* x, int n);
struct zx_md_OrganizationDisplayName_s* zx_md_Organization_GET_OrganizationDisplayName(struct zx_md_Organization_s* x, int n);
struct zx_md_OrganizationURL_s* zx_md_Organization_GET_OrganizationURL(struct zx_md_Organization_s* x, int n);

int zx_md_Organization_NUM_Extensions(struct zx_md_Organization_s* x);
int zx_md_Organization_NUM_OrganizationName(struct zx_md_Organization_s* x);
int zx_md_Organization_NUM_OrganizationDisplayName(struct zx_md_Organization_s* x);
int zx_md_Organization_NUM_OrganizationURL(struct zx_md_Organization_s* x);

struct zx_md_Extensions_s* zx_md_Organization_POP_Extensions(struct zx_md_Organization_s* x);
struct zx_md_OrganizationName_s* zx_md_Organization_POP_OrganizationName(struct zx_md_Organization_s* x);
struct zx_md_OrganizationDisplayName_s* zx_md_Organization_POP_OrganizationDisplayName(struct zx_md_Organization_s* x);
struct zx_md_OrganizationURL_s* zx_md_Organization_POP_OrganizationURL(struct zx_md_Organization_s* x);

void zx_md_Organization_PUSH_Extensions(struct zx_md_Organization_s* x, struct zx_md_Extensions_s* y);
void zx_md_Organization_PUSH_OrganizationName(struct zx_md_Organization_s* x, struct zx_md_OrganizationName_s* y);
void zx_md_Organization_PUSH_OrganizationDisplayName(struct zx_md_Organization_s* x, struct zx_md_OrganizationDisplayName_s* y);
void zx_md_Organization_PUSH_OrganizationURL(struct zx_md_Organization_s* x, struct zx_md_OrganizationURL_s* y);


void zx_md_Organization_PUT_Extensions(struct zx_md_Organization_s* x, int n, struct zx_md_Extensions_s* y);
void zx_md_Organization_PUT_OrganizationName(struct zx_md_Organization_s* x, int n, struct zx_md_OrganizationName_s* y);
void zx_md_Organization_PUT_OrganizationDisplayName(struct zx_md_Organization_s* x, int n, struct zx_md_OrganizationDisplayName_s* y);
void zx_md_Organization_PUT_OrganizationURL(struct zx_md_Organization_s* x, int n, struct zx_md_OrganizationURL_s* y);

void zx_md_Organization_ADD_Extensions(struct zx_md_Organization_s* x, int n, struct zx_md_Extensions_s* z);
void zx_md_Organization_ADD_OrganizationName(struct zx_md_Organization_s* x, int n, struct zx_md_OrganizationName_s* z);
void zx_md_Organization_ADD_OrganizationDisplayName(struct zx_md_Organization_s* x, int n, struct zx_md_OrganizationDisplayName_s* z);
void zx_md_Organization_ADD_OrganizationURL(struct zx_md_Organization_s* x, int n, struct zx_md_OrganizationURL_s* z);

void zx_md_Organization_DEL_Extensions(struct zx_md_Organization_s* x, int n);
void zx_md_Organization_DEL_OrganizationName(struct zx_md_Organization_s* x, int n);
void zx_md_Organization_DEL_OrganizationDisplayName(struct zx_md_Organization_s* x, int n);
void zx_md_Organization_DEL_OrganizationURL(struct zx_md_Organization_s* x, int n);

void zx_md_Organization_REV_Extensions(struct zx_md_Organization_s* x);
void zx_md_Organization_REV_OrganizationName(struct zx_md_Organization_s* x);
void zx_md_Organization_REV_OrganizationDisplayName(struct zx_md_Organization_s* x);
void zx_md_Organization_REV_OrganizationURL(struct zx_md_Organization_s* x);

#endif
/* -------------------------- md_OrganizationDisplayName -------------------------- */
/* refby( zx_md_Organization_s ) */
#ifndef zx_md_OrganizationDisplayName_EXT
#define zx_md_OrganizationDisplayName_EXT
#endif

struct zx_md_OrganizationDisplayName_s* zx_DEC_md_OrganizationDisplayName(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_OrganizationDisplayName_s* zx_NEW_md_OrganizationDisplayName(struct zx_ctx* c);
void zx_FREE_md_OrganizationDisplayName(struct zx_ctx* c, struct zx_md_OrganizationDisplayName_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_OrganizationDisplayName_s* zx_DEEP_CLONE_md_OrganizationDisplayName(struct zx_ctx* c, struct zx_md_OrganizationDisplayName_s* x, int dup_strs);
void zx_DUP_STRS_md_OrganizationDisplayName(struct zx_ctx* c, struct zx_md_OrganizationDisplayName_s* x);
int zx_WALK_SO_md_OrganizationDisplayName(struct zx_ctx* c, struct zx_md_OrganizationDisplayName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_OrganizationDisplayName(struct zx_ctx* c, struct zx_md_OrganizationDisplayName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_OrganizationDisplayName(struct zx_ctx* c, struct zx_md_OrganizationDisplayName_s* x);
int zx_LEN_WO_md_OrganizationDisplayName(struct zx_ctx* c, struct zx_md_OrganizationDisplayName_s* x);
char* zx_ENC_SO_md_OrganizationDisplayName(struct zx_ctx* c, struct zx_md_OrganizationDisplayName_s* x, char* p);
char* zx_ENC_WO_md_OrganizationDisplayName(struct zx_ctx* c, struct zx_md_OrganizationDisplayName_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_OrganizationDisplayName(struct zx_ctx* c, struct zx_md_OrganizationDisplayName_s* x);
struct zx_str* zx_EASY_ENC_WO_md_OrganizationDisplayName(struct zx_ctx* c, struct zx_md_OrganizationDisplayName_s* x);

struct zx_md_OrganizationDisplayName_s {
  ZX_ELEM_EXT
  zx_md_OrganizationDisplayName_EXT
  struct zx_str* lang;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_OrganizationDisplayName_GET_lang(struct zx_md_OrganizationDisplayName_s* x);





void zx_md_OrganizationDisplayName_PUT_lang(struct zx_md_OrganizationDisplayName_s* x, struct zx_str* y);





#endif
/* -------------------------- md_OrganizationName -------------------------- */
/* refby( zx_md_Organization_s ) */
#ifndef zx_md_OrganizationName_EXT
#define zx_md_OrganizationName_EXT
#endif

struct zx_md_OrganizationName_s* zx_DEC_md_OrganizationName(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_OrganizationName_s* zx_NEW_md_OrganizationName(struct zx_ctx* c);
void zx_FREE_md_OrganizationName(struct zx_ctx* c, struct zx_md_OrganizationName_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_OrganizationName_s* zx_DEEP_CLONE_md_OrganizationName(struct zx_ctx* c, struct zx_md_OrganizationName_s* x, int dup_strs);
void zx_DUP_STRS_md_OrganizationName(struct zx_ctx* c, struct zx_md_OrganizationName_s* x);
int zx_WALK_SO_md_OrganizationName(struct zx_ctx* c, struct zx_md_OrganizationName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_OrganizationName(struct zx_ctx* c, struct zx_md_OrganizationName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_OrganizationName(struct zx_ctx* c, struct zx_md_OrganizationName_s* x);
int zx_LEN_WO_md_OrganizationName(struct zx_ctx* c, struct zx_md_OrganizationName_s* x);
char* zx_ENC_SO_md_OrganizationName(struct zx_ctx* c, struct zx_md_OrganizationName_s* x, char* p);
char* zx_ENC_WO_md_OrganizationName(struct zx_ctx* c, struct zx_md_OrganizationName_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_OrganizationName(struct zx_ctx* c, struct zx_md_OrganizationName_s* x);
struct zx_str* zx_EASY_ENC_WO_md_OrganizationName(struct zx_ctx* c, struct zx_md_OrganizationName_s* x);

struct zx_md_OrganizationName_s {
  ZX_ELEM_EXT
  zx_md_OrganizationName_EXT
  struct zx_str* lang;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_OrganizationName_GET_lang(struct zx_md_OrganizationName_s* x);





void zx_md_OrganizationName_PUT_lang(struct zx_md_OrganizationName_s* x, struct zx_str* y);





#endif
/* -------------------------- md_OrganizationURL -------------------------- */
/* refby( zx_md_Organization_s ) */
#ifndef zx_md_OrganizationURL_EXT
#define zx_md_OrganizationURL_EXT
#endif

struct zx_md_OrganizationURL_s* zx_DEC_md_OrganizationURL(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_OrganizationURL_s* zx_NEW_md_OrganizationURL(struct zx_ctx* c);
void zx_FREE_md_OrganizationURL(struct zx_ctx* c, struct zx_md_OrganizationURL_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_OrganizationURL_s* zx_DEEP_CLONE_md_OrganizationURL(struct zx_ctx* c, struct zx_md_OrganizationURL_s* x, int dup_strs);
void zx_DUP_STRS_md_OrganizationURL(struct zx_ctx* c, struct zx_md_OrganizationURL_s* x);
int zx_WALK_SO_md_OrganizationURL(struct zx_ctx* c, struct zx_md_OrganizationURL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_OrganizationURL(struct zx_ctx* c, struct zx_md_OrganizationURL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_OrganizationURL(struct zx_ctx* c, struct zx_md_OrganizationURL_s* x);
int zx_LEN_WO_md_OrganizationURL(struct zx_ctx* c, struct zx_md_OrganizationURL_s* x);
char* zx_ENC_SO_md_OrganizationURL(struct zx_ctx* c, struct zx_md_OrganizationURL_s* x, char* p);
char* zx_ENC_WO_md_OrganizationURL(struct zx_ctx* c, struct zx_md_OrganizationURL_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_OrganizationURL(struct zx_ctx* c, struct zx_md_OrganizationURL_s* x);
struct zx_str* zx_EASY_ENC_WO_md_OrganizationURL(struct zx_ctx* c, struct zx_md_OrganizationURL_s* x);

struct zx_md_OrganizationURL_s {
  ZX_ELEM_EXT
  zx_md_OrganizationURL_EXT
  struct zx_str* lang;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_OrganizationURL_GET_lang(struct zx_md_OrganizationURL_s* x);





void zx_md_OrganizationURL_PUT_lang(struct zx_md_OrganizationURL_s* x, struct zx_str* y);





#endif
/* -------------------------- md_PDPDescriptor -------------------------- */
/* refby( zx_md_EntityDescriptor_s ) */
#ifndef zx_md_PDPDescriptor_EXT
#define zx_md_PDPDescriptor_EXT
#endif

struct zx_md_PDPDescriptor_s* zx_DEC_md_PDPDescriptor(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_PDPDescriptor_s* zx_NEW_md_PDPDescriptor(struct zx_ctx* c);
void zx_FREE_md_PDPDescriptor(struct zx_ctx* c, struct zx_md_PDPDescriptor_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_PDPDescriptor_s* zx_DEEP_CLONE_md_PDPDescriptor(struct zx_ctx* c, struct zx_md_PDPDescriptor_s* x, int dup_strs);
void zx_DUP_STRS_md_PDPDescriptor(struct zx_ctx* c, struct zx_md_PDPDescriptor_s* x);
int zx_WALK_SO_md_PDPDescriptor(struct zx_ctx* c, struct zx_md_PDPDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_PDPDescriptor(struct zx_ctx* c, struct zx_md_PDPDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_PDPDescriptor(struct zx_ctx* c, struct zx_md_PDPDescriptor_s* x);
int zx_LEN_WO_md_PDPDescriptor(struct zx_ctx* c, struct zx_md_PDPDescriptor_s* x);
char* zx_ENC_SO_md_PDPDescriptor(struct zx_ctx* c, struct zx_md_PDPDescriptor_s* x, char* p);
char* zx_ENC_WO_md_PDPDescriptor(struct zx_ctx* c, struct zx_md_PDPDescriptor_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_PDPDescriptor(struct zx_ctx* c, struct zx_md_PDPDescriptor_s* x);
struct zx_str* zx_EASY_ENC_WO_md_PDPDescriptor(struct zx_ctx* c, struct zx_md_PDPDescriptor_s* x);

struct zx_md_PDPDescriptor_s {
  ZX_ELEM_EXT
  zx_md_PDPDescriptor_EXT
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_md_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_md_KeyDescriptor_s* KeyDescriptor;	/* {0,-1} nada */
  struct zx_md_Organization_s* Organization;	/* {0,1} nada */
  struct zx_md_ContactPerson_s* ContactPerson;	/* {0,-1} nada */
  struct zx_md_AuthzService_s* AuthzService;	/* {1,-1} nada */
  struct zx_md_AssertionIDRequestService_s* AssertionIDRequestService;	/* {0,-1} nada */
  struct zx_elem_s* NameIDFormat;	/* {0,-1} xs:anyURI */
  struct zx_str* ID;	/* {0,1} attribute xs:ID */
  struct zx_str* validUntil;	/* {0,1} attribute xs:dateTime */
  struct zx_str* cacheDuration;	/* {0,1} attribute xs:duration */
  struct zx_str* protocolSupportEnumeration;	/* {1,1} attribute xs:string */
  struct zx_str* errorURL;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_PDPDescriptor_GET_ID(struct zx_md_PDPDescriptor_s* x);
struct zx_str* zx_md_PDPDescriptor_GET_validUntil(struct zx_md_PDPDescriptor_s* x);
struct zx_str* zx_md_PDPDescriptor_GET_cacheDuration(struct zx_md_PDPDescriptor_s* x);
struct zx_str* zx_md_PDPDescriptor_GET_protocolSupportEnumeration(struct zx_md_PDPDescriptor_s* x);
struct zx_str* zx_md_PDPDescriptor_GET_errorURL(struct zx_md_PDPDescriptor_s* x);

struct zx_ds_Signature_s* zx_md_PDPDescriptor_GET_Signature(struct zx_md_PDPDescriptor_s* x, int n);
struct zx_md_Extensions_s* zx_md_PDPDescriptor_GET_Extensions(struct zx_md_PDPDescriptor_s* x, int n);
struct zx_md_KeyDescriptor_s* zx_md_PDPDescriptor_GET_KeyDescriptor(struct zx_md_PDPDescriptor_s* x, int n);
struct zx_md_Organization_s* zx_md_PDPDescriptor_GET_Organization(struct zx_md_PDPDescriptor_s* x, int n);
struct zx_md_ContactPerson_s* zx_md_PDPDescriptor_GET_ContactPerson(struct zx_md_PDPDescriptor_s* x, int n);
struct zx_md_AuthzService_s* zx_md_PDPDescriptor_GET_AuthzService(struct zx_md_PDPDescriptor_s* x, int n);
struct zx_md_AssertionIDRequestService_s* zx_md_PDPDescriptor_GET_AssertionIDRequestService(struct zx_md_PDPDescriptor_s* x, int n);
struct zx_elem_s* zx_md_PDPDescriptor_GET_NameIDFormat(struct zx_md_PDPDescriptor_s* x, int n);

int zx_md_PDPDescriptor_NUM_Signature(struct zx_md_PDPDescriptor_s* x);
int zx_md_PDPDescriptor_NUM_Extensions(struct zx_md_PDPDescriptor_s* x);
int zx_md_PDPDescriptor_NUM_KeyDescriptor(struct zx_md_PDPDescriptor_s* x);
int zx_md_PDPDescriptor_NUM_Organization(struct zx_md_PDPDescriptor_s* x);
int zx_md_PDPDescriptor_NUM_ContactPerson(struct zx_md_PDPDescriptor_s* x);
int zx_md_PDPDescriptor_NUM_AuthzService(struct zx_md_PDPDescriptor_s* x);
int zx_md_PDPDescriptor_NUM_AssertionIDRequestService(struct zx_md_PDPDescriptor_s* x);
int zx_md_PDPDescriptor_NUM_NameIDFormat(struct zx_md_PDPDescriptor_s* x);

struct zx_ds_Signature_s* zx_md_PDPDescriptor_POP_Signature(struct zx_md_PDPDescriptor_s* x);
struct zx_md_Extensions_s* zx_md_PDPDescriptor_POP_Extensions(struct zx_md_PDPDescriptor_s* x);
struct zx_md_KeyDescriptor_s* zx_md_PDPDescriptor_POP_KeyDescriptor(struct zx_md_PDPDescriptor_s* x);
struct zx_md_Organization_s* zx_md_PDPDescriptor_POP_Organization(struct zx_md_PDPDescriptor_s* x);
struct zx_md_ContactPerson_s* zx_md_PDPDescriptor_POP_ContactPerson(struct zx_md_PDPDescriptor_s* x);
struct zx_md_AuthzService_s* zx_md_PDPDescriptor_POP_AuthzService(struct zx_md_PDPDescriptor_s* x);
struct zx_md_AssertionIDRequestService_s* zx_md_PDPDescriptor_POP_AssertionIDRequestService(struct zx_md_PDPDescriptor_s* x);
struct zx_elem_s* zx_md_PDPDescriptor_POP_NameIDFormat(struct zx_md_PDPDescriptor_s* x);

void zx_md_PDPDescriptor_PUSH_Signature(struct zx_md_PDPDescriptor_s* x, struct zx_ds_Signature_s* y);
void zx_md_PDPDescriptor_PUSH_Extensions(struct zx_md_PDPDescriptor_s* x, struct zx_md_Extensions_s* y);
void zx_md_PDPDescriptor_PUSH_KeyDescriptor(struct zx_md_PDPDescriptor_s* x, struct zx_md_KeyDescriptor_s* y);
void zx_md_PDPDescriptor_PUSH_Organization(struct zx_md_PDPDescriptor_s* x, struct zx_md_Organization_s* y);
void zx_md_PDPDescriptor_PUSH_ContactPerson(struct zx_md_PDPDescriptor_s* x, struct zx_md_ContactPerson_s* y);
void zx_md_PDPDescriptor_PUSH_AuthzService(struct zx_md_PDPDescriptor_s* x, struct zx_md_AuthzService_s* y);
void zx_md_PDPDescriptor_PUSH_AssertionIDRequestService(struct zx_md_PDPDescriptor_s* x, struct zx_md_AssertionIDRequestService_s* y);
void zx_md_PDPDescriptor_PUSH_NameIDFormat(struct zx_md_PDPDescriptor_s* x, struct zx_elem_s* y);

void zx_md_PDPDescriptor_PUT_ID(struct zx_md_PDPDescriptor_s* x, struct zx_str* y);
void zx_md_PDPDescriptor_PUT_validUntil(struct zx_md_PDPDescriptor_s* x, struct zx_str* y);
void zx_md_PDPDescriptor_PUT_cacheDuration(struct zx_md_PDPDescriptor_s* x, struct zx_str* y);
void zx_md_PDPDescriptor_PUT_protocolSupportEnumeration(struct zx_md_PDPDescriptor_s* x, struct zx_str* y);
void zx_md_PDPDescriptor_PUT_errorURL(struct zx_md_PDPDescriptor_s* x, struct zx_str* y);

void zx_md_PDPDescriptor_PUT_Signature(struct zx_md_PDPDescriptor_s* x, int n, struct zx_ds_Signature_s* y);
void zx_md_PDPDescriptor_PUT_Extensions(struct zx_md_PDPDescriptor_s* x, int n, struct zx_md_Extensions_s* y);
void zx_md_PDPDescriptor_PUT_KeyDescriptor(struct zx_md_PDPDescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* y);
void zx_md_PDPDescriptor_PUT_Organization(struct zx_md_PDPDescriptor_s* x, int n, struct zx_md_Organization_s* y);
void zx_md_PDPDescriptor_PUT_ContactPerson(struct zx_md_PDPDescriptor_s* x, int n, struct zx_md_ContactPerson_s* y);
void zx_md_PDPDescriptor_PUT_AuthzService(struct zx_md_PDPDescriptor_s* x, int n, struct zx_md_AuthzService_s* y);
void zx_md_PDPDescriptor_PUT_AssertionIDRequestService(struct zx_md_PDPDescriptor_s* x, int n, struct zx_md_AssertionIDRequestService_s* y);
void zx_md_PDPDescriptor_PUT_NameIDFormat(struct zx_md_PDPDescriptor_s* x, int n, struct zx_elem_s* y);

void zx_md_PDPDescriptor_ADD_Signature(struct zx_md_PDPDescriptor_s* x, int n, struct zx_ds_Signature_s* z);
void zx_md_PDPDescriptor_ADD_Extensions(struct zx_md_PDPDescriptor_s* x, int n, struct zx_md_Extensions_s* z);
void zx_md_PDPDescriptor_ADD_KeyDescriptor(struct zx_md_PDPDescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* z);
void zx_md_PDPDescriptor_ADD_Organization(struct zx_md_PDPDescriptor_s* x, int n, struct zx_md_Organization_s* z);
void zx_md_PDPDescriptor_ADD_ContactPerson(struct zx_md_PDPDescriptor_s* x, int n, struct zx_md_ContactPerson_s* z);
void zx_md_PDPDescriptor_ADD_AuthzService(struct zx_md_PDPDescriptor_s* x, int n, struct zx_md_AuthzService_s* z);
void zx_md_PDPDescriptor_ADD_AssertionIDRequestService(struct zx_md_PDPDescriptor_s* x, int n, struct zx_md_AssertionIDRequestService_s* z);
void zx_md_PDPDescriptor_ADD_NameIDFormat(struct zx_md_PDPDescriptor_s* x, int n, struct zx_elem_s* z);

void zx_md_PDPDescriptor_DEL_Signature(struct zx_md_PDPDescriptor_s* x, int n);
void zx_md_PDPDescriptor_DEL_Extensions(struct zx_md_PDPDescriptor_s* x, int n);
void zx_md_PDPDescriptor_DEL_KeyDescriptor(struct zx_md_PDPDescriptor_s* x, int n);
void zx_md_PDPDescriptor_DEL_Organization(struct zx_md_PDPDescriptor_s* x, int n);
void zx_md_PDPDescriptor_DEL_ContactPerson(struct zx_md_PDPDescriptor_s* x, int n);
void zx_md_PDPDescriptor_DEL_AuthzService(struct zx_md_PDPDescriptor_s* x, int n);
void zx_md_PDPDescriptor_DEL_AssertionIDRequestService(struct zx_md_PDPDescriptor_s* x, int n);
void zx_md_PDPDescriptor_DEL_NameIDFormat(struct zx_md_PDPDescriptor_s* x, int n);

void zx_md_PDPDescriptor_REV_Signature(struct zx_md_PDPDescriptor_s* x);
void zx_md_PDPDescriptor_REV_Extensions(struct zx_md_PDPDescriptor_s* x);
void zx_md_PDPDescriptor_REV_KeyDescriptor(struct zx_md_PDPDescriptor_s* x);
void zx_md_PDPDescriptor_REV_Organization(struct zx_md_PDPDescriptor_s* x);
void zx_md_PDPDescriptor_REV_ContactPerson(struct zx_md_PDPDescriptor_s* x);
void zx_md_PDPDescriptor_REV_AuthzService(struct zx_md_PDPDescriptor_s* x);
void zx_md_PDPDescriptor_REV_AssertionIDRequestService(struct zx_md_PDPDescriptor_s* x);
void zx_md_PDPDescriptor_REV_NameIDFormat(struct zx_md_PDPDescriptor_s* x);

#endif
/* -------------------------- md_RequestedAttribute -------------------------- */
/* refby( zx_md_AttributeConsumingService_s ) */
#ifndef zx_md_RequestedAttribute_EXT
#define zx_md_RequestedAttribute_EXT
#endif

struct zx_md_RequestedAttribute_s* zx_DEC_md_RequestedAttribute(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_RequestedAttribute_s* zx_NEW_md_RequestedAttribute(struct zx_ctx* c);
void zx_FREE_md_RequestedAttribute(struct zx_ctx* c, struct zx_md_RequestedAttribute_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_RequestedAttribute_s* zx_DEEP_CLONE_md_RequestedAttribute(struct zx_ctx* c, struct zx_md_RequestedAttribute_s* x, int dup_strs);
void zx_DUP_STRS_md_RequestedAttribute(struct zx_ctx* c, struct zx_md_RequestedAttribute_s* x);
int zx_WALK_SO_md_RequestedAttribute(struct zx_ctx* c, struct zx_md_RequestedAttribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_RequestedAttribute(struct zx_ctx* c, struct zx_md_RequestedAttribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_RequestedAttribute(struct zx_ctx* c, struct zx_md_RequestedAttribute_s* x);
int zx_LEN_WO_md_RequestedAttribute(struct zx_ctx* c, struct zx_md_RequestedAttribute_s* x);
char* zx_ENC_SO_md_RequestedAttribute(struct zx_ctx* c, struct zx_md_RequestedAttribute_s* x, char* p);
char* zx_ENC_WO_md_RequestedAttribute(struct zx_ctx* c, struct zx_md_RequestedAttribute_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_RequestedAttribute(struct zx_ctx* c, struct zx_md_RequestedAttribute_s* x);
struct zx_str* zx_EASY_ENC_WO_md_RequestedAttribute(struct zx_ctx* c, struct zx_md_RequestedAttribute_s* x);

struct zx_md_RequestedAttribute_s {
  ZX_ELEM_EXT
  zx_md_RequestedAttribute_EXT
  struct zx_sa_AttributeValue_s* AttributeValue;	/* {0,-1} nada */
  struct zx_str* Name;	/* {1,1} attribute xs:anyURI */
  struct zx_str* NameFormat;	/* {0,1} attribute xs:anyURI */
  struct zx_str* FriendlyName;	/* {0,1} attribute xs:string */
  struct zx_str* isRequired;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_RequestedAttribute_GET_Name(struct zx_md_RequestedAttribute_s* x);
struct zx_str* zx_md_RequestedAttribute_GET_NameFormat(struct zx_md_RequestedAttribute_s* x);
struct zx_str* zx_md_RequestedAttribute_GET_FriendlyName(struct zx_md_RequestedAttribute_s* x);
struct zx_str* zx_md_RequestedAttribute_GET_isRequired(struct zx_md_RequestedAttribute_s* x);

struct zx_sa_AttributeValue_s* zx_md_RequestedAttribute_GET_AttributeValue(struct zx_md_RequestedAttribute_s* x, int n);

int zx_md_RequestedAttribute_NUM_AttributeValue(struct zx_md_RequestedAttribute_s* x);

struct zx_sa_AttributeValue_s* zx_md_RequestedAttribute_POP_AttributeValue(struct zx_md_RequestedAttribute_s* x);

void zx_md_RequestedAttribute_PUSH_AttributeValue(struct zx_md_RequestedAttribute_s* x, struct zx_sa_AttributeValue_s* y);

void zx_md_RequestedAttribute_PUT_Name(struct zx_md_RequestedAttribute_s* x, struct zx_str* y);
void zx_md_RequestedAttribute_PUT_NameFormat(struct zx_md_RequestedAttribute_s* x, struct zx_str* y);
void zx_md_RequestedAttribute_PUT_FriendlyName(struct zx_md_RequestedAttribute_s* x, struct zx_str* y);
void zx_md_RequestedAttribute_PUT_isRequired(struct zx_md_RequestedAttribute_s* x, struct zx_str* y);

void zx_md_RequestedAttribute_PUT_AttributeValue(struct zx_md_RequestedAttribute_s* x, int n, struct zx_sa_AttributeValue_s* y);

void zx_md_RequestedAttribute_ADD_AttributeValue(struct zx_md_RequestedAttribute_s* x, int n, struct zx_sa_AttributeValue_s* z);

void zx_md_RequestedAttribute_DEL_AttributeValue(struct zx_md_RequestedAttribute_s* x, int n);

void zx_md_RequestedAttribute_REV_AttributeValue(struct zx_md_RequestedAttribute_s* x);

#endif
/* -------------------------- md_RoleDescriptor -------------------------- */
/* refby( zx_md_EntityDescriptor_s ) */
#ifndef zx_md_RoleDescriptor_EXT
#define zx_md_RoleDescriptor_EXT
#endif

struct zx_md_RoleDescriptor_s* zx_DEC_md_RoleDescriptor(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_RoleDescriptor_s* zx_NEW_md_RoleDescriptor(struct zx_ctx* c);
void zx_FREE_md_RoleDescriptor(struct zx_ctx* c, struct zx_md_RoleDescriptor_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_RoleDescriptor_s* zx_DEEP_CLONE_md_RoleDescriptor(struct zx_ctx* c, struct zx_md_RoleDescriptor_s* x, int dup_strs);
void zx_DUP_STRS_md_RoleDescriptor(struct zx_ctx* c, struct zx_md_RoleDescriptor_s* x);
int zx_WALK_SO_md_RoleDescriptor(struct zx_ctx* c, struct zx_md_RoleDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_RoleDescriptor(struct zx_ctx* c, struct zx_md_RoleDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_RoleDescriptor(struct zx_ctx* c, struct zx_md_RoleDescriptor_s* x);
int zx_LEN_WO_md_RoleDescriptor(struct zx_ctx* c, struct zx_md_RoleDescriptor_s* x);
char* zx_ENC_SO_md_RoleDescriptor(struct zx_ctx* c, struct zx_md_RoleDescriptor_s* x, char* p);
char* zx_ENC_WO_md_RoleDescriptor(struct zx_ctx* c, struct zx_md_RoleDescriptor_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_RoleDescriptor(struct zx_ctx* c, struct zx_md_RoleDescriptor_s* x);
struct zx_str* zx_EASY_ENC_WO_md_RoleDescriptor(struct zx_ctx* c, struct zx_md_RoleDescriptor_s* x);

struct zx_md_RoleDescriptor_s {
  ZX_ELEM_EXT
  zx_md_RoleDescriptor_EXT
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_md_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_md_KeyDescriptor_s* KeyDescriptor;	/* {0,-1} nada */
  struct zx_md_Organization_s* Organization;	/* {0,1} nada */
  struct zx_md_ContactPerson_s* ContactPerson;	/* {0,-1} nada */
  struct zx_str* ID;	/* {0,1} attribute xs:ID */
  struct zx_str* validUntil;	/* {0,1} attribute xs:dateTime */
  struct zx_str* cacheDuration;	/* {0,1} attribute xs:duration */
  struct zx_str* protocolSupportEnumeration;	/* {1,1} attribute xs:string */
  struct zx_str* errorURL;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_RoleDescriptor_GET_ID(struct zx_md_RoleDescriptor_s* x);
struct zx_str* zx_md_RoleDescriptor_GET_validUntil(struct zx_md_RoleDescriptor_s* x);
struct zx_str* zx_md_RoleDescriptor_GET_cacheDuration(struct zx_md_RoleDescriptor_s* x);
struct zx_str* zx_md_RoleDescriptor_GET_protocolSupportEnumeration(struct zx_md_RoleDescriptor_s* x);
struct zx_str* zx_md_RoleDescriptor_GET_errorURL(struct zx_md_RoleDescriptor_s* x);

struct zx_ds_Signature_s* zx_md_RoleDescriptor_GET_Signature(struct zx_md_RoleDescriptor_s* x, int n);
struct zx_md_Extensions_s* zx_md_RoleDescriptor_GET_Extensions(struct zx_md_RoleDescriptor_s* x, int n);
struct zx_md_KeyDescriptor_s* zx_md_RoleDescriptor_GET_KeyDescriptor(struct zx_md_RoleDescriptor_s* x, int n);
struct zx_md_Organization_s* zx_md_RoleDescriptor_GET_Organization(struct zx_md_RoleDescriptor_s* x, int n);
struct zx_md_ContactPerson_s* zx_md_RoleDescriptor_GET_ContactPerson(struct zx_md_RoleDescriptor_s* x, int n);

int zx_md_RoleDescriptor_NUM_Signature(struct zx_md_RoleDescriptor_s* x);
int zx_md_RoleDescriptor_NUM_Extensions(struct zx_md_RoleDescriptor_s* x);
int zx_md_RoleDescriptor_NUM_KeyDescriptor(struct zx_md_RoleDescriptor_s* x);
int zx_md_RoleDescriptor_NUM_Organization(struct zx_md_RoleDescriptor_s* x);
int zx_md_RoleDescriptor_NUM_ContactPerson(struct zx_md_RoleDescriptor_s* x);

struct zx_ds_Signature_s* zx_md_RoleDescriptor_POP_Signature(struct zx_md_RoleDescriptor_s* x);
struct zx_md_Extensions_s* zx_md_RoleDescriptor_POP_Extensions(struct zx_md_RoleDescriptor_s* x);
struct zx_md_KeyDescriptor_s* zx_md_RoleDescriptor_POP_KeyDescriptor(struct zx_md_RoleDescriptor_s* x);
struct zx_md_Organization_s* zx_md_RoleDescriptor_POP_Organization(struct zx_md_RoleDescriptor_s* x);
struct zx_md_ContactPerson_s* zx_md_RoleDescriptor_POP_ContactPerson(struct zx_md_RoleDescriptor_s* x);

void zx_md_RoleDescriptor_PUSH_Signature(struct zx_md_RoleDescriptor_s* x, struct zx_ds_Signature_s* y);
void zx_md_RoleDescriptor_PUSH_Extensions(struct zx_md_RoleDescriptor_s* x, struct zx_md_Extensions_s* y);
void zx_md_RoleDescriptor_PUSH_KeyDescriptor(struct zx_md_RoleDescriptor_s* x, struct zx_md_KeyDescriptor_s* y);
void zx_md_RoleDescriptor_PUSH_Organization(struct zx_md_RoleDescriptor_s* x, struct zx_md_Organization_s* y);
void zx_md_RoleDescriptor_PUSH_ContactPerson(struct zx_md_RoleDescriptor_s* x, struct zx_md_ContactPerson_s* y);

void zx_md_RoleDescriptor_PUT_ID(struct zx_md_RoleDescriptor_s* x, struct zx_str* y);
void zx_md_RoleDescriptor_PUT_validUntil(struct zx_md_RoleDescriptor_s* x, struct zx_str* y);
void zx_md_RoleDescriptor_PUT_cacheDuration(struct zx_md_RoleDescriptor_s* x, struct zx_str* y);
void zx_md_RoleDescriptor_PUT_protocolSupportEnumeration(struct zx_md_RoleDescriptor_s* x, struct zx_str* y);
void zx_md_RoleDescriptor_PUT_errorURL(struct zx_md_RoleDescriptor_s* x, struct zx_str* y);

void zx_md_RoleDescriptor_PUT_Signature(struct zx_md_RoleDescriptor_s* x, int n, struct zx_ds_Signature_s* y);
void zx_md_RoleDescriptor_PUT_Extensions(struct zx_md_RoleDescriptor_s* x, int n, struct zx_md_Extensions_s* y);
void zx_md_RoleDescriptor_PUT_KeyDescriptor(struct zx_md_RoleDescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* y);
void zx_md_RoleDescriptor_PUT_Organization(struct zx_md_RoleDescriptor_s* x, int n, struct zx_md_Organization_s* y);
void zx_md_RoleDescriptor_PUT_ContactPerson(struct zx_md_RoleDescriptor_s* x, int n, struct zx_md_ContactPerson_s* y);

void zx_md_RoleDescriptor_ADD_Signature(struct zx_md_RoleDescriptor_s* x, int n, struct zx_ds_Signature_s* z);
void zx_md_RoleDescriptor_ADD_Extensions(struct zx_md_RoleDescriptor_s* x, int n, struct zx_md_Extensions_s* z);
void zx_md_RoleDescriptor_ADD_KeyDescriptor(struct zx_md_RoleDescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* z);
void zx_md_RoleDescriptor_ADD_Organization(struct zx_md_RoleDescriptor_s* x, int n, struct zx_md_Organization_s* z);
void zx_md_RoleDescriptor_ADD_ContactPerson(struct zx_md_RoleDescriptor_s* x, int n, struct zx_md_ContactPerson_s* z);

void zx_md_RoleDescriptor_DEL_Signature(struct zx_md_RoleDescriptor_s* x, int n);
void zx_md_RoleDescriptor_DEL_Extensions(struct zx_md_RoleDescriptor_s* x, int n);
void zx_md_RoleDescriptor_DEL_KeyDescriptor(struct zx_md_RoleDescriptor_s* x, int n);
void zx_md_RoleDescriptor_DEL_Organization(struct zx_md_RoleDescriptor_s* x, int n);
void zx_md_RoleDescriptor_DEL_ContactPerson(struct zx_md_RoleDescriptor_s* x, int n);

void zx_md_RoleDescriptor_REV_Signature(struct zx_md_RoleDescriptor_s* x);
void zx_md_RoleDescriptor_REV_Extensions(struct zx_md_RoleDescriptor_s* x);
void zx_md_RoleDescriptor_REV_KeyDescriptor(struct zx_md_RoleDescriptor_s* x);
void zx_md_RoleDescriptor_REV_Organization(struct zx_md_RoleDescriptor_s* x);
void zx_md_RoleDescriptor_REV_ContactPerson(struct zx_md_RoleDescriptor_s* x);

#endif
/* -------------------------- md_SPSSODescriptor -------------------------- */
/* refby( zx_md_EntityDescriptor_s ) */
#ifndef zx_md_SPSSODescriptor_EXT
#define zx_md_SPSSODescriptor_EXT
#endif

struct zx_md_SPSSODescriptor_s* zx_DEC_md_SPSSODescriptor(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_SPSSODescriptor_s* zx_NEW_md_SPSSODescriptor(struct zx_ctx* c);
void zx_FREE_md_SPSSODescriptor(struct zx_ctx* c, struct zx_md_SPSSODescriptor_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_SPSSODescriptor_s* zx_DEEP_CLONE_md_SPSSODescriptor(struct zx_ctx* c, struct zx_md_SPSSODescriptor_s* x, int dup_strs);
void zx_DUP_STRS_md_SPSSODescriptor(struct zx_ctx* c, struct zx_md_SPSSODescriptor_s* x);
int zx_WALK_SO_md_SPSSODescriptor(struct zx_ctx* c, struct zx_md_SPSSODescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_SPSSODescriptor(struct zx_ctx* c, struct zx_md_SPSSODescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_SPSSODescriptor(struct zx_ctx* c, struct zx_md_SPSSODescriptor_s* x);
int zx_LEN_WO_md_SPSSODescriptor(struct zx_ctx* c, struct zx_md_SPSSODescriptor_s* x);
char* zx_ENC_SO_md_SPSSODescriptor(struct zx_ctx* c, struct zx_md_SPSSODescriptor_s* x, char* p);
char* zx_ENC_WO_md_SPSSODescriptor(struct zx_ctx* c, struct zx_md_SPSSODescriptor_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_SPSSODescriptor(struct zx_ctx* c, struct zx_md_SPSSODescriptor_s* x);
struct zx_str* zx_EASY_ENC_WO_md_SPSSODescriptor(struct zx_ctx* c, struct zx_md_SPSSODescriptor_s* x);

struct zx_md_SPSSODescriptor_s {
  ZX_ELEM_EXT
  zx_md_SPSSODescriptor_EXT
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_md_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_md_KeyDescriptor_s* KeyDescriptor;	/* {0,-1} nada */
  struct zx_md_Organization_s* Organization;	/* {0,1} nada */
  struct zx_md_ContactPerson_s* ContactPerson;	/* {0,-1} nada */
  struct zx_md_ArtifactResolutionService_s* ArtifactResolutionService;	/* {0,-1} nada */
  struct zx_md_SingleLogoutService_s* SingleLogoutService;	/* {0,-1} nada */
  struct zx_md_ManageNameIDService_s* ManageNameIDService;	/* {0,-1} nada */
  struct zx_elem_s* NameIDFormat;	/* {0,-1} xs:anyURI */
  struct zx_md_AssertionConsumerService_s* AssertionConsumerService;	/* {1,-1} nada */
  struct zx_md_AttributeConsumingService_s* AttributeConsumingService;	/* {0,-1} nada */
  struct zx_str* ID;	/* {0,1} attribute xs:ID */
  struct zx_str* validUntil;	/* {0,1} attribute xs:dateTime */
  struct zx_str* cacheDuration;	/* {0,1} attribute xs:duration */
  struct zx_str* protocolSupportEnumeration;	/* {1,1} attribute xs:string */
  struct zx_str* errorURL;	/* {0,1} attribute xs:anyURI */
  struct zx_str* AuthnRequestsSigned;	/* {0,1} attribute xs:boolean */
  struct zx_str* WantAssertionsSigned;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_SPSSODescriptor_GET_ID(struct zx_md_SPSSODescriptor_s* x);
struct zx_str* zx_md_SPSSODescriptor_GET_validUntil(struct zx_md_SPSSODescriptor_s* x);
struct zx_str* zx_md_SPSSODescriptor_GET_cacheDuration(struct zx_md_SPSSODescriptor_s* x);
struct zx_str* zx_md_SPSSODescriptor_GET_protocolSupportEnumeration(struct zx_md_SPSSODescriptor_s* x);
struct zx_str* zx_md_SPSSODescriptor_GET_errorURL(struct zx_md_SPSSODescriptor_s* x);
struct zx_str* zx_md_SPSSODescriptor_GET_AuthnRequestsSigned(struct zx_md_SPSSODescriptor_s* x);
struct zx_str* zx_md_SPSSODescriptor_GET_WantAssertionsSigned(struct zx_md_SPSSODescriptor_s* x);

struct zx_ds_Signature_s* zx_md_SPSSODescriptor_GET_Signature(struct zx_md_SPSSODescriptor_s* x, int n);
struct zx_md_Extensions_s* zx_md_SPSSODescriptor_GET_Extensions(struct zx_md_SPSSODescriptor_s* x, int n);
struct zx_md_KeyDescriptor_s* zx_md_SPSSODescriptor_GET_KeyDescriptor(struct zx_md_SPSSODescriptor_s* x, int n);
struct zx_md_Organization_s* zx_md_SPSSODescriptor_GET_Organization(struct zx_md_SPSSODescriptor_s* x, int n);
struct zx_md_ContactPerson_s* zx_md_SPSSODescriptor_GET_ContactPerson(struct zx_md_SPSSODescriptor_s* x, int n);
struct zx_md_ArtifactResolutionService_s* zx_md_SPSSODescriptor_GET_ArtifactResolutionService(struct zx_md_SPSSODescriptor_s* x, int n);
struct zx_md_SingleLogoutService_s* zx_md_SPSSODescriptor_GET_SingleLogoutService(struct zx_md_SPSSODescriptor_s* x, int n);
struct zx_md_ManageNameIDService_s* zx_md_SPSSODescriptor_GET_ManageNameIDService(struct zx_md_SPSSODescriptor_s* x, int n);
struct zx_elem_s* zx_md_SPSSODescriptor_GET_NameIDFormat(struct zx_md_SPSSODescriptor_s* x, int n);
struct zx_md_AssertionConsumerService_s* zx_md_SPSSODescriptor_GET_AssertionConsumerService(struct zx_md_SPSSODescriptor_s* x, int n);
struct zx_md_AttributeConsumingService_s* zx_md_SPSSODescriptor_GET_AttributeConsumingService(struct zx_md_SPSSODescriptor_s* x, int n);

int zx_md_SPSSODescriptor_NUM_Signature(struct zx_md_SPSSODescriptor_s* x);
int zx_md_SPSSODescriptor_NUM_Extensions(struct zx_md_SPSSODescriptor_s* x);
int zx_md_SPSSODescriptor_NUM_KeyDescriptor(struct zx_md_SPSSODescriptor_s* x);
int zx_md_SPSSODescriptor_NUM_Organization(struct zx_md_SPSSODescriptor_s* x);
int zx_md_SPSSODescriptor_NUM_ContactPerson(struct zx_md_SPSSODescriptor_s* x);
int zx_md_SPSSODescriptor_NUM_ArtifactResolutionService(struct zx_md_SPSSODescriptor_s* x);
int zx_md_SPSSODescriptor_NUM_SingleLogoutService(struct zx_md_SPSSODescriptor_s* x);
int zx_md_SPSSODescriptor_NUM_ManageNameIDService(struct zx_md_SPSSODescriptor_s* x);
int zx_md_SPSSODescriptor_NUM_NameIDFormat(struct zx_md_SPSSODescriptor_s* x);
int zx_md_SPSSODescriptor_NUM_AssertionConsumerService(struct zx_md_SPSSODescriptor_s* x);
int zx_md_SPSSODescriptor_NUM_AttributeConsumingService(struct zx_md_SPSSODescriptor_s* x);

struct zx_ds_Signature_s* zx_md_SPSSODescriptor_POP_Signature(struct zx_md_SPSSODescriptor_s* x);
struct zx_md_Extensions_s* zx_md_SPSSODescriptor_POP_Extensions(struct zx_md_SPSSODescriptor_s* x);
struct zx_md_KeyDescriptor_s* zx_md_SPSSODescriptor_POP_KeyDescriptor(struct zx_md_SPSSODescriptor_s* x);
struct zx_md_Organization_s* zx_md_SPSSODescriptor_POP_Organization(struct zx_md_SPSSODescriptor_s* x);
struct zx_md_ContactPerson_s* zx_md_SPSSODescriptor_POP_ContactPerson(struct zx_md_SPSSODescriptor_s* x);
struct zx_md_ArtifactResolutionService_s* zx_md_SPSSODescriptor_POP_ArtifactResolutionService(struct zx_md_SPSSODescriptor_s* x);
struct zx_md_SingleLogoutService_s* zx_md_SPSSODescriptor_POP_SingleLogoutService(struct zx_md_SPSSODescriptor_s* x);
struct zx_md_ManageNameIDService_s* zx_md_SPSSODescriptor_POP_ManageNameIDService(struct zx_md_SPSSODescriptor_s* x);
struct zx_elem_s* zx_md_SPSSODescriptor_POP_NameIDFormat(struct zx_md_SPSSODescriptor_s* x);
struct zx_md_AssertionConsumerService_s* zx_md_SPSSODescriptor_POP_AssertionConsumerService(struct zx_md_SPSSODescriptor_s* x);
struct zx_md_AttributeConsumingService_s* zx_md_SPSSODescriptor_POP_AttributeConsumingService(struct zx_md_SPSSODescriptor_s* x);

void zx_md_SPSSODescriptor_PUSH_Signature(struct zx_md_SPSSODescriptor_s* x, struct zx_ds_Signature_s* y);
void zx_md_SPSSODescriptor_PUSH_Extensions(struct zx_md_SPSSODescriptor_s* x, struct zx_md_Extensions_s* y);
void zx_md_SPSSODescriptor_PUSH_KeyDescriptor(struct zx_md_SPSSODescriptor_s* x, struct zx_md_KeyDescriptor_s* y);
void zx_md_SPSSODescriptor_PUSH_Organization(struct zx_md_SPSSODescriptor_s* x, struct zx_md_Organization_s* y);
void zx_md_SPSSODescriptor_PUSH_ContactPerson(struct zx_md_SPSSODescriptor_s* x, struct zx_md_ContactPerson_s* y);
void zx_md_SPSSODescriptor_PUSH_ArtifactResolutionService(struct zx_md_SPSSODescriptor_s* x, struct zx_md_ArtifactResolutionService_s* y);
void zx_md_SPSSODescriptor_PUSH_SingleLogoutService(struct zx_md_SPSSODescriptor_s* x, struct zx_md_SingleLogoutService_s* y);
void zx_md_SPSSODescriptor_PUSH_ManageNameIDService(struct zx_md_SPSSODescriptor_s* x, struct zx_md_ManageNameIDService_s* y);
void zx_md_SPSSODescriptor_PUSH_NameIDFormat(struct zx_md_SPSSODescriptor_s* x, struct zx_elem_s* y);
void zx_md_SPSSODescriptor_PUSH_AssertionConsumerService(struct zx_md_SPSSODescriptor_s* x, struct zx_md_AssertionConsumerService_s* y);
void zx_md_SPSSODescriptor_PUSH_AttributeConsumingService(struct zx_md_SPSSODescriptor_s* x, struct zx_md_AttributeConsumingService_s* y);

void zx_md_SPSSODescriptor_PUT_ID(struct zx_md_SPSSODescriptor_s* x, struct zx_str* y);
void zx_md_SPSSODescriptor_PUT_validUntil(struct zx_md_SPSSODescriptor_s* x, struct zx_str* y);
void zx_md_SPSSODescriptor_PUT_cacheDuration(struct zx_md_SPSSODescriptor_s* x, struct zx_str* y);
void zx_md_SPSSODescriptor_PUT_protocolSupportEnumeration(struct zx_md_SPSSODescriptor_s* x, struct zx_str* y);
void zx_md_SPSSODescriptor_PUT_errorURL(struct zx_md_SPSSODescriptor_s* x, struct zx_str* y);
void zx_md_SPSSODescriptor_PUT_AuthnRequestsSigned(struct zx_md_SPSSODescriptor_s* x, struct zx_str* y);
void zx_md_SPSSODescriptor_PUT_WantAssertionsSigned(struct zx_md_SPSSODescriptor_s* x, struct zx_str* y);

void zx_md_SPSSODescriptor_PUT_Signature(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_ds_Signature_s* y);
void zx_md_SPSSODescriptor_PUT_Extensions(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_Extensions_s* y);
void zx_md_SPSSODescriptor_PUT_KeyDescriptor(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* y);
void zx_md_SPSSODescriptor_PUT_Organization(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_Organization_s* y);
void zx_md_SPSSODescriptor_PUT_ContactPerson(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_ContactPerson_s* y);
void zx_md_SPSSODescriptor_PUT_ArtifactResolutionService(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_ArtifactResolutionService_s* y);
void zx_md_SPSSODescriptor_PUT_SingleLogoutService(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_SingleLogoutService_s* y);
void zx_md_SPSSODescriptor_PUT_ManageNameIDService(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_ManageNameIDService_s* y);
void zx_md_SPSSODescriptor_PUT_NameIDFormat(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_elem_s* y);
void zx_md_SPSSODescriptor_PUT_AssertionConsumerService(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_AssertionConsumerService_s* y);
void zx_md_SPSSODescriptor_PUT_AttributeConsumingService(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_AttributeConsumingService_s* y);

void zx_md_SPSSODescriptor_ADD_Signature(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_ds_Signature_s* z);
void zx_md_SPSSODescriptor_ADD_Extensions(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_Extensions_s* z);
void zx_md_SPSSODescriptor_ADD_KeyDescriptor(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* z);
void zx_md_SPSSODescriptor_ADD_Organization(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_Organization_s* z);
void zx_md_SPSSODescriptor_ADD_ContactPerson(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_ContactPerson_s* z);
void zx_md_SPSSODescriptor_ADD_ArtifactResolutionService(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_ArtifactResolutionService_s* z);
void zx_md_SPSSODescriptor_ADD_SingleLogoutService(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_SingleLogoutService_s* z);
void zx_md_SPSSODescriptor_ADD_ManageNameIDService(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_ManageNameIDService_s* z);
void zx_md_SPSSODescriptor_ADD_NameIDFormat(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_elem_s* z);
void zx_md_SPSSODescriptor_ADD_AssertionConsumerService(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_AssertionConsumerService_s* z);
void zx_md_SPSSODescriptor_ADD_AttributeConsumingService(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_AttributeConsumingService_s* z);

void zx_md_SPSSODescriptor_DEL_Signature(struct zx_md_SPSSODescriptor_s* x, int n);
void zx_md_SPSSODescriptor_DEL_Extensions(struct zx_md_SPSSODescriptor_s* x, int n);
void zx_md_SPSSODescriptor_DEL_KeyDescriptor(struct zx_md_SPSSODescriptor_s* x, int n);
void zx_md_SPSSODescriptor_DEL_Organization(struct zx_md_SPSSODescriptor_s* x, int n);
void zx_md_SPSSODescriptor_DEL_ContactPerson(struct zx_md_SPSSODescriptor_s* x, int n);
void zx_md_SPSSODescriptor_DEL_ArtifactResolutionService(struct zx_md_SPSSODescriptor_s* x, int n);
void zx_md_SPSSODescriptor_DEL_SingleLogoutService(struct zx_md_SPSSODescriptor_s* x, int n);
void zx_md_SPSSODescriptor_DEL_ManageNameIDService(struct zx_md_SPSSODescriptor_s* x, int n);
void zx_md_SPSSODescriptor_DEL_NameIDFormat(struct zx_md_SPSSODescriptor_s* x, int n);
void zx_md_SPSSODescriptor_DEL_AssertionConsumerService(struct zx_md_SPSSODescriptor_s* x, int n);
void zx_md_SPSSODescriptor_DEL_AttributeConsumingService(struct zx_md_SPSSODescriptor_s* x, int n);

void zx_md_SPSSODescriptor_REV_Signature(struct zx_md_SPSSODescriptor_s* x);
void zx_md_SPSSODescriptor_REV_Extensions(struct zx_md_SPSSODescriptor_s* x);
void zx_md_SPSSODescriptor_REV_KeyDescriptor(struct zx_md_SPSSODescriptor_s* x);
void zx_md_SPSSODescriptor_REV_Organization(struct zx_md_SPSSODescriptor_s* x);
void zx_md_SPSSODescriptor_REV_ContactPerson(struct zx_md_SPSSODescriptor_s* x);
void zx_md_SPSSODescriptor_REV_ArtifactResolutionService(struct zx_md_SPSSODescriptor_s* x);
void zx_md_SPSSODescriptor_REV_SingleLogoutService(struct zx_md_SPSSODescriptor_s* x);
void zx_md_SPSSODescriptor_REV_ManageNameIDService(struct zx_md_SPSSODescriptor_s* x);
void zx_md_SPSSODescriptor_REV_NameIDFormat(struct zx_md_SPSSODescriptor_s* x);
void zx_md_SPSSODescriptor_REV_AssertionConsumerService(struct zx_md_SPSSODescriptor_s* x);
void zx_md_SPSSODescriptor_REV_AttributeConsumingService(struct zx_md_SPSSODescriptor_s* x);

#endif
/* -------------------------- md_ServiceDescription -------------------------- */
/* refby( zx_md_AttributeConsumingService_s ) */
#ifndef zx_md_ServiceDescription_EXT
#define zx_md_ServiceDescription_EXT
#endif

struct zx_md_ServiceDescription_s* zx_DEC_md_ServiceDescription(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_ServiceDescription_s* zx_NEW_md_ServiceDescription(struct zx_ctx* c);
void zx_FREE_md_ServiceDescription(struct zx_ctx* c, struct zx_md_ServiceDescription_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_ServiceDescription_s* zx_DEEP_CLONE_md_ServiceDescription(struct zx_ctx* c, struct zx_md_ServiceDescription_s* x, int dup_strs);
void zx_DUP_STRS_md_ServiceDescription(struct zx_ctx* c, struct zx_md_ServiceDescription_s* x);
int zx_WALK_SO_md_ServiceDescription(struct zx_ctx* c, struct zx_md_ServiceDescription_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_ServiceDescription(struct zx_ctx* c, struct zx_md_ServiceDescription_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_ServiceDescription(struct zx_ctx* c, struct zx_md_ServiceDescription_s* x);
int zx_LEN_WO_md_ServiceDescription(struct zx_ctx* c, struct zx_md_ServiceDescription_s* x);
char* zx_ENC_SO_md_ServiceDescription(struct zx_ctx* c, struct zx_md_ServiceDescription_s* x, char* p);
char* zx_ENC_WO_md_ServiceDescription(struct zx_ctx* c, struct zx_md_ServiceDescription_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_ServiceDescription(struct zx_ctx* c, struct zx_md_ServiceDescription_s* x);
struct zx_str* zx_EASY_ENC_WO_md_ServiceDescription(struct zx_ctx* c, struct zx_md_ServiceDescription_s* x);

struct zx_md_ServiceDescription_s {
  ZX_ELEM_EXT
  zx_md_ServiceDescription_EXT
  struct zx_str* lang;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_ServiceDescription_GET_lang(struct zx_md_ServiceDescription_s* x);





void zx_md_ServiceDescription_PUT_lang(struct zx_md_ServiceDescription_s* x, struct zx_str* y);





#endif
/* -------------------------- md_ServiceName -------------------------- */
/* refby( zx_md_AttributeConsumingService_s ) */
#ifndef zx_md_ServiceName_EXT
#define zx_md_ServiceName_EXT
#endif

struct zx_md_ServiceName_s* zx_DEC_md_ServiceName(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_ServiceName_s* zx_NEW_md_ServiceName(struct zx_ctx* c);
void zx_FREE_md_ServiceName(struct zx_ctx* c, struct zx_md_ServiceName_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_ServiceName_s* zx_DEEP_CLONE_md_ServiceName(struct zx_ctx* c, struct zx_md_ServiceName_s* x, int dup_strs);
void zx_DUP_STRS_md_ServiceName(struct zx_ctx* c, struct zx_md_ServiceName_s* x);
int zx_WALK_SO_md_ServiceName(struct zx_ctx* c, struct zx_md_ServiceName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_ServiceName(struct zx_ctx* c, struct zx_md_ServiceName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_ServiceName(struct zx_ctx* c, struct zx_md_ServiceName_s* x);
int zx_LEN_WO_md_ServiceName(struct zx_ctx* c, struct zx_md_ServiceName_s* x);
char* zx_ENC_SO_md_ServiceName(struct zx_ctx* c, struct zx_md_ServiceName_s* x, char* p);
char* zx_ENC_WO_md_ServiceName(struct zx_ctx* c, struct zx_md_ServiceName_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_ServiceName(struct zx_ctx* c, struct zx_md_ServiceName_s* x);
struct zx_str* zx_EASY_ENC_WO_md_ServiceName(struct zx_ctx* c, struct zx_md_ServiceName_s* x);

struct zx_md_ServiceName_s {
  ZX_ELEM_EXT
  zx_md_ServiceName_EXT
  struct zx_str* lang;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_ServiceName_GET_lang(struct zx_md_ServiceName_s* x);





void zx_md_ServiceName_PUT_lang(struct zx_md_ServiceName_s* x, struct zx_str* y);





#endif
/* -------------------------- md_SingleLogoutService -------------------------- */
/* refby( zx_md_SPSSODescriptor_s zx_md_IDPSSODescriptor_s ) */
#ifndef zx_md_SingleLogoutService_EXT
#define zx_md_SingleLogoutService_EXT
#endif

struct zx_md_SingleLogoutService_s* zx_DEC_md_SingleLogoutService(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_SingleLogoutService_s* zx_NEW_md_SingleLogoutService(struct zx_ctx* c);
void zx_FREE_md_SingleLogoutService(struct zx_ctx* c, struct zx_md_SingleLogoutService_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_SingleLogoutService_s* zx_DEEP_CLONE_md_SingleLogoutService(struct zx_ctx* c, struct zx_md_SingleLogoutService_s* x, int dup_strs);
void zx_DUP_STRS_md_SingleLogoutService(struct zx_ctx* c, struct zx_md_SingleLogoutService_s* x);
int zx_WALK_SO_md_SingleLogoutService(struct zx_ctx* c, struct zx_md_SingleLogoutService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_SingleLogoutService(struct zx_ctx* c, struct zx_md_SingleLogoutService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_SingleLogoutService(struct zx_ctx* c, struct zx_md_SingleLogoutService_s* x);
int zx_LEN_WO_md_SingleLogoutService(struct zx_ctx* c, struct zx_md_SingleLogoutService_s* x);
char* zx_ENC_SO_md_SingleLogoutService(struct zx_ctx* c, struct zx_md_SingleLogoutService_s* x, char* p);
char* zx_ENC_WO_md_SingleLogoutService(struct zx_ctx* c, struct zx_md_SingleLogoutService_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_SingleLogoutService(struct zx_ctx* c, struct zx_md_SingleLogoutService_s* x);
struct zx_str* zx_EASY_ENC_WO_md_SingleLogoutService(struct zx_ctx* c, struct zx_md_SingleLogoutService_s* x);

struct zx_md_SingleLogoutService_s {
  ZX_ELEM_EXT
  zx_md_SingleLogoutService_EXT
  struct zx_str* Binding;	/* {1,1} attribute xs:anyURI */
  struct zx_str* Location;	/* {1,1} attribute xs:anyURI */
  struct zx_str* ResponseLocation;	/* {0,1} attribute xs:anyURI */
  struct zx_str* index;	/* {0,1} attribute xs:unsignedShort */
  struct zx_str* isDefault;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_SingleLogoutService_GET_Binding(struct zx_md_SingleLogoutService_s* x);
struct zx_str* zx_md_SingleLogoutService_GET_Location(struct zx_md_SingleLogoutService_s* x);
struct zx_str* zx_md_SingleLogoutService_GET_ResponseLocation(struct zx_md_SingleLogoutService_s* x);
struct zx_str* zx_md_SingleLogoutService_GET_index(struct zx_md_SingleLogoutService_s* x);
struct zx_str* zx_md_SingleLogoutService_GET_isDefault(struct zx_md_SingleLogoutService_s* x);





void zx_md_SingleLogoutService_PUT_Binding(struct zx_md_SingleLogoutService_s* x, struct zx_str* y);
void zx_md_SingleLogoutService_PUT_Location(struct zx_md_SingleLogoutService_s* x, struct zx_str* y);
void zx_md_SingleLogoutService_PUT_ResponseLocation(struct zx_md_SingleLogoutService_s* x, struct zx_str* y);
void zx_md_SingleLogoutService_PUT_index(struct zx_md_SingleLogoutService_s* x, struct zx_str* y);
void zx_md_SingleLogoutService_PUT_isDefault(struct zx_md_SingleLogoutService_s* x, struct zx_str* y);





#endif
/* -------------------------- md_SingleSignOnService -------------------------- */
/* refby( zx_md_IDPSSODescriptor_s ) */
#ifndef zx_md_SingleSignOnService_EXT
#define zx_md_SingleSignOnService_EXT
#endif

struct zx_md_SingleSignOnService_s* zx_DEC_md_SingleSignOnService(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_md_SingleSignOnService_s* zx_NEW_md_SingleSignOnService(struct zx_ctx* c);
void zx_FREE_md_SingleSignOnService(struct zx_ctx* c, struct zx_md_SingleSignOnService_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_md_SingleSignOnService_s* zx_DEEP_CLONE_md_SingleSignOnService(struct zx_ctx* c, struct zx_md_SingleSignOnService_s* x, int dup_strs);
void zx_DUP_STRS_md_SingleSignOnService(struct zx_ctx* c, struct zx_md_SingleSignOnService_s* x);
int zx_WALK_SO_md_SingleSignOnService(struct zx_ctx* c, struct zx_md_SingleSignOnService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_md_SingleSignOnService(struct zx_ctx* c, struct zx_md_SingleSignOnService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_md_SingleSignOnService(struct zx_ctx* c, struct zx_md_SingleSignOnService_s* x);
int zx_LEN_WO_md_SingleSignOnService(struct zx_ctx* c, struct zx_md_SingleSignOnService_s* x);
char* zx_ENC_SO_md_SingleSignOnService(struct zx_ctx* c, struct zx_md_SingleSignOnService_s* x, char* p);
char* zx_ENC_WO_md_SingleSignOnService(struct zx_ctx* c, struct zx_md_SingleSignOnService_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_md_SingleSignOnService(struct zx_ctx* c, struct zx_md_SingleSignOnService_s* x);
struct zx_str* zx_EASY_ENC_WO_md_SingleSignOnService(struct zx_ctx* c, struct zx_md_SingleSignOnService_s* x);

struct zx_md_SingleSignOnService_s {
  ZX_ELEM_EXT
  zx_md_SingleSignOnService_EXT
  struct zx_str* Binding;	/* {1,1} attribute xs:anyURI */
  struct zx_str* Location;	/* {1,1} attribute xs:anyURI */
  struct zx_str* ResponseLocation;	/* {0,1} attribute xs:anyURI */
  struct zx_str* index;	/* {0,1} attribute xs:unsignedShort */
  struct zx_str* isDefault;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_md_SingleSignOnService_GET_Binding(struct zx_md_SingleSignOnService_s* x);
struct zx_str* zx_md_SingleSignOnService_GET_Location(struct zx_md_SingleSignOnService_s* x);
struct zx_str* zx_md_SingleSignOnService_GET_ResponseLocation(struct zx_md_SingleSignOnService_s* x);
struct zx_str* zx_md_SingleSignOnService_GET_index(struct zx_md_SingleSignOnService_s* x);
struct zx_str* zx_md_SingleSignOnService_GET_isDefault(struct zx_md_SingleSignOnService_s* x);





void zx_md_SingleSignOnService_PUT_Binding(struct zx_md_SingleSignOnService_s* x, struct zx_str* y);
void zx_md_SingleSignOnService_PUT_Location(struct zx_md_SingleSignOnService_s* x, struct zx_str* y);
void zx_md_SingleSignOnService_PUT_ResponseLocation(struct zx_md_SingleSignOnService_s* x, struct zx_str* y);
void zx_md_SingleSignOnService_PUT_index(struct zx_md_SingleSignOnService_s* x, struct zx_str* y);
void zx_md_SingleSignOnService_PUT_isDefault(struct zx_md_SingleSignOnService_s* x, struct zx_str* y);





#endif

#endif
