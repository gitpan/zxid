/* c/zx-ds-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_ds_data_h
#define _c_zx_ds_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- ds_CanonicalizationMethod -------------------------- */
/* refby( zx_ds_SignedInfo_s ) */
#ifndef zx_ds_CanonicalizationMethod_EXT
#define zx_ds_CanonicalizationMethod_EXT
#endif

struct zx_ds_CanonicalizationMethod_s* zx_DEC_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ds_CanonicalizationMethod_s* zx_NEW_ds_CanonicalizationMethod(struct zx_ctx* c);
void zx_FREE_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ds_CanonicalizationMethod_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ds_CanonicalizationMethod_s* zx_DEEP_CLONE_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ds_CanonicalizationMethod_s* x, int dup_strs);
void zx_DUP_STRS_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ds_CanonicalizationMethod_s* x);
int zx_WALK_SO_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ds_CanonicalizationMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ds_CanonicalizationMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ds_CanonicalizationMethod_s* x);
int zx_LEN_WO_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ds_CanonicalizationMethod_s* x);
char* zx_ENC_SO_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ds_CanonicalizationMethod_s* x, char* p);
char* zx_ENC_WO_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ds_CanonicalizationMethod_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ds_CanonicalizationMethod_s* x);
struct zx_str* zx_EASY_ENC_WO_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ds_CanonicalizationMethod_s* x);

struct zx_ds_CanonicalizationMethod_s {
  ZX_ELEM_EXT
  zx_ds_CanonicalizationMethod_EXT
  struct zx_str* Algorithm;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ds_CanonicalizationMethod_GET_Algorithm(struct zx_ds_CanonicalizationMethod_s* x);





void zx_ds_CanonicalizationMethod_PUT_Algorithm(struct zx_ds_CanonicalizationMethod_s* x, struct zx_str* y);





#endif
/* -------------------------- ds_DSAKeyValue -------------------------- */
/* refby( zx_ds_KeyValue_s ) */
#ifndef zx_ds_DSAKeyValue_EXT
#define zx_ds_DSAKeyValue_EXT
#endif

struct zx_ds_DSAKeyValue_s* zx_DEC_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ds_DSAKeyValue_s* zx_NEW_ds_DSAKeyValue(struct zx_ctx* c);
void zx_FREE_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ds_DSAKeyValue_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ds_DSAKeyValue_s* zx_DEEP_CLONE_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ds_DSAKeyValue_s* x, int dup_strs);
void zx_DUP_STRS_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ds_DSAKeyValue_s* x);
int zx_WALK_SO_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ds_DSAKeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ds_DSAKeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ds_DSAKeyValue_s* x);
int zx_LEN_WO_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ds_DSAKeyValue_s* x);
char* zx_ENC_SO_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ds_DSAKeyValue_s* x, char* p);
char* zx_ENC_WO_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ds_DSAKeyValue_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ds_DSAKeyValue_s* x);
struct zx_str* zx_EASY_ENC_WO_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ds_DSAKeyValue_s* x);

struct zx_ds_DSAKeyValue_s {
  ZX_ELEM_EXT
  zx_ds_DSAKeyValue_EXT
  struct zx_elem_s* P;	/* {0,1} xs:base64Binary */
  struct zx_elem_s* Q;	/* {0,1} xs:base64Binary */
  struct zx_elem_s* G;	/* {0,1} xs:base64Binary */
  struct zx_elem_s* Y;	/* {1,1} xs:base64Binary */
  struct zx_elem_s* J;	/* {0,1} xs:base64Binary */
  struct zx_elem_s* Seed;	/* {0,1} xs:base64Binary */
  struct zx_elem_s* PgenCounter;	/* {0,1} xs:base64Binary */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_ds_DSAKeyValue_GET_P(struct zx_ds_DSAKeyValue_s* x, int n);
struct zx_elem_s* zx_ds_DSAKeyValue_GET_Q(struct zx_ds_DSAKeyValue_s* x, int n);
struct zx_elem_s* zx_ds_DSAKeyValue_GET_G(struct zx_ds_DSAKeyValue_s* x, int n);
struct zx_elem_s* zx_ds_DSAKeyValue_GET_Y(struct zx_ds_DSAKeyValue_s* x, int n);
struct zx_elem_s* zx_ds_DSAKeyValue_GET_J(struct zx_ds_DSAKeyValue_s* x, int n);
struct zx_elem_s* zx_ds_DSAKeyValue_GET_Seed(struct zx_ds_DSAKeyValue_s* x, int n);
struct zx_elem_s* zx_ds_DSAKeyValue_GET_PgenCounter(struct zx_ds_DSAKeyValue_s* x, int n);

int zx_ds_DSAKeyValue_NUM_P(struct zx_ds_DSAKeyValue_s* x);
int zx_ds_DSAKeyValue_NUM_Q(struct zx_ds_DSAKeyValue_s* x);
int zx_ds_DSAKeyValue_NUM_G(struct zx_ds_DSAKeyValue_s* x);
int zx_ds_DSAKeyValue_NUM_Y(struct zx_ds_DSAKeyValue_s* x);
int zx_ds_DSAKeyValue_NUM_J(struct zx_ds_DSAKeyValue_s* x);
int zx_ds_DSAKeyValue_NUM_Seed(struct zx_ds_DSAKeyValue_s* x);
int zx_ds_DSAKeyValue_NUM_PgenCounter(struct zx_ds_DSAKeyValue_s* x);

struct zx_elem_s* zx_ds_DSAKeyValue_POP_P(struct zx_ds_DSAKeyValue_s* x);
struct zx_elem_s* zx_ds_DSAKeyValue_POP_Q(struct zx_ds_DSAKeyValue_s* x);
struct zx_elem_s* zx_ds_DSAKeyValue_POP_G(struct zx_ds_DSAKeyValue_s* x);
struct zx_elem_s* zx_ds_DSAKeyValue_POP_Y(struct zx_ds_DSAKeyValue_s* x);
struct zx_elem_s* zx_ds_DSAKeyValue_POP_J(struct zx_ds_DSAKeyValue_s* x);
struct zx_elem_s* zx_ds_DSAKeyValue_POP_Seed(struct zx_ds_DSAKeyValue_s* x);
struct zx_elem_s* zx_ds_DSAKeyValue_POP_PgenCounter(struct zx_ds_DSAKeyValue_s* x);

void zx_ds_DSAKeyValue_PUSH_P(struct zx_ds_DSAKeyValue_s* x, struct zx_elem_s* y);
void zx_ds_DSAKeyValue_PUSH_Q(struct zx_ds_DSAKeyValue_s* x, struct zx_elem_s* y);
void zx_ds_DSAKeyValue_PUSH_G(struct zx_ds_DSAKeyValue_s* x, struct zx_elem_s* y);
void zx_ds_DSAKeyValue_PUSH_Y(struct zx_ds_DSAKeyValue_s* x, struct zx_elem_s* y);
void zx_ds_DSAKeyValue_PUSH_J(struct zx_ds_DSAKeyValue_s* x, struct zx_elem_s* y);
void zx_ds_DSAKeyValue_PUSH_Seed(struct zx_ds_DSAKeyValue_s* x, struct zx_elem_s* y);
void zx_ds_DSAKeyValue_PUSH_PgenCounter(struct zx_ds_DSAKeyValue_s* x, struct zx_elem_s* y);


void zx_ds_DSAKeyValue_PUT_P(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* y);
void zx_ds_DSAKeyValue_PUT_Q(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* y);
void zx_ds_DSAKeyValue_PUT_G(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* y);
void zx_ds_DSAKeyValue_PUT_Y(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* y);
void zx_ds_DSAKeyValue_PUT_J(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* y);
void zx_ds_DSAKeyValue_PUT_Seed(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* y);
void zx_ds_DSAKeyValue_PUT_PgenCounter(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* y);

void zx_ds_DSAKeyValue_ADD_P(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z);
void zx_ds_DSAKeyValue_ADD_Q(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z);
void zx_ds_DSAKeyValue_ADD_G(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z);
void zx_ds_DSAKeyValue_ADD_Y(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z);
void zx_ds_DSAKeyValue_ADD_J(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z);
void zx_ds_DSAKeyValue_ADD_Seed(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z);
void zx_ds_DSAKeyValue_ADD_PgenCounter(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z);

void zx_ds_DSAKeyValue_DEL_P(struct zx_ds_DSAKeyValue_s* x, int n);
void zx_ds_DSAKeyValue_DEL_Q(struct zx_ds_DSAKeyValue_s* x, int n);
void zx_ds_DSAKeyValue_DEL_G(struct zx_ds_DSAKeyValue_s* x, int n);
void zx_ds_DSAKeyValue_DEL_Y(struct zx_ds_DSAKeyValue_s* x, int n);
void zx_ds_DSAKeyValue_DEL_J(struct zx_ds_DSAKeyValue_s* x, int n);
void zx_ds_DSAKeyValue_DEL_Seed(struct zx_ds_DSAKeyValue_s* x, int n);
void zx_ds_DSAKeyValue_DEL_PgenCounter(struct zx_ds_DSAKeyValue_s* x, int n);

void zx_ds_DSAKeyValue_REV_P(struct zx_ds_DSAKeyValue_s* x);
void zx_ds_DSAKeyValue_REV_Q(struct zx_ds_DSAKeyValue_s* x);
void zx_ds_DSAKeyValue_REV_G(struct zx_ds_DSAKeyValue_s* x);
void zx_ds_DSAKeyValue_REV_Y(struct zx_ds_DSAKeyValue_s* x);
void zx_ds_DSAKeyValue_REV_J(struct zx_ds_DSAKeyValue_s* x);
void zx_ds_DSAKeyValue_REV_Seed(struct zx_ds_DSAKeyValue_s* x);
void zx_ds_DSAKeyValue_REV_PgenCounter(struct zx_ds_DSAKeyValue_s* x);

#endif
/* -------------------------- ds_DigestMethod -------------------------- */
/* refby( zx_ds_Reference_s ) */
#ifndef zx_ds_DigestMethod_EXT
#define zx_ds_DigestMethod_EXT
#endif

struct zx_ds_DigestMethod_s* zx_DEC_ds_DigestMethod(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ds_DigestMethod_s* zx_NEW_ds_DigestMethod(struct zx_ctx* c);
void zx_FREE_ds_DigestMethod(struct zx_ctx* c, struct zx_ds_DigestMethod_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ds_DigestMethod_s* zx_DEEP_CLONE_ds_DigestMethod(struct zx_ctx* c, struct zx_ds_DigestMethod_s* x, int dup_strs);
void zx_DUP_STRS_ds_DigestMethod(struct zx_ctx* c, struct zx_ds_DigestMethod_s* x);
int zx_WALK_SO_ds_DigestMethod(struct zx_ctx* c, struct zx_ds_DigestMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_DigestMethod(struct zx_ctx* c, struct zx_ds_DigestMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ds_DigestMethod(struct zx_ctx* c, struct zx_ds_DigestMethod_s* x);
int zx_LEN_WO_ds_DigestMethod(struct zx_ctx* c, struct zx_ds_DigestMethod_s* x);
char* zx_ENC_SO_ds_DigestMethod(struct zx_ctx* c, struct zx_ds_DigestMethod_s* x, char* p);
char* zx_ENC_WO_ds_DigestMethod(struct zx_ctx* c, struct zx_ds_DigestMethod_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ds_DigestMethod(struct zx_ctx* c, struct zx_ds_DigestMethod_s* x);
struct zx_str* zx_EASY_ENC_WO_ds_DigestMethod(struct zx_ctx* c, struct zx_ds_DigestMethod_s* x);

struct zx_ds_DigestMethod_s {
  ZX_ELEM_EXT
  zx_ds_DigestMethod_EXT
  struct zx_str* Algorithm;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ds_DigestMethod_GET_Algorithm(struct zx_ds_DigestMethod_s* x);





void zx_ds_DigestMethod_PUT_Algorithm(struct zx_ds_DigestMethod_s* x, struct zx_str* y);





#endif
/* -------------------------- ds_KeyInfo -------------------------- */
/* refby( zx_ds_Signature_s zx_xenc_EncryptedData_s zx_is12_InteractionRequest_s zx_m20_KeyDescriptor_s zx_sa11_SubjectConfirmation_s zx_is_InteractionRequest_s zx_md_KeyDescriptor_s zx_xenc_EncryptedKey_s zx_sa_SubjectConfirmationData_s ) */
#ifndef zx_ds_KeyInfo_EXT
#define zx_ds_KeyInfo_EXT
#endif

struct zx_ds_KeyInfo_s* zx_DEC_ds_KeyInfo(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ds_KeyInfo_s* zx_NEW_ds_KeyInfo(struct zx_ctx* c);
void zx_FREE_ds_KeyInfo(struct zx_ctx* c, struct zx_ds_KeyInfo_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ds_KeyInfo_s* zx_DEEP_CLONE_ds_KeyInfo(struct zx_ctx* c, struct zx_ds_KeyInfo_s* x, int dup_strs);
void zx_DUP_STRS_ds_KeyInfo(struct zx_ctx* c, struct zx_ds_KeyInfo_s* x);
int zx_WALK_SO_ds_KeyInfo(struct zx_ctx* c, struct zx_ds_KeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_KeyInfo(struct zx_ctx* c, struct zx_ds_KeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ds_KeyInfo(struct zx_ctx* c, struct zx_ds_KeyInfo_s* x);
int zx_LEN_WO_ds_KeyInfo(struct zx_ctx* c, struct zx_ds_KeyInfo_s* x);
char* zx_ENC_SO_ds_KeyInfo(struct zx_ctx* c, struct zx_ds_KeyInfo_s* x, char* p);
char* zx_ENC_WO_ds_KeyInfo(struct zx_ctx* c, struct zx_ds_KeyInfo_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ds_KeyInfo(struct zx_ctx* c, struct zx_ds_KeyInfo_s* x);
struct zx_str* zx_EASY_ENC_WO_ds_KeyInfo(struct zx_ctx* c, struct zx_ds_KeyInfo_s* x);

struct zx_ds_KeyInfo_s {
  ZX_ELEM_EXT
  zx_ds_KeyInfo_EXT
  struct zx_elem_s* KeyName;	/* {0,-1} xs:string */
  struct zx_ds_KeyValue_s* KeyValue;	/* {0,-1} nada */
  struct zx_ds_RetrievalMethod_s* RetrievalMethod;	/* {0,-1} nada */
  struct zx_ds_X509Data_s* X509Data;	/* {0,-1} nada */
  struct zx_ds_PGPData_s* PGPData;	/* {0,-1} nada */
  struct zx_ds_SPKIData_s* SPKIData;	/* {0,-1} nada */
  struct zx_elem_s* MgmtData;	/* {0,-1} xs:string */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ds_KeyInfo_GET_Id(struct zx_ds_KeyInfo_s* x);

struct zx_elem_s* zx_ds_KeyInfo_GET_KeyName(struct zx_ds_KeyInfo_s* x, int n);
struct zx_ds_KeyValue_s* zx_ds_KeyInfo_GET_KeyValue(struct zx_ds_KeyInfo_s* x, int n);
struct zx_ds_RetrievalMethod_s* zx_ds_KeyInfo_GET_RetrievalMethod(struct zx_ds_KeyInfo_s* x, int n);
struct zx_ds_X509Data_s* zx_ds_KeyInfo_GET_X509Data(struct zx_ds_KeyInfo_s* x, int n);
struct zx_ds_PGPData_s* zx_ds_KeyInfo_GET_PGPData(struct zx_ds_KeyInfo_s* x, int n);
struct zx_ds_SPKIData_s* zx_ds_KeyInfo_GET_SPKIData(struct zx_ds_KeyInfo_s* x, int n);
struct zx_elem_s* zx_ds_KeyInfo_GET_MgmtData(struct zx_ds_KeyInfo_s* x, int n);

int zx_ds_KeyInfo_NUM_KeyName(struct zx_ds_KeyInfo_s* x);
int zx_ds_KeyInfo_NUM_KeyValue(struct zx_ds_KeyInfo_s* x);
int zx_ds_KeyInfo_NUM_RetrievalMethod(struct zx_ds_KeyInfo_s* x);
int zx_ds_KeyInfo_NUM_X509Data(struct zx_ds_KeyInfo_s* x);
int zx_ds_KeyInfo_NUM_PGPData(struct zx_ds_KeyInfo_s* x);
int zx_ds_KeyInfo_NUM_SPKIData(struct zx_ds_KeyInfo_s* x);
int zx_ds_KeyInfo_NUM_MgmtData(struct zx_ds_KeyInfo_s* x);

struct zx_elem_s* zx_ds_KeyInfo_POP_KeyName(struct zx_ds_KeyInfo_s* x);
struct zx_ds_KeyValue_s* zx_ds_KeyInfo_POP_KeyValue(struct zx_ds_KeyInfo_s* x);
struct zx_ds_RetrievalMethod_s* zx_ds_KeyInfo_POP_RetrievalMethod(struct zx_ds_KeyInfo_s* x);
struct zx_ds_X509Data_s* zx_ds_KeyInfo_POP_X509Data(struct zx_ds_KeyInfo_s* x);
struct zx_ds_PGPData_s* zx_ds_KeyInfo_POP_PGPData(struct zx_ds_KeyInfo_s* x);
struct zx_ds_SPKIData_s* zx_ds_KeyInfo_POP_SPKIData(struct zx_ds_KeyInfo_s* x);
struct zx_elem_s* zx_ds_KeyInfo_POP_MgmtData(struct zx_ds_KeyInfo_s* x);

void zx_ds_KeyInfo_PUSH_KeyName(struct zx_ds_KeyInfo_s* x, struct zx_elem_s* y);
void zx_ds_KeyInfo_PUSH_KeyValue(struct zx_ds_KeyInfo_s* x, struct zx_ds_KeyValue_s* y);
void zx_ds_KeyInfo_PUSH_RetrievalMethod(struct zx_ds_KeyInfo_s* x, struct zx_ds_RetrievalMethod_s* y);
void zx_ds_KeyInfo_PUSH_X509Data(struct zx_ds_KeyInfo_s* x, struct zx_ds_X509Data_s* y);
void zx_ds_KeyInfo_PUSH_PGPData(struct zx_ds_KeyInfo_s* x, struct zx_ds_PGPData_s* y);
void zx_ds_KeyInfo_PUSH_SPKIData(struct zx_ds_KeyInfo_s* x, struct zx_ds_SPKIData_s* y);
void zx_ds_KeyInfo_PUSH_MgmtData(struct zx_ds_KeyInfo_s* x, struct zx_elem_s* y);

void zx_ds_KeyInfo_PUT_Id(struct zx_ds_KeyInfo_s* x, struct zx_str* y);

void zx_ds_KeyInfo_PUT_KeyName(struct zx_ds_KeyInfo_s* x, int n, struct zx_elem_s* y);
void zx_ds_KeyInfo_PUT_KeyValue(struct zx_ds_KeyInfo_s* x, int n, struct zx_ds_KeyValue_s* y);
void zx_ds_KeyInfo_PUT_RetrievalMethod(struct zx_ds_KeyInfo_s* x, int n, struct zx_ds_RetrievalMethod_s* y);
void zx_ds_KeyInfo_PUT_X509Data(struct zx_ds_KeyInfo_s* x, int n, struct zx_ds_X509Data_s* y);
void zx_ds_KeyInfo_PUT_PGPData(struct zx_ds_KeyInfo_s* x, int n, struct zx_ds_PGPData_s* y);
void zx_ds_KeyInfo_PUT_SPKIData(struct zx_ds_KeyInfo_s* x, int n, struct zx_ds_SPKIData_s* y);
void zx_ds_KeyInfo_PUT_MgmtData(struct zx_ds_KeyInfo_s* x, int n, struct zx_elem_s* y);

void zx_ds_KeyInfo_ADD_KeyName(struct zx_ds_KeyInfo_s* x, int n, struct zx_elem_s* z);
void zx_ds_KeyInfo_ADD_KeyValue(struct zx_ds_KeyInfo_s* x, int n, struct zx_ds_KeyValue_s* z);
void zx_ds_KeyInfo_ADD_RetrievalMethod(struct zx_ds_KeyInfo_s* x, int n, struct zx_ds_RetrievalMethod_s* z);
void zx_ds_KeyInfo_ADD_X509Data(struct zx_ds_KeyInfo_s* x, int n, struct zx_ds_X509Data_s* z);
void zx_ds_KeyInfo_ADD_PGPData(struct zx_ds_KeyInfo_s* x, int n, struct zx_ds_PGPData_s* z);
void zx_ds_KeyInfo_ADD_SPKIData(struct zx_ds_KeyInfo_s* x, int n, struct zx_ds_SPKIData_s* z);
void zx_ds_KeyInfo_ADD_MgmtData(struct zx_ds_KeyInfo_s* x, int n, struct zx_elem_s* z);

void zx_ds_KeyInfo_DEL_KeyName(struct zx_ds_KeyInfo_s* x, int n);
void zx_ds_KeyInfo_DEL_KeyValue(struct zx_ds_KeyInfo_s* x, int n);
void zx_ds_KeyInfo_DEL_RetrievalMethod(struct zx_ds_KeyInfo_s* x, int n);
void zx_ds_KeyInfo_DEL_X509Data(struct zx_ds_KeyInfo_s* x, int n);
void zx_ds_KeyInfo_DEL_PGPData(struct zx_ds_KeyInfo_s* x, int n);
void zx_ds_KeyInfo_DEL_SPKIData(struct zx_ds_KeyInfo_s* x, int n);
void zx_ds_KeyInfo_DEL_MgmtData(struct zx_ds_KeyInfo_s* x, int n);

void zx_ds_KeyInfo_REV_KeyName(struct zx_ds_KeyInfo_s* x);
void zx_ds_KeyInfo_REV_KeyValue(struct zx_ds_KeyInfo_s* x);
void zx_ds_KeyInfo_REV_RetrievalMethod(struct zx_ds_KeyInfo_s* x);
void zx_ds_KeyInfo_REV_X509Data(struct zx_ds_KeyInfo_s* x);
void zx_ds_KeyInfo_REV_PGPData(struct zx_ds_KeyInfo_s* x);
void zx_ds_KeyInfo_REV_SPKIData(struct zx_ds_KeyInfo_s* x);
void zx_ds_KeyInfo_REV_MgmtData(struct zx_ds_KeyInfo_s* x);

#endif
/* -------------------------- ds_KeyValue -------------------------- */
/* refby( zx_ds_KeyInfo_s zx_xenc_OriginatorKeyInfo_s zx_xenc_RecipientKeyInfo_s ) */
#ifndef zx_ds_KeyValue_EXT
#define zx_ds_KeyValue_EXT
#endif

struct zx_ds_KeyValue_s* zx_DEC_ds_KeyValue(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ds_KeyValue_s* zx_NEW_ds_KeyValue(struct zx_ctx* c);
void zx_FREE_ds_KeyValue(struct zx_ctx* c, struct zx_ds_KeyValue_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ds_KeyValue_s* zx_DEEP_CLONE_ds_KeyValue(struct zx_ctx* c, struct zx_ds_KeyValue_s* x, int dup_strs);
void zx_DUP_STRS_ds_KeyValue(struct zx_ctx* c, struct zx_ds_KeyValue_s* x);
int zx_WALK_SO_ds_KeyValue(struct zx_ctx* c, struct zx_ds_KeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_KeyValue(struct zx_ctx* c, struct zx_ds_KeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ds_KeyValue(struct zx_ctx* c, struct zx_ds_KeyValue_s* x);
int zx_LEN_WO_ds_KeyValue(struct zx_ctx* c, struct zx_ds_KeyValue_s* x);
char* zx_ENC_SO_ds_KeyValue(struct zx_ctx* c, struct zx_ds_KeyValue_s* x, char* p);
char* zx_ENC_WO_ds_KeyValue(struct zx_ctx* c, struct zx_ds_KeyValue_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ds_KeyValue(struct zx_ctx* c, struct zx_ds_KeyValue_s* x);
struct zx_str* zx_EASY_ENC_WO_ds_KeyValue(struct zx_ctx* c, struct zx_ds_KeyValue_s* x);

struct zx_ds_KeyValue_s {
  ZX_ELEM_EXT
  zx_ds_KeyValue_EXT
  struct zx_ds_DSAKeyValue_s* DSAKeyValue;	/* {0,1} nada */
  struct zx_ds_RSAKeyValue_s* RSAKeyValue;	/* {0,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_ds_DSAKeyValue_s* zx_ds_KeyValue_GET_DSAKeyValue(struct zx_ds_KeyValue_s* x, int n);
struct zx_ds_RSAKeyValue_s* zx_ds_KeyValue_GET_RSAKeyValue(struct zx_ds_KeyValue_s* x, int n);

int zx_ds_KeyValue_NUM_DSAKeyValue(struct zx_ds_KeyValue_s* x);
int zx_ds_KeyValue_NUM_RSAKeyValue(struct zx_ds_KeyValue_s* x);

struct zx_ds_DSAKeyValue_s* zx_ds_KeyValue_POP_DSAKeyValue(struct zx_ds_KeyValue_s* x);
struct zx_ds_RSAKeyValue_s* zx_ds_KeyValue_POP_RSAKeyValue(struct zx_ds_KeyValue_s* x);

void zx_ds_KeyValue_PUSH_DSAKeyValue(struct zx_ds_KeyValue_s* x, struct zx_ds_DSAKeyValue_s* y);
void zx_ds_KeyValue_PUSH_RSAKeyValue(struct zx_ds_KeyValue_s* x, struct zx_ds_RSAKeyValue_s* y);


void zx_ds_KeyValue_PUT_DSAKeyValue(struct zx_ds_KeyValue_s* x, int n, struct zx_ds_DSAKeyValue_s* y);
void zx_ds_KeyValue_PUT_RSAKeyValue(struct zx_ds_KeyValue_s* x, int n, struct zx_ds_RSAKeyValue_s* y);

void zx_ds_KeyValue_ADD_DSAKeyValue(struct zx_ds_KeyValue_s* x, int n, struct zx_ds_DSAKeyValue_s* z);
void zx_ds_KeyValue_ADD_RSAKeyValue(struct zx_ds_KeyValue_s* x, int n, struct zx_ds_RSAKeyValue_s* z);

void zx_ds_KeyValue_DEL_DSAKeyValue(struct zx_ds_KeyValue_s* x, int n);
void zx_ds_KeyValue_DEL_RSAKeyValue(struct zx_ds_KeyValue_s* x, int n);

void zx_ds_KeyValue_REV_DSAKeyValue(struct zx_ds_KeyValue_s* x);
void zx_ds_KeyValue_REV_RSAKeyValue(struct zx_ds_KeyValue_s* x);

#endif
/* -------------------------- ds_Manifest -------------------------- */
/* refby( ) */
#ifndef zx_ds_Manifest_EXT
#define zx_ds_Manifest_EXT
#endif

struct zx_ds_Manifest_s* zx_DEC_ds_Manifest(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ds_Manifest_s* zx_NEW_ds_Manifest(struct zx_ctx* c);
void zx_FREE_ds_Manifest(struct zx_ctx* c, struct zx_ds_Manifest_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ds_Manifest_s* zx_DEEP_CLONE_ds_Manifest(struct zx_ctx* c, struct zx_ds_Manifest_s* x, int dup_strs);
void zx_DUP_STRS_ds_Manifest(struct zx_ctx* c, struct zx_ds_Manifest_s* x);
int zx_WALK_SO_ds_Manifest(struct zx_ctx* c, struct zx_ds_Manifest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_Manifest(struct zx_ctx* c, struct zx_ds_Manifest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ds_Manifest(struct zx_ctx* c, struct zx_ds_Manifest_s* x);
int zx_LEN_WO_ds_Manifest(struct zx_ctx* c, struct zx_ds_Manifest_s* x);
char* zx_ENC_SO_ds_Manifest(struct zx_ctx* c, struct zx_ds_Manifest_s* x, char* p);
char* zx_ENC_WO_ds_Manifest(struct zx_ctx* c, struct zx_ds_Manifest_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ds_Manifest(struct zx_ctx* c, struct zx_ds_Manifest_s* x);
struct zx_str* zx_EASY_ENC_WO_ds_Manifest(struct zx_ctx* c, struct zx_ds_Manifest_s* x);

struct zx_ds_Manifest_s {
  ZX_ELEM_EXT
  zx_ds_Manifest_EXT
  struct zx_ds_Reference_s* Reference;	/* {1,-1} nada */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ds_Manifest_GET_Id(struct zx_ds_Manifest_s* x);

struct zx_ds_Reference_s* zx_ds_Manifest_GET_Reference(struct zx_ds_Manifest_s* x, int n);

int zx_ds_Manifest_NUM_Reference(struct zx_ds_Manifest_s* x);

struct zx_ds_Reference_s* zx_ds_Manifest_POP_Reference(struct zx_ds_Manifest_s* x);

void zx_ds_Manifest_PUSH_Reference(struct zx_ds_Manifest_s* x, struct zx_ds_Reference_s* y);

void zx_ds_Manifest_PUT_Id(struct zx_ds_Manifest_s* x, struct zx_str* y);

void zx_ds_Manifest_PUT_Reference(struct zx_ds_Manifest_s* x, int n, struct zx_ds_Reference_s* y);

void zx_ds_Manifest_ADD_Reference(struct zx_ds_Manifest_s* x, int n, struct zx_ds_Reference_s* z);

void zx_ds_Manifest_DEL_Reference(struct zx_ds_Manifest_s* x, int n);

void zx_ds_Manifest_REV_Reference(struct zx_ds_Manifest_s* x);

#endif
/* -------------------------- ds_Object -------------------------- */
/* refby( zx_ds_Signature_s ) */
#ifndef zx_ds_Object_EXT
#define zx_ds_Object_EXT
#endif

struct zx_ds_Object_s* zx_DEC_ds_Object(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ds_Object_s* zx_NEW_ds_Object(struct zx_ctx* c);
void zx_FREE_ds_Object(struct zx_ctx* c, struct zx_ds_Object_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ds_Object_s* zx_DEEP_CLONE_ds_Object(struct zx_ctx* c, struct zx_ds_Object_s* x, int dup_strs);
void zx_DUP_STRS_ds_Object(struct zx_ctx* c, struct zx_ds_Object_s* x);
int zx_WALK_SO_ds_Object(struct zx_ctx* c, struct zx_ds_Object_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_Object(struct zx_ctx* c, struct zx_ds_Object_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ds_Object(struct zx_ctx* c, struct zx_ds_Object_s* x);
int zx_LEN_WO_ds_Object(struct zx_ctx* c, struct zx_ds_Object_s* x);
char* zx_ENC_SO_ds_Object(struct zx_ctx* c, struct zx_ds_Object_s* x, char* p);
char* zx_ENC_WO_ds_Object(struct zx_ctx* c, struct zx_ds_Object_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ds_Object(struct zx_ctx* c, struct zx_ds_Object_s* x);
struct zx_str* zx_EASY_ENC_WO_ds_Object(struct zx_ctx* c, struct zx_ds_Object_s* x);

struct zx_ds_Object_s {
  ZX_ELEM_EXT
  zx_ds_Object_EXT
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* MimeType;	/* {0,1} attribute xs:string */
  struct zx_str* Encoding;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ds_Object_GET_Id(struct zx_ds_Object_s* x);
struct zx_str* zx_ds_Object_GET_MimeType(struct zx_ds_Object_s* x);
struct zx_str* zx_ds_Object_GET_Encoding(struct zx_ds_Object_s* x);





void zx_ds_Object_PUT_Id(struct zx_ds_Object_s* x, struct zx_str* y);
void zx_ds_Object_PUT_MimeType(struct zx_ds_Object_s* x, struct zx_str* y);
void zx_ds_Object_PUT_Encoding(struct zx_ds_Object_s* x, struct zx_str* y);





#endif
/* -------------------------- ds_PGPData -------------------------- */
/* refby( zx_ds_KeyInfo_s zx_xenc_OriginatorKeyInfo_s zx_xenc_RecipientKeyInfo_s ) */
#ifndef zx_ds_PGPData_EXT
#define zx_ds_PGPData_EXT
#endif

struct zx_ds_PGPData_s* zx_DEC_ds_PGPData(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ds_PGPData_s* zx_NEW_ds_PGPData(struct zx_ctx* c);
void zx_FREE_ds_PGPData(struct zx_ctx* c, struct zx_ds_PGPData_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ds_PGPData_s* zx_DEEP_CLONE_ds_PGPData(struct zx_ctx* c, struct zx_ds_PGPData_s* x, int dup_strs);
void zx_DUP_STRS_ds_PGPData(struct zx_ctx* c, struct zx_ds_PGPData_s* x);
int zx_WALK_SO_ds_PGPData(struct zx_ctx* c, struct zx_ds_PGPData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_PGPData(struct zx_ctx* c, struct zx_ds_PGPData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ds_PGPData(struct zx_ctx* c, struct zx_ds_PGPData_s* x);
int zx_LEN_WO_ds_PGPData(struct zx_ctx* c, struct zx_ds_PGPData_s* x);
char* zx_ENC_SO_ds_PGPData(struct zx_ctx* c, struct zx_ds_PGPData_s* x, char* p);
char* zx_ENC_WO_ds_PGPData(struct zx_ctx* c, struct zx_ds_PGPData_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ds_PGPData(struct zx_ctx* c, struct zx_ds_PGPData_s* x);
struct zx_str* zx_EASY_ENC_WO_ds_PGPData(struct zx_ctx* c, struct zx_ds_PGPData_s* x);

struct zx_ds_PGPData_s {
  ZX_ELEM_EXT
  zx_ds_PGPData_EXT
  struct zx_elem_s* PGPKeyID;	/* {0,1} xs:base64Binary */
  struct zx_elem_s* PGPKeyPacket;	/* {0,1} xs:base64Binary */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_ds_PGPData_GET_PGPKeyID(struct zx_ds_PGPData_s* x, int n);
struct zx_elem_s* zx_ds_PGPData_GET_PGPKeyPacket(struct zx_ds_PGPData_s* x, int n);

int zx_ds_PGPData_NUM_PGPKeyID(struct zx_ds_PGPData_s* x);
int zx_ds_PGPData_NUM_PGPKeyPacket(struct zx_ds_PGPData_s* x);

struct zx_elem_s* zx_ds_PGPData_POP_PGPKeyID(struct zx_ds_PGPData_s* x);
struct zx_elem_s* zx_ds_PGPData_POP_PGPKeyPacket(struct zx_ds_PGPData_s* x);

void zx_ds_PGPData_PUSH_PGPKeyID(struct zx_ds_PGPData_s* x, struct zx_elem_s* y);
void zx_ds_PGPData_PUSH_PGPKeyPacket(struct zx_ds_PGPData_s* x, struct zx_elem_s* y);


void zx_ds_PGPData_PUT_PGPKeyID(struct zx_ds_PGPData_s* x, int n, struct zx_elem_s* y);
void zx_ds_PGPData_PUT_PGPKeyPacket(struct zx_ds_PGPData_s* x, int n, struct zx_elem_s* y);

void zx_ds_PGPData_ADD_PGPKeyID(struct zx_ds_PGPData_s* x, int n, struct zx_elem_s* z);
void zx_ds_PGPData_ADD_PGPKeyPacket(struct zx_ds_PGPData_s* x, int n, struct zx_elem_s* z);

void zx_ds_PGPData_DEL_PGPKeyID(struct zx_ds_PGPData_s* x, int n);
void zx_ds_PGPData_DEL_PGPKeyPacket(struct zx_ds_PGPData_s* x, int n);

void zx_ds_PGPData_REV_PGPKeyID(struct zx_ds_PGPData_s* x);
void zx_ds_PGPData_REV_PGPKeyPacket(struct zx_ds_PGPData_s* x);

#endif
/* -------------------------- ds_RSAKeyValue -------------------------- */
/* refby( zx_ds_KeyValue_s ) */
#ifndef zx_ds_RSAKeyValue_EXT
#define zx_ds_RSAKeyValue_EXT
#endif

struct zx_ds_RSAKeyValue_s* zx_DEC_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ds_RSAKeyValue_s* zx_NEW_ds_RSAKeyValue(struct zx_ctx* c);
void zx_FREE_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ds_RSAKeyValue_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ds_RSAKeyValue_s* zx_DEEP_CLONE_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ds_RSAKeyValue_s* x, int dup_strs);
void zx_DUP_STRS_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ds_RSAKeyValue_s* x);
int zx_WALK_SO_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ds_RSAKeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ds_RSAKeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ds_RSAKeyValue_s* x);
int zx_LEN_WO_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ds_RSAKeyValue_s* x);
char* zx_ENC_SO_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ds_RSAKeyValue_s* x, char* p);
char* zx_ENC_WO_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ds_RSAKeyValue_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ds_RSAKeyValue_s* x);
struct zx_str* zx_EASY_ENC_WO_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ds_RSAKeyValue_s* x);

struct zx_ds_RSAKeyValue_s {
  ZX_ELEM_EXT
  zx_ds_RSAKeyValue_EXT
  struct zx_elem_s* Modulus;	/* {1,1} xs:base64Binary */
  struct zx_elem_s* Exponent;	/* {1,1} xs:base64Binary */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_ds_RSAKeyValue_GET_Modulus(struct zx_ds_RSAKeyValue_s* x, int n);
struct zx_elem_s* zx_ds_RSAKeyValue_GET_Exponent(struct zx_ds_RSAKeyValue_s* x, int n);

int zx_ds_RSAKeyValue_NUM_Modulus(struct zx_ds_RSAKeyValue_s* x);
int zx_ds_RSAKeyValue_NUM_Exponent(struct zx_ds_RSAKeyValue_s* x);

struct zx_elem_s* zx_ds_RSAKeyValue_POP_Modulus(struct zx_ds_RSAKeyValue_s* x);
struct zx_elem_s* zx_ds_RSAKeyValue_POP_Exponent(struct zx_ds_RSAKeyValue_s* x);

void zx_ds_RSAKeyValue_PUSH_Modulus(struct zx_ds_RSAKeyValue_s* x, struct zx_elem_s* y);
void zx_ds_RSAKeyValue_PUSH_Exponent(struct zx_ds_RSAKeyValue_s* x, struct zx_elem_s* y);


void zx_ds_RSAKeyValue_PUT_Modulus(struct zx_ds_RSAKeyValue_s* x, int n, struct zx_elem_s* y);
void zx_ds_RSAKeyValue_PUT_Exponent(struct zx_ds_RSAKeyValue_s* x, int n, struct zx_elem_s* y);

void zx_ds_RSAKeyValue_ADD_Modulus(struct zx_ds_RSAKeyValue_s* x, int n, struct zx_elem_s* z);
void zx_ds_RSAKeyValue_ADD_Exponent(struct zx_ds_RSAKeyValue_s* x, int n, struct zx_elem_s* z);

void zx_ds_RSAKeyValue_DEL_Modulus(struct zx_ds_RSAKeyValue_s* x, int n);
void zx_ds_RSAKeyValue_DEL_Exponent(struct zx_ds_RSAKeyValue_s* x, int n);

void zx_ds_RSAKeyValue_REV_Modulus(struct zx_ds_RSAKeyValue_s* x);
void zx_ds_RSAKeyValue_REV_Exponent(struct zx_ds_RSAKeyValue_s* x);

#endif
/* -------------------------- ds_Reference -------------------------- */
/* refby( zx_ds_SignedInfo_s zx_ds_Manifest_s ) */
#ifndef zx_ds_Reference_EXT
#define zx_ds_Reference_EXT
#endif

struct zx_ds_Reference_s* zx_DEC_ds_Reference(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ds_Reference_s* zx_NEW_ds_Reference(struct zx_ctx* c);
void zx_FREE_ds_Reference(struct zx_ctx* c, struct zx_ds_Reference_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ds_Reference_s* zx_DEEP_CLONE_ds_Reference(struct zx_ctx* c, struct zx_ds_Reference_s* x, int dup_strs);
void zx_DUP_STRS_ds_Reference(struct zx_ctx* c, struct zx_ds_Reference_s* x);
int zx_WALK_SO_ds_Reference(struct zx_ctx* c, struct zx_ds_Reference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_Reference(struct zx_ctx* c, struct zx_ds_Reference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ds_Reference(struct zx_ctx* c, struct zx_ds_Reference_s* x);
int zx_LEN_WO_ds_Reference(struct zx_ctx* c, struct zx_ds_Reference_s* x);
char* zx_ENC_SO_ds_Reference(struct zx_ctx* c, struct zx_ds_Reference_s* x, char* p);
char* zx_ENC_WO_ds_Reference(struct zx_ctx* c, struct zx_ds_Reference_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ds_Reference(struct zx_ctx* c, struct zx_ds_Reference_s* x);
struct zx_str* zx_EASY_ENC_WO_ds_Reference(struct zx_ctx* c, struct zx_ds_Reference_s* x);

struct zx_ds_Reference_s {
  ZX_ELEM_EXT
  zx_ds_Reference_EXT
  struct zx_ds_Transforms_s* Transforms;	/* {0,1}  */
  struct zx_ds_DigestMethod_s* DigestMethod;	/* {1,1} nada */
  struct zx_elem_s* DigestValue;	/* {1,1} xs:base64Binary */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* URI;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Type;	/* {0,1} attribute wst:BinarySecretTypeEnum */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ds_Reference_GET_Id(struct zx_ds_Reference_s* x);
struct zx_str* zx_ds_Reference_GET_URI(struct zx_ds_Reference_s* x);
struct zx_str* zx_ds_Reference_GET_Type(struct zx_ds_Reference_s* x);

struct zx_ds_Transforms_s* zx_ds_Reference_GET_Transforms(struct zx_ds_Reference_s* x, int n);
struct zx_ds_DigestMethod_s* zx_ds_Reference_GET_DigestMethod(struct zx_ds_Reference_s* x, int n);
struct zx_elem_s* zx_ds_Reference_GET_DigestValue(struct zx_ds_Reference_s* x, int n);

int zx_ds_Reference_NUM_Transforms(struct zx_ds_Reference_s* x);
int zx_ds_Reference_NUM_DigestMethod(struct zx_ds_Reference_s* x);
int zx_ds_Reference_NUM_DigestValue(struct zx_ds_Reference_s* x);

struct zx_ds_Transforms_s* zx_ds_Reference_POP_Transforms(struct zx_ds_Reference_s* x);
struct zx_ds_DigestMethod_s* zx_ds_Reference_POP_DigestMethod(struct zx_ds_Reference_s* x);
struct zx_elem_s* zx_ds_Reference_POP_DigestValue(struct zx_ds_Reference_s* x);

void zx_ds_Reference_PUSH_Transforms(struct zx_ds_Reference_s* x, struct zx_ds_Transforms_s* y);
void zx_ds_Reference_PUSH_DigestMethod(struct zx_ds_Reference_s* x, struct zx_ds_DigestMethod_s* y);
void zx_ds_Reference_PUSH_DigestValue(struct zx_ds_Reference_s* x, struct zx_elem_s* y);

void zx_ds_Reference_PUT_Id(struct zx_ds_Reference_s* x, struct zx_str* y);
void zx_ds_Reference_PUT_URI(struct zx_ds_Reference_s* x, struct zx_str* y);
void zx_ds_Reference_PUT_Type(struct zx_ds_Reference_s* x, struct zx_str* y);

void zx_ds_Reference_PUT_Transforms(struct zx_ds_Reference_s* x, int n, struct zx_ds_Transforms_s* y);
void zx_ds_Reference_PUT_DigestMethod(struct zx_ds_Reference_s* x, int n, struct zx_ds_DigestMethod_s* y);
void zx_ds_Reference_PUT_DigestValue(struct zx_ds_Reference_s* x, int n, struct zx_elem_s* y);

void zx_ds_Reference_ADD_Transforms(struct zx_ds_Reference_s* x, int n, struct zx_ds_Transforms_s* z);
void zx_ds_Reference_ADD_DigestMethod(struct zx_ds_Reference_s* x, int n, struct zx_ds_DigestMethod_s* z);
void zx_ds_Reference_ADD_DigestValue(struct zx_ds_Reference_s* x, int n, struct zx_elem_s* z);

void zx_ds_Reference_DEL_Transforms(struct zx_ds_Reference_s* x, int n);
void zx_ds_Reference_DEL_DigestMethod(struct zx_ds_Reference_s* x, int n);
void zx_ds_Reference_DEL_DigestValue(struct zx_ds_Reference_s* x, int n);

void zx_ds_Reference_REV_Transforms(struct zx_ds_Reference_s* x);
void zx_ds_Reference_REV_DigestMethod(struct zx_ds_Reference_s* x);
void zx_ds_Reference_REV_DigestValue(struct zx_ds_Reference_s* x);

#endif
/* -------------------------- ds_RetrievalMethod -------------------------- */
/* refby( zx_ds_KeyInfo_s zx_xenc_OriginatorKeyInfo_s zx_xenc_RecipientKeyInfo_s ) */
#ifndef zx_ds_RetrievalMethod_EXT
#define zx_ds_RetrievalMethod_EXT
#endif

struct zx_ds_RetrievalMethod_s* zx_DEC_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ds_RetrievalMethod_s* zx_NEW_ds_RetrievalMethod(struct zx_ctx* c);
void zx_FREE_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ds_RetrievalMethod_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ds_RetrievalMethod_s* zx_DEEP_CLONE_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ds_RetrievalMethod_s* x, int dup_strs);
void zx_DUP_STRS_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ds_RetrievalMethod_s* x);
int zx_WALK_SO_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ds_RetrievalMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ds_RetrievalMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ds_RetrievalMethod_s* x);
int zx_LEN_WO_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ds_RetrievalMethod_s* x);
char* zx_ENC_SO_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ds_RetrievalMethod_s* x, char* p);
char* zx_ENC_WO_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ds_RetrievalMethod_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ds_RetrievalMethod_s* x);
struct zx_str* zx_EASY_ENC_WO_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ds_RetrievalMethod_s* x);

struct zx_ds_RetrievalMethod_s {
  ZX_ELEM_EXT
  zx_ds_RetrievalMethod_EXT
  struct zx_ds_Transforms_s* Transforms;	/* {0,1}  */
  struct zx_str* URI;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Type;	/* {0,1} attribute wst:BinarySecretTypeEnum */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ds_RetrievalMethod_GET_URI(struct zx_ds_RetrievalMethod_s* x);
struct zx_str* zx_ds_RetrievalMethod_GET_Type(struct zx_ds_RetrievalMethod_s* x);

struct zx_ds_Transforms_s* zx_ds_RetrievalMethod_GET_Transforms(struct zx_ds_RetrievalMethod_s* x, int n);

int zx_ds_RetrievalMethod_NUM_Transforms(struct zx_ds_RetrievalMethod_s* x);

struct zx_ds_Transforms_s* zx_ds_RetrievalMethod_POP_Transforms(struct zx_ds_RetrievalMethod_s* x);

void zx_ds_RetrievalMethod_PUSH_Transforms(struct zx_ds_RetrievalMethod_s* x, struct zx_ds_Transforms_s* y);

void zx_ds_RetrievalMethod_PUT_URI(struct zx_ds_RetrievalMethod_s* x, struct zx_str* y);
void zx_ds_RetrievalMethod_PUT_Type(struct zx_ds_RetrievalMethod_s* x, struct zx_str* y);

void zx_ds_RetrievalMethod_PUT_Transforms(struct zx_ds_RetrievalMethod_s* x, int n, struct zx_ds_Transforms_s* y);

void zx_ds_RetrievalMethod_ADD_Transforms(struct zx_ds_RetrievalMethod_s* x, int n, struct zx_ds_Transforms_s* z);

void zx_ds_RetrievalMethod_DEL_Transforms(struct zx_ds_RetrievalMethod_s* x, int n);

void zx_ds_RetrievalMethod_REV_Transforms(struct zx_ds_RetrievalMethod_s* x);

#endif
/* -------------------------- ds_SPKIData -------------------------- */
/* refby( zx_ds_KeyInfo_s zx_xenc_OriginatorKeyInfo_s zx_xenc_RecipientKeyInfo_s ) */
#ifndef zx_ds_SPKIData_EXT
#define zx_ds_SPKIData_EXT
#endif

struct zx_ds_SPKIData_s* zx_DEC_ds_SPKIData(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ds_SPKIData_s* zx_NEW_ds_SPKIData(struct zx_ctx* c);
void zx_FREE_ds_SPKIData(struct zx_ctx* c, struct zx_ds_SPKIData_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ds_SPKIData_s* zx_DEEP_CLONE_ds_SPKIData(struct zx_ctx* c, struct zx_ds_SPKIData_s* x, int dup_strs);
void zx_DUP_STRS_ds_SPKIData(struct zx_ctx* c, struct zx_ds_SPKIData_s* x);
int zx_WALK_SO_ds_SPKIData(struct zx_ctx* c, struct zx_ds_SPKIData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_SPKIData(struct zx_ctx* c, struct zx_ds_SPKIData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ds_SPKIData(struct zx_ctx* c, struct zx_ds_SPKIData_s* x);
int zx_LEN_WO_ds_SPKIData(struct zx_ctx* c, struct zx_ds_SPKIData_s* x);
char* zx_ENC_SO_ds_SPKIData(struct zx_ctx* c, struct zx_ds_SPKIData_s* x, char* p);
char* zx_ENC_WO_ds_SPKIData(struct zx_ctx* c, struct zx_ds_SPKIData_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ds_SPKIData(struct zx_ctx* c, struct zx_ds_SPKIData_s* x);
struct zx_str* zx_EASY_ENC_WO_ds_SPKIData(struct zx_ctx* c, struct zx_ds_SPKIData_s* x);

struct zx_ds_SPKIData_s {
  ZX_ELEM_EXT
  zx_ds_SPKIData_EXT
  struct zx_elem_s* SPKISexp;	/* {1,1} xs:base64Binary */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_ds_SPKIData_GET_SPKISexp(struct zx_ds_SPKIData_s* x, int n);

int zx_ds_SPKIData_NUM_SPKISexp(struct zx_ds_SPKIData_s* x);

struct zx_elem_s* zx_ds_SPKIData_POP_SPKISexp(struct zx_ds_SPKIData_s* x);

void zx_ds_SPKIData_PUSH_SPKISexp(struct zx_ds_SPKIData_s* x, struct zx_elem_s* y);


void zx_ds_SPKIData_PUT_SPKISexp(struct zx_ds_SPKIData_s* x, int n, struct zx_elem_s* y);

void zx_ds_SPKIData_ADD_SPKISexp(struct zx_ds_SPKIData_s* x, int n, struct zx_elem_s* z);

void zx_ds_SPKIData_DEL_SPKISexp(struct zx_ds_SPKIData_s* x, int n);

void zx_ds_SPKIData_REV_SPKISexp(struct zx_ds_SPKIData_s* x);

#endif
/* -------------------------- ds_Signature -------------------------- */
/* refby( zx_ff12_NameIdentifierMappingResponse_s zx_ff12_RegisterNameIdentifierRequest_s zx_md_AffiliationDescriptor_s zx_m20_EntityDescriptor_s zx_sp_ArtifactResolve_s zx_sp11_Request_s zx_md_EntityDescriptor_s zx_sp_SubjectQuery_s zx_prov_PMDescriptor_s zx_wsse_Security_s zx_md_PDPDescriptor_s zx_m20_SPDescriptor_s zx_sp_AuthnRequest_s zx_ff12_LogoutResponse_s zx_sp_NameIDMappingResponse_s zx_sa11_Assertion_s zx_xasp_XACMLPolicyQuery_s zx_sp_NameIDMappingRequest_s zx_sa_Assertion_s zx_sp_AuthnQuery_s zx_md_RoleDescriptor_s zx_is_InteractionStatement_s zx_sec12_ProxyInfoConfirmationData_s zx_ff12_FederationTerminationNotification_s zx_xasp_XACMLAuthzDecisionQuery_s zx_ff12_NameIdentifierMappingRequest_s zx_sp_AuthzDecisionQuery_s zx_ff12_Assertion_s zx_sp_AttributeQuery_s zx_sp_ManageNameIDResponse_s zx_ff12_LogoutRequest_s zx_sp_AssertionIDRequest_s zx_md_SPSSODescriptor_s zx_md_AuthnAuthorityDescriptor_s zx_sp11_Response_s zx_m20_AffiliationDescriptor_s zx_md_AttributeAuthorityDescriptor_s zx_ff12_AuthnResponse_s zx_md_IDPSSODescriptor_s zx_m20_IDPDescriptor_s zx_is12_InteractionStatement_s zx_ff12_AuthnRequest_s zx_ff12_RegisterNameIdentifierResponse_s zx_sp_LogoutRequest_s zx_sp_ArtifactResponse_s zx_prov_ProvisioningHandle_s zx_md_EntitiesDescriptor_s zx_sp_LogoutResponse_s zx_sp_Response_s zx_sp_ManageNameIDRequest_s ) */
#ifndef zx_ds_Signature_EXT
#define zx_ds_Signature_EXT
#endif

struct zx_ds_Signature_s* zx_DEC_ds_Signature(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ds_Signature_s* zx_NEW_ds_Signature(struct zx_ctx* c);
void zx_FREE_ds_Signature(struct zx_ctx* c, struct zx_ds_Signature_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ds_Signature_s* zx_DEEP_CLONE_ds_Signature(struct zx_ctx* c, struct zx_ds_Signature_s* x, int dup_strs);
void zx_DUP_STRS_ds_Signature(struct zx_ctx* c, struct zx_ds_Signature_s* x);
int zx_WALK_SO_ds_Signature(struct zx_ctx* c, struct zx_ds_Signature_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_Signature(struct zx_ctx* c, struct zx_ds_Signature_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ds_Signature(struct zx_ctx* c, struct zx_ds_Signature_s* x);
int zx_LEN_WO_ds_Signature(struct zx_ctx* c, struct zx_ds_Signature_s* x);
char* zx_ENC_SO_ds_Signature(struct zx_ctx* c, struct zx_ds_Signature_s* x, char* p);
char* zx_ENC_WO_ds_Signature(struct zx_ctx* c, struct zx_ds_Signature_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ds_Signature(struct zx_ctx* c, struct zx_ds_Signature_s* x);
struct zx_str* zx_EASY_ENC_WO_ds_Signature(struct zx_ctx* c, struct zx_ds_Signature_s* x);

struct zx_ds_Signature_s {
  ZX_ELEM_EXT
  zx_ds_Signature_EXT
  struct zx_ds_SignedInfo_s* SignedInfo;	/* {1,1} nada */
  struct zx_ds_SignatureValue_s* SignatureValue;	/* {1,1} nada */
  struct zx_ds_KeyInfo_s* KeyInfo;	/* {0,1} nada */
  struct zx_ds_Object_s* Object;	/* {0,-1} nada */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ds_Signature_GET_Id(struct zx_ds_Signature_s* x);

struct zx_ds_SignedInfo_s* zx_ds_Signature_GET_SignedInfo(struct zx_ds_Signature_s* x, int n);
struct zx_ds_SignatureValue_s* zx_ds_Signature_GET_SignatureValue(struct zx_ds_Signature_s* x, int n);
struct zx_ds_KeyInfo_s* zx_ds_Signature_GET_KeyInfo(struct zx_ds_Signature_s* x, int n);
struct zx_ds_Object_s* zx_ds_Signature_GET_Object(struct zx_ds_Signature_s* x, int n);

int zx_ds_Signature_NUM_SignedInfo(struct zx_ds_Signature_s* x);
int zx_ds_Signature_NUM_SignatureValue(struct zx_ds_Signature_s* x);
int zx_ds_Signature_NUM_KeyInfo(struct zx_ds_Signature_s* x);
int zx_ds_Signature_NUM_Object(struct zx_ds_Signature_s* x);

struct zx_ds_SignedInfo_s* zx_ds_Signature_POP_SignedInfo(struct zx_ds_Signature_s* x);
struct zx_ds_SignatureValue_s* zx_ds_Signature_POP_SignatureValue(struct zx_ds_Signature_s* x);
struct zx_ds_KeyInfo_s* zx_ds_Signature_POP_KeyInfo(struct zx_ds_Signature_s* x);
struct zx_ds_Object_s* zx_ds_Signature_POP_Object(struct zx_ds_Signature_s* x);

void zx_ds_Signature_PUSH_SignedInfo(struct zx_ds_Signature_s* x, struct zx_ds_SignedInfo_s* y);
void zx_ds_Signature_PUSH_SignatureValue(struct zx_ds_Signature_s* x, struct zx_ds_SignatureValue_s* y);
void zx_ds_Signature_PUSH_KeyInfo(struct zx_ds_Signature_s* x, struct zx_ds_KeyInfo_s* y);
void zx_ds_Signature_PUSH_Object(struct zx_ds_Signature_s* x, struct zx_ds_Object_s* y);

void zx_ds_Signature_PUT_Id(struct zx_ds_Signature_s* x, struct zx_str* y);

void zx_ds_Signature_PUT_SignedInfo(struct zx_ds_Signature_s* x, int n, struct zx_ds_SignedInfo_s* y);
void zx_ds_Signature_PUT_SignatureValue(struct zx_ds_Signature_s* x, int n, struct zx_ds_SignatureValue_s* y);
void zx_ds_Signature_PUT_KeyInfo(struct zx_ds_Signature_s* x, int n, struct zx_ds_KeyInfo_s* y);
void zx_ds_Signature_PUT_Object(struct zx_ds_Signature_s* x, int n, struct zx_ds_Object_s* y);

void zx_ds_Signature_ADD_SignedInfo(struct zx_ds_Signature_s* x, int n, struct zx_ds_SignedInfo_s* z);
void zx_ds_Signature_ADD_SignatureValue(struct zx_ds_Signature_s* x, int n, struct zx_ds_SignatureValue_s* z);
void zx_ds_Signature_ADD_KeyInfo(struct zx_ds_Signature_s* x, int n, struct zx_ds_KeyInfo_s* z);
void zx_ds_Signature_ADD_Object(struct zx_ds_Signature_s* x, int n, struct zx_ds_Object_s* z);

void zx_ds_Signature_DEL_SignedInfo(struct zx_ds_Signature_s* x, int n);
void zx_ds_Signature_DEL_SignatureValue(struct zx_ds_Signature_s* x, int n);
void zx_ds_Signature_DEL_KeyInfo(struct zx_ds_Signature_s* x, int n);
void zx_ds_Signature_DEL_Object(struct zx_ds_Signature_s* x, int n);

void zx_ds_Signature_REV_SignedInfo(struct zx_ds_Signature_s* x);
void zx_ds_Signature_REV_SignatureValue(struct zx_ds_Signature_s* x);
void zx_ds_Signature_REV_KeyInfo(struct zx_ds_Signature_s* x);
void zx_ds_Signature_REV_Object(struct zx_ds_Signature_s* x);

#endif
/* -------------------------- ds_SignatureMethod -------------------------- */
/* refby( zx_ds_SignedInfo_s ) */
#ifndef zx_ds_SignatureMethod_EXT
#define zx_ds_SignatureMethod_EXT
#endif

struct zx_ds_SignatureMethod_s* zx_DEC_ds_SignatureMethod(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ds_SignatureMethod_s* zx_NEW_ds_SignatureMethod(struct zx_ctx* c);
void zx_FREE_ds_SignatureMethod(struct zx_ctx* c, struct zx_ds_SignatureMethod_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ds_SignatureMethod_s* zx_DEEP_CLONE_ds_SignatureMethod(struct zx_ctx* c, struct zx_ds_SignatureMethod_s* x, int dup_strs);
void zx_DUP_STRS_ds_SignatureMethod(struct zx_ctx* c, struct zx_ds_SignatureMethod_s* x);
int zx_WALK_SO_ds_SignatureMethod(struct zx_ctx* c, struct zx_ds_SignatureMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_SignatureMethod(struct zx_ctx* c, struct zx_ds_SignatureMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ds_SignatureMethod(struct zx_ctx* c, struct zx_ds_SignatureMethod_s* x);
int zx_LEN_WO_ds_SignatureMethod(struct zx_ctx* c, struct zx_ds_SignatureMethod_s* x);
char* zx_ENC_SO_ds_SignatureMethod(struct zx_ctx* c, struct zx_ds_SignatureMethod_s* x, char* p);
char* zx_ENC_WO_ds_SignatureMethod(struct zx_ctx* c, struct zx_ds_SignatureMethod_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ds_SignatureMethod(struct zx_ctx* c, struct zx_ds_SignatureMethod_s* x);
struct zx_str* zx_EASY_ENC_WO_ds_SignatureMethod(struct zx_ctx* c, struct zx_ds_SignatureMethod_s* x);

struct zx_ds_SignatureMethod_s {
  ZX_ELEM_EXT
  zx_ds_SignatureMethod_EXT
  struct zx_elem_s* HMACOutputLength;	/* {0,1} xs:integer */
  struct zx_str* Algorithm;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ds_SignatureMethod_GET_Algorithm(struct zx_ds_SignatureMethod_s* x);

struct zx_elem_s* zx_ds_SignatureMethod_GET_HMACOutputLength(struct zx_ds_SignatureMethod_s* x, int n);

int zx_ds_SignatureMethod_NUM_HMACOutputLength(struct zx_ds_SignatureMethod_s* x);

struct zx_elem_s* zx_ds_SignatureMethod_POP_HMACOutputLength(struct zx_ds_SignatureMethod_s* x);

void zx_ds_SignatureMethod_PUSH_HMACOutputLength(struct zx_ds_SignatureMethod_s* x, struct zx_elem_s* y);

void zx_ds_SignatureMethod_PUT_Algorithm(struct zx_ds_SignatureMethod_s* x, struct zx_str* y);

void zx_ds_SignatureMethod_PUT_HMACOutputLength(struct zx_ds_SignatureMethod_s* x, int n, struct zx_elem_s* y);

void zx_ds_SignatureMethod_ADD_HMACOutputLength(struct zx_ds_SignatureMethod_s* x, int n, struct zx_elem_s* z);

void zx_ds_SignatureMethod_DEL_HMACOutputLength(struct zx_ds_SignatureMethod_s* x, int n);

void zx_ds_SignatureMethod_REV_HMACOutputLength(struct zx_ds_SignatureMethod_s* x);

#endif
/* -------------------------- ds_SignatureProperties -------------------------- */
/* refby( ) */
#ifndef zx_ds_SignatureProperties_EXT
#define zx_ds_SignatureProperties_EXT
#endif

struct zx_ds_SignatureProperties_s* zx_DEC_ds_SignatureProperties(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ds_SignatureProperties_s* zx_NEW_ds_SignatureProperties(struct zx_ctx* c);
void zx_FREE_ds_SignatureProperties(struct zx_ctx* c, struct zx_ds_SignatureProperties_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ds_SignatureProperties_s* zx_DEEP_CLONE_ds_SignatureProperties(struct zx_ctx* c, struct zx_ds_SignatureProperties_s* x, int dup_strs);
void zx_DUP_STRS_ds_SignatureProperties(struct zx_ctx* c, struct zx_ds_SignatureProperties_s* x);
int zx_WALK_SO_ds_SignatureProperties(struct zx_ctx* c, struct zx_ds_SignatureProperties_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_SignatureProperties(struct zx_ctx* c, struct zx_ds_SignatureProperties_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ds_SignatureProperties(struct zx_ctx* c, struct zx_ds_SignatureProperties_s* x);
int zx_LEN_WO_ds_SignatureProperties(struct zx_ctx* c, struct zx_ds_SignatureProperties_s* x);
char* zx_ENC_SO_ds_SignatureProperties(struct zx_ctx* c, struct zx_ds_SignatureProperties_s* x, char* p);
char* zx_ENC_WO_ds_SignatureProperties(struct zx_ctx* c, struct zx_ds_SignatureProperties_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ds_SignatureProperties(struct zx_ctx* c, struct zx_ds_SignatureProperties_s* x);
struct zx_str* zx_EASY_ENC_WO_ds_SignatureProperties(struct zx_ctx* c, struct zx_ds_SignatureProperties_s* x);

struct zx_ds_SignatureProperties_s {
  ZX_ELEM_EXT
  zx_ds_SignatureProperties_EXT
  struct zx_ds_SignatureProperty_s* SignatureProperty;	/* {1,-1} nada */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ds_SignatureProperties_GET_Id(struct zx_ds_SignatureProperties_s* x);

struct zx_ds_SignatureProperty_s* zx_ds_SignatureProperties_GET_SignatureProperty(struct zx_ds_SignatureProperties_s* x, int n);

int zx_ds_SignatureProperties_NUM_SignatureProperty(struct zx_ds_SignatureProperties_s* x);

struct zx_ds_SignatureProperty_s* zx_ds_SignatureProperties_POP_SignatureProperty(struct zx_ds_SignatureProperties_s* x);

void zx_ds_SignatureProperties_PUSH_SignatureProperty(struct zx_ds_SignatureProperties_s* x, struct zx_ds_SignatureProperty_s* y);

void zx_ds_SignatureProperties_PUT_Id(struct zx_ds_SignatureProperties_s* x, struct zx_str* y);

void zx_ds_SignatureProperties_PUT_SignatureProperty(struct zx_ds_SignatureProperties_s* x, int n, struct zx_ds_SignatureProperty_s* y);

void zx_ds_SignatureProperties_ADD_SignatureProperty(struct zx_ds_SignatureProperties_s* x, int n, struct zx_ds_SignatureProperty_s* z);

void zx_ds_SignatureProperties_DEL_SignatureProperty(struct zx_ds_SignatureProperties_s* x, int n);

void zx_ds_SignatureProperties_REV_SignatureProperty(struct zx_ds_SignatureProperties_s* x);

#endif
/* -------------------------- ds_SignatureProperty -------------------------- */
/* refby( zx_ds_SignatureProperties_s ) */
#ifndef zx_ds_SignatureProperty_EXT
#define zx_ds_SignatureProperty_EXT
#endif

struct zx_ds_SignatureProperty_s* zx_DEC_ds_SignatureProperty(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ds_SignatureProperty_s* zx_NEW_ds_SignatureProperty(struct zx_ctx* c);
void zx_FREE_ds_SignatureProperty(struct zx_ctx* c, struct zx_ds_SignatureProperty_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ds_SignatureProperty_s* zx_DEEP_CLONE_ds_SignatureProperty(struct zx_ctx* c, struct zx_ds_SignatureProperty_s* x, int dup_strs);
void zx_DUP_STRS_ds_SignatureProperty(struct zx_ctx* c, struct zx_ds_SignatureProperty_s* x);
int zx_WALK_SO_ds_SignatureProperty(struct zx_ctx* c, struct zx_ds_SignatureProperty_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_SignatureProperty(struct zx_ctx* c, struct zx_ds_SignatureProperty_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ds_SignatureProperty(struct zx_ctx* c, struct zx_ds_SignatureProperty_s* x);
int zx_LEN_WO_ds_SignatureProperty(struct zx_ctx* c, struct zx_ds_SignatureProperty_s* x);
char* zx_ENC_SO_ds_SignatureProperty(struct zx_ctx* c, struct zx_ds_SignatureProperty_s* x, char* p);
char* zx_ENC_WO_ds_SignatureProperty(struct zx_ctx* c, struct zx_ds_SignatureProperty_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ds_SignatureProperty(struct zx_ctx* c, struct zx_ds_SignatureProperty_s* x);
struct zx_str* zx_EASY_ENC_WO_ds_SignatureProperty(struct zx_ctx* c, struct zx_ds_SignatureProperty_s* x);

struct zx_ds_SignatureProperty_s {
  ZX_ELEM_EXT
  zx_ds_SignatureProperty_EXT
  struct zx_str* Target;	/* {1,1} attribute xs:anyURI */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ds_SignatureProperty_GET_Target(struct zx_ds_SignatureProperty_s* x);
struct zx_str* zx_ds_SignatureProperty_GET_Id(struct zx_ds_SignatureProperty_s* x);





void zx_ds_SignatureProperty_PUT_Target(struct zx_ds_SignatureProperty_s* x, struct zx_str* y);
void zx_ds_SignatureProperty_PUT_Id(struct zx_ds_SignatureProperty_s* x, struct zx_str* y);





#endif
/* -------------------------- ds_SignatureValue -------------------------- */
/* refby( zx_ds_Signature_s ) */
#ifndef zx_ds_SignatureValue_EXT
#define zx_ds_SignatureValue_EXT
#endif

struct zx_ds_SignatureValue_s* zx_DEC_ds_SignatureValue(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ds_SignatureValue_s* zx_NEW_ds_SignatureValue(struct zx_ctx* c);
void zx_FREE_ds_SignatureValue(struct zx_ctx* c, struct zx_ds_SignatureValue_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ds_SignatureValue_s* zx_DEEP_CLONE_ds_SignatureValue(struct zx_ctx* c, struct zx_ds_SignatureValue_s* x, int dup_strs);
void zx_DUP_STRS_ds_SignatureValue(struct zx_ctx* c, struct zx_ds_SignatureValue_s* x);
int zx_WALK_SO_ds_SignatureValue(struct zx_ctx* c, struct zx_ds_SignatureValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_SignatureValue(struct zx_ctx* c, struct zx_ds_SignatureValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ds_SignatureValue(struct zx_ctx* c, struct zx_ds_SignatureValue_s* x);
int zx_LEN_WO_ds_SignatureValue(struct zx_ctx* c, struct zx_ds_SignatureValue_s* x);
char* zx_ENC_SO_ds_SignatureValue(struct zx_ctx* c, struct zx_ds_SignatureValue_s* x, char* p);
char* zx_ENC_WO_ds_SignatureValue(struct zx_ctx* c, struct zx_ds_SignatureValue_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ds_SignatureValue(struct zx_ctx* c, struct zx_ds_SignatureValue_s* x);
struct zx_str* zx_EASY_ENC_WO_ds_SignatureValue(struct zx_ctx* c, struct zx_ds_SignatureValue_s* x);

struct zx_ds_SignatureValue_s {
  ZX_ELEM_EXT
  zx_ds_SignatureValue_EXT
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ds_SignatureValue_GET_Id(struct zx_ds_SignatureValue_s* x);





void zx_ds_SignatureValue_PUT_Id(struct zx_ds_SignatureValue_s* x, struct zx_str* y);





#endif
/* -------------------------- ds_SignedInfo -------------------------- */
/* refby( zx_ds_Signature_s ) */
#ifndef zx_ds_SignedInfo_EXT
#define zx_ds_SignedInfo_EXT
#endif

struct zx_ds_SignedInfo_s* zx_DEC_ds_SignedInfo(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ds_SignedInfo_s* zx_NEW_ds_SignedInfo(struct zx_ctx* c);
void zx_FREE_ds_SignedInfo(struct zx_ctx* c, struct zx_ds_SignedInfo_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ds_SignedInfo_s* zx_DEEP_CLONE_ds_SignedInfo(struct zx_ctx* c, struct zx_ds_SignedInfo_s* x, int dup_strs);
void zx_DUP_STRS_ds_SignedInfo(struct zx_ctx* c, struct zx_ds_SignedInfo_s* x);
int zx_WALK_SO_ds_SignedInfo(struct zx_ctx* c, struct zx_ds_SignedInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_SignedInfo(struct zx_ctx* c, struct zx_ds_SignedInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ds_SignedInfo(struct zx_ctx* c, struct zx_ds_SignedInfo_s* x);
int zx_LEN_WO_ds_SignedInfo(struct zx_ctx* c, struct zx_ds_SignedInfo_s* x);
char* zx_ENC_SO_ds_SignedInfo(struct zx_ctx* c, struct zx_ds_SignedInfo_s* x, char* p);
char* zx_ENC_WO_ds_SignedInfo(struct zx_ctx* c, struct zx_ds_SignedInfo_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ds_SignedInfo(struct zx_ctx* c, struct zx_ds_SignedInfo_s* x);
struct zx_str* zx_EASY_ENC_WO_ds_SignedInfo(struct zx_ctx* c, struct zx_ds_SignedInfo_s* x);

struct zx_ds_SignedInfo_s {
  ZX_ELEM_EXT
  zx_ds_SignedInfo_EXT
  struct zx_ds_CanonicalizationMethod_s* CanonicalizationMethod;	/* {1,1} nada */
  struct zx_ds_SignatureMethod_s* SignatureMethod;	/* {1,1} nada */
  struct zx_ds_Reference_s* Reference;	/* {1,-1} nada */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ds_SignedInfo_GET_Id(struct zx_ds_SignedInfo_s* x);

struct zx_ds_CanonicalizationMethod_s* zx_ds_SignedInfo_GET_CanonicalizationMethod(struct zx_ds_SignedInfo_s* x, int n);
struct zx_ds_SignatureMethod_s* zx_ds_SignedInfo_GET_SignatureMethod(struct zx_ds_SignedInfo_s* x, int n);
struct zx_ds_Reference_s* zx_ds_SignedInfo_GET_Reference(struct zx_ds_SignedInfo_s* x, int n);

int zx_ds_SignedInfo_NUM_CanonicalizationMethod(struct zx_ds_SignedInfo_s* x);
int zx_ds_SignedInfo_NUM_SignatureMethod(struct zx_ds_SignedInfo_s* x);
int zx_ds_SignedInfo_NUM_Reference(struct zx_ds_SignedInfo_s* x);

struct zx_ds_CanonicalizationMethod_s* zx_ds_SignedInfo_POP_CanonicalizationMethod(struct zx_ds_SignedInfo_s* x);
struct zx_ds_SignatureMethod_s* zx_ds_SignedInfo_POP_SignatureMethod(struct zx_ds_SignedInfo_s* x);
struct zx_ds_Reference_s* zx_ds_SignedInfo_POP_Reference(struct zx_ds_SignedInfo_s* x);

void zx_ds_SignedInfo_PUSH_CanonicalizationMethod(struct zx_ds_SignedInfo_s* x, struct zx_ds_CanonicalizationMethod_s* y);
void zx_ds_SignedInfo_PUSH_SignatureMethod(struct zx_ds_SignedInfo_s* x, struct zx_ds_SignatureMethod_s* y);
void zx_ds_SignedInfo_PUSH_Reference(struct zx_ds_SignedInfo_s* x, struct zx_ds_Reference_s* y);

void zx_ds_SignedInfo_PUT_Id(struct zx_ds_SignedInfo_s* x, struct zx_str* y);

void zx_ds_SignedInfo_PUT_CanonicalizationMethod(struct zx_ds_SignedInfo_s* x, int n, struct zx_ds_CanonicalizationMethod_s* y);
void zx_ds_SignedInfo_PUT_SignatureMethod(struct zx_ds_SignedInfo_s* x, int n, struct zx_ds_SignatureMethod_s* y);
void zx_ds_SignedInfo_PUT_Reference(struct zx_ds_SignedInfo_s* x, int n, struct zx_ds_Reference_s* y);

void zx_ds_SignedInfo_ADD_CanonicalizationMethod(struct zx_ds_SignedInfo_s* x, int n, struct zx_ds_CanonicalizationMethod_s* z);
void zx_ds_SignedInfo_ADD_SignatureMethod(struct zx_ds_SignedInfo_s* x, int n, struct zx_ds_SignatureMethod_s* z);
void zx_ds_SignedInfo_ADD_Reference(struct zx_ds_SignedInfo_s* x, int n, struct zx_ds_Reference_s* z);

void zx_ds_SignedInfo_DEL_CanonicalizationMethod(struct zx_ds_SignedInfo_s* x, int n);
void zx_ds_SignedInfo_DEL_SignatureMethod(struct zx_ds_SignedInfo_s* x, int n);
void zx_ds_SignedInfo_DEL_Reference(struct zx_ds_SignedInfo_s* x, int n);

void zx_ds_SignedInfo_REV_CanonicalizationMethod(struct zx_ds_SignedInfo_s* x);
void zx_ds_SignedInfo_REV_SignatureMethod(struct zx_ds_SignedInfo_s* x);
void zx_ds_SignedInfo_REV_Reference(struct zx_ds_SignedInfo_s* x);

#endif
/* -------------------------- ds_Transform -------------------------- */
/* refby( zx_xenc_Transforms_s zx_ds_Transforms_s ) */
#ifndef zx_ds_Transform_EXT
#define zx_ds_Transform_EXT
#endif

struct zx_ds_Transform_s* zx_DEC_ds_Transform(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ds_Transform_s* zx_NEW_ds_Transform(struct zx_ctx* c);
void zx_FREE_ds_Transform(struct zx_ctx* c, struct zx_ds_Transform_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ds_Transform_s* zx_DEEP_CLONE_ds_Transform(struct zx_ctx* c, struct zx_ds_Transform_s* x, int dup_strs);
void zx_DUP_STRS_ds_Transform(struct zx_ctx* c, struct zx_ds_Transform_s* x);
int zx_WALK_SO_ds_Transform(struct zx_ctx* c, struct zx_ds_Transform_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_Transform(struct zx_ctx* c, struct zx_ds_Transform_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ds_Transform(struct zx_ctx* c, struct zx_ds_Transform_s* x);
int zx_LEN_WO_ds_Transform(struct zx_ctx* c, struct zx_ds_Transform_s* x);
char* zx_ENC_SO_ds_Transform(struct zx_ctx* c, struct zx_ds_Transform_s* x, char* p);
char* zx_ENC_WO_ds_Transform(struct zx_ctx* c, struct zx_ds_Transform_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ds_Transform(struct zx_ctx* c, struct zx_ds_Transform_s* x);
struct zx_str* zx_EASY_ENC_WO_ds_Transform(struct zx_ctx* c, struct zx_ds_Transform_s* x);

struct zx_ds_Transform_s {
  ZX_ELEM_EXT
  zx_ds_Transform_EXT
  struct zx_elem_s* XPath;	/* {0,-1} xs:string */
  struct zx_exca_InclusiveNamespaces_s* InclusiveNamespaces;	/* {0,1}  */
  struct zx_str* Algorithm;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ds_Transform_GET_Algorithm(struct zx_ds_Transform_s* x);

struct zx_elem_s* zx_ds_Transform_GET_XPath(struct zx_ds_Transform_s* x, int n);
struct zx_exca_InclusiveNamespaces_s* zx_ds_Transform_GET_InclusiveNamespaces(struct zx_ds_Transform_s* x, int n);

int zx_ds_Transform_NUM_XPath(struct zx_ds_Transform_s* x);
int zx_ds_Transform_NUM_InclusiveNamespaces(struct zx_ds_Transform_s* x);

struct zx_elem_s* zx_ds_Transform_POP_XPath(struct zx_ds_Transform_s* x);
struct zx_exca_InclusiveNamespaces_s* zx_ds_Transform_POP_InclusiveNamespaces(struct zx_ds_Transform_s* x);

void zx_ds_Transform_PUSH_XPath(struct zx_ds_Transform_s* x, struct zx_elem_s* y);
void zx_ds_Transform_PUSH_InclusiveNamespaces(struct zx_ds_Transform_s* x, struct zx_exca_InclusiveNamespaces_s* y);

void zx_ds_Transform_PUT_Algorithm(struct zx_ds_Transform_s* x, struct zx_str* y);

void zx_ds_Transform_PUT_XPath(struct zx_ds_Transform_s* x, int n, struct zx_elem_s* y);
void zx_ds_Transform_PUT_InclusiveNamespaces(struct zx_ds_Transform_s* x, int n, struct zx_exca_InclusiveNamespaces_s* y);

void zx_ds_Transform_ADD_XPath(struct zx_ds_Transform_s* x, int n, struct zx_elem_s* z);
void zx_ds_Transform_ADD_InclusiveNamespaces(struct zx_ds_Transform_s* x, int n, struct zx_exca_InclusiveNamespaces_s* z);

void zx_ds_Transform_DEL_XPath(struct zx_ds_Transform_s* x, int n);
void zx_ds_Transform_DEL_InclusiveNamespaces(struct zx_ds_Transform_s* x, int n);

void zx_ds_Transform_REV_XPath(struct zx_ds_Transform_s* x);
void zx_ds_Transform_REV_InclusiveNamespaces(struct zx_ds_Transform_s* x);

#endif
/* -------------------------- ds_Transforms -------------------------- */
/* refby( zx_ds_Reference_s zx_ds_RetrievalMethod_s ) */
#ifndef zx_ds_Transforms_EXT
#define zx_ds_Transforms_EXT
#endif

struct zx_ds_Transforms_s* zx_DEC_ds_Transforms(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ds_Transforms_s* zx_NEW_ds_Transforms(struct zx_ctx* c);
void zx_FREE_ds_Transforms(struct zx_ctx* c, struct zx_ds_Transforms_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ds_Transforms_s* zx_DEEP_CLONE_ds_Transforms(struct zx_ctx* c, struct zx_ds_Transforms_s* x, int dup_strs);
void zx_DUP_STRS_ds_Transforms(struct zx_ctx* c, struct zx_ds_Transforms_s* x);
int zx_WALK_SO_ds_Transforms(struct zx_ctx* c, struct zx_ds_Transforms_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_Transforms(struct zx_ctx* c, struct zx_ds_Transforms_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ds_Transforms(struct zx_ctx* c, struct zx_ds_Transforms_s* x);
int zx_LEN_WO_ds_Transforms(struct zx_ctx* c, struct zx_ds_Transforms_s* x);
char* zx_ENC_SO_ds_Transforms(struct zx_ctx* c, struct zx_ds_Transforms_s* x, char* p);
char* zx_ENC_WO_ds_Transforms(struct zx_ctx* c, struct zx_ds_Transforms_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ds_Transforms(struct zx_ctx* c, struct zx_ds_Transforms_s* x);
struct zx_str* zx_EASY_ENC_WO_ds_Transforms(struct zx_ctx* c, struct zx_ds_Transforms_s* x);

struct zx_ds_Transforms_s {
  ZX_ELEM_EXT
  zx_ds_Transforms_EXT
  struct zx_ds_Transform_s* Transform;	/* {1,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_ds_Transform_s* zx_ds_Transforms_GET_Transform(struct zx_ds_Transforms_s* x, int n);

int zx_ds_Transforms_NUM_Transform(struct zx_ds_Transforms_s* x);

struct zx_ds_Transform_s* zx_ds_Transforms_POP_Transform(struct zx_ds_Transforms_s* x);

void zx_ds_Transforms_PUSH_Transform(struct zx_ds_Transforms_s* x, struct zx_ds_Transform_s* y);


void zx_ds_Transforms_PUT_Transform(struct zx_ds_Transforms_s* x, int n, struct zx_ds_Transform_s* y);

void zx_ds_Transforms_ADD_Transform(struct zx_ds_Transforms_s* x, int n, struct zx_ds_Transform_s* z);

void zx_ds_Transforms_DEL_Transform(struct zx_ds_Transforms_s* x, int n);

void zx_ds_Transforms_REV_Transform(struct zx_ds_Transforms_s* x);

#endif
/* -------------------------- ds_X509Data -------------------------- */
/* refby( zx_ds_KeyInfo_s zx_xenc_OriginatorKeyInfo_s zx_xenc_RecipientKeyInfo_s ) */
#ifndef zx_ds_X509Data_EXT
#define zx_ds_X509Data_EXT
#endif

struct zx_ds_X509Data_s* zx_DEC_ds_X509Data(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ds_X509Data_s* zx_NEW_ds_X509Data(struct zx_ctx* c);
void zx_FREE_ds_X509Data(struct zx_ctx* c, struct zx_ds_X509Data_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ds_X509Data_s* zx_DEEP_CLONE_ds_X509Data(struct zx_ctx* c, struct zx_ds_X509Data_s* x, int dup_strs);
void zx_DUP_STRS_ds_X509Data(struct zx_ctx* c, struct zx_ds_X509Data_s* x);
int zx_WALK_SO_ds_X509Data(struct zx_ctx* c, struct zx_ds_X509Data_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_X509Data(struct zx_ctx* c, struct zx_ds_X509Data_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ds_X509Data(struct zx_ctx* c, struct zx_ds_X509Data_s* x);
int zx_LEN_WO_ds_X509Data(struct zx_ctx* c, struct zx_ds_X509Data_s* x);
char* zx_ENC_SO_ds_X509Data(struct zx_ctx* c, struct zx_ds_X509Data_s* x, char* p);
char* zx_ENC_WO_ds_X509Data(struct zx_ctx* c, struct zx_ds_X509Data_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ds_X509Data(struct zx_ctx* c, struct zx_ds_X509Data_s* x);
struct zx_str* zx_EASY_ENC_WO_ds_X509Data(struct zx_ctx* c, struct zx_ds_X509Data_s* x);

struct zx_ds_X509Data_s {
  ZX_ELEM_EXT
  zx_ds_X509Data_EXT
  struct zx_ds_X509IssuerSerial_s* X509IssuerSerial;	/* {0,-1}  */
  struct zx_elem_s* X509SKI;	/* {0,-1} xs:base64Binary */
  struct zx_elem_s* X509SubjectName;	/* {0,-1} xs:string */
  struct zx_elem_s* X509Certificate;	/* {0,-1} xs:base64Binary */
  struct zx_elem_s* X509CRL;	/* {0,-1} xs:base64Binary */
};

#ifdef ZX_ENA_GETPUT

struct zx_ds_X509IssuerSerial_s* zx_ds_X509Data_GET_X509IssuerSerial(struct zx_ds_X509Data_s* x, int n);
struct zx_elem_s* zx_ds_X509Data_GET_X509SKI(struct zx_ds_X509Data_s* x, int n);
struct zx_elem_s* zx_ds_X509Data_GET_X509SubjectName(struct zx_ds_X509Data_s* x, int n);
struct zx_elem_s* zx_ds_X509Data_GET_X509Certificate(struct zx_ds_X509Data_s* x, int n);
struct zx_elem_s* zx_ds_X509Data_GET_X509CRL(struct zx_ds_X509Data_s* x, int n);

int zx_ds_X509Data_NUM_X509IssuerSerial(struct zx_ds_X509Data_s* x);
int zx_ds_X509Data_NUM_X509SKI(struct zx_ds_X509Data_s* x);
int zx_ds_X509Data_NUM_X509SubjectName(struct zx_ds_X509Data_s* x);
int zx_ds_X509Data_NUM_X509Certificate(struct zx_ds_X509Data_s* x);
int zx_ds_X509Data_NUM_X509CRL(struct zx_ds_X509Data_s* x);

struct zx_ds_X509IssuerSerial_s* zx_ds_X509Data_POP_X509IssuerSerial(struct zx_ds_X509Data_s* x);
struct zx_elem_s* zx_ds_X509Data_POP_X509SKI(struct zx_ds_X509Data_s* x);
struct zx_elem_s* zx_ds_X509Data_POP_X509SubjectName(struct zx_ds_X509Data_s* x);
struct zx_elem_s* zx_ds_X509Data_POP_X509Certificate(struct zx_ds_X509Data_s* x);
struct zx_elem_s* zx_ds_X509Data_POP_X509CRL(struct zx_ds_X509Data_s* x);

void zx_ds_X509Data_PUSH_X509IssuerSerial(struct zx_ds_X509Data_s* x, struct zx_ds_X509IssuerSerial_s* y);
void zx_ds_X509Data_PUSH_X509SKI(struct zx_ds_X509Data_s* x, struct zx_elem_s* y);
void zx_ds_X509Data_PUSH_X509SubjectName(struct zx_ds_X509Data_s* x, struct zx_elem_s* y);
void zx_ds_X509Data_PUSH_X509Certificate(struct zx_ds_X509Data_s* x, struct zx_elem_s* y);
void zx_ds_X509Data_PUSH_X509CRL(struct zx_ds_X509Data_s* x, struct zx_elem_s* y);


void zx_ds_X509Data_PUT_X509IssuerSerial(struct zx_ds_X509Data_s* x, int n, struct zx_ds_X509IssuerSerial_s* y);
void zx_ds_X509Data_PUT_X509SKI(struct zx_ds_X509Data_s* x, int n, struct zx_elem_s* y);
void zx_ds_X509Data_PUT_X509SubjectName(struct zx_ds_X509Data_s* x, int n, struct zx_elem_s* y);
void zx_ds_X509Data_PUT_X509Certificate(struct zx_ds_X509Data_s* x, int n, struct zx_elem_s* y);
void zx_ds_X509Data_PUT_X509CRL(struct zx_ds_X509Data_s* x, int n, struct zx_elem_s* y);

void zx_ds_X509Data_ADD_X509IssuerSerial(struct zx_ds_X509Data_s* x, int n, struct zx_ds_X509IssuerSerial_s* z);
void zx_ds_X509Data_ADD_X509SKI(struct zx_ds_X509Data_s* x, int n, struct zx_elem_s* z);
void zx_ds_X509Data_ADD_X509SubjectName(struct zx_ds_X509Data_s* x, int n, struct zx_elem_s* z);
void zx_ds_X509Data_ADD_X509Certificate(struct zx_ds_X509Data_s* x, int n, struct zx_elem_s* z);
void zx_ds_X509Data_ADD_X509CRL(struct zx_ds_X509Data_s* x, int n, struct zx_elem_s* z);

void zx_ds_X509Data_DEL_X509IssuerSerial(struct zx_ds_X509Data_s* x, int n);
void zx_ds_X509Data_DEL_X509SKI(struct zx_ds_X509Data_s* x, int n);
void zx_ds_X509Data_DEL_X509SubjectName(struct zx_ds_X509Data_s* x, int n);
void zx_ds_X509Data_DEL_X509Certificate(struct zx_ds_X509Data_s* x, int n);
void zx_ds_X509Data_DEL_X509CRL(struct zx_ds_X509Data_s* x, int n);

void zx_ds_X509Data_REV_X509IssuerSerial(struct zx_ds_X509Data_s* x);
void zx_ds_X509Data_REV_X509SKI(struct zx_ds_X509Data_s* x);
void zx_ds_X509Data_REV_X509SubjectName(struct zx_ds_X509Data_s* x);
void zx_ds_X509Data_REV_X509Certificate(struct zx_ds_X509Data_s* x);
void zx_ds_X509Data_REV_X509CRL(struct zx_ds_X509Data_s* x);

#endif
/* -------------------------- ds_X509IssuerSerial -------------------------- */
/* refby( zx_ds_X509Data_s ) */
#ifndef zx_ds_X509IssuerSerial_EXT
#define zx_ds_X509IssuerSerial_EXT
#endif

struct zx_ds_X509IssuerSerial_s* zx_DEC_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ds_X509IssuerSerial_s* zx_NEW_ds_X509IssuerSerial(struct zx_ctx* c);
void zx_FREE_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ds_X509IssuerSerial_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ds_X509IssuerSerial_s* zx_DEEP_CLONE_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ds_X509IssuerSerial_s* x, int dup_strs);
void zx_DUP_STRS_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ds_X509IssuerSerial_s* x);
int zx_WALK_SO_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ds_X509IssuerSerial_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ds_X509IssuerSerial_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ds_X509IssuerSerial_s* x);
int zx_LEN_WO_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ds_X509IssuerSerial_s* x);
char* zx_ENC_SO_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ds_X509IssuerSerial_s* x, char* p);
char* zx_ENC_WO_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ds_X509IssuerSerial_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ds_X509IssuerSerial_s* x);
struct zx_str* zx_EASY_ENC_WO_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ds_X509IssuerSerial_s* x);

struct zx_ds_X509IssuerSerial_s {
  ZX_ELEM_EXT
  zx_ds_X509IssuerSerial_EXT
  struct zx_elem_s* X509IssuerName;	/* {1,1} xs:string */
  struct zx_elem_s* X509SerialNumber;	/* {1,1} xs:integer */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_ds_X509IssuerSerial_GET_X509IssuerName(struct zx_ds_X509IssuerSerial_s* x, int n);
struct zx_elem_s* zx_ds_X509IssuerSerial_GET_X509SerialNumber(struct zx_ds_X509IssuerSerial_s* x, int n);

int zx_ds_X509IssuerSerial_NUM_X509IssuerName(struct zx_ds_X509IssuerSerial_s* x);
int zx_ds_X509IssuerSerial_NUM_X509SerialNumber(struct zx_ds_X509IssuerSerial_s* x);

struct zx_elem_s* zx_ds_X509IssuerSerial_POP_X509IssuerName(struct zx_ds_X509IssuerSerial_s* x);
struct zx_elem_s* zx_ds_X509IssuerSerial_POP_X509SerialNumber(struct zx_ds_X509IssuerSerial_s* x);

void zx_ds_X509IssuerSerial_PUSH_X509IssuerName(struct zx_ds_X509IssuerSerial_s* x, struct zx_elem_s* y);
void zx_ds_X509IssuerSerial_PUSH_X509SerialNumber(struct zx_ds_X509IssuerSerial_s* x, struct zx_elem_s* y);


void zx_ds_X509IssuerSerial_PUT_X509IssuerName(struct zx_ds_X509IssuerSerial_s* x, int n, struct zx_elem_s* y);
void zx_ds_X509IssuerSerial_PUT_X509SerialNumber(struct zx_ds_X509IssuerSerial_s* x, int n, struct zx_elem_s* y);

void zx_ds_X509IssuerSerial_ADD_X509IssuerName(struct zx_ds_X509IssuerSerial_s* x, int n, struct zx_elem_s* z);
void zx_ds_X509IssuerSerial_ADD_X509SerialNumber(struct zx_ds_X509IssuerSerial_s* x, int n, struct zx_elem_s* z);

void zx_ds_X509IssuerSerial_DEL_X509IssuerName(struct zx_ds_X509IssuerSerial_s* x, int n);
void zx_ds_X509IssuerSerial_DEL_X509SerialNumber(struct zx_ds_X509IssuerSerial_s* x, int n);

void zx_ds_X509IssuerSerial_REV_X509IssuerName(struct zx_ds_X509IssuerSerial_s* x);
void zx_ds_X509IssuerSerial_REV_X509SerialNumber(struct zx_ds_X509IssuerSerial_s* x);

#endif

#endif
