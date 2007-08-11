/* c/zx-b-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_b_data_h
#define _c_zx_b_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- b_ApplicationEPR -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_b_ApplicationEPR_EXT
#define zx_b_ApplicationEPR_EXT
#endif

struct zx_b_ApplicationEPR_s* zx_DEC_b_ApplicationEPR(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_b_ApplicationEPR_s* zx_NEW_b_ApplicationEPR(struct zx_ctx* c);
void zx_FREE_b_ApplicationEPR(struct zx_ctx* c, struct zx_b_ApplicationEPR_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_b_ApplicationEPR_s* zx_DEEP_CLONE_b_ApplicationEPR(struct zx_ctx* c, struct zx_b_ApplicationEPR_s* x, int dup_strs);
void zx_DUP_STRS_b_ApplicationEPR(struct zx_ctx* c, struct zx_b_ApplicationEPR_s* x);
int zx_WALK_SO_b_ApplicationEPR(struct zx_ctx* c, struct zx_b_ApplicationEPR_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_b_ApplicationEPR(struct zx_ctx* c, struct zx_b_ApplicationEPR_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_b_ApplicationEPR(struct zx_ctx* c, struct zx_b_ApplicationEPR_s* x);
int zx_LEN_WO_b_ApplicationEPR(struct zx_ctx* c, struct zx_b_ApplicationEPR_s* x);
char* zx_ENC_SO_b_ApplicationEPR(struct zx_ctx* c, struct zx_b_ApplicationEPR_s* x, char* p);
char* zx_ENC_WO_b_ApplicationEPR(struct zx_ctx* c, struct zx_b_ApplicationEPR_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_b_ApplicationEPR(struct zx_ctx* c, struct zx_b_ApplicationEPR_s* x);
struct zx_str* zx_EASY_ENC_WO_b_ApplicationEPR(struct zx_ctx* c, struct zx_b_ApplicationEPR_s* x);

struct zx_b_ApplicationEPR_s {
  ZX_ELEM_EXT
  zx_b_ApplicationEPR_EXT
  struct zx_a_Address_s* Address;	/* {1,1}  */
  struct zx_a_ReferenceParameters_s* ReferenceParameters;	/* {0,1} nada */
  struct zx_a_Metadata_s* Metadata;	/* {0,1} nada */
  struct zx_str* notOnOrAfter;	/* {0,1} attribute xs:dateTime */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_b_ApplicationEPR_GET_notOnOrAfter(struct zx_b_ApplicationEPR_s* x);
struct zx_str* zx_b_ApplicationEPR_GET_mustUnderstand(struct zx_b_ApplicationEPR_s* x);
struct zx_str* zx_b_ApplicationEPR_GET_actor(struct zx_b_ApplicationEPR_s* x);
struct zx_str* zx_b_ApplicationEPR_GET_Id(struct zx_b_ApplicationEPR_s* x);

struct zx_a_Address_s* zx_b_ApplicationEPR_GET_Address(struct zx_b_ApplicationEPR_s* x, int n);
struct zx_a_ReferenceParameters_s* zx_b_ApplicationEPR_GET_ReferenceParameters(struct zx_b_ApplicationEPR_s* x, int n);
struct zx_a_Metadata_s* zx_b_ApplicationEPR_GET_Metadata(struct zx_b_ApplicationEPR_s* x, int n);

int zx_b_ApplicationEPR_NUM_Address(struct zx_b_ApplicationEPR_s* x);
int zx_b_ApplicationEPR_NUM_ReferenceParameters(struct zx_b_ApplicationEPR_s* x);
int zx_b_ApplicationEPR_NUM_Metadata(struct zx_b_ApplicationEPR_s* x);

struct zx_a_Address_s* zx_b_ApplicationEPR_POP_Address(struct zx_b_ApplicationEPR_s* x);
struct zx_a_ReferenceParameters_s* zx_b_ApplicationEPR_POP_ReferenceParameters(struct zx_b_ApplicationEPR_s* x);
struct zx_a_Metadata_s* zx_b_ApplicationEPR_POP_Metadata(struct zx_b_ApplicationEPR_s* x);

void zx_b_ApplicationEPR_PUSH_Address(struct zx_b_ApplicationEPR_s* x, struct zx_a_Address_s* y);
void zx_b_ApplicationEPR_PUSH_ReferenceParameters(struct zx_b_ApplicationEPR_s* x, struct zx_a_ReferenceParameters_s* y);
void zx_b_ApplicationEPR_PUSH_Metadata(struct zx_b_ApplicationEPR_s* x, struct zx_a_Metadata_s* y);

void zx_b_ApplicationEPR_PUT_notOnOrAfter(struct zx_b_ApplicationEPR_s* x, struct zx_str* y);
void zx_b_ApplicationEPR_PUT_mustUnderstand(struct zx_b_ApplicationEPR_s* x, struct zx_str* y);
void zx_b_ApplicationEPR_PUT_actor(struct zx_b_ApplicationEPR_s* x, struct zx_str* y);
void zx_b_ApplicationEPR_PUT_Id(struct zx_b_ApplicationEPR_s* x, struct zx_str* y);

void zx_b_ApplicationEPR_PUT_Address(struct zx_b_ApplicationEPR_s* x, int n, struct zx_a_Address_s* y);
void zx_b_ApplicationEPR_PUT_ReferenceParameters(struct zx_b_ApplicationEPR_s* x, int n, struct zx_a_ReferenceParameters_s* y);
void zx_b_ApplicationEPR_PUT_Metadata(struct zx_b_ApplicationEPR_s* x, int n, struct zx_a_Metadata_s* y);

void zx_b_ApplicationEPR_ADD_Address(struct zx_b_ApplicationEPR_s* x, int n, struct zx_a_Address_s* z);
void zx_b_ApplicationEPR_ADD_ReferenceParameters(struct zx_b_ApplicationEPR_s* x, int n, struct zx_a_ReferenceParameters_s* z);
void zx_b_ApplicationEPR_ADD_Metadata(struct zx_b_ApplicationEPR_s* x, int n, struct zx_a_Metadata_s* z);

void zx_b_ApplicationEPR_DEL_Address(struct zx_b_ApplicationEPR_s* x, int n);
void zx_b_ApplicationEPR_DEL_ReferenceParameters(struct zx_b_ApplicationEPR_s* x, int n);
void zx_b_ApplicationEPR_DEL_Metadata(struct zx_b_ApplicationEPR_s* x, int n);

void zx_b_ApplicationEPR_REV_Address(struct zx_b_ApplicationEPR_s* x);
void zx_b_ApplicationEPR_REV_ReferenceParameters(struct zx_b_ApplicationEPR_s* x);
void zx_b_ApplicationEPR_REV_Metadata(struct zx_b_ApplicationEPR_s* x);

#endif
/* -------------------------- b_Consent -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_b_Consent_EXT
#define zx_b_Consent_EXT
#endif

struct zx_b_Consent_s* zx_DEC_b_Consent(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_b_Consent_s* zx_NEW_b_Consent(struct zx_ctx* c);
void zx_FREE_b_Consent(struct zx_ctx* c, struct zx_b_Consent_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_b_Consent_s* zx_DEEP_CLONE_b_Consent(struct zx_ctx* c, struct zx_b_Consent_s* x, int dup_strs);
void zx_DUP_STRS_b_Consent(struct zx_ctx* c, struct zx_b_Consent_s* x);
int zx_WALK_SO_b_Consent(struct zx_ctx* c, struct zx_b_Consent_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_b_Consent(struct zx_ctx* c, struct zx_b_Consent_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_b_Consent(struct zx_ctx* c, struct zx_b_Consent_s* x);
int zx_LEN_WO_b_Consent(struct zx_ctx* c, struct zx_b_Consent_s* x);
char* zx_ENC_SO_b_Consent(struct zx_ctx* c, struct zx_b_Consent_s* x, char* p);
char* zx_ENC_WO_b_Consent(struct zx_ctx* c, struct zx_b_Consent_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_b_Consent(struct zx_ctx* c, struct zx_b_Consent_s* x);
struct zx_str* zx_EASY_ENC_WO_b_Consent(struct zx_ctx* c, struct zx_b_Consent_s* x);

struct zx_b_Consent_s {
  ZX_ELEM_EXT
  zx_b_Consent_EXT
  struct zx_str* uri;	/* {1,1} attribute xs:anyURI */
  struct zx_str* timestamp;	/* {0,1} attribute xs:dateTime */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_b_Consent_GET_uri(struct zx_b_Consent_s* x);
struct zx_str* zx_b_Consent_GET_timestamp(struct zx_b_Consent_s* x);
struct zx_str* zx_b_Consent_GET_mustUnderstand(struct zx_b_Consent_s* x);
struct zx_str* zx_b_Consent_GET_actor(struct zx_b_Consent_s* x);
struct zx_str* zx_b_Consent_GET_Id(struct zx_b_Consent_s* x);





void zx_b_Consent_PUT_uri(struct zx_b_Consent_s* x, struct zx_str* y);
void zx_b_Consent_PUT_timestamp(struct zx_b_Consent_s* x, struct zx_str* y);
void zx_b_Consent_PUT_mustUnderstand(struct zx_b_Consent_s* x, struct zx_str* y);
void zx_b_Consent_PUT_actor(struct zx_b_Consent_s* x, struct zx_str* y);
void zx_b_Consent_PUT_Id(struct zx_b_Consent_s* x, struct zx_str* y);





#endif
/* -------------------------- b_CredentialsContext -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_b_CredentialsContext_EXT
#define zx_b_CredentialsContext_EXT
#endif

struct zx_b_CredentialsContext_s* zx_DEC_b_CredentialsContext(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_b_CredentialsContext_s* zx_NEW_b_CredentialsContext(struct zx_ctx* c);
void zx_FREE_b_CredentialsContext(struct zx_ctx* c, struct zx_b_CredentialsContext_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_b_CredentialsContext_s* zx_DEEP_CLONE_b_CredentialsContext(struct zx_ctx* c, struct zx_b_CredentialsContext_s* x, int dup_strs);
void zx_DUP_STRS_b_CredentialsContext(struct zx_ctx* c, struct zx_b_CredentialsContext_s* x);
int zx_WALK_SO_b_CredentialsContext(struct zx_ctx* c, struct zx_b_CredentialsContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_b_CredentialsContext(struct zx_ctx* c, struct zx_b_CredentialsContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_b_CredentialsContext(struct zx_ctx* c, struct zx_b_CredentialsContext_s* x);
int zx_LEN_WO_b_CredentialsContext(struct zx_ctx* c, struct zx_b_CredentialsContext_s* x);
char* zx_ENC_SO_b_CredentialsContext(struct zx_ctx* c, struct zx_b_CredentialsContext_s* x, char* p);
char* zx_ENC_WO_b_CredentialsContext(struct zx_ctx* c, struct zx_b_CredentialsContext_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_b_CredentialsContext(struct zx_ctx* c, struct zx_b_CredentialsContext_s* x);
struct zx_str* zx_EASY_ENC_WO_b_CredentialsContext(struct zx_ctx* c, struct zx_b_CredentialsContext_s* x);

struct zx_b_CredentialsContext_s {
  ZX_ELEM_EXT
  zx_b_CredentialsContext_EXT
  struct zx_sp_RequestedAuthnContext_s* RequestedAuthnContext;	/* {0,1} nada */
  struct zx_elem_s* SecurityMechID;	/* {0,-1} xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_b_CredentialsContext_GET_mustUnderstand(struct zx_b_CredentialsContext_s* x);
struct zx_str* zx_b_CredentialsContext_GET_actor(struct zx_b_CredentialsContext_s* x);
struct zx_str* zx_b_CredentialsContext_GET_Id(struct zx_b_CredentialsContext_s* x);

struct zx_sp_RequestedAuthnContext_s* zx_b_CredentialsContext_GET_RequestedAuthnContext(struct zx_b_CredentialsContext_s* x, int n);
struct zx_elem_s* zx_b_CredentialsContext_GET_SecurityMechID(struct zx_b_CredentialsContext_s* x, int n);

int zx_b_CredentialsContext_NUM_RequestedAuthnContext(struct zx_b_CredentialsContext_s* x);
int zx_b_CredentialsContext_NUM_SecurityMechID(struct zx_b_CredentialsContext_s* x);

struct zx_sp_RequestedAuthnContext_s* zx_b_CredentialsContext_POP_RequestedAuthnContext(struct zx_b_CredentialsContext_s* x);
struct zx_elem_s* zx_b_CredentialsContext_POP_SecurityMechID(struct zx_b_CredentialsContext_s* x);

void zx_b_CredentialsContext_PUSH_RequestedAuthnContext(struct zx_b_CredentialsContext_s* x, struct zx_sp_RequestedAuthnContext_s* y);
void zx_b_CredentialsContext_PUSH_SecurityMechID(struct zx_b_CredentialsContext_s* x, struct zx_elem_s* y);

void zx_b_CredentialsContext_PUT_mustUnderstand(struct zx_b_CredentialsContext_s* x, struct zx_str* y);
void zx_b_CredentialsContext_PUT_actor(struct zx_b_CredentialsContext_s* x, struct zx_str* y);
void zx_b_CredentialsContext_PUT_Id(struct zx_b_CredentialsContext_s* x, struct zx_str* y);

void zx_b_CredentialsContext_PUT_RequestedAuthnContext(struct zx_b_CredentialsContext_s* x, int n, struct zx_sp_RequestedAuthnContext_s* y);
void zx_b_CredentialsContext_PUT_SecurityMechID(struct zx_b_CredentialsContext_s* x, int n, struct zx_elem_s* y);

void zx_b_CredentialsContext_ADD_RequestedAuthnContext(struct zx_b_CredentialsContext_s* x, int n, struct zx_sp_RequestedAuthnContext_s* z);
void zx_b_CredentialsContext_ADD_SecurityMechID(struct zx_b_CredentialsContext_s* x, int n, struct zx_elem_s* z);

void zx_b_CredentialsContext_DEL_RequestedAuthnContext(struct zx_b_CredentialsContext_s* x, int n);
void zx_b_CredentialsContext_DEL_SecurityMechID(struct zx_b_CredentialsContext_s* x, int n);

void zx_b_CredentialsContext_REV_RequestedAuthnContext(struct zx_b_CredentialsContext_s* x);
void zx_b_CredentialsContext_REV_SecurityMechID(struct zx_b_CredentialsContext_s* x);

#endif
/* -------------------------- b_EndpointUpdate -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_b_EndpointUpdate_EXT
#define zx_b_EndpointUpdate_EXT
#endif

struct zx_b_EndpointUpdate_s* zx_DEC_b_EndpointUpdate(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_b_EndpointUpdate_s* zx_NEW_b_EndpointUpdate(struct zx_ctx* c);
void zx_FREE_b_EndpointUpdate(struct zx_ctx* c, struct zx_b_EndpointUpdate_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_b_EndpointUpdate_s* zx_DEEP_CLONE_b_EndpointUpdate(struct zx_ctx* c, struct zx_b_EndpointUpdate_s* x, int dup_strs);
void zx_DUP_STRS_b_EndpointUpdate(struct zx_ctx* c, struct zx_b_EndpointUpdate_s* x);
int zx_WALK_SO_b_EndpointUpdate(struct zx_ctx* c, struct zx_b_EndpointUpdate_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_b_EndpointUpdate(struct zx_ctx* c, struct zx_b_EndpointUpdate_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_b_EndpointUpdate(struct zx_ctx* c, struct zx_b_EndpointUpdate_s* x);
int zx_LEN_WO_b_EndpointUpdate(struct zx_ctx* c, struct zx_b_EndpointUpdate_s* x);
char* zx_ENC_SO_b_EndpointUpdate(struct zx_ctx* c, struct zx_b_EndpointUpdate_s* x, char* p);
char* zx_ENC_WO_b_EndpointUpdate(struct zx_ctx* c, struct zx_b_EndpointUpdate_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_b_EndpointUpdate(struct zx_ctx* c, struct zx_b_EndpointUpdate_s* x);
struct zx_str* zx_EASY_ENC_WO_b_EndpointUpdate(struct zx_ctx* c, struct zx_b_EndpointUpdate_s* x);

struct zx_b_EndpointUpdate_s {
  ZX_ELEM_EXT
  zx_b_EndpointUpdate_EXT
  struct zx_a_Address_s* Address;	/* {1,1}  */
  struct zx_a_ReferenceParameters_s* ReferenceParameters;	/* {0,1} nada */
  struct zx_a_Metadata_s* Metadata;	/* {0,1} nada */
  struct zx_str* notOnOrAfter;	/* {0,1} attribute xs:dateTime */
  struct zx_str* updateType;	/* {0,1} attribute xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_b_EndpointUpdate_GET_notOnOrAfter(struct zx_b_EndpointUpdate_s* x);
struct zx_str* zx_b_EndpointUpdate_GET_updateType(struct zx_b_EndpointUpdate_s* x);
struct zx_str* zx_b_EndpointUpdate_GET_mustUnderstand(struct zx_b_EndpointUpdate_s* x);
struct zx_str* zx_b_EndpointUpdate_GET_actor(struct zx_b_EndpointUpdate_s* x);
struct zx_str* zx_b_EndpointUpdate_GET_Id(struct zx_b_EndpointUpdate_s* x);

struct zx_a_Address_s* zx_b_EndpointUpdate_GET_Address(struct zx_b_EndpointUpdate_s* x, int n);
struct zx_a_ReferenceParameters_s* zx_b_EndpointUpdate_GET_ReferenceParameters(struct zx_b_EndpointUpdate_s* x, int n);
struct zx_a_Metadata_s* zx_b_EndpointUpdate_GET_Metadata(struct zx_b_EndpointUpdate_s* x, int n);

int zx_b_EndpointUpdate_NUM_Address(struct zx_b_EndpointUpdate_s* x);
int zx_b_EndpointUpdate_NUM_ReferenceParameters(struct zx_b_EndpointUpdate_s* x);
int zx_b_EndpointUpdate_NUM_Metadata(struct zx_b_EndpointUpdate_s* x);

struct zx_a_Address_s* zx_b_EndpointUpdate_POP_Address(struct zx_b_EndpointUpdate_s* x);
struct zx_a_ReferenceParameters_s* zx_b_EndpointUpdate_POP_ReferenceParameters(struct zx_b_EndpointUpdate_s* x);
struct zx_a_Metadata_s* zx_b_EndpointUpdate_POP_Metadata(struct zx_b_EndpointUpdate_s* x);

void zx_b_EndpointUpdate_PUSH_Address(struct zx_b_EndpointUpdate_s* x, struct zx_a_Address_s* y);
void zx_b_EndpointUpdate_PUSH_ReferenceParameters(struct zx_b_EndpointUpdate_s* x, struct zx_a_ReferenceParameters_s* y);
void zx_b_EndpointUpdate_PUSH_Metadata(struct zx_b_EndpointUpdate_s* x, struct zx_a_Metadata_s* y);

void zx_b_EndpointUpdate_PUT_notOnOrAfter(struct zx_b_EndpointUpdate_s* x, struct zx_str* y);
void zx_b_EndpointUpdate_PUT_updateType(struct zx_b_EndpointUpdate_s* x, struct zx_str* y);
void zx_b_EndpointUpdate_PUT_mustUnderstand(struct zx_b_EndpointUpdate_s* x, struct zx_str* y);
void zx_b_EndpointUpdate_PUT_actor(struct zx_b_EndpointUpdate_s* x, struct zx_str* y);
void zx_b_EndpointUpdate_PUT_Id(struct zx_b_EndpointUpdate_s* x, struct zx_str* y);

void zx_b_EndpointUpdate_PUT_Address(struct zx_b_EndpointUpdate_s* x, int n, struct zx_a_Address_s* y);
void zx_b_EndpointUpdate_PUT_ReferenceParameters(struct zx_b_EndpointUpdate_s* x, int n, struct zx_a_ReferenceParameters_s* y);
void zx_b_EndpointUpdate_PUT_Metadata(struct zx_b_EndpointUpdate_s* x, int n, struct zx_a_Metadata_s* y);

void zx_b_EndpointUpdate_ADD_Address(struct zx_b_EndpointUpdate_s* x, int n, struct zx_a_Address_s* z);
void zx_b_EndpointUpdate_ADD_ReferenceParameters(struct zx_b_EndpointUpdate_s* x, int n, struct zx_a_ReferenceParameters_s* z);
void zx_b_EndpointUpdate_ADD_Metadata(struct zx_b_EndpointUpdate_s* x, int n, struct zx_a_Metadata_s* z);

void zx_b_EndpointUpdate_DEL_Address(struct zx_b_EndpointUpdate_s* x, int n);
void zx_b_EndpointUpdate_DEL_ReferenceParameters(struct zx_b_EndpointUpdate_s* x, int n);
void zx_b_EndpointUpdate_DEL_Metadata(struct zx_b_EndpointUpdate_s* x, int n);

void zx_b_EndpointUpdate_REV_Address(struct zx_b_EndpointUpdate_s* x);
void zx_b_EndpointUpdate_REV_ReferenceParameters(struct zx_b_EndpointUpdate_s* x);
void zx_b_EndpointUpdate_REV_Metadata(struct zx_b_EndpointUpdate_s* x);

#endif
/* -------------------------- b_Framework -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_b_Framework_EXT
#define zx_b_Framework_EXT
#endif

struct zx_b_Framework_s* zx_DEC_b_Framework(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_b_Framework_s* zx_NEW_b_Framework(struct zx_ctx* c);
void zx_FREE_b_Framework(struct zx_ctx* c, struct zx_b_Framework_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_b_Framework_s* zx_DEEP_CLONE_b_Framework(struct zx_ctx* c, struct zx_b_Framework_s* x, int dup_strs);
void zx_DUP_STRS_b_Framework(struct zx_ctx* c, struct zx_b_Framework_s* x);
int zx_WALK_SO_b_Framework(struct zx_ctx* c, struct zx_b_Framework_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_b_Framework(struct zx_ctx* c, struct zx_b_Framework_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_b_Framework(struct zx_ctx* c, struct zx_b_Framework_s* x);
int zx_LEN_WO_b_Framework(struct zx_ctx* c, struct zx_b_Framework_s* x);
char* zx_ENC_SO_b_Framework(struct zx_ctx* c, struct zx_b_Framework_s* x, char* p);
char* zx_ENC_WO_b_Framework(struct zx_ctx* c, struct zx_b_Framework_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_b_Framework(struct zx_ctx* c, struct zx_b_Framework_s* x);
struct zx_str* zx_EASY_ENC_WO_b_Framework(struct zx_ctx* c, struct zx_b_Framework_s* x);

struct zx_b_Framework_s {
  ZX_ELEM_EXT
  zx_b_Framework_EXT
  struct zx_str* version;	/* {1,1} attribute xsd:string */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_b_Framework_GET_version(struct zx_b_Framework_s* x);
struct zx_str* zx_b_Framework_GET_mustUnderstand(struct zx_b_Framework_s* x);
struct zx_str* zx_b_Framework_GET_actor(struct zx_b_Framework_s* x);
struct zx_str* zx_b_Framework_GET_Id(struct zx_b_Framework_s* x);





void zx_b_Framework_PUT_version(struct zx_b_Framework_s* x, struct zx_str* y);
void zx_b_Framework_PUT_mustUnderstand(struct zx_b_Framework_s* x, struct zx_str* y);
void zx_b_Framework_PUT_actor(struct zx_b_Framework_s* x, struct zx_str* y);
void zx_b_Framework_PUT_Id(struct zx_b_Framework_s* x, struct zx_str* y);





#endif
/* -------------------------- b_InteractionService -------------------------- */
/* refby( zx_b_UserInteraction_s ) */
#ifndef zx_b_InteractionService_EXT
#define zx_b_InteractionService_EXT
#endif

struct zx_b_InteractionService_s* zx_DEC_b_InteractionService(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_b_InteractionService_s* zx_NEW_b_InteractionService(struct zx_ctx* c);
void zx_FREE_b_InteractionService(struct zx_ctx* c, struct zx_b_InteractionService_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_b_InteractionService_s* zx_DEEP_CLONE_b_InteractionService(struct zx_ctx* c, struct zx_b_InteractionService_s* x, int dup_strs);
void zx_DUP_STRS_b_InteractionService(struct zx_ctx* c, struct zx_b_InteractionService_s* x);
int zx_WALK_SO_b_InteractionService(struct zx_ctx* c, struct zx_b_InteractionService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_b_InteractionService(struct zx_ctx* c, struct zx_b_InteractionService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_b_InteractionService(struct zx_ctx* c, struct zx_b_InteractionService_s* x);
int zx_LEN_WO_b_InteractionService(struct zx_ctx* c, struct zx_b_InteractionService_s* x);
char* zx_ENC_SO_b_InteractionService(struct zx_ctx* c, struct zx_b_InteractionService_s* x, char* p);
char* zx_ENC_WO_b_InteractionService(struct zx_ctx* c, struct zx_b_InteractionService_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_b_InteractionService(struct zx_ctx* c, struct zx_b_InteractionService_s* x);
struct zx_str* zx_EASY_ENC_WO_b_InteractionService(struct zx_ctx* c, struct zx_b_InteractionService_s* x);

struct zx_b_InteractionService_s {
  ZX_ELEM_EXT
  zx_b_InteractionService_EXT
  struct zx_a_Address_s* Address;	/* {1,1}  */
  struct zx_a_ReferenceParameters_s* ReferenceParameters;	/* {0,1} nada */
  struct zx_a_Metadata_s* Metadata;	/* {0,1} nada */
  struct zx_str* notOnOrAfter;	/* {0,1} attribute xs:dateTime */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_b_InteractionService_GET_notOnOrAfter(struct zx_b_InteractionService_s* x);
struct zx_str* zx_b_InteractionService_GET_mustUnderstand(struct zx_b_InteractionService_s* x);
struct zx_str* zx_b_InteractionService_GET_actor(struct zx_b_InteractionService_s* x);
struct zx_str* zx_b_InteractionService_GET_Id(struct zx_b_InteractionService_s* x);

struct zx_a_Address_s* zx_b_InteractionService_GET_Address(struct zx_b_InteractionService_s* x, int n);
struct zx_a_ReferenceParameters_s* zx_b_InteractionService_GET_ReferenceParameters(struct zx_b_InteractionService_s* x, int n);
struct zx_a_Metadata_s* zx_b_InteractionService_GET_Metadata(struct zx_b_InteractionService_s* x, int n);

int zx_b_InteractionService_NUM_Address(struct zx_b_InteractionService_s* x);
int zx_b_InteractionService_NUM_ReferenceParameters(struct zx_b_InteractionService_s* x);
int zx_b_InteractionService_NUM_Metadata(struct zx_b_InteractionService_s* x);

struct zx_a_Address_s* zx_b_InteractionService_POP_Address(struct zx_b_InteractionService_s* x);
struct zx_a_ReferenceParameters_s* zx_b_InteractionService_POP_ReferenceParameters(struct zx_b_InteractionService_s* x);
struct zx_a_Metadata_s* zx_b_InteractionService_POP_Metadata(struct zx_b_InteractionService_s* x);

void zx_b_InteractionService_PUSH_Address(struct zx_b_InteractionService_s* x, struct zx_a_Address_s* y);
void zx_b_InteractionService_PUSH_ReferenceParameters(struct zx_b_InteractionService_s* x, struct zx_a_ReferenceParameters_s* y);
void zx_b_InteractionService_PUSH_Metadata(struct zx_b_InteractionService_s* x, struct zx_a_Metadata_s* y);

void zx_b_InteractionService_PUT_notOnOrAfter(struct zx_b_InteractionService_s* x, struct zx_str* y);
void zx_b_InteractionService_PUT_mustUnderstand(struct zx_b_InteractionService_s* x, struct zx_str* y);
void zx_b_InteractionService_PUT_actor(struct zx_b_InteractionService_s* x, struct zx_str* y);
void zx_b_InteractionService_PUT_Id(struct zx_b_InteractionService_s* x, struct zx_str* y);

void zx_b_InteractionService_PUT_Address(struct zx_b_InteractionService_s* x, int n, struct zx_a_Address_s* y);
void zx_b_InteractionService_PUT_ReferenceParameters(struct zx_b_InteractionService_s* x, int n, struct zx_a_ReferenceParameters_s* y);
void zx_b_InteractionService_PUT_Metadata(struct zx_b_InteractionService_s* x, int n, struct zx_a_Metadata_s* y);

void zx_b_InteractionService_ADD_Address(struct zx_b_InteractionService_s* x, int n, struct zx_a_Address_s* z);
void zx_b_InteractionService_ADD_ReferenceParameters(struct zx_b_InteractionService_s* x, int n, struct zx_a_ReferenceParameters_s* z);
void zx_b_InteractionService_ADD_Metadata(struct zx_b_InteractionService_s* x, int n, struct zx_a_Metadata_s* z);

void zx_b_InteractionService_DEL_Address(struct zx_b_InteractionService_s* x, int n);
void zx_b_InteractionService_DEL_ReferenceParameters(struct zx_b_InteractionService_s* x, int n);
void zx_b_InteractionService_DEL_Metadata(struct zx_b_InteractionService_s* x, int n);

void zx_b_InteractionService_REV_Address(struct zx_b_InteractionService_s* x);
void zx_b_InteractionService_REV_ReferenceParameters(struct zx_b_InteractionService_s* x);
void zx_b_InteractionService_REV_Metadata(struct zx_b_InteractionService_s* x);

#endif
/* -------------------------- b_ProcessingContext -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_b_ProcessingContext_EXT
#define zx_b_ProcessingContext_EXT
#endif

struct zx_b_ProcessingContext_s* zx_DEC_b_ProcessingContext(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_b_ProcessingContext_s* zx_NEW_b_ProcessingContext(struct zx_ctx* c);
void zx_FREE_b_ProcessingContext(struct zx_ctx* c, struct zx_b_ProcessingContext_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_b_ProcessingContext_s* zx_DEEP_CLONE_b_ProcessingContext(struct zx_ctx* c, struct zx_b_ProcessingContext_s* x, int dup_strs);
void zx_DUP_STRS_b_ProcessingContext(struct zx_ctx* c, struct zx_b_ProcessingContext_s* x);
int zx_WALK_SO_b_ProcessingContext(struct zx_ctx* c, struct zx_b_ProcessingContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_b_ProcessingContext(struct zx_ctx* c, struct zx_b_ProcessingContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_b_ProcessingContext(struct zx_ctx* c, struct zx_b_ProcessingContext_s* x);
int zx_LEN_WO_b_ProcessingContext(struct zx_ctx* c, struct zx_b_ProcessingContext_s* x);
char* zx_ENC_SO_b_ProcessingContext(struct zx_ctx* c, struct zx_b_ProcessingContext_s* x, char* p);
char* zx_ENC_WO_b_ProcessingContext(struct zx_ctx* c, struct zx_b_ProcessingContext_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_b_ProcessingContext(struct zx_ctx* c, struct zx_b_ProcessingContext_s* x);
struct zx_str* zx_EASY_ENC_WO_b_ProcessingContext(struct zx_ctx* c, struct zx_b_ProcessingContext_s* x);

struct zx_b_ProcessingContext_s {
  ZX_ELEM_EXT
  zx_b_ProcessingContext_EXT
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_b_ProcessingContext_GET_mustUnderstand(struct zx_b_ProcessingContext_s* x);
struct zx_str* zx_b_ProcessingContext_GET_actor(struct zx_b_ProcessingContext_s* x);
struct zx_str* zx_b_ProcessingContext_GET_Id(struct zx_b_ProcessingContext_s* x);





void zx_b_ProcessingContext_PUT_mustUnderstand(struct zx_b_ProcessingContext_s* x, struct zx_str* y);
void zx_b_ProcessingContext_PUT_actor(struct zx_b_ProcessingContext_s* x, struct zx_str* y);
void zx_b_ProcessingContext_PUT_Id(struct zx_b_ProcessingContext_s* x, struct zx_str* y);





#endif
/* -------------------------- b_RedirectRequest -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_b_RedirectRequest_EXT
#define zx_b_RedirectRequest_EXT
#endif

struct zx_b_RedirectRequest_s* zx_DEC_b_RedirectRequest(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_b_RedirectRequest_s* zx_NEW_b_RedirectRequest(struct zx_ctx* c);
void zx_FREE_b_RedirectRequest(struct zx_ctx* c, struct zx_b_RedirectRequest_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_b_RedirectRequest_s* zx_DEEP_CLONE_b_RedirectRequest(struct zx_ctx* c, struct zx_b_RedirectRequest_s* x, int dup_strs);
void zx_DUP_STRS_b_RedirectRequest(struct zx_ctx* c, struct zx_b_RedirectRequest_s* x);
int zx_WALK_SO_b_RedirectRequest(struct zx_ctx* c, struct zx_b_RedirectRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_b_RedirectRequest(struct zx_ctx* c, struct zx_b_RedirectRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_b_RedirectRequest(struct zx_ctx* c, struct zx_b_RedirectRequest_s* x);
int zx_LEN_WO_b_RedirectRequest(struct zx_ctx* c, struct zx_b_RedirectRequest_s* x);
char* zx_ENC_SO_b_RedirectRequest(struct zx_ctx* c, struct zx_b_RedirectRequest_s* x, char* p);
char* zx_ENC_WO_b_RedirectRequest(struct zx_ctx* c, struct zx_b_RedirectRequest_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_b_RedirectRequest(struct zx_ctx* c, struct zx_b_RedirectRequest_s* x);
struct zx_str* zx_EASY_ENC_WO_b_RedirectRequest(struct zx_ctx* c, struct zx_b_RedirectRequest_s* x);

struct zx_b_RedirectRequest_s {
  ZX_ELEM_EXT
  zx_b_RedirectRequest_EXT
  struct zx_str* redirectURL;	/* {1,1} attribute xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_b_RedirectRequest_GET_redirectURL(struct zx_b_RedirectRequest_s* x);
struct zx_str* zx_b_RedirectRequest_GET_mustUnderstand(struct zx_b_RedirectRequest_s* x);
struct zx_str* zx_b_RedirectRequest_GET_actor(struct zx_b_RedirectRequest_s* x);
struct zx_str* zx_b_RedirectRequest_GET_Id(struct zx_b_RedirectRequest_s* x);





void zx_b_RedirectRequest_PUT_redirectURL(struct zx_b_RedirectRequest_s* x, struct zx_str* y);
void zx_b_RedirectRequest_PUT_mustUnderstand(struct zx_b_RedirectRequest_s* x, struct zx_str* y);
void zx_b_RedirectRequest_PUT_actor(struct zx_b_RedirectRequest_s* x, struct zx_str* y);
void zx_b_RedirectRequest_PUT_Id(struct zx_b_RedirectRequest_s* x, struct zx_str* y);





#endif
/* -------------------------- b_Sender -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_b_Sender_EXT
#define zx_b_Sender_EXT
#endif

struct zx_b_Sender_s* zx_DEC_b_Sender(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_b_Sender_s* zx_NEW_b_Sender(struct zx_ctx* c);
void zx_FREE_b_Sender(struct zx_ctx* c, struct zx_b_Sender_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_b_Sender_s* zx_DEEP_CLONE_b_Sender(struct zx_ctx* c, struct zx_b_Sender_s* x, int dup_strs);
void zx_DUP_STRS_b_Sender(struct zx_ctx* c, struct zx_b_Sender_s* x);
int zx_WALK_SO_b_Sender(struct zx_ctx* c, struct zx_b_Sender_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_b_Sender(struct zx_ctx* c, struct zx_b_Sender_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_b_Sender(struct zx_ctx* c, struct zx_b_Sender_s* x);
int zx_LEN_WO_b_Sender(struct zx_ctx* c, struct zx_b_Sender_s* x);
char* zx_ENC_SO_b_Sender(struct zx_ctx* c, struct zx_b_Sender_s* x, char* p);
char* zx_ENC_WO_b_Sender(struct zx_ctx* c, struct zx_b_Sender_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_b_Sender(struct zx_ctx* c, struct zx_b_Sender_s* x);
struct zx_str* zx_EASY_ENC_WO_b_Sender(struct zx_ctx* c, struct zx_b_Sender_s* x);

struct zx_b_Sender_s {
  ZX_ELEM_EXT
  zx_b_Sender_EXT
  struct zx_str* providerID;	/* {1,1} attribute xs:anyURI */
  struct zx_str* affiliationID;	/* {0,1} attribute xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_b_Sender_GET_providerID(struct zx_b_Sender_s* x);
struct zx_str* zx_b_Sender_GET_affiliationID(struct zx_b_Sender_s* x);
struct zx_str* zx_b_Sender_GET_mustUnderstand(struct zx_b_Sender_s* x);
struct zx_str* zx_b_Sender_GET_actor(struct zx_b_Sender_s* x);
struct zx_str* zx_b_Sender_GET_Id(struct zx_b_Sender_s* x);





void zx_b_Sender_PUT_providerID(struct zx_b_Sender_s* x, struct zx_str* y);
void zx_b_Sender_PUT_affiliationID(struct zx_b_Sender_s* x, struct zx_str* y);
void zx_b_Sender_PUT_mustUnderstand(struct zx_b_Sender_s* x, struct zx_str* y);
void zx_b_Sender_PUT_actor(struct zx_b_Sender_s* x, struct zx_str* y);
void zx_b_Sender_PUT_Id(struct zx_b_Sender_s* x, struct zx_str* y);





#endif
/* -------------------------- b_TargetIdentity -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_b_TargetIdentity_EXT
#define zx_b_TargetIdentity_EXT
#endif

struct zx_b_TargetIdentity_s* zx_DEC_b_TargetIdentity(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_b_TargetIdentity_s* zx_NEW_b_TargetIdentity(struct zx_ctx* c);
void zx_FREE_b_TargetIdentity(struct zx_ctx* c, struct zx_b_TargetIdentity_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_b_TargetIdentity_s* zx_DEEP_CLONE_b_TargetIdentity(struct zx_ctx* c, struct zx_b_TargetIdentity_s* x, int dup_strs);
void zx_DUP_STRS_b_TargetIdentity(struct zx_ctx* c, struct zx_b_TargetIdentity_s* x);
int zx_WALK_SO_b_TargetIdentity(struct zx_ctx* c, struct zx_b_TargetIdentity_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_b_TargetIdentity(struct zx_ctx* c, struct zx_b_TargetIdentity_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_b_TargetIdentity(struct zx_ctx* c, struct zx_b_TargetIdentity_s* x);
int zx_LEN_WO_b_TargetIdentity(struct zx_ctx* c, struct zx_b_TargetIdentity_s* x);
char* zx_ENC_SO_b_TargetIdentity(struct zx_ctx* c, struct zx_b_TargetIdentity_s* x, char* p);
char* zx_ENC_WO_b_TargetIdentity(struct zx_ctx* c, struct zx_b_TargetIdentity_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_b_TargetIdentity(struct zx_ctx* c, struct zx_b_TargetIdentity_s* x);
struct zx_str* zx_EASY_ENC_WO_b_TargetIdentity(struct zx_ctx* c, struct zx_b_TargetIdentity_s* x);

struct zx_b_TargetIdentity_s {
  ZX_ELEM_EXT
  zx_b_TargetIdentity_EXT
  struct zx_sa_Assertion_s* Assertion;	/* {0,1} nada */
  struct zx_sa11_Assertion_s* sa11_Assertion;	/* {0,1} nada */
  struct zx_ff12_Assertion_s* ff12_Assertion;	/* {0,1} nada */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_b_TargetIdentity_GET_mustUnderstand(struct zx_b_TargetIdentity_s* x);
struct zx_str* zx_b_TargetIdentity_GET_actor(struct zx_b_TargetIdentity_s* x);
struct zx_str* zx_b_TargetIdentity_GET_Id(struct zx_b_TargetIdentity_s* x);

struct zx_sa_Assertion_s* zx_b_TargetIdentity_GET_Assertion(struct zx_b_TargetIdentity_s* x, int n);
struct zx_sa11_Assertion_s* zx_b_TargetIdentity_GET_sa11_Assertion(struct zx_b_TargetIdentity_s* x, int n);
struct zx_ff12_Assertion_s* zx_b_TargetIdentity_GET_ff12_Assertion(struct zx_b_TargetIdentity_s* x, int n);

int zx_b_TargetIdentity_NUM_Assertion(struct zx_b_TargetIdentity_s* x);
int zx_b_TargetIdentity_NUM_sa11_Assertion(struct zx_b_TargetIdentity_s* x);
int zx_b_TargetIdentity_NUM_ff12_Assertion(struct zx_b_TargetIdentity_s* x);

struct zx_sa_Assertion_s* zx_b_TargetIdentity_POP_Assertion(struct zx_b_TargetIdentity_s* x);
struct zx_sa11_Assertion_s* zx_b_TargetIdentity_POP_sa11_Assertion(struct zx_b_TargetIdentity_s* x);
struct zx_ff12_Assertion_s* zx_b_TargetIdentity_POP_ff12_Assertion(struct zx_b_TargetIdentity_s* x);

void zx_b_TargetIdentity_PUSH_Assertion(struct zx_b_TargetIdentity_s* x, struct zx_sa_Assertion_s* y);
void zx_b_TargetIdentity_PUSH_sa11_Assertion(struct zx_b_TargetIdentity_s* x, struct zx_sa11_Assertion_s* y);
void zx_b_TargetIdentity_PUSH_ff12_Assertion(struct zx_b_TargetIdentity_s* x, struct zx_ff12_Assertion_s* y);

void zx_b_TargetIdentity_PUT_mustUnderstand(struct zx_b_TargetIdentity_s* x, struct zx_str* y);
void zx_b_TargetIdentity_PUT_actor(struct zx_b_TargetIdentity_s* x, struct zx_str* y);
void zx_b_TargetIdentity_PUT_Id(struct zx_b_TargetIdentity_s* x, struct zx_str* y);

void zx_b_TargetIdentity_PUT_Assertion(struct zx_b_TargetIdentity_s* x, int n, struct zx_sa_Assertion_s* y);
void zx_b_TargetIdentity_PUT_sa11_Assertion(struct zx_b_TargetIdentity_s* x, int n, struct zx_sa11_Assertion_s* y);
void zx_b_TargetIdentity_PUT_ff12_Assertion(struct zx_b_TargetIdentity_s* x, int n, struct zx_ff12_Assertion_s* y);

void zx_b_TargetIdentity_ADD_Assertion(struct zx_b_TargetIdentity_s* x, int n, struct zx_sa_Assertion_s* z);
void zx_b_TargetIdentity_ADD_sa11_Assertion(struct zx_b_TargetIdentity_s* x, int n, struct zx_sa11_Assertion_s* z);
void zx_b_TargetIdentity_ADD_ff12_Assertion(struct zx_b_TargetIdentity_s* x, int n, struct zx_ff12_Assertion_s* z);

void zx_b_TargetIdentity_DEL_Assertion(struct zx_b_TargetIdentity_s* x, int n);
void zx_b_TargetIdentity_DEL_sa11_Assertion(struct zx_b_TargetIdentity_s* x, int n);
void zx_b_TargetIdentity_DEL_ff12_Assertion(struct zx_b_TargetIdentity_s* x, int n);

void zx_b_TargetIdentity_REV_Assertion(struct zx_b_TargetIdentity_s* x);
void zx_b_TargetIdentity_REV_sa11_Assertion(struct zx_b_TargetIdentity_s* x);
void zx_b_TargetIdentity_REV_ff12_Assertion(struct zx_b_TargetIdentity_s* x);

#endif
/* -------------------------- b_Timeout -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_b_Timeout_EXT
#define zx_b_Timeout_EXT
#endif

struct zx_b_Timeout_s* zx_DEC_b_Timeout(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_b_Timeout_s* zx_NEW_b_Timeout(struct zx_ctx* c);
void zx_FREE_b_Timeout(struct zx_ctx* c, struct zx_b_Timeout_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_b_Timeout_s* zx_DEEP_CLONE_b_Timeout(struct zx_ctx* c, struct zx_b_Timeout_s* x, int dup_strs);
void zx_DUP_STRS_b_Timeout(struct zx_ctx* c, struct zx_b_Timeout_s* x);
int zx_WALK_SO_b_Timeout(struct zx_ctx* c, struct zx_b_Timeout_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_b_Timeout(struct zx_ctx* c, struct zx_b_Timeout_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_b_Timeout(struct zx_ctx* c, struct zx_b_Timeout_s* x);
int zx_LEN_WO_b_Timeout(struct zx_ctx* c, struct zx_b_Timeout_s* x);
char* zx_ENC_SO_b_Timeout(struct zx_ctx* c, struct zx_b_Timeout_s* x, char* p);
char* zx_ENC_WO_b_Timeout(struct zx_ctx* c, struct zx_b_Timeout_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_b_Timeout(struct zx_ctx* c, struct zx_b_Timeout_s* x);
struct zx_str* zx_EASY_ENC_WO_b_Timeout(struct zx_ctx* c, struct zx_b_Timeout_s* x);

struct zx_b_Timeout_s {
  ZX_ELEM_EXT
  zx_b_Timeout_EXT
  struct zx_str* maxProcessingTime;	/* {1,1} attribute xs:integer */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_b_Timeout_GET_maxProcessingTime(struct zx_b_Timeout_s* x);
struct zx_str* zx_b_Timeout_GET_mustUnderstand(struct zx_b_Timeout_s* x);
struct zx_str* zx_b_Timeout_GET_actor(struct zx_b_Timeout_s* x);
struct zx_str* zx_b_Timeout_GET_Id(struct zx_b_Timeout_s* x);





void zx_b_Timeout_PUT_maxProcessingTime(struct zx_b_Timeout_s* x, struct zx_str* y);
void zx_b_Timeout_PUT_mustUnderstand(struct zx_b_Timeout_s* x, struct zx_str* y);
void zx_b_Timeout_PUT_actor(struct zx_b_Timeout_s* x, struct zx_str* y);
void zx_b_Timeout_PUT_Id(struct zx_b_Timeout_s* x, struct zx_str* y);





#endif
/* -------------------------- b_UsageDirective -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_b_UsageDirective_EXT
#define zx_b_UsageDirective_EXT
#endif

struct zx_b_UsageDirective_s* zx_DEC_b_UsageDirective(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_b_UsageDirective_s* zx_NEW_b_UsageDirective(struct zx_ctx* c);
void zx_FREE_b_UsageDirective(struct zx_ctx* c, struct zx_b_UsageDirective_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_b_UsageDirective_s* zx_DEEP_CLONE_b_UsageDirective(struct zx_ctx* c, struct zx_b_UsageDirective_s* x, int dup_strs);
void zx_DUP_STRS_b_UsageDirective(struct zx_ctx* c, struct zx_b_UsageDirective_s* x);
int zx_WALK_SO_b_UsageDirective(struct zx_ctx* c, struct zx_b_UsageDirective_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_b_UsageDirective(struct zx_ctx* c, struct zx_b_UsageDirective_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_b_UsageDirective(struct zx_ctx* c, struct zx_b_UsageDirective_s* x);
int zx_LEN_WO_b_UsageDirective(struct zx_ctx* c, struct zx_b_UsageDirective_s* x);
char* zx_ENC_SO_b_UsageDirective(struct zx_ctx* c, struct zx_b_UsageDirective_s* x, char* p);
char* zx_ENC_WO_b_UsageDirective(struct zx_ctx* c, struct zx_b_UsageDirective_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_b_UsageDirective(struct zx_ctx* c, struct zx_b_UsageDirective_s* x);
struct zx_str* zx_EASY_ENC_WO_b_UsageDirective(struct zx_ctx* c, struct zx_b_UsageDirective_s* x);

struct zx_b_UsageDirective_s {
  ZX_ELEM_EXT
  zx_b_UsageDirective_EXT
  struct zx_str* ref;	/* {1,1} attribute xs:string */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_b_UsageDirective_GET_ref(struct zx_b_UsageDirective_s* x);
struct zx_str* zx_b_UsageDirective_GET_mustUnderstand(struct zx_b_UsageDirective_s* x);
struct zx_str* zx_b_UsageDirective_GET_actor(struct zx_b_UsageDirective_s* x);
struct zx_str* zx_b_UsageDirective_GET_Id(struct zx_b_UsageDirective_s* x);





void zx_b_UsageDirective_PUT_ref(struct zx_b_UsageDirective_s* x, struct zx_str* y);
void zx_b_UsageDirective_PUT_mustUnderstand(struct zx_b_UsageDirective_s* x, struct zx_str* y);
void zx_b_UsageDirective_PUT_actor(struct zx_b_UsageDirective_s* x, struct zx_str* y);
void zx_b_UsageDirective_PUT_Id(struct zx_b_UsageDirective_s* x, struct zx_str* y);





#endif
/* -------------------------- b_UserInteraction -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_b_UserInteraction_EXT
#define zx_b_UserInteraction_EXT
#endif

struct zx_b_UserInteraction_s* zx_DEC_b_UserInteraction(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_b_UserInteraction_s* zx_NEW_b_UserInteraction(struct zx_ctx* c);
void zx_FREE_b_UserInteraction(struct zx_ctx* c, struct zx_b_UserInteraction_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_b_UserInteraction_s* zx_DEEP_CLONE_b_UserInteraction(struct zx_ctx* c, struct zx_b_UserInteraction_s* x, int dup_strs);
void zx_DUP_STRS_b_UserInteraction(struct zx_ctx* c, struct zx_b_UserInteraction_s* x);
int zx_WALK_SO_b_UserInteraction(struct zx_ctx* c, struct zx_b_UserInteraction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_b_UserInteraction(struct zx_ctx* c, struct zx_b_UserInteraction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_b_UserInteraction(struct zx_ctx* c, struct zx_b_UserInteraction_s* x);
int zx_LEN_WO_b_UserInteraction(struct zx_ctx* c, struct zx_b_UserInteraction_s* x);
char* zx_ENC_SO_b_UserInteraction(struct zx_ctx* c, struct zx_b_UserInteraction_s* x, char* p);
char* zx_ENC_WO_b_UserInteraction(struct zx_ctx* c, struct zx_b_UserInteraction_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_b_UserInteraction(struct zx_ctx* c, struct zx_b_UserInteraction_s* x);
struct zx_str* zx_EASY_ENC_WO_b_UserInteraction(struct zx_ctx* c, struct zx_b_UserInteraction_s* x);

struct zx_b_UserInteraction_s {
  ZX_ELEM_EXT
  zx_b_UserInteraction_EXT
  struct zx_b_InteractionService_s* InteractionService;	/* {0,-1}  */
  struct zx_str* interact;	/* {0,1} attribute xs:QName */
  struct zx_str* language;	/* {0,1} attribute xs:NMTOKENS */
  struct zx_str* redirect;	/* {0,1} attribute xs:boolean */
  struct zx_str* maxInteractTime;	/* {0,1} attribute xs:integer */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_b_UserInteraction_GET_interact(struct zx_b_UserInteraction_s* x);
struct zx_str* zx_b_UserInteraction_GET_language(struct zx_b_UserInteraction_s* x);
struct zx_str* zx_b_UserInteraction_GET_redirect(struct zx_b_UserInteraction_s* x);
struct zx_str* zx_b_UserInteraction_GET_maxInteractTime(struct zx_b_UserInteraction_s* x);
struct zx_str* zx_b_UserInteraction_GET_mustUnderstand(struct zx_b_UserInteraction_s* x);
struct zx_str* zx_b_UserInteraction_GET_actor(struct zx_b_UserInteraction_s* x);
struct zx_str* zx_b_UserInteraction_GET_Id(struct zx_b_UserInteraction_s* x);

struct zx_b_InteractionService_s* zx_b_UserInteraction_GET_InteractionService(struct zx_b_UserInteraction_s* x, int n);

int zx_b_UserInteraction_NUM_InteractionService(struct zx_b_UserInteraction_s* x);

struct zx_b_InteractionService_s* zx_b_UserInteraction_POP_InteractionService(struct zx_b_UserInteraction_s* x);

void zx_b_UserInteraction_PUSH_InteractionService(struct zx_b_UserInteraction_s* x, struct zx_b_InteractionService_s* y);

void zx_b_UserInteraction_PUT_interact(struct zx_b_UserInteraction_s* x, struct zx_str* y);
void zx_b_UserInteraction_PUT_language(struct zx_b_UserInteraction_s* x, struct zx_str* y);
void zx_b_UserInteraction_PUT_redirect(struct zx_b_UserInteraction_s* x, struct zx_str* y);
void zx_b_UserInteraction_PUT_maxInteractTime(struct zx_b_UserInteraction_s* x, struct zx_str* y);
void zx_b_UserInteraction_PUT_mustUnderstand(struct zx_b_UserInteraction_s* x, struct zx_str* y);
void zx_b_UserInteraction_PUT_actor(struct zx_b_UserInteraction_s* x, struct zx_str* y);
void zx_b_UserInteraction_PUT_Id(struct zx_b_UserInteraction_s* x, struct zx_str* y);

void zx_b_UserInteraction_PUT_InteractionService(struct zx_b_UserInteraction_s* x, int n, struct zx_b_InteractionService_s* y);

void zx_b_UserInteraction_ADD_InteractionService(struct zx_b_UserInteraction_s* x, int n, struct zx_b_InteractionService_s* z);

void zx_b_UserInteraction_DEL_InteractionService(struct zx_b_UserInteraction_s* x, int n);

void zx_b_UserInteraction_REV_InteractionService(struct zx_b_UserInteraction_s* x);

#endif

#endif
