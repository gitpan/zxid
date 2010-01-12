/* c/zx-sec-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_sec_data_h
#define _c_zx_sec_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- sec_Token -------------------------- */
/* refby( zx_ps_ResolveInput_s zx_di_SecurityContext_s zx_ps_AddKnownEntityRequest_s zx_ps_TestMembershipRequest_s zx_ps_ResolveOutput_s zx_im_MappingInput_s zx_im_MappingOutput_s ) */
#ifndef zx_sec_Token_EXT
#define zx_sec_Token_EXT
#endif

struct zx_sec_Token_s* zx_DEC_sec_Token(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sec_Token_s* zx_NEW_sec_Token(struct zx_ctx* c);
void zx_FREE_sec_Token(struct zx_ctx* c, struct zx_sec_Token_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sec_Token_s* zx_DEEP_CLONE_sec_Token(struct zx_ctx* c, struct zx_sec_Token_s* x, int dup_strs);
void zx_DUP_STRS_sec_Token(struct zx_ctx* c, struct zx_sec_Token_s* x);
int zx_WALK_SO_sec_Token(struct zx_ctx* c, struct zx_sec_Token_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sec_Token(struct zx_ctx* c, struct zx_sec_Token_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sec_Token(struct zx_ctx* c, struct zx_sec_Token_s* x);
int zx_LEN_WO_sec_Token(struct zx_ctx* c, struct zx_sec_Token_s* x);
char* zx_ENC_SO_sec_Token(struct zx_ctx* c, struct zx_sec_Token_s* x, char* p);
char* zx_ENC_WO_sec_Token(struct zx_ctx* c, struct zx_sec_Token_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sec_Token(struct zx_ctx* c, struct zx_sec_Token_s* x);
struct zx_str* zx_EASY_ENC_WO_sec_Token(struct zx_ctx* c, struct zx_sec_Token_s* x);

struct zx_sec_Token_s {
  ZX_ELEM_EXT
  zx_sec_Token_EXT
  struct zx_sa_Assertion_s* Assertion;	/* {0,1} nada */
  struct zx_sa_EncryptedAssertion_s* EncryptedAssertion;	/* {0,1} nada */
  struct zx_sa11_Assertion_s* sa11_Assertion;	/* {0,1} nada */
  struct zx_ff12_Assertion_s* ff12_Assertion;	/* {0,1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* ref;	/* {0,1} attribute xs:anyURI */
  struct zx_str* usage;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sec_Token_GET_id(struct zx_sec_Token_s* x);
struct zx_str* zx_sec_Token_GET_ref(struct zx_sec_Token_s* x);
struct zx_str* zx_sec_Token_GET_usage(struct zx_sec_Token_s* x);

struct zx_sa_Assertion_s* zx_sec_Token_GET_Assertion(struct zx_sec_Token_s* x, int n);
struct zx_sa_EncryptedAssertion_s* zx_sec_Token_GET_EncryptedAssertion(struct zx_sec_Token_s* x, int n);
struct zx_sa11_Assertion_s* zx_sec_Token_GET_sa11_Assertion(struct zx_sec_Token_s* x, int n);
struct zx_ff12_Assertion_s* zx_sec_Token_GET_ff12_Assertion(struct zx_sec_Token_s* x, int n);

int zx_sec_Token_NUM_Assertion(struct zx_sec_Token_s* x);
int zx_sec_Token_NUM_EncryptedAssertion(struct zx_sec_Token_s* x);
int zx_sec_Token_NUM_sa11_Assertion(struct zx_sec_Token_s* x);
int zx_sec_Token_NUM_ff12_Assertion(struct zx_sec_Token_s* x);

struct zx_sa_Assertion_s* zx_sec_Token_POP_Assertion(struct zx_sec_Token_s* x);
struct zx_sa_EncryptedAssertion_s* zx_sec_Token_POP_EncryptedAssertion(struct zx_sec_Token_s* x);
struct zx_sa11_Assertion_s* zx_sec_Token_POP_sa11_Assertion(struct zx_sec_Token_s* x);
struct zx_ff12_Assertion_s* zx_sec_Token_POP_ff12_Assertion(struct zx_sec_Token_s* x);

void zx_sec_Token_PUSH_Assertion(struct zx_sec_Token_s* x, struct zx_sa_Assertion_s* y);
void zx_sec_Token_PUSH_EncryptedAssertion(struct zx_sec_Token_s* x, struct zx_sa_EncryptedAssertion_s* y);
void zx_sec_Token_PUSH_sa11_Assertion(struct zx_sec_Token_s* x, struct zx_sa11_Assertion_s* y);
void zx_sec_Token_PUSH_ff12_Assertion(struct zx_sec_Token_s* x, struct zx_ff12_Assertion_s* y);

void zx_sec_Token_PUT_id(struct zx_sec_Token_s* x, struct zx_str* y);
void zx_sec_Token_PUT_ref(struct zx_sec_Token_s* x, struct zx_str* y);
void zx_sec_Token_PUT_usage(struct zx_sec_Token_s* x, struct zx_str* y);

void zx_sec_Token_PUT_Assertion(struct zx_sec_Token_s* x, int n, struct zx_sa_Assertion_s* y);
void zx_sec_Token_PUT_EncryptedAssertion(struct zx_sec_Token_s* x, int n, struct zx_sa_EncryptedAssertion_s* y);
void zx_sec_Token_PUT_sa11_Assertion(struct zx_sec_Token_s* x, int n, struct zx_sa11_Assertion_s* y);
void zx_sec_Token_PUT_ff12_Assertion(struct zx_sec_Token_s* x, int n, struct zx_ff12_Assertion_s* y);

void zx_sec_Token_ADD_Assertion(struct zx_sec_Token_s* x, int n, struct zx_sa_Assertion_s* z);
void zx_sec_Token_ADD_EncryptedAssertion(struct zx_sec_Token_s* x, int n, struct zx_sa_EncryptedAssertion_s* z);
void zx_sec_Token_ADD_sa11_Assertion(struct zx_sec_Token_s* x, int n, struct zx_sa11_Assertion_s* z);
void zx_sec_Token_ADD_ff12_Assertion(struct zx_sec_Token_s* x, int n, struct zx_ff12_Assertion_s* z);

void zx_sec_Token_DEL_Assertion(struct zx_sec_Token_s* x, int n);
void zx_sec_Token_DEL_EncryptedAssertion(struct zx_sec_Token_s* x, int n);
void zx_sec_Token_DEL_sa11_Assertion(struct zx_sec_Token_s* x, int n);
void zx_sec_Token_DEL_ff12_Assertion(struct zx_sec_Token_s* x, int n);

void zx_sec_Token_REV_Assertion(struct zx_sec_Token_s* x);
void zx_sec_Token_REV_EncryptedAssertion(struct zx_sec_Token_s* x);
void zx_sec_Token_REV_sa11_Assertion(struct zx_sec_Token_s* x);
void zx_sec_Token_REV_ff12_Assertion(struct zx_sec_Token_s* x);

#endif
/* -------------------------- sec_TokenPolicy -------------------------- */
/* refby( zx_ps_ResolveInput_s zx_ps_AddKnownEntityRequest_s zx_im_MappingInput_s zx_ps_AddEntityRequest_s ) */
#ifndef zx_sec_TokenPolicy_EXT
#define zx_sec_TokenPolicy_EXT
#endif

struct zx_sec_TokenPolicy_s* zx_DEC_sec_TokenPolicy(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sec_TokenPolicy_s* zx_NEW_sec_TokenPolicy(struct zx_ctx* c);
void zx_FREE_sec_TokenPolicy(struct zx_ctx* c, struct zx_sec_TokenPolicy_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sec_TokenPolicy_s* zx_DEEP_CLONE_sec_TokenPolicy(struct zx_ctx* c, struct zx_sec_TokenPolicy_s* x, int dup_strs);
void zx_DUP_STRS_sec_TokenPolicy(struct zx_ctx* c, struct zx_sec_TokenPolicy_s* x);
int zx_WALK_SO_sec_TokenPolicy(struct zx_ctx* c, struct zx_sec_TokenPolicy_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sec_TokenPolicy(struct zx_ctx* c, struct zx_sec_TokenPolicy_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sec_TokenPolicy(struct zx_ctx* c, struct zx_sec_TokenPolicy_s* x);
int zx_LEN_WO_sec_TokenPolicy(struct zx_ctx* c, struct zx_sec_TokenPolicy_s* x);
char* zx_ENC_SO_sec_TokenPolicy(struct zx_ctx* c, struct zx_sec_TokenPolicy_s* x, char* p);
char* zx_ENC_WO_sec_TokenPolicy(struct zx_ctx* c, struct zx_sec_TokenPolicy_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sec_TokenPolicy(struct zx_ctx* c, struct zx_sec_TokenPolicy_s* x);
struct zx_str* zx_EASY_ENC_WO_sec_TokenPolicy(struct zx_ctx* c, struct zx_sec_TokenPolicy_s* x);

struct zx_sec_TokenPolicy_s {
  ZX_ELEM_EXT
  zx_sec_TokenPolicy_EXT
  struct zx_str* issueTo;	/* {0,1} attribute xs:anyURI */
  struct zx_str* type;	/* {0,1} attribute hrxml:ExtendedAssociationTypeType */
  struct zx_str* validUntil;	/* {0,1} attribute xs:dateTime */
  struct zx_str* wantDSEPR;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sec_TokenPolicy_GET_issueTo(struct zx_sec_TokenPolicy_s* x);
struct zx_str* zx_sec_TokenPolicy_GET_type(struct zx_sec_TokenPolicy_s* x);
struct zx_str* zx_sec_TokenPolicy_GET_validUntil(struct zx_sec_TokenPolicy_s* x);
struct zx_str* zx_sec_TokenPolicy_GET_wantDSEPR(struct zx_sec_TokenPolicy_s* x);





void zx_sec_TokenPolicy_PUT_issueTo(struct zx_sec_TokenPolicy_s* x, struct zx_str* y);
void zx_sec_TokenPolicy_PUT_type(struct zx_sec_TokenPolicy_s* x, struct zx_str* y);
void zx_sec_TokenPolicy_PUT_validUntil(struct zx_sec_TokenPolicy_s* x, struct zx_str* y);
void zx_sec_TokenPolicy_PUT_wantDSEPR(struct zx_sec_TokenPolicy_s* x, struct zx_str* y);





#endif
/* -------------------------- sec_TransitedProvider -------------------------- */
/* refby( zx_sec_TransitedProviderPath_s ) */
#ifndef zx_sec_TransitedProvider_EXT
#define zx_sec_TransitedProvider_EXT
#endif

struct zx_sec_TransitedProvider_s* zx_DEC_sec_TransitedProvider(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sec_TransitedProvider_s* zx_NEW_sec_TransitedProvider(struct zx_ctx* c);
void zx_FREE_sec_TransitedProvider(struct zx_ctx* c, struct zx_sec_TransitedProvider_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sec_TransitedProvider_s* zx_DEEP_CLONE_sec_TransitedProvider(struct zx_ctx* c, struct zx_sec_TransitedProvider_s* x, int dup_strs);
void zx_DUP_STRS_sec_TransitedProvider(struct zx_ctx* c, struct zx_sec_TransitedProvider_s* x);
int zx_WALK_SO_sec_TransitedProvider(struct zx_ctx* c, struct zx_sec_TransitedProvider_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sec_TransitedProvider(struct zx_ctx* c, struct zx_sec_TransitedProvider_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sec_TransitedProvider(struct zx_ctx* c, struct zx_sec_TransitedProvider_s* x);
int zx_LEN_WO_sec_TransitedProvider(struct zx_ctx* c, struct zx_sec_TransitedProvider_s* x);
char* zx_ENC_SO_sec_TransitedProvider(struct zx_ctx* c, struct zx_sec_TransitedProvider_s* x, char* p);
char* zx_ENC_WO_sec_TransitedProvider(struct zx_ctx* c, struct zx_sec_TransitedProvider_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sec_TransitedProvider(struct zx_ctx* c, struct zx_sec_TransitedProvider_s* x);
struct zx_str* zx_EASY_ENC_WO_sec_TransitedProvider(struct zx_ctx* c, struct zx_sec_TransitedProvider_s* x);

struct zx_sec_TransitedProvider_s {
  ZX_ELEM_EXT
  zx_sec_TransitedProvider_EXT
  struct zx_str* confirmationURI;	/* {0,1} attribute xs:anyURI */
  struct zx_str* timeStamp;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sec_TransitedProvider_GET_confirmationURI(struct zx_sec_TransitedProvider_s* x);
struct zx_str* zx_sec_TransitedProvider_GET_timeStamp(struct zx_sec_TransitedProvider_s* x);





void zx_sec_TransitedProvider_PUT_confirmationURI(struct zx_sec_TransitedProvider_s* x, struct zx_str* y);
void zx_sec_TransitedProvider_PUT_timeStamp(struct zx_sec_TransitedProvider_s* x, struct zx_str* y);





#endif
/* -------------------------- sec_TransitedProviderPath -------------------------- */
/* refby( ) */
#ifndef zx_sec_TransitedProviderPath_EXT
#define zx_sec_TransitedProviderPath_EXT
#endif

struct zx_sec_TransitedProviderPath_s* zx_DEC_sec_TransitedProviderPath(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sec_TransitedProviderPath_s* zx_NEW_sec_TransitedProviderPath(struct zx_ctx* c);
void zx_FREE_sec_TransitedProviderPath(struct zx_ctx* c, struct zx_sec_TransitedProviderPath_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sec_TransitedProviderPath_s* zx_DEEP_CLONE_sec_TransitedProviderPath(struct zx_ctx* c, struct zx_sec_TransitedProviderPath_s* x, int dup_strs);
void zx_DUP_STRS_sec_TransitedProviderPath(struct zx_ctx* c, struct zx_sec_TransitedProviderPath_s* x);
int zx_WALK_SO_sec_TransitedProviderPath(struct zx_ctx* c, struct zx_sec_TransitedProviderPath_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sec_TransitedProviderPath(struct zx_ctx* c, struct zx_sec_TransitedProviderPath_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sec_TransitedProviderPath(struct zx_ctx* c, struct zx_sec_TransitedProviderPath_s* x);
int zx_LEN_WO_sec_TransitedProviderPath(struct zx_ctx* c, struct zx_sec_TransitedProviderPath_s* x);
char* zx_ENC_SO_sec_TransitedProviderPath(struct zx_ctx* c, struct zx_sec_TransitedProviderPath_s* x, char* p);
char* zx_ENC_WO_sec_TransitedProviderPath(struct zx_ctx* c, struct zx_sec_TransitedProviderPath_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sec_TransitedProviderPath(struct zx_ctx* c, struct zx_sec_TransitedProviderPath_s* x);
struct zx_str* zx_EASY_ENC_WO_sec_TransitedProviderPath(struct zx_ctx* c, struct zx_sec_TransitedProviderPath_s* x);

struct zx_sec_TransitedProviderPath_s {
  ZX_ELEM_EXT
  zx_sec_TransitedProviderPath_EXT
  struct zx_sec_TransitedProvider_s* TransitedProvider;	/* {1,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_sec_TransitedProvider_s* zx_sec_TransitedProviderPath_GET_TransitedProvider(struct zx_sec_TransitedProviderPath_s* x, int n);

int zx_sec_TransitedProviderPath_NUM_TransitedProvider(struct zx_sec_TransitedProviderPath_s* x);

struct zx_sec_TransitedProvider_s* zx_sec_TransitedProviderPath_POP_TransitedProvider(struct zx_sec_TransitedProviderPath_s* x);

void zx_sec_TransitedProviderPath_PUSH_TransitedProvider(struct zx_sec_TransitedProviderPath_s* x, struct zx_sec_TransitedProvider_s* y);


void zx_sec_TransitedProviderPath_PUT_TransitedProvider(struct zx_sec_TransitedProviderPath_s* x, int n, struct zx_sec_TransitedProvider_s* y);

void zx_sec_TransitedProviderPath_ADD_TransitedProvider(struct zx_sec_TransitedProviderPath_s* x, int n, struct zx_sec_TransitedProvider_s* z);

void zx_sec_TransitedProviderPath_DEL_TransitedProvider(struct zx_sec_TransitedProviderPath_s* x, int n);

void zx_sec_TransitedProviderPath_REV_TransitedProvider(struct zx_sec_TransitedProviderPath_s* x);

#endif

#endif
