/* c/saml2md-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id: saml2md-data.h,v 1.27 2006/09/05 05:09:41 sampo Exp $ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_saml2md_data_h
#define _c_saml2md_data_h

#include "zx.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

extern const struct zx_tok zxmd_attrs[];    /* gperf generated, see *-attrs.c */
extern const struct zx_tok zxmd_elems[];    /* gperf generated, see *-elems.c */
const struct zx_tok* zxmd_attr2tok(const char* s, unsigned int len);
const struct zx_tok* zxmd_elem2tok(const char* s, unsigned int len);
int zxmd_attr_lookup(struct zx_ctx* c, char* name, char* lim);
int zxmd_elem_lookup(struct zx_ctx* c, char* name, char* lim);
/* -------------------------- ds_CanonicalizationMethod -------------------------- */
/* refby( zxmd_ds_SignedInfo_s ) */
#ifndef zxmd_ds_CanonicalizationMethod_EXT
#define zxmd_ds_CanonicalizationMethod_EXT
#endif

struct zxmd_ds_CanonicalizationMethod_s* zxmd_DEC_ds_CanonicalizationMethod(struct zx_ctx* c);
struct zxmd_ds_CanonicalizationMethod_s* zxmd_NEW_ds_CanonicalizationMethod(struct zx_ctx* c);
struct zxmd_ds_CanonicalizationMethod_s* zxmd_DEEP_CLONE_ds_CanonicalizationMethod(struct zx_ctx* c, struct zxmd_ds_CanonicalizationMethod_s* x, int dup_strs);
void zxmd_DUP_STRS_ds_CanonicalizationMethod(struct zx_ctx* c, struct zxmd_ds_CanonicalizationMethod_s* x);
void zxmd_FREE_ds_CanonicalizationMethod(struct zx_ctx* c, struct zxmd_ds_CanonicalizationMethod_s* x, int free_strs);
int zxmd_WALK_SO_ds_CanonicalizationMethod(struct zx_ctx* c, struct zxmd_ds_CanonicalizationMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_ds_CanonicalizationMethod(struct zx_ctx* c, struct zxmd_ds_CanonicalizationMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_ds_CanonicalizationMethod(struct zxmd_ds_CanonicalizationMethod_s* x);
char* zxmd_ENC_SO_ds_CanonicalizationMethod(struct zxmd_ds_CanonicalizationMethod_s* x, char* p);
char* zxmd_ENC_WO_ds_CanonicalizationMethod(struct zxmd_ds_CanonicalizationMethod_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_ds_CanonicalizationMethod(struct zx_ctx* c, struct zxmd_ds_CanonicalizationMethod_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_ds_CanonicalizationMethod(struct zx_ctx* c, struct zxmd_ds_CanonicalizationMethod_s* x);

struct zxmd_ds_CanonicalizationMethod_s {
  ZX_ELEM_EXT
  zxmd_ds_CanonicalizationMethod_EXT
  struct zx_str_s* Algorithm;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_ds_CanonicalizationMethod_GET_Algorithm(struct zxmd_ds_CanonicalizationMethod_s* x);
void zxmd_ds_CanonicalizationMethod_PUT_Algorithm(struct zxmd_ds_CanonicalizationMethod_s* x, struct zx_str_s* y);

/* -------------------------- ds_DSAKeyValue -------------------------- */
/* refby( zxmd_ds_KeyValue_s ) */
#ifndef zxmd_ds_DSAKeyValue_EXT
#define zxmd_ds_DSAKeyValue_EXT
#endif

struct zxmd_ds_DSAKeyValue_s* zxmd_DEC_ds_DSAKeyValue(struct zx_ctx* c);
struct zxmd_ds_DSAKeyValue_s* zxmd_NEW_ds_DSAKeyValue(struct zx_ctx* c);
struct zxmd_ds_DSAKeyValue_s* zxmd_DEEP_CLONE_ds_DSAKeyValue(struct zx_ctx* c, struct zxmd_ds_DSAKeyValue_s* x, int dup_strs);
void zxmd_DUP_STRS_ds_DSAKeyValue(struct zx_ctx* c, struct zxmd_ds_DSAKeyValue_s* x);
void zxmd_FREE_ds_DSAKeyValue(struct zx_ctx* c, struct zxmd_ds_DSAKeyValue_s* x, int free_strs);
int zxmd_WALK_SO_ds_DSAKeyValue(struct zx_ctx* c, struct zxmd_ds_DSAKeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_ds_DSAKeyValue(struct zx_ctx* c, struct zxmd_ds_DSAKeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_ds_DSAKeyValue(struct zxmd_ds_DSAKeyValue_s* x);
char* zxmd_ENC_SO_ds_DSAKeyValue(struct zxmd_ds_DSAKeyValue_s* x, char* p);
char* zxmd_ENC_WO_ds_DSAKeyValue(struct zxmd_ds_DSAKeyValue_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_ds_DSAKeyValue(struct zx_ctx* c, struct zxmd_ds_DSAKeyValue_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_ds_DSAKeyValue(struct zx_ctx* c, struct zxmd_ds_DSAKeyValue_s* x);

struct zxmd_ds_DSAKeyValue_s {
  ZX_ELEM_EXT
  zxmd_ds_DSAKeyValue_EXT
  struct zx_elem_s* P;	/* {0,1} xs:base64Binary */
  struct zx_elem_s* Q;	/* {0,1} xs:base64Binary */
  struct zx_elem_s* G;	/* {0,1} xs:base64Binary */
  struct zx_elem_s* Y;	/* {1,1} xs:base64Binary */
  struct zx_elem_s* J;	/* {0,1} xs:base64Binary */
  struct zx_elem_s* Seed;	/* {0,1} xs:base64Binary */
  struct zx_elem_s* PgenCounter;	/* {0,1} xs:base64Binary */
};

struct zx_elem_s* zxmd_ds_DSAKeyValue_GET_P(struct zxmd_ds_DSAKeyValue_s* x, int n);
struct zx_elem_s* zxmd_ds_DSAKeyValue_GET_Q(struct zxmd_ds_DSAKeyValue_s* x, int n);
struct zx_elem_s* zxmd_ds_DSAKeyValue_GET_G(struct zxmd_ds_DSAKeyValue_s* x, int n);
struct zx_elem_s* zxmd_ds_DSAKeyValue_GET_Y(struct zxmd_ds_DSAKeyValue_s* x, int n);
struct zx_elem_s* zxmd_ds_DSAKeyValue_GET_J(struct zxmd_ds_DSAKeyValue_s* x, int n);
struct zx_elem_s* zxmd_ds_DSAKeyValue_GET_Seed(struct zxmd_ds_DSAKeyValue_s* x, int n);
struct zx_elem_s* zxmd_ds_DSAKeyValue_GET_PgenCounter(struct zxmd_ds_DSAKeyValue_s* x, int n);
int zxmd_ds_DSAKeyValue_NUM_P(struct zxmd_ds_DSAKeyValue_s* x);
int zxmd_ds_DSAKeyValue_NUM_Q(struct zxmd_ds_DSAKeyValue_s* x);
int zxmd_ds_DSAKeyValue_NUM_G(struct zxmd_ds_DSAKeyValue_s* x);
int zxmd_ds_DSAKeyValue_NUM_Y(struct zxmd_ds_DSAKeyValue_s* x);
int zxmd_ds_DSAKeyValue_NUM_J(struct zxmd_ds_DSAKeyValue_s* x);
int zxmd_ds_DSAKeyValue_NUM_Seed(struct zxmd_ds_DSAKeyValue_s* x);
int zxmd_ds_DSAKeyValue_NUM_PgenCounter(struct zxmd_ds_DSAKeyValue_s* x);
struct zx_elem_s* zxmd_ds_DSAKeyValue_POP_P(struct zxmd_ds_DSAKeyValue_s* x);
struct zx_elem_s* zxmd_ds_DSAKeyValue_POP_Q(struct zxmd_ds_DSAKeyValue_s* x);
struct zx_elem_s* zxmd_ds_DSAKeyValue_POP_G(struct zxmd_ds_DSAKeyValue_s* x);
struct zx_elem_s* zxmd_ds_DSAKeyValue_POP_Y(struct zxmd_ds_DSAKeyValue_s* x);
struct zx_elem_s* zxmd_ds_DSAKeyValue_POP_J(struct zxmd_ds_DSAKeyValue_s* x);
struct zx_elem_s* zxmd_ds_DSAKeyValue_POP_Seed(struct zxmd_ds_DSAKeyValue_s* x);
struct zx_elem_s* zxmd_ds_DSAKeyValue_POP_PgenCounter(struct zxmd_ds_DSAKeyValue_s* x);
void zxmd_ds_DSAKeyValue_PUSH_P(struct zxmd_ds_DSAKeyValue_s* x, struct zx_elem_s* y);
void zxmd_ds_DSAKeyValue_PUSH_Q(struct zxmd_ds_DSAKeyValue_s* x, struct zx_elem_s* y);
void zxmd_ds_DSAKeyValue_PUSH_G(struct zxmd_ds_DSAKeyValue_s* x, struct zx_elem_s* y);
void zxmd_ds_DSAKeyValue_PUSH_Y(struct zxmd_ds_DSAKeyValue_s* x, struct zx_elem_s* y);
void zxmd_ds_DSAKeyValue_PUSH_J(struct zxmd_ds_DSAKeyValue_s* x, struct zx_elem_s* y);
void zxmd_ds_DSAKeyValue_PUSH_Seed(struct zxmd_ds_DSAKeyValue_s* x, struct zx_elem_s* y);
void zxmd_ds_DSAKeyValue_PUSH_PgenCounter(struct zxmd_ds_DSAKeyValue_s* x, struct zx_elem_s* y);
void zxmd_ds_DSAKeyValue_PUT_P(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* y);
void zxmd_ds_DSAKeyValue_PUT_Q(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* y);
void zxmd_ds_DSAKeyValue_PUT_G(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* y);
void zxmd_ds_DSAKeyValue_PUT_Y(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* y);
void zxmd_ds_DSAKeyValue_PUT_J(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* y);
void zxmd_ds_DSAKeyValue_PUT_Seed(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* y);
void zxmd_ds_DSAKeyValue_PUT_PgenCounter(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* y);
void zxmd_ds_DSAKeyValue_ADD_P(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z);
void zxmd_ds_DSAKeyValue_ADD_Q(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z);
void zxmd_ds_DSAKeyValue_ADD_G(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z);
void zxmd_ds_DSAKeyValue_ADD_Y(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z);
void zxmd_ds_DSAKeyValue_ADD_J(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z);
void zxmd_ds_DSAKeyValue_ADD_Seed(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z);
void zxmd_ds_DSAKeyValue_ADD_PgenCounter(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z);
void zxmd_ds_DSAKeyValue_DEL_P(struct zxmd_ds_DSAKeyValue_s* x, int n);
void zxmd_ds_DSAKeyValue_DEL_Q(struct zxmd_ds_DSAKeyValue_s* x, int n);
void zxmd_ds_DSAKeyValue_DEL_G(struct zxmd_ds_DSAKeyValue_s* x, int n);
void zxmd_ds_DSAKeyValue_DEL_Y(struct zxmd_ds_DSAKeyValue_s* x, int n);
void zxmd_ds_DSAKeyValue_DEL_J(struct zxmd_ds_DSAKeyValue_s* x, int n);
void zxmd_ds_DSAKeyValue_DEL_Seed(struct zxmd_ds_DSAKeyValue_s* x, int n);
void zxmd_ds_DSAKeyValue_DEL_PgenCounter(struct zxmd_ds_DSAKeyValue_s* x, int n);
void zxmd_ds_DSAKeyValue_REV_P(struct zxmd_ds_DSAKeyValue_s* x);
void zxmd_ds_DSAKeyValue_REV_Q(struct zxmd_ds_DSAKeyValue_s* x);
void zxmd_ds_DSAKeyValue_REV_G(struct zxmd_ds_DSAKeyValue_s* x);
void zxmd_ds_DSAKeyValue_REV_Y(struct zxmd_ds_DSAKeyValue_s* x);
void zxmd_ds_DSAKeyValue_REV_J(struct zxmd_ds_DSAKeyValue_s* x);
void zxmd_ds_DSAKeyValue_REV_Seed(struct zxmd_ds_DSAKeyValue_s* x);
void zxmd_ds_DSAKeyValue_REV_PgenCounter(struct zxmd_ds_DSAKeyValue_s* x);

/* -------------------------- ds_DigestMethod -------------------------- */
/* refby( zxmd_ds_Reference_s ) */
#ifndef zxmd_ds_DigestMethod_EXT
#define zxmd_ds_DigestMethod_EXT
#endif

struct zxmd_ds_DigestMethod_s* zxmd_DEC_ds_DigestMethod(struct zx_ctx* c);
struct zxmd_ds_DigestMethod_s* zxmd_NEW_ds_DigestMethod(struct zx_ctx* c);
struct zxmd_ds_DigestMethod_s* zxmd_DEEP_CLONE_ds_DigestMethod(struct zx_ctx* c, struct zxmd_ds_DigestMethod_s* x, int dup_strs);
void zxmd_DUP_STRS_ds_DigestMethod(struct zx_ctx* c, struct zxmd_ds_DigestMethod_s* x);
void zxmd_FREE_ds_DigestMethod(struct zx_ctx* c, struct zxmd_ds_DigestMethod_s* x, int free_strs);
int zxmd_WALK_SO_ds_DigestMethod(struct zx_ctx* c, struct zxmd_ds_DigestMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_ds_DigestMethod(struct zx_ctx* c, struct zxmd_ds_DigestMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_ds_DigestMethod(struct zxmd_ds_DigestMethod_s* x);
char* zxmd_ENC_SO_ds_DigestMethod(struct zxmd_ds_DigestMethod_s* x, char* p);
char* zxmd_ENC_WO_ds_DigestMethod(struct zxmd_ds_DigestMethod_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_ds_DigestMethod(struct zx_ctx* c, struct zxmd_ds_DigestMethod_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_ds_DigestMethod(struct zx_ctx* c, struct zxmd_ds_DigestMethod_s* x);

struct zxmd_ds_DigestMethod_s {
  ZX_ELEM_EXT
  zxmd_ds_DigestMethod_EXT
  struct zx_str_s* Algorithm;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_ds_DigestMethod_GET_Algorithm(struct zxmd_ds_DigestMethod_s* x);
void zxmd_ds_DigestMethod_PUT_Algorithm(struct zxmd_ds_DigestMethod_s* x, struct zx_str_s* y);

/* -------------------------- ds_KeyInfo -------------------------- */
/* refby( zxmd_ds_Signature_s zxmd_md_KeyDescriptor_s zxmd_xenc_EncryptedData_s zxmd_xenc_EncryptedKey_s ) */
#ifndef zxmd_ds_KeyInfo_EXT
#define zxmd_ds_KeyInfo_EXT
#endif

struct zxmd_ds_KeyInfo_s* zxmd_DEC_ds_KeyInfo(struct zx_ctx* c);
struct zxmd_ds_KeyInfo_s* zxmd_NEW_ds_KeyInfo(struct zx_ctx* c);
struct zxmd_ds_KeyInfo_s* zxmd_DEEP_CLONE_ds_KeyInfo(struct zx_ctx* c, struct zxmd_ds_KeyInfo_s* x, int dup_strs);
void zxmd_DUP_STRS_ds_KeyInfo(struct zx_ctx* c, struct zxmd_ds_KeyInfo_s* x);
void zxmd_FREE_ds_KeyInfo(struct zx_ctx* c, struct zxmd_ds_KeyInfo_s* x, int free_strs);
int zxmd_WALK_SO_ds_KeyInfo(struct zx_ctx* c, struct zxmd_ds_KeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_ds_KeyInfo(struct zx_ctx* c, struct zxmd_ds_KeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_ds_KeyInfo(struct zxmd_ds_KeyInfo_s* x);
char* zxmd_ENC_SO_ds_KeyInfo(struct zxmd_ds_KeyInfo_s* x, char* p);
char* zxmd_ENC_WO_ds_KeyInfo(struct zxmd_ds_KeyInfo_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_ds_KeyInfo(struct zx_ctx* c, struct zxmd_ds_KeyInfo_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_ds_KeyInfo(struct zx_ctx* c, struct zxmd_ds_KeyInfo_s* x);

struct zxmd_ds_KeyInfo_s {
  ZX_ELEM_EXT
  zxmd_ds_KeyInfo_EXT
  struct zx_elem_s* KeyName;	/* {0,-1} xs:string */
  struct zxmd_ds_KeyValue_s* KeyValue;	/* {0,-1} nada */
  struct zxmd_ds_RetrievalMethod_s* RetrievalMethod;	/* {0,-1} nada */
  struct zxmd_ds_X509Data_s* X509Data;	/* {0,-1} nada */
  struct zxmd_ds_PGPData_s* PGPData;	/* {0,-1} nada */
  struct zxmd_ds_SPKIData_s* SPKIData;	/* {0,-1} nada */
  struct zx_elem_s* MgmtData;	/* {0,-1} xs:string */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zxmd_ds_KeyInfo_GET_Id(struct zxmd_ds_KeyInfo_s* x);
struct zx_elem_s* zxmd_ds_KeyInfo_GET_KeyName(struct zxmd_ds_KeyInfo_s* x, int n);
struct zxmd_ds_KeyValue_s* zxmd_ds_KeyInfo_GET_KeyValue(struct zxmd_ds_KeyInfo_s* x, int n);
struct zxmd_ds_RetrievalMethod_s* zxmd_ds_KeyInfo_GET_RetrievalMethod(struct zxmd_ds_KeyInfo_s* x, int n);
struct zxmd_ds_X509Data_s* zxmd_ds_KeyInfo_GET_X509Data(struct zxmd_ds_KeyInfo_s* x, int n);
struct zxmd_ds_PGPData_s* zxmd_ds_KeyInfo_GET_PGPData(struct zxmd_ds_KeyInfo_s* x, int n);
struct zxmd_ds_SPKIData_s* zxmd_ds_KeyInfo_GET_SPKIData(struct zxmd_ds_KeyInfo_s* x, int n);
struct zx_elem_s* zxmd_ds_KeyInfo_GET_MgmtData(struct zxmd_ds_KeyInfo_s* x, int n);
int zxmd_ds_KeyInfo_NUM_KeyName(struct zxmd_ds_KeyInfo_s* x);
int zxmd_ds_KeyInfo_NUM_KeyValue(struct zxmd_ds_KeyInfo_s* x);
int zxmd_ds_KeyInfo_NUM_RetrievalMethod(struct zxmd_ds_KeyInfo_s* x);
int zxmd_ds_KeyInfo_NUM_X509Data(struct zxmd_ds_KeyInfo_s* x);
int zxmd_ds_KeyInfo_NUM_PGPData(struct zxmd_ds_KeyInfo_s* x);
int zxmd_ds_KeyInfo_NUM_SPKIData(struct zxmd_ds_KeyInfo_s* x);
int zxmd_ds_KeyInfo_NUM_MgmtData(struct zxmd_ds_KeyInfo_s* x);
struct zx_elem_s* zxmd_ds_KeyInfo_POP_KeyName(struct zxmd_ds_KeyInfo_s* x);
struct zxmd_ds_KeyValue_s* zxmd_ds_KeyInfo_POP_KeyValue(struct zxmd_ds_KeyInfo_s* x);
struct zxmd_ds_RetrievalMethod_s* zxmd_ds_KeyInfo_POP_RetrievalMethod(struct zxmd_ds_KeyInfo_s* x);
struct zxmd_ds_X509Data_s* zxmd_ds_KeyInfo_POP_X509Data(struct zxmd_ds_KeyInfo_s* x);
struct zxmd_ds_PGPData_s* zxmd_ds_KeyInfo_POP_PGPData(struct zxmd_ds_KeyInfo_s* x);
struct zxmd_ds_SPKIData_s* zxmd_ds_KeyInfo_POP_SPKIData(struct zxmd_ds_KeyInfo_s* x);
struct zx_elem_s* zxmd_ds_KeyInfo_POP_MgmtData(struct zxmd_ds_KeyInfo_s* x);
void zxmd_ds_KeyInfo_PUSH_KeyName(struct zxmd_ds_KeyInfo_s* x, struct zx_elem_s* y);
void zxmd_ds_KeyInfo_PUSH_KeyValue(struct zxmd_ds_KeyInfo_s* x, struct zxmd_ds_KeyValue_s* y);
void zxmd_ds_KeyInfo_PUSH_RetrievalMethod(struct zxmd_ds_KeyInfo_s* x, struct zxmd_ds_RetrievalMethod_s* y);
void zxmd_ds_KeyInfo_PUSH_X509Data(struct zxmd_ds_KeyInfo_s* x, struct zxmd_ds_X509Data_s* y);
void zxmd_ds_KeyInfo_PUSH_PGPData(struct zxmd_ds_KeyInfo_s* x, struct zxmd_ds_PGPData_s* y);
void zxmd_ds_KeyInfo_PUSH_SPKIData(struct zxmd_ds_KeyInfo_s* x, struct zxmd_ds_SPKIData_s* y);
void zxmd_ds_KeyInfo_PUSH_MgmtData(struct zxmd_ds_KeyInfo_s* x, struct zx_elem_s* y);
void zxmd_ds_KeyInfo_PUT_Id(struct zxmd_ds_KeyInfo_s* x, struct zx_str_s* y);
void zxmd_ds_KeyInfo_PUT_KeyName(struct zxmd_ds_KeyInfo_s* x, int n, struct zx_elem_s* y);
void zxmd_ds_KeyInfo_PUT_KeyValue(struct zxmd_ds_KeyInfo_s* x, int n, struct zxmd_ds_KeyValue_s* y);
void zxmd_ds_KeyInfo_PUT_RetrievalMethod(struct zxmd_ds_KeyInfo_s* x, int n, struct zxmd_ds_RetrievalMethod_s* y);
void zxmd_ds_KeyInfo_PUT_X509Data(struct zxmd_ds_KeyInfo_s* x, int n, struct zxmd_ds_X509Data_s* y);
void zxmd_ds_KeyInfo_PUT_PGPData(struct zxmd_ds_KeyInfo_s* x, int n, struct zxmd_ds_PGPData_s* y);
void zxmd_ds_KeyInfo_PUT_SPKIData(struct zxmd_ds_KeyInfo_s* x, int n, struct zxmd_ds_SPKIData_s* y);
void zxmd_ds_KeyInfo_PUT_MgmtData(struct zxmd_ds_KeyInfo_s* x, int n, struct zx_elem_s* y);
void zxmd_ds_KeyInfo_ADD_KeyName(struct zxmd_ds_KeyInfo_s* x, int n, struct zx_elem_s* z);
void zxmd_ds_KeyInfo_ADD_KeyValue(struct zxmd_ds_KeyInfo_s* x, int n, struct zxmd_ds_KeyValue_s* z);
void zxmd_ds_KeyInfo_ADD_RetrievalMethod(struct zxmd_ds_KeyInfo_s* x, int n, struct zxmd_ds_RetrievalMethod_s* z);
void zxmd_ds_KeyInfo_ADD_X509Data(struct zxmd_ds_KeyInfo_s* x, int n, struct zxmd_ds_X509Data_s* z);
void zxmd_ds_KeyInfo_ADD_PGPData(struct zxmd_ds_KeyInfo_s* x, int n, struct zxmd_ds_PGPData_s* z);
void zxmd_ds_KeyInfo_ADD_SPKIData(struct zxmd_ds_KeyInfo_s* x, int n, struct zxmd_ds_SPKIData_s* z);
void zxmd_ds_KeyInfo_ADD_MgmtData(struct zxmd_ds_KeyInfo_s* x, int n, struct zx_elem_s* z);
void zxmd_ds_KeyInfo_DEL_KeyName(struct zxmd_ds_KeyInfo_s* x, int n);
void zxmd_ds_KeyInfo_DEL_KeyValue(struct zxmd_ds_KeyInfo_s* x, int n);
void zxmd_ds_KeyInfo_DEL_RetrievalMethod(struct zxmd_ds_KeyInfo_s* x, int n);
void zxmd_ds_KeyInfo_DEL_X509Data(struct zxmd_ds_KeyInfo_s* x, int n);
void zxmd_ds_KeyInfo_DEL_PGPData(struct zxmd_ds_KeyInfo_s* x, int n);
void zxmd_ds_KeyInfo_DEL_SPKIData(struct zxmd_ds_KeyInfo_s* x, int n);
void zxmd_ds_KeyInfo_DEL_MgmtData(struct zxmd_ds_KeyInfo_s* x, int n);
void zxmd_ds_KeyInfo_REV_KeyName(struct zxmd_ds_KeyInfo_s* x);
void zxmd_ds_KeyInfo_REV_KeyValue(struct zxmd_ds_KeyInfo_s* x);
void zxmd_ds_KeyInfo_REV_RetrievalMethod(struct zxmd_ds_KeyInfo_s* x);
void zxmd_ds_KeyInfo_REV_X509Data(struct zxmd_ds_KeyInfo_s* x);
void zxmd_ds_KeyInfo_REV_PGPData(struct zxmd_ds_KeyInfo_s* x);
void zxmd_ds_KeyInfo_REV_SPKIData(struct zxmd_ds_KeyInfo_s* x);
void zxmd_ds_KeyInfo_REV_MgmtData(struct zxmd_ds_KeyInfo_s* x);

/* -------------------------- ds_KeyValue -------------------------- */
/* refby( zxmd_ds_KeyInfo_s zxmd_xenc_OriginatorKeyInfo_s zxmd_xenc_RecipientKeyInfo_s ) */
#ifndef zxmd_ds_KeyValue_EXT
#define zxmd_ds_KeyValue_EXT
#endif

struct zxmd_ds_KeyValue_s* zxmd_DEC_ds_KeyValue(struct zx_ctx* c);
struct zxmd_ds_KeyValue_s* zxmd_NEW_ds_KeyValue(struct zx_ctx* c);
struct zxmd_ds_KeyValue_s* zxmd_DEEP_CLONE_ds_KeyValue(struct zx_ctx* c, struct zxmd_ds_KeyValue_s* x, int dup_strs);
void zxmd_DUP_STRS_ds_KeyValue(struct zx_ctx* c, struct zxmd_ds_KeyValue_s* x);
void zxmd_FREE_ds_KeyValue(struct zx_ctx* c, struct zxmd_ds_KeyValue_s* x, int free_strs);
int zxmd_WALK_SO_ds_KeyValue(struct zx_ctx* c, struct zxmd_ds_KeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_ds_KeyValue(struct zx_ctx* c, struct zxmd_ds_KeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_ds_KeyValue(struct zxmd_ds_KeyValue_s* x);
char* zxmd_ENC_SO_ds_KeyValue(struct zxmd_ds_KeyValue_s* x, char* p);
char* zxmd_ENC_WO_ds_KeyValue(struct zxmd_ds_KeyValue_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_ds_KeyValue(struct zx_ctx* c, struct zxmd_ds_KeyValue_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_ds_KeyValue(struct zx_ctx* c, struct zxmd_ds_KeyValue_s* x);

struct zxmd_ds_KeyValue_s {
  ZX_ELEM_EXT
  zxmd_ds_KeyValue_EXT
  struct zxmd_ds_DSAKeyValue_s* DSAKeyValue;	/* {0,1} nada */
  struct zxmd_ds_RSAKeyValue_s* RSAKeyValue;	/* {0,1} nada */
};

struct zxmd_ds_DSAKeyValue_s* zxmd_ds_KeyValue_GET_DSAKeyValue(struct zxmd_ds_KeyValue_s* x, int n);
struct zxmd_ds_RSAKeyValue_s* zxmd_ds_KeyValue_GET_RSAKeyValue(struct zxmd_ds_KeyValue_s* x, int n);
int zxmd_ds_KeyValue_NUM_DSAKeyValue(struct zxmd_ds_KeyValue_s* x);
int zxmd_ds_KeyValue_NUM_RSAKeyValue(struct zxmd_ds_KeyValue_s* x);
struct zxmd_ds_DSAKeyValue_s* zxmd_ds_KeyValue_POP_DSAKeyValue(struct zxmd_ds_KeyValue_s* x);
struct zxmd_ds_RSAKeyValue_s* zxmd_ds_KeyValue_POP_RSAKeyValue(struct zxmd_ds_KeyValue_s* x);
void zxmd_ds_KeyValue_PUSH_DSAKeyValue(struct zxmd_ds_KeyValue_s* x, struct zxmd_ds_DSAKeyValue_s* y);
void zxmd_ds_KeyValue_PUSH_RSAKeyValue(struct zxmd_ds_KeyValue_s* x, struct zxmd_ds_RSAKeyValue_s* y);
void zxmd_ds_KeyValue_PUT_DSAKeyValue(struct zxmd_ds_KeyValue_s* x, int n, struct zxmd_ds_DSAKeyValue_s* y);
void zxmd_ds_KeyValue_PUT_RSAKeyValue(struct zxmd_ds_KeyValue_s* x, int n, struct zxmd_ds_RSAKeyValue_s* y);
void zxmd_ds_KeyValue_ADD_DSAKeyValue(struct zxmd_ds_KeyValue_s* x, int n, struct zxmd_ds_DSAKeyValue_s* z);
void zxmd_ds_KeyValue_ADD_RSAKeyValue(struct zxmd_ds_KeyValue_s* x, int n, struct zxmd_ds_RSAKeyValue_s* z);
void zxmd_ds_KeyValue_DEL_DSAKeyValue(struct zxmd_ds_KeyValue_s* x, int n);
void zxmd_ds_KeyValue_DEL_RSAKeyValue(struct zxmd_ds_KeyValue_s* x, int n);
void zxmd_ds_KeyValue_REV_DSAKeyValue(struct zxmd_ds_KeyValue_s* x);
void zxmd_ds_KeyValue_REV_RSAKeyValue(struct zxmd_ds_KeyValue_s* x);

/* -------------------------- ds_Manifest -------------------------- */
/* refby( ) */
#ifndef zxmd_ds_Manifest_EXT
#define zxmd_ds_Manifest_EXT
#endif

struct zxmd_ds_Manifest_s* zxmd_DEC_ds_Manifest(struct zx_ctx* c);
struct zxmd_ds_Manifest_s* zxmd_NEW_ds_Manifest(struct zx_ctx* c);
struct zxmd_ds_Manifest_s* zxmd_DEEP_CLONE_ds_Manifest(struct zx_ctx* c, struct zxmd_ds_Manifest_s* x, int dup_strs);
void zxmd_DUP_STRS_ds_Manifest(struct zx_ctx* c, struct zxmd_ds_Manifest_s* x);
void zxmd_FREE_ds_Manifest(struct zx_ctx* c, struct zxmd_ds_Manifest_s* x, int free_strs);
int zxmd_WALK_SO_ds_Manifest(struct zx_ctx* c, struct zxmd_ds_Manifest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_ds_Manifest(struct zx_ctx* c, struct zxmd_ds_Manifest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_ds_Manifest(struct zxmd_ds_Manifest_s* x);
char* zxmd_ENC_SO_ds_Manifest(struct zxmd_ds_Manifest_s* x, char* p);
char* zxmd_ENC_WO_ds_Manifest(struct zxmd_ds_Manifest_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_ds_Manifest(struct zx_ctx* c, struct zxmd_ds_Manifest_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_ds_Manifest(struct zx_ctx* c, struct zxmd_ds_Manifest_s* x);

struct zxmd_ds_Manifest_s {
  ZX_ELEM_EXT
  zxmd_ds_Manifest_EXT
  struct zxmd_ds_Reference_s* Reference;	/* {1,-1} nada */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zxmd_ds_Manifest_GET_Id(struct zxmd_ds_Manifest_s* x);
struct zxmd_ds_Reference_s* zxmd_ds_Manifest_GET_Reference(struct zxmd_ds_Manifest_s* x, int n);
int zxmd_ds_Manifest_NUM_Reference(struct zxmd_ds_Manifest_s* x);
struct zxmd_ds_Reference_s* zxmd_ds_Manifest_POP_Reference(struct zxmd_ds_Manifest_s* x);
void zxmd_ds_Manifest_PUSH_Reference(struct zxmd_ds_Manifest_s* x, struct zxmd_ds_Reference_s* y);
void zxmd_ds_Manifest_PUT_Id(struct zxmd_ds_Manifest_s* x, struct zx_str_s* y);
void zxmd_ds_Manifest_PUT_Reference(struct zxmd_ds_Manifest_s* x, int n, struct zxmd_ds_Reference_s* y);
void zxmd_ds_Manifest_ADD_Reference(struct zxmd_ds_Manifest_s* x, int n, struct zxmd_ds_Reference_s* z);
void zxmd_ds_Manifest_DEL_Reference(struct zxmd_ds_Manifest_s* x, int n);
void zxmd_ds_Manifest_REV_Reference(struct zxmd_ds_Manifest_s* x);

/* -------------------------- ds_Object -------------------------- */
/* refby( zxmd_ds_Signature_s ) */
#ifndef zxmd_ds_Object_EXT
#define zxmd_ds_Object_EXT
#endif

struct zxmd_ds_Object_s* zxmd_DEC_ds_Object(struct zx_ctx* c);
struct zxmd_ds_Object_s* zxmd_NEW_ds_Object(struct zx_ctx* c);
struct zxmd_ds_Object_s* zxmd_DEEP_CLONE_ds_Object(struct zx_ctx* c, struct zxmd_ds_Object_s* x, int dup_strs);
void zxmd_DUP_STRS_ds_Object(struct zx_ctx* c, struct zxmd_ds_Object_s* x);
void zxmd_FREE_ds_Object(struct zx_ctx* c, struct zxmd_ds_Object_s* x, int free_strs);
int zxmd_WALK_SO_ds_Object(struct zx_ctx* c, struct zxmd_ds_Object_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_ds_Object(struct zx_ctx* c, struct zxmd_ds_Object_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_ds_Object(struct zxmd_ds_Object_s* x);
char* zxmd_ENC_SO_ds_Object(struct zxmd_ds_Object_s* x, char* p);
char* zxmd_ENC_WO_ds_Object(struct zxmd_ds_Object_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_ds_Object(struct zx_ctx* c, struct zxmd_ds_Object_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_ds_Object(struct zx_ctx* c, struct zxmd_ds_Object_s* x);

struct zxmd_ds_Object_s {
  ZX_ELEM_EXT
  zxmd_ds_Object_EXT
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
  struct zx_str_s* MimeType;	/* {0,1} attribute xs:string */
  struct zx_str_s* Encoding;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_ds_Object_GET_Id(struct zxmd_ds_Object_s* x);
struct zx_str_s* zxmd_ds_Object_GET_MimeType(struct zxmd_ds_Object_s* x);
struct zx_str_s* zxmd_ds_Object_GET_Encoding(struct zxmd_ds_Object_s* x);
void zxmd_ds_Object_PUT_Id(struct zxmd_ds_Object_s* x, struct zx_str_s* y);
void zxmd_ds_Object_PUT_MimeType(struct zxmd_ds_Object_s* x, struct zx_str_s* y);
void zxmd_ds_Object_PUT_Encoding(struct zxmd_ds_Object_s* x, struct zx_str_s* y);

/* -------------------------- ds_PGPData -------------------------- */
/* refby( zxmd_ds_KeyInfo_s zxmd_xenc_OriginatorKeyInfo_s zxmd_xenc_RecipientKeyInfo_s ) */
#ifndef zxmd_ds_PGPData_EXT
#define zxmd_ds_PGPData_EXT
#endif

struct zxmd_ds_PGPData_s* zxmd_DEC_ds_PGPData(struct zx_ctx* c);
struct zxmd_ds_PGPData_s* zxmd_NEW_ds_PGPData(struct zx_ctx* c);
struct zxmd_ds_PGPData_s* zxmd_DEEP_CLONE_ds_PGPData(struct zx_ctx* c, struct zxmd_ds_PGPData_s* x, int dup_strs);
void zxmd_DUP_STRS_ds_PGPData(struct zx_ctx* c, struct zxmd_ds_PGPData_s* x);
void zxmd_FREE_ds_PGPData(struct zx_ctx* c, struct zxmd_ds_PGPData_s* x, int free_strs);
int zxmd_WALK_SO_ds_PGPData(struct zx_ctx* c, struct zxmd_ds_PGPData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_ds_PGPData(struct zx_ctx* c, struct zxmd_ds_PGPData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_ds_PGPData(struct zxmd_ds_PGPData_s* x);
char* zxmd_ENC_SO_ds_PGPData(struct zxmd_ds_PGPData_s* x, char* p);
char* zxmd_ENC_WO_ds_PGPData(struct zxmd_ds_PGPData_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_ds_PGPData(struct zx_ctx* c, struct zxmd_ds_PGPData_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_ds_PGPData(struct zx_ctx* c, struct zxmd_ds_PGPData_s* x);

struct zxmd_ds_PGPData_s {
  ZX_ELEM_EXT
  zxmd_ds_PGPData_EXT
  struct zx_elem_s* PGPKeyID;	/* {0,1} xs:base64Binary */
  struct zx_elem_s* PGPKeyPacket;	/* {0,1} xs:base64Binary */
};

struct zx_elem_s* zxmd_ds_PGPData_GET_PGPKeyID(struct zxmd_ds_PGPData_s* x, int n);
struct zx_elem_s* zxmd_ds_PGPData_GET_PGPKeyPacket(struct zxmd_ds_PGPData_s* x, int n);
int zxmd_ds_PGPData_NUM_PGPKeyID(struct zxmd_ds_PGPData_s* x);
int zxmd_ds_PGPData_NUM_PGPKeyPacket(struct zxmd_ds_PGPData_s* x);
struct zx_elem_s* zxmd_ds_PGPData_POP_PGPKeyID(struct zxmd_ds_PGPData_s* x);
struct zx_elem_s* zxmd_ds_PGPData_POP_PGPKeyPacket(struct zxmd_ds_PGPData_s* x);
void zxmd_ds_PGPData_PUSH_PGPKeyID(struct zxmd_ds_PGPData_s* x, struct zx_elem_s* y);
void zxmd_ds_PGPData_PUSH_PGPKeyPacket(struct zxmd_ds_PGPData_s* x, struct zx_elem_s* y);
void zxmd_ds_PGPData_PUT_PGPKeyID(struct zxmd_ds_PGPData_s* x, int n, struct zx_elem_s* y);
void zxmd_ds_PGPData_PUT_PGPKeyPacket(struct zxmd_ds_PGPData_s* x, int n, struct zx_elem_s* y);
void zxmd_ds_PGPData_ADD_PGPKeyID(struct zxmd_ds_PGPData_s* x, int n, struct zx_elem_s* z);
void zxmd_ds_PGPData_ADD_PGPKeyPacket(struct zxmd_ds_PGPData_s* x, int n, struct zx_elem_s* z);
void zxmd_ds_PGPData_DEL_PGPKeyID(struct zxmd_ds_PGPData_s* x, int n);
void zxmd_ds_PGPData_DEL_PGPKeyPacket(struct zxmd_ds_PGPData_s* x, int n);
void zxmd_ds_PGPData_REV_PGPKeyID(struct zxmd_ds_PGPData_s* x);
void zxmd_ds_PGPData_REV_PGPKeyPacket(struct zxmd_ds_PGPData_s* x);

/* -------------------------- ds_RSAKeyValue -------------------------- */
/* refby( zxmd_ds_KeyValue_s ) */
#ifndef zxmd_ds_RSAKeyValue_EXT
#define zxmd_ds_RSAKeyValue_EXT
#endif

struct zxmd_ds_RSAKeyValue_s* zxmd_DEC_ds_RSAKeyValue(struct zx_ctx* c);
struct zxmd_ds_RSAKeyValue_s* zxmd_NEW_ds_RSAKeyValue(struct zx_ctx* c);
struct zxmd_ds_RSAKeyValue_s* zxmd_DEEP_CLONE_ds_RSAKeyValue(struct zx_ctx* c, struct zxmd_ds_RSAKeyValue_s* x, int dup_strs);
void zxmd_DUP_STRS_ds_RSAKeyValue(struct zx_ctx* c, struct zxmd_ds_RSAKeyValue_s* x);
void zxmd_FREE_ds_RSAKeyValue(struct zx_ctx* c, struct zxmd_ds_RSAKeyValue_s* x, int free_strs);
int zxmd_WALK_SO_ds_RSAKeyValue(struct zx_ctx* c, struct zxmd_ds_RSAKeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_ds_RSAKeyValue(struct zx_ctx* c, struct zxmd_ds_RSAKeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_ds_RSAKeyValue(struct zxmd_ds_RSAKeyValue_s* x);
char* zxmd_ENC_SO_ds_RSAKeyValue(struct zxmd_ds_RSAKeyValue_s* x, char* p);
char* zxmd_ENC_WO_ds_RSAKeyValue(struct zxmd_ds_RSAKeyValue_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_ds_RSAKeyValue(struct zx_ctx* c, struct zxmd_ds_RSAKeyValue_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_ds_RSAKeyValue(struct zx_ctx* c, struct zxmd_ds_RSAKeyValue_s* x);

struct zxmd_ds_RSAKeyValue_s {
  ZX_ELEM_EXT
  zxmd_ds_RSAKeyValue_EXT
  struct zx_elem_s* Modulus;	/* {1,1} xs:base64Binary */
  struct zx_elem_s* Exponent;	/* {1,1} xs:base64Binary */
};

struct zx_elem_s* zxmd_ds_RSAKeyValue_GET_Modulus(struct zxmd_ds_RSAKeyValue_s* x, int n);
struct zx_elem_s* zxmd_ds_RSAKeyValue_GET_Exponent(struct zxmd_ds_RSAKeyValue_s* x, int n);
int zxmd_ds_RSAKeyValue_NUM_Modulus(struct zxmd_ds_RSAKeyValue_s* x);
int zxmd_ds_RSAKeyValue_NUM_Exponent(struct zxmd_ds_RSAKeyValue_s* x);
struct zx_elem_s* zxmd_ds_RSAKeyValue_POP_Modulus(struct zxmd_ds_RSAKeyValue_s* x);
struct zx_elem_s* zxmd_ds_RSAKeyValue_POP_Exponent(struct zxmd_ds_RSAKeyValue_s* x);
void zxmd_ds_RSAKeyValue_PUSH_Modulus(struct zxmd_ds_RSAKeyValue_s* x, struct zx_elem_s* y);
void zxmd_ds_RSAKeyValue_PUSH_Exponent(struct zxmd_ds_RSAKeyValue_s* x, struct zx_elem_s* y);
void zxmd_ds_RSAKeyValue_PUT_Modulus(struct zxmd_ds_RSAKeyValue_s* x, int n, struct zx_elem_s* y);
void zxmd_ds_RSAKeyValue_PUT_Exponent(struct zxmd_ds_RSAKeyValue_s* x, int n, struct zx_elem_s* y);
void zxmd_ds_RSAKeyValue_ADD_Modulus(struct zxmd_ds_RSAKeyValue_s* x, int n, struct zx_elem_s* z);
void zxmd_ds_RSAKeyValue_ADD_Exponent(struct zxmd_ds_RSAKeyValue_s* x, int n, struct zx_elem_s* z);
void zxmd_ds_RSAKeyValue_DEL_Modulus(struct zxmd_ds_RSAKeyValue_s* x, int n);
void zxmd_ds_RSAKeyValue_DEL_Exponent(struct zxmd_ds_RSAKeyValue_s* x, int n);
void zxmd_ds_RSAKeyValue_REV_Modulus(struct zxmd_ds_RSAKeyValue_s* x);
void zxmd_ds_RSAKeyValue_REV_Exponent(struct zxmd_ds_RSAKeyValue_s* x);

/* -------------------------- ds_Reference -------------------------- */
/* refby( zxmd_ds_Manifest_s zxmd_ds_SignedInfo_s ) */
#ifndef zxmd_ds_Reference_EXT
#define zxmd_ds_Reference_EXT
#endif

struct zxmd_ds_Reference_s* zxmd_DEC_ds_Reference(struct zx_ctx* c);
struct zxmd_ds_Reference_s* zxmd_NEW_ds_Reference(struct zx_ctx* c);
struct zxmd_ds_Reference_s* zxmd_DEEP_CLONE_ds_Reference(struct zx_ctx* c, struct zxmd_ds_Reference_s* x, int dup_strs);
void zxmd_DUP_STRS_ds_Reference(struct zx_ctx* c, struct zxmd_ds_Reference_s* x);
void zxmd_FREE_ds_Reference(struct zx_ctx* c, struct zxmd_ds_Reference_s* x, int free_strs);
int zxmd_WALK_SO_ds_Reference(struct zx_ctx* c, struct zxmd_ds_Reference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_ds_Reference(struct zx_ctx* c, struct zxmd_ds_Reference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_ds_Reference(struct zxmd_ds_Reference_s* x);
char* zxmd_ENC_SO_ds_Reference(struct zxmd_ds_Reference_s* x, char* p);
char* zxmd_ENC_WO_ds_Reference(struct zxmd_ds_Reference_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_ds_Reference(struct zx_ctx* c, struct zxmd_ds_Reference_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_ds_Reference(struct zx_ctx* c, struct zxmd_ds_Reference_s* x);

struct zxmd_ds_Reference_s {
  ZX_ELEM_EXT
  zxmd_ds_Reference_EXT
  struct zxmd_ds_Transforms_s* Transforms;	/* {0,1}  */
  struct zxmd_ds_DigestMethod_s* DigestMethod;	/* {1,1} nada */
  struct zx_elem_s* DigestValue;	/* {1,1} xs:base64Binary */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
  struct zx_str_s* URI;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* Type;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_ds_Reference_GET_Id(struct zxmd_ds_Reference_s* x);
struct zx_str_s* zxmd_ds_Reference_GET_URI(struct zxmd_ds_Reference_s* x);
struct zx_str_s* zxmd_ds_Reference_GET_Type(struct zxmd_ds_Reference_s* x);
struct zxmd_ds_Transforms_s* zxmd_ds_Reference_GET_Transforms(struct zxmd_ds_Reference_s* x, int n);
struct zxmd_ds_DigestMethod_s* zxmd_ds_Reference_GET_DigestMethod(struct zxmd_ds_Reference_s* x, int n);
struct zx_elem_s* zxmd_ds_Reference_GET_DigestValue(struct zxmd_ds_Reference_s* x, int n);
int zxmd_ds_Reference_NUM_Transforms(struct zxmd_ds_Reference_s* x);
int zxmd_ds_Reference_NUM_DigestMethod(struct zxmd_ds_Reference_s* x);
int zxmd_ds_Reference_NUM_DigestValue(struct zxmd_ds_Reference_s* x);
struct zxmd_ds_Transforms_s* zxmd_ds_Reference_POP_Transforms(struct zxmd_ds_Reference_s* x);
struct zxmd_ds_DigestMethod_s* zxmd_ds_Reference_POP_DigestMethod(struct zxmd_ds_Reference_s* x);
struct zx_elem_s* zxmd_ds_Reference_POP_DigestValue(struct zxmd_ds_Reference_s* x);
void zxmd_ds_Reference_PUSH_Transforms(struct zxmd_ds_Reference_s* x, struct zxmd_ds_Transforms_s* y);
void zxmd_ds_Reference_PUSH_DigestMethod(struct zxmd_ds_Reference_s* x, struct zxmd_ds_DigestMethod_s* y);
void zxmd_ds_Reference_PUSH_DigestValue(struct zxmd_ds_Reference_s* x, struct zx_elem_s* y);
void zxmd_ds_Reference_PUT_Id(struct zxmd_ds_Reference_s* x, struct zx_str_s* y);
void zxmd_ds_Reference_PUT_URI(struct zxmd_ds_Reference_s* x, struct zx_str_s* y);
void zxmd_ds_Reference_PUT_Type(struct zxmd_ds_Reference_s* x, struct zx_str_s* y);
void zxmd_ds_Reference_PUT_Transforms(struct zxmd_ds_Reference_s* x, int n, struct zxmd_ds_Transforms_s* y);
void zxmd_ds_Reference_PUT_DigestMethod(struct zxmd_ds_Reference_s* x, int n, struct zxmd_ds_DigestMethod_s* y);
void zxmd_ds_Reference_PUT_DigestValue(struct zxmd_ds_Reference_s* x, int n, struct zx_elem_s* y);
void zxmd_ds_Reference_ADD_Transforms(struct zxmd_ds_Reference_s* x, int n, struct zxmd_ds_Transforms_s* z);
void zxmd_ds_Reference_ADD_DigestMethod(struct zxmd_ds_Reference_s* x, int n, struct zxmd_ds_DigestMethod_s* z);
void zxmd_ds_Reference_ADD_DigestValue(struct zxmd_ds_Reference_s* x, int n, struct zx_elem_s* z);
void zxmd_ds_Reference_DEL_Transforms(struct zxmd_ds_Reference_s* x, int n);
void zxmd_ds_Reference_DEL_DigestMethod(struct zxmd_ds_Reference_s* x, int n);
void zxmd_ds_Reference_DEL_DigestValue(struct zxmd_ds_Reference_s* x, int n);
void zxmd_ds_Reference_REV_Transforms(struct zxmd_ds_Reference_s* x);
void zxmd_ds_Reference_REV_DigestMethod(struct zxmd_ds_Reference_s* x);
void zxmd_ds_Reference_REV_DigestValue(struct zxmd_ds_Reference_s* x);

/* -------------------------- ds_RetrievalMethod -------------------------- */
/* refby( zxmd_ds_KeyInfo_s zxmd_xenc_OriginatorKeyInfo_s zxmd_xenc_RecipientKeyInfo_s ) */
#ifndef zxmd_ds_RetrievalMethod_EXT
#define zxmd_ds_RetrievalMethod_EXT
#endif

struct zxmd_ds_RetrievalMethod_s* zxmd_DEC_ds_RetrievalMethod(struct zx_ctx* c);
struct zxmd_ds_RetrievalMethod_s* zxmd_NEW_ds_RetrievalMethod(struct zx_ctx* c);
struct zxmd_ds_RetrievalMethod_s* zxmd_DEEP_CLONE_ds_RetrievalMethod(struct zx_ctx* c, struct zxmd_ds_RetrievalMethod_s* x, int dup_strs);
void zxmd_DUP_STRS_ds_RetrievalMethod(struct zx_ctx* c, struct zxmd_ds_RetrievalMethod_s* x);
void zxmd_FREE_ds_RetrievalMethod(struct zx_ctx* c, struct zxmd_ds_RetrievalMethod_s* x, int free_strs);
int zxmd_WALK_SO_ds_RetrievalMethod(struct zx_ctx* c, struct zxmd_ds_RetrievalMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_ds_RetrievalMethod(struct zx_ctx* c, struct zxmd_ds_RetrievalMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_ds_RetrievalMethod(struct zxmd_ds_RetrievalMethod_s* x);
char* zxmd_ENC_SO_ds_RetrievalMethod(struct zxmd_ds_RetrievalMethod_s* x, char* p);
char* zxmd_ENC_WO_ds_RetrievalMethod(struct zxmd_ds_RetrievalMethod_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_ds_RetrievalMethod(struct zx_ctx* c, struct zxmd_ds_RetrievalMethod_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_ds_RetrievalMethod(struct zx_ctx* c, struct zxmd_ds_RetrievalMethod_s* x);

struct zxmd_ds_RetrievalMethod_s {
  ZX_ELEM_EXT
  zxmd_ds_RetrievalMethod_EXT
  struct zxmd_ds_Transforms_s* Transforms;	/* {0,1}  */
  struct zx_str_s* URI;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* Type;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_ds_RetrievalMethod_GET_URI(struct zxmd_ds_RetrievalMethod_s* x);
struct zx_str_s* zxmd_ds_RetrievalMethod_GET_Type(struct zxmd_ds_RetrievalMethod_s* x);
struct zxmd_ds_Transforms_s* zxmd_ds_RetrievalMethod_GET_Transforms(struct zxmd_ds_RetrievalMethod_s* x, int n);
int zxmd_ds_RetrievalMethod_NUM_Transforms(struct zxmd_ds_RetrievalMethod_s* x);
struct zxmd_ds_Transforms_s* zxmd_ds_RetrievalMethod_POP_Transforms(struct zxmd_ds_RetrievalMethod_s* x);
void zxmd_ds_RetrievalMethod_PUSH_Transforms(struct zxmd_ds_RetrievalMethod_s* x, struct zxmd_ds_Transforms_s* y);
void zxmd_ds_RetrievalMethod_PUT_URI(struct zxmd_ds_RetrievalMethod_s* x, struct zx_str_s* y);
void zxmd_ds_RetrievalMethod_PUT_Type(struct zxmd_ds_RetrievalMethod_s* x, struct zx_str_s* y);
void zxmd_ds_RetrievalMethod_PUT_Transforms(struct zxmd_ds_RetrievalMethod_s* x, int n, struct zxmd_ds_Transforms_s* y);
void zxmd_ds_RetrievalMethod_ADD_Transforms(struct zxmd_ds_RetrievalMethod_s* x, int n, struct zxmd_ds_Transforms_s* z);
void zxmd_ds_RetrievalMethod_DEL_Transforms(struct zxmd_ds_RetrievalMethod_s* x, int n);
void zxmd_ds_RetrievalMethod_REV_Transforms(struct zxmd_ds_RetrievalMethod_s* x);

/* -------------------------- ds_SPKIData -------------------------- */
/* refby( zxmd_ds_KeyInfo_s zxmd_xenc_OriginatorKeyInfo_s zxmd_xenc_RecipientKeyInfo_s ) */
#ifndef zxmd_ds_SPKIData_EXT
#define zxmd_ds_SPKIData_EXT
#endif

struct zxmd_ds_SPKIData_s* zxmd_DEC_ds_SPKIData(struct zx_ctx* c);
struct zxmd_ds_SPKIData_s* zxmd_NEW_ds_SPKIData(struct zx_ctx* c);
struct zxmd_ds_SPKIData_s* zxmd_DEEP_CLONE_ds_SPKIData(struct zx_ctx* c, struct zxmd_ds_SPKIData_s* x, int dup_strs);
void zxmd_DUP_STRS_ds_SPKIData(struct zx_ctx* c, struct zxmd_ds_SPKIData_s* x);
void zxmd_FREE_ds_SPKIData(struct zx_ctx* c, struct zxmd_ds_SPKIData_s* x, int free_strs);
int zxmd_WALK_SO_ds_SPKIData(struct zx_ctx* c, struct zxmd_ds_SPKIData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_ds_SPKIData(struct zx_ctx* c, struct zxmd_ds_SPKIData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_ds_SPKIData(struct zxmd_ds_SPKIData_s* x);
char* zxmd_ENC_SO_ds_SPKIData(struct zxmd_ds_SPKIData_s* x, char* p);
char* zxmd_ENC_WO_ds_SPKIData(struct zxmd_ds_SPKIData_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_ds_SPKIData(struct zx_ctx* c, struct zxmd_ds_SPKIData_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_ds_SPKIData(struct zx_ctx* c, struct zxmd_ds_SPKIData_s* x);

struct zxmd_ds_SPKIData_s {
  ZX_ELEM_EXT
  zxmd_ds_SPKIData_EXT
  struct zx_elem_s* SPKISexp;	/* {1,1} xs:base64Binary */
};

struct zx_elem_s* zxmd_ds_SPKIData_GET_SPKISexp(struct zxmd_ds_SPKIData_s* x, int n);
int zxmd_ds_SPKIData_NUM_SPKISexp(struct zxmd_ds_SPKIData_s* x);
struct zx_elem_s* zxmd_ds_SPKIData_POP_SPKISexp(struct zxmd_ds_SPKIData_s* x);
void zxmd_ds_SPKIData_PUSH_SPKISexp(struct zxmd_ds_SPKIData_s* x, struct zx_elem_s* y);
void zxmd_ds_SPKIData_PUT_SPKISexp(struct zxmd_ds_SPKIData_s* x, int n, struct zx_elem_s* y);
void zxmd_ds_SPKIData_ADD_SPKISexp(struct zxmd_ds_SPKIData_s* x, int n, struct zx_elem_s* z);
void zxmd_ds_SPKIData_DEL_SPKISexp(struct zxmd_ds_SPKIData_s* x, int n);
void zxmd_ds_SPKIData_REV_SPKISexp(struct zxmd_ds_SPKIData_s* x);

/* -------------------------- ds_Signature -------------------------- */
/* refby( zxmd_md_IDPSSODescriptor_s zxmd_md_PDPDescriptor_s zxmd_md_SPSSODescriptor_s zxmd_md_AuthnAuthorityDescriptor_s zxmd_md_EntityDescriptor_s zxmd_sa_Assertion_s zxmd_md_AffiliationDescriptor_s zxmd_md_RoleDescriptor_s zxmd_md_EntitiesDescriptor_s zxmd_md_AttributeAuthorityDescriptor_s ) */
#ifndef zxmd_ds_Signature_EXT
#define zxmd_ds_Signature_EXT
#endif

struct zxmd_ds_Signature_s* zxmd_DEC_ds_Signature(struct zx_ctx* c);
struct zxmd_ds_Signature_s* zxmd_NEW_ds_Signature(struct zx_ctx* c);
struct zxmd_ds_Signature_s* zxmd_DEEP_CLONE_ds_Signature(struct zx_ctx* c, struct zxmd_ds_Signature_s* x, int dup_strs);
void zxmd_DUP_STRS_ds_Signature(struct zx_ctx* c, struct zxmd_ds_Signature_s* x);
void zxmd_FREE_ds_Signature(struct zx_ctx* c, struct zxmd_ds_Signature_s* x, int free_strs);
int zxmd_WALK_SO_ds_Signature(struct zx_ctx* c, struct zxmd_ds_Signature_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_ds_Signature(struct zx_ctx* c, struct zxmd_ds_Signature_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_ds_Signature(struct zxmd_ds_Signature_s* x);
char* zxmd_ENC_SO_ds_Signature(struct zxmd_ds_Signature_s* x, char* p);
char* zxmd_ENC_WO_ds_Signature(struct zxmd_ds_Signature_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_ds_Signature(struct zx_ctx* c, struct zxmd_ds_Signature_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_ds_Signature(struct zx_ctx* c, struct zxmd_ds_Signature_s* x);

struct zxmd_ds_Signature_s {
  ZX_ELEM_EXT
  zxmd_ds_Signature_EXT
  struct zxmd_ds_SignedInfo_s* SignedInfo;	/* {1,1} nada */
  struct zxmd_ds_SignatureValue_s* SignatureValue;	/* {1,1} nada */
  struct zxmd_ds_KeyInfo_s* KeyInfo;	/* {0,1} nada */
  struct zxmd_ds_Object_s* Object;	/* {0,-1} nada */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zxmd_ds_Signature_GET_Id(struct zxmd_ds_Signature_s* x);
struct zxmd_ds_SignedInfo_s* zxmd_ds_Signature_GET_SignedInfo(struct zxmd_ds_Signature_s* x, int n);
struct zxmd_ds_SignatureValue_s* zxmd_ds_Signature_GET_SignatureValue(struct zxmd_ds_Signature_s* x, int n);
struct zxmd_ds_KeyInfo_s* zxmd_ds_Signature_GET_KeyInfo(struct zxmd_ds_Signature_s* x, int n);
struct zxmd_ds_Object_s* zxmd_ds_Signature_GET_Object(struct zxmd_ds_Signature_s* x, int n);
int zxmd_ds_Signature_NUM_SignedInfo(struct zxmd_ds_Signature_s* x);
int zxmd_ds_Signature_NUM_SignatureValue(struct zxmd_ds_Signature_s* x);
int zxmd_ds_Signature_NUM_KeyInfo(struct zxmd_ds_Signature_s* x);
int zxmd_ds_Signature_NUM_Object(struct zxmd_ds_Signature_s* x);
struct zxmd_ds_SignedInfo_s* zxmd_ds_Signature_POP_SignedInfo(struct zxmd_ds_Signature_s* x);
struct zxmd_ds_SignatureValue_s* zxmd_ds_Signature_POP_SignatureValue(struct zxmd_ds_Signature_s* x);
struct zxmd_ds_KeyInfo_s* zxmd_ds_Signature_POP_KeyInfo(struct zxmd_ds_Signature_s* x);
struct zxmd_ds_Object_s* zxmd_ds_Signature_POP_Object(struct zxmd_ds_Signature_s* x);
void zxmd_ds_Signature_PUSH_SignedInfo(struct zxmd_ds_Signature_s* x, struct zxmd_ds_SignedInfo_s* y);
void zxmd_ds_Signature_PUSH_SignatureValue(struct zxmd_ds_Signature_s* x, struct zxmd_ds_SignatureValue_s* y);
void zxmd_ds_Signature_PUSH_KeyInfo(struct zxmd_ds_Signature_s* x, struct zxmd_ds_KeyInfo_s* y);
void zxmd_ds_Signature_PUSH_Object(struct zxmd_ds_Signature_s* x, struct zxmd_ds_Object_s* y);
void zxmd_ds_Signature_PUT_Id(struct zxmd_ds_Signature_s* x, struct zx_str_s* y);
void zxmd_ds_Signature_PUT_SignedInfo(struct zxmd_ds_Signature_s* x, int n, struct zxmd_ds_SignedInfo_s* y);
void zxmd_ds_Signature_PUT_SignatureValue(struct zxmd_ds_Signature_s* x, int n, struct zxmd_ds_SignatureValue_s* y);
void zxmd_ds_Signature_PUT_KeyInfo(struct zxmd_ds_Signature_s* x, int n, struct zxmd_ds_KeyInfo_s* y);
void zxmd_ds_Signature_PUT_Object(struct zxmd_ds_Signature_s* x, int n, struct zxmd_ds_Object_s* y);
void zxmd_ds_Signature_ADD_SignedInfo(struct zxmd_ds_Signature_s* x, int n, struct zxmd_ds_SignedInfo_s* z);
void zxmd_ds_Signature_ADD_SignatureValue(struct zxmd_ds_Signature_s* x, int n, struct zxmd_ds_SignatureValue_s* z);
void zxmd_ds_Signature_ADD_KeyInfo(struct zxmd_ds_Signature_s* x, int n, struct zxmd_ds_KeyInfo_s* z);
void zxmd_ds_Signature_ADD_Object(struct zxmd_ds_Signature_s* x, int n, struct zxmd_ds_Object_s* z);
void zxmd_ds_Signature_DEL_SignedInfo(struct zxmd_ds_Signature_s* x, int n);
void zxmd_ds_Signature_DEL_SignatureValue(struct zxmd_ds_Signature_s* x, int n);
void zxmd_ds_Signature_DEL_KeyInfo(struct zxmd_ds_Signature_s* x, int n);
void zxmd_ds_Signature_DEL_Object(struct zxmd_ds_Signature_s* x, int n);
void zxmd_ds_Signature_REV_SignedInfo(struct zxmd_ds_Signature_s* x);
void zxmd_ds_Signature_REV_SignatureValue(struct zxmd_ds_Signature_s* x);
void zxmd_ds_Signature_REV_KeyInfo(struct zxmd_ds_Signature_s* x);
void zxmd_ds_Signature_REV_Object(struct zxmd_ds_Signature_s* x);

/* -------------------------- ds_SignatureMethod -------------------------- */
/* refby( zxmd_ds_SignedInfo_s ) */
#ifndef zxmd_ds_SignatureMethod_EXT
#define zxmd_ds_SignatureMethod_EXT
#endif

struct zxmd_ds_SignatureMethod_s* zxmd_DEC_ds_SignatureMethod(struct zx_ctx* c);
struct zxmd_ds_SignatureMethod_s* zxmd_NEW_ds_SignatureMethod(struct zx_ctx* c);
struct zxmd_ds_SignatureMethod_s* zxmd_DEEP_CLONE_ds_SignatureMethod(struct zx_ctx* c, struct zxmd_ds_SignatureMethod_s* x, int dup_strs);
void zxmd_DUP_STRS_ds_SignatureMethod(struct zx_ctx* c, struct zxmd_ds_SignatureMethod_s* x);
void zxmd_FREE_ds_SignatureMethod(struct zx_ctx* c, struct zxmd_ds_SignatureMethod_s* x, int free_strs);
int zxmd_WALK_SO_ds_SignatureMethod(struct zx_ctx* c, struct zxmd_ds_SignatureMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_ds_SignatureMethod(struct zx_ctx* c, struct zxmd_ds_SignatureMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_ds_SignatureMethod(struct zxmd_ds_SignatureMethod_s* x);
char* zxmd_ENC_SO_ds_SignatureMethod(struct zxmd_ds_SignatureMethod_s* x, char* p);
char* zxmd_ENC_WO_ds_SignatureMethod(struct zxmd_ds_SignatureMethod_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_ds_SignatureMethod(struct zx_ctx* c, struct zxmd_ds_SignatureMethod_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_ds_SignatureMethod(struct zx_ctx* c, struct zxmd_ds_SignatureMethod_s* x);

struct zxmd_ds_SignatureMethod_s {
  ZX_ELEM_EXT
  zxmd_ds_SignatureMethod_EXT
  struct zx_elem_s* HMACOutputLength;	/* {0,1} xs:integer */
  struct zx_str_s* Algorithm;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_ds_SignatureMethod_GET_Algorithm(struct zxmd_ds_SignatureMethod_s* x);
struct zx_elem_s* zxmd_ds_SignatureMethod_GET_HMACOutputLength(struct zxmd_ds_SignatureMethod_s* x, int n);
int zxmd_ds_SignatureMethod_NUM_HMACOutputLength(struct zxmd_ds_SignatureMethod_s* x);
struct zx_elem_s* zxmd_ds_SignatureMethod_POP_HMACOutputLength(struct zxmd_ds_SignatureMethod_s* x);
void zxmd_ds_SignatureMethod_PUSH_HMACOutputLength(struct zxmd_ds_SignatureMethod_s* x, struct zx_elem_s* y);
void zxmd_ds_SignatureMethod_PUT_Algorithm(struct zxmd_ds_SignatureMethod_s* x, struct zx_str_s* y);
void zxmd_ds_SignatureMethod_PUT_HMACOutputLength(struct zxmd_ds_SignatureMethod_s* x, int n, struct zx_elem_s* y);
void zxmd_ds_SignatureMethod_ADD_HMACOutputLength(struct zxmd_ds_SignatureMethod_s* x, int n, struct zx_elem_s* z);
void zxmd_ds_SignatureMethod_DEL_HMACOutputLength(struct zxmd_ds_SignatureMethod_s* x, int n);
void zxmd_ds_SignatureMethod_REV_HMACOutputLength(struct zxmd_ds_SignatureMethod_s* x);

/* -------------------------- ds_SignatureProperties -------------------------- */
/* refby( ) */
#ifndef zxmd_ds_SignatureProperties_EXT
#define zxmd_ds_SignatureProperties_EXT
#endif

struct zxmd_ds_SignatureProperties_s* zxmd_DEC_ds_SignatureProperties(struct zx_ctx* c);
struct zxmd_ds_SignatureProperties_s* zxmd_NEW_ds_SignatureProperties(struct zx_ctx* c);
struct zxmd_ds_SignatureProperties_s* zxmd_DEEP_CLONE_ds_SignatureProperties(struct zx_ctx* c, struct zxmd_ds_SignatureProperties_s* x, int dup_strs);
void zxmd_DUP_STRS_ds_SignatureProperties(struct zx_ctx* c, struct zxmd_ds_SignatureProperties_s* x);
void zxmd_FREE_ds_SignatureProperties(struct zx_ctx* c, struct zxmd_ds_SignatureProperties_s* x, int free_strs);
int zxmd_WALK_SO_ds_SignatureProperties(struct zx_ctx* c, struct zxmd_ds_SignatureProperties_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_ds_SignatureProperties(struct zx_ctx* c, struct zxmd_ds_SignatureProperties_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_ds_SignatureProperties(struct zxmd_ds_SignatureProperties_s* x);
char* zxmd_ENC_SO_ds_SignatureProperties(struct zxmd_ds_SignatureProperties_s* x, char* p);
char* zxmd_ENC_WO_ds_SignatureProperties(struct zxmd_ds_SignatureProperties_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_ds_SignatureProperties(struct zx_ctx* c, struct zxmd_ds_SignatureProperties_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_ds_SignatureProperties(struct zx_ctx* c, struct zxmd_ds_SignatureProperties_s* x);

struct zxmd_ds_SignatureProperties_s {
  ZX_ELEM_EXT
  zxmd_ds_SignatureProperties_EXT
  struct zxmd_ds_SignatureProperty_s* SignatureProperty;	/* {1,-1} nada */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zxmd_ds_SignatureProperties_GET_Id(struct zxmd_ds_SignatureProperties_s* x);
struct zxmd_ds_SignatureProperty_s* zxmd_ds_SignatureProperties_GET_SignatureProperty(struct zxmd_ds_SignatureProperties_s* x, int n);
int zxmd_ds_SignatureProperties_NUM_SignatureProperty(struct zxmd_ds_SignatureProperties_s* x);
struct zxmd_ds_SignatureProperty_s* zxmd_ds_SignatureProperties_POP_SignatureProperty(struct zxmd_ds_SignatureProperties_s* x);
void zxmd_ds_SignatureProperties_PUSH_SignatureProperty(struct zxmd_ds_SignatureProperties_s* x, struct zxmd_ds_SignatureProperty_s* y);
void zxmd_ds_SignatureProperties_PUT_Id(struct zxmd_ds_SignatureProperties_s* x, struct zx_str_s* y);
void zxmd_ds_SignatureProperties_PUT_SignatureProperty(struct zxmd_ds_SignatureProperties_s* x, int n, struct zxmd_ds_SignatureProperty_s* y);
void zxmd_ds_SignatureProperties_ADD_SignatureProperty(struct zxmd_ds_SignatureProperties_s* x, int n, struct zxmd_ds_SignatureProperty_s* z);
void zxmd_ds_SignatureProperties_DEL_SignatureProperty(struct zxmd_ds_SignatureProperties_s* x, int n);
void zxmd_ds_SignatureProperties_REV_SignatureProperty(struct zxmd_ds_SignatureProperties_s* x);

/* -------------------------- ds_SignatureProperty -------------------------- */
/* refby( zxmd_ds_SignatureProperties_s ) */
#ifndef zxmd_ds_SignatureProperty_EXT
#define zxmd_ds_SignatureProperty_EXT
#endif

struct zxmd_ds_SignatureProperty_s* zxmd_DEC_ds_SignatureProperty(struct zx_ctx* c);
struct zxmd_ds_SignatureProperty_s* zxmd_NEW_ds_SignatureProperty(struct zx_ctx* c);
struct zxmd_ds_SignatureProperty_s* zxmd_DEEP_CLONE_ds_SignatureProperty(struct zx_ctx* c, struct zxmd_ds_SignatureProperty_s* x, int dup_strs);
void zxmd_DUP_STRS_ds_SignatureProperty(struct zx_ctx* c, struct zxmd_ds_SignatureProperty_s* x);
void zxmd_FREE_ds_SignatureProperty(struct zx_ctx* c, struct zxmd_ds_SignatureProperty_s* x, int free_strs);
int zxmd_WALK_SO_ds_SignatureProperty(struct zx_ctx* c, struct zxmd_ds_SignatureProperty_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_ds_SignatureProperty(struct zx_ctx* c, struct zxmd_ds_SignatureProperty_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_ds_SignatureProperty(struct zxmd_ds_SignatureProperty_s* x);
char* zxmd_ENC_SO_ds_SignatureProperty(struct zxmd_ds_SignatureProperty_s* x, char* p);
char* zxmd_ENC_WO_ds_SignatureProperty(struct zxmd_ds_SignatureProperty_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_ds_SignatureProperty(struct zx_ctx* c, struct zxmd_ds_SignatureProperty_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_ds_SignatureProperty(struct zx_ctx* c, struct zxmd_ds_SignatureProperty_s* x);

struct zxmd_ds_SignatureProperty_s {
  ZX_ELEM_EXT
  zxmd_ds_SignatureProperty_EXT
  struct zx_str_s* Target;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zxmd_ds_SignatureProperty_GET_Target(struct zxmd_ds_SignatureProperty_s* x);
struct zx_str_s* zxmd_ds_SignatureProperty_GET_Id(struct zxmd_ds_SignatureProperty_s* x);
void zxmd_ds_SignatureProperty_PUT_Target(struct zxmd_ds_SignatureProperty_s* x, struct zx_str_s* y);
void zxmd_ds_SignatureProperty_PUT_Id(struct zxmd_ds_SignatureProperty_s* x, struct zx_str_s* y);

/* -------------------------- ds_SignatureValue -------------------------- */
/* refby( zxmd_ds_Signature_s ) */
#ifndef zxmd_ds_SignatureValue_EXT
#define zxmd_ds_SignatureValue_EXT
#endif

struct zxmd_ds_SignatureValue_s* zxmd_DEC_ds_SignatureValue(struct zx_ctx* c);
struct zxmd_ds_SignatureValue_s* zxmd_NEW_ds_SignatureValue(struct zx_ctx* c);
struct zxmd_ds_SignatureValue_s* zxmd_DEEP_CLONE_ds_SignatureValue(struct zx_ctx* c, struct zxmd_ds_SignatureValue_s* x, int dup_strs);
void zxmd_DUP_STRS_ds_SignatureValue(struct zx_ctx* c, struct zxmd_ds_SignatureValue_s* x);
void zxmd_FREE_ds_SignatureValue(struct zx_ctx* c, struct zxmd_ds_SignatureValue_s* x, int free_strs);
int zxmd_WALK_SO_ds_SignatureValue(struct zx_ctx* c, struct zxmd_ds_SignatureValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_ds_SignatureValue(struct zx_ctx* c, struct zxmd_ds_SignatureValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_ds_SignatureValue(struct zxmd_ds_SignatureValue_s* x);
char* zxmd_ENC_SO_ds_SignatureValue(struct zxmd_ds_SignatureValue_s* x, char* p);
char* zxmd_ENC_WO_ds_SignatureValue(struct zxmd_ds_SignatureValue_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_ds_SignatureValue(struct zx_ctx* c, struct zxmd_ds_SignatureValue_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_ds_SignatureValue(struct zx_ctx* c, struct zxmd_ds_SignatureValue_s* x);

struct zxmd_ds_SignatureValue_s {
  ZX_ELEM_EXT
  zxmd_ds_SignatureValue_EXT
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zxmd_ds_SignatureValue_GET_Id(struct zxmd_ds_SignatureValue_s* x);
void zxmd_ds_SignatureValue_PUT_Id(struct zxmd_ds_SignatureValue_s* x, struct zx_str_s* y);

/* -------------------------- ds_SignedInfo -------------------------- */
/* refby( zxmd_ds_Signature_s ) */
#ifndef zxmd_ds_SignedInfo_EXT
#define zxmd_ds_SignedInfo_EXT
#endif

struct zxmd_ds_SignedInfo_s* zxmd_DEC_ds_SignedInfo(struct zx_ctx* c);
struct zxmd_ds_SignedInfo_s* zxmd_NEW_ds_SignedInfo(struct zx_ctx* c);
struct zxmd_ds_SignedInfo_s* zxmd_DEEP_CLONE_ds_SignedInfo(struct zx_ctx* c, struct zxmd_ds_SignedInfo_s* x, int dup_strs);
void zxmd_DUP_STRS_ds_SignedInfo(struct zx_ctx* c, struct zxmd_ds_SignedInfo_s* x);
void zxmd_FREE_ds_SignedInfo(struct zx_ctx* c, struct zxmd_ds_SignedInfo_s* x, int free_strs);
int zxmd_WALK_SO_ds_SignedInfo(struct zx_ctx* c, struct zxmd_ds_SignedInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_ds_SignedInfo(struct zx_ctx* c, struct zxmd_ds_SignedInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_ds_SignedInfo(struct zxmd_ds_SignedInfo_s* x);
char* zxmd_ENC_SO_ds_SignedInfo(struct zxmd_ds_SignedInfo_s* x, char* p);
char* zxmd_ENC_WO_ds_SignedInfo(struct zxmd_ds_SignedInfo_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_ds_SignedInfo(struct zx_ctx* c, struct zxmd_ds_SignedInfo_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_ds_SignedInfo(struct zx_ctx* c, struct zxmd_ds_SignedInfo_s* x);

struct zxmd_ds_SignedInfo_s {
  ZX_ELEM_EXT
  zxmd_ds_SignedInfo_EXT
  struct zxmd_ds_CanonicalizationMethod_s* CanonicalizationMethod;	/* {1,1} nada */
  struct zxmd_ds_SignatureMethod_s* SignatureMethod;	/* {1,1} nada */
  struct zxmd_ds_Reference_s* Reference;	/* {1,-1} nada */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zxmd_ds_SignedInfo_GET_Id(struct zxmd_ds_SignedInfo_s* x);
struct zxmd_ds_CanonicalizationMethod_s* zxmd_ds_SignedInfo_GET_CanonicalizationMethod(struct zxmd_ds_SignedInfo_s* x, int n);
struct zxmd_ds_SignatureMethod_s* zxmd_ds_SignedInfo_GET_SignatureMethod(struct zxmd_ds_SignedInfo_s* x, int n);
struct zxmd_ds_Reference_s* zxmd_ds_SignedInfo_GET_Reference(struct zxmd_ds_SignedInfo_s* x, int n);
int zxmd_ds_SignedInfo_NUM_CanonicalizationMethod(struct zxmd_ds_SignedInfo_s* x);
int zxmd_ds_SignedInfo_NUM_SignatureMethod(struct zxmd_ds_SignedInfo_s* x);
int zxmd_ds_SignedInfo_NUM_Reference(struct zxmd_ds_SignedInfo_s* x);
struct zxmd_ds_CanonicalizationMethod_s* zxmd_ds_SignedInfo_POP_CanonicalizationMethod(struct zxmd_ds_SignedInfo_s* x);
struct zxmd_ds_SignatureMethod_s* zxmd_ds_SignedInfo_POP_SignatureMethod(struct zxmd_ds_SignedInfo_s* x);
struct zxmd_ds_Reference_s* zxmd_ds_SignedInfo_POP_Reference(struct zxmd_ds_SignedInfo_s* x);
void zxmd_ds_SignedInfo_PUSH_CanonicalizationMethod(struct zxmd_ds_SignedInfo_s* x, struct zxmd_ds_CanonicalizationMethod_s* y);
void zxmd_ds_SignedInfo_PUSH_SignatureMethod(struct zxmd_ds_SignedInfo_s* x, struct zxmd_ds_SignatureMethod_s* y);
void zxmd_ds_SignedInfo_PUSH_Reference(struct zxmd_ds_SignedInfo_s* x, struct zxmd_ds_Reference_s* y);
void zxmd_ds_SignedInfo_PUT_Id(struct zxmd_ds_SignedInfo_s* x, struct zx_str_s* y);
void zxmd_ds_SignedInfo_PUT_CanonicalizationMethod(struct zxmd_ds_SignedInfo_s* x, int n, struct zxmd_ds_CanonicalizationMethod_s* y);
void zxmd_ds_SignedInfo_PUT_SignatureMethod(struct zxmd_ds_SignedInfo_s* x, int n, struct zxmd_ds_SignatureMethod_s* y);
void zxmd_ds_SignedInfo_PUT_Reference(struct zxmd_ds_SignedInfo_s* x, int n, struct zxmd_ds_Reference_s* y);
void zxmd_ds_SignedInfo_ADD_CanonicalizationMethod(struct zxmd_ds_SignedInfo_s* x, int n, struct zxmd_ds_CanonicalizationMethod_s* z);
void zxmd_ds_SignedInfo_ADD_SignatureMethod(struct zxmd_ds_SignedInfo_s* x, int n, struct zxmd_ds_SignatureMethod_s* z);
void zxmd_ds_SignedInfo_ADD_Reference(struct zxmd_ds_SignedInfo_s* x, int n, struct zxmd_ds_Reference_s* z);
void zxmd_ds_SignedInfo_DEL_CanonicalizationMethod(struct zxmd_ds_SignedInfo_s* x, int n);
void zxmd_ds_SignedInfo_DEL_SignatureMethod(struct zxmd_ds_SignedInfo_s* x, int n);
void zxmd_ds_SignedInfo_DEL_Reference(struct zxmd_ds_SignedInfo_s* x, int n);
void zxmd_ds_SignedInfo_REV_CanonicalizationMethod(struct zxmd_ds_SignedInfo_s* x);
void zxmd_ds_SignedInfo_REV_SignatureMethod(struct zxmd_ds_SignedInfo_s* x);
void zxmd_ds_SignedInfo_REV_Reference(struct zxmd_ds_SignedInfo_s* x);

/* -------------------------- ds_Transform -------------------------- */
/* refby( zxmd_xenc_Transforms_s zxmd_ds_Transforms_s ) */
#ifndef zxmd_ds_Transform_EXT
#define zxmd_ds_Transform_EXT
#endif

struct zxmd_ds_Transform_s* zxmd_DEC_ds_Transform(struct zx_ctx* c);
struct zxmd_ds_Transform_s* zxmd_NEW_ds_Transform(struct zx_ctx* c);
struct zxmd_ds_Transform_s* zxmd_DEEP_CLONE_ds_Transform(struct zx_ctx* c, struct zxmd_ds_Transform_s* x, int dup_strs);
void zxmd_DUP_STRS_ds_Transform(struct zx_ctx* c, struct zxmd_ds_Transform_s* x);
void zxmd_FREE_ds_Transform(struct zx_ctx* c, struct zxmd_ds_Transform_s* x, int free_strs);
int zxmd_WALK_SO_ds_Transform(struct zx_ctx* c, struct zxmd_ds_Transform_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_ds_Transform(struct zx_ctx* c, struct zxmd_ds_Transform_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_ds_Transform(struct zxmd_ds_Transform_s* x);
char* zxmd_ENC_SO_ds_Transform(struct zxmd_ds_Transform_s* x, char* p);
char* zxmd_ENC_WO_ds_Transform(struct zxmd_ds_Transform_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_ds_Transform(struct zx_ctx* c, struct zxmd_ds_Transform_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_ds_Transform(struct zx_ctx* c, struct zxmd_ds_Transform_s* x);

struct zxmd_ds_Transform_s {
  ZX_ELEM_EXT
  zxmd_ds_Transform_EXT
  struct zx_elem_s* XPath;	/* {0,-1} xs:string */
  struct zx_str_s* Algorithm;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_ds_Transform_GET_Algorithm(struct zxmd_ds_Transform_s* x);
struct zx_elem_s* zxmd_ds_Transform_GET_XPath(struct zxmd_ds_Transform_s* x, int n);
int zxmd_ds_Transform_NUM_XPath(struct zxmd_ds_Transform_s* x);
struct zx_elem_s* zxmd_ds_Transform_POP_XPath(struct zxmd_ds_Transform_s* x);
void zxmd_ds_Transform_PUSH_XPath(struct zxmd_ds_Transform_s* x, struct zx_elem_s* y);
void zxmd_ds_Transform_PUT_Algorithm(struct zxmd_ds_Transform_s* x, struct zx_str_s* y);
void zxmd_ds_Transform_PUT_XPath(struct zxmd_ds_Transform_s* x, int n, struct zx_elem_s* y);
void zxmd_ds_Transform_ADD_XPath(struct zxmd_ds_Transform_s* x, int n, struct zx_elem_s* z);
void zxmd_ds_Transform_DEL_XPath(struct zxmd_ds_Transform_s* x, int n);
void zxmd_ds_Transform_REV_XPath(struct zxmd_ds_Transform_s* x);

/* -------------------------- ds_Transforms -------------------------- */
/* refby( zxmd_ds_Reference_s zxmd_ds_RetrievalMethod_s ) */
#ifndef zxmd_ds_Transforms_EXT
#define zxmd_ds_Transforms_EXT
#endif

struct zxmd_ds_Transforms_s* zxmd_DEC_ds_Transforms(struct zx_ctx* c);
struct zxmd_ds_Transforms_s* zxmd_NEW_ds_Transforms(struct zx_ctx* c);
struct zxmd_ds_Transforms_s* zxmd_DEEP_CLONE_ds_Transforms(struct zx_ctx* c, struct zxmd_ds_Transforms_s* x, int dup_strs);
void zxmd_DUP_STRS_ds_Transforms(struct zx_ctx* c, struct zxmd_ds_Transforms_s* x);
void zxmd_FREE_ds_Transforms(struct zx_ctx* c, struct zxmd_ds_Transforms_s* x, int free_strs);
int zxmd_WALK_SO_ds_Transforms(struct zx_ctx* c, struct zxmd_ds_Transforms_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_ds_Transforms(struct zx_ctx* c, struct zxmd_ds_Transforms_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_ds_Transforms(struct zxmd_ds_Transforms_s* x);
char* zxmd_ENC_SO_ds_Transforms(struct zxmd_ds_Transforms_s* x, char* p);
char* zxmd_ENC_WO_ds_Transforms(struct zxmd_ds_Transforms_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_ds_Transforms(struct zx_ctx* c, struct zxmd_ds_Transforms_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_ds_Transforms(struct zx_ctx* c, struct zxmd_ds_Transforms_s* x);

struct zxmd_ds_Transforms_s {
  ZX_ELEM_EXT
  zxmd_ds_Transforms_EXT
  struct zxmd_ds_Transform_s* Transform;	/* {1,-1} nada */
};

struct zxmd_ds_Transform_s* zxmd_ds_Transforms_GET_Transform(struct zxmd_ds_Transforms_s* x, int n);
int zxmd_ds_Transforms_NUM_Transform(struct zxmd_ds_Transforms_s* x);
struct zxmd_ds_Transform_s* zxmd_ds_Transforms_POP_Transform(struct zxmd_ds_Transforms_s* x);
void zxmd_ds_Transforms_PUSH_Transform(struct zxmd_ds_Transforms_s* x, struct zxmd_ds_Transform_s* y);
void zxmd_ds_Transforms_PUT_Transform(struct zxmd_ds_Transforms_s* x, int n, struct zxmd_ds_Transform_s* y);
void zxmd_ds_Transforms_ADD_Transform(struct zxmd_ds_Transforms_s* x, int n, struct zxmd_ds_Transform_s* z);
void zxmd_ds_Transforms_DEL_Transform(struct zxmd_ds_Transforms_s* x, int n);
void zxmd_ds_Transforms_REV_Transform(struct zxmd_ds_Transforms_s* x);

/* -------------------------- ds_X509Data -------------------------- */
/* refby( zxmd_ds_KeyInfo_s zxmd_xenc_OriginatorKeyInfo_s zxmd_xenc_RecipientKeyInfo_s ) */
#ifndef zxmd_ds_X509Data_EXT
#define zxmd_ds_X509Data_EXT
#endif

struct zxmd_ds_X509Data_s* zxmd_DEC_ds_X509Data(struct zx_ctx* c);
struct zxmd_ds_X509Data_s* zxmd_NEW_ds_X509Data(struct zx_ctx* c);
struct zxmd_ds_X509Data_s* zxmd_DEEP_CLONE_ds_X509Data(struct zx_ctx* c, struct zxmd_ds_X509Data_s* x, int dup_strs);
void zxmd_DUP_STRS_ds_X509Data(struct zx_ctx* c, struct zxmd_ds_X509Data_s* x);
void zxmd_FREE_ds_X509Data(struct zx_ctx* c, struct zxmd_ds_X509Data_s* x, int free_strs);
int zxmd_WALK_SO_ds_X509Data(struct zx_ctx* c, struct zxmd_ds_X509Data_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_ds_X509Data(struct zx_ctx* c, struct zxmd_ds_X509Data_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_ds_X509Data(struct zxmd_ds_X509Data_s* x);
char* zxmd_ENC_SO_ds_X509Data(struct zxmd_ds_X509Data_s* x, char* p);
char* zxmd_ENC_WO_ds_X509Data(struct zxmd_ds_X509Data_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_ds_X509Data(struct zx_ctx* c, struct zxmd_ds_X509Data_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_ds_X509Data(struct zx_ctx* c, struct zxmd_ds_X509Data_s* x);

struct zxmd_ds_X509Data_s {
  ZX_ELEM_EXT
  zxmd_ds_X509Data_EXT
  struct zxmd_ds_X509IssuerSerial_s* X509IssuerSerial;	/* {0,-1}  */
  struct zx_elem_s* X509SKI;	/* {0,-1} xs:base64Binary */
  struct zx_elem_s* X509SubjectName;	/* {0,-1} xs:string */
  struct zx_elem_s* X509Certificate;	/* {0,-1} xs:base64Binary */
  struct zx_elem_s* X509CRL;	/* {0,-1} xs:base64Binary */
};

struct zxmd_ds_X509IssuerSerial_s* zxmd_ds_X509Data_GET_X509IssuerSerial(struct zxmd_ds_X509Data_s* x, int n);
struct zx_elem_s* zxmd_ds_X509Data_GET_X509SKI(struct zxmd_ds_X509Data_s* x, int n);
struct zx_elem_s* zxmd_ds_X509Data_GET_X509SubjectName(struct zxmd_ds_X509Data_s* x, int n);
struct zx_elem_s* zxmd_ds_X509Data_GET_X509Certificate(struct zxmd_ds_X509Data_s* x, int n);
struct zx_elem_s* zxmd_ds_X509Data_GET_X509CRL(struct zxmd_ds_X509Data_s* x, int n);
int zxmd_ds_X509Data_NUM_X509IssuerSerial(struct zxmd_ds_X509Data_s* x);
int zxmd_ds_X509Data_NUM_X509SKI(struct zxmd_ds_X509Data_s* x);
int zxmd_ds_X509Data_NUM_X509SubjectName(struct zxmd_ds_X509Data_s* x);
int zxmd_ds_X509Data_NUM_X509Certificate(struct zxmd_ds_X509Data_s* x);
int zxmd_ds_X509Data_NUM_X509CRL(struct zxmd_ds_X509Data_s* x);
struct zxmd_ds_X509IssuerSerial_s* zxmd_ds_X509Data_POP_X509IssuerSerial(struct zxmd_ds_X509Data_s* x);
struct zx_elem_s* zxmd_ds_X509Data_POP_X509SKI(struct zxmd_ds_X509Data_s* x);
struct zx_elem_s* zxmd_ds_X509Data_POP_X509SubjectName(struct zxmd_ds_X509Data_s* x);
struct zx_elem_s* zxmd_ds_X509Data_POP_X509Certificate(struct zxmd_ds_X509Data_s* x);
struct zx_elem_s* zxmd_ds_X509Data_POP_X509CRL(struct zxmd_ds_X509Data_s* x);
void zxmd_ds_X509Data_PUSH_X509IssuerSerial(struct zxmd_ds_X509Data_s* x, struct zxmd_ds_X509IssuerSerial_s* y);
void zxmd_ds_X509Data_PUSH_X509SKI(struct zxmd_ds_X509Data_s* x, struct zx_elem_s* y);
void zxmd_ds_X509Data_PUSH_X509SubjectName(struct zxmd_ds_X509Data_s* x, struct zx_elem_s* y);
void zxmd_ds_X509Data_PUSH_X509Certificate(struct zxmd_ds_X509Data_s* x, struct zx_elem_s* y);
void zxmd_ds_X509Data_PUSH_X509CRL(struct zxmd_ds_X509Data_s* x, struct zx_elem_s* y);
void zxmd_ds_X509Data_PUT_X509IssuerSerial(struct zxmd_ds_X509Data_s* x, int n, struct zxmd_ds_X509IssuerSerial_s* y);
void zxmd_ds_X509Data_PUT_X509SKI(struct zxmd_ds_X509Data_s* x, int n, struct zx_elem_s* y);
void zxmd_ds_X509Data_PUT_X509SubjectName(struct zxmd_ds_X509Data_s* x, int n, struct zx_elem_s* y);
void zxmd_ds_X509Data_PUT_X509Certificate(struct zxmd_ds_X509Data_s* x, int n, struct zx_elem_s* y);
void zxmd_ds_X509Data_PUT_X509CRL(struct zxmd_ds_X509Data_s* x, int n, struct zx_elem_s* y);
void zxmd_ds_X509Data_ADD_X509IssuerSerial(struct zxmd_ds_X509Data_s* x, int n, struct zxmd_ds_X509IssuerSerial_s* z);
void zxmd_ds_X509Data_ADD_X509SKI(struct zxmd_ds_X509Data_s* x, int n, struct zx_elem_s* z);
void zxmd_ds_X509Data_ADD_X509SubjectName(struct zxmd_ds_X509Data_s* x, int n, struct zx_elem_s* z);
void zxmd_ds_X509Data_ADD_X509Certificate(struct zxmd_ds_X509Data_s* x, int n, struct zx_elem_s* z);
void zxmd_ds_X509Data_ADD_X509CRL(struct zxmd_ds_X509Data_s* x, int n, struct zx_elem_s* z);
void zxmd_ds_X509Data_DEL_X509IssuerSerial(struct zxmd_ds_X509Data_s* x, int n);
void zxmd_ds_X509Data_DEL_X509SKI(struct zxmd_ds_X509Data_s* x, int n);
void zxmd_ds_X509Data_DEL_X509SubjectName(struct zxmd_ds_X509Data_s* x, int n);
void zxmd_ds_X509Data_DEL_X509Certificate(struct zxmd_ds_X509Data_s* x, int n);
void zxmd_ds_X509Data_DEL_X509CRL(struct zxmd_ds_X509Data_s* x, int n);
void zxmd_ds_X509Data_REV_X509IssuerSerial(struct zxmd_ds_X509Data_s* x);
void zxmd_ds_X509Data_REV_X509SKI(struct zxmd_ds_X509Data_s* x);
void zxmd_ds_X509Data_REV_X509SubjectName(struct zxmd_ds_X509Data_s* x);
void zxmd_ds_X509Data_REV_X509Certificate(struct zxmd_ds_X509Data_s* x);
void zxmd_ds_X509Data_REV_X509CRL(struct zxmd_ds_X509Data_s* x);

/* -------------------------- ds_X509IssuerSerial -------------------------- */
/* refby( zxmd_ds_X509Data_s ) */
#ifndef zxmd_ds_X509IssuerSerial_EXT
#define zxmd_ds_X509IssuerSerial_EXT
#endif

struct zxmd_ds_X509IssuerSerial_s* zxmd_DEC_ds_X509IssuerSerial(struct zx_ctx* c);
struct zxmd_ds_X509IssuerSerial_s* zxmd_NEW_ds_X509IssuerSerial(struct zx_ctx* c);
struct zxmd_ds_X509IssuerSerial_s* zxmd_DEEP_CLONE_ds_X509IssuerSerial(struct zx_ctx* c, struct zxmd_ds_X509IssuerSerial_s* x, int dup_strs);
void zxmd_DUP_STRS_ds_X509IssuerSerial(struct zx_ctx* c, struct zxmd_ds_X509IssuerSerial_s* x);
void zxmd_FREE_ds_X509IssuerSerial(struct zx_ctx* c, struct zxmd_ds_X509IssuerSerial_s* x, int free_strs);
int zxmd_WALK_SO_ds_X509IssuerSerial(struct zx_ctx* c, struct zxmd_ds_X509IssuerSerial_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_ds_X509IssuerSerial(struct zx_ctx* c, struct zxmd_ds_X509IssuerSerial_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_ds_X509IssuerSerial(struct zxmd_ds_X509IssuerSerial_s* x);
char* zxmd_ENC_SO_ds_X509IssuerSerial(struct zxmd_ds_X509IssuerSerial_s* x, char* p);
char* zxmd_ENC_WO_ds_X509IssuerSerial(struct zxmd_ds_X509IssuerSerial_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_ds_X509IssuerSerial(struct zx_ctx* c, struct zxmd_ds_X509IssuerSerial_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_ds_X509IssuerSerial(struct zx_ctx* c, struct zxmd_ds_X509IssuerSerial_s* x);

struct zxmd_ds_X509IssuerSerial_s {
  ZX_ELEM_EXT
  zxmd_ds_X509IssuerSerial_EXT
  struct zx_elem_s* X509IssuerName;	/* {1,1} xs:string */
  struct zx_elem_s* X509SerialNumber;	/* {1,1} xs:integer */
};

struct zx_elem_s* zxmd_ds_X509IssuerSerial_GET_X509IssuerName(struct zxmd_ds_X509IssuerSerial_s* x, int n);
struct zx_elem_s* zxmd_ds_X509IssuerSerial_GET_X509SerialNumber(struct zxmd_ds_X509IssuerSerial_s* x, int n);
int zxmd_ds_X509IssuerSerial_NUM_X509IssuerName(struct zxmd_ds_X509IssuerSerial_s* x);
int zxmd_ds_X509IssuerSerial_NUM_X509SerialNumber(struct zxmd_ds_X509IssuerSerial_s* x);
struct zx_elem_s* zxmd_ds_X509IssuerSerial_POP_X509IssuerName(struct zxmd_ds_X509IssuerSerial_s* x);
struct zx_elem_s* zxmd_ds_X509IssuerSerial_POP_X509SerialNumber(struct zxmd_ds_X509IssuerSerial_s* x);
void zxmd_ds_X509IssuerSerial_PUSH_X509IssuerName(struct zxmd_ds_X509IssuerSerial_s* x, struct zx_elem_s* y);
void zxmd_ds_X509IssuerSerial_PUSH_X509SerialNumber(struct zxmd_ds_X509IssuerSerial_s* x, struct zx_elem_s* y);
void zxmd_ds_X509IssuerSerial_PUT_X509IssuerName(struct zxmd_ds_X509IssuerSerial_s* x, int n, struct zx_elem_s* y);
void zxmd_ds_X509IssuerSerial_PUT_X509SerialNumber(struct zxmd_ds_X509IssuerSerial_s* x, int n, struct zx_elem_s* y);
void zxmd_ds_X509IssuerSerial_ADD_X509IssuerName(struct zxmd_ds_X509IssuerSerial_s* x, int n, struct zx_elem_s* z);
void zxmd_ds_X509IssuerSerial_ADD_X509SerialNumber(struct zxmd_ds_X509IssuerSerial_s* x, int n, struct zx_elem_s* z);
void zxmd_ds_X509IssuerSerial_DEL_X509IssuerName(struct zxmd_ds_X509IssuerSerial_s* x, int n);
void zxmd_ds_X509IssuerSerial_DEL_X509SerialNumber(struct zxmd_ds_X509IssuerSerial_s* x, int n);
void zxmd_ds_X509IssuerSerial_REV_X509IssuerName(struct zxmd_ds_X509IssuerSerial_s* x);
void zxmd_ds_X509IssuerSerial_REV_X509SerialNumber(struct zxmd_ds_X509IssuerSerial_s* x);

/* -------------------------- md_AdditionalMetadataLocation -------------------------- */
/* refby( zxmd_md_EntityDescriptor_s ) */
#ifndef zxmd_md_AdditionalMetadataLocation_EXT
#define zxmd_md_AdditionalMetadataLocation_EXT
#endif

struct zxmd_md_AdditionalMetadataLocation_s* zxmd_DEC_md_AdditionalMetadataLocation(struct zx_ctx* c);
struct zxmd_md_AdditionalMetadataLocation_s* zxmd_NEW_md_AdditionalMetadataLocation(struct zx_ctx* c);
struct zxmd_md_AdditionalMetadataLocation_s* zxmd_DEEP_CLONE_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zxmd_md_AdditionalMetadataLocation_s* x, int dup_strs);
void zxmd_DUP_STRS_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zxmd_md_AdditionalMetadataLocation_s* x);
void zxmd_FREE_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zxmd_md_AdditionalMetadataLocation_s* x, int free_strs);
int zxmd_WALK_SO_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zxmd_md_AdditionalMetadataLocation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zxmd_md_AdditionalMetadataLocation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_AdditionalMetadataLocation(struct zxmd_md_AdditionalMetadataLocation_s* x);
char* zxmd_ENC_SO_md_AdditionalMetadataLocation(struct zxmd_md_AdditionalMetadataLocation_s* x, char* p);
char* zxmd_ENC_WO_md_AdditionalMetadataLocation(struct zxmd_md_AdditionalMetadataLocation_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zxmd_md_AdditionalMetadataLocation_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zxmd_md_AdditionalMetadataLocation_s* x);

struct zxmd_md_AdditionalMetadataLocation_s {
  ZX_ELEM_EXT
  zxmd_md_AdditionalMetadataLocation_EXT
  struct zx_str_s* namespace;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_md_AdditionalMetadataLocation_GET_namespace(struct zxmd_md_AdditionalMetadataLocation_s* x);
void zxmd_md_AdditionalMetadataLocation_PUT_namespace(struct zxmd_md_AdditionalMetadataLocation_s* x, struct zx_str_s* y);

/* -------------------------- md_AffiliationDescriptor -------------------------- */
/* refby( zxmd_md_EntityDescriptor_s ) */
#ifndef zxmd_md_AffiliationDescriptor_EXT
#define zxmd_md_AffiliationDescriptor_EXT
#endif

struct zxmd_md_AffiliationDescriptor_s* zxmd_DEC_md_AffiliationDescriptor(struct zx_ctx* c);
struct zxmd_md_AffiliationDescriptor_s* zxmd_NEW_md_AffiliationDescriptor(struct zx_ctx* c);
struct zxmd_md_AffiliationDescriptor_s* zxmd_DEEP_CLONE_md_AffiliationDescriptor(struct zx_ctx* c, struct zxmd_md_AffiliationDescriptor_s* x, int dup_strs);
void zxmd_DUP_STRS_md_AffiliationDescriptor(struct zx_ctx* c, struct zxmd_md_AffiliationDescriptor_s* x);
void zxmd_FREE_md_AffiliationDescriptor(struct zx_ctx* c, struct zxmd_md_AffiliationDescriptor_s* x, int free_strs);
int zxmd_WALK_SO_md_AffiliationDescriptor(struct zx_ctx* c, struct zxmd_md_AffiliationDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_AffiliationDescriptor(struct zx_ctx* c, struct zxmd_md_AffiliationDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_AffiliationDescriptor(struct zxmd_md_AffiliationDescriptor_s* x);
char* zxmd_ENC_SO_md_AffiliationDescriptor(struct zxmd_md_AffiliationDescriptor_s* x, char* p);
char* zxmd_ENC_WO_md_AffiliationDescriptor(struct zxmd_md_AffiliationDescriptor_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_AffiliationDescriptor(struct zx_ctx* c, struct zxmd_md_AffiliationDescriptor_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_AffiliationDescriptor(struct zx_ctx* c, struct zxmd_md_AffiliationDescriptor_s* x);

struct zxmd_md_AffiliationDescriptor_s {
  ZX_ELEM_EXT
  zxmd_md_AffiliationDescriptor_EXT
  struct zxmd_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zxmd_md_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_elem_s* AffiliateMember;	/* {1,-1} xs:anyURI */
  struct zxmd_md_KeyDescriptor_s* KeyDescriptor;	/* {0,-1} nada */
  struct zx_str_s* affiliationOwnerID;	/* {1,1} attribute md:entityIDType */
  struct zx_str_s* validUntil;	/* {0,1} attribute dateTime */
  struct zx_str_s* cacheDuration;	/* {0,1} attribute duration */
  struct zx_str_s* ID;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zxmd_md_AffiliationDescriptor_GET_affiliationOwnerID(struct zxmd_md_AffiliationDescriptor_s* x);
struct zx_str_s* zxmd_md_AffiliationDescriptor_GET_validUntil(struct zxmd_md_AffiliationDescriptor_s* x);
struct zx_str_s* zxmd_md_AffiliationDescriptor_GET_cacheDuration(struct zxmd_md_AffiliationDescriptor_s* x);
struct zx_str_s* zxmd_md_AffiliationDescriptor_GET_ID(struct zxmd_md_AffiliationDescriptor_s* x);
struct zxmd_ds_Signature_s* zxmd_md_AffiliationDescriptor_GET_Signature(struct zxmd_md_AffiliationDescriptor_s* x, int n);
struct zxmd_md_Extensions_s* zxmd_md_AffiliationDescriptor_GET_Extensions(struct zxmd_md_AffiliationDescriptor_s* x, int n);
struct zx_elem_s* zxmd_md_AffiliationDescriptor_GET_AffiliateMember(struct zxmd_md_AffiliationDescriptor_s* x, int n);
struct zxmd_md_KeyDescriptor_s* zxmd_md_AffiliationDescriptor_GET_KeyDescriptor(struct zxmd_md_AffiliationDescriptor_s* x, int n);
int zxmd_md_AffiliationDescriptor_NUM_Signature(struct zxmd_md_AffiliationDescriptor_s* x);
int zxmd_md_AffiliationDescriptor_NUM_Extensions(struct zxmd_md_AffiliationDescriptor_s* x);
int zxmd_md_AffiliationDescriptor_NUM_AffiliateMember(struct zxmd_md_AffiliationDescriptor_s* x);
int zxmd_md_AffiliationDescriptor_NUM_KeyDescriptor(struct zxmd_md_AffiliationDescriptor_s* x);
struct zxmd_ds_Signature_s* zxmd_md_AffiliationDescriptor_POP_Signature(struct zxmd_md_AffiliationDescriptor_s* x);
struct zxmd_md_Extensions_s* zxmd_md_AffiliationDescriptor_POP_Extensions(struct zxmd_md_AffiliationDescriptor_s* x);
struct zx_elem_s* zxmd_md_AffiliationDescriptor_POP_AffiliateMember(struct zxmd_md_AffiliationDescriptor_s* x);
struct zxmd_md_KeyDescriptor_s* zxmd_md_AffiliationDescriptor_POP_KeyDescriptor(struct zxmd_md_AffiliationDescriptor_s* x);
void zxmd_md_AffiliationDescriptor_PUSH_Signature(struct zxmd_md_AffiliationDescriptor_s* x, struct zxmd_ds_Signature_s* y);
void zxmd_md_AffiliationDescriptor_PUSH_Extensions(struct zxmd_md_AffiliationDescriptor_s* x, struct zxmd_md_Extensions_s* y);
void zxmd_md_AffiliationDescriptor_PUSH_AffiliateMember(struct zxmd_md_AffiliationDescriptor_s* x, struct zx_elem_s* y);
void zxmd_md_AffiliationDescriptor_PUSH_KeyDescriptor(struct zxmd_md_AffiliationDescriptor_s* x, struct zxmd_md_KeyDescriptor_s* y);
void zxmd_md_AffiliationDescriptor_PUT_affiliationOwnerID(struct zxmd_md_AffiliationDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_AffiliationDescriptor_PUT_validUntil(struct zxmd_md_AffiliationDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_AffiliationDescriptor_PUT_cacheDuration(struct zxmd_md_AffiliationDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_AffiliationDescriptor_PUT_ID(struct zxmd_md_AffiliationDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_AffiliationDescriptor_PUT_Signature(struct zxmd_md_AffiliationDescriptor_s* x, int n, struct zxmd_ds_Signature_s* y);
void zxmd_md_AffiliationDescriptor_PUT_Extensions(struct zxmd_md_AffiliationDescriptor_s* x, int n, struct zxmd_md_Extensions_s* y);
void zxmd_md_AffiliationDescriptor_PUT_AffiliateMember(struct zxmd_md_AffiliationDescriptor_s* x, int n, struct zx_elem_s* y);
void zxmd_md_AffiliationDescriptor_PUT_KeyDescriptor(struct zxmd_md_AffiliationDescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* y);
void zxmd_md_AffiliationDescriptor_ADD_Signature(struct zxmd_md_AffiliationDescriptor_s* x, int n, struct zxmd_ds_Signature_s* z);
void zxmd_md_AffiliationDescriptor_ADD_Extensions(struct zxmd_md_AffiliationDescriptor_s* x, int n, struct zxmd_md_Extensions_s* z);
void zxmd_md_AffiliationDescriptor_ADD_AffiliateMember(struct zxmd_md_AffiliationDescriptor_s* x, int n, struct zx_elem_s* z);
void zxmd_md_AffiliationDescriptor_ADD_KeyDescriptor(struct zxmd_md_AffiliationDescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* z);
void zxmd_md_AffiliationDescriptor_DEL_Signature(struct zxmd_md_AffiliationDescriptor_s* x, int n);
void zxmd_md_AffiliationDescriptor_DEL_Extensions(struct zxmd_md_AffiliationDescriptor_s* x, int n);
void zxmd_md_AffiliationDescriptor_DEL_AffiliateMember(struct zxmd_md_AffiliationDescriptor_s* x, int n);
void zxmd_md_AffiliationDescriptor_DEL_KeyDescriptor(struct zxmd_md_AffiliationDescriptor_s* x, int n);
void zxmd_md_AffiliationDescriptor_REV_Signature(struct zxmd_md_AffiliationDescriptor_s* x);
void zxmd_md_AffiliationDescriptor_REV_Extensions(struct zxmd_md_AffiliationDescriptor_s* x);
void zxmd_md_AffiliationDescriptor_REV_AffiliateMember(struct zxmd_md_AffiliationDescriptor_s* x);
void zxmd_md_AffiliationDescriptor_REV_KeyDescriptor(struct zxmd_md_AffiliationDescriptor_s* x);

/* -------------------------- md_ArtifactResolutionService -------------------------- */
/* refby( zxmd_md_IDPSSODescriptor_s zxmd_md_SPSSODescriptor_s ) */
#ifndef zxmd_md_ArtifactResolutionService_EXT
#define zxmd_md_ArtifactResolutionService_EXT
#endif

struct zxmd_md_ArtifactResolutionService_s* zxmd_DEC_md_ArtifactResolutionService(struct zx_ctx* c);
struct zxmd_md_ArtifactResolutionService_s* zxmd_NEW_md_ArtifactResolutionService(struct zx_ctx* c);
struct zxmd_md_ArtifactResolutionService_s* zxmd_DEEP_CLONE_md_ArtifactResolutionService(struct zx_ctx* c, struct zxmd_md_ArtifactResolutionService_s* x, int dup_strs);
void zxmd_DUP_STRS_md_ArtifactResolutionService(struct zx_ctx* c, struct zxmd_md_ArtifactResolutionService_s* x);
void zxmd_FREE_md_ArtifactResolutionService(struct zx_ctx* c, struct zxmd_md_ArtifactResolutionService_s* x, int free_strs);
int zxmd_WALK_SO_md_ArtifactResolutionService(struct zx_ctx* c, struct zxmd_md_ArtifactResolutionService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_ArtifactResolutionService(struct zx_ctx* c, struct zxmd_md_ArtifactResolutionService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_ArtifactResolutionService(struct zxmd_md_ArtifactResolutionService_s* x);
char* zxmd_ENC_SO_md_ArtifactResolutionService(struct zxmd_md_ArtifactResolutionService_s* x, char* p);
char* zxmd_ENC_WO_md_ArtifactResolutionService(struct zxmd_md_ArtifactResolutionService_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_ArtifactResolutionService(struct zx_ctx* c, struct zxmd_md_ArtifactResolutionService_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_ArtifactResolutionService(struct zx_ctx* c, struct zxmd_md_ArtifactResolutionService_s* x);

struct zxmd_md_ArtifactResolutionService_s {
  ZX_ELEM_EXT
  zxmd_md_ArtifactResolutionService_EXT
  struct zx_str_s* Binding;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* Location;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* ResponseLocation;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* index;	/* {1,1} attribute xs:unsignedShort */
  struct zx_str_s* isDefault;	/* {0,1} attribute xs:boolean */
};

struct zx_str_s* zxmd_md_ArtifactResolutionService_GET_Binding(struct zxmd_md_ArtifactResolutionService_s* x);
struct zx_str_s* zxmd_md_ArtifactResolutionService_GET_Location(struct zxmd_md_ArtifactResolutionService_s* x);
struct zx_str_s* zxmd_md_ArtifactResolutionService_GET_ResponseLocation(struct zxmd_md_ArtifactResolutionService_s* x);
struct zx_str_s* zxmd_md_ArtifactResolutionService_GET_index(struct zxmd_md_ArtifactResolutionService_s* x);
struct zx_str_s* zxmd_md_ArtifactResolutionService_GET_isDefault(struct zxmd_md_ArtifactResolutionService_s* x);
void zxmd_md_ArtifactResolutionService_PUT_Binding(struct zxmd_md_ArtifactResolutionService_s* x, struct zx_str_s* y);
void zxmd_md_ArtifactResolutionService_PUT_Location(struct zxmd_md_ArtifactResolutionService_s* x, struct zx_str_s* y);
void zxmd_md_ArtifactResolutionService_PUT_ResponseLocation(struct zxmd_md_ArtifactResolutionService_s* x, struct zx_str_s* y);
void zxmd_md_ArtifactResolutionService_PUT_index(struct zxmd_md_ArtifactResolutionService_s* x, struct zx_str_s* y);
void zxmd_md_ArtifactResolutionService_PUT_isDefault(struct zxmd_md_ArtifactResolutionService_s* x, struct zx_str_s* y);

/* -------------------------- md_AssertionConsumerService -------------------------- */
/* refby( zxmd_md_SPSSODescriptor_s ) */
#ifndef zxmd_md_AssertionConsumerService_EXT
#define zxmd_md_AssertionConsumerService_EXT
#endif

struct zxmd_md_AssertionConsumerService_s* zxmd_DEC_md_AssertionConsumerService(struct zx_ctx* c);
struct zxmd_md_AssertionConsumerService_s* zxmd_NEW_md_AssertionConsumerService(struct zx_ctx* c);
struct zxmd_md_AssertionConsumerService_s* zxmd_DEEP_CLONE_md_AssertionConsumerService(struct zx_ctx* c, struct zxmd_md_AssertionConsumerService_s* x, int dup_strs);
void zxmd_DUP_STRS_md_AssertionConsumerService(struct zx_ctx* c, struct zxmd_md_AssertionConsumerService_s* x);
void zxmd_FREE_md_AssertionConsumerService(struct zx_ctx* c, struct zxmd_md_AssertionConsumerService_s* x, int free_strs);
int zxmd_WALK_SO_md_AssertionConsumerService(struct zx_ctx* c, struct zxmd_md_AssertionConsumerService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_AssertionConsumerService(struct zx_ctx* c, struct zxmd_md_AssertionConsumerService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_AssertionConsumerService(struct zxmd_md_AssertionConsumerService_s* x);
char* zxmd_ENC_SO_md_AssertionConsumerService(struct zxmd_md_AssertionConsumerService_s* x, char* p);
char* zxmd_ENC_WO_md_AssertionConsumerService(struct zxmd_md_AssertionConsumerService_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_AssertionConsumerService(struct zx_ctx* c, struct zxmd_md_AssertionConsumerService_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_AssertionConsumerService(struct zx_ctx* c, struct zxmd_md_AssertionConsumerService_s* x);

struct zxmd_md_AssertionConsumerService_s {
  ZX_ELEM_EXT
  zxmd_md_AssertionConsumerService_EXT
  struct zx_str_s* Binding;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* Location;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* ResponseLocation;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* index;	/* {1,1} attribute xs:unsignedShort */
  struct zx_str_s* isDefault;	/* {0,1} attribute xs:boolean */
};

struct zx_str_s* zxmd_md_AssertionConsumerService_GET_Binding(struct zxmd_md_AssertionConsumerService_s* x);
struct zx_str_s* zxmd_md_AssertionConsumerService_GET_Location(struct zxmd_md_AssertionConsumerService_s* x);
struct zx_str_s* zxmd_md_AssertionConsumerService_GET_ResponseLocation(struct zxmd_md_AssertionConsumerService_s* x);
struct zx_str_s* zxmd_md_AssertionConsumerService_GET_index(struct zxmd_md_AssertionConsumerService_s* x);
struct zx_str_s* zxmd_md_AssertionConsumerService_GET_isDefault(struct zxmd_md_AssertionConsumerService_s* x);
void zxmd_md_AssertionConsumerService_PUT_Binding(struct zxmd_md_AssertionConsumerService_s* x, struct zx_str_s* y);
void zxmd_md_AssertionConsumerService_PUT_Location(struct zxmd_md_AssertionConsumerService_s* x, struct zx_str_s* y);
void zxmd_md_AssertionConsumerService_PUT_ResponseLocation(struct zxmd_md_AssertionConsumerService_s* x, struct zx_str_s* y);
void zxmd_md_AssertionConsumerService_PUT_index(struct zxmd_md_AssertionConsumerService_s* x, struct zx_str_s* y);
void zxmd_md_AssertionConsumerService_PUT_isDefault(struct zxmd_md_AssertionConsumerService_s* x, struct zx_str_s* y);

/* -------------------------- md_AssertionIDRequestService -------------------------- */
/* refby( zxmd_md_IDPSSODescriptor_s zxmd_md_PDPDescriptor_s zxmd_md_AuthnAuthorityDescriptor_s zxmd_md_AttributeAuthorityDescriptor_s ) */
#ifndef zxmd_md_AssertionIDRequestService_EXT
#define zxmd_md_AssertionIDRequestService_EXT
#endif

struct zxmd_md_AssertionIDRequestService_s* zxmd_DEC_md_AssertionIDRequestService(struct zx_ctx* c);
struct zxmd_md_AssertionIDRequestService_s* zxmd_NEW_md_AssertionIDRequestService(struct zx_ctx* c);
struct zxmd_md_AssertionIDRequestService_s* zxmd_DEEP_CLONE_md_AssertionIDRequestService(struct zx_ctx* c, struct zxmd_md_AssertionIDRequestService_s* x, int dup_strs);
void zxmd_DUP_STRS_md_AssertionIDRequestService(struct zx_ctx* c, struct zxmd_md_AssertionIDRequestService_s* x);
void zxmd_FREE_md_AssertionIDRequestService(struct zx_ctx* c, struct zxmd_md_AssertionIDRequestService_s* x, int free_strs);
int zxmd_WALK_SO_md_AssertionIDRequestService(struct zx_ctx* c, struct zxmd_md_AssertionIDRequestService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_AssertionIDRequestService(struct zx_ctx* c, struct zxmd_md_AssertionIDRequestService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_AssertionIDRequestService(struct zxmd_md_AssertionIDRequestService_s* x);
char* zxmd_ENC_SO_md_AssertionIDRequestService(struct zxmd_md_AssertionIDRequestService_s* x, char* p);
char* zxmd_ENC_WO_md_AssertionIDRequestService(struct zxmd_md_AssertionIDRequestService_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_AssertionIDRequestService(struct zx_ctx* c, struct zxmd_md_AssertionIDRequestService_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_AssertionIDRequestService(struct zx_ctx* c, struct zxmd_md_AssertionIDRequestService_s* x);

struct zxmd_md_AssertionIDRequestService_s {
  ZX_ELEM_EXT
  zxmd_md_AssertionIDRequestService_EXT
  struct zx_str_s* Binding;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* Location;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* ResponseLocation;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_md_AssertionIDRequestService_GET_Binding(struct zxmd_md_AssertionIDRequestService_s* x);
struct zx_str_s* zxmd_md_AssertionIDRequestService_GET_Location(struct zxmd_md_AssertionIDRequestService_s* x);
struct zx_str_s* zxmd_md_AssertionIDRequestService_GET_ResponseLocation(struct zxmd_md_AssertionIDRequestService_s* x);
void zxmd_md_AssertionIDRequestService_PUT_Binding(struct zxmd_md_AssertionIDRequestService_s* x, struct zx_str_s* y);
void zxmd_md_AssertionIDRequestService_PUT_Location(struct zxmd_md_AssertionIDRequestService_s* x, struct zx_str_s* y);
void zxmd_md_AssertionIDRequestService_PUT_ResponseLocation(struct zxmd_md_AssertionIDRequestService_s* x, struct zx_str_s* y);

/* -------------------------- md_AttributeAuthorityDescriptor -------------------------- */
/* refby( zxmd_md_EntityDescriptor_s ) */
#ifndef zxmd_md_AttributeAuthorityDescriptor_EXT
#define zxmd_md_AttributeAuthorityDescriptor_EXT
#endif

struct zxmd_md_AttributeAuthorityDescriptor_s* zxmd_DEC_md_AttributeAuthorityDescriptor(struct zx_ctx* c);
struct zxmd_md_AttributeAuthorityDescriptor_s* zxmd_NEW_md_AttributeAuthorityDescriptor(struct zx_ctx* c);
struct zxmd_md_AttributeAuthorityDescriptor_s* zxmd_DEEP_CLONE_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AttributeAuthorityDescriptor_s* x, int dup_strs);
void zxmd_DUP_STRS_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AttributeAuthorityDescriptor_s* x);
void zxmd_FREE_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AttributeAuthorityDescriptor_s* x, int free_strs);
int zxmd_WALK_SO_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AttributeAuthorityDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AttributeAuthorityDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_AttributeAuthorityDescriptor(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
char* zxmd_ENC_SO_md_AttributeAuthorityDescriptor(struct zxmd_md_AttributeAuthorityDescriptor_s* x, char* p);
char* zxmd_ENC_WO_md_AttributeAuthorityDescriptor(struct zxmd_md_AttributeAuthorityDescriptor_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AttributeAuthorityDescriptor_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AttributeAuthorityDescriptor_s* x);

struct zxmd_md_AttributeAuthorityDescriptor_s {
  ZX_ELEM_EXT
  zxmd_md_AttributeAuthorityDescriptor_EXT
  struct zxmd_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zxmd_md_Extensions_s* Extensions;	/* {0,1}  */
  struct zxmd_md_KeyDescriptor_s* KeyDescriptor;	/* {0,-1} nada */
  struct zxmd_md_Organization_s* Organization;	/* {0,1} nada */
  struct zxmd_md_ContactPerson_s* ContactPerson;	/* {0,-1} nada */
  struct zx_str_s* ID;	/* {0,1} attribute xs:ID */
  struct zx_str_s* validUntil;	/* {0,1} attribute dateTime */
  struct zx_str_s* cacheDuration;	/* {0,1} attribute duration */
  struct zx_str_s* protocolSupportEnumeration;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* errorURL;	/* {0,1} attribute xs:anyURI */
  struct zxmd_md_AttributeService_s* AttributeService;	/* {1,-1} nada */
  struct zxmd_md_AssertionIDRequestService_s* AssertionIDRequestService;	/* {0,-1} nada */
  struct zx_elem_s* NameIDFormat;	/* {0,-1} xs:anyURI */
  struct zx_elem_s* AttributeProfile;	/* {0,-1} xs:anyURI */
  struct zxmd_sa_Attribute_s* Attribute;	/* {0,-1} nada */
};

struct zx_str_s* zxmd_md_AttributeAuthorityDescriptor_GET_ID(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
struct zx_str_s* zxmd_md_AttributeAuthorityDescriptor_GET_validUntil(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
struct zx_str_s* zxmd_md_AttributeAuthorityDescriptor_GET_cacheDuration(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
struct zx_str_s* zxmd_md_AttributeAuthorityDescriptor_GET_protocolSupportEnumeration(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
struct zx_str_s* zxmd_md_AttributeAuthorityDescriptor_GET_errorURL(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
struct zxmd_ds_Signature_s* zxmd_md_AttributeAuthorityDescriptor_GET_Signature(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n);
struct zxmd_md_Extensions_s* zxmd_md_AttributeAuthorityDescriptor_GET_Extensions(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n);
struct zxmd_md_KeyDescriptor_s* zxmd_md_AttributeAuthorityDescriptor_GET_KeyDescriptor(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n);
struct zxmd_md_Organization_s* zxmd_md_AttributeAuthorityDescriptor_GET_Organization(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n);
struct zxmd_md_ContactPerson_s* zxmd_md_AttributeAuthorityDescriptor_GET_ContactPerson(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n);
struct zxmd_md_AttributeService_s* zxmd_md_AttributeAuthorityDescriptor_GET_AttributeService(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n);
struct zxmd_md_AssertionIDRequestService_s* zxmd_md_AttributeAuthorityDescriptor_GET_AssertionIDRequestService(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n);
struct zx_elem_s* zxmd_md_AttributeAuthorityDescriptor_GET_NameIDFormat(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n);
struct zx_elem_s* zxmd_md_AttributeAuthorityDescriptor_GET_AttributeProfile(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n);
struct zxmd_sa_Attribute_s* zxmd_md_AttributeAuthorityDescriptor_GET_Attribute(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n);
int zxmd_md_AttributeAuthorityDescriptor_NUM_Signature(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
int zxmd_md_AttributeAuthorityDescriptor_NUM_Extensions(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
int zxmd_md_AttributeAuthorityDescriptor_NUM_KeyDescriptor(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
int zxmd_md_AttributeAuthorityDescriptor_NUM_Organization(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
int zxmd_md_AttributeAuthorityDescriptor_NUM_ContactPerson(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
int zxmd_md_AttributeAuthorityDescriptor_NUM_AttributeService(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
int zxmd_md_AttributeAuthorityDescriptor_NUM_AssertionIDRequestService(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
int zxmd_md_AttributeAuthorityDescriptor_NUM_NameIDFormat(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
int zxmd_md_AttributeAuthorityDescriptor_NUM_AttributeProfile(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
int zxmd_md_AttributeAuthorityDescriptor_NUM_Attribute(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
struct zxmd_ds_Signature_s* zxmd_md_AttributeAuthorityDescriptor_POP_Signature(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
struct zxmd_md_Extensions_s* zxmd_md_AttributeAuthorityDescriptor_POP_Extensions(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
struct zxmd_md_KeyDescriptor_s* zxmd_md_AttributeAuthorityDescriptor_POP_KeyDescriptor(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
struct zxmd_md_Organization_s* zxmd_md_AttributeAuthorityDescriptor_POP_Organization(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
struct zxmd_md_ContactPerson_s* zxmd_md_AttributeAuthorityDescriptor_POP_ContactPerson(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
struct zxmd_md_AttributeService_s* zxmd_md_AttributeAuthorityDescriptor_POP_AttributeService(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
struct zxmd_md_AssertionIDRequestService_s* zxmd_md_AttributeAuthorityDescriptor_POP_AssertionIDRequestService(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
struct zx_elem_s* zxmd_md_AttributeAuthorityDescriptor_POP_NameIDFormat(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
struct zx_elem_s* zxmd_md_AttributeAuthorityDescriptor_POP_AttributeProfile(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
struct zxmd_sa_Attribute_s* zxmd_md_AttributeAuthorityDescriptor_POP_Attribute(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
void zxmd_md_AttributeAuthorityDescriptor_PUSH_Signature(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zxmd_ds_Signature_s* y);
void zxmd_md_AttributeAuthorityDescriptor_PUSH_Extensions(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zxmd_md_Extensions_s* y);
void zxmd_md_AttributeAuthorityDescriptor_PUSH_KeyDescriptor(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zxmd_md_KeyDescriptor_s* y);
void zxmd_md_AttributeAuthorityDescriptor_PUSH_Organization(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zxmd_md_Organization_s* y);
void zxmd_md_AttributeAuthorityDescriptor_PUSH_ContactPerson(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zxmd_md_ContactPerson_s* y);
void zxmd_md_AttributeAuthorityDescriptor_PUSH_AttributeService(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zxmd_md_AttributeService_s* y);
void zxmd_md_AttributeAuthorityDescriptor_PUSH_AssertionIDRequestService(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zxmd_md_AssertionIDRequestService_s* y);
void zxmd_md_AttributeAuthorityDescriptor_PUSH_NameIDFormat(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zx_elem_s* y);
void zxmd_md_AttributeAuthorityDescriptor_PUSH_AttributeProfile(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zx_elem_s* y);
void zxmd_md_AttributeAuthorityDescriptor_PUSH_Attribute(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zxmd_sa_Attribute_s* y);
void zxmd_md_AttributeAuthorityDescriptor_PUT_ID(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_AttributeAuthorityDescriptor_PUT_validUntil(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_AttributeAuthorityDescriptor_PUT_cacheDuration(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_AttributeAuthorityDescriptor_PUT_protocolSupportEnumeration(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_AttributeAuthorityDescriptor_PUT_errorURL(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_AttributeAuthorityDescriptor_PUT_Signature(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_ds_Signature_s* y);
void zxmd_md_AttributeAuthorityDescriptor_PUT_Extensions(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_md_Extensions_s* y);
void zxmd_md_AttributeAuthorityDescriptor_PUT_KeyDescriptor(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* y);
void zxmd_md_AttributeAuthorityDescriptor_PUT_Organization(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_md_Organization_s* y);
void zxmd_md_AttributeAuthorityDescriptor_PUT_ContactPerson(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* y);
void zxmd_md_AttributeAuthorityDescriptor_PUT_AttributeService(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_md_AttributeService_s* y);
void zxmd_md_AttributeAuthorityDescriptor_PUT_AssertionIDRequestService(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_md_AssertionIDRequestService_s* y);
void zxmd_md_AttributeAuthorityDescriptor_PUT_NameIDFormat(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_elem_s* y);
void zxmd_md_AttributeAuthorityDescriptor_PUT_AttributeProfile(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_elem_s* y);
void zxmd_md_AttributeAuthorityDescriptor_PUT_Attribute(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_sa_Attribute_s* y);
void zxmd_md_AttributeAuthorityDescriptor_ADD_Signature(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_ds_Signature_s* z);
void zxmd_md_AttributeAuthorityDescriptor_ADD_Extensions(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_md_Extensions_s* z);
void zxmd_md_AttributeAuthorityDescriptor_ADD_KeyDescriptor(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* z);
void zxmd_md_AttributeAuthorityDescriptor_ADD_Organization(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_md_Organization_s* z);
void zxmd_md_AttributeAuthorityDescriptor_ADD_ContactPerson(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* z);
void zxmd_md_AttributeAuthorityDescriptor_ADD_AttributeService(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_md_AttributeService_s* z);
void zxmd_md_AttributeAuthorityDescriptor_ADD_AssertionIDRequestService(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_md_AssertionIDRequestService_s* z);
void zxmd_md_AttributeAuthorityDescriptor_ADD_NameIDFormat(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_elem_s* z);
void zxmd_md_AttributeAuthorityDescriptor_ADD_AttributeProfile(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_elem_s* z);
void zxmd_md_AttributeAuthorityDescriptor_ADD_Attribute(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_sa_Attribute_s* z);
void zxmd_md_AttributeAuthorityDescriptor_DEL_Signature(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n);
void zxmd_md_AttributeAuthorityDescriptor_DEL_Extensions(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n);
void zxmd_md_AttributeAuthorityDescriptor_DEL_KeyDescriptor(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n);
void zxmd_md_AttributeAuthorityDescriptor_DEL_Organization(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n);
void zxmd_md_AttributeAuthorityDescriptor_DEL_ContactPerson(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n);
void zxmd_md_AttributeAuthorityDescriptor_DEL_AttributeService(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n);
void zxmd_md_AttributeAuthorityDescriptor_DEL_AssertionIDRequestService(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n);
void zxmd_md_AttributeAuthorityDescriptor_DEL_NameIDFormat(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n);
void zxmd_md_AttributeAuthorityDescriptor_DEL_AttributeProfile(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n);
void zxmd_md_AttributeAuthorityDescriptor_DEL_Attribute(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n);
void zxmd_md_AttributeAuthorityDescriptor_REV_Signature(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
void zxmd_md_AttributeAuthorityDescriptor_REV_Extensions(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
void zxmd_md_AttributeAuthorityDescriptor_REV_KeyDescriptor(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
void zxmd_md_AttributeAuthorityDescriptor_REV_Organization(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
void zxmd_md_AttributeAuthorityDescriptor_REV_ContactPerson(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
void zxmd_md_AttributeAuthorityDescriptor_REV_AttributeService(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
void zxmd_md_AttributeAuthorityDescriptor_REV_AssertionIDRequestService(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
void zxmd_md_AttributeAuthorityDescriptor_REV_NameIDFormat(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
void zxmd_md_AttributeAuthorityDescriptor_REV_AttributeProfile(struct zxmd_md_AttributeAuthorityDescriptor_s* x);
void zxmd_md_AttributeAuthorityDescriptor_REV_Attribute(struct zxmd_md_AttributeAuthorityDescriptor_s* x);

/* -------------------------- md_AttributeConsumingService -------------------------- */
/* refby( zxmd_md_SPSSODescriptor_s ) */
#ifndef zxmd_md_AttributeConsumingService_EXT
#define zxmd_md_AttributeConsumingService_EXT
#endif

struct zxmd_md_AttributeConsumingService_s* zxmd_DEC_md_AttributeConsumingService(struct zx_ctx* c);
struct zxmd_md_AttributeConsumingService_s* zxmd_NEW_md_AttributeConsumingService(struct zx_ctx* c);
struct zxmd_md_AttributeConsumingService_s* zxmd_DEEP_CLONE_md_AttributeConsumingService(struct zx_ctx* c, struct zxmd_md_AttributeConsumingService_s* x, int dup_strs);
void zxmd_DUP_STRS_md_AttributeConsumingService(struct zx_ctx* c, struct zxmd_md_AttributeConsumingService_s* x);
void zxmd_FREE_md_AttributeConsumingService(struct zx_ctx* c, struct zxmd_md_AttributeConsumingService_s* x, int free_strs);
int zxmd_WALK_SO_md_AttributeConsumingService(struct zx_ctx* c, struct zxmd_md_AttributeConsumingService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_AttributeConsumingService(struct zx_ctx* c, struct zxmd_md_AttributeConsumingService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_AttributeConsumingService(struct zxmd_md_AttributeConsumingService_s* x);
char* zxmd_ENC_SO_md_AttributeConsumingService(struct zxmd_md_AttributeConsumingService_s* x, char* p);
char* zxmd_ENC_WO_md_AttributeConsumingService(struct zxmd_md_AttributeConsumingService_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_AttributeConsumingService(struct zx_ctx* c, struct zxmd_md_AttributeConsumingService_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_AttributeConsumingService(struct zx_ctx* c, struct zxmd_md_AttributeConsumingService_s* x);

struct zxmd_md_AttributeConsumingService_s {
  ZX_ELEM_EXT
  zxmd_md_AttributeConsumingService_EXT
  struct zxmd_md_ServiceName_s* ServiceName;	/* {1,-1} nada */
  struct zxmd_md_ServiceDescription_s* ServiceDescription;	/* {0,-1} nada */
  struct zxmd_md_RequestedAttribute_s* RequestedAttribute;	/* {1,-1} nada */
  struct zx_str_s* index;	/* {1,1} attribute xs:unsignedShort */
  struct zx_str_s* isDefault;	/* {0,1} attribute xs:boolean */
};

struct zx_str_s* zxmd_md_AttributeConsumingService_GET_index(struct zxmd_md_AttributeConsumingService_s* x);
struct zx_str_s* zxmd_md_AttributeConsumingService_GET_isDefault(struct zxmd_md_AttributeConsumingService_s* x);
struct zxmd_md_ServiceName_s* zxmd_md_AttributeConsumingService_GET_ServiceName(struct zxmd_md_AttributeConsumingService_s* x, int n);
struct zxmd_md_ServiceDescription_s* zxmd_md_AttributeConsumingService_GET_ServiceDescription(struct zxmd_md_AttributeConsumingService_s* x, int n);
struct zxmd_md_RequestedAttribute_s* zxmd_md_AttributeConsumingService_GET_RequestedAttribute(struct zxmd_md_AttributeConsumingService_s* x, int n);
int zxmd_md_AttributeConsumingService_NUM_ServiceName(struct zxmd_md_AttributeConsumingService_s* x);
int zxmd_md_AttributeConsumingService_NUM_ServiceDescription(struct zxmd_md_AttributeConsumingService_s* x);
int zxmd_md_AttributeConsumingService_NUM_RequestedAttribute(struct zxmd_md_AttributeConsumingService_s* x);
struct zxmd_md_ServiceName_s* zxmd_md_AttributeConsumingService_POP_ServiceName(struct zxmd_md_AttributeConsumingService_s* x);
struct zxmd_md_ServiceDescription_s* zxmd_md_AttributeConsumingService_POP_ServiceDescription(struct zxmd_md_AttributeConsumingService_s* x);
struct zxmd_md_RequestedAttribute_s* zxmd_md_AttributeConsumingService_POP_RequestedAttribute(struct zxmd_md_AttributeConsumingService_s* x);
void zxmd_md_AttributeConsumingService_PUSH_ServiceName(struct zxmd_md_AttributeConsumingService_s* x, struct zxmd_md_ServiceName_s* y);
void zxmd_md_AttributeConsumingService_PUSH_ServiceDescription(struct zxmd_md_AttributeConsumingService_s* x, struct zxmd_md_ServiceDescription_s* y);
void zxmd_md_AttributeConsumingService_PUSH_RequestedAttribute(struct zxmd_md_AttributeConsumingService_s* x, struct zxmd_md_RequestedAttribute_s* y);
void zxmd_md_AttributeConsumingService_PUT_index(struct zxmd_md_AttributeConsumingService_s* x, struct zx_str_s* y);
void zxmd_md_AttributeConsumingService_PUT_isDefault(struct zxmd_md_AttributeConsumingService_s* x, struct zx_str_s* y);
void zxmd_md_AttributeConsumingService_PUT_ServiceName(struct zxmd_md_AttributeConsumingService_s* x, int n, struct zxmd_md_ServiceName_s* y);
void zxmd_md_AttributeConsumingService_PUT_ServiceDescription(struct zxmd_md_AttributeConsumingService_s* x, int n, struct zxmd_md_ServiceDescription_s* y);
void zxmd_md_AttributeConsumingService_PUT_RequestedAttribute(struct zxmd_md_AttributeConsumingService_s* x, int n, struct zxmd_md_RequestedAttribute_s* y);
void zxmd_md_AttributeConsumingService_ADD_ServiceName(struct zxmd_md_AttributeConsumingService_s* x, int n, struct zxmd_md_ServiceName_s* z);
void zxmd_md_AttributeConsumingService_ADD_ServiceDescription(struct zxmd_md_AttributeConsumingService_s* x, int n, struct zxmd_md_ServiceDescription_s* z);
void zxmd_md_AttributeConsumingService_ADD_RequestedAttribute(struct zxmd_md_AttributeConsumingService_s* x, int n, struct zxmd_md_RequestedAttribute_s* z);
void zxmd_md_AttributeConsumingService_DEL_ServiceName(struct zxmd_md_AttributeConsumingService_s* x, int n);
void zxmd_md_AttributeConsumingService_DEL_ServiceDescription(struct zxmd_md_AttributeConsumingService_s* x, int n);
void zxmd_md_AttributeConsumingService_DEL_RequestedAttribute(struct zxmd_md_AttributeConsumingService_s* x, int n);
void zxmd_md_AttributeConsumingService_REV_ServiceName(struct zxmd_md_AttributeConsumingService_s* x);
void zxmd_md_AttributeConsumingService_REV_ServiceDescription(struct zxmd_md_AttributeConsumingService_s* x);
void zxmd_md_AttributeConsumingService_REV_RequestedAttribute(struct zxmd_md_AttributeConsumingService_s* x);

/* -------------------------- md_AttributeService -------------------------- */
/* refby( zxmd_md_AttributeAuthorityDescriptor_s ) */
#ifndef zxmd_md_AttributeService_EXT
#define zxmd_md_AttributeService_EXT
#endif

struct zxmd_md_AttributeService_s* zxmd_DEC_md_AttributeService(struct zx_ctx* c);
struct zxmd_md_AttributeService_s* zxmd_NEW_md_AttributeService(struct zx_ctx* c);
struct zxmd_md_AttributeService_s* zxmd_DEEP_CLONE_md_AttributeService(struct zx_ctx* c, struct zxmd_md_AttributeService_s* x, int dup_strs);
void zxmd_DUP_STRS_md_AttributeService(struct zx_ctx* c, struct zxmd_md_AttributeService_s* x);
void zxmd_FREE_md_AttributeService(struct zx_ctx* c, struct zxmd_md_AttributeService_s* x, int free_strs);
int zxmd_WALK_SO_md_AttributeService(struct zx_ctx* c, struct zxmd_md_AttributeService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_AttributeService(struct zx_ctx* c, struct zxmd_md_AttributeService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_AttributeService(struct zxmd_md_AttributeService_s* x);
char* zxmd_ENC_SO_md_AttributeService(struct zxmd_md_AttributeService_s* x, char* p);
char* zxmd_ENC_WO_md_AttributeService(struct zxmd_md_AttributeService_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_AttributeService(struct zx_ctx* c, struct zxmd_md_AttributeService_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_AttributeService(struct zx_ctx* c, struct zxmd_md_AttributeService_s* x);

struct zxmd_md_AttributeService_s {
  ZX_ELEM_EXT
  zxmd_md_AttributeService_EXT
  struct zx_str_s* Binding;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* Location;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* ResponseLocation;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_md_AttributeService_GET_Binding(struct zxmd_md_AttributeService_s* x);
struct zx_str_s* zxmd_md_AttributeService_GET_Location(struct zxmd_md_AttributeService_s* x);
struct zx_str_s* zxmd_md_AttributeService_GET_ResponseLocation(struct zxmd_md_AttributeService_s* x);
void zxmd_md_AttributeService_PUT_Binding(struct zxmd_md_AttributeService_s* x, struct zx_str_s* y);
void zxmd_md_AttributeService_PUT_Location(struct zxmd_md_AttributeService_s* x, struct zx_str_s* y);
void zxmd_md_AttributeService_PUT_ResponseLocation(struct zxmd_md_AttributeService_s* x, struct zx_str_s* y);

/* -------------------------- md_AuthnAuthorityDescriptor -------------------------- */
/* refby( zxmd_md_EntityDescriptor_s ) */
#ifndef zxmd_md_AuthnAuthorityDescriptor_EXT
#define zxmd_md_AuthnAuthorityDescriptor_EXT
#endif

struct zxmd_md_AuthnAuthorityDescriptor_s* zxmd_DEC_md_AuthnAuthorityDescriptor(struct zx_ctx* c);
struct zxmd_md_AuthnAuthorityDescriptor_s* zxmd_NEW_md_AuthnAuthorityDescriptor(struct zx_ctx* c);
struct zxmd_md_AuthnAuthorityDescriptor_s* zxmd_DEEP_CLONE_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AuthnAuthorityDescriptor_s* x, int dup_strs);
void zxmd_DUP_STRS_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AuthnAuthorityDescriptor_s* x);
void zxmd_FREE_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AuthnAuthorityDescriptor_s* x, int free_strs);
int zxmd_WALK_SO_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AuthnAuthorityDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AuthnAuthorityDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_AuthnAuthorityDescriptor(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
char* zxmd_ENC_SO_md_AuthnAuthorityDescriptor(struct zxmd_md_AuthnAuthorityDescriptor_s* x, char* p);
char* zxmd_ENC_WO_md_AuthnAuthorityDescriptor(struct zxmd_md_AuthnAuthorityDescriptor_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AuthnAuthorityDescriptor_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AuthnAuthorityDescriptor_s* x);

struct zxmd_md_AuthnAuthorityDescriptor_s {
  ZX_ELEM_EXT
  zxmd_md_AuthnAuthorityDescriptor_EXT
  struct zxmd_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zxmd_md_Extensions_s* Extensions;	/* {0,1}  */
  struct zxmd_md_KeyDescriptor_s* KeyDescriptor;	/* {0,-1} nada */
  struct zxmd_md_Organization_s* Organization;	/* {0,1} nada */
  struct zxmd_md_ContactPerson_s* ContactPerson;	/* {0,-1} nada */
  struct zx_str_s* ID;	/* {0,1} attribute xs:ID */
  struct zx_str_s* validUntil;	/* {0,1} attribute dateTime */
  struct zx_str_s* cacheDuration;	/* {0,1} attribute duration */
  struct zx_str_s* protocolSupportEnumeration;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* errorURL;	/* {0,1} attribute xs:anyURI */
  struct zxmd_md_AuthnQueryService_s* AuthnQueryService;	/* {1,-1} nada */
  struct zxmd_md_AssertionIDRequestService_s* AssertionIDRequestService;	/* {0,-1} nada */
  struct zx_elem_s* NameIDFormat;	/* {0,-1} xs:anyURI */
};

struct zx_str_s* zxmd_md_AuthnAuthorityDescriptor_GET_ID(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
struct zx_str_s* zxmd_md_AuthnAuthorityDescriptor_GET_validUntil(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
struct zx_str_s* zxmd_md_AuthnAuthorityDescriptor_GET_cacheDuration(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
struct zx_str_s* zxmd_md_AuthnAuthorityDescriptor_GET_protocolSupportEnumeration(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
struct zx_str_s* zxmd_md_AuthnAuthorityDescriptor_GET_errorURL(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
struct zxmd_ds_Signature_s* zxmd_md_AuthnAuthorityDescriptor_GET_Signature(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n);
struct zxmd_md_Extensions_s* zxmd_md_AuthnAuthorityDescriptor_GET_Extensions(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n);
struct zxmd_md_KeyDescriptor_s* zxmd_md_AuthnAuthorityDescriptor_GET_KeyDescriptor(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n);
struct zxmd_md_Organization_s* zxmd_md_AuthnAuthorityDescriptor_GET_Organization(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n);
struct zxmd_md_ContactPerson_s* zxmd_md_AuthnAuthorityDescriptor_GET_ContactPerson(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n);
struct zxmd_md_AuthnQueryService_s* zxmd_md_AuthnAuthorityDescriptor_GET_AuthnQueryService(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n);
struct zxmd_md_AssertionIDRequestService_s* zxmd_md_AuthnAuthorityDescriptor_GET_AssertionIDRequestService(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n);
struct zx_elem_s* zxmd_md_AuthnAuthorityDescriptor_GET_NameIDFormat(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n);
int zxmd_md_AuthnAuthorityDescriptor_NUM_Signature(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
int zxmd_md_AuthnAuthorityDescriptor_NUM_Extensions(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
int zxmd_md_AuthnAuthorityDescriptor_NUM_KeyDescriptor(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
int zxmd_md_AuthnAuthorityDescriptor_NUM_Organization(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
int zxmd_md_AuthnAuthorityDescriptor_NUM_ContactPerson(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
int zxmd_md_AuthnAuthorityDescriptor_NUM_AuthnQueryService(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
int zxmd_md_AuthnAuthorityDescriptor_NUM_AssertionIDRequestService(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
int zxmd_md_AuthnAuthorityDescriptor_NUM_NameIDFormat(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
struct zxmd_ds_Signature_s* zxmd_md_AuthnAuthorityDescriptor_POP_Signature(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
struct zxmd_md_Extensions_s* zxmd_md_AuthnAuthorityDescriptor_POP_Extensions(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
struct zxmd_md_KeyDescriptor_s* zxmd_md_AuthnAuthorityDescriptor_POP_KeyDescriptor(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
struct zxmd_md_Organization_s* zxmd_md_AuthnAuthorityDescriptor_POP_Organization(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
struct zxmd_md_ContactPerson_s* zxmd_md_AuthnAuthorityDescriptor_POP_ContactPerson(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
struct zxmd_md_AuthnQueryService_s* zxmd_md_AuthnAuthorityDescriptor_POP_AuthnQueryService(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
struct zxmd_md_AssertionIDRequestService_s* zxmd_md_AuthnAuthorityDescriptor_POP_AssertionIDRequestService(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
struct zx_elem_s* zxmd_md_AuthnAuthorityDescriptor_POP_NameIDFormat(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
void zxmd_md_AuthnAuthorityDescriptor_PUSH_Signature(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zxmd_ds_Signature_s* y);
void zxmd_md_AuthnAuthorityDescriptor_PUSH_Extensions(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zxmd_md_Extensions_s* y);
void zxmd_md_AuthnAuthorityDescriptor_PUSH_KeyDescriptor(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zxmd_md_KeyDescriptor_s* y);
void zxmd_md_AuthnAuthorityDescriptor_PUSH_Organization(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zxmd_md_Organization_s* y);
void zxmd_md_AuthnAuthorityDescriptor_PUSH_ContactPerson(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zxmd_md_ContactPerson_s* y);
void zxmd_md_AuthnAuthorityDescriptor_PUSH_AuthnQueryService(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zxmd_md_AuthnQueryService_s* y);
void zxmd_md_AuthnAuthorityDescriptor_PUSH_AssertionIDRequestService(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zxmd_md_AssertionIDRequestService_s* y);
void zxmd_md_AuthnAuthorityDescriptor_PUSH_NameIDFormat(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zx_elem_s* y);
void zxmd_md_AuthnAuthorityDescriptor_PUT_ID(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_AuthnAuthorityDescriptor_PUT_validUntil(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_AuthnAuthorityDescriptor_PUT_cacheDuration(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_AuthnAuthorityDescriptor_PUT_protocolSupportEnumeration(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_AuthnAuthorityDescriptor_PUT_errorURL(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_AuthnAuthorityDescriptor_PUT_Signature(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_ds_Signature_s* y);
void zxmd_md_AuthnAuthorityDescriptor_PUT_Extensions(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_md_Extensions_s* y);
void zxmd_md_AuthnAuthorityDescriptor_PUT_KeyDescriptor(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* y);
void zxmd_md_AuthnAuthorityDescriptor_PUT_Organization(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_md_Organization_s* y);
void zxmd_md_AuthnAuthorityDescriptor_PUT_ContactPerson(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* y);
void zxmd_md_AuthnAuthorityDescriptor_PUT_AuthnQueryService(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_md_AuthnQueryService_s* y);
void zxmd_md_AuthnAuthorityDescriptor_PUT_AssertionIDRequestService(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_md_AssertionIDRequestService_s* y);
void zxmd_md_AuthnAuthorityDescriptor_PUT_NameIDFormat(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_elem_s* y);
void zxmd_md_AuthnAuthorityDescriptor_ADD_Signature(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_ds_Signature_s* z);
void zxmd_md_AuthnAuthorityDescriptor_ADD_Extensions(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_md_Extensions_s* z);
void zxmd_md_AuthnAuthorityDescriptor_ADD_KeyDescriptor(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* z);
void zxmd_md_AuthnAuthorityDescriptor_ADD_Organization(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_md_Organization_s* z);
void zxmd_md_AuthnAuthorityDescriptor_ADD_ContactPerson(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* z);
void zxmd_md_AuthnAuthorityDescriptor_ADD_AuthnQueryService(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_md_AuthnQueryService_s* z);
void zxmd_md_AuthnAuthorityDescriptor_ADD_AssertionIDRequestService(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_md_AssertionIDRequestService_s* z);
void zxmd_md_AuthnAuthorityDescriptor_ADD_NameIDFormat(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_elem_s* z);
void zxmd_md_AuthnAuthorityDescriptor_DEL_Signature(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n);
void zxmd_md_AuthnAuthorityDescriptor_DEL_Extensions(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n);
void zxmd_md_AuthnAuthorityDescriptor_DEL_KeyDescriptor(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n);
void zxmd_md_AuthnAuthorityDescriptor_DEL_Organization(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n);
void zxmd_md_AuthnAuthorityDescriptor_DEL_ContactPerson(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n);
void zxmd_md_AuthnAuthorityDescriptor_DEL_AuthnQueryService(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n);
void zxmd_md_AuthnAuthorityDescriptor_DEL_AssertionIDRequestService(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n);
void zxmd_md_AuthnAuthorityDescriptor_DEL_NameIDFormat(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n);
void zxmd_md_AuthnAuthorityDescriptor_REV_Signature(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
void zxmd_md_AuthnAuthorityDescriptor_REV_Extensions(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
void zxmd_md_AuthnAuthorityDescriptor_REV_KeyDescriptor(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
void zxmd_md_AuthnAuthorityDescriptor_REV_Organization(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
void zxmd_md_AuthnAuthorityDescriptor_REV_ContactPerson(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
void zxmd_md_AuthnAuthorityDescriptor_REV_AuthnQueryService(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
void zxmd_md_AuthnAuthorityDescriptor_REV_AssertionIDRequestService(struct zxmd_md_AuthnAuthorityDescriptor_s* x);
void zxmd_md_AuthnAuthorityDescriptor_REV_NameIDFormat(struct zxmd_md_AuthnAuthorityDescriptor_s* x);

/* -------------------------- md_AuthnQueryService -------------------------- */
/* refby( zxmd_md_AuthnAuthorityDescriptor_s ) */
#ifndef zxmd_md_AuthnQueryService_EXT
#define zxmd_md_AuthnQueryService_EXT
#endif

struct zxmd_md_AuthnQueryService_s* zxmd_DEC_md_AuthnQueryService(struct zx_ctx* c);
struct zxmd_md_AuthnQueryService_s* zxmd_NEW_md_AuthnQueryService(struct zx_ctx* c);
struct zxmd_md_AuthnQueryService_s* zxmd_DEEP_CLONE_md_AuthnQueryService(struct zx_ctx* c, struct zxmd_md_AuthnQueryService_s* x, int dup_strs);
void zxmd_DUP_STRS_md_AuthnQueryService(struct zx_ctx* c, struct zxmd_md_AuthnQueryService_s* x);
void zxmd_FREE_md_AuthnQueryService(struct zx_ctx* c, struct zxmd_md_AuthnQueryService_s* x, int free_strs);
int zxmd_WALK_SO_md_AuthnQueryService(struct zx_ctx* c, struct zxmd_md_AuthnQueryService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_AuthnQueryService(struct zx_ctx* c, struct zxmd_md_AuthnQueryService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_AuthnQueryService(struct zxmd_md_AuthnQueryService_s* x);
char* zxmd_ENC_SO_md_AuthnQueryService(struct zxmd_md_AuthnQueryService_s* x, char* p);
char* zxmd_ENC_WO_md_AuthnQueryService(struct zxmd_md_AuthnQueryService_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_AuthnQueryService(struct zx_ctx* c, struct zxmd_md_AuthnQueryService_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_AuthnQueryService(struct zx_ctx* c, struct zxmd_md_AuthnQueryService_s* x);

struct zxmd_md_AuthnQueryService_s {
  ZX_ELEM_EXT
  zxmd_md_AuthnQueryService_EXT
  struct zx_str_s* Binding;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* Location;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* ResponseLocation;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_md_AuthnQueryService_GET_Binding(struct zxmd_md_AuthnQueryService_s* x);
struct zx_str_s* zxmd_md_AuthnQueryService_GET_Location(struct zxmd_md_AuthnQueryService_s* x);
struct zx_str_s* zxmd_md_AuthnQueryService_GET_ResponseLocation(struct zxmd_md_AuthnQueryService_s* x);
void zxmd_md_AuthnQueryService_PUT_Binding(struct zxmd_md_AuthnQueryService_s* x, struct zx_str_s* y);
void zxmd_md_AuthnQueryService_PUT_Location(struct zxmd_md_AuthnQueryService_s* x, struct zx_str_s* y);
void zxmd_md_AuthnQueryService_PUT_ResponseLocation(struct zxmd_md_AuthnQueryService_s* x, struct zx_str_s* y);

/* -------------------------- md_AuthzService -------------------------- */
/* refby( zxmd_md_PDPDescriptor_s ) */
#ifndef zxmd_md_AuthzService_EXT
#define zxmd_md_AuthzService_EXT
#endif

struct zxmd_md_AuthzService_s* zxmd_DEC_md_AuthzService(struct zx_ctx* c);
struct zxmd_md_AuthzService_s* zxmd_NEW_md_AuthzService(struct zx_ctx* c);
struct zxmd_md_AuthzService_s* zxmd_DEEP_CLONE_md_AuthzService(struct zx_ctx* c, struct zxmd_md_AuthzService_s* x, int dup_strs);
void zxmd_DUP_STRS_md_AuthzService(struct zx_ctx* c, struct zxmd_md_AuthzService_s* x);
void zxmd_FREE_md_AuthzService(struct zx_ctx* c, struct zxmd_md_AuthzService_s* x, int free_strs);
int zxmd_WALK_SO_md_AuthzService(struct zx_ctx* c, struct zxmd_md_AuthzService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_AuthzService(struct zx_ctx* c, struct zxmd_md_AuthzService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_AuthzService(struct zxmd_md_AuthzService_s* x);
char* zxmd_ENC_SO_md_AuthzService(struct zxmd_md_AuthzService_s* x, char* p);
char* zxmd_ENC_WO_md_AuthzService(struct zxmd_md_AuthzService_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_AuthzService(struct zx_ctx* c, struct zxmd_md_AuthzService_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_AuthzService(struct zx_ctx* c, struct zxmd_md_AuthzService_s* x);

struct zxmd_md_AuthzService_s {
  ZX_ELEM_EXT
  zxmd_md_AuthzService_EXT
  struct zx_str_s* Binding;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* Location;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* ResponseLocation;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_md_AuthzService_GET_Binding(struct zxmd_md_AuthzService_s* x);
struct zx_str_s* zxmd_md_AuthzService_GET_Location(struct zxmd_md_AuthzService_s* x);
struct zx_str_s* zxmd_md_AuthzService_GET_ResponseLocation(struct zxmd_md_AuthzService_s* x);
void zxmd_md_AuthzService_PUT_Binding(struct zxmd_md_AuthzService_s* x, struct zx_str_s* y);
void zxmd_md_AuthzService_PUT_Location(struct zxmd_md_AuthzService_s* x, struct zx_str_s* y);
void zxmd_md_AuthzService_PUT_ResponseLocation(struct zxmd_md_AuthzService_s* x, struct zx_str_s* y);

/* -------------------------- md_ContactPerson -------------------------- */
/* refby( zxmd_md_IDPSSODescriptor_s zxmd_md_PDPDescriptor_s zxmd_md_SPSSODescriptor_s zxmd_md_AuthnAuthorityDescriptor_s zxmd_md_EntityDescriptor_s zxmd_md_RoleDescriptor_s zxmd_md_AttributeAuthorityDescriptor_s ) */
#ifndef zxmd_md_ContactPerson_EXT
#define zxmd_md_ContactPerson_EXT
#endif

struct zxmd_md_ContactPerson_s* zxmd_DEC_md_ContactPerson(struct zx_ctx* c);
struct zxmd_md_ContactPerson_s* zxmd_NEW_md_ContactPerson(struct zx_ctx* c);
struct zxmd_md_ContactPerson_s* zxmd_DEEP_CLONE_md_ContactPerson(struct zx_ctx* c, struct zxmd_md_ContactPerson_s* x, int dup_strs);
void zxmd_DUP_STRS_md_ContactPerson(struct zx_ctx* c, struct zxmd_md_ContactPerson_s* x);
void zxmd_FREE_md_ContactPerson(struct zx_ctx* c, struct zxmd_md_ContactPerson_s* x, int free_strs);
int zxmd_WALK_SO_md_ContactPerson(struct zx_ctx* c, struct zxmd_md_ContactPerson_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_ContactPerson(struct zx_ctx* c, struct zxmd_md_ContactPerson_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_ContactPerson(struct zxmd_md_ContactPerson_s* x);
char* zxmd_ENC_SO_md_ContactPerson(struct zxmd_md_ContactPerson_s* x, char* p);
char* zxmd_ENC_WO_md_ContactPerson(struct zxmd_md_ContactPerson_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_ContactPerson(struct zx_ctx* c, struct zxmd_md_ContactPerson_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_ContactPerson(struct zx_ctx* c, struct zxmd_md_ContactPerson_s* x);

struct zxmd_md_ContactPerson_s {
  ZX_ELEM_EXT
  zxmd_md_ContactPerson_EXT
  struct zxmd_md_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_elem_s* Company;	/* {0,1} xs:string */
  struct zx_elem_s* GivenName;	/* {0,1} xs:string */
  struct zx_elem_s* SurName;	/* {0,1} xs:string */
  struct zx_elem_s* EmailAddress;	/* {0,-1} xs:anyURI */
  struct zx_elem_s* TelephoneNumber;	/* {0,-1} xs:string */
  struct zx_str_s* contactType;	/* {1,1} attribute md:ContactTypeType */
};

struct zx_str_s* zxmd_md_ContactPerson_GET_contactType(struct zxmd_md_ContactPerson_s* x);
struct zxmd_md_Extensions_s* zxmd_md_ContactPerson_GET_Extensions(struct zxmd_md_ContactPerson_s* x, int n);
struct zx_elem_s* zxmd_md_ContactPerson_GET_Company(struct zxmd_md_ContactPerson_s* x, int n);
struct zx_elem_s* zxmd_md_ContactPerson_GET_GivenName(struct zxmd_md_ContactPerson_s* x, int n);
struct zx_elem_s* zxmd_md_ContactPerson_GET_SurName(struct zxmd_md_ContactPerson_s* x, int n);
struct zx_elem_s* zxmd_md_ContactPerson_GET_EmailAddress(struct zxmd_md_ContactPerson_s* x, int n);
struct zx_elem_s* zxmd_md_ContactPerson_GET_TelephoneNumber(struct zxmd_md_ContactPerson_s* x, int n);
int zxmd_md_ContactPerson_NUM_Extensions(struct zxmd_md_ContactPerson_s* x);
int zxmd_md_ContactPerson_NUM_Company(struct zxmd_md_ContactPerson_s* x);
int zxmd_md_ContactPerson_NUM_GivenName(struct zxmd_md_ContactPerson_s* x);
int zxmd_md_ContactPerson_NUM_SurName(struct zxmd_md_ContactPerson_s* x);
int zxmd_md_ContactPerson_NUM_EmailAddress(struct zxmd_md_ContactPerson_s* x);
int zxmd_md_ContactPerson_NUM_TelephoneNumber(struct zxmd_md_ContactPerson_s* x);
struct zxmd_md_Extensions_s* zxmd_md_ContactPerson_POP_Extensions(struct zxmd_md_ContactPerson_s* x);
struct zx_elem_s* zxmd_md_ContactPerson_POP_Company(struct zxmd_md_ContactPerson_s* x);
struct zx_elem_s* zxmd_md_ContactPerson_POP_GivenName(struct zxmd_md_ContactPerson_s* x);
struct zx_elem_s* zxmd_md_ContactPerson_POP_SurName(struct zxmd_md_ContactPerson_s* x);
struct zx_elem_s* zxmd_md_ContactPerson_POP_EmailAddress(struct zxmd_md_ContactPerson_s* x);
struct zx_elem_s* zxmd_md_ContactPerson_POP_TelephoneNumber(struct zxmd_md_ContactPerson_s* x);
void zxmd_md_ContactPerson_PUSH_Extensions(struct zxmd_md_ContactPerson_s* x, struct zxmd_md_Extensions_s* y);
void zxmd_md_ContactPerson_PUSH_Company(struct zxmd_md_ContactPerson_s* x, struct zx_elem_s* y);
void zxmd_md_ContactPerson_PUSH_GivenName(struct zxmd_md_ContactPerson_s* x, struct zx_elem_s* y);
void zxmd_md_ContactPerson_PUSH_SurName(struct zxmd_md_ContactPerson_s* x, struct zx_elem_s* y);
void zxmd_md_ContactPerson_PUSH_EmailAddress(struct zxmd_md_ContactPerson_s* x, struct zx_elem_s* y);
void zxmd_md_ContactPerson_PUSH_TelephoneNumber(struct zxmd_md_ContactPerson_s* x, struct zx_elem_s* y);
void zxmd_md_ContactPerson_PUT_contactType(struct zxmd_md_ContactPerson_s* x, struct zx_str_s* y);
void zxmd_md_ContactPerson_PUT_Extensions(struct zxmd_md_ContactPerson_s* x, int n, struct zxmd_md_Extensions_s* y);
void zxmd_md_ContactPerson_PUT_Company(struct zxmd_md_ContactPerson_s* x, int n, struct zx_elem_s* y);
void zxmd_md_ContactPerson_PUT_GivenName(struct zxmd_md_ContactPerson_s* x, int n, struct zx_elem_s* y);
void zxmd_md_ContactPerson_PUT_SurName(struct zxmd_md_ContactPerson_s* x, int n, struct zx_elem_s* y);
void zxmd_md_ContactPerson_PUT_EmailAddress(struct zxmd_md_ContactPerson_s* x, int n, struct zx_elem_s* y);
void zxmd_md_ContactPerson_PUT_TelephoneNumber(struct zxmd_md_ContactPerson_s* x, int n, struct zx_elem_s* y);
void zxmd_md_ContactPerson_ADD_Extensions(struct zxmd_md_ContactPerson_s* x, int n, struct zxmd_md_Extensions_s* z);
void zxmd_md_ContactPerson_ADD_Company(struct zxmd_md_ContactPerson_s* x, int n, struct zx_elem_s* z);
void zxmd_md_ContactPerson_ADD_GivenName(struct zxmd_md_ContactPerson_s* x, int n, struct zx_elem_s* z);
void zxmd_md_ContactPerson_ADD_SurName(struct zxmd_md_ContactPerson_s* x, int n, struct zx_elem_s* z);
void zxmd_md_ContactPerson_ADD_EmailAddress(struct zxmd_md_ContactPerson_s* x, int n, struct zx_elem_s* z);
void zxmd_md_ContactPerson_ADD_TelephoneNumber(struct zxmd_md_ContactPerson_s* x, int n, struct zx_elem_s* z);
void zxmd_md_ContactPerson_DEL_Extensions(struct zxmd_md_ContactPerson_s* x, int n);
void zxmd_md_ContactPerson_DEL_Company(struct zxmd_md_ContactPerson_s* x, int n);
void zxmd_md_ContactPerson_DEL_GivenName(struct zxmd_md_ContactPerson_s* x, int n);
void zxmd_md_ContactPerson_DEL_SurName(struct zxmd_md_ContactPerson_s* x, int n);
void zxmd_md_ContactPerson_DEL_EmailAddress(struct zxmd_md_ContactPerson_s* x, int n);
void zxmd_md_ContactPerson_DEL_TelephoneNumber(struct zxmd_md_ContactPerson_s* x, int n);
void zxmd_md_ContactPerson_REV_Extensions(struct zxmd_md_ContactPerson_s* x);
void zxmd_md_ContactPerson_REV_Company(struct zxmd_md_ContactPerson_s* x);
void zxmd_md_ContactPerson_REV_GivenName(struct zxmd_md_ContactPerson_s* x);
void zxmd_md_ContactPerson_REV_SurName(struct zxmd_md_ContactPerson_s* x);
void zxmd_md_ContactPerson_REV_EmailAddress(struct zxmd_md_ContactPerson_s* x);
void zxmd_md_ContactPerson_REV_TelephoneNumber(struct zxmd_md_ContactPerson_s* x);

/* -------------------------- md_EncryptionMethod -------------------------- */
/* refby( zxmd_md_KeyDescriptor_s ) */
#ifndef zxmd_md_EncryptionMethod_EXT
#define zxmd_md_EncryptionMethod_EXT
#endif

struct zxmd_md_EncryptionMethod_s* zxmd_DEC_md_EncryptionMethod(struct zx_ctx* c);
struct zxmd_md_EncryptionMethod_s* zxmd_NEW_md_EncryptionMethod(struct zx_ctx* c);
struct zxmd_md_EncryptionMethod_s* zxmd_DEEP_CLONE_md_EncryptionMethod(struct zx_ctx* c, struct zxmd_md_EncryptionMethod_s* x, int dup_strs);
void zxmd_DUP_STRS_md_EncryptionMethod(struct zx_ctx* c, struct zxmd_md_EncryptionMethod_s* x);
void zxmd_FREE_md_EncryptionMethod(struct zx_ctx* c, struct zxmd_md_EncryptionMethod_s* x, int free_strs);
int zxmd_WALK_SO_md_EncryptionMethod(struct zx_ctx* c, struct zxmd_md_EncryptionMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_EncryptionMethod(struct zx_ctx* c, struct zxmd_md_EncryptionMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_EncryptionMethod(struct zxmd_md_EncryptionMethod_s* x);
char* zxmd_ENC_SO_md_EncryptionMethod(struct zxmd_md_EncryptionMethod_s* x, char* p);
char* zxmd_ENC_WO_md_EncryptionMethod(struct zxmd_md_EncryptionMethod_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_EncryptionMethod(struct zx_ctx* c, struct zxmd_md_EncryptionMethod_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_EncryptionMethod(struct zx_ctx* c, struct zxmd_md_EncryptionMethod_s* x);

struct zxmd_md_EncryptionMethod_s {
  ZX_ELEM_EXT
  zxmd_md_EncryptionMethod_EXT
  struct zx_elem_s* KeySize;	/* {0,1} xs:integer */
  struct zx_elem_s* OAEPparams;	/* {0,1} xs:base64Binary */
  struct zx_str_s* Algorithm;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_md_EncryptionMethod_GET_Algorithm(struct zxmd_md_EncryptionMethod_s* x);
struct zx_elem_s* zxmd_md_EncryptionMethod_GET_KeySize(struct zxmd_md_EncryptionMethod_s* x, int n);
struct zx_elem_s* zxmd_md_EncryptionMethod_GET_OAEPparams(struct zxmd_md_EncryptionMethod_s* x, int n);
int zxmd_md_EncryptionMethod_NUM_KeySize(struct zxmd_md_EncryptionMethod_s* x);
int zxmd_md_EncryptionMethod_NUM_OAEPparams(struct zxmd_md_EncryptionMethod_s* x);
struct zx_elem_s* zxmd_md_EncryptionMethod_POP_KeySize(struct zxmd_md_EncryptionMethod_s* x);
struct zx_elem_s* zxmd_md_EncryptionMethod_POP_OAEPparams(struct zxmd_md_EncryptionMethod_s* x);
void zxmd_md_EncryptionMethod_PUSH_KeySize(struct zxmd_md_EncryptionMethod_s* x, struct zx_elem_s* y);
void zxmd_md_EncryptionMethod_PUSH_OAEPparams(struct zxmd_md_EncryptionMethod_s* x, struct zx_elem_s* y);
void zxmd_md_EncryptionMethod_PUT_Algorithm(struct zxmd_md_EncryptionMethod_s* x, struct zx_str_s* y);
void zxmd_md_EncryptionMethod_PUT_KeySize(struct zxmd_md_EncryptionMethod_s* x, int n, struct zx_elem_s* y);
void zxmd_md_EncryptionMethod_PUT_OAEPparams(struct zxmd_md_EncryptionMethod_s* x, int n, struct zx_elem_s* y);
void zxmd_md_EncryptionMethod_ADD_KeySize(struct zxmd_md_EncryptionMethod_s* x, int n, struct zx_elem_s* z);
void zxmd_md_EncryptionMethod_ADD_OAEPparams(struct zxmd_md_EncryptionMethod_s* x, int n, struct zx_elem_s* z);
void zxmd_md_EncryptionMethod_DEL_KeySize(struct zxmd_md_EncryptionMethod_s* x, int n);
void zxmd_md_EncryptionMethod_DEL_OAEPparams(struct zxmd_md_EncryptionMethod_s* x, int n);
void zxmd_md_EncryptionMethod_REV_KeySize(struct zxmd_md_EncryptionMethod_s* x);
void zxmd_md_EncryptionMethod_REV_OAEPparams(struct zxmd_md_EncryptionMethod_s* x);

/* -------------------------- md_EntitiesDescriptor -------------------------- */
/* refby( zxmd_md_EntitiesDescriptor_s ) */
#ifndef zxmd_md_EntitiesDescriptor_EXT
#define zxmd_md_EntitiesDescriptor_EXT
#endif

struct zxmd_md_EntitiesDescriptor_s* zxmd_DEC_md_EntitiesDescriptor(struct zx_ctx* c);
struct zxmd_md_EntitiesDescriptor_s* zxmd_NEW_md_EntitiesDescriptor(struct zx_ctx* c);
struct zxmd_md_EntitiesDescriptor_s* zxmd_DEEP_CLONE_md_EntitiesDescriptor(struct zx_ctx* c, struct zxmd_md_EntitiesDescriptor_s* x, int dup_strs);
void zxmd_DUP_STRS_md_EntitiesDescriptor(struct zx_ctx* c, struct zxmd_md_EntitiesDescriptor_s* x);
void zxmd_FREE_md_EntitiesDescriptor(struct zx_ctx* c, struct zxmd_md_EntitiesDescriptor_s* x, int free_strs);
int zxmd_WALK_SO_md_EntitiesDescriptor(struct zx_ctx* c, struct zxmd_md_EntitiesDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_EntitiesDescriptor(struct zx_ctx* c, struct zxmd_md_EntitiesDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_EntitiesDescriptor(struct zxmd_md_EntitiesDescriptor_s* x);
char* zxmd_ENC_SO_md_EntitiesDescriptor(struct zxmd_md_EntitiesDescriptor_s* x, char* p);
char* zxmd_ENC_WO_md_EntitiesDescriptor(struct zxmd_md_EntitiesDescriptor_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_EntitiesDescriptor(struct zx_ctx* c, struct zxmd_md_EntitiesDescriptor_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_EntitiesDescriptor(struct zx_ctx* c, struct zxmd_md_EntitiesDescriptor_s* x);

struct zxmd_md_EntitiesDescriptor_s {
  ZX_ELEM_EXT
  zxmd_md_EntitiesDescriptor_EXT
  struct zxmd_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zxmd_md_Extensions_s* Extensions;	/* {0,1}  */
  struct zxmd_md_EntityDescriptor_s* EntityDescriptor;	/* {0,-1} nada */
  struct zxmd_md_EntitiesDescriptor_s* EntitiesDescriptor;	/* {0,-1} nada */
  struct zx_str_s* validUntil;	/* {0,1} attribute dateTime */
  struct zx_str_s* cacheDuration;	/* {0,1} attribute duration */
  struct zx_str_s* ID;	/* {0,1} attribute xs:ID */
  struct zx_str_s* Name;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zxmd_md_EntitiesDescriptor_GET_validUntil(struct zxmd_md_EntitiesDescriptor_s* x);
struct zx_str_s* zxmd_md_EntitiesDescriptor_GET_cacheDuration(struct zxmd_md_EntitiesDescriptor_s* x);
struct zx_str_s* zxmd_md_EntitiesDescriptor_GET_ID(struct zxmd_md_EntitiesDescriptor_s* x);
struct zx_str_s* zxmd_md_EntitiesDescriptor_GET_Name(struct zxmd_md_EntitiesDescriptor_s* x);
struct zxmd_ds_Signature_s* zxmd_md_EntitiesDescriptor_GET_Signature(struct zxmd_md_EntitiesDescriptor_s* x, int n);
struct zxmd_md_Extensions_s* zxmd_md_EntitiesDescriptor_GET_Extensions(struct zxmd_md_EntitiesDescriptor_s* x, int n);
struct zxmd_md_EntityDescriptor_s* zxmd_md_EntitiesDescriptor_GET_EntityDescriptor(struct zxmd_md_EntitiesDescriptor_s* x, int n);
struct zxmd_md_EntitiesDescriptor_s* zxmd_md_EntitiesDescriptor_GET_EntitiesDescriptor(struct zxmd_md_EntitiesDescriptor_s* x, int n);
int zxmd_md_EntitiesDescriptor_NUM_Signature(struct zxmd_md_EntitiesDescriptor_s* x);
int zxmd_md_EntitiesDescriptor_NUM_Extensions(struct zxmd_md_EntitiesDescriptor_s* x);
int zxmd_md_EntitiesDescriptor_NUM_EntityDescriptor(struct zxmd_md_EntitiesDescriptor_s* x);
int zxmd_md_EntitiesDescriptor_NUM_EntitiesDescriptor(struct zxmd_md_EntitiesDescriptor_s* x);
struct zxmd_ds_Signature_s* zxmd_md_EntitiesDescriptor_POP_Signature(struct zxmd_md_EntitiesDescriptor_s* x);
struct zxmd_md_Extensions_s* zxmd_md_EntitiesDescriptor_POP_Extensions(struct zxmd_md_EntitiesDescriptor_s* x);
struct zxmd_md_EntityDescriptor_s* zxmd_md_EntitiesDescriptor_POP_EntityDescriptor(struct zxmd_md_EntitiesDescriptor_s* x);
struct zxmd_md_EntitiesDescriptor_s* zxmd_md_EntitiesDescriptor_POP_EntitiesDescriptor(struct zxmd_md_EntitiesDescriptor_s* x);
void zxmd_md_EntitiesDescriptor_PUSH_Signature(struct zxmd_md_EntitiesDescriptor_s* x, struct zxmd_ds_Signature_s* y);
void zxmd_md_EntitiesDescriptor_PUSH_Extensions(struct zxmd_md_EntitiesDescriptor_s* x, struct zxmd_md_Extensions_s* y);
void zxmd_md_EntitiesDescriptor_PUSH_EntityDescriptor(struct zxmd_md_EntitiesDescriptor_s* x, struct zxmd_md_EntityDescriptor_s* y);
void zxmd_md_EntitiesDescriptor_PUSH_EntitiesDescriptor(struct zxmd_md_EntitiesDescriptor_s* x, struct zxmd_md_EntitiesDescriptor_s* y);
void zxmd_md_EntitiesDescriptor_PUT_validUntil(struct zxmd_md_EntitiesDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_EntitiesDescriptor_PUT_cacheDuration(struct zxmd_md_EntitiesDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_EntitiesDescriptor_PUT_ID(struct zxmd_md_EntitiesDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_EntitiesDescriptor_PUT_Name(struct zxmd_md_EntitiesDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_EntitiesDescriptor_PUT_Signature(struct zxmd_md_EntitiesDescriptor_s* x, int n, struct zxmd_ds_Signature_s* y);
void zxmd_md_EntitiesDescriptor_PUT_Extensions(struct zxmd_md_EntitiesDescriptor_s* x, int n, struct zxmd_md_Extensions_s* y);
void zxmd_md_EntitiesDescriptor_PUT_EntityDescriptor(struct zxmd_md_EntitiesDescriptor_s* x, int n, struct zxmd_md_EntityDescriptor_s* y);
void zxmd_md_EntitiesDescriptor_PUT_EntitiesDescriptor(struct zxmd_md_EntitiesDescriptor_s* x, int n, struct zxmd_md_EntitiesDescriptor_s* y);
void zxmd_md_EntitiesDescriptor_ADD_Signature(struct zxmd_md_EntitiesDescriptor_s* x, int n, struct zxmd_ds_Signature_s* z);
void zxmd_md_EntitiesDescriptor_ADD_Extensions(struct zxmd_md_EntitiesDescriptor_s* x, int n, struct zxmd_md_Extensions_s* z);
void zxmd_md_EntitiesDescriptor_ADD_EntityDescriptor(struct zxmd_md_EntitiesDescriptor_s* x, int n, struct zxmd_md_EntityDescriptor_s* z);
void zxmd_md_EntitiesDescriptor_ADD_EntitiesDescriptor(struct zxmd_md_EntitiesDescriptor_s* x, int n, struct zxmd_md_EntitiesDescriptor_s* z);
void zxmd_md_EntitiesDescriptor_DEL_Signature(struct zxmd_md_EntitiesDescriptor_s* x, int n);
void zxmd_md_EntitiesDescriptor_DEL_Extensions(struct zxmd_md_EntitiesDescriptor_s* x, int n);
void zxmd_md_EntitiesDescriptor_DEL_EntityDescriptor(struct zxmd_md_EntitiesDescriptor_s* x, int n);
void zxmd_md_EntitiesDescriptor_DEL_EntitiesDescriptor(struct zxmd_md_EntitiesDescriptor_s* x, int n);
void zxmd_md_EntitiesDescriptor_REV_Signature(struct zxmd_md_EntitiesDescriptor_s* x);
void zxmd_md_EntitiesDescriptor_REV_Extensions(struct zxmd_md_EntitiesDescriptor_s* x);
void zxmd_md_EntitiesDescriptor_REV_EntityDescriptor(struct zxmd_md_EntitiesDescriptor_s* x);
void zxmd_md_EntitiesDescriptor_REV_EntitiesDescriptor(struct zxmd_md_EntitiesDescriptor_s* x);

/* -------------------------- md_EntityDescriptor -------------------------- */
/* refby( zxmd_md_EntitiesDescriptor_s ) */
#ifndef zxmd_md_EntityDescriptor_EXT
#define zxmd_md_EntityDescriptor_EXT
#endif

struct zxmd_md_EntityDescriptor_s* zxmd_DEC_md_EntityDescriptor(struct zx_ctx* c);
struct zxmd_md_EntityDescriptor_s* zxmd_NEW_md_EntityDescriptor(struct zx_ctx* c);
struct zxmd_md_EntityDescriptor_s* zxmd_DEEP_CLONE_md_EntityDescriptor(struct zx_ctx* c, struct zxmd_md_EntityDescriptor_s* x, int dup_strs);
void zxmd_DUP_STRS_md_EntityDescriptor(struct zx_ctx* c, struct zxmd_md_EntityDescriptor_s* x);
void zxmd_FREE_md_EntityDescriptor(struct zx_ctx* c, struct zxmd_md_EntityDescriptor_s* x, int free_strs);
int zxmd_WALK_SO_md_EntityDescriptor(struct zx_ctx* c, struct zxmd_md_EntityDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_EntityDescriptor(struct zx_ctx* c, struct zxmd_md_EntityDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_EntityDescriptor(struct zxmd_md_EntityDescriptor_s* x);
char* zxmd_ENC_SO_md_EntityDescriptor(struct zxmd_md_EntityDescriptor_s* x, char* p);
char* zxmd_ENC_WO_md_EntityDescriptor(struct zxmd_md_EntityDescriptor_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_EntityDescriptor(struct zx_ctx* c, struct zxmd_md_EntityDescriptor_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_EntityDescriptor(struct zx_ctx* c, struct zxmd_md_EntityDescriptor_s* x);

struct zxmd_md_EntityDescriptor_s {
  ZX_ELEM_EXT
  zxmd_md_EntityDescriptor_EXT
  struct zxmd_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zxmd_md_Extensions_s* Extensions;	/* {0,1}  */
  struct zxmd_md_RoleDescriptor_s* RoleDescriptor;	/* {0,-1} nada */
  struct zxmd_md_IDPSSODescriptor_s* IDPSSODescriptor;	/* {0,-1} nada */
  struct zxmd_md_SPSSODescriptor_s* SPSSODescriptor;	/* {0,-1} nada */
  struct zxmd_md_AuthnAuthorityDescriptor_s* AuthnAuthorityDescriptor;	/* {0,-1} nada */
  struct zxmd_md_AttributeAuthorityDescriptor_s* AttributeAuthorityDescriptor;	/* {0,-1} nada */
  struct zxmd_md_PDPDescriptor_s* PDPDescriptor;	/* {0,-1} nada */
  struct zxmd_md_AffiliationDescriptor_s* AffiliationDescriptor;	/* {0,-1} nada */
  struct zxmd_md_Organization_s* Organization;	/* {0,1} nada */
  struct zxmd_md_ContactPerson_s* ContactPerson;	/* {0,-1} nada */
  struct zxmd_md_AdditionalMetadataLocation_s* AdditionalMetadataLocation;	/* {0,-1} nada */
  struct zx_str_s* entityID;	/* {1,1} attribute md:entityIDType */
  struct zx_str_s* validUntil;	/* {0,1} attribute dateTime */
  struct zx_str_s* cacheDuration;	/* {0,1} attribute duration */
  struct zx_str_s* ID;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zxmd_md_EntityDescriptor_GET_entityID(struct zxmd_md_EntityDescriptor_s* x);
struct zx_str_s* zxmd_md_EntityDescriptor_GET_validUntil(struct zxmd_md_EntityDescriptor_s* x);
struct zx_str_s* zxmd_md_EntityDescriptor_GET_cacheDuration(struct zxmd_md_EntityDescriptor_s* x);
struct zx_str_s* zxmd_md_EntityDescriptor_GET_ID(struct zxmd_md_EntityDescriptor_s* x);
struct zxmd_ds_Signature_s* zxmd_md_EntityDescriptor_GET_Signature(struct zxmd_md_EntityDescriptor_s* x, int n);
struct zxmd_md_Extensions_s* zxmd_md_EntityDescriptor_GET_Extensions(struct zxmd_md_EntityDescriptor_s* x, int n);
struct zxmd_md_RoleDescriptor_s* zxmd_md_EntityDescriptor_GET_RoleDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n);
struct zxmd_md_IDPSSODescriptor_s* zxmd_md_EntityDescriptor_GET_IDPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x, int n);
struct zxmd_md_SPSSODescriptor_s* zxmd_md_EntityDescriptor_GET_SPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x, int n);
struct zxmd_md_AuthnAuthorityDescriptor_s* zxmd_md_EntityDescriptor_GET_AuthnAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n);
struct zxmd_md_AttributeAuthorityDescriptor_s* zxmd_md_EntityDescriptor_GET_AttributeAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n);
struct zxmd_md_PDPDescriptor_s* zxmd_md_EntityDescriptor_GET_PDPDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n);
struct zxmd_md_AffiliationDescriptor_s* zxmd_md_EntityDescriptor_GET_AffiliationDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n);
struct zxmd_md_Organization_s* zxmd_md_EntityDescriptor_GET_Organization(struct zxmd_md_EntityDescriptor_s* x, int n);
struct zxmd_md_ContactPerson_s* zxmd_md_EntityDescriptor_GET_ContactPerson(struct zxmd_md_EntityDescriptor_s* x, int n);
struct zxmd_md_AdditionalMetadataLocation_s* zxmd_md_EntityDescriptor_GET_AdditionalMetadataLocation(struct zxmd_md_EntityDescriptor_s* x, int n);
int zxmd_md_EntityDescriptor_NUM_Signature(struct zxmd_md_EntityDescriptor_s* x);
int zxmd_md_EntityDescriptor_NUM_Extensions(struct zxmd_md_EntityDescriptor_s* x);
int zxmd_md_EntityDescriptor_NUM_RoleDescriptor(struct zxmd_md_EntityDescriptor_s* x);
int zxmd_md_EntityDescriptor_NUM_IDPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x);
int zxmd_md_EntityDescriptor_NUM_SPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x);
int zxmd_md_EntityDescriptor_NUM_AuthnAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x);
int zxmd_md_EntityDescriptor_NUM_AttributeAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x);
int zxmd_md_EntityDescriptor_NUM_PDPDescriptor(struct zxmd_md_EntityDescriptor_s* x);
int zxmd_md_EntityDescriptor_NUM_AffiliationDescriptor(struct zxmd_md_EntityDescriptor_s* x);
int zxmd_md_EntityDescriptor_NUM_Organization(struct zxmd_md_EntityDescriptor_s* x);
int zxmd_md_EntityDescriptor_NUM_ContactPerson(struct zxmd_md_EntityDescriptor_s* x);
int zxmd_md_EntityDescriptor_NUM_AdditionalMetadataLocation(struct zxmd_md_EntityDescriptor_s* x);
struct zxmd_ds_Signature_s* zxmd_md_EntityDescriptor_POP_Signature(struct zxmd_md_EntityDescriptor_s* x);
struct zxmd_md_Extensions_s* zxmd_md_EntityDescriptor_POP_Extensions(struct zxmd_md_EntityDescriptor_s* x);
struct zxmd_md_RoleDescriptor_s* zxmd_md_EntityDescriptor_POP_RoleDescriptor(struct zxmd_md_EntityDescriptor_s* x);
struct zxmd_md_IDPSSODescriptor_s* zxmd_md_EntityDescriptor_POP_IDPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x);
struct zxmd_md_SPSSODescriptor_s* zxmd_md_EntityDescriptor_POP_SPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x);
struct zxmd_md_AuthnAuthorityDescriptor_s* zxmd_md_EntityDescriptor_POP_AuthnAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x);
struct zxmd_md_AttributeAuthorityDescriptor_s* zxmd_md_EntityDescriptor_POP_AttributeAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x);
struct zxmd_md_PDPDescriptor_s* zxmd_md_EntityDescriptor_POP_PDPDescriptor(struct zxmd_md_EntityDescriptor_s* x);
struct zxmd_md_AffiliationDescriptor_s* zxmd_md_EntityDescriptor_POP_AffiliationDescriptor(struct zxmd_md_EntityDescriptor_s* x);
struct zxmd_md_Organization_s* zxmd_md_EntityDescriptor_POP_Organization(struct zxmd_md_EntityDescriptor_s* x);
struct zxmd_md_ContactPerson_s* zxmd_md_EntityDescriptor_POP_ContactPerson(struct zxmd_md_EntityDescriptor_s* x);
struct zxmd_md_AdditionalMetadataLocation_s* zxmd_md_EntityDescriptor_POP_AdditionalMetadataLocation(struct zxmd_md_EntityDescriptor_s* x);
void zxmd_md_EntityDescriptor_PUSH_Signature(struct zxmd_md_EntityDescriptor_s* x, struct zxmd_ds_Signature_s* y);
void zxmd_md_EntityDescriptor_PUSH_Extensions(struct zxmd_md_EntityDescriptor_s* x, struct zxmd_md_Extensions_s* y);
void zxmd_md_EntityDescriptor_PUSH_RoleDescriptor(struct zxmd_md_EntityDescriptor_s* x, struct zxmd_md_RoleDescriptor_s* y);
void zxmd_md_EntityDescriptor_PUSH_IDPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x, struct zxmd_md_IDPSSODescriptor_s* y);
void zxmd_md_EntityDescriptor_PUSH_SPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x, struct zxmd_md_SPSSODescriptor_s* y);
void zxmd_md_EntityDescriptor_PUSH_AuthnAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x, struct zxmd_md_AuthnAuthorityDescriptor_s* y);
void zxmd_md_EntityDescriptor_PUSH_AttributeAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x, struct zxmd_md_AttributeAuthorityDescriptor_s* y);
void zxmd_md_EntityDescriptor_PUSH_PDPDescriptor(struct zxmd_md_EntityDescriptor_s* x, struct zxmd_md_PDPDescriptor_s* y);
void zxmd_md_EntityDescriptor_PUSH_AffiliationDescriptor(struct zxmd_md_EntityDescriptor_s* x, struct zxmd_md_AffiliationDescriptor_s* y);
void zxmd_md_EntityDescriptor_PUSH_Organization(struct zxmd_md_EntityDescriptor_s* x, struct zxmd_md_Organization_s* y);
void zxmd_md_EntityDescriptor_PUSH_ContactPerson(struct zxmd_md_EntityDescriptor_s* x, struct zxmd_md_ContactPerson_s* y);
void zxmd_md_EntityDescriptor_PUSH_AdditionalMetadataLocation(struct zxmd_md_EntityDescriptor_s* x, struct zxmd_md_AdditionalMetadataLocation_s* y);
void zxmd_md_EntityDescriptor_PUT_entityID(struct zxmd_md_EntityDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_EntityDescriptor_PUT_validUntil(struct zxmd_md_EntityDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_EntityDescriptor_PUT_cacheDuration(struct zxmd_md_EntityDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_EntityDescriptor_PUT_ID(struct zxmd_md_EntityDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_EntityDescriptor_PUT_Signature(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_ds_Signature_s* y);
void zxmd_md_EntityDescriptor_PUT_Extensions(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_Extensions_s* y);
void zxmd_md_EntityDescriptor_PUT_RoleDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_RoleDescriptor_s* y);
void zxmd_md_EntityDescriptor_PUT_IDPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_IDPSSODescriptor_s* y);
void zxmd_md_EntityDescriptor_PUT_SPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_SPSSODescriptor_s* y);
void zxmd_md_EntityDescriptor_PUT_AuthnAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_AuthnAuthorityDescriptor_s* y);
void zxmd_md_EntityDescriptor_PUT_AttributeAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_AttributeAuthorityDescriptor_s* y);
void zxmd_md_EntityDescriptor_PUT_PDPDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_PDPDescriptor_s* y);
void zxmd_md_EntityDescriptor_PUT_AffiliationDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_AffiliationDescriptor_s* y);
void zxmd_md_EntityDescriptor_PUT_Organization(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_Organization_s* y);
void zxmd_md_EntityDescriptor_PUT_ContactPerson(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* y);
void zxmd_md_EntityDescriptor_PUT_AdditionalMetadataLocation(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_AdditionalMetadataLocation_s* y);
void zxmd_md_EntityDescriptor_ADD_Signature(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_ds_Signature_s* z);
void zxmd_md_EntityDescriptor_ADD_Extensions(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_Extensions_s* z);
void zxmd_md_EntityDescriptor_ADD_RoleDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_RoleDescriptor_s* z);
void zxmd_md_EntityDescriptor_ADD_IDPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_IDPSSODescriptor_s* z);
void zxmd_md_EntityDescriptor_ADD_SPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_SPSSODescriptor_s* z);
void zxmd_md_EntityDescriptor_ADD_AuthnAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_AuthnAuthorityDescriptor_s* z);
void zxmd_md_EntityDescriptor_ADD_AttributeAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_AttributeAuthorityDescriptor_s* z);
void zxmd_md_EntityDescriptor_ADD_PDPDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_PDPDescriptor_s* z);
void zxmd_md_EntityDescriptor_ADD_AffiliationDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_AffiliationDescriptor_s* z);
void zxmd_md_EntityDescriptor_ADD_Organization(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_Organization_s* z);
void zxmd_md_EntityDescriptor_ADD_ContactPerson(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* z);
void zxmd_md_EntityDescriptor_ADD_AdditionalMetadataLocation(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_AdditionalMetadataLocation_s* z);
void zxmd_md_EntityDescriptor_DEL_Signature(struct zxmd_md_EntityDescriptor_s* x, int n);
void zxmd_md_EntityDescriptor_DEL_Extensions(struct zxmd_md_EntityDescriptor_s* x, int n);
void zxmd_md_EntityDescriptor_DEL_RoleDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n);
void zxmd_md_EntityDescriptor_DEL_IDPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x, int n);
void zxmd_md_EntityDescriptor_DEL_SPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x, int n);
void zxmd_md_EntityDescriptor_DEL_AuthnAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n);
void zxmd_md_EntityDescriptor_DEL_AttributeAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n);
void zxmd_md_EntityDescriptor_DEL_PDPDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n);
void zxmd_md_EntityDescriptor_DEL_AffiliationDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n);
void zxmd_md_EntityDescriptor_DEL_Organization(struct zxmd_md_EntityDescriptor_s* x, int n);
void zxmd_md_EntityDescriptor_DEL_ContactPerson(struct zxmd_md_EntityDescriptor_s* x, int n);
void zxmd_md_EntityDescriptor_DEL_AdditionalMetadataLocation(struct zxmd_md_EntityDescriptor_s* x, int n);
void zxmd_md_EntityDescriptor_REV_Signature(struct zxmd_md_EntityDescriptor_s* x);
void zxmd_md_EntityDescriptor_REV_Extensions(struct zxmd_md_EntityDescriptor_s* x);
void zxmd_md_EntityDescriptor_REV_RoleDescriptor(struct zxmd_md_EntityDescriptor_s* x);
void zxmd_md_EntityDescriptor_REV_IDPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x);
void zxmd_md_EntityDescriptor_REV_SPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x);
void zxmd_md_EntityDescriptor_REV_AuthnAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x);
void zxmd_md_EntityDescriptor_REV_AttributeAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x);
void zxmd_md_EntityDescriptor_REV_PDPDescriptor(struct zxmd_md_EntityDescriptor_s* x);
void zxmd_md_EntityDescriptor_REV_AffiliationDescriptor(struct zxmd_md_EntityDescriptor_s* x);
void zxmd_md_EntityDescriptor_REV_Organization(struct zxmd_md_EntityDescriptor_s* x);
void zxmd_md_EntityDescriptor_REV_ContactPerson(struct zxmd_md_EntityDescriptor_s* x);
void zxmd_md_EntityDescriptor_REV_AdditionalMetadataLocation(struct zxmd_md_EntityDescriptor_s* x);

/* -------------------------- md_Extensions -------------------------- */
/* refby( zxmd_md_IDPSSODescriptor_s zxmd_md_PDPDescriptor_s zxmd_md_SPSSODescriptor_s zxmd_md_AuthnAuthorityDescriptor_s zxmd_md_EntityDescriptor_s zxmd_md_ContactPerson_s zxmd_md_AffiliationDescriptor_s zxmd_md_RoleDescriptor_s zxmd_md_EntitiesDescriptor_s zxmd_md_AttributeAuthorityDescriptor_s zxmd_md_Organization_s ) */
#ifndef zxmd_md_Extensions_EXT
#define zxmd_md_Extensions_EXT
#endif

struct zxmd_md_Extensions_s* zxmd_DEC_md_Extensions(struct zx_ctx* c);
struct zxmd_md_Extensions_s* zxmd_NEW_md_Extensions(struct zx_ctx* c);
struct zxmd_md_Extensions_s* zxmd_DEEP_CLONE_md_Extensions(struct zx_ctx* c, struct zxmd_md_Extensions_s* x, int dup_strs);
void zxmd_DUP_STRS_md_Extensions(struct zx_ctx* c, struct zxmd_md_Extensions_s* x);
void zxmd_FREE_md_Extensions(struct zx_ctx* c, struct zxmd_md_Extensions_s* x, int free_strs);
int zxmd_WALK_SO_md_Extensions(struct zx_ctx* c, struct zxmd_md_Extensions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_Extensions(struct zx_ctx* c, struct zxmd_md_Extensions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_Extensions(struct zxmd_md_Extensions_s* x);
char* zxmd_ENC_SO_md_Extensions(struct zxmd_md_Extensions_s* x, char* p);
char* zxmd_ENC_WO_md_Extensions(struct zxmd_md_Extensions_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_Extensions(struct zx_ctx* c, struct zxmd_md_Extensions_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_Extensions(struct zx_ctx* c, struct zxmd_md_Extensions_s* x);

struct zxmd_md_Extensions_s {
  ZX_ELEM_EXT
  zxmd_md_Extensions_EXT
};


/* -------------------------- md_IDPSSODescriptor -------------------------- */
/* refby( zxmd_md_EntityDescriptor_s ) */
#ifndef zxmd_md_IDPSSODescriptor_EXT
#define zxmd_md_IDPSSODescriptor_EXT
#endif

struct zxmd_md_IDPSSODescriptor_s* zxmd_DEC_md_IDPSSODescriptor(struct zx_ctx* c);
struct zxmd_md_IDPSSODescriptor_s* zxmd_NEW_md_IDPSSODescriptor(struct zx_ctx* c);
struct zxmd_md_IDPSSODescriptor_s* zxmd_DEEP_CLONE_md_IDPSSODescriptor(struct zx_ctx* c, struct zxmd_md_IDPSSODescriptor_s* x, int dup_strs);
void zxmd_DUP_STRS_md_IDPSSODescriptor(struct zx_ctx* c, struct zxmd_md_IDPSSODescriptor_s* x);
void zxmd_FREE_md_IDPSSODescriptor(struct zx_ctx* c, struct zxmd_md_IDPSSODescriptor_s* x, int free_strs);
int zxmd_WALK_SO_md_IDPSSODescriptor(struct zx_ctx* c, struct zxmd_md_IDPSSODescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_IDPSSODescriptor(struct zx_ctx* c, struct zxmd_md_IDPSSODescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_IDPSSODescriptor(struct zxmd_md_IDPSSODescriptor_s* x);
char* zxmd_ENC_SO_md_IDPSSODescriptor(struct zxmd_md_IDPSSODescriptor_s* x, char* p);
char* zxmd_ENC_WO_md_IDPSSODescriptor(struct zxmd_md_IDPSSODescriptor_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_IDPSSODescriptor(struct zx_ctx* c, struct zxmd_md_IDPSSODescriptor_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_IDPSSODescriptor(struct zx_ctx* c, struct zxmd_md_IDPSSODescriptor_s* x);

struct zxmd_md_IDPSSODescriptor_s {
  ZX_ELEM_EXT
  zxmd_md_IDPSSODescriptor_EXT
  struct zxmd_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zxmd_md_Extensions_s* Extensions;	/* {0,1}  */
  struct zxmd_md_KeyDescriptor_s* KeyDescriptor;	/* {0,-1} nada */
  struct zxmd_md_Organization_s* Organization;	/* {0,1} nada */
  struct zxmd_md_ContactPerson_s* ContactPerson;	/* {0,-1} nada */
  struct zx_str_s* ID;	/* {0,1} attribute xs:ID */
  struct zx_str_s* validUntil;	/* {0,1} attribute dateTime */
  struct zx_str_s* cacheDuration;	/* {0,1} attribute duration */
  struct zx_str_s* protocolSupportEnumeration;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* errorURL;	/* {0,1} attribute xs:anyURI */
  struct zxmd_md_ArtifactResolutionService_s* ArtifactResolutionService;	/* {0,-1} nada */
  struct zxmd_md_SingleLogoutService_s* SingleLogoutService;	/* {0,-1} nada */
  struct zxmd_md_ManageNameIDService_s* ManageNameIDService;	/* {0,-1} nada */
  struct zx_elem_s* NameIDFormat;	/* {0,-1} xs:anyURI */
  struct zxmd_md_SingleSignOnService_s* SingleSignOnService;	/* {1,-1} nada */
  struct zxmd_md_NameIDMappingService_s* NameIDMappingService;	/* {0,-1} nada */
  struct zxmd_md_AssertionIDRequestService_s* AssertionIDRequestService;	/* {0,-1} nada */
  struct zx_elem_s* AttributeProfile;	/* {0,-1} xs:anyURI */
  struct zxmd_sa_Attribute_s* Attribute;	/* {0,-1} nada */
  struct zx_str_s* WantAuthnRequestsSigned;	/* {0,1} attribute xs:boolean */
};

struct zx_str_s* zxmd_md_IDPSSODescriptor_GET_ID(struct zxmd_md_IDPSSODescriptor_s* x);
struct zx_str_s* zxmd_md_IDPSSODescriptor_GET_validUntil(struct zxmd_md_IDPSSODescriptor_s* x);
struct zx_str_s* zxmd_md_IDPSSODescriptor_GET_cacheDuration(struct zxmd_md_IDPSSODescriptor_s* x);
struct zx_str_s* zxmd_md_IDPSSODescriptor_GET_protocolSupportEnumeration(struct zxmd_md_IDPSSODescriptor_s* x);
struct zx_str_s* zxmd_md_IDPSSODescriptor_GET_errorURL(struct zxmd_md_IDPSSODescriptor_s* x);
struct zx_str_s* zxmd_md_IDPSSODescriptor_GET_WantAuthnRequestsSigned(struct zxmd_md_IDPSSODescriptor_s* x);
struct zxmd_ds_Signature_s* zxmd_md_IDPSSODescriptor_GET_Signature(struct zxmd_md_IDPSSODescriptor_s* x, int n);
struct zxmd_md_Extensions_s* zxmd_md_IDPSSODescriptor_GET_Extensions(struct zxmd_md_IDPSSODescriptor_s* x, int n);
struct zxmd_md_KeyDescriptor_s* zxmd_md_IDPSSODescriptor_GET_KeyDescriptor(struct zxmd_md_IDPSSODescriptor_s* x, int n);
struct zxmd_md_Organization_s* zxmd_md_IDPSSODescriptor_GET_Organization(struct zxmd_md_IDPSSODescriptor_s* x, int n);
struct zxmd_md_ContactPerson_s* zxmd_md_IDPSSODescriptor_GET_ContactPerson(struct zxmd_md_IDPSSODescriptor_s* x, int n);
struct zxmd_md_ArtifactResolutionService_s* zxmd_md_IDPSSODescriptor_GET_ArtifactResolutionService(struct zxmd_md_IDPSSODescriptor_s* x, int n);
struct zxmd_md_SingleLogoutService_s* zxmd_md_IDPSSODescriptor_GET_SingleLogoutService(struct zxmd_md_IDPSSODescriptor_s* x, int n);
struct zxmd_md_ManageNameIDService_s* zxmd_md_IDPSSODescriptor_GET_ManageNameIDService(struct zxmd_md_IDPSSODescriptor_s* x, int n);
struct zx_elem_s* zxmd_md_IDPSSODescriptor_GET_NameIDFormat(struct zxmd_md_IDPSSODescriptor_s* x, int n);
struct zxmd_md_SingleSignOnService_s* zxmd_md_IDPSSODescriptor_GET_SingleSignOnService(struct zxmd_md_IDPSSODescriptor_s* x, int n);
struct zxmd_md_NameIDMappingService_s* zxmd_md_IDPSSODescriptor_GET_NameIDMappingService(struct zxmd_md_IDPSSODescriptor_s* x, int n);
struct zxmd_md_AssertionIDRequestService_s* zxmd_md_IDPSSODescriptor_GET_AssertionIDRequestService(struct zxmd_md_IDPSSODescriptor_s* x, int n);
struct zx_elem_s* zxmd_md_IDPSSODescriptor_GET_AttributeProfile(struct zxmd_md_IDPSSODescriptor_s* x, int n);
struct zxmd_sa_Attribute_s* zxmd_md_IDPSSODescriptor_GET_Attribute(struct zxmd_md_IDPSSODescriptor_s* x, int n);
int zxmd_md_IDPSSODescriptor_NUM_Signature(struct zxmd_md_IDPSSODescriptor_s* x);
int zxmd_md_IDPSSODescriptor_NUM_Extensions(struct zxmd_md_IDPSSODescriptor_s* x);
int zxmd_md_IDPSSODescriptor_NUM_KeyDescriptor(struct zxmd_md_IDPSSODescriptor_s* x);
int zxmd_md_IDPSSODescriptor_NUM_Organization(struct zxmd_md_IDPSSODescriptor_s* x);
int zxmd_md_IDPSSODescriptor_NUM_ContactPerson(struct zxmd_md_IDPSSODescriptor_s* x);
int zxmd_md_IDPSSODescriptor_NUM_ArtifactResolutionService(struct zxmd_md_IDPSSODescriptor_s* x);
int zxmd_md_IDPSSODescriptor_NUM_SingleLogoutService(struct zxmd_md_IDPSSODescriptor_s* x);
int zxmd_md_IDPSSODescriptor_NUM_ManageNameIDService(struct zxmd_md_IDPSSODescriptor_s* x);
int zxmd_md_IDPSSODescriptor_NUM_NameIDFormat(struct zxmd_md_IDPSSODescriptor_s* x);
int zxmd_md_IDPSSODescriptor_NUM_SingleSignOnService(struct zxmd_md_IDPSSODescriptor_s* x);
int zxmd_md_IDPSSODescriptor_NUM_NameIDMappingService(struct zxmd_md_IDPSSODescriptor_s* x);
int zxmd_md_IDPSSODescriptor_NUM_AssertionIDRequestService(struct zxmd_md_IDPSSODescriptor_s* x);
int zxmd_md_IDPSSODescriptor_NUM_AttributeProfile(struct zxmd_md_IDPSSODescriptor_s* x);
int zxmd_md_IDPSSODescriptor_NUM_Attribute(struct zxmd_md_IDPSSODescriptor_s* x);
struct zxmd_ds_Signature_s* zxmd_md_IDPSSODescriptor_POP_Signature(struct zxmd_md_IDPSSODescriptor_s* x);
struct zxmd_md_Extensions_s* zxmd_md_IDPSSODescriptor_POP_Extensions(struct zxmd_md_IDPSSODescriptor_s* x);
struct zxmd_md_KeyDescriptor_s* zxmd_md_IDPSSODescriptor_POP_KeyDescriptor(struct zxmd_md_IDPSSODescriptor_s* x);
struct zxmd_md_Organization_s* zxmd_md_IDPSSODescriptor_POP_Organization(struct zxmd_md_IDPSSODescriptor_s* x);
struct zxmd_md_ContactPerson_s* zxmd_md_IDPSSODescriptor_POP_ContactPerson(struct zxmd_md_IDPSSODescriptor_s* x);
struct zxmd_md_ArtifactResolutionService_s* zxmd_md_IDPSSODescriptor_POP_ArtifactResolutionService(struct zxmd_md_IDPSSODescriptor_s* x);
struct zxmd_md_SingleLogoutService_s* zxmd_md_IDPSSODescriptor_POP_SingleLogoutService(struct zxmd_md_IDPSSODescriptor_s* x);
struct zxmd_md_ManageNameIDService_s* zxmd_md_IDPSSODescriptor_POP_ManageNameIDService(struct zxmd_md_IDPSSODescriptor_s* x);
struct zx_elem_s* zxmd_md_IDPSSODescriptor_POP_NameIDFormat(struct zxmd_md_IDPSSODescriptor_s* x);
struct zxmd_md_SingleSignOnService_s* zxmd_md_IDPSSODescriptor_POP_SingleSignOnService(struct zxmd_md_IDPSSODescriptor_s* x);
struct zxmd_md_NameIDMappingService_s* zxmd_md_IDPSSODescriptor_POP_NameIDMappingService(struct zxmd_md_IDPSSODescriptor_s* x);
struct zxmd_md_AssertionIDRequestService_s* zxmd_md_IDPSSODescriptor_POP_AssertionIDRequestService(struct zxmd_md_IDPSSODescriptor_s* x);
struct zx_elem_s* zxmd_md_IDPSSODescriptor_POP_AttributeProfile(struct zxmd_md_IDPSSODescriptor_s* x);
struct zxmd_sa_Attribute_s* zxmd_md_IDPSSODescriptor_POP_Attribute(struct zxmd_md_IDPSSODescriptor_s* x);
void zxmd_md_IDPSSODescriptor_PUSH_Signature(struct zxmd_md_IDPSSODescriptor_s* x, struct zxmd_ds_Signature_s* y);
void zxmd_md_IDPSSODescriptor_PUSH_Extensions(struct zxmd_md_IDPSSODescriptor_s* x, struct zxmd_md_Extensions_s* y);
void zxmd_md_IDPSSODescriptor_PUSH_KeyDescriptor(struct zxmd_md_IDPSSODescriptor_s* x, struct zxmd_md_KeyDescriptor_s* y);
void zxmd_md_IDPSSODescriptor_PUSH_Organization(struct zxmd_md_IDPSSODescriptor_s* x, struct zxmd_md_Organization_s* y);
void zxmd_md_IDPSSODescriptor_PUSH_ContactPerson(struct zxmd_md_IDPSSODescriptor_s* x, struct zxmd_md_ContactPerson_s* y);
void zxmd_md_IDPSSODescriptor_PUSH_ArtifactResolutionService(struct zxmd_md_IDPSSODescriptor_s* x, struct zxmd_md_ArtifactResolutionService_s* y);
void zxmd_md_IDPSSODescriptor_PUSH_SingleLogoutService(struct zxmd_md_IDPSSODescriptor_s* x, struct zxmd_md_SingleLogoutService_s* y);
void zxmd_md_IDPSSODescriptor_PUSH_ManageNameIDService(struct zxmd_md_IDPSSODescriptor_s* x, struct zxmd_md_ManageNameIDService_s* y);
void zxmd_md_IDPSSODescriptor_PUSH_NameIDFormat(struct zxmd_md_IDPSSODescriptor_s* x, struct zx_elem_s* y);
void zxmd_md_IDPSSODescriptor_PUSH_SingleSignOnService(struct zxmd_md_IDPSSODescriptor_s* x, struct zxmd_md_SingleSignOnService_s* y);
void zxmd_md_IDPSSODescriptor_PUSH_NameIDMappingService(struct zxmd_md_IDPSSODescriptor_s* x, struct zxmd_md_NameIDMappingService_s* y);
void zxmd_md_IDPSSODescriptor_PUSH_AssertionIDRequestService(struct zxmd_md_IDPSSODescriptor_s* x, struct zxmd_md_AssertionIDRequestService_s* y);
void zxmd_md_IDPSSODescriptor_PUSH_AttributeProfile(struct zxmd_md_IDPSSODescriptor_s* x, struct zx_elem_s* y);
void zxmd_md_IDPSSODescriptor_PUSH_Attribute(struct zxmd_md_IDPSSODescriptor_s* x, struct zxmd_sa_Attribute_s* y);
void zxmd_md_IDPSSODescriptor_PUT_ID(struct zxmd_md_IDPSSODescriptor_s* x, struct zx_str_s* y);
void zxmd_md_IDPSSODescriptor_PUT_validUntil(struct zxmd_md_IDPSSODescriptor_s* x, struct zx_str_s* y);
void zxmd_md_IDPSSODescriptor_PUT_cacheDuration(struct zxmd_md_IDPSSODescriptor_s* x, struct zx_str_s* y);
void zxmd_md_IDPSSODescriptor_PUT_protocolSupportEnumeration(struct zxmd_md_IDPSSODescriptor_s* x, struct zx_str_s* y);
void zxmd_md_IDPSSODescriptor_PUT_errorURL(struct zxmd_md_IDPSSODescriptor_s* x, struct zx_str_s* y);
void zxmd_md_IDPSSODescriptor_PUT_WantAuthnRequestsSigned(struct zxmd_md_IDPSSODescriptor_s* x, struct zx_str_s* y);
void zxmd_md_IDPSSODescriptor_PUT_Signature(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_ds_Signature_s* y);
void zxmd_md_IDPSSODescriptor_PUT_Extensions(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_Extensions_s* y);
void zxmd_md_IDPSSODescriptor_PUT_KeyDescriptor(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* y);
void zxmd_md_IDPSSODescriptor_PUT_Organization(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_Organization_s* y);
void zxmd_md_IDPSSODescriptor_PUT_ContactPerson(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* y);
void zxmd_md_IDPSSODescriptor_PUT_ArtifactResolutionService(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_ArtifactResolutionService_s* y);
void zxmd_md_IDPSSODescriptor_PUT_SingleLogoutService(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_SingleLogoutService_s* y);
void zxmd_md_IDPSSODescriptor_PUT_ManageNameIDService(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_ManageNameIDService_s* y);
void zxmd_md_IDPSSODescriptor_PUT_NameIDFormat(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zx_elem_s* y);
void zxmd_md_IDPSSODescriptor_PUT_SingleSignOnService(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_SingleSignOnService_s* y);
void zxmd_md_IDPSSODescriptor_PUT_NameIDMappingService(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_NameIDMappingService_s* y);
void zxmd_md_IDPSSODescriptor_PUT_AssertionIDRequestService(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_AssertionIDRequestService_s* y);
void zxmd_md_IDPSSODescriptor_PUT_AttributeProfile(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zx_elem_s* y);
void zxmd_md_IDPSSODescriptor_PUT_Attribute(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_sa_Attribute_s* y);
void zxmd_md_IDPSSODescriptor_ADD_Signature(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_ds_Signature_s* z);
void zxmd_md_IDPSSODescriptor_ADD_Extensions(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_Extensions_s* z);
void zxmd_md_IDPSSODescriptor_ADD_KeyDescriptor(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* z);
void zxmd_md_IDPSSODescriptor_ADD_Organization(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_Organization_s* z);
void zxmd_md_IDPSSODescriptor_ADD_ContactPerson(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* z);
void zxmd_md_IDPSSODescriptor_ADD_ArtifactResolutionService(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_ArtifactResolutionService_s* z);
void zxmd_md_IDPSSODescriptor_ADD_SingleLogoutService(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_SingleLogoutService_s* z);
void zxmd_md_IDPSSODescriptor_ADD_ManageNameIDService(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_ManageNameIDService_s* z);
void zxmd_md_IDPSSODescriptor_ADD_NameIDFormat(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zx_elem_s* z);
void zxmd_md_IDPSSODescriptor_ADD_SingleSignOnService(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_SingleSignOnService_s* z);
void zxmd_md_IDPSSODescriptor_ADD_NameIDMappingService(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_NameIDMappingService_s* z);
void zxmd_md_IDPSSODescriptor_ADD_AssertionIDRequestService(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_AssertionIDRequestService_s* z);
void zxmd_md_IDPSSODescriptor_ADD_AttributeProfile(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zx_elem_s* z);
void zxmd_md_IDPSSODescriptor_ADD_Attribute(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_sa_Attribute_s* z);
void zxmd_md_IDPSSODescriptor_DEL_Signature(struct zxmd_md_IDPSSODescriptor_s* x, int n);
void zxmd_md_IDPSSODescriptor_DEL_Extensions(struct zxmd_md_IDPSSODescriptor_s* x, int n);
void zxmd_md_IDPSSODescriptor_DEL_KeyDescriptor(struct zxmd_md_IDPSSODescriptor_s* x, int n);
void zxmd_md_IDPSSODescriptor_DEL_Organization(struct zxmd_md_IDPSSODescriptor_s* x, int n);
void zxmd_md_IDPSSODescriptor_DEL_ContactPerson(struct zxmd_md_IDPSSODescriptor_s* x, int n);
void zxmd_md_IDPSSODescriptor_DEL_ArtifactResolutionService(struct zxmd_md_IDPSSODescriptor_s* x, int n);
void zxmd_md_IDPSSODescriptor_DEL_SingleLogoutService(struct zxmd_md_IDPSSODescriptor_s* x, int n);
void zxmd_md_IDPSSODescriptor_DEL_ManageNameIDService(struct zxmd_md_IDPSSODescriptor_s* x, int n);
void zxmd_md_IDPSSODescriptor_DEL_NameIDFormat(struct zxmd_md_IDPSSODescriptor_s* x, int n);
void zxmd_md_IDPSSODescriptor_DEL_SingleSignOnService(struct zxmd_md_IDPSSODescriptor_s* x, int n);
void zxmd_md_IDPSSODescriptor_DEL_NameIDMappingService(struct zxmd_md_IDPSSODescriptor_s* x, int n);
void zxmd_md_IDPSSODescriptor_DEL_AssertionIDRequestService(struct zxmd_md_IDPSSODescriptor_s* x, int n);
void zxmd_md_IDPSSODescriptor_DEL_AttributeProfile(struct zxmd_md_IDPSSODescriptor_s* x, int n);
void zxmd_md_IDPSSODescriptor_DEL_Attribute(struct zxmd_md_IDPSSODescriptor_s* x, int n);
void zxmd_md_IDPSSODescriptor_REV_Signature(struct zxmd_md_IDPSSODescriptor_s* x);
void zxmd_md_IDPSSODescriptor_REV_Extensions(struct zxmd_md_IDPSSODescriptor_s* x);
void zxmd_md_IDPSSODescriptor_REV_KeyDescriptor(struct zxmd_md_IDPSSODescriptor_s* x);
void zxmd_md_IDPSSODescriptor_REV_Organization(struct zxmd_md_IDPSSODescriptor_s* x);
void zxmd_md_IDPSSODescriptor_REV_ContactPerson(struct zxmd_md_IDPSSODescriptor_s* x);
void zxmd_md_IDPSSODescriptor_REV_ArtifactResolutionService(struct zxmd_md_IDPSSODescriptor_s* x);
void zxmd_md_IDPSSODescriptor_REV_SingleLogoutService(struct zxmd_md_IDPSSODescriptor_s* x);
void zxmd_md_IDPSSODescriptor_REV_ManageNameIDService(struct zxmd_md_IDPSSODescriptor_s* x);
void zxmd_md_IDPSSODescriptor_REV_NameIDFormat(struct zxmd_md_IDPSSODescriptor_s* x);
void zxmd_md_IDPSSODescriptor_REV_SingleSignOnService(struct zxmd_md_IDPSSODescriptor_s* x);
void zxmd_md_IDPSSODescriptor_REV_NameIDMappingService(struct zxmd_md_IDPSSODescriptor_s* x);
void zxmd_md_IDPSSODescriptor_REV_AssertionIDRequestService(struct zxmd_md_IDPSSODescriptor_s* x);
void zxmd_md_IDPSSODescriptor_REV_AttributeProfile(struct zxmd_md_IDPSSODescriptor_s* x);
void zxmd_md_IDPSSODescriptor_REV_Attribute(struct zxmd_md_IDPSSODescriptor_s* x);

/* -------------------------- md_KeyDescriptor -------------------------- */
/* refby( zxmd_md_IDPSSODescriptor_s zxmd_md_PDPDescriptor_s zxmd_md_SPSSODescriptor_s zxmd_md_AuthnAuthorityDescriptor_s zxmd_md_AffiliationDescriptor_s zxmd_md_RoleDescriptor_s zxmd_md_AttributeAuthorityDescriptor_s ) */
#ifndef zxmd_md_KeyDescriptor_EXT
#define zxmd_md_KeyDescriptor_EXT
#endif

struct zxmd_md_KeyDescriptor_s* zxmd_DEC_md_KeyDescriptor(struct zx_ctx* c);
struct zxmd_md_KeyDescriptor_s* zxmd_NEW_md_KeyDescriptor(struct zx_ctx* c);
struct zxmd_md_KeyDescriptor_s* zxmd_DEEP_CLONE_md_KeyDescriptor(struct zx_ctx* c, struct zxmd_md_KeyDescriptor_s* x, int dup_strs);
void zxmd_DUP_STRS_md_KeyDescriptor(struct zx_ctx* c, struct zxmd_md_KeyDescriptor_s* x);
void zxmd_FREE_md_KeyDescriptor(struct zx_ctx* c, struct zxmd_md_KeyDescriptor_s* x, int free_strs);
int zxmd_WALK_SO_md_KeyDescriptor(struct zx_ctx* c, struct zxmd_md_KeyDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_KeyDescriptor(struct zx_ctx* c, struct zxmd_md_KeyDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_KeyDescriptor(struct zxmd_md_KeyDescriptor_s* x);
char* zxmd_ENC_SO_md_KeyDescriptor(struct zxmd_md_KeyDescriptor_s* x, char* p);
char* zxmd_ENC_WO_md_KeyDescriptor(struct zxmd_md_KeyDescriptor_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_KeyDescriptor(struct zx_ctx* c, struct zxmd_md_KeyDescriptor_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_KeyDescriptor(struct zx_ctx* c, struct zxmd_md_KeyDescriptor_s* x);

struct zxmd_md_KeyDescriptor_s {
  ZX_ELEM_EXT
  zxmd_md_KeyDescriptor_EXT
  struct zxmd_ds_KeyInfo_s* KeyInfo;	/* {1,1} nada */
  struct zxmd_md_EncryptionMethod_s* EncryptionMethod;	/* {0,-1} nada */
  struct zx_str_s* use;	/* {0,1} attribute md:KeyTypes */
};

struct zx_str_s* zxmd_md_KeyDescriptor_GET_use(struct zxmd_md_KeyDescriptor_s* x);
struct zxmd_ds_KeyInfo_s* zxmd_md_KeyDescriptor_GET_KeyInfo(struct zxmd_md_KeyDescriptor_s* x, int n);
struct zxmd_md_EncryptionMethod_s* zxmd_md_KeyDescriptor_GET_EncryptionMethod(struct zxmd_md_KeyDescriptor_s* x, int n);
int zxmd_md_KeyDescriptor_NUM_KeyInfo(struct zxmd_md_KeyDescriptor_s* x);
int zxmd_md_KeyDescriptor_NUM_EncryptionMethod(struct zxmd_md_KeyDescriptor_s* x);
struct zxmd_ds_KeyInfo_s* zxmd_md_KeyDescriptor_POP_KeyInfo(struct zxmd_md_KeyDescriptor_s* x);
struct zxmd_md_EncryptionMethod_s* zxmd_md_KeyDescriptor_POP_EncryptionMethod(struct zxmd_md_KeyDescriptor_s* x);
void zxmd_md_KeyDescriptor_PUSH_KeyInfo(struct zxmd_md_KeyDescriptor_s* x, struct zxmd_ds_KeyInfo_s* y);
void zxmd_md_KeyDescriptor_PUSH_EncryptionMethod(struct zxmd_md_KeyDescriptor_s* x, struct zxmd_md_EncryptionMethod_s* y);
void zxmd_md_KeyDescriptor_PUT_use(struct zxmd_md_KeyDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_KeyDescriptor_PUT_KeyInfo(struct zxmd_md_KeyDescriptor_s* x, int n, struct zxmd_ds_KeyInfo_s* y);
void zxmd_md_KeyDescriptor_PUT_EncryptionMethod(struct zxmd_md_KeyDescriptor_s* x, int n, struct zxmd_md_EncryptionMethod_s* y);
void zxmd_md_KeyDescriptor_ADD_KeyInfo(struct zxmd_md_KeyDescriptor_s* x, int n, struct zxmd_ds_KeyInfo_s* z);
void zxmd_md_KeyDescriptor_ADD_EncryptionMethod(struct zxmd_md_KeyDescriptor_s* x, int n, struct zxmd_md_EncryptionMethod_s* z);
void zxmd_md_KeyDescriptor_DEL_KeyInfo(struct zxmd_md_KeyDescriptor_s* x, int n);
void zxmd_md_KeyDescriptor_DEL_EncryptionMethod(struct zxmd_md_KeyDescriptor_s* x, int n);
void zxmd_md_KeyDescriptor_REV_KeyInfo(struct zxmd_md_KeyDescriptor_s* x);
void zxmd_md_KeyDescriptor_REV_EncryptionMethod(struct zxmd_md_KeyDescriptor_s* x);

/* -------------------------- md_ManageNameIDService -------------------------- */
/* refby( zxmd_md_IDPSSODescriptor_s zxmd_md_SPSSODescriptor_s ) */
#ifndef zxmd_md_ManageNameIDService_EXT
#define zxmd_md_ManageNameIDService_EXT
#endif

struct zxmd_md_ManageNameIDService_s* zxmd_DEC_md_ManageNameIDService(struct zx_ctx* c);
struct zxmd_md_ManageNameIDService_s* zxmd_NEW_md_ManageNameIDService(struct zx_ctx* c);
struct zxmd_md_ManageNameIDService_s* zxmd_DEEP_CLONE_md_ManageNameIDService(struct zx_ctx* c, struct zxmd_md_ManageNameIDService_s* x, int dup_strs);
void zxmd_DUP_STRS_md_ManageNameIDService(struct zx_ctx* c, struct zxmd_md_ManageNameIDService_s* x);
void zxmd_FREE_md_ManageNameIDService(struct zx_ctx* c, struct zxmd_md_ManageNameIDService_s* x, int free_strs);
int zxmd_WALK_SO_md_ManageNameIDService(struct zx_ctx* c, struct zxmd_md_ManageNameIDService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_ManageNameIDService(struct zx_ctx* c, struct zxmd_md_ManageNameIDService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_ManageNameIDService(struct zxmd_md_ManageNameIDService_s* x);
char* zxmd_ENC_SO_md_ManageNameIDService(struct zxmd_md_ManageNameIDService_s* x, char* p);
char* zxmd_ENC_WO_md_ManageNameIDService(struct zxmd_md_ManageNameIDService_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_ManageNameIDService(struct zx_ctx* c, struct zxmd_md_ManageNameIDService_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_ManageNameIDService(struct zx_ctx* c, struct zxmd_md_ManageNameIDService_s* x);

struct zxmd_md_ManageNameIDService_s {
  ZX_ELEM_EXT
  zxmd_md_ManageNameIDService_EXT
  struct zx_str_s* Binding;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* Location;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* ResponseLocation;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_md_ManageNameIDService_GET_Binding(struct zxmd_md_ManageNameIDService_s* x);
struct zx_str_s* zxmd_md_ManageNameIDService_GET_Location(struct zxmd_md_ManageNameIDService_s* x);
struct zx_str_s* zxmd_md_ManageNameIDService_GET_ResponseLocation(struct zxmd_md_ManageNameIDService_s* x);
void zxmd_md_ManageNameIDService_PUT_Binding(struct zxmd_md_ManageNameIDService_s* x, struct zx_str_s* y);
void zxmd_md_ManageNameIDService_PUT_Location(struct zxmd_md_ManageNameIDService_s* x, struct zx_str_s* y);
void zxmd_md_ManageNameIDService_PUT_ResponseLocation(struct zxmd_md_ManageNameIDService_s* x, struct zx_str_s* y);

/* -------------------------- md_NameIDMappingService -------------------------- */
/* refby( zxmd_md_IDPSSODescriptor_s ) */
#ifndef zxmd_md_NameIDMappingService_EXT
#define zxmd_md_NameIDMappingService_EXT
#endif

struct zxmd_md_NameIDMappingService_s* zxmd_DEC_md_NameIDMappingService(struct zx_ctx* c);
struct zxmd_md_NameIDMappingService_s* zxmd_NEW_md_NameIDMappingService(struct zx_ctx* c);
struct zxmd_md_NameIDMappingService_s* zxmd_DEEP_CLONE_md_NameIDMappingService(struct zx_ctx* c, struct zxmd_md_NameIDMappingService_s* x, int dup_strs);
void zxmd_DUP_STRS_md_NameIDMappingService(struct zx_ctx* c, struct zxmd_md_NameIDMappingService_s* x);
void zxmd_FREE_md_NameIDMappingService(struct zx_ctx* c, struct zxmd_md_NameIDMappingService_s* x, int free_strs);
int zxmd_WALK_SO_md_NameIDMappingService(struct zx_ctx* c, struct zxmd_md_NameIDMappingService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_NameIDMappingService(struct zx_ctx* c, struct zxmd_md_NameIDMappingService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_NameIDMappingService(struct zxmd_md_NameIDMappingService_s* x);
char* zxmd_ENC_SO_md_NameIDMappingService(struct zxmd_md_NameIDMappingService_s* x, char* p);
char* zxmd_ENC_WO_md_NameIDMappingService(struct zxmd_md_NameIDMappingService_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_NameIDMappingService(struct zx_ctx* c, struct zxmd_md_NameIDMappingService_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_NameIDMappingService(struct zx_ctx* c, struct zxmd_md_NameIDMappingService_s* x);

struct zxmd_md_NameIDMappingService_s {
  ZX_ELEM_EXT
  zxmd_md_NameIDMappingService_EXT
  struct zx_str_s* Binding;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* Location;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* ResponseLocation;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_md_NameIDMappingService_GET_Binding(struct zxmd_md_NameIDMappingService_s* x);
struct zx_str_s* zxmd_md_NameIDMappingService_GET_Location(struct zxmd_md_NameIDMappingService_s* x);
struct zx_str_s* zxmd_md_NameIDMappingService_GET_ResponseLocation(struct zxmd_md_NameIDMappingService_s* x);
void zxmd_md_NameIDMappingService_PUT_Binding(struct zxmd_md_NameIDMappingService_s* x, struct zx_str_s* y);
void zxmd_md_NameIDMappingService_PUT_Location(struct zxmd_md_NameIDMappingService_s* x, struct zx_str_s* y);
void zxmd_md_NameIDMappingService_PUT_ResponseLocation(struct zxmd_md_NameIDMappingService_s* x, struct zx_str_s* y);

/* -------------------------- md_Organization -------------------------- */
/* refby( zxmd_md_IDPSSODescriptor_s zxmd_md_PDPDescriptor_s zxmd_md_SPSSODescriptor_s zxmd_md_AuthnAuthorityDescriptor_s zxmd_md_EntityDescriptor_s zxmd_md_RoleDescriptor_s zxmd_md_AttributeAuthorityDescriptor_s ) */
#ifndef zxmd_md_Organization_EXT
#define zxmd_md_Organization_EXT
#endif

struct zxmd_md_Organization_s* zxmd_DEC_md_Organization(struct zx_ctx* c);
struct zxmd_md_Organization_s* zxmd_NEW_md_Organization(struct zx_ctx* c);
struct zxmd_md_Organization_s* zxmd_DEEP_CLONE_md_Organization(struct zx_ctx* c, struct zxmd_md_Organization_s* x, int dup_strs);
void zxmd_DUP_STRS_md_Organization(struct zx_ctx* c, struct zxmd_md_Organization_s* x);
void zxmd_FREE_md_Organization(struct zx_ctx* c, struct zxmd_md_Organization_s* x, int free_strs);
int zxmd_WALK_SO_md_Organization(struct zx_ctx* c, struct zxmd_md_Organization_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_Organization(struct zx_ctx* c, struct zxmd_md_Organization_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_Organization(struct zxmd_md_Organization_s* x);
char* zxmd_ENC_SO_md_Organization(struct zxmd_md_Organization_s* x, char* p);
char* zxmd_ENC_WO_md_Organization(struct zxmd_md_Organization_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_Organization(struct zx_ctx* c, struct zxmd_md_Organization_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_Organization(struct zx_ctx* c, struct zxmd_md_Organization_s* x);

struct zxmd_md_Organization_s {
  ZX_ELEM_EXT
  zxmd_md_Organization_EXT
  struct zxmd_md_Extensions_s* Extensions;	/* {0,1}  */
  struct zxmd_md_OrganizationName_s* OrganizationName;	/* {1,-1} nada */
  struct zxmd_md_OrganizationDisplayName_s* OrganizationDisplayName;	/* {1,-1} nada */
  struct zxmd_md_OrganizationURL_s* OrganizationURL;	/* {1,-1} nada */
};

struct zxmd_md_Extensions_s* zxmd_md_Organization_GET_Extensions(struct zxmd_md_Organization_s* x, int n);
struct zxmd_md_OrganizationName_s* zxmd_md_Organization_GET_OrganizationName(struct zxmd_md_Organization_s* x, int n);
struct zxmd_md_OrganizationDisplayName_s* zxmd_md_Organization_GET_OrganizationDisplayName(struct zxmd_md_Organization_s* x, int n);
struct zxmd_md_OrganizationURL_s* zxmd_md_Organization_GET_OrganizationURL(struct zxmd_md_Organization_s* x, int n);
int zxmd_md_Organization_NUM_Extensions(struct zxmd_md_Organization_s* x);
int zxmd_md_Organization_NUM_OrganizationName(struct zxmd_md_Organization_s* x);
int zxmd_md_Organization_NUM_OrganizationDisplayName(struct zxmd_md_Organization_s* x);
int zxmd_md_Organization_NUM_OrganizationURL(struct zxmd_md_Organization_s* x);
struct zxmd_md_Extensions_s* zxmd_md_Organization_POP_Extensions(struct zxmd_md_Organization_s* x);
struct zxmd_md_OrganizationName_s* zxmd_md_Organization_POP_OrganizationName(struct zxmd_md_Organization_s* x);
struct zxmd_md_OrganizationDisplayName_s* zxmd_md_Organization_POP_OrganizationDisplayName(struct zxmd_md_Organization_s* x);
struct zxmd_md_OrganizationURL_s* zxmd_md_Organization_POP_OrganizationURL(struct zxmd_md_Organization_s* x);
void zxmd_md_Organization_PUSH_Extensions(struct zxmd_md_Organization_s* x, struct zxmd_md_Extensions_s* y);
void zxmd_md_Organization_PUSH_OrganizationName(struct zxmd_md_Organization_s* x, struct zxmd_md_OrganizationName_s* y);
void zxmd_md_Organization_PUSH_OrganizationDisplayName(struct zxmd_md_Organization_s* x, struct zxmd_md_OrganizationDisplayName_s* y);
void zxmd_md_Organization_PUSH_OrganizationURL(struct zxmd_md_Organization_s* x, struct zxmd_md_OrganizationURL_s* y);
void zxmd_md_Organization_PUT_Extensions(struct zxmd_md_Organization_s* x, int n, struct zxmd_md_Extensions_s* y);
void zxmd_md_Organization_PUT_OrganizationName(struct zxmd_md_Organization_s* x, int n, struct zxmd_md_OrganizationName_s* y);
void zxmd_md_Organization_PUT_OrganizationDisplayName(struct zxmd_md_Organization_s* x, int n, struct zxmd_md_OrganizationDisplayName_s* y);
void zxmd_md_Organization_PUT_OrganizationURL(struct zxmd_md_Organization_s* x, int n, struct zxmd_md_OrganizationURL_s* y);
void zxmd_md_Organization_ADD_Extensions(struct zxmd_md_Organization_s* x, int n, struct zxmd_md_Extensions_s* z);
void zxmd_md_Organization_ADD_OrganizationName(struct zxmd_md_Organization_s* x, int n, struct zxmd_md_OrganizationName_s* z);
void zxmd_md_Organization_ADD_OrganizationDisplayName(struct zxmd_md_Organization_s* x, int n, struct zxmd_md_OrganizationDisplayName_s* z);
void zxmd_md_Organization_ADD_OrganizationURL(struct zxmd_md_Organization_s* x, int n, struct zxmd_md_OrganizationURL_s* z);
void zxmd_md_Organization_DEL_Extensions(struct zxmd_md_Organization_s* x, int n);
void zxmd_md_Organization_DEL_OrganizationName(struct zxmd_md_Organization_s* x, int n);
void zxmd_md_Organization_DEL_OrganizationDisplayName(struct zxmd_md_Organization_s* x, int n);
void zxmd_md_Organization_DEL_OrganizationURL(struct zxmd_md_Organization_s* x, int n);
void zxmd_md_Organization_REV_Extensions(struct zxmd_md_Organization_s* x);
void zxmd_md_Organization_REV_OrganizationName(struct zxmd_md_Organization_s* x);
void zxmd_md_Organization_REV_OrganizationDisplayName(struct zxmd_md_Organization_s* x);
void zxmd_md_Organization_REV_OrganizationURL(struct zxmd_md_Organization_s* x);

/* -------------------------- md_OrganizationDisplayName -------------------------- */
/* refby( zxmd_md_Organization_s ) */
#ifndef zxmd_md_OrganizationDisplayName_EXT
#define zxmd_md_OrganizationDisplayName_EXT
#endif

struct zxmd_md_OrganizationDisplayName_s* zxmd_DEC_md_OrganizationDisplayName(struct zx_ctx* c);
struct zxmd_md_OrganizationDisplayName_s* zxmd_NEW_md_OrganizationDisplayName(struct zx_ctx* c);
struct zxmd_md_OrganizationDisplayName_s* zxmd_DEEP_CLONE_md_OrganizationDisplayName(struct zx_ctx* c, struct zxmd_md_OrganizationDisplayName_s* x, int dup_strs);
void zxmd_DUP_STRS_md_OrganizationDisplayName(struct zx_ctx* c, struct zxmd_md_OrganizationDisplayName_s* x);
void zxmd_FREE_md_OrganizationDisplayName(struct zx_ctx* c, struct zxmd_md_OrganizationDisplayName_s* x, int free_strs);
int zxmd_WALK_SO_md_OrganizationDisplayName(struct zx_ctx* c, struct zxmd_md_OrganizationDisplayName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_OrganizationDisplayName(struct zx_ctx* c, struct zxmd_md_OrganizationDisplayName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_OrganizationDisplayName(struct zxmd_md_OrganizationDisplayName_s* x);
char* zxmd_ENC_SO_md_OrganizationDisplayName(struct zxmd_md_OrganizationDisplayName_s* x, char* p);
char* zxmd_ENC_WO_md_OrganizationDisplayName(struct zxmd_md_OrganizationDisplayName_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_OrganizationDisplayName(struct zx_ctx* c, struct zxmd_md_OrganizationDisplayName_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_OrganizationDisplayName(struct zx_ctx* c, struct zxmd_md_OrganizationDisplayName_s* x);

struct zxmd_md_OrganizationDisplayName_s {
  ZX_ELEM_EXT
  zxmd_md_OrganizationDisplayName_EXT
  struct zx_str_s* lang;	/* {1,1} attribute xs:string */
};

struct zx_str_s* zxmd_md_OrganizationDisplayName_GET_lang(struct zxmd_md_OrganizationDisplayName_s* x);
void zxmd_md_OrganizationDisplayName_PUT_lang(struct zxmd_md_OrganizationDisplayName_s* x, struct zx_str_s* y);

/* -------------------------- md_OrganizationName -------------------------- */
/* refby( zxmd_md_Organization_s ) */
#ifndef zxmd_md_OrganizationName_EXT
#define zxmd_md_OrganizationName_EXT
#endif

struct zxmd_md_OrganizationName_s* zxmd_DEC_md_OrganizationName(struct zx_ctx* c);
struct zxmd_md_OrganizationName_s* zxmd_NEW_md_OrganizationName(struct zx_ctx* c);
struct zxmd_md_OrganizationName_s* zxmd_DEEP_CLONE_md_OrganizationName(struct zx_ctx* c, struct zxmd_md_OrganizationName_s* x, int dup_strs);
void zxmd_DUP_STRS_md_OrganizationName(struct zx_ctx* c, struct zxmd_md_OrganizationName_s* x);
void zxmd_FREE_md_OrganizationName(struct zx_ctx* c, struct zxmd_md_OrganizationName_s* x, int free_strs);
int zxmd_WALK_SO_md_OrganizationName(struct zx_ctx* c, struct zxmd_md_OrganizationName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_OrganizationName(struct zx_ctx* c, struct zxmd_md_OrganizationName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_OrganizationName(struct zxmd_md_OrganizationName_s* x);
char* zxmd_ENC_SO_md_OrganizationName(struct zxmd_md_OrganizationName_s* x, char* p);
char* zxmd_ENC_WO_md_OrganizationName(struct zxmd_md_OrganizationName_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_OrganizationName(struct zx_ctx* c, struct zxmd_md_OrganizationName_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_OrganizationName(struct zx_ctx* c, struct zxmd_md_OrganizationName_s* x);

struct zxmd_md_OrganizationName_s {
  ZX_ELEM_EXT
  zxmd_md_OrganizationName_EXT
  struct zx_str_s* lang;	/* {1,1} attribute xs:string */
};

struct zx_str_s* zxmd_md_OrganizationName_GET_lang(struct zxmd_md_OrganizationName_s* x);
void zxmd_md_OrganizationName_PUT_lang(struct zxmd_md_OrganizationName_s* x, struct zx_str_s* y);

/* -------------------------- md_OrganizationURL -------------------------- */
/* refby( zxmd_md_Organization_s ) */
#ifndef zxmd_md_OrganizationURL_EXT
#define zxmd_md_OrganizationURL_EXT
#endif

struct zxmd_md_OrganizationURL_s* zxmd_DEC_md_OrganizationURL(struct zx_ctx* c);
struct zxmd_md_OrganizationURL_s* zxmd_NEW_md_OrganizationURL(struct zx_ctx* c);
struct zxmd_md_OrganizationURL_s* zxmd_DEEP_CLONE_md_OrganizationURL(struct zx_ctx* c, struct zxmd_md_OrganizationURL_s* x, int dup_strs);
void zxmd_DUP_STRS_md_OrganizationURL(struct zx_ctx* c, struct zxmd_md_OrganizationURL_s* x);
void zxmd_FREE_md_OrganizationURL(struct zx_ctx* c, struct zxmd_md_OrganizationURL_s* x, int free_strs);
int zxmd_WALK_SO_md_OrganizationURL(struct zx_ctx* c, struct zxmd_md_OrganizationURL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_OrganizationURL(struct zx_ctx* c, struct zxmd_md_OrganizationURL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_OrganizationURL(struct zxmd_md_OrganizationURL_s* x);
char* zxmd_ENC_SO_md_OrganizationURL(struct zxmd_md_OrganizationURL_s* x, char* p);
char* zxmd_ENC_WO_md_OrganizationURL(struct zxmd_md_OrganizationURL_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_OrganizationURL(struct zx_ctx* c, struct zxmd_md_OrganizationURL_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_OrganizationURL(struct zx_ctx* c, struct zxmd_md_OrganizationURL_s* x);

struct zxmd_md_OrganizationURL_s {
  ZX_ELEM_EXT
  zxmd_md_OrganizationURL_EXT
  struct zx_str_s* lang;	/* {1,1} attribute xs:string */
};

struct zx_str_s* zxmd_md_OrganizationURL_GET_lang(struct zxmd_md_OrganizationURL_s* x);
void zxmd_md_OrganizationURL_PUT_lang(struct zxmd_md_OrganizationURL_s* x, struct zx_str_s* y);

/* -------------------------- md_PDPDescriptor -------------------------- */
/* refby( zxmd_md_EntityDescriptor_s ) */
#ifndef zxmd_md_PDPDescriptor_EXT
#define zxmd_md_PDPDescriptor_EXT
#endif

struct zxmd_md_PDPDescriptor_s* zxmd_DEC_md_PDPDescriptor(struct zx_ctx* c);
struct zxmd_md_PDPDescriptor_s* zxmd_NEW_md_PDPDescriptor(struct zx_ctx* c);
struct zxmd_md_PDPDescriptor_s* zxmd_DEEP_CLONE_md_PDPDescriptor(struct zx_ctx* c, struct zxmd_md_PDPDescriptor_s* x, int dup_strs);
void zxmd_DUP_STRS_md_PDPDescriptor(struct zx_ctx* c, struct zxmd_md_PDPDescriptor_s* x);
void zxmd_FREE_md_PDPDescriptor(struct zx_ctx* c, struct zxmd_md_PDPDescriptor_s* x, int free_strs);
int zxmd_WALK_SO_md_PDPDescriptor(struct zx_ctx* c, struct zxmd_md_PDPDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_PDPDescriptor(struct zx_ctx* c, struct zxmd_md_PDPDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_PDPDescriptor(struct zxmd_md_PDPDescriptor_s* x);
char* zxmd_ENC_SO_md_PDPDescriptor(struct zxmd_md_PDPDescriptor_s* x, char* p);
char* zxmd_ENC_WO_md_PDPDescriptor(struct zxmd_md_PDPDescriptor_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_PDPDescriptor(struct zx_ctx* c, struct zxmd_md_PDPDescriptor_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_PDPDescriptor(struct zx_ctx* c, struct zxmd_md_PDPDescriptor_s* x);

struct zxmd_md_PDPDescriptor_s {
  ZX_ELEM_EXT
  zxmd_md_PDPDescriptor_EXT
  struct zxmd_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zxmd_md_Extensions_s* Extensions;	/* {0,1}  */
  struct zxmd_md_KeyDescriptor_s* KeyDescriptor;	/* {0,-1} nada */
  struct zxmd_md_Organization_s* Organization;	/* {0,1} nada */
  struct zxmd_md_ContactPerson_s* ContactPerson;	/* {0,-1} nada */
  struct zx_str_s* ID;	/* {0,1} attribute xs:ID */
  struct zx_str_s* validUntil;	/* {0,1} attribute dateTime */
  struct zx_str_s* cacheDuration;	/* {0,1} attribute duration */
  struct zx_str_s* protocolSupportEnumeration;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* errorURL;	/* {0,1} attribute xs:anyURI */
  struct zxmd_md_AuthzService_s* AuthzService;	/* {1,-1} nada */
  struct zxmd_md_AssertionIDRequestService_s* AssertionIDRequestService;	/* {0,-1} nada */
  struct zx_elem_s* NameIDFormat;	/* {0,-1} xs:anyURI */
};

struct zx_str_s* zxmd_md_PDPDescriptor_GET_ID(struct zxmd_md_PDPDescriptor_s* x);
struct zx_str_s* zxmd_md_PDPDescriptor_GET_validUntil(struct zxmd_md_PDPDescriptor_s* x);
struct zx_str_s* zxmd_md_PDPDescriptor_GET_cacheDuration(struct zxmd_md_PDPDescriptor_s* x);
struct zx_str_s* zxmd_md_PDPDescriptor_GET_protocolSupportEnumeration(struct zxmd_md_PDPDescriptor_s* x);
struct zx_str_s* zxmd_md_PDPDescriptor_GET_errorURL(struct zxmd_md_PDPDescriptor_s* x);
struct zxmd_ds_Signature_s* zxmd_md_PDPDescriptor_GET_Signature(struct zxmd_md_PDPDescriptor_s* x, int n);
struct zxmd_md_Extensions_s* zxmd_md_PDPDescriptor_GET_Extensions(struct zxmd_md_PDPDescriptor_s* x, int n);
struct zxmd_md_KeyDescriptor_s* zxmd_md_PDPDescriptor_GET_KeyDescriptor(struct zxmd_md_PDPDescriptor_s* x, int n);
struct zxmd_md_Organization_s* zxmd_md_PDPDescriptor_GET_Organization(struct zxmd_md_PDPDescriptor_s* x, int n);
struct zxmd_md_ContactPerson_s* zxmd_md_PDPDescriptor_GET_ContactPerson(struct zxmd_md_PDPDescriptor_s* x, int n);
struct zxmd_md_AuthzService_s* zxmd_md_PDPDescriptor_GET_AuthzService(struct zxmd_md_PDPDescriptor_s* x, int n);
struct zxmd_md_AssertionIDRequestService_s* zxmd_md_PDPDescriptor_GET_AssertionIDRequestService(struct zxmd_md_PDPDescriptor_s* x, int n);
struct zx_elem_s* zxmd_md_PDPDescriptor_GET_NameIDFormat(struct zxmd_md_PDPDescriptor_s* x, int n);
int zxmd_md_PDPDescriptor_NUM_Signature(struct zxmd_md_PDPDescriptor_s* x);
int zxmd_md_PDPDescriptor_NUM_Extensions(struct zxmd_md_PDPDescriptor_s* x);
int zxmd_md_PDPDescriptor_NUM_KeyDescriptor(struct zxmd_md_PDPDescriptor_s* x);
int zxmd_md_PDPDescriptor_NUM_Organization(struct zxmd_md_PDPDescriptor_s* x);
int zxmd_md_PDPDescriptor_NUM_ContactPerson(struct zxmd_md_PDPDescriptor_s* x);
int zxmd_md_PDPDescriptor_NUM_AuthzService(struct zxmd_md_PDPDescriptor_s* x);
int zxmd_md_PDPDescriptor_NUM_AssertionIDRequestService(struct zxmd_md_PDPDescriptor_s* x);
int zxmd_md_PDPDescriptor_NUM_NameIDFormat(struct zxmd_md_PDPDescriptor_s* x);
struct zxmd_ds_Signature_s* zxmd_md_PDPDescriptor_POP_Signature(struct zxmd_md_PDPDescriptor_s* x);
struct zxmd_md_Extensions_s* zxmd_md_PDPDescriptor_POP_Extensions(struct zxmd_md_PDPDescriptor_s* x);
struct zxmd_md_KeyDescriptor_s* zxmd_md_PDPDescriptor_POP_KeyDescriptor(struct zxmd_md_PDPDescriptor_s* x);
struct zxmd_md_Organization_s* zxmd_md_PDPDescriptor_POP_Organization(struct zxmd_md_PDPDescriptor_s* x);
struct zxmd_md_ContactPerson_s* zxmd_md_PDPDescriptor_POP_ContactPerson(struct zxmd_md_PDPDescriptor_s* x);
struct zxmd_md_AuthzService_s* zxmd_md_PDPDescriptor_POP_AuthzService(struct zxmd_md_PDPDescriptor_s* x);
struct zxmd_md_AssertionIDRequestService_s* zxmd_md_PDPDescriptor_POP_AssertionIDRequestService(struct zxmd_md_PDPDescriptor_s* x);
struct zx_elem_s* zxmd_md_PDPDescriptor_POP_NameIDFormat(struct zxmd_md_PDPDescriptor_s* x);
void zxmd_md_PDPDescriptor_PUSH_Signature(struct zxmd_md_PDPDescriptor_s* x, struct zxmd_ds_Signature_s* y);
void zxmd_md_PDPDescriptor_PUSH_Extensions(struct zxmd_md_PDPDescriptor_s* x, struct zxmd_md_Extensions_s* y);
void zxmd_md_PDPDescriptor_PUSH_KeyDescriptor(struct zxmd_md_PDPDescriptor_s* x, struct zxmd_md_KeyDescriptor_s* y);
void zxmd_md_PDPDescriptor_PUSH_Organization(struct zxmd_md_PDPDescriptor_s* x, struct zxmd_md_Organization_s* y);
void zxmd_md_PDPDescriptor_PUSH_ContactPerson(struct zxmd_md_PDPDescriptor_s* x, struct zxmd_md_ContactPerson_s* y);
void zxmd_md_PDPDescriptor_PUSH_AuthzService(struct zxmd_md_PDPDescriptor_s* x, struct zxmd_md_AuthzService_s* y);
void zxmd_md_PDPDescriptor_PUSH_AssertionIDRequestService(struct zxmd_md_PDPDescriptor_s* x, struct zxmd_md_AssertionIDRequestService_s* y);
void zxmd_md_PDPDescriptor_PUSH_NameIDFormat(struct zxmd_md_PDPDescriptor_s* x, struct zx_elem_s* y);
void zxmd_md_PDPDescriptor_PUT_ID(struct zxmd_md_PDPDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_PDPDescriptor_PUT_validUntil(struct zxmd_md_PDPDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_PDPDescriptor_PUT_cacheDuration(struct zxmd_md_PDPDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_PDPDescriptor_PUT_protocolSupportEnumeration(struct zxmd_md_PDPDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_PDPDescriptor_PUT_errorURL(struct zxmd_md_PDPDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_PDPDescriptor_PUT_Signature(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_ds_Signature_s* y);
void zxmd_md_PDPDescriptor_PUT_Extensions(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_md_Extensions_s* y);
void zxmd_md_PDPDescriptor_PUT_KeyDescriptor(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* y);
void zxmd_md_PDPDescriptor_PUT_Organization(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_md_Organization_s* y);
void zxmd_md_PDPDescriptor_PUT_ContactPerson(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* y);
void zxmd_md_PDPDescriptor_PUT_AuthzService(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_md_AuthzService_s* y);
void zxmd_md_PDPDescriptor_PUT_AssertionIDRequestService(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_md_AssertionIDRequestService_s* y);
void zxmd_md_PDPDescriptor_PUT_NameIDFormat(struct zxmd_md_PDPDescriptor_s* x, int n, struct zx_elem_s* y);
void zxmd_md_PDPDescriptor_ADD_Signature(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_ds_Signature_s* z);
void zxmd_md_PDPDescriptor_ADD_Extensions(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_md_Extensions_s* z);
void zxmd_md_PDPDescriptor_ADD_KeyDescriptor(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* z);
void zxmd_md_PDPDescriptor_ADD_Organization(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_md_Organization_s* z);
void zxmd_md_PDPDescriptor_ADD_ContactPerson(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* z);
void zxmd_md_PDPDescriptor_ADD_AuthzService(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_md_AuthzService_s* z);
void zxmd_md_PDPDescriptor_ADD_AssertionIDRequestService(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_md_AssertionIDRequestService_s* z);
void zxmd_md_PDPDescriptor_ADD_NameIDFormat(struct zxmd_md_PDPDescriptor_s* x, int n, struct zx_elem_s* z);
void zxmd_md_PDPDescriptor_DEL_Signature(struct zxmd_md_PDPDescriptor_s* x, int n);
void zxmd_md_PDPDescriptor_DEL_Extensions(struct zxmd_md_PDPDescriptor_s* x, int n);
void zxmd_md_PDPDescriptor_DEL_KeyDescriptor(struct zxmd_md_PDPDescriptor_s* x, int n);
void zxmd_md_PDPDescriptor_DEL_Organization(struct zxmd_md_PDPDescriptor_s* x, int n);
void zxmd_md_PDPDescriptor_DEL_ContactPerson(struct zxmd_md_PDPDescriptor_s* x, int n);
void zxmd_md_PDPDescriptor_DEL_AuthzService(struct zxmd_md_PDPDescriptor_s* x, int n);
void zxmd_md_PDPDescriptor_DEL_AssertionIDRequestService(struct zxmd_md_PDPDescriptor_s* x, int n);
void zxmd_md_PDPDescriptor_DEL_NameIDFormat(struct zxmd_md_PDPDescriptor_s* x, int n);
void zxmd_md_PDPDescriptor_REV_Signature(struct zxmd_md_PDPDescriptor_s* x);
void zxmd_md_PDPDescriptor_REV_Extensions(struct zxmd_md_PDPDescriptor_s* x);
void zxmd_md_PDPDescriptor_REV_KeyDescriptor(struct zxmd_md_PDPDescriptor_s* x);
void zxmd_md_PDPDescriptor_REV_Organization(struct zxmd_md_PDPDescriptor_s* x);
void zxmd_md_PDPDescriptor_REV_ContactPerson(struct zxmd_md_PDPDescriptor_s* x);
void zxmd_md_PDPDescriptor_REV_AuthzService(struct zxmd_md_PDPDescriptor_s* x);
void zxmd_md_PDPDescriptor_REV_AssertionIDRequestService(struct zxmd_md_PDPDescriptor_s* x);
void zxmd_md_PDPDescriptor_REV_NameIDFormat(struct zxmd_md_PDPDescriptor_s* x);

/* -------------------------- md_RequestedAttribute -------------------------- */
/* refby( zxmd_md_AttributeConsumingService_s ) */
#ifndef zxmd_md_RequestedAttribute_EXT
#define zxmd_md_RequestedAttribute_EXT
#endif

struct zxmd_md_RequestedAttribute_s* zxmd_DEC_md_RequestedAttribute(struct zx_ctx* c);
struct zxmd_md_RequestedAttribute_s* zxmd_NEW_md_RequestedAttribute(struct zx_ctx* c);
struct zxmd_md_RequestedAttribute_s* zxmd_DEEP_CLONE_md_RequestedAttribute(struct zx_ctx* c, struct zxmd_md_RequestedAttribute_s* x, int dup_strs);
void zxmd_DUP_STRS_md_RequestedAttribute(struct zx_ctx* c, struct zxmd_md_RequestedAttribute_s* x);
void zxmd_FREE_md_RequestedAttribute(struct zx_ctx* c, struct zxmd_md_RequestedAttribute_s* x, int free_strs);
int zxmd_WALK_SO_md_RequestedAttribute(struct zx_ctx* c, struct zxmd_md_RequestedAttribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_RequestedAttribute(struct zx_ctx* c, struct zxmd_md_RequestedAttribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_RequestedAttribute(struct zxmd_md_RequestedAttribute_s* x);
char* zxmd_ENC_SO_md_RequestedAttribute(struct zxmd_md_RequestedAttribute_s* x, char* p);
char* zxmd_ENC_WO_md_RequestedAttribute(struct zxmd_md_RequestedAttribute_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_RequestedAttribute(struct zx_ctx* c, struct zxmd_md_RequestedAttribute_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_RequestedAttribute(struct zx_ctx* c, struct zxmd_md_RequestedAttribute_s* x);

struct zxmd_md_RequestedAttribute_s {
  ZX_ELEM_EXT
  zxmd_md_RequestedAttribute_EXT
  struct zx_elem_s* AttributeValue;	/* {0,-1} xs:anyType */
  struct zx_str_s* Name;	/* {1,1} attribute xs:string */
  struct zx_str_s* NameFormat;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* FriendlyName;	/* {0,1} attribute xs:string */
  struct zx_str_s* isRequired;	/* {0,1} attribute xs:boolean */
};

struct zx_str_s* zxmd_md_RequestedAttribute_GET_Name(struct zxmd_md_RequestedAttribute_s* x);
struct zx_str_s* zxmd_md_RequestedAttribute_GET_NameFormat(struct zxmd_md_RequestedAttribute_s* x);
struct zx_str_s* zxmd_md_RequestedAttribute_GET_FriendlyName(struct zxmd_md_RequestedAttribute_s* x);
struct zx_str_s* zxmd_md_RequestedAttribute_GET_isRequired(struct zxmd_md_RequestedAttribute_s* x);
struct zx_elem_s* zxmd_md_RequestedAttribute_GET_AttributeValue(struct zxmd_md_RequestedAttribute_s* x, int n);
int zxmd_md_RequestedAttribute_NUM_AttributeValue(struct zxmd_md_RequestedAttribute_s* x);
struct zx_elem_s* zxmd_md_RequestedAttribute_POP_AttributeValue(struct zxmd_md_RequestedAttribute_s* x);
void zxmd_md_RequestedAttribute_PUSH_AttributeValue(struct zxmd_md_RequestedAttribute_s* x, struct zx_elem_s* y);
void zxmd_md_RequestedAttribute_PUT_Name(struct zxmd_md_RequestedAttribute_s* x, struct zx_str_s* y);
void zxmd_md_RequestedAttribute_PUT_NameFormat(struct zxmd_md_RequestedAttribute_s* x, struct zx_str_s* y);
void zxmd_md_RequestedAttribute_PUT_FriendlyName(struct zxmd_md_RequestedAttribute_s* x, struct zx_str_s* y);
void zxmd_md_RequestedAttribute_PUT_isRequired(struct zxmd_md_RequestedAttribute_s* x, struct zx_str_s* y);
void zxmd_md_RequestedAttribute_PUT_AttributeValue(struct zxmd_md_RequestedAttribute_s* x, int n, struct zx_elem_s* y);
void zxmd_md_RequestedAttribute_ADD_AttributeValue(struct zxmd_md_RequestedAttribute_s* x, int n, struct zx_elem_s* z);
void zxmd_md_RequestedAttribute_DEL_AttributeValue(struct zxmd_md_RequestedAttribute_s* x, int n);
void zxmd_md_RequestedAttribute_REV_AttributeValue(struct zxmd_md_RequestedAttribute_s* x);

/* -------------------------- md_RoleDescriptor -------------------------- */
/* refby( zxmd_md_EntityDescriptor_s ) */
#ifndef zxmd_md_RoleDescriptor_EXT
#define zxmd_md_RoleDescriptor_EXT
#endif

struct zxmd_md_RoleDescriptor_s* zxmd_DEC_md_RoleDescriptor(struct zx_ctx* c);
struct zxmd_md_RoleDescriptor_s* zxmd_NEW_md_RoleDescriptor(struct zx_ctx* c);
struct zxmd_md_RoleDescriptor_s* zxmd_DEEP_CLONE_md_RoleDescriptor(struct zx_ctx* c, struct zxmd_md_RoleDescriptor_s* x, int dup_strs);
void zxmd_DUP_STRS_md_RoleDescriptor(struct zx_ctx* c, struct zxmd_md_RoleDescriptor_s* x);
void zxmd_FREE_md_RoleDescriptor(struct zx_ctx* c, struct zxmd_md_RoleDescriptor_s* x, int free_strs);
int zxmd_WALK_SO_md_RoleDescriptor(struct zx_ctx* c, struct zxmd_md_RoleDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_RoleDescriptor(struct zx_ctx* c, struct zxmd_md_RoleDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_RoleDescriptor(struct zxmd_md_RoleDescriptor_s* x);
char* zxmd_ENC_SO_md_RoleDescriptor(struct zxmd_md_RoleDescriptor_s* x, char* p);
char* zxmd_ENC_WO_md_RoleDescriptor(struct zxmd_md_RoleDescriptor_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_RoleDescriptor(struct zx_ctx* c, struct zxmd_md_RoleDescriptor_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_RoleDescriptor(struct zx_ctx* c, struct zxmd_md_RoleDescriptor_s* x);

struct zxmd_md_RoleDescriptor_s {
  ZX_ELEM_EXT
  zxmd_md_RoleDescriptor_EXT
  struct zxmd_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zxmd_md_Extensions_s* Extensions;	/* {0,1}  */
  struct zxmd_md_KeyDescriptor_s* KeyDescriptor;	/* {0,-1} nada */
  struct zxmd_md_Organization_s* Organization;	/* {0,1} nada */
  struct zxmd_md_ContactPerson_s* ContactPerson;	/* {0,-1} nada */
  struct zx_str_s* ID;	/* {0,1} attribute xs:ID */
  struct zx_str_s* validUntil;	/* {0,1} attribute dateTime */
  struct zx_str_s* cacheDuration;	/* {0,1} attribute duration */
  struct zx_str_s* protocolSupportEnumeration;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* errorURL;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_md_RoleDescriptor_GET_ID(struct zxmd_md_RoleDescriptor_s* x);
struct zx_str_s* zxmd_md_RoleDescriptor_GET_validUntil(struct zxmd_md_RoleDescriptor_s* x);
struct zx_str_s* zxmd_md_RoleDescriptor_GET_cacheDuration(struct zxmd_md_RoleDescriptor_s* x);
struct zx_str_s* zxmd_md_RoleDescriptor_GET_protocolSupportEnumeration(struct zxmd_md_RoleDescriptor_s* x);
struct zx_str_s* zxmd_md_RoleDescriptor_GET_errorURL(struct zxmd_md_RoleDescriptor_s* x);
struct zxmd_ds_Signature_s* zxmd_md_RoleDescriptor_GET_Signature(struct zxmd_md_RoleDescriptor_s* x, int n);
struct zxmd_md_Extensions_s* zxmd_md_RoleDescriptor_GET_Extensions(struct zxmd_md_RoleDescriptor_s* x, int n);
struct zxmd_md_KeyDescriptor_s* zxmd_md_RoleDescriptor_GET_KeyDescriptor(struct zxmd_md_RoleDescriptor_s* x, int n);
struct zxmd_md_Organization_s* zxmd_md_RoleDescriptor_GET_Organization(struct zxmd_md_RoleDescriptor_s* x, int n);
struct zxmd_md_ContactPerson_s* zxmd_md_RoleDescriptor_GET_ContactPerson(struct zxmd_md_RoleDescriptor_s* x, int n);
int zxmd_md_RoleDescriptor_NUM_Signature(struct zxmd_md_RoleDescriptor_s* x);
int zxmd_md_RoleDescriptor_NUM_Extensions(struct zxmd_md_RoleDescriptor_s* x);
int zxmd_md_RoleDescriptor_NUM_KeyDescriptor(struct zxmd_md_RoleDescriptor_s* x);
int zxmd_md_RoleDescriptor_NUM_Organization(struct zxmd_md_RoleDescriptor_s* x);
int zxmd_md_RoleDescriptor_NUM_ContactPerson(struct zxmd_md_RoleDescriptor_s* x);
struct zxmd_ds_Signature_s* zxmd_md_RoleDescriptor_POP_Signature(struct zxmd_md_RoleDescriptor_s* x);
struct zxmd_md_Extensions_s* zxmd_md_RoleDescriptor_POP_Extensions(struct zxmd_md_RoleDescriptor_s* x);
struct zxmd_md_KeyDescriptor_s* zxmd_md_RoleDescriptor_POP_KeyDescriptor(struct zxmd_md_RoleDescriptor_s* x);
struct zxmd_md_Organization_s* zxmd_md_RoleDescriptor_POP_Organization(struct zxmd_md_RoleDescriptor_s* x);
struct zxmd_md_ContactPerson_s* zxmd_md_RoleDescriptor_POP_ContactPerson(struct zxmd_md_RoleDescriptor_s* x);
void zxmd_md_RoleDescriptor_PUSH_Signature(struct zxmd_md_RoleDescriptor_s* x, struct zxmd_ds_Signature_s* y);
void zxmd_md_RoleDescriptor_PUSH_Extensions(struct zxmd_md_RoleDescriptor_s* x, struct zxmd_md_Extensions_s* y);
void zxmd_md_RoleDescriptor_PUSH_KeyDescriptor(struct zxmd_md_RoleDescriptor_s* x, struct zxmd_md_KeyDescriptor_s* y);
void zxmd_md_RoleDescriptor_PUSH_Organization(struct zxmd_md_RoleDescriptor_s* x, struct zxmd_md_Organization_s* y);
void zxmd_md_RoleDescriptor_PUSH_ContactPerson(struct zxmd_md_RoleDescriptor_s* x, struct zxmd_md_ContactPerson_s* y);
void zxmd_md_RoleDescriptor_PUT_ID(struct zxmd_md_RoleDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_RoleDescriptor_PUT_validUntil(struct zxmd_md_RoleDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_RoleDescriptor_PUT_cacheDuration(struct zxmd_md_RoleDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_RoleDescriptor_PUT_protocolSupportEnumeration(struct zxmd_md_RoleDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_RoleDescriptor_PUT_errorURL(struct zxmd_md_RoleDescriptor_s* x, struct zx_str_s* y);
void zxmd_md_RoleDescriptor_PUT_Signature(struct zxmd_md_RoleDescriptor_s* x, int n, struct zxmd_ds_Signature_s* y);
void zxmd_md_RoleDescriptor_PUT_Extensions(struct zxmd_md_RoleDescriptor_s* x, int n, struct zxmd_md_Extensions_s* y);
void zxmd_md_RoleDescriptor_PUT_KeyDescriptor(struct zxmd_md_RoleDescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* y);
void zxmd_md_RoleDescriptor_PUT_Organization(struct zxmd_md_RoleDescriptor_s* x, int n, struct zxmd_md_Organization_s* y);
void zxmd_md_RoleDescriptor_PUT_ContactPerson(struct zxmd_md_RoleDescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* y);
void zxmd_md_RoleDescriptor_ADD_Signature(struct zxmd_md_RoleDescriptor_s* x, int n, struct zxmd_ds_Signature_s* z);
void zxmd_md_RoleDescriptor_ADD_Extensions(struct zxmd_md_RoleDescriptor_s* x, int n, struct zxmd_md_Extensions_s* z);
void zxmd_md_RoleDescriptor_ADD_KeyDescriptor(struct zxmd_md_RoleDescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* z);
void zxmd_md_RoleDescriptor_ADD_Organization(struct zxmd_md_RoleDescriptor_s* x, int n, struct zxmd_md_Organization_s* z);
void zxmd_md_RoleDescriptor_ADD_ContactPerson(struct zxmd_md_RoleDescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* z);
void zxmd_md_RoleDescriptor_DEL_Signature(struct zxmd_md_RoleDescriptor_s* x, int n);
void zxmd_md_RoleDescriptor_DEL_Extensions(struct zxmd_md_RoleDescriptor_s* x, int n);
void zxmd_md_RoleDescriptor_DEL_KeyDescriptor(struct zxmd_md_RoleDescriptor_s* x, int n);
void zxmd_md_RoleDescriptor_DEL_Organization(struct zxmd_md_RoleDescriptor_s* x, int n);
void zxmd_md_RoleDescriptor_DEL_ContactPerson(struct zxmd_md_RoleDescriptor_s* x, int n);
void zxmd_md_RoleDescriptor_REV_Signature(struct zxmd_md_RoleDescriptor_s* x);
void zxmd_md_RoleDescriptor_REV_Extensions(struct zxmd_md_RoleDescriptor_s* x);
void zxmd_md_RoleDescriptor_REV_KeyDescriptor(struct zxmd_md_RoleDescriptor_s* x);
void zxmd_md_RoleDescriptor_REV_Organization(struct zxmd_md_RoleDescriptor_s* x);
void zxmd_md_RoleDescriptor_REV_ContactPerson(struct zxmd_md_RoleDescriptor_s* x);

/* -------------------------- md_SPSSODescriptor -------------------------- */
/* refby( zxmd_md_EntityDescriptor_s ) */
#ifndef zxmd_md_SPSSODescriptor_EXT
#define zxmd_md_SPSSODescriptor_EXT
#endif

struct zxmd_md_SPSSODescriptor_s* zxmd_DEC_md_SPSSODescriptor(struct zx_ctx* c);
struct zxmd_md_SPSSODescriptor_s* zxmd_NEW_md_SPSSODescriptor(struct zx_ctx* c);
struct zxmd_md_SPSSODescriptor_s* zxmd_DEEP_CLONE_md_SPSSODescriptor(struct zx_ctx* c, struct zxmd_md_SPSSODescriptor_s* x, int dup_strs);
void zxmd_DUP_STRS_md_SPSSODescriptor(struct zx_ctx* c, struct zxmd_md_SPSSODescriptor_s* x);
void zxmd_FREE_md_SPSSODescriptor(struct zx_ctx* c, struct zxmd_md_SPSSODescriptor_s* x, int free_strs);
int zxmd_WALK_SO_md_SPSSODescriptor(struct zx_ctx* c, struct zxmd_md_SPSSODescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_SPSSODescriptor(struct zx_ctx* c, struct zxmd_md_SPSSODescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_SPSSODescriptor(struct zxmd_md_SPSSODescriptor_s* x);
char* zxmd_ENC_SO_md_SPSSODescriptor(struct zxmd_md_SPSSODescriptor_s* x, char* p);
char* zxmd_ENC_WO_md_SPSSODescriptor(struct zxmd_md_SPSSODescriptor_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_SPSSODescriptor(struct zx_ctx* c, struct zxmd_md_SPSSODescriptor_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_SPSSODescriptor(struct zx_ctx* c, struct zxmd_md_SPSSODescriptor_s* x);

struct zxmd_md_SPSSODescriptor_s {
  ZX_ELEM_EXT
  zxmd_md_SPSSODescriptor_EXT
  struct zxmd_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zxmd_md_Extensions_s* Extensions;	/* {0,1}  */
  struct zxmd_md_KeyDescriptor_s* KeyDescriptor;	/* {0,-1} nada */
  struct zxmd_md_Organization_s* Organization;	/* {0,1} nada */
  struct zxmd_md_ContactPerson_s* ContactPerson;	/* {0,-1} nada */
  struct zx_str_s* ID;	/* {0,1} attribute xs:ID */
  struct zx_str_s* validUntil;	/* {0,1} attribute dateTime */
  struct zx_str_s* cacheDuration;	/* {0,1} attribute duration */
  struct zx_str_s* protocolSupportEnumeration;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* errorURL;	/* {0,1} attribute xs:anyURI */
  struct zxmd_md_ArtifactResolutionService_s* ArtifactResolutionService;	/* {0,-1} nada */
  struct zxmd_md_SingleLogoutService_s* SingleLogoutService;	/* {0,-1} nada */
  struct zxmd_md_ManageNameIDService_s* ManageNameIDService;	/* {0,-1} nada */
  struct zx_elem_s* NameIDFormat;	/* {0,-1} xs:anyURI */
  struct zxmd_md_AssertionConsumerService_s* AssertionConsumerService;	/* {1,-1} nada */
  struct zxmd_md_AttributeConsumingService_s* AttributeConsumingService;	/* {0,-1} nada */
  struct zx_str_s* AuthnRequestsSigned;	/* {0,1} attribute xs:boolean */
  struct zx_str_s* WantAssertionsSigned;	/* {0,1} attribute xs:boolean */
};

struct zx_str_s* zxmd_md_SPSSODescriptor_GET_ID(struct zxmd_md_SPSSODescriptor_s* x);
struct zx_str_s* zxmd_md_SPSSODescriptor_GET_validUntil(struct zxmd_md_SPSSODescriptor_s* x);
struct zx_str_s* zxmd_md_SPSSODescriptor_GET_cacheDuration(struct zxmd_md_SPSSODescriptor_s* x);
struct zx_str_s* zxmd_md_SPSSODescriptor_GET_protocolSupportEnumeration(struct zxmd_md_SPSSODescriptor_s* x);
struct zx_str_s* zxmd_md_SPSSODescriptor_GET_errorURL(struct zxmd_md_SPSSODescriptor_s* x);
struct zx_str_s* zxmd_md_SPSSODescriptor_GET_AuthnRequestsSigned(struct zxmd_md_SPSSODescriptor_s* x);
struct zx_str_s* zxmd_md_SPSSODescriptor_GET_WantAssertionsSigned(struct zxmd_md_SPSSODescriptor_s* x);
struct zxmd_ds_Signature_s* zxmd_md_SPSSODescriptor_GET_Signature(struct zxmd_md_SPSSODescriptor_s* x, int n);
struct zxmd_md_Extensions_s* zxmd_md_SPSSODescriptor_GET_Extensions(struct zxmd_md_SPSSODescriptor_s* x, int n);
struct zxmd_md_KeyDescriptor_s* zxmd_md_SPSSODescriptor_GET_KeyDescriptor(struct zxmd_md_SPSSODescriptor_s* x, int n);
struct zxmd_md_Organization_s* zxmd_md_SPSSODescriptor_GET_Organization(struct zxmd_md_SPSSODescriptor_s* x, int n);
struct zxmd_md_ContactPerson_s* zxmd_md_SPSSODescriptor_GET_ContactPerson(struct zxmd_md_SPSSODescriptor_s* x, int n);
struct zxmd_md_ArtifactResolutionService_s* zxmd_md_SPSSODescriptor_GET_ArtifactResolutionService(struct zxmd_md_SPSSODescriptor_s* x, int n);
struct zxmd_md_SingleLogoutService_s* zxmd_md_SPSSODescriptor_GET_SingleLogoutService(struct zxmd_md_SPSSODescriptor_s* x, int n);
struct zxmd_md_ManageNameIDService_s* zxmd_md_SPSSODescriptor_GET_ManageNameIDService(struct zxmd_md_SPSSODescriptor_s* x, int n);
struct zx_elem_s* zxmd_md_SPSSODescriptor_GET_NameIDFormat(struct zxmd_md_SPSSODescriptor_s* x, int n);
struct zxmd_md_AssertionConsumerService_s* zxmd_md_SPSSODescriptor_GET_AssertionConsumerService(struct zxmd_md_SPSSODescriptor_s* x, int n);
struct zxmd_md_AttributeConsumingService_s* zxmd_md_SPSSODescriptor_GET_AttributeConsumingService(struct zxmd_md_SPSSODescriptor_s* x, int n);
int zxmd_md_SPSSODescriptor_NUM_Signature(struct zxmd_md_SPSSODescriptor_s* x);
int zxmd_md_SPSSODescriptor_NUM_Extensions(struct zxmd_md_SPSSODescriptor_s* x);
int zxmd_md_SPSSODescriptor_NUM_KeyDescriptor(struct zxmd_md_SPSSODescriptor_s* x);
int zxmd_md_SPSSODescriptor_NUM_Organization(struct zxmd_md_SPSSODescriptor_s* x);
int zxmd_md_SPSSODescriptor_NUM_ContactPerson(struct zxmd_md_SPSSODescriptor_s* x);
int zxmd_md_SPSSODescriptor_NUM_ArtifactResolutionService(struct zxmd_md_SPSSODescriptor_s* x);
int zxmd_md_SPSSODescriptor_NUM_SingleLogoutService(struct zxmd_md_SPSSODescriptor_s* x);
int zxmd_md_SPSSODescriptor_NUM_ManageNameIDService(struct zxmd_md_SPSSODescriptor_s* x);
int zxmd_md_SPSSODescriptor_NUM_NameIDFormat(struct zxmd_md_SPSSODescriptor_s* x);
int zxmd_md_SPSSODescriptor_NUM_AssertionConsumerService(struct zxmd_md_SPSSODescriptor_s* x);
int zxmd_md_SPSSODescriptor_NUM_AttributeConsumingService(struct zxmd_md_SPSSODescriptor_s* x);
struct zxmd_ds_Signature_s* zxmd_md_SPSSODescriptor_POP_Signature(struct zxmd_md_SPSSODescriptor_s* x);
struct zxmd_md_Extensions_s* zxmd_md_SPSSODescriptor_POP_Extensions(struct zxmd_md_SPSSODescriptor_s* x);
struct zxmd_md_KeyDescriptor_s* zxmd_md_SPSSODescriptor_POP_KeyDescriptor(struct zxmd_md_SPSSODescriptor_s* x);
struct zxmd_md_Organization_s* zxmd_md_SPSSODescriptor_POP_Organization(struct zxmd_md_SPSSODescriptor_s* x);
struct zxmd_md_ContactPerson_s* zxmd_md_SPSSODescriptor_POP_ContactPerson(struct zxmd_md_SPSSODescriptor_s* x);
struct zxmd_md_ArtifactResolutionService_s* zxmd_md_SPSSODescriptor_POP_ArtifactResolutionService(struct zxmd_md_SPSSODescriptor_s* x);
struct zxmd_md_SingleLogoutService_s* zxmd_md_SPSSODescriptor_POP_SingleLogoutService(struct zxmd_md_SPSSODescriptor_s* x);
struct zxmd_md_ManageNameIDService_s* zxmd_md_SPSSODescriptor_POP_ManageNameIDService(struct zxmd_md_SPSSODescriptor_s* x);
struct zx_elem_s* zxmd_md_SPSSODescriptor_POP_NameIDFormat(struct zxmd_md_SPSSODescriptor_s* x);
struct zxmd_md_AssertionConsumerService_s* zxmd_md_SPSSODescriptor_POP_AssertionConsumerService(struct zxmd_md_SPSSODescriptor_s* x);
struct zxmd_md_AttributeConsumingService_s* zxmd_md_SPSSODescriptor_POP_AttributeConsumingService(struct zxmd_md_SPSSODescriptor_s* x);
void zxmd_md_SPSSODescriptor_PUSH_Signature(struct zxmd_md_SPSSODescriptor_s* x, struct zxmd_ds_Signature_s* y);
void zxmd_md_SPSSODescriptor_PUSH_Extensions(struct zxmd_md_SPSSODescriptor_s* x, struct zxmd_md_Extensions_s* y);
void zxmd_md_SPSSODescriptor_PUSH_KeyDescriptor(struct zxmd_md_SPSSODescriptor_s* x, struct zxmd_md_KeyDescriptor_s* y);
void zxmd_md_SPSSODescriptor_PUSH_Organization(struct zxmd_md_SPSSODescriptor_s* x, struct zxmd_md_Organization_s* y);
void zxmd_md_SPSSODescriptor_PUSH_ContactPerson(struct zxmd_md_SPSSODescriptor_s* x, struct zxmd_md_ContactPerson_s* y);
void zxmd_md_SPSSODescriptor_PUSH_ArtifactResolutionService(struct zxmd_md_SPSSODescriptor_s* x, struct zxmd_md_ArtifactResolutionService_s* y);
void zxmd_md_SPSSODescriptor_PUSH_SingleLogoutService(struct zxmd_md_SPSSODescriptor_s* x, struct zxmd_md_SingleLogoutService_s* y);
void zxmd_md_SPSSODescriptor_PUSH_ManageNameIDService(struct zxmd_md_SPSSODescriptor_s* x, struct zxmd_md_ManageNameIDService_s* y);
void zxmd_md_SPSSODescriptor_PUSH_NameIDFormat(struct zxmd_md_SPSSODescriptor_s* x, struct zx_elem_s* y);
void zxmd_md_SPSSODescriptor_PUSH_AssertionConsumerService(struct zxmd_md_SPSSODescriptor_s* x, struct zxmd_md_AssertionConsumerService_s* y);
void zxmd_md_SPSSODescriptor_PUSH_AttributeConsumingService(struct zxmd_md_SPSSODescriptor_s* x, struct zxmd_md_AttributeConsumingService_s* y);
void zxmd_md_SPSSODescriptor_PUT_ID(struct zxmd_md_SPSSODescriptor_s* x, struct zx_str_s* y);
void zxmd_md_SPSSODescriptor_PUT_validUntil(struct zxmd_md_SPSSODescriptor_s* x, struct zx_str_s* y);
void zxmd_md_SPSSODescriptor_PUT_cacheDuration(struct zxmd_md_SPSSODescriptor_s* x, struct zx_str_s* y);
void zxmd_md_SPSSODescriptor_PUT_protocolSupportEnumeration(struct zxmd_md_SPSSODescriptor_s* x, struct zx_str_s* y);
void zxmd_md_SPSSODescriptor_PUT_errorURL(struct zxmd_md_SPSSODescriptor_s* x, struct zx_str_s* y);
void zxmd_md_SPSSODescriptor_PUT_AuthnRequestsSigned(struct zxmd_md_SPSSODescriptor_s* x, struct zx_str_s* y);
void zxmd_md_SPSSODescriptor_PUT_WantAssertionsSigned(struct zxmd_md_SPSSODescriptor_s* x, struct zx_str_s* y);
void zxmd_md_SPSSODescriptor_PUT_Signature(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_ds_Signature_s* y);
void zxmd_md_SPSSODescriptor_PUT_Extensions(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_Extensions_s* y);
void zxmd_md_SPSSODescriptor_PUT_KeyDescriptor(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* y);
void zxmd_md_SPSSODescriptor_PUT_Organization(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_Organization_s* y);
void zxmd_md_SPSSODescriptor_PUT_ContactPerson(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* y);
void zxmd_md_SPSSODescriptor_PUT_ArtifactResolutionService(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_ArtifactResolutionService_s* y);
void zxmd_md_SPSSODescriptor_PUT_SingleLogoutService(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_SingleLogoutService_s* y);
void zxmd_md_SPSSODescriptor_PUT_ManageNameIDService(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_ManageNameIDService_s* y);
void zxmd_md_SPSSODescriptor_PUT_NameIDFormat(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zx_elem_s* y);
void zxmd_md_SPSSODescriptor_PUT_AssertionConsumerService(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_AssertionConsumerService_s* y);
void zxmd_md_SPSSODescriptor_PUT_AttributeConsumingService(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_AttributeConsumingService_s* y);
void zxmd_md_SPSSODescriptor_ADD_Signature(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_ds_Signature_s* z);
void zxmd_md_SPSSODescriptor_ADD_Extensions(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_Extensions_s* z);
void zxmd_md_SPSSODescriptor_ADD_KeyDescriptor(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* z);
void zxmd_md_SPSSODescriptor_ADD_Organization(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_Organization_s* z);
void zxmd_md_SPSSODescriptor_ADD_ContactPerson(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* z);
void zxmd_md_SPSSODescriptor_ADD_ArtifactResolutionService(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_ArtifactResolutionService_s* z);
void zxmd_md_SPSSODescriptor_ADD_SingleLogoutService(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_SingleLogoutService_s* z);
void zxmd_md_SPSSODescriptor_ADD_ManageNameIDService(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_ManageNameIDService_s* z);
void zxmd_md_SPSSODescriptor_ADD_NameIDFormat(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zx_elem_s* z);
void zxmd_md_SPSSODescriptor_ADD_AssertionConsumerService(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_AssertionConsumerService_s* z);
void zxmd_md_SPSSODescriptor_ADD_AttributeConsumingService(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_AttributeConsumingService_s* z);
void zxmd_md_SPSSODescriptor_DEL_Signature(struct zxmd_md_SPSSODescriptor_s* x, int n);
void zxmd_md_SPSSODescriptor_DEL_Extensions(struct zxmd_md_SPSSODescriptor_s* x, int n);
void zxmd_md_SPSSODescriptor_DEL_KeyDescriptor(struct zxmd_md_SPSSODescriptor_s* x, int n);
void zxmd_md_SPSSODescriptor_DEL_Organization(struct zxmd_md_SPSSODescriptor_s* x, int n);
void zxmd_md_SPSSODescriptor_DEL_ContactPerson(struct zxmd_md_SPSSODescriptor_s* x, int n);
void zxmd_md_SPSSODescriptor_DEL_ArtifactResolutionService(struct zxmd_md_SPSSODescriptor_s* x, int n);
void zxmd_md_SPSSODescriptor_DEL_SingleLogoutService(struct zxmd_md_SPSSODescriptor_s* x, int n);
void zxmd_md_SPSSODescriptor_DEL_ManageNameIDService(struct zxmd_md_SPSSODescriptor_s* x, int n);
void zxmd_md_SPSSODescriptor_DEL_NameIDFormat(struct zxmd_md_SPSSODescriptor_s* x, int n);
void zxmd_md_SPSSODescriptor_DEL_AssertionConsumerService(struct zxmd_md_SPSSODescriptor_s* x, int n);
void zxmd_md_SPSSODescriptor_DEL_AttributeConsumingService(struct zxmd_md_SPSSODescriptor_s* x, int n);
void zxmd_md_SPSSODescriptor_REV_Signature(struct zxmd_md_SPSSODescriptor_s* x);
void zxmd_md_SPSSODescriptor_REV_Extensions(struct zxmd_md_SPSSODescriptor_s* x);
void zxmd_md_SPSSODescriptor_REV_KeyDescriptor(struct zxmd_md_SPSSODescriptor_s* x);
void zxmd_md_SPSSODescriptor_REV_Organization(struct zxmd_md_SPSSODescriptor_s* x);
void zxmd_md_SPSSODescriptor_REV_ContactPerson(struct zxmd_md_SPSSODescriptor_s* x);
void zxmd_md_SPSSODescriptor_REV_ArtifactResolutionService(struct zxmd_md_SPSSODescriptor_s* x);
void zxmd_md_SPSSODescriptor_REV_SingleLogoutService(struct zxmd_md_SPSSODescriptor_s* x);
void zxmd_md_SPSSODescriptor_REV_ManageNameIDService(struct zxmd_md_SPSSODescriptor_s* x);
void zxmd_md_SPSSODescriptor_REV_NameIDFormat(struct zxmd_md_SPSSODescriptor_s* x);
void zxmd_md_SPSSODescriptor_REV_AssertionConsumerService(struct zxmd_md_SPSSODescriptor_s* x);
void zxmd_md_SPSSODescriptor_REV_AttributeConsumingService(struct zxmd_md_SPSSODescriptor_s* x);

/* -------------------------- md_ServiceDescription -------------------------- */
/* refby( zxmd_md_AttributeConsumingService_s ) */
#ifndef zxmd_md_ServiceDescription_EXT
#define zxmd_md_ServiceDescription_EXT
#endif

struct zxmd_md_ServiceDescription_s* zxmd_DEC_md_ServiceDescription(struct zx_ctx* c);
struct zxmd_md_ServiceDescription_s* zxmd_NEW_md_ServiceDescription(struct zx_ctx* c);
struct zxmd_md_ServiceDescription_s* zxmd_DEEP_CLONE_md_ServiceDescription(struct zx_ctx* c, struct zxmd_md_ServiceDescription_s* x, int dup_strs);
void zxmd_DUP_STRS_md_ServiceDescription(struct zx_ctx* c, struct zxmd_md_ServiceDescription_s* x);
void zxmd_FREE_md_ServiceDescription(struct zx_ctx* c, struct zxmd_md_ServiceDescription_s* x, int free_strs);
int zxmd_WALK_SO_md_ServiceDescription(struct zx_ctx* c, struct zxmd_md_ServiceDescription_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_ServiceDescription(struct zx_ctx* c, struct zxmd_md_ServiceDescription_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_ServiceDescription(struct zxmd_md_ServiceDescription_s* x);
char* zxmd_ENC_SO_md_ServiceDescription(struct zxmd_md_ServiceDescription_s* x, char* p);
char* zxmd_ENC_WO_md_ServiceDescription(struct zxmd_md_ServiceDescription_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_ServiceDescription(struct zx_ctx* c, struct zxmd_md_ServiceDescription_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_ServiceDescription(struct zx_ctx* c, struct zxmd_md_ServiceDescription_s* x);

struct zxmd_md_ServiceDescription_s {
  ZX_ELEM_EXT
  zxmd_md_ServiceDescription_EXT
  struct zx_str_s* lang;	/* {1,1} attribute xs:string */
};

struct zx_str_s* zxmd_md_ServiceDescription_GET_lang(struct zxmd_md_ServiceDescription_s* x);
void zxmd_md_ServiceDescription_PUT_lang(struct zxmd_md_ServiceDescription_s* x, struct zx_str_s* y);

/* -------------------------- md_ServiceName -------------------------- */
/* refby( zxmd_md_AttributeConsumingService_s ) */
#ifndef zxmd_md_ServiceName_EXT
#define zxmd_md_ServiceName_EXT
#endif

struct zxmd_md_ServiceName_s* zxmd_DEC_md_ServiceName(struct zx_ctx* c);
struct zxmd_md_ServiceName_s* zxmd_NEW_md_ServiceName(struct zx_ctx* c);
struct zxmd_md_ServiceName_s* zxmd_DEEP_CLONE_md_ServiceName(struct zx_ctx* c, struct zxmd_md_ServiceName_s* x, int dup_strs);
void zxmd_DUP_STRS_md_ServiceName(struct zx_ctx* c, struct zxmd_md_ServiceName_s* x);
void zxmd_FREE_md_ServiceName(struct zx_ctx* c, struct zxmd_md_ServiceName_s* x, int free_strs);
int zxmd_WALK_SO_md_ServiceName(struct zx_ctx* c, struct zxmd_md_ServiceName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_ServiceName(struct zx_ctx* c, struct zxmd_md_ServiceName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_ServiceName(struct zxmd_md_ServiceName_s* x);
char* zxmd_ENC_SO_md_ServiceName(struct zxmd_md_ServiceName_s* x, char* p);
char* zxmd_ENC_WO_md_ServiceName(struct zxmd_md_ServiceName_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_ServiceName(struct zx_ctx* c, struct zxmd_md_ServiceName_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_ServiceName(struct zx_ctx* c, struct zxmd_md_ServiceName_s* x);

struct zxmd_md_ServiceName_s {
  ZX_ELEM_EXT
  zxmd_md_ServiceName_EXT
  struct zx_str_s* lang;	/* {1,1} attribute xs:string */
};

struct zx_str_s* zxmd_md_ServiceName_GET_lang(struct zxmd_md_ServiceName_s* x);
void zxmd_md_ServiceName_PUT_lang(struct zxmd_md_ServiceName_s* x, struct zx_str_s* y);

/* -------------------------- md_SingleLogoutService -------------------------- */
/* refby( zxmd_md_IDPSSODescriptor_s zxmd_md_SPSSODescriptor_s ) */
#ifndef zxmd_md_SingleLogoutService_EXT
#define zxmd_md_SingleLogoutService_EXT
#endif

struct zxmd_md_SingleLogoutService_s* zxmd_DEC_md_SingleLogoutService(struct zx_ctx* c);
struct zxmd_md_SingleLogoutService_s* zxmd_NEW_md_SingleLogoutService(struct zx_ctx* c);
struct zxmd_md_SingleLogoutService_s* zxmd_DEEP_CLONE_md_SingleLogoutService(struct zx_ctx* c, struct zxmd_md_SingleLogoutService_s* x, int dup_strs);
void zxmd_DUP_STRS_md_SingleLogoutService(struct zx_ctx* c, struct zxmd_md_SingleLogoutService_s* x);
void zxmd_FREE_md_SingleLogoutService(struct zx_ctx* c, struct zxmd_md_SingleLogoutService_s* x, int free_strs);
int zxmd_WALK_SO_md_SingleLogoutService(struct zx_ctx* c, struct zxmd_md_SingleLogoutService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_SingleLogoutService(struct zx_ctx* c, struct zxmd_md_SingleLogoutService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_SingleLogoutService(struct zxmd_md_SingleLogoutService_s* x);
char* zxmd_ENC_SO_md_SingleLogoutService(struct zxmd_md_SingleLogoutService_s* x, char* p);
char* zxmd_ENC_WO_md_SingleLogoutService(struct zxmd_md_SingleLogoutService_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_SingleLogoutService(struct zx_ctx* c, struct zxmd_md_SingleLogoutService_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_SingleLogoutService(struct zx_ctx* c, struct zxmd_md_SingleLogoutService_s* x);

struct zxmd_md_SingleLogoutService_s {
  ZX_ELEM_EXT
  zxmd_md_SingleLogoutService_EXT
  struct zx_str_s* Binding;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* Location;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* ResponseLocation;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_md_SingleLogoutService_GET_Binding(struct zxmd_md_SingleLogoutService_s* x);
struct zx_str_s* zxmd_md_SingleLogoutService_GET_Location(struct zxmd_md_SingleLogoutService_s* x);
struct zx_str_s* zxmd_md_SingleLogoutService_GET_ResponseLocation(struct zxmd_md_SingleLogoutService_s* x);
void zxmd_md_SingleLogoutService_PUT_Binding(struct zxmd_md_SingleLogoutService_s* x, struct zx_str_s* y);
void zxmd_md_SingleLogoutService_PUT_Location(struct zxmd_md_SingleLogoutService_s* x, struct zx_str_s* y);
void zxmd_md_SingleLogoutService_PUT_ResponseLocation(struct zxmd_md_SingleLogoutService_s* x, struct zx_str_s* y);

/* -------------------------- md_SingleSignOnService -------------------------- */
/* refby( zxmd_md_IDPSSODescriptor_s ) */
#ifndef zxmd_md_SingleSignOnService_EXT
#define zxmd_md_SingleSignOnService_EXT
#endif

struct zxmd_md_SingleSignOnService_s* zxmd_DEC_md_SingleSignOnService(struct zx_ctx* c);
struct zxmd_md_SingleSignOnService_s* zxmd_NEW_md_SingleSignOnService(struct zx_ctx* c);
struct zxmd_md_SingleSignOnService_s* zxmd_DEEP_CLONE_md_SingleSignOnService(struct zx_ctx* c, struct zxmd_md_SingleSignOnService_s* x, int dup_strs);
void zxmd_DUP_STRS_md_SingleSignOnService(struct zx_ctx* c, struct zxmd_md_SingleSignOnService_s* x);
void zxmd_FREE_md_SingleSignOnService(struct zx_ctx* c, struct zxmd_md_SingleSignOnService_s* x, int free_strs);
int zxmd_WALK_SO_md_SingleSignOnService(struct zx_ctx* c, struct zxmd_md_SingleSignOnService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_md_SingleSignOnService(struct zx_ctx* c, struct zxmd_md_SingleSignOnService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_md_SingleSignOnService(struct zxmd_md_SingleSignOnService_s* x);
char* zxmd_ENC_SO_md_SingleSignOnService(struct zxmd_md_SingleSignOnService_s* x, char* p);
char* zxmd_ENC_WO_md_SingleSignOnService(struct zxmd_md_SingleSignOnService_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_md_SingleSignOnService(struct zx_ctx* c, struct zxmd_md_SingleSignOnService_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_md_SingleSignOnService(struct zx_ctx* c, struct zxmd_md_SingleSignOnService_s* x);

struct zxmd_md_SingleSignOnService_s {
  ZX_ELEM_EXT
  zxmd_md_SingleSignOnService_EXT
  struct zx_str_s* Binding;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* Location;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* ResponseLocation;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_md_SingleSignOnService_GET_Binding(struct zxmd_md_SingleSignOnService_s* x);
struct zx_str_s* zxmd_md_SingleSignOnService_GET_Location(struct zxmd_md_SingleSignOnService_s* x);
struct zx_str_s* zxmd_md_SingleSignOnService_GET_ResponseLocation(struct zxmd_md_SingleSignOnService_s* x);
void zxmd_md_SingleSignOnService_PUT_Binding(struct zxmd_md_SingleSignOnService_s* x, struct zx_str_s* y);
void zxmd_md_SingleSignOnService_PUT_Location(struct zxmd_md_SingleSignOnService_s* x, struct zx_str_s* y);
void zxmd_md_SingleSignOnService_PUT_ResponseLocation(struct zxmd_md_SingleSignOnService_s* x, struct zx_str_s* y);

/* -------------------------- sa_Action -------------------------- */
/* refby( zxmd_sa_AuthzDecisionStatement_s ) */
#ifndef zxmd_sa_Action_EXT
#define zxmd_sa_Action_EXT
#endif

struct zxmd_sa_Action_s* zxmd_DEC_sa_Action(struct zx_ctx* c);
struct zxmd_sa_Action_s* zxmd_NEW_sa_Action(struct zx_ctx* c);
struct zxmd_sa_Action_s* zxmd_DEEP_CLONE_sa_Action(struct zx_ctx* c, struct zxmd_sa_Action_s* x, int dup_strs);
void zxmd_DUP_STRS_sa_Action(struct zx_ctx* c, struct zxmd_sa_Action_s* x);
void zxmd_FREE_sa_Action(struct zx_ctx* c, struct zxmd_sa_Action_s* x, int free_strs);
int zxmd_WALK_SO_sa_Action(struct zx_ctx* c, struct zxmd_sa_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_sa_Action(struct zx_ctx* c, struct zxmd_sa_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_sa_Action(struct zxmd_sa_Action_s* x);
char* zxmd_ENC_SO_sa_Action(struct zxmd_sa_Action_s* x, char* p);
char* zxmd_ENC_WO_sa_Action(struct zxmd_sa_Action_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_sa_Action(struct zx_ctx* c, struct zxmd_sa_Action_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_sa_Action(struct zx_ctx* c, struct zxmd_sa_Action_s* x);

struct zxmd_sa_Action_s {
  ZX_ELEM_EXT
  zxmd_sa_Action_EXT
  struct zx_str_s* Namespace;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_sa_Action_GET_Namespace(struct zxmd_sa_Action_s* x);
void zxmd_sa_Action_PUT_Namespace(struct zxmd_sa_Action_s* x, struct zx_str_s* y);

/* -------------------------- sa_Advice -------------------------- */
/* refby( zxmd_sa_Assertion_s ) */
#ifndef zxmd_sa_Advice_EXT
#define zxmd_sa_Advice_EXT
#endif

struct zxmd_sa_Advice_s* zxmd_DEC_sa_Advice(struct zx_ctx* c);
struct zxmd_sa_Advice_s* zxmd_NEW_sa_Advice(struct zx_ctx* c);
struct zxmd_sa_Advice_s* zxmd_DEEP_CLONE_sa_Advice(struct zx_ctx* c, struct zxmd_sa_Advice_s* x, int dup_strs);
void zxmd_DUP_STRS_sa_Advice(struct zx_ctx* c, struct zxmd_sa_Advice_s* x);
void zxmd_FREE_sa_Advice(struct zx_ctx* c, struct zxmd_sa_Advice_s* x, int free_strs);
int zxmd_WALK_SO_sa_Advice(struct zx_ctx* c, struct zxmd_sa_Advice_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_sa_Advice(struct zx_ctx* c, struct zxmd_sa_Advice_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_sa_Advice(struct zxmd_sa_Advice_s* x);
char* zxmd_ENC_SO_sa_Advice(struct zxmd_sa_Advice_s* x, char* p);
char* zxmd_ENC_WO_sa_Advice(struct zxmd_sa_Advice_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_sa_Advice(struct zx_ctx* c, struct zxmd_sa_Advice_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_sa_Advice(struct zx_ctx* c, struct zxmd_sa_Advice_s* x);

struct zxmd_sa_Advice_s {
  ZX_ELEM_EXT
  zxmd_sa_Advice_EXT
  struct zx_elem_s* AssertionIDRef;	/* {0,-1} xs:NCName */
  struct zx_elem_s* AssertionURIRef;	/* {0,-1} xs:anyURI */
  struct zxmd_sa_Assertion_s* Assertion;	/* {0,-1} nada */
  struct zxmd_sa_EncryptedAssertion_s* EncryptedAssertion;	/* {0,-1} nada */
};

struct zx_elem_s* zxmd_sa_Advice_GET_AssertionIDRef(struct zxmd_sa_Advice_s* x, int n);
struct zx_elem_s* zxmd_sa_Advice_GET_AssertionURIRef(struct zxmd_sa_Advice_s* x, int n);
struct zxmd_sa_Assertion_s* zxmd_sa_Advice_GET_Assertion(struct zxmd_sa_Advice_s* x, int n);
struct zxmd_sa_EncryptedAssertion_s* zxmd_sa_Advice_GET_EncryptedAssertion(struct zxmd_sa_Advice_s* x, int n);
int zxmd_sa_Advice_NUM_AssertionIDRef(struct zxmd_sa_Advice_s* x);
int zxmd_sa_Advice_NUM_AssertionURIRef(struct zxmd_sa_Advice_s* x);
int zxmd_sa_Advice_NUM_Assertion(struct zxmd_sa_Advice_s* x);
int zxmd_sa_Advice_NUM_EncryptedAssertion(struct zxmd_sa_Advice_s* x);
struct zx_elem_s* zxmd_sa_Advice_POP_AssertionIDRef(struct zxmd_sa_Advice_s* x);
struct zx_elem_s* zxmd_sa_Advice_POP_AssertionURIRef(struct zxmd_sa_Advice_s* x);
struct zxmd_sa_Assertion_s* zxmd_sa_Advice_POP_Assertion(struct zxmd_sa_Advice_s* x);
struct zxmd_sa_EncryptedAssertion_s* zxmd_sa_Advice_POP_EncryptedAssertion(struct zxmd_sa_Advice_s* x);
void zxmd_sa_Advice_PUSH_AssertionIDRef(struct zxmd_sa_Advice_s* x, struct zx_elem_s* y);
void zxmd_sa_Advice_PUSH_AssertionURIRef(struct zxmd_sa_Advice_s* x, struct zx_elem_s* y);
void zxmd_sa_Advice_PUSH_Assertion(struct zxmd_sa_Advice_s* x, struct zxmd_sa_Assertion_s* y);
void zxmd_sa_Advice_PUSH_EncryptedAssertion(struct zxmd_sa_Advice_s* x, struct zxmd_sa_EncryptedAssertion_s* y);
void zxmd_sa_Advice_PUT_AssertionIDRef(struct zxmd_sa_Advice_s* x, int n, struct zx_elem_s* y);
void zxmd_sa_Advice_PUT_AssertionURIRef(struct zxmd_sa_Advice_s* x, int n, struct zx_elem_s* y);
void zxmd_sa_Advice_PUT_Assertion(struct zxmd_sa_Advice_s* x, int n, struct zxmd_sa_Assertion_s* y);
void zxmd_sa_Advice_PUT_EncryptedAssertion(struct zxmd_sa_Advice_s* x, int n, struct zxmd_sa_EncryptedAssertion_s* y);
void zxmd_sa_Advice_ADD_AssertionIDRef(struct zxmd_sa_Advice_s* x, int n, struct zx_elem_s* z);
void zxmd_sa_Advice_ADD_AssertionURIRef(struct zxmd_sa_Advice_s* x, int n, struct zx_elem_s* z);
void zxmd_sa_Advice_ADD_Assertion(struct zxmd_sa_Advice_s* x, int n, struct zxmd_sa_Assertion_s* z);
void zxmd_sa_Advice_ADD_EncryptedAssertion(struct zxmd_sa_Advice_s* x, int n, struct zxmd_sa_EncryptedAssertion_s* z);
void zxmd_sa_Advice_DEL_AssertionIDRef(struct zxmd_sa_Advice_s* x, int n);
void zxmd_sa_Advice_DEL_AssertionURIRef(struct zxmd_sa_Advice_s* x, int n);
void zxmd_sa_Advice_DEL_Assertion(struct zxmd_sa_Advice_s* x, int n);
void zxmd_sa_Advice_DEL_EncryptedAssertion(struct zxmd_sa_Advice_s* x, int n);
void zxmd_sa_Advice_REV_AssertionIDRef(struct zxmd_sa_Advice_s* x);
void zxmd_sa_Advice_REV_AssertionURIRef(struct zxmd_sa_Advice_s* x);
void zxmd_sa_Advice_REV_Assertion(struct zxmd_sa_Advice_s* x);
void zxmd_sa_Advice_REV_EncryptedAssertion(struct zxmd_sa_Advice_s* x);

/* -------------------------- sa_Assertion -------------------------- */
/* refby( zxmd_sa_Evidence_s zxmd_sa_Advice_s ) */
#ifndef zxmd_sa_Assertion_EXT
#define zxmd_sa_Assertion_EXT
#endif

struct zxmd_sa_Assertion_s* zxmd_DEC_sa_Assertion(struct zx_ctx* c);
struct zxmd_sa_Assertion_s* zxmd_NEW_sa_Assertion(struct zx_ctx* c);
struct zxmd_sa_Assertion_s* zxmd_DEEP_CLONE_sa_Assertion(struct zx_ctx* c, struct zxmd_sa_Assertion_s* x, int dup_strs);
void zxmd_DUP_STRS_sa_Assertion(struct zx_ctx* c, struct zxmd_sa_Assertion_s* x);
void zxmd_FREE_sa_Assertion(struct zx_ctx* c, struct zxmd_sa_Assertion_s* x, int free_strs);
int zxmd_WALK_SO_sa_Assertion(struct zx_ctx* c, struct zxmd_sa_Assertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_sa_Assertion(struct zx_ctx* c, struct zxmd_sa_Assertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_sa_Assertion(struct zxmd_sa_Assertion_s* x);
char* zxmd_ENC_SO_sa_Assertion(struct zxmd_sa_Assertion_s* x, char* p);
char* zxmd_ENC_WO_sa_Assertion(struct zxmd_sa_Assertion_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_sa_Assertion(struct zx_ctx* c, struct zxmd_sa_Assertion_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_sa_Assertion(struct zx_ctx* c, struct zxmd_sa_Assertion_s* x);

struct zxmd_sa_Assertion_s {
  ZX_ELEM_EXT
  zxmd_sa_Assertion_EXT
  struct zxmd_sa_Issuer_s* Issuer;	/* {1,1} nada */
  struct zxmd_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zxmd_sa_Subject_s* Subject;	/* {0,1} nada */
  struct zxmd_sa_Conditions_s* Conditions;	/* {0,1} nada */
  struct zxmd_sa_Advice_s* Advice;	/* {0,1} nada */
  struct zx_elem_s* Statement;	/* {0,-1} sa:StatementAbstractType */
  struct zxmd_sa_AuthnStatement_s* AuthnStatement;	/* {0,-1} nada */
  struct zxmd_sa_AuthzDecisionStatement_s* AuthzDecisionStatement;	/* {0,-1} nada */
  struct zxmd_sa_AttributeStatement_s* AttributeStatement;	/* {0,-1} nada */
  struct zx_str_s* Version;	/* {1,1} attribute xs:string */
  struct zx_str_s* ID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
};

struct zx_str_s* zxmd_sa_Assertion_GET_Version(struct zxmd_sa_Assertion_s* x);
struct zx_str_s* zxmd_sa_Assertion_GET_ID(struct zxmd_sa_Assertion_s* x);
struct zx_str_s* zxmd_sa_Assertion_GET_IssueInstant(struct zxmd_sa_Assertion_s* x);
struct zxmd_sa_Issuer_s* zxmd_sa_Assertion_GET_Issuer(struct zxmd_sa_Assertion_s* x, int n);
struct zxmd_ds_Signature_s* zxmd_sa_Assertion_GET_Signature(struct zxmd_sa_Assertion_s* x, int n);
struct zxmd_sa_Subject_s* zxmd_sa_Assertion_GET_Subject(struct zxmd_sa_Assertion_s* x, int n);
struct zxmd_sa_Conditions_s* zxmd_sa_Assertion_GET_Conditions(struct zxmd_sa_Assertion_s* x, int n);
struct zxmd_sa_Advice_s* zxmd_sa_Assertion_GET_Advice(struct zxmd_sa_Assertion_s* x, int n);
struct zx_elem_s* zxmd_sa_Assertion_GET_Statement(struct zxmd_sa_Assertion_s* x, int n);
struct zxmd_sa_AuthnStatement_s* zxmd_sa_Assertion_GET_AuthnStatement(struct zxmd_sa_Assertion_s* x, int n);
struct zxmd_sa_AuthzDecisionStatement_s* zxmd_sa_Assertion_GET_AuthzDecisionStatement(struct zxmd_sa_Assertion_s* x, int n);
struct zxmd_sa_AttributeStatement_s* zxmd_sa_Assertion_GET_AttributeStatement(struct zxmd_sa_Assertion_s* x, int n);
int zxmd_sa_Assertion_NUM_Issuer(struct zxmd_sa_Assertion_s* x);
int zxmd_sa_Assertion_NUM_Signature(struct zxmd_sa_Assertion_s* x);
int zxmd_sa_Assertion_NUM_Subject(struct zxmd_sa_Assertion_s* x);
int zxmd_sa_Assertion_NUM_Conditions(struct zxmd_sa_Assertion_s* x);
int zxmd_sa_Assertion_NUM_Advice(struct zxmd_sa_Assertion_s* x);
int zxmd_sa_Assertion_NUM_Statement(struct zxmd_sa_Assertion_s* x);
int zxmd_sa_Assertion_NUM_AuthnStatement(struct zxmd_sa_Assertion_s* x);
int zxmd_sa_Assertion_NUM_AuthzDecisionStatement(struct zxmd_sa_Assertion_s* x);
int zxmd_sa_Assertion_NUM_AttributeStatement(struct zxmd_sa_Assertion_s* x);
struct zxmd_sa_Issuer_s* zxmd_sa_Assertion_POP_Issuer(struct zxmd_sa_Assertion_s* x);
struct zxmd_ds_Signature_s* zxmd_sa_Assertion_POP_Signature(struct zxmd_sa_Assertion_s* x);
struct zxmd_sa_Subject_s* zxmd_sa_Assertion_POP_Subject(struct zxmd_sa_Assertion_s* x);
struct zxmd_sa_Conditions_s* zxmd_sa_Assertion_POP_Conditions(struct zxmd_sa_Assertion_s* x);
struct zxmd_sa_Advice_s* zxmd_sa_Assertion_POP_Advice(struct zxmd_sa_Assertion_s* x);
struct zx_elem_s* zxmd_sa_Assertion_POP_Statement(struct zxmd_sa_Assertion_s* x);
struct zxmd_sa_AuthnStatement_s* zxmd_sa_Assertion_POP_AuthnStatement(struct zxmd_sa_Assertion_s* x);
struct zxmd_sa_AuthzDecisionStatement_s* zxmd_sa_Assertion_POP_AuthzDecisionStatement(struct zxmd_sa_Assertion_s* x);
struct zxmd_sa_AttributeStatement_s* zxmd_sa_Assertion_POP_AttributeStatement(struct zxmd_sa_Assertion_s* x);
void zxmd_sa_Assertion_PUSH_Issuer(struct zxmd_sa_Assertion_s* x, struct zxmd_sa_Issuer_s* y);
void zxmd_sa_Assertion_PUSH_Signature(struct zxmd_sa_Assertion_s* x, struct zxmd_ds_Signature_s* y);
void zxmd_sa_Assertion_PUSH_Subject(struct zxmd_sa_Assertion_s* x, struct zxmd_sa_Subject_s* y);
void zxmd_sa_Assertion_PUSH_Conditions(struct zxmd_sa_Assertion_s* x, struct zxmd_sa_Conditions_s* y);
void zxmd_sa_Assertion_PUSH_Advice(struct zxmd_sa_Assertion_s* x, struct zxmd_sa_Advice_s* y);
void zxmd_sa_Assertion_PUSH_Statement(struct zxmd_sa_Assertion_s* x, struct zx_elem_s* y);
void zxmd_sa_Assertion_PUSH_AuthnStatement(struct zxmd_sa_Assertion_s* x, struct zxmd_sa_AuthnStatement_s* y);
void zxmd_sa_Assertion_PUSH_AuthzDecisionStatement(struct zxmd_sa_Assertion_s* x, struct zxmd_sa_AuthzDecisionStatement_s* y);
void zxmd_sa_Assertion_PUSH_AttributeStatement(struct zxmd_sa_Assertion_s* x, struct zxmd_sa_AttributeStatement_s* y);
void zxmd_sa_Assertion_PUT_Version(struct zxmd_sa_Assertion_s* x, struct zx_str_s* y);
void zxmd_sa_Assertion_PUT_ID(struct zxmd_sa_Assertion_s* x, struct zx_str_s* y);
void zxmd_sa_Assertion_PUT_IssueInstant(struct zxmd_sa_Assertion_s* x, struct zx_str_s* y);
void zxmd_sa_Assertion_PUT_Issuer(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_Issuer_s* y);
void zxmd_sa_Assertion_PUT_Signature(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_ds_Signature_s* y);
void zxmd_sa_Assertion_PUT_Subject(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_Subject_s* y);
void zxmd_sa_Assertion_PUT_Conditions(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_Conditions_s* y);
void zxmd_sa_Assertion_PUT_Advice(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_Advice_s* y);
void zxmd_sa_Assertion_PUT_Statement(struct zxmd_sa_Assertion_s* x, int n, struct zx_elem_s* y);
void zxmd_sa_Assertion_PUT_AuthnStatement(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_AuthnStatement_s* y);
void zxmd_sa_Assertion_PUT_AuthzDecisionStatement(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_AuthzDecisionStatement_s* y);
void zxmd_sa_Assertion_PUT_AttributeStatement(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_AttributeStatement_s* y);
void zxmd_sa_Assertion_ADD_Issuer(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_Issuer_s* z);
void zxmd_sa_Assertion_ADD_Signature(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_ds_Signature_s* z);
void zxmd_sa_Assertion_ADD_Subject(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_Subject_s* z);
void zxmd_sa_Assertion_ADD_Conditions(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_Conditions_s* z);
void zxmd_sa_Assertion_ADD_Advice(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_Advice_s* z);
void zxmd_sa_Assertion_ADD_Statement(struct zxmd_sa_Assertion_s* x, int n, struct zx_elem_s* z);
void zxmd_sa_Assertion_ADD_AuthnStatement(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_AuthnStatement_s* z);
void zxmd_sa_Assertion_ADD_AuthzDecisionStatement(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_AuthzDecisionStatement_s* z);
void zxmd_sa_Assertion_ADD_AttributeStatement(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_AttributeStatement_s* z);
void zxmd_sa_Assertion_DEL_Issuer(struct zxmd_sa_Assertion_s* x, int n);
void zxmd_sa_Assertion_DEL_Signature(struct zxmd_sa_Assertion_s* x, int n);
void zxmd_sa_Assertion_DEL_Subject(struct zxmd_sa_Assertion_s* x, int n);
void zxmd_sa_Assertion_DEL_Conditions(struct zxmd_sa_Assertion_s* x, int n);
void zxmd_sa_Assertion_DEL_Advice(struct zxmd_sa_Assertion_s* x, int n);
void zxmd_sa_Assertion_DEL_Statement(struct zxmd_sa_Assertion_s* x, int n);
void zxmd_sa_Assertion_DEL_AuthnStatement(struct zxmd_sa_Assertion_s* x, int n);
void zxmd_sa_Assertion_DEL_AuthzDecisionStatement(struct zxmd_sa_Assertion_s* x, int n);
void zxmd_sa_Assertion_DEL_AttributeStatement(struct zxmd_sa_Assertion_s* x, int n);
void zxmd_sa_Assertion_REV_Issuer(struct zxmd_sa_Assertion_s* x);
void zxmd_sa_Assertion_REV_Signature(struct zxmd_sa_Assertion_s* x);
void zxmd_sa_Assertion_REV_Subject(struct zxmd_sa_Assertion_s* x);
void zxmd_sa_Assertion_REV_Conditions(struct zxmd_sa_Assertion_s* x);
void zxmd_sa_Assertion_REV_Advice(struct zxmd_sa_Assertion_s* x);
void zxmd_sa_Assertion_REV_Statement(struct zxmd_sa_Assertion_s* x);
void zxmd_sa_Assertion_REV_AuthnStatement(struct zxmd_sa_Assertion_s* x);
void zxmd_sa_Assertion_REV_AuthzDecisionStatement(struct zxmd_sa_Assertion_s* x);
void zxmd_sa_Assertion_REV_AttributeStatement(struct zxmd_sa_Assertion_s* x);

/* -------------------------- sa_Attribute -------------------------- */
/* refby( zxmd_md_IDPSSODescriptor_s zxmd_sa_AttributeStatement_s zxmd_md_AttributeAuthorityDescriptor_s ) */
#ifndef zxmd_sa_Attribute_EXT
#define zxmd_sa_Attribute_EXT
#endif

struct zxmd_sa_Attribute_s* zxmd_DEC_sa_Attribute(struct zx_ctx* c);
struct zxmd_sa_Attribute_s* zxmd_NEW_sa_Attribute(struct zx_ctx* c);
struct zxmd_sa_Attribute_s* zxmd_DEEP_CLONE_sa_Attribute(struct zx_ctx* c, struct zxmd_sa_Attribute_s* x, int dup_strs);
void zxmd_DUP_STRS_sa_Attribute(struct zx_ctx* c, struct zxmd_sa_Attribute_s* x);
void zxmd_FREE_sa_Attribute(struct zx_ctx* c, struct zxmd_sa_Attribute_s* x, int free_strs);
int zxmd_WALK_SO_sa_Attribute(struct zx_ctx* c, struct zxmd_sa_Attribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_sa_Attribute(struct zx_ctx* c, struct zxmd_sa_Attribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_sa_Attribute(struct zxmd_sa_Attribute_s* x);
char* zxmd_ENC_SO_sa_Attribute(struct zxmd_sa_Attribute_s* x, char* p);
char* zxmd_ENC_WO_sa_Attribute(struct zxmd_sa_Attribute_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_sa_Attribute(struct zx_ctx* c, struct zxmd_sa_Attribute_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_sa_Attribute(struct zx_ctx* c, struct zxmd_sa_Attribute_s* x);

struct zxmd_sa_Attribute_s {
  ZX_ELEM_EXT
  zxmd_sa_Attribute_EXT
  struct zx_elem_s* AttributeValue;	/* {0,-1} xs:anyType */
  struct zx_str_s* Name;	/* {1,1} attribute xs:string */
  struct zx_str_s* NameFormat;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* FriendlyName;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zxmd_sa_Attribute_GET_Name(struct zxmd_sa_Attribute_s* x);
struct zx_str_s* zxmd_sa_Attribute_GET_NameFormat(struct zxmd_sa_Attribute_s* x);
struct zx_str_s* zxmd_sa_Attribute_GET_FriendlyName(struct zxmd_sa_Attribute_s* x);
struct zx_elem_s* zxmd_sa_Attribute_GET_AttributeValue(struct zxmd_sa_Attribute_s* x, int n);
int zxmd_sa_Attribute_NUM_AttributeValue(struct zxmd_sa_Attribute_s* x);
struct zx_elem_s* zxmd_sa_Attribute_POP_AttributeValue(struct zxmd_sa_Attribute_s* x);
void zxmd_sa_Attribute_PUSH_AttributeValue(struct zxmd_sa_Attribute_s* x, struct zx_elem_s* y);
void zxmd_sa_Attribute_PUT_Name(struct zxmd_sa_Attribute_s* x, struct zx_str_s* y);
void zxmd_sa_Attribute_PUT_NameFormat(struct zxmd_sa_Attribute_s* x, struct zx_str_s* y);
void zxmd_sa_Attribute_PUT_FriendlyName(struct zxmd_sa_Attribute_s* x, struct zx_str_s* y);
void zxmd_sa_Attribute_PUT_AttributeValue(struct zxmd_sa_Attribute_s* x, int n, struct zx_elem_s* y);
void zxmd_sa_Attribute_ADD_AttributeValue(struct zxmd_sa_Attribute_s* x, int n, struct zx_elem_s* z);
void zxmd_sa_Attribute_DEL_AttributeValue(struct zxmd_sa_Attribute_s* x, int n);
void zxmd_sa_Attribute_REV_AttributeValue(struct zxmd_sa_Attribute_s* x);

/* -------------------------- sa_AttributeStatement -------------------------- */
/* refby( zxmd_sa_Assertion_s ) */
#ifndef zxmd_sa_AttributeStatement_EXT
#define zxmd_sa_AttributeStatement_EXT
#endif

struct zxmd_sa_AttributeStatement_s* zxmd_DEC_sa_AttributeStatement(struct zx_ctx* c);
struct zxmd_sa_AttributeStatement_s* zxmd_NEW_sa_AttributeStatement(struct zx_ctx* c);
struct zxmd_sa_AttributeStatement_s* zxmd_DEEP_CLONE_sa_AttributeStatement(struct zx_ctx* c, struct zxmd_sa_AttributeStatement_s* x, int dup_strs);
void zxmd_DUP_STRS_sa_AttributeStatement(struct zx_ctx* c, struct zxmd_sa_AttributeStatement_s* x);
void zxmd_FREE_sa_AttributeStatement(struct zx_ctx* c, struct zxmd_sa_AttributeStatement_s* x, int free_strs);
int zxmd_WALK_SO_sa_AttributeStatement(struct zx_ctx* c, struct zxmd_sa_AttributeStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_sa_AttributeStatement(struct zx_ctx* c, struct zxmd_sa_AttributeStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_sa_AttributeStatement(struct zxmd_sa_AttributeStatement_s* x);
char* zxmd_ENC_SO_sa_AttributeStatement(struct zxmd_sa_AttributeStatement_s* x, char* p);
char* zxmd_ENC_WO_sa_AttributeStatement(struct zxmd_sa_AttributeStatement_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_sa_AttributeStatement(struct zx_ctx* c, struct zxmd_sa_AttributeStatement_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_sa_AttributeStatement(struct zx_ctx* c, struct zxmd_sa_AttributeStatement_s* x);

struct zxmd_sa_AttributeStatement_s {
  ZX_ELEM_EXT
  zxmd_sa_AttributeStatement_EXT
  struct zxmd_sa_Attribute_s* Attribute;	/* {0,-1} nada */
  struct zxmd_sa_EncryptedAttribute_s* EncryptedAttribute;	/* {0,-1} nada */
};

struct zxmd_sa_Attribute_s* zxmd_sa_AttributeStatement_GET_Attribute(struct zxmd_sa_AttributeStatement_s* x, int n);
struct zxmd_sa_EncryptedAttribute_s* zxmd_sa_AttributeStatement_GET_EncryptedAttribute(struct zxmd_sa_AttributeStatement_s* x, int n);
int zxmd_sa_AttributeStatement_NUM_Attribute(struct zxmd_sa_AttributeStatement_s* x);
int zxmd_sa_AttributeStatement_NUM_EncryptedAttribute(struct zxmd_sa_AttributeStatement_s* x);
struct zxmd_sa_Attribute_s* zxmd_sa_AttributeStatement_POP_Attribute(struct zxmd_sa_AttributeStatement_s* x);
struct zxmd_sa_EncryptedAttribute_s* zxmd_sa_AttributeStatement_POP_EncryptedAttribute(struct zxmd_sa_AttributeStatement_s* x);
void zxmd_sa_AttributeStatement_PUSH_Attribute(struct zxmd_sa_AttributeStatement_s* x, struct zxmd_sa_Attribute_s* y);
void zxmd_sa_AttributeStatement_PUSH_EncryptedAttribute(struct zxmd_sa_AttributeStatement_s* x, struct zxmd_sa_EncryptedAttribute_s* y);
void zxmd_sa_AttributeStatement_PUT_Attribute(struct zxmd_sa_AttributeStatement_s* x, int n, struct zxmd_sa_Attribute_s* y);
void zxmd_sa_AttributeStatement_PUT_EncryptedAttribute(struct zxmd_sa_AttributeStatement_s* x, int n, struct zxmd_sa_EncryptedAttribute_s* y);
void zxmd_sa_AttributeStatement_ADD_Attribute(struct zxmd_sa_AttributeStatement_s* x, int n, struct zxmd_sa_Attribute_s* z);
void zxmd_sa_AttributeStatement_ADD_EncryptedAttribute(struct zxmd_sa_AttributeStatement_s* x, int n, struct zxmd_sa_EncryptedAttribute_s* z);
void zxmd_sa_AttributeStatement_DEL_Attribute(struct zxmd_sa_AttributeStatement_s* x, int n);
void zxmd_sa_AttributeStatement_DEL_EncryptedAttribute(struct zxmd_sa_AttributeStatement_s* x, int n);
void zxmd_sa_AttributeStatement_REV_Attribute(struct zxmd_sa_AttributeStatement_s* x);
void zxmd_sa_AttributeStatement_REV_EncryptedAttribute(struct zxmd_sa_AttributeStatement_s* x);

/* -------------------------- sa_AudienceRestriction -------------------------- */
/* refby( zxmd_sa_Conditions_s ) */
#ifndef zxmd_sa_AudienceRestriction_EXT
#define zxmd_sa_AudienceRestriction_EXT
#endif

struct zxmd_sa_AudienceRestriction_s* zxmd_DEC_sa_AudienceRestriction(struct zx_ctx* c);
struct zxmd_sa_AudienceRestriction_s* zxmd_NEW_sa_AudienceRestriction(struct zx_ctx* c);
struct zxmd_sa_AudienceRestriction_s* zxmd_DEEP_CLONE_sa_AudienceRestriction(struct zx_ctx* c, struct zxmd_sa_AudienceRestriction_s* x, int dup_strs);
void zxmd_DUP_STRS_sa_AudienceRestriction(struct zx_ctx* c, struct zxmd_sa_AudienceRestriction_s* x);
void zxmd_FREE_sa_AudienceRestriction(struct zx_ctx* c, struct zxmd_sa_AudienceRestriction_s* x, int free_strs);
int zxmd_WALK_SO_sa_AudienceRestriction(struct zx_ctx* c, struct zxmd_sa_AudienceRestriction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_sa_AudienceRestriction(struct zx_ctx* c, struct zxmd_sa_AudienceRestriction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_sa_AudienceRestriction(struct zxmd_sa_AudienceRestriction_s* x);
char* zxmd_ENC_SO_sa_AudienceRestriction(struct zxmd_sa_AudienceRestriction_s* x, char* p);
char* zxmd_ENC_WO_sa_AudienceRestriction(struct zxmd_sa_AudienceRestriction_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_sa_AudienceRestriction(struct zx_ctx* c, struct zxmd_sa_AudienceRestriction_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_sa_AudienceRestriction(struct zx_ctx* c, struct zxmd_sa_AudienceRestriction_s* x);

struct zxmd_sa_AudienceRestriction_s {
  ZX_ELEM_EXT
  zxmd_sa_AudienceRestriction_EXT
  struct zx_elem_s* Audience;	/* {1,-1} xs:anyURI */
};

struct zx_elem_s* zxmd_sa_AudienceRestriction_GET_Audience(struct zxmd_sa_AudienceRestriction_s* x, int n);
int zxmd_sa_AudienceRestriction_NUM_Audience(struct zxmd_sa_AudienceRestriction_s* x);
struct zx_elem_s* zxmd_sa_AudienceRestriction_POP_Audience(struct zxmd_sa_AudienceRestriction_s* x);
void zxmd_sa_AudienceRestriction_PUSH_Audience(struct zxmd_sa_AudienceRestriction_s* x, struct zx_elem_s* y);
void zxmd_sa_AudienceRestriction_PUT_Audience(struct zxmd_sa_AudienceRestriction_s* x, int n, struct zx_elem_s* y);
void zxmd_sa_AudienceRestriction_ADD_Audience(struct zxmd_sa_AudienceRestriction_s* x, int n, struct zx_elem_s* z);
void zxmd_sa_AudienceRestriction_DEL_Audience(struct zxmd_sa_AudienceRestriction_s* x, int n);
void zxmd_sa_AudienceRestriction_REV_Audience(struct zxmd_sa_AudienceRestriction_s* x);

/* -------------------------- sa_AuthnContext -------------------------- */
/* refby( zxmd_sa_AuthnStatement_s ) */
#ifndef zxmd_sa_AuthnContext_EXT
#define zxmd_sa_AuthnContext_EXT
#endif

struct zxmd_sa_AuthnContext_s* zxmd_DEC_sa_AuthnContext(struct zx_ctx* c);
struct zxmd_sa_AuthnContext_s* zxmd_NEW_sa_AuthnContext(struct zx_ctx* c);
struct zxmd_sa_AuthnContext_s* zxmd_DEEP_CLONE_sa_AuthnContext(struct zx_ctx* c, struct zxmd_sa_AuthnContext_s* x, int dup_strs);
void zxmd_DUP_STRS_sa_AuthnContext(struct zx_ctx* c, struct zxmd_sa_AuthnContext_s* x);
void zxmd_FREE_sa_AuthnContext(struct zx_ctx* c, struct zxmd_sa_AuthnContext_s* x, int free_strs);
int zxmd_WALK_SO_sa_AuthnContext(struct zx_ctx* c, struct zxmd_sa_AuthnContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_sa_AuthnContext(struct zx_ctx* c, struct zxmd_sa_AuthnContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_sa_AuthnContext(struct zxmd_sa_AuthnContext_s* x);
char* zxmd_ENC_SO_sa_AuthnContext(struct zxmd_sa_AuthnContext_s* x, char* p);
char* zxmd_ENC_WO_sa_AuthnContext(struct zxmd_sa_AuthnContext_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_sa_AuthnContext(struct zx_ctx* c, struct zxmd_sa_AuthnContext_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_sa_AuthnContext(struct zx_ctx* c, struct zxmd_sa_AuthnContext_s* x);

struct zxmd_sa_AuthnContext_s {
  ZX_ELEM_EXT
  zxmd_sa_AuthnContext_EXT
  struct zx_elem_s* AuthnContextClassRef;	/* {0,1} xs:anyURI */
  struct zx_elem_s* AuthnContextDecl;	/* {0,1} xs:anyType */
  struct zx_elem_s* AuthnContextDeclRef;	/* {0,1} xs:anyURI */
  struct zx_elem_s* AuthenticatingAuthority;	/* {0,-1} xs:anyURI */
};

struct zx_elem_s* zxmd_sa_AuthnContext_GET_AuthnContextClassRef(struct zxmd_sa_AuthnContext_s* x, int n);
struct zx_elem_s* zxmd_sa_AuthnContext_GET_AuthnContextDecl(struct zxmd_sa_AuthnContext_s* x, int n);
struct zx_elem_s* zxmd_sa_AuthnContext_GET_AuthnContextDeclRef(struct zxmd_sa_AuthnContext_s* x, int n);
struct zx_elem_s* zxmd_sa_AuthnContext_GET_AuthenticatingAuthority(struct zxmd_sa_AuthnContext_s* x, int n);
int zxmd_sa_AuthnContext_NUM_AuthnContextClassRef(struct zxmd_sa_AuthnContext_s* x);
int zxmd_sa_AuthnContext_NUM_AuthnContextDecl(struct zxmd_sa_AuthnContext_s* x);
int zxmd_sa_AuthnContext_NUM_AuthnContextDeclRef(struct zxmd_sa_AuthnContext_s* x);
int zxmd_sa_AuthnContext_NUM_AuthenticatingAuthority(struct zxmd_sa_AuthnContext_s* x);
struct zx_elem_s* zxmd_sa_AuthnContext_POP_AuthnContextClassRef(struct zxmd_sa_AuthnContext_s* x);
struct zx_elem_s* zxmd_sa_AuthnContext_POP_AuthnContextDecl(struct zxmd_sa_AuthnContext_s* x);
struct zx_elem_s* zxmd_sa_AuthnContext_POP_AuthnContextDeclRef(struct zxmd_sa_AuthnContext_s* x);
struct zx_elem_s* zxmd_sa_AuthnContext_POP_AuthenticatingAuthority(struct zxmd_sa_AuthnContext_s* x);
void zxmd_sa_AuthnContext_PUSH_AuthnContextClassRef(struct zxmd_sa_AuthnContext_s* x, struct zx_elem_s* y);
void zxmd_sa_AuthnContext_PUSH_AuthnContextDecl(struct zxmd_sa_AuthnContext_s* x, struct zx_elem_s* y);
void zxmd_sa_AuthnContext_PUSH_AuthnContextDeclRef(struct zxmd_sa_AuthnContext_s* x, struct zx_elem_s* y);
void zxmd_sa_AuthnContext_PUSH_AuthenticatingAuthority(struct zxmd_sa_AuthnContext_s* x, struct zx_elem_s* y);
void zxmd_sa_AuthnContext_PUT_AuthnContextClassRef(struct zxmd_sa_AuthnContext_s* x, int n, struct zx_elem_s* y);
void zxmd_sa_AuthnContext_PUT_AuthnContextDecl(struct zxmd_sa_AuthnContext_s* x, int n, struct zx_elem_s* y);
void zxmd_sa_AuthnContext_PUT_AuthnContextDeclRef(struct zxmd_sa_AuthnContext_s* x, int n, struct zx_elem_s* y);
void zxmd_sa_AuthnContext_PUT_AuthenticatingAuthority(struct zxmd_sa_AuthnContext_s* x, int n, struct zx_elem_s* y);
void zxmd_sa_AuthnContext_ADD_AuthnContextClassRef(struct zxmd_sa_AuthnContext_s* x, int n, struct zx_elem_s* z);
void zxmd_sa_AuthnContext_ADD_AuthnContextDecl(struct zxmd_sa_AuthnContext_s* x, int n, struct zx_elem_s* z);
void zxmd_sa_AuthnContext_ADD_AuthnContextDeclRef(struct zxmd_sa_AuthnContext_s* x, int n, struct zx_elem_s* z);
void zxmd_sa_AuthnContext_ADD_AuthenticatingAuthority(struct zxmd_sa_AuthnContext_s* x, int n, struct zx_elem_s* z);
void zxmd_sa_AuthnContext_DEL_AuthnContextClassRef(struct zxmd_sa_AuthnContext_s* x, int n);
void zxmd_sa_AuthnContext_DEL_AuthnContextDecl(struct zxmd_sa_AuthnContext_s* x, int n);
void zxmd_sa_AuthnContext_DEL_AuthnContextDeclRef(struct zxmd_sa_AuthnContext_s* x, int n);
void zxmd_sa_AuthnContext_DEL_AuthenticatingAuthority(struct zxmd_sa_AuthnContext_s* x, int n);
void zxmd_sa_AuthnContext_REV_AuthnContextClassRef(struct zxmd_sa_AuthnContext_s* x);
void zxmd_sa_AuthnContext_REV_AuthnContextDecl(struct zxmd_sa_AuthnContext_s* x);
void zxmd_sa_AuthnContext_REV_AuthnContextDeclRef(struct zxmd_sa_AuthnContext_s* x);
void zxmd_sa_AuthnContext_REV_AuthenticatingAuthority(struct zxmd_sa_AuthnContext_s* x);

/* -------------------------- sa_AuthnStatement -------------------------- */
/* refby( zxmd_sa_Assertion_s ) */
#ifndef zxmd_sa_AuthnStatement_EXT
#define zxmd_sa_AuthnStatement_EXT
#endif

struct zxmd_sa_AuthnStatement_s* zxmd_DEC_sa_AuthnStatement(struct zx_ctx* c);
struct zxmd_sa_AuthnStatement_s* zxmd_NEW_sa_AuthnStatement(struct zx_ctx* c);
struct zxmd_sa_AuthnStatement_s* zxmd_DEEP_CLONE_sa_AuthnStatement(struct zx_ctx* c, struct zxmd_sa_AuthnStatement_s* x, int dup_strs);
void zxmd_DUP_STRS_sa_AuthnStatement(struct zx_ctx* c, struct zxmd_sa_AuthnStatement_s* x);
void zxmd_FREE_sa_AuthnStatement(struct zx_ctx* c, struct zxmd_sa_AuthnStatement_s* x, int free_strs);
int zxmd_WALK_SO_sa_AuthnStatement(struct zx_ctx* c, struct zxmd_sa_AuthnStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_sa_AuthnStatement(struct zx_ctx* c, struct zxmd_sa_AuthnStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_sa_AuthnStatement(struct zxmd_sa_AuthnStatement_s* x);
char* zxmd_ENC_SO_sa_AuthnStatement(struct zxmd_sa_AuthnStatement_s* x, char* p);
char* zxmd_ENC_WO_sa_AuthnStatement(struct zxmd_sa_AuthnStatement_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_sa_AuthnStatement(struct zx_ctx* c, struct zxmd_sa_AuthnStatement_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_sa_AuthnStatement(struct zx_ctx* c, struct zxmd_sa_AuthnStatement_s* x);

struct zxmd_sa_AuthnStatement_s {
  ZX_ELEM_EXT
  zxmd_sa_AuthnStatement_EXT
  struct zxmd_sa_SubjectLocality_s* SubjectLocality;	/* {0,1} nada */
  struct zxmd_sa_AuthnContext_s* AuthnContext;	/* {1,1} nada */
  struct zx_str_s* AuthnInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str_s* SessionIndex;	/* {0,1} attribute xs:string */
  struct zx_str_s* SessionNotOnOrAfter;	/* {0,1} attribute xs:dateTime */
};

struct zx_str_s* zxmd_sa_AuthnStatement_GET_AuthnInstant(struct zxmd_sa_AuthnStatement_s* x);
struct zx_str_s* zxmd_sa_AuthnStatement_GET_SessionIndex(struct zxmd_sa_AuthnStatement_s* x);
struct zx_str_s* zxmd_sa_AuthnStatement_GET_SessionNotOnOrAfter(struct zxmd_sa_AuthnStatement_s* x);
struct zxmd_sa_SubjectLocality_s* zxmd_sa_AuthnStatement_GET_SubjectLocality(struct zxmd_sa_AuthnStatement_s* x, int n);
struct zxmd_sa_AuthnContext_s* zxmd_sa_AuthnStatement_GET_AuthnContext(struct zxmd_sa_AuthnStatement_s* x, int n);
int zxmd_sa_AuthnStatement_NUM_SubjectLocality(struct zxmd_sa_AuthnStatement_s* x);
int zxmd_sa_AuthnStatement_NUM_AuthnContext(struct zxmd_sa_AuthnStatement_s* x);
struct zxmd_sa_SubjectLocality_s* zxmd_sa_AuthnStatement_POP_SubjectLocality(struct zxmd_sa_AuthnStatement_s* x);
struct zxmd_sa_AuthnContext_s* zxmd_sa_AuthnStatement_POP_AuthnContext(struct zxmd_sa_AuthnStatement_s* x);
void zxmd_sa_AuthnStatement_PUSH_SubjectLocality(struct zxmd_sa_AuthnStatement_s* x, struct zxmd_sa_SubjectLocality_s* y);
void zxmd_sa_AuthnStatement_PUSH_AuthnContext(struct zxmd_sa_AuthnStatement_s* x, struct zxmd_sa_AuthnContext_s* y);
void zxmd_sa_AuthnStatement_PUT_AuthnInstant(struct zxmd_sa_AuthnStatement_s* x, struct zx_str_s* y);
void zxmd_sa_AuthnStatement_PUT_SessionIndex(struct zxmd_sa_AuthnStatement_s* x, struct zx_str_s* y);
void zxmd_sa_AuthnStatement_PUT_SessionNotOnOrAfter(struct zxmd_sa_AuthnStatement_s* x, struct zx_str_s* y);
void zxmd_sa_AuthnStatement_PUT_SubjectLocality(struct zxmd_sa_AuthnStatement_s* x, int n, struct zxmd_sa_SubjectLocality_s* y);
void zxmd_sa_AuthnStatement_PUT_AuthnContext(struct zxmd_sa_AuthnStatement_s* x, int n, struct zxmd_sa_AuthnContext_s* y);
void zxmd_sa_AuthnStatement_ADD_SubjectLocality(struct zxmd_sa_AuthnStatement_s* x, int n, struct zxmd_sa_SubjectLocality_s* z);
void zxmd_sa_AuthnStatement_ADD_AuthnContext(struct zxmd_sa_AuthnStatement_s* x, int n, struct zxmd_sa_AuthnContext_s* z);
void zxmd_sa_AuthnStatement_DEL_SubjectLocality(struct zxmd_sa_AuthnStatement_s* x, int n);
void zxmd_sa_AuthnStatement_DEL_AuthnContext(struct zxmd_sa_AuthnStatement_s* x, int n);
void zxmd_sa_AuthnStatement_REV_SubjectLocality(struct zxmd_sa_AuthnStatement_s* x);
void zxmd_sa_AuthnStatement_REV_AuthnContext(struct zxmd_sa_AuthnStatement_s* x);

/* -------------------------- sa_AuthzDecisionStatement -------------------------- */
/* refby( zxmd_sa_Assertion_s ) */
#ifndef zxmd_sa_AuthzDecisionStatement_EXT
#define zxmd_sa_AuthzDecisionStatement_EXT
#endif

struct zxmd_sa_AuthzDecisionStatement_s* zxmd_DEC_sa_AuthzDecisionStatement(struct zx_ctx* c);
struct zxmd_sa_AuthzDecisionStatement_s* zxmd_NEW_sa_AuthzDecisionStatement(struct zx_ctx* c);
struct zxmd_sa_AuthzDecisionStatement_s* zxmd_DEEP_CLONE_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zxmd_sa_AuthzDecisionStatement_s* x, int dup_strs);
void zxmd_DUP_STRS_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zxmd_sa_AuthzDecisionStatement_s* x);
void zxmd_FREE_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zxmd_sa_AuthzDecisionStatement_s* x, int free_strs);
int zxmd_WALK_SO_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zxmd_sa_AuthzDecisionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zxmd_sa_AuthzDecisionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_sa_AuthzDecisionStatement(struct zxmd_sa_AuthzDecisionStatement_s* x);
char* zxmd_ENC_SO_sa_AuthzDecisionStatement(struct zxmd_sa_AuthzDecisionStatement_s* x, char* p);
char* zxmd_ENC_WO_sa_AuthzDecisionStatement(struct zxmd_sa_AuthzDecisionStatement_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zxmd_sa_AuthzDecisionStatement_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zxmd_sa_AuthzDecisionStatement_s* x);

struct zxmd_sa_AuthzDecisionStatement_s {
  ZX_ELEM_EXT
  zxmd_sa_AuthzDecisionStatement_EXT
  struct zxmd_sa_Action_s* Action;	/* {1,-1} nada */
  struct zxmd_sa_Evidence_s* Evidence;	/* {0,1} nada */
  struct zx_str_s* Resource;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* Decision;	/* {1,1} attribute sa:DecisionType */
};

struct zx_str_s* zxmd_sa_AuthzDecisionStatement_GET_Resource(struct zxmd_sa_AuthzDecisionStatement_s* x);
struct zx_str_s* zxmd_sa_AuthzDecisionStatement_GET_Decision(struct zxmd_sa_AuthzDecisionStatement_s* x);
struct zxmd_sa_Action_s* zxmd_sa_AuthzDecisionStatement_GET_Action(struct zxmd_sa_AuthzDecisionStatement_s* x, int n);
struct zxmd_sa_Evidence_s* zxmd_sa_AuthzDecisionStatement_GET_Evidence(struct zxmd_sa_AuthzDecisionStatement_s* x, int n);
int zxmd_sa_AuthzDecisionStatement_NUM_Action(struct zxmd_sa_AuthzDecisionStatement_s* x);
int zxmd_sa_AuthzDecisionStatement_NUM_Evidence(struct zxmd_sa_AuthzDecisionStatement_s* x);
struct zxmd_sa_Action_s* zxmd_sa_AuthzDecisionStatement_POP_Action(struct zxmd_sa_AuthzDecisionStatement_s* x);
struct zxmd_sa_Evidence_s* zxmd_sa_AuthzDecisionStatement_POP_Evidence(struct zxmd_sa_AuthzDecisionStatement_s* x);
void zxmd_sa_AuthzDecisionStatement_PUSH_Action(struct zxmd_sa_AuthzDecisionStatement_s* x, struct zxmd_sa_Action_s* y);
void zxmd_sa_AuthzDecisionStatement_PUSH_Evidence(struct zxmd_sa_AuthzDecisionStatement_s* x, struct zxmd_sa_Evidence_s* y);
void zxmd_sa_AuthzDecisionStatement_PUT_Resource(struct zxmd_sa_AuthzDecisionStatement_s* x, struct zx_str_s* y);
void zxmd_sa_AuthzDecisionStatement_PUT_Decision(struct zxmd_sa_AuthzDecisionStatement_s* x, struct zx_str_s* y);
void zxmd_sa_AuthzDecisionStatement_PUT_Action(struct zxmd_sa_AuthzDecisionStatement_s* x, int n, struct zxmd_sa_Action_s* y);
void zxmd_sa_AuthzDecisionStatement_PUT_Evidence(struct zxmd_sa_AuthzDecisionStatement_s* x, int n, struct zxmd_sa_Evidence_s* y);
void zxmd_sa_AuthzDecisionStatement_ADD_Action(struct zxmd_sa_AuthzDecisionStatement_s* x, int n, struct zxmd_sa_Action_s* z);
void zxmd_sa_AuthzDecisionStatement_ADD_Evidence(struct zxmd_sa_AuthzDecisionStatement_s* x, int n, struct zxmd_sa_Evidence_s* z);
void zxmd_sa_AuthzDecisionStatement_DEL_Action(struct zxmd_sa_AuthzDecisionStatement_s* x, int n);
void zxmd_sa_AuthzDecisionStatement_DEL_Evidence(struct zxmd_sa_AuthzDecisionStatement_s* x, int n);
void zxmd_sa_AuthzDecisionStatement_REV_Action(struct zxmd_sa_AuthzDecisionStatement_s* x);
void zxmd_sa_AuthzDecisionStatement_REV_Evidence(struct zxmd_sa_AuthzDecisionStatement_s* x);

/* -------------------------- sa_BaseID -------------------------- */
/* refby( zxmd_sa_SubjectConfirmation_s zxmd_sa_Subject_s ) */
#ifndef zxmd_sa_BaseID_EXT
#define zxmd_sa_BaseID_EXT
#endif

struct zxmd_sa_BaseID_s* zxmd_DEC_sa_BaseID(struct zx_ctx* c);
struct zxmd_sa_BaseID_s* zxmd_NEW_sa_BaseID(struct zx_ctx* c);
struct zxmd_sa_BaseID_s* zxmd_DEEP_CLONE_sa_BaseID(struct zx_ctx* c, struct zxmd_sa_BaseID_s* x, int dup_strs);
void zxmd_DUP_STRS_sa_BaseID(struct zx_ctx* c, struct zxmd_sa_BaseID_s* x);
void zxmd_FREE_sa_BaseID(struct zx_ctx* c, struct zxmd_sa_BaseID_s* x, int free_strs);
int zxmd_WALK_SO_sa_BaseID(struct zx_ctx* c, struct zxmd_sa_BaseID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_sa_BaseID(struct zx_ctx* c, struct zxmd_sa_BaseID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_sa_BaseID(struct zxmd_sa_BaseID_s* x);
char* zxmd_ENC_SO_sa_BaseID(struct zxmd_sa_BaseID_s* x, char* p);
char* zxmd_ENC_WO_sa_BaseID(struct zxmd_sa_BaseID_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_sa_BaseID(struct zx_ctx* c, struct zxmd_sa_BaseID_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_sa_BaseID(struct zx_ctx* c, struct zxmd_sa_BaseID_s* x);

struct zxmd_sa_BaseID_s {
  ZX_ELEM_EXT
  zxmd_sa_BaseID_EXT
  struct zx_str_s* NameQualifier;	/* {0,1} attribute xs:string */
  struct zx_str_s* SPNameQualifier;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zxmd_sa_BaseID_GET_NameQualifier(struct zxmd_sa_BaseID_s* x);
struct zx_str_s* zxmd_sa_BaseID_GET_SPNameQualifier(struct zxmd_sa_BaseID_s* x);
void zxmd_sa_BaseID_PUT_NameQualifier(struct zxmd_sa_BaseID_s* x, struct zx_str_s* y);
void zxmd_sa_BaseID_PUT_SPNameQualifier(struct zxmd_sa_BaseID_s* x, struct zx_str_s* y);

/* -------------------------- sa_Conditions -------------------------- */
/* refby( zxmd_sa_Assertion_s ) */
#ifndef zxmd_sa_Conditions_EXT
#define zxmd_sa_Conditions_EXT
#endif

struct zxmd_sa_Conditions_s* zxmd_DEC_sa_Conditions(struct zx_ctx* c);
struct zxmd_sa_Conditions_s* zxmd_NEW_sa_Conditions(struct zx_ctx* c);
struct zxmd_sa_Conditions_s* zxmd_DEEP_CLONE_sa_Conditions(struct zx_ctx* c, struct zxmd_sa_Conditions_s* x, int dup_strs);
void zxmd_DUP_STRS_sa_Conditions(struct zx_ctx* c, struct zxmd_sa_Conditions_s* x);
void zxmd_FREE_sa_Conditions(struct zx_ctx* c, struct zxmd_sa_Conditions_s* x, int free_strs);
int zxmd_WALK_SO_sa_Conditions(struct zx_ctx* c, struct zxmd_sa_Conditions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_sa_Conditions(struct zx_ctx* c, struct zxmd_sa_Conditions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_sa_Conditions(struct zxmd_sa_Conditions_s* x);
char* zxmd_ENC_SO_sa_Conditions(struct zxmd_sa_Conditions_s* x, char* p);
char* zxmd_ENC_WO_sa_Conditions(struct zxmd_sa_Conditions_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_sa_Conditions(struct zx_ctx* c, struct zxmd_sa_Conditions_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_sa_Conditions(struct zx_ctx* c, struct zxmd_sa_Conditions_s* x);

struct zxmd_sa_Conditions_s {
  ZX_ELEM_EXT
  zxmd_sa_Conditions_EXT
  struct zx_elem_s* Condition;	/* {0,-1} sa:ConditionAbstractType */
  struct zxmd_sa_AudienceRestriction_s* AudienceRestriction;	/* {0,-1}  */
  struct zxmd_sa_OneTimeUse_s* OneTimeUse;	/* {0,-1} nada */
  struct zxmd_sa_ProxyRestriction_s* ProxyRestriction;	/* {0,-1} nada */
  struct zx_str_s* NotBefore;	/* {0,1} attribute xs:dateTime */
  struct zx_str_s* NotOnOrAfter;	/* {0,1} attribute xs:dateTime */
};

struct zx_str_s* zxmd_sa_Conditions_GET_NotBefore(struct zxmd_sa_Conditions_s* x);
struct zx_str_s* zxmd_sa_Conditions_GET_NotOnOrAfter(struct zxmd_sa_Conditions_s* x);
struct zx_elem_s* zxmd_sa_Conditions_GET_Condition(struct zxmd_sa_Conditions_s* x, int n);
struct zxmd_sa_AudienceRestriction_s* zxmd_sa_Conditions_GET_AudienceRestriction(struct zxmd_sa_Conditions_s* x, int n);
struct zxmd_sa_OneTimeUse_s* zxmd_sa_Conditions_GET_OneTimeUse(struct zxmd_sa_Conditions_s* x, int n);
struct zxmd_sa_ProxyRestriction_s* zxmd_sa_Conditions_GET_ProxyRestriction(struct zxmd_sa_Conditions_s* x, int n);
int zxmd_sa_Conditions_NUM_Condition(struct zxmd_sa_Conditions_s* x);
int zxmd_sa_Conditions_NUM_AudienceRestriction(struct zxmd_sa_Conditions_s* x);
int zxmd_sa_Conditions_NUM_OneTimeUse(struct zxmd_sa_Conditions_s* x);
int zxmd_sa_Conditions_NUM_ProxyRestriction(struct zxmd_sa_Conditions_s* x);
struct zx_elem_s* zxmd_sa_Conditions_POP_Condition(struct zxmd_sa_Conditions_s* x);
struct zxmd_sa_AudienceRestriction_s* zxmd_sa_Conditions_POP_AudienceRestriction(struct zxmd_sa_Conditions_s* x);
struct zxmd_sa_OneTimeUse_s* zxmd_sa_Conditions_POP_OneTimeUse(struct zxmd_sa_Conditions_s* x);
struct zxmd_sa_ProxyRestriction_s* zxmd_sa_Conditions_POP_ProxyRestriction(struct zxmd_sa_Conditions_s* x);
void zxmd_sa_Conditions_PUSH_Condition(struct zxmd_sa_Conditions_s* x, struct zx_elem_s* y);
void zxmd_sa_Conditions_PUSH_AudienceRestriction(struct zxmd_sa_Conditions_s* x, struct zxmd_sa_AudienceRestriction_s* y);
void zxmd_sa_Conditions_PUSH_OneTimeUse(struct zxmd_sa_Conditions_s* x, struct zxmd_sa_OneTimeUse_s* y);
void zxmd_sa_Conditions_PUSH_ProxyRestriction(struct zxmd_sa_Conditions_s* x, struct zxmd_sa_ProxyRestriction_s* y);
void zxmd_sa_Conditions_PUT_NotBefore(struct zxmd_sa_Conditions_s* x, struct zx_str_s* y);
void zxmd_sa_Conditions_PUT_NotOnOrAfter(struct zxmd_sa_Conditions_s* x, struct zx_str_s* y);
void zxmd_sa_Conditions_PUT_Condition(struct zxmd_sa_Conditions_s* x, int n, struct zx_elem_s* y);
void zxmd_sa_Conditions_PUT_AudienceRestriction(struct zxmd_sa_Conditions_s* x, int n, struct zxmd_sa_AudienceRestriction_s* y);
void zxmd_sa_Conditions_PUT_OneTimeUse(struct zxmd_sa_Conditions_s* x, int n, struct zxmd_sa_OneTimeUse_s* y);
void zxmd_sa_Conditions_PUT_ProxyRestriction(struct zxmd_sa_Conditions_s* x, int n, struct zxmd_sa_ProxyRestriction_s* y);
void zxmd_sa_Conditions_ADD_Condition(struct zxmd_sa_Conditions_s* x, int n, struct zx_elem_s* z);
void zxmd_sa_Conditions_ADD_AudienceRestriction(struct zxmd_sa_Conditions_s* x, int n, struct zxmd_sa_AudienceRestriction_s* z);
void zxmd_sa_Conditions_ADD_OneTimeUse(struct zxmd_sa_Conditions_s* x, int n, struct zxmd_sa_OneTimeUse_s* z);
void zxmd_sa_Conditions_ADD_ProxyRestriction(struct zxmd_sa_Conditions_s* x, int n, struct zxmd_sa_ProxyRestriction_s* z);
void zxmd_sa_Conditions_DEL_Condition(struct zxmd_sa_Conditions_s* x, int n);
void zxmd_sa_Conditions_DEL_AudienceRestriction(struct zxmd_sa_Conditions_s* x, int n);
void zxmd_sa_Conditions_DEL_OneTimeUse(struct zxmd_sa_Conditions_s* x, int n);
void zxmd_sa_Conditions_DEL_ProxyRestriction(struct zxmd_sa_Conditions_s* x, int n);
void zxmd_sa_Conditions_REV_Condition(struct zxmd_sa_Conditions_s* x);
void zxmd_sa_Conditions_REV_AudienceRestriction(struct zxmd_sa_Conditions_s* x);
void zxmd_sa_Conditions_REV_OneTimeUse(struct zxmd_sa_Conditions_s* x);
void zxmd_sa_Conditions_REV_ProxyRestriction(struct zxmd_sa_Conditions_s* x);

/* -------------------------- sa_EncryptedAssertion -------------------------- */
/* refby( zxmd_sa_Evidence_s zxmd_sa_Advice_s ) */
#ifndef zxmd_sa_EncryptedAssertion_EXT
#define zxmd_sa_EncryptedAssertion_EXT
#endif

struct zxmd_sa_EncryptedAssertion_s* zxmd_DEC_sa_EncryptedAssertion(struct zx_ctx* c);
struct zxmd_sa_EncryptedAssertion_s* zxmd_NEW_sa_EncryptedAssertion(struct zx_ctx* c);
struct zxmd_sa_EncryptedAssertion_s* zxmd_DEEP_CLONE_sa_EncryptedAssertion(struct zx_ctx* c, struct zxmd_sa_EncryptedAssertion_s* x, int dup_strs);
void zxmd_DUP_STRS_sa_EncryptedAssertion(struct zx_ctx* c, struct zxmd_sa_EncryptedAssertion_s* x);
void zxmd_FREE_sa_EncryptedAssertion(struct zx_ctx* c, struct zxmd_sa_EncryptedAssertion_s* x, int free_strs);
int zxmd_WALK_SO_sa_EncryptedAssertion(struct zx_ctx* c, struct zxmd_sa_EncryptedAssertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_sa_EncryptedAssertion(struct zx_ctx* c, struct zxmd_sa_EncryptedAssertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_sa_EncryptedAssertion(struct zxmd_sa_EncryptedAssertion_s* x);
char* zxmd_ENC_SO_sa_EncryptedAssertion(struct zxmd_sa_EncryptedAssertion_s* x, char* p);
char* zxmd_ENC_WO_sa_EncryptedAssertion(struct zxmd_sa_EncryptedAssertion_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_sa_EncryptedAssertion(struct zx_ctx* c, struct zxmd_sa_EncryptedAssertion_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_sa_EncryptedAssertion(struct zx_ctx* c, struct zxmd_sa_EncryptedAssertion_s* x);

struct zxmd_sa_EncryptedAssertion_s {
  ZX_ELEM_EXT
  zxmd_sa_EncryptedAssertion_EXT
  struct zxmd_xenc_EncryptedData_s* EncryptedData;	/* {1,1} nada */
  struct zxmd_xenc_EncryptedKey_s* EncryptedKey;	/* {0,-1} nada */
};

struct zxmd_xenc_EncryptedData_s* zxmd_sa_EncryptedAssertion_GET_EncryptedData(struct zxmd_sa_EncryptedAssertion_s* x, int n);
struct zxmd_xenc_EncryptedKey_s* zxmd_sa_EncryptedAssertion_GET_EncryptedKey(struct zxmd_sa_EncryptedAssertion_s* x, int n);
int zxmd_sa_EncryptedAssertion_NUM_EncryptedData(struct zxmd_sa_EncryptedAssertion_s* x);
int zxmd_sa_EncryptedAssertion_NUM_EncryptedKey(struct zxmd_sa_EncryptedAssertion_s* x);
struct zxmd_xenc_EncryptedData_s* zxmd_sa_EncryptedAssertion_POP_EncryptedData(struct zxmd_sa_EncryptedAssertion_s* x);
struct zxmd_xenc_EncryptedKey_s* zxmd_sa_EncryptedAssertion_POP_EncryptedKey(struct zxmd_sa_EncryptedAssertion_s* x);
void zxmd_sa_EncryptedAssertion_PUSH_EncryptedData(struct zxmd_sa_EncryptedAssertion_s* x, struct zxmd_xenc_EncryptedData_s* y);
void zxmd_sa_EncryptedAssertion_PUSH_EncryptedKey(struct zxmd_sa_EncryptedAssertion_s* x, struct zxmd_xenc_EncryptedKey_s* y);
void zxmd_sa_EncryptedAssertion_PUT_EncryptedData(struct zxmd_sa_EncryptedAssertion_s* x, int n, struct zxmd_xenc_EncryptedData_s* y);
void zxmd_sa_EncryptedAssertion_PUT_EncryptedKey(struct zxmd_sa_EncryptedAssertion_s* x, int n, struct zxmd_xenc_EncryptedKey_s* y);
void zxmd_sa_EncryptedAssertion_ADD_EncryptedData(struct zxmd_sa_EncryptedAssertion_s* x, int n, struct zxmd_xenc_EncryptedData_s* z);
void zxmd_sa_EncryptedAssertion_ADD_EncryptedKey(struct zxmd_sa_EncryptedAssertion_s* x, int n, struct zxmd_xenc_EncryptedKey_s* z);
void zxmd_sa_EncryptedAssertion_DEL_EncryptedData(struct zxmd_sa_EncryptedAssertion_s* x, int n);
void zxmd_sa_EncryptedAssertion_DEL_EncryptedKey(struct zxmd_sa_EncryptedAssertion_s* x, int n);
void zxmd_sa_EncryptedAssertion_REV_EncryptedData(struct zxmd_sa_EncryptedAssertion_s* x);
void zxmd_sa_EncryptedAssertion_REV_EncryptedKey(struct zxmd_sa_EncryptedAssertion_s* x);

/* -------------------------- sa_EncryptedAttribute -------------------------- */
/* refby( zxmd_sa_AttributeStatement_s ) */
#ifndef zxmd_sa_EncryptedAttribute_EXT
#define zxmd_sa_EncryptedAttribute_EXT
#endif

struct zxmd_sa_EncryptedAttribute_s* zxmd_DEC_sa_EncryptedAttribute(struct zx_ctx* c);
struct zxmd_sa_EncryptedAttribute_s* zxmd_NEW_sa_EncryptedAttribute(struct zx_ctx* c);
struct zxmd_sa_EncryptedAttribute_s* zxmd_DEEP_CLONE_sa_EncryptedAttribute(struct zx_ctx* c, struct zxmd_sa_EncryptedAttribute_s* x, int dup_strs);
void zxmd_DUP_STRS_sa_EncryptedAttribute(struct zx_ctx* c, struct zxmd_sa_EncryptedAttribute_s* x);
void zxmd_FREE_sa_EncryptedAttribute(struct zx_ctx* c, struct zxmd_sa_EncryptedAttribute_s* x, int free_strs);
int zxmd_WALK_SO_sa_EncryptedAttribute(struct zx_ctx* c, struct zxmd_sa_EncryptedAttribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_sa_EncryptedAttribute(struct zx_ctx* c, struct zxmd_sa_EncryptedAttribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_sa_EncryptedAttribute(struct zxmd_sa_EncryptedAttribute_s* x);
char* zxmd_ENC_SO_sa_EncryptedAttribute(struct zxmd_sa_EncryptedAttribute_s* x, char* p);
char* zxmd_ENC_WO_sa_EncryptedAttribute(struct zxmd_sa_EncryptedAttribute_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_sa_EncryptedAttribute(struct zx_ctx* c, struct zxmd_sa_EncryptedAttribute_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_sa_EncryptedAttribute(struct zx_ctx* c, struct zxmd_sa_EncryptedAttribute_s* x);

struct zxmd_sa_EncryptedAttribute_s {
  ZX_ELEM_EXT
  zxmd_sa_EncryptedAttribute_EXT
  struct zxmd_xenc_EncryptedData_s* EncryptedData;	/* {1,1} nada */
  struct zxmd_xenc_EncryptedKey_s* EncryptedKey;	/* {0,-1} nada */
};

struct zxmd_xenc_EncryptedData_s* zxmd_sa_EncryptedAttribute_GET_EncryptedData(struct zxmd_sa_EncryptedAttribute_s* x, int n);
struct zxmd_xenc_EncryptedKey_s* zxmd_sa_EncryptedAttribute_GET_EncryptedKey(struct zxmd_sa_EncryptedAttribute_s* x, int n);
int zxmd_sa_EncryptedAttribute_NUM_EncryptedData(struct zxmd_sa_EncryptedAttribute_s* x);
int zxmd_sa_EncryptedAttribute_NUM_EncryptedKey(struct zxmd_sa_EncryptedAttribute_s* x);
struct zxmd_xenc_EncryptedData_s* zxmd_sa_EncryptedAttribute_POP_EncryptedData(struct zxmd_sa_EncryptedAttribute_s* x);
struct zxmd_xenc_EncryptedKey_s* zxmd_sa_EncryptedAttribute_POP_EncryptedKey(struct zxmd_sa_EncryptedAttribute_s* x);
void zxmd_sa_EncryptedAttribute_PUSH_EncryptedData(struct zxmd_sa_EncryptedAttribute_s* x, struct zxmd_xenc_EncryptedData_s* y);
void zxmd_sa_EncryptedAttribute_PUSH_EncryptedKey(struct zxmd_sa_EncryptedAttribute_s* x, struct zxmd_xenc_EncryptedKey_s* y);
void zxmd_sa_EncryptedAttribute_PUT_EncryptedData(struct zxmd_sa_EncryptedAttribute_s* x, int n, struct zxmd_xenc_EncryptedData_s* y);
void zxmd_sa_EncryptedAttribute_PUT_EncryptedKey(struct zxmd_sa_EncryptedAttribute_s* x, int n, struct zxmd_xenc_EncryptedKey_s* y);
void zxmd_sa_EncryptedAttribute_ADD_EncryptedData(struct zxmd_sa_EncryptedAttribute_s* x, int n, struct zxmd_xenc_EncryptedData_s* z);
void zxmd_sa_EncryptedAttribute_ADD_EncryptedKey(struct zxmd_sa_EncryptedAttribute_s* x, int n, struct zxmd_xenc_EncryptedKey_s* z);
void zxmd_sa_EncryptedAttribute_DEL_EncryptedData(struct zxmd_sa_EncryptedAttribute_s* x, int n);
void zxmd_sa_EncryptedAttribute_DEL_EncryptedKey(struct zxmd_sa_EncryptedAttribute_s* x, int n);
void zxmd_sa_EncryptedAttribute_REV_EncryptedData(struct zxmd_sa_EncryptedAttribute_s* x);
void zxmd_sa_EncryptedAttribute_REV_EncryptedKey(struct zxmd_sa_EncryptedAttribute_s* x);

/* -------------------------- sa_EncryptedID -------------------------- */
/* refby( zxmd_sa_SubjectConfirmation_s zxmd_sa_Subject_s ) */
#ifndef zxmd_sa_EncryptedID_EXT
#define zxmd_sa_EncryptedID_EXT
#endif

struct zxmd_sa_EncryptedID_s* zxmd_DEC_sa_EncryptedID(struct zx_ctx* c);
struct zxmd_sa_EncryptedID_s* zxmd_NEW_sa_EncryptedID(struct zx_ctx* c);
struct zxmd_sa_EncryptedID_s* zxmd_DEEP_CLONE_sa_EncryptedID(struct zx_ctx* c, struct zxmd_sa_EncryptedID_s* x, int dup_strs);
void zxmd_DUP_STRS_sa_EncryptedID(struct zx_ctx* c, struct zxmd_sa_EncryptedID_s* x);
void zxmd_FREE_sa_EncryptedID(struct zx_ctx* c, struct zxmd_sa_EncryptedID_s* x, int free_strs);
int zxmd_WALK_SO_sa_EncryptedID(struct zx_ctx* c, struct zxmd_sa_EncryptedID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_sa_EncryptedID(struct zx_ctx* c, struct zxmd_sa_EncryptedID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_sa_EncryptedID(struct zxmd_sa_EncryptedID_s* x);
char* zxmd_ENC_SO_sa_EncryptedID(struct zxmd_sa_EncryptedID_s* x, char* p);
char* zxmd_ENC_WO_sa_EncryptedID(struct zxmd_sa_EncryptedID_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_sa_EncryptedID(struct zx_ctx* c, struct zxmd_sa_EncryptedID_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_sa_EncryptedID(struct zx_ctx* c, struct zxmd_sa_EncryptedID_s* x);

struct zxmd_sa_EncryptedID_s {
  ZX_ELEM_EXT
  zxmd_sa_EncryptedID_EXT
  struct zxmd_xenc_EncryptedData_s* EncryptedData;	/* {1,1} nada */
  struct zxmd_xenc_EncryptedKey_s* EncryptedKey;	/* {0,-1} nada */
};

struct zxmd_xenc_EncryptedData_s* zxmd_sa_EncryptedID_GET_EncryptedData(struct zxmd_sa_EncryptedID_s* x, int n);
struct zxmd_xenc_EncryptedKey_s* zxmd_sa_EncryptedID_GET_EncryptedKey(struct zxmd_sa_EncryptedID_s* x, int n);
int zxmd_sa_EncryptedID_NUM_EncryptedData(struct zxmd_sa_EncryptedID_s* x);
int zxmd_sa_EncryptedID_NUM_EncryptedKey(struct zxmd_sa_EncryptedID_s* x);
struct zxmd_xenc_EncryptedData_s* zxmd_sa_EncryptedID_POP_EncryptedData(struct zxmd_sa_EncryptedID_s* x);
struct zxmd_xenc_EncryptedKey_s* zxmd_sa_EncryptedID_POP_EncryptedKey(struct zxmd_sa_EncryptedID_s* x);
void zxmd_sa_EncryptedID_PUSH_EncryptedData(struct zxmd_sa_EncryptedID_s* x, struct zxmd_xenc_EncryptedData_s* y);
void zxmd_sa_EncryptedID_PUSH_EncryptedKey(struct zxmd_sa_EncryptedID_s* x, struct zxmd_xenc_EncryptedKey_s* y);
void zxmd_sa_EncryptedID_PUT_EncryptedData(struct zxmd_sa_EncryptedID_s* x, int n, struct zxmd_xenc_EncryptedData_s* y);
void zxmd_sa_EncryptedID_PUT_EncryptedKey(struct zxmd_sa_EncryptedID_s* x, int n, struct zxmd_xenc_EncryptedKey_s* y);
void zxmd_sa_EncryptedID_ADD_EncryptedData(struct zxmd_sa_EncryptedID_s* x, int n, struct zxmd_xenc_EncryptedData_s* z);
void zxmd_sa_EncryptedID_ADD_EncryptedKey(struct zxmd_sa_EncryptedID_s* x, int n, struct zxmd_xenc_EncryptedKey_s* z);
void zxmd_sa_EncryptedID_DEL_EncryptedData(struct zxmd_sa_EncryptedID_s* x, int n);
void zxmd_sa_EncryptedID_DEL_EncryptedKey(struct zxmd_sa_EncryptedID_s* x, int n);
void zxmd_sa_EncryptedID_REV_EncryptedData(struct zxmd_sa_EncryptedID_s* x);
void zxmd_sa_EncryptedID_REV_EncryptedKey(struct zxmd_sa_EncryptedID_s* x);

/* -------------------------- sa_Evidence -------------------------- */
/* refby( zxmd_sa_AuthzDecisionStatement_s ) */
#ifndef zxmd_sa_Evidence_EXT
#define zxmd_sa_Evidence_EXT
#endif

struct zxmd_sa_Evidence_s* zxmd_DEC_sa_Evidence(struct zx_ctx* c);
struct zxmd_sa_Evidence_s* zxmd_NEW_sa_Evidence(struct zx_ctx* c);
struct zxmd_sa_Evidence_s* zxmd_DEEP_CLONE_sa_Evidence(struct zx_ctx* c, struct zxmd_sa_Evidence_s* x, int dup_strs);
void zxmd_DUP_STRS_sa_Evidence(struct zx_ctx* c, struct zxmd_sa_Evidence_s* x);
void zxmd_FREE_sa_Evidence(struct zx_ctx* c, struct zxmd_sa_Evidence_s* x, int free_strs);
int zxmd_WALK_SO_sa_Evidence(struct zx_ctx* c, struct zxmd_sa_Evidence_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_sa_Evidence(struct zx_ctx* c, struct zxmd_sa_Evidence_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_sa_Evidence(struct zxmd_sa_Evidence_s* x);
char* zxmd_ENC_SO_sa_Evidence(struct zxmd_sa_Evidence_s* x, char* p);
char* zxmd_ENC_WO_sa_Evidence(struct zxmd_sa_Evidence_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_sa_Evidence(struct zx_ctx* c, struct zxmd_sa_Evidence_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_sa_Evidence(struct zx_ctx* c, struct zxmd_sa_Evidence_s* x);

struct zxmd_sa_Evidence_s {
  ZX_ELEM_EXT
  zxmd_sa_Evidence_EXT
  struct zx_elem_s* AssertionIDRef;	/* {0,-1} xs:NCName */
  struct zx_elem_s* AssertionURIRef;	/* {0,-1} xs:anyURI */
  struct zxmd_sa_Assertion_s* Assertion;	/* {0,-1} nada */
  struct zxmd_sa_EncryptedAssertion_s* EncryptedAssertion;	/* {0,-1} nada */
};

struct zx_elem_s* zxmd_sa_Evidence_GET_AssertionIDRef(struct zxmd_sa_Evidence_s* x, int n);
struct zx_elem_s* zxmd_sa_Evidence_GET_AssertionURIRef(struct zxmd_sa_Evidence_s* x, int n);
struct zxmd_sa_Assertion_s* zxmd_sa_Evidence_GET_Assertion(struct zxmd_sa_Evidence_s* x, int n);
struct zxmd_sa_EncryptedAssertion_s* zxmd_sa_Evidence_GET_EncryptedAssertion(struct zxmd_sa_Evidence_s* x, int n);
int zxmd_sa_Evidence_NUM_AssertionIDRef(struct zxmd_sa_Evidence_s* x);
int zxmd_sa_Evidence_NUM_AssertionURIRef(struct zxmd_sa_Evidence_s* x);
int zxmd_sa_Evidence_NUM_Assertion(struct zxmd_sa_Evidence_s* x);
int zxmd_sa_Evidence_NUM_EncryptedAssertion(struct zxmd_sa_Evidence_s* x);
struct zx_elem_s* zxmd_sa_Evidence_POP_AssertionIDRef(struct zxmd_sa_Evidence_s* x);
struct zx_elem_s* zxmd_sa_Evidence_POP_AssertionURIRef(struct zxmd_sa_Evidence_s* x);
struct zxmd_sa_Assertion_s* zxmd_sa_Evidence_POP_Assertion(struct zxmd_sa_Evidence_s* x);
struct zxmd_sa_EncryptedAssertion_s* zxmd_sa_Evidence_POP_EncryptedAssertion(struct zxmd_sa_Evidence_s* x);
void zxmd_sa_Evidence_PUSH_AssertionIDRef(struct zxmd_sa_Evidence_s* x, struct zx_elem_s* y);
void zxmd_sa_Evidence_PUSH_AssertionURIRef(struct zxmd_sa_Evidence_s* x, struct zx_elem_s* y);
void zxmd_sa_Evidence_PUSH_Assertion(struct zxmd_sa_Evidence_s* x, struct zxmd_sa_Assertion_s* y);
void zxmd_sa_Evidence_PUSH_EncryptedAssertion(struct zxmd_sa_Evidence_s* x, struct zxmd_sa_EncryptedAssertion_s* y);
void zxmd_sa_Evidence_PUT_AssertionIDRef(struct zxmd_sa_Evidence_s* x, int n, struct zx_elem_s* y);
void zxmd_sa_Evidence_PUT_AssertionURIRef(struct zxmd_sa_Evidence_s* x, int n, struct zx_elem_s* y);
void zxmd_sa_Evidence_PUT_Assertion(struct zxmd_sa_Evidence_s* x, int n, struct zxmd_sa_Assertion_s* y);
void zxmd_sa_Evidence_PUT_EncryptedAssertion(struct zxmd_sa_Evidence_s* x, int n, struct zxmd_sa_EncryptedAssertion_s* y);
void zxmd_sa_Evidence_ADD_AssertionIDRef(struct zxmd_sa_Evidence_s* x, int n, struct zx_elem_s* z);
void zxmd_sa_Evidence_ADD_AssertionURIRef(struct zxmd_sa_Evidence_s* x, int n, struct zx_elem_s* z);
void zxmd_sa_Evidence_ADD_Assertion(struct zxmd_sa_Evidence_s* x, int n, struct zxmd_sa_Assertion_s* z);
void zxmd_sa_Evidence_ADD_EncryptedAssertion(struct zxmd_sa_Evidence_s* x, int n, struct zxmd_sa_EncryptedAssertion_s* z);
void zxmd_sa_Evidence_DEL_AssertionIDRef(struct zxmd_sa_Evidence_s* x, int n);
void zxmd_sa_Evidence_DEL_AssertionURIRef(struct zxmd_sa_Evidence_s* x, int n);
void zxmd_sa_Evidence_DEL_Assertion(struct zxmd_sa_Evidence_s* x, int n);
void zxmd_sa_Evidence_DEL_EncryptedAssertion(struct zxmd_sa_Evidence_s* x, int n);
void zxmd_sa_Evidence_REV_AssertionIDRef(struct zxmd_sa_Evidence_s* x);
void zxmd_sa_Evidence_REV_AssertionURIRef(struct zxmd_sa_Evidence_s* x);
void zxmd_sa_Evidence_REV_Assertion(struct zxmd_sa_Evidence_s* x);
void zxmd_sa_Evidence_REV_EncryptedAssertion(struct zxmd_sa_Evidence_s* x);

/* -------------------------- sa_Issuer -------------------------- */
/* refby( zxmd_sa_Assertion_s ) */
#ifndef zxmd_sa_Issuer_EXT
#define zxmd_sa_Issuer_EXT
#endif

struct zxmd_sa_Issuer_s* zxmd_DEC_sa_Issuer(struct zx_ctx* c);
struct zxmd_sa_Issuer_s* zxmd_NEW_sa_Issuer(struct zx_ctx* c);
struct zxmd_sa_Issuer_s* zxmd_DEEP_CLONE_sa_Issuer(struct zx_ctx* c, struct zxmd_sa_Issuer_s* x, int dup_strs);
void zxmd_DUP_STRS_sa_Issuer(struct zx_ctx* c, struct zxmd_sa_Issuer_s* x);
void zxmd_FREE_sa_Issuer(struct zx_ctx* c, struct zxmd_sa_Issuer_s* x, int free_strs);
int zxmd_WALK_SO_sa_Issuer(struct zx_ctx* c, struct zxmd_sa_Issuer_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_sa_Issuer(struct zx_ctx* c, struct zxmd_sa_Issuer_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_sa_Issuer(struct zxmd_sa_Issuer_s* x);
char* zxmd_ENC_SO_sa_Issuer(struct zxmd_sa_Issuer_s* x, char* p);
char* zxmd_ENC_WO_sa_Issuer(struct zxmd_sa_Issuer_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_sa_Issuer(struct zx_ctx* c, struct zxmd_sa_Issuer_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_sa_Issuer(struct zx_ctx* c, struct zxmd_sa_Issuer_s* x);

struct zxmd_sa_Issuer_s {
  ZX_ELEM_EXT
  zxmd_sa_Issuer_EXT
  struct zx_str_s* NameQualifier;	/* {0,1} attribute xs:string */
  struct zx_str_s* SPNameQualifier;	/* {0,1} attribute xs:string */
  struct zx_str_s* Format;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* SPProvidedID;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zxmd_sa_Issuer_GET_NameQualifier(struct zxmd_sa_Issuer_s* x);
struct zx_str_s* zxmd_sa_Issuer_GET_SPNameQualifier(struct zxmd_sa_Issuer_s* x);
struct zx_str_s* zxmd_sa_Issuer_GET_Format(struct zxmd_sa_Issuer_s* x);
struct zx_str_s* zxmd_sa_Issuer_GET_SPProvidedID(struct zxmd_sa_Issuer_s* x);
void zxmd_sa_Issuer_PUT_NameQualifier(struct zxmd_sa_Issuer_s* x, struct zx_str_s* y);
void zxmd_sa_Issuer_PUT_SPNameQualifier(struct zxmd_sa_Issuer_s* x, struct zx_str_s* y);
void zxmd_sa_Issuer_PUT_Format(struct zxmd_sa_Issuer_s* x, struct zx_str_s* y);
void zxmd_sa_Issuer_PUT_SPProvidedID(struct zxmd_sa_Issuer_s* x, struct zx_str_s* y);

/* -------------------------- sa_NameID -------------------------- */
/* refby( zxmd_sa_SubjectConfirmation_s zxmd_sa_Subject_s ) */
#ifndef zxmd_sa_NameID_EXT
#define zxmd_sa_NameID_EXT
#endif

struct zxmd_sa_NameID_s* zxmd_DEC_sa_NameID(struct zx_ctx* c);
struct zxmd_sa_NameID_s* zxmd_NEW_sa_NameID(struct zx_ctx* c);
struct zxmd_sa_NameID_s* zxmd_DEEP_CLONE_sa_NameID(struct zx_ctx* c, struct zxmd_sa_NameID_s* x, int dup_strs);
void zxmd_DUP_STRS_sa_NameID(struct zx_ctx* c, struct zxmd_sa_NameID_s* x);
void zxmd_FREE_sa_NameID(struct zx_ctx* c, struct zxmd_sa_NameID_s* x, int free_strs);
int zxmd_WALK_SO_sa_NameID(struct zx_ctx* c, struct zxmd_sa_NameID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_sa_NameID(struct zx_ctx* c, struct zxmd_sa_NameID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_sa_NameID(struct zxmd_sa_NameID_s* x);
char* zxmd_ENC_SO_sa_NameID(struct zxmd_sa_NameID_s* x, char* p);
char* zxmd_ENC_WO_sa_NameID(struct zxmd_sa_NameID_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_sa_NameID(struct zx_ctx* c, struct zxmd_sa_NameID_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_sa_NameID(struct zx_ctx* c, struct zxmd_sa_NameID_s* x);

struct zxmd_sa_NameID_s {
  ZX_ELEM_EXT
  zxmd_sa_NameID_EXT
  struct zx_str_s* NameQualifier;	/* {0,1} attribute xs:string */
  struct zx_str_s* SPNameQualifier;	/* {0,1} attribute xs:string */
  struct zx_str_s* Format;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* SPProvidedID;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zxmd_sa_NameID_GET_NameQualifier(struct zxmd_sa_NameID_s* x);
struct zx_str_s* zxmd_sa_NameID_GET_SPNameQualifier(struct zxmd_sa_NameID_s* x);
struct zx_str_s* zxmd_sa_NameID_GET_Format(struct zxmd_sa_NameID_s* x);
struct zx_str_s* zxmd_sa_NameID_GET_SPProvidedID(struct zxmd_sa_NameID_s* x);
void zxmd_sa_NameID_PUT_NameQualifier(struct zxmd_sa_NameID_s* x, struct zx_str_s* y);
void zxmd_sa_NameID_PUT_SPNameQualifier(struct zxmd_sa_NameID_s* x, struct zx_str_s* y);
void zxmd_sa_NameID_PUT_Format(struct zxmd_sa_NameID_s* x, struct zx_str_s* y);
void zxmd_sa_NameID_PUT_SPProvidedID(struct zxmd_sa_NameID_s* x, struct zx_str_s* y);

/* -------------------------- sa_OneTimeUse -------------------------- */
/* refby( zxmd_sa_Conditions_s ) */
#ifndef zxmd_sa_OneTimeUse_EXT
#define zxmd_sa_OneTimeUse_EXT
#endif

struct zxmd_sa_OneTimeUse_s* zxmd_DEC_sa_OneTimeUse(struct zx_ctx* c);
struct zxmd_sa_OneTimeUse_s* zxmd_NEW_sa_OneTimeUse(struct zx_ctx* c);
struct zxmd_sa_OneTimeUse_s* zxmd_DEEP_CLONE_sa_OneTimeUse(struct zx_ctx* c, struct zxmd_sa_OneTimeUse_s* x, int dup_strs);
void zxmd_DUP_STRS_sa_OneTimeUse(struct zx_ctx* c, struct zxmd_sa_OneTimeUse_s* x);
void zxmd_FREE_sa_OneTimeUse(struct zx_ctx* c, struct zxmd_sa_OneTimeUse_s* x, int free_strs);
int zxmd_WALK_SO_sa_OneTimeUse(struct zx_ctx* c, struct zxmd_sa_OneTimeUse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_sa_OneTimeUse(struct zx_ctx* c, struct zxmd_sa_OneTimeUse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_sa_OneTimeUse(struct zxmd_sa_OneTimeUse_s* x);
char* zxmd_ENC_SO_sa_OneTimeUse(struct zxmd_sa_OneTimeUse_s* x, char* p);
char* zxmd_ENC_WO_sa_OneTimeUse(struct zxmd_sa_OneTimeUse_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_sa_OneTimeUse(struct zx_ctx* c, struct zxmd_sa_OneTimeUse_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_sa_OneTimeUse(struct zx_ctx* c, struct zxmd_sa_OneTimeUse_s* x);

struct zxmd_sa_OneTimeUse_s {
  ZX_ELEM_EXT
  zxmd_sa_OneTimeUse_EXT
};


/* -------------------------- sa_ProxyRestriction -------------------------- */
/* refby( zxmd_sa_Conditions_s ) */
#ifndef zxmd_sa_ProxyRestriction_EXT
#define zxmd_sa_ProxyRestriction_EXT
#endif

struct zxmd_sa_ProxyRestriction_s* zxmd_DEC_sa_ProxyRestriction(struct zx_ctx* c);
struct zxmd_sa_ProxyRestriction_s* zxmd_NEW_sa_ProxyRestriction(struct zx_ctx* c);
struct zxmd_sa_ProxyRestriction_s* zxmd_DEEP_CLONE_sa_ProxyRestriction(struct zx_ctx* c, struct zxmd_sa_ProxyRestriction_s* x, int dup_strs);
void zxmd_DUP_STRS_sa_ProxyRestriction(struct zx_ctx* c, struct zxmd_sa_ProxyRestriction_s* x);
void zxmd_FREE_sa_ProxyRestriction(struct zx_ctx* c, struct zxmd_sa_ProxyRestriction_s* x, int free_strs);
int zxmd_WALK_SO_sa_ProxyRestriction(struct zx_ctx* c, struct zxmd_sa_ProxyRestriction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_sa_ProxyRestriction(struct zx_ctx* c, struct zxmd_sa_ProxyRestriction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_sa_ProxyRestriction(struct zxmd_sa_ProxyRestriction_s* x);
char* zxmd_ENC_SO_sa_ProxyRestriction(struct zxmd_sa_ProxyRestriction_s* x, char* p);
char* zxmd_ENC_WO_sa_ProxyRestriction(struct zxmd_sa_ProxyRestriction_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_sa_ProxyRestriction(struct zx_ctx* c, struct zxmd_sa_ProxyRestriction_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_sa_ProxyRestriction(struct zx_ctx* c, struct zxmd_sa_ProxyRestriction_s* x);

struct zxmd_sa_ProxyRestriction_s {
  ZX_ELEM_EXT
  zxmd_sa_ProxyRestriction_EXT
  struct zx_elem_s* Audience;	/* {0,-1} xs:anyURI */
  struct zx_str_s* Count;	/* {0,1} attribute xs:nonNegativeInteger */
};

struct zx_str_s* zxmd_sa_ProxyRestriction_GET_Count(struct zxmd_sa_ProxyRestriction_s* x);
struct zx_elem_s* zxmd_sa_ProxyRestriction_GET_Audience(struct zxmd_sa_ProxyRestriction_s* x, int n);
int zxmd_sa_ProxyRestriction_NUM_Audience(struct zxmd_sa_ProxyRestriction_s* x);
struct zx_elem_s* zxmd_sa_ProxyRestriction_POP_Audience(struct zxmd_sa_ProxyRestriction_s* x);
void zxmd_sa_ProxyRestriction_PUSH_Audience(struct zxmd_sa_ProxyRestriction_s* x, struct zx_elem_s* y);
void zxmd_sa_ProxyRestriction_PUT_Count(struct zxmd_sa_ProxyRestriction_s* x, struct zx_str_s* y);
void zxmd_sa_ProxyRestriction_PUT_Audience(struct zxmd_sa_ProxyRestriction_s* x, int n, struct zx_elem_s* y);
void zxmd_sa_ProxyRestriction_ADD_Audience(struct zxmd_sa_ProxyRestriction_s* x, int n, struct zx_elem_s* z);
void zxmd_sa_ProxyRestriction_DEL_Audience(struct zxmd_sa_ProxyRestriction_s* x, int n);
void zxmd_sa_ProxyRestriction_REV_Audience(struct zxmd_sa_ProxyRestriction_s* x);

/* -------------------------- sa_Subject -------------------------- */
/* refby( zxmd_sa_Assertion_s ) */
#ifndef zxmd_sa_Subject_EXT
#define zxmd_sa_Subject_EXT
#endif

struct zxmd_sa_Subject_s* zxmd_DEC_sa_Subject(struct zx_ctx* c);
struct zxmd_sa_Subject_s* zxmd_NEW_sa_Subject(struct zx_ctx* c);
struct zxmd_sa_Subject_s* zxmd_DEEP_CLONE_sa_Subject(struct zx_ctx* c, struct zxmd_sa_Subject_s* x, int dup_strs);
void zxmd_DUP_STRS_sa_Subject(struct zx_ctx* c, struct zxmd_sa_Subject_s* x);
void zxmd_FREE_sa_Subject(struct zx_ctx* c, struct zxmd_sa_Subject_s* x, int free_strs);
int zxmd_WALK_SO_sa_Subject(struct zx_ctx* c, struct zxmd_sa_Subject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_sa_Subject(struct zx_ctx* c, struct zxmd_sa_Subject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_sa_Subject(struct zxmd_sa_Subject_s* x);
char* zxmd_ENC_SO_sa_Subject(struct zxmd_sa_Subject_s* x, char* p);
char* zxmd_ENC_WO_sa_Subject(struct zxmd_sa_Subject_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_sa_Subject(struct zx_ctx* c, struct zxmd_sa_Subject_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_sa_Subject(struct zx_ctx* c, struct zxmd_sa_Subject_s* x);

struct zxmd_sa_Subject_s {
  ZX_ELEM_EXT
  zxmd_sa_Subject_EXT
  struct zxmd_sa_BaseID_s* BaseID;	/* {0,1} nada */
  struct zxmd_sa_NameID_s* NameID;	/* {0,1} nada */
  struct zxmd_sa_EncryptedID_s* EncryptedID;	/* {0,1} nada */
  struct zxmd_sa_SubjectConfirmation_s* SubjectConfirmation;	/* {0,-1} nada */
};

struct zxmd_sa_BaseID_s* zxmd_sa_Subject_GET_BaseID(struct zxmd_sa_Subject_s* x, int n);
struct zxmd_sa_NameID_s* zxmd_sa_Subject_GET_NameID(struct zxmd_sa_Subject_s* x, int n);
struct zxmd_sa_EncryptedID_s* zxmd_sa_Subject_GET_EncryptedID(struct zxmd_sa_Subject_s* x, int n);
struct zxmd_sa_SubjectConfirmation_s* zxmd_sa_Subject_GET_SubjectConfirmation(struct zxmd_sa_Subject_s* x, int n);
int zxmd_sa_Subject_NUM_BaseID(struct zxmd_sa_Subject_s* x);
int zxmd_sa_Subject_NUM_NameID(struct zxmd_sa_Subject_s* x);
int zxmd_sa_Subject_NUM_EncryptedID(struct zxmd_sa_Subject_s* x);
int zxmd_sa_Subject_NUM_SubjectConfirmation(struct zxmd_sa_Subject_s* x);
struct zxmd_sa_BaseID_s* zxmd_sa_Subject_POP_BaseID(struct zxmd_sa_Subject_s* x);
struct zxmd_sa_NameID_s* zxmd_sa_Subject_POP_NameID(struct zxmd_sa_Subject_s* x);
struct zxmd_sa_EncryptedID_s* zxmd_sa_Subject_POP_EncryptedID(struct zxmd_sa_Subject_s* x);
struct zxmd_sa_SubjectConfirmation_s* zxmd_sa_Subject_POP_SubjectConfirmation(struct zxmd_sa_Subject_s* x);
void zxmd_sa_Subject_PUSH_BaseID(struct zxmd_sa_Subject_s* x, struct zxmd_sa_BaseID_s* y);
void zxmd_sa_Subject_PUSH_NameID(struct zxmd_sa_Subject_s* x, struct zxmd_sa_NameID_s* y);
void zxmd_sa_Subject_PUSH_EncryptedID(struct zxmd_sa_Subject_s* x, struct zxmd_sa_EncryptedID_s* y);
void zxmd_sa_Subject_PUSH_SubjectConfirmation(struct zxmd_sa_Subject_s* x, struct zxmd_sa_SubjectConfirmation_s* y);
void zxmd_sa_Subject_PUT_BaseID(struct zxmd_sa_Subject_s* x, int n, struct zxmd_sa_BaseID_s* y);
void zxmd_sa_Subject_PUT_NameID(struct zxmd_sa_Subject_s* x, int n, struct zxmd_sa_NameID_s* y);
void zxmd_sa_Subject_PUT_EncryptedID(struct zxmd_sa_Subject_s* x, int n, struct zxmd_sa_EncryptedID_s* y);
void zxmd_sa_Subject_PUT_SubjectConfirmation(struct zxmd_sa_Subject_s* x, int n, struct zxmd_sa_SubjectConfirmation_s* y);
void zxmd_sa_Subject_ADD_BaseID(struct zxmd_sa_Subject_s* x, int n, struct zxmd_sa_BaseID_s* z);
void zxmd_sa_Subject_ADD_NameID(struct zxmd_sa_Subject_s* x, int n, struct zxmd_sa_NameID_s* z);
void zxmd_sa_Subject_ADD_EncryptedID(struct zxmd_sa_Subject_s* x, int n, struct zxmd_sa_EncryptedID_s* z);
void zxmd_sa_Subject_ADD_SubjectConfirmation(struct zxmd_sa_Subject_s* x, int n, struct zxmd_sa_SubjectConfirmation_s* z);
void zxmd_sa_Subject_DEL_BaseID(struct zxmd_sa_Subject_s* x, int n);
void zxmd_sa_Subject_DEL_NameID(struct zxmd_sa_Subject_s* x, int n);
void zxmd_sa_Subject_DEL_EncryptedID(struct zxmd_sa_Subject_s* x, int n);
void zxmd_sa_Subject_DEL_SubjectConfirmation(struct zxmd_sa_Subject_s* x, int n);
void zxmd_sa_Subject_REV_BaseID(struct zxmd_sa_Subject_s* x);
void zxmd_sa_Subject_REV_NameID(struct zxmd_sa_Subject_s* x);
void zxmd_sa_Subject_REV_EncryptedID(struct zxmd_sa_Subject_s* x);
void zxmd_sa_Subject_REV_SubjectConfirmation(struct zxmd_sa_Subject_s* x);

/* -------------------------- sa_SubjectConfirmation -------------------------- */
/* refby( zxmd_sa_Subject_s ) */
#ifndef zxmd_sa_SubjectConfirmation_EXT
#define zxmd_sa_SubjectConfirmation_EXT
#endif

struct zxmd_sa_SubjectConfirmation_s* zxmd_DEC_sa_SubjectConfirmation(struct zx_ctx* c);
struct zxmd_sa_SubjectConfirmation_s* zxmd_NEW_sa_SubjectConfirmation(struct zx_ctx* c);
struct zxmd_sa_SubjectConfirmation_s* zxmd_DEEP_CLONE_sa_SubjectConfirmation(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmation_s* x, int dup_strs);
void zxmd_DUP_STRS_sa_SubjectConfirmation(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmation_s* x);
void zxmd_FREE_sa_SubjectConfirmation(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmation_s* x, int free_strs);
int zxmd_WALK_SO_sa_SubjectConfirmation(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_sa_SubjectConfirmation(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_sa_SubjectConfirmation(struct zxmd_sa_SubjectConfirmation_s* x);
char* zxmd_ENC_SO_sa_SubjectConfirmation(struct zxmd_sa_SubjectConfirmation_s* x, char* p);
char* zxmd_ENC_WO_sa_SubjectConfirmation(struct zxmd_sa_SubjectConfirmation_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_sa_SubjectConfirmation(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmation_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_sa_SubjectConfirmation(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmation_s* x);

struct zxmd_sa_SubjectConfirmation_s {
  ZX_ELEM_EXT
  zxmd_sa_SubjectConfirmation_EXT
  struct zxmd_sa_BaseID_s* BaseID;	/* {0,1} nada */
  struct zxmd_sa_NameID_s* NameID;	/* {0,1} nada */
  struct zxmd_sa_EncryptedID_s* EncryptedID;	/* {0,1} nada */
  struct zxmd_sa_SubjectConfirmationData_s* SubjectConfirmationData;	/* {0,1} nada */
  struct zx_str_s* Method;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_sa_SubjectConfirmation_GET_Method(struct zxmd_sa_SubjectConfirmation_s* x);
struct zxmd_sa_BaseID_s* zxmd_sa_SubjectConfirmation_GET_BaseID(struct zxmd_sa_SubjectConfirmation_s* x, int n);
struct zxmd_sa_NameID_s* zxmd_sa_SubjectConfirmation_GET_NameID(struct zxmd_sa_SubjectConfirmation_s* x, int n);
struct zxmd_sa_EncryptedID_s* zxmd_sa_SubjectConfirmation_GET_EncryptedID(struct zxmd_sa_SubjectConfirmation_s* x, int n);
struct zxmd_sa_SubjectConfirmationData_s* zxmd_sa_SubjectConfirmation_GET_SubjectConfirmationData(struct zxmd_sa_SubjectConfirmation_s* x, int n);
int zxmd_sa_SubjectConfirmation_NUM_BaseID(struct zxmd_sa_SubjectConfirmation_s* x);
int zxmd_sa_SubjectConfirmation_NUM_NameID(struct zxmd_sa_SubjectConfirmation_s* x);
int zxmd_sa_SubjectConfirmation_NUM_EncryptedID(struct zxmd_sa_SubjectConfirmation_s* x);
int zxmd_sa_SubjectConfirmation_NUM_SubjectConfirmationData(struct zxmd_sa_SubjectConfirmation_s* x);
struct zxmd_sa_BaseID_s* zxmd_sa_SubjectConfirmation_POP_BaseID(struct zxmd_sa_SubjectConfirmation_s* x);
struct zxmd_sa_NameID_s* zxmd_sa_SubjectConfirmation_POP_NameID(struct zxmd_sa_SubjectConfirmation_s* x);
struct zxmd_sa_EncryptedID_s* zxmd_sa_SubjectConfirmation_POP_EncryptedID(struct zxmd_sa_SubjectConfirmation_s* x);
struct zxmd_sa_SubjectConfirmationData_s* zxmd_sa_SubjectConfirmation_POP_SubjectConfirmationData(struct zxmd_sa_SubjectConfirmation_s* x);
void zxmd_sa_SubjectConfirmation_PUSH_BaseID(struct zxmd_sa_SubjectConfirmation_s* x, struct zxmd_sa_BaseID_s* y);
void zxmd_sa_SubjectConfirmation_PUSH_NameID(struct zxmd_sa_SubjectConfirmation_s* x, struct zxmd_sa_NameID_s* y);
void zxmd_sa_SubjectConfirmation_PUSH_EncryptedID(struct zxmd_sa_SubjectConfirmation_s* x, struct zxmd_sa_EncryptedID_s* y);
void zxmd_sa_SubjectConfirmation_PUSH_SubjectConfirmationData(struct zxmd_sa_SubjectConfirmation_s* x, struct zxmd_sa_SubjectConfirmationData_s* y);
void zxmd_sa_SubjectConfirmation_PUT_Method(struct zxmd_sa_SubjectConfirmation_s* x, struct zx_str_s* y);
void zxmd_sa_SubjectConfirmation_PUT_BaseID(struct zxmd_sa_SubjectConfirmation_s* x, int n, struct zxmd_sa_BaseID_s* y);
void zxmd_sa_SubjectConfirmation_PUT_NameID(struct zxmd_sa_SubjectConfirmation_s* x, int n, struct zxmd_sa_NameID_s* y);
void zxmd_sa_SubjectConfirmation_PUT_EncryptedID(struct zxmd_sa_SubjectConfirmation_s* x, int n, struct zxmd_sa_EncryptedID_s* y);
void zxmd_sa_SubjectConfirmation_PUT_SubjectConfirmationData(struct zxmd_sa_SubjectConfirmation_s* x, int n, struct zxmd_sa_SubjectConfirmationData_s* y);
void zxmd_sa_SubjectConfirmation_ADD_BaseID(struct zxmd_sa_SubjectConfirmation_s* x, int n, struct zxmd_sa_BaseID_s* z);
void zxmd_sa_SubjectConfirmation_ADD_NameID(struct zxmd_sa_SubjectConfirmation_s* x, int n, struct zxmd_sa_NameID_s* z);
void zxmd_sa_SubjectConfirmation_ADD_EncryptedID(struct zxmd_sa_SubjectConfirmation_s* x, int n, struct zxmd_sa_EncryptedID_s* z);
void zxmd_sa_SubjectConfirmation_ADD_SubjectConfirmationData(struct zxmd_sa_SubjectConfirmation_s* x, int n, struct zxmd_sa_SubjectConfirmationData_s* z);
void zxmd_sa_SubjectConfirmation_DEL_BaseID(struct zxmd_sa_SubjectConfirmation_s* x, int n);
void zxmd_sa_SubjectConfirmation_DEL_NameID(struct zxmd_sa_SubjectConfirmation_s* x, int n);
void zxmd_sa_SubjectConfirmation_DEL_EncryptedID(struct zxmd_sa_SubjectConfirmation_s* x, int n);
void zxmd_sa_SubjectConfirmation_DEL_SubjectConfirmationData(struct zxmd_sa_SubjectConfirmation_s* x, int n);
void zxmd_sa_SubjectConfirmation_REV_BaseID(struct zxmd_sa_SubjectConfirmation_s* x);
void zxmd_sa_SubjectConfirmation_REV_NameID(struct zxmd_sa_SubjectConfirmation_s* x);
void zxmd_sa_SubjectConfirmation_REV_EncryptedID(struct zxmd_sa_SubjectConfirmation_s* x);
void zxmd_sa_SubjectConfirmation_REV_SubjectConfirmationData(struct zxmd_sa_SubjectConfirmation_s* x);

/* -------------------------- sa_SubjectConfirmationData -------------------------- */
/* refby( zxmd_sa_SubjectConfirmation_s ) */
#ifndef zxmd_sa_SubjectConfirmationData_EXT
#define zxmd_sa_SubjectConfirmationData_EXT
#endif

struct zxmd_sa_SubjectConfirmationData_s* zxmd_DEC_sa_SubjectConfirmationData(struct zx_ctx* c);
struct zxmd_sa_SubjectConfirmationData_s* zxmd_NEW_sa_SubjectConfirmationData(struct zx_ctx* c);
struct zxmd_sa_SubjectConfirmationData_s* zxmd_DEEP_CLONE_sa_SubjectConfirmationData(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmationData_s* x, int dup_strs);
void zxmd_DUP_STRS_sa_SubjectConfirmationData(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmationData_s* x);
void zxmd_FREE_sa_SubjectConfirmationData(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmationData_s* x, int free_strs);
int zxmd_WALK_SO_sa_SubjectConfirmationData(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmationData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_sa_SubjectConfirmationData(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmationData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_sa_SubjectConfirmationData(struct zxmd_sa_SubjectConfirmationData_s* x);
char* zxmd_ENC_SO_sa_SubjectConfirmationData(struct zxmd_sa_SubjectConfirmationData_s* x, char* p);
char* zxmd_ENC_WO_sa_SubjectConfirmationData(struct zxmd_sa_SubjectConfirmationData_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_sa_SubjectConfirmationData(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmationData_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_sa_SubjectConfirmationData(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmationData_s* x);

struct zxmd_sa_SubjectConfirmationData_s {
  ZX_ELEM_EXT
  zxmd_sa_SubjectConfirmationData_EXT
  struct zx_str_s* NotBefore;	/* {0,1} attribute xs:dateTime */
  struct zx_str_s* NotOnOrAfter;	/* {0,1} attribute xs:dateTime */
  struct zx_str_s* Recipient;	/* {0,1} attribute xs:string */
  struct zx_str_s* InResponseTo;	/* {0,1} attribute xs:NCName */
  struct zx_str_s* Address;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zxmd_sa_SubjectConfirmationData_GET_NotBefore(struct zxmd_sa_SubjectConfirmationData_s* x);
struct zx_str_s* zxmd_sa_SubjectConfirmationData_GET_NotOnOrAfter(struct zxmd_sa_SubjectConfirmationData_s* x);
struct zx_str_s* zxmd_sa_SubjectConfirmationData_GET_Recipient(struct zxmd_sa_SubjectConfirmationData_s* x);
struct zx_str_s* zxmd_sa_SubjectConfirmationData_GET_InResponseTo(struct zxmd_sa_SubjectConfirmationData_s* x);
struct zx_str_s* zxmd_sa_SubjectConfirmationData_GET_Address(struct zxmd_sa_SubjectConfirmationData_s* x);
void zxmd_sa_SubjectConfirmationData_PUT_NotBefore(struct zxmd_sa_SubjectConfirmationData_s* x, struct zx_str_s* y);
void zxmd_sa_SubjectConfirmationData_PUT_NotOnOrAfter(struct zxmd_sa_SubjectConfirmationData_s* x, struct zx_str_s* y);
void zxmd_sa_SubjectConfirmationData_PUT_Recipient(struct zxmd_sa_SubjectConfirmationData_s* x, struct zx_str_s* y);
void zxmd_sa_SubjectConfirmationData_PUT_InResponseTo(struct zxmd_sa_SubjectConfirmationData_s* x, struct zx_str_s* y);
void zxmd_sa_SubjectConfirmationData_PUT_Address(struct zxmd_sa_SubjectConfirmationData_s* x, struct zx_str_s* y);

/* -------------------------- sa_SubjectLocality -------------------------- */
/* refby( zxmd_sa_AuthnStatement_s ) */
#ifndef zxmd_sa_SubjectLocality_EXT
#define zxmd_sa_SubjectLocality_EXT
#endif

struct zxmd_sa_SubjectLocality_s* zxmd_DEC_sa_SubjectLocality(struct zx_ctx* c);
struct zxmd_sa_SubjectLocality_s* zxmd_NEW_sa_SubjectLocality(struct zx_ctx* c);
struct zxmd_sa_SubjectLocality_s* zxmd_DEEP_CLONE_sa_SubjectLocality(struct zx_ctx* c, struct zxmd_sa_SubjectLocality_s* x, int dup_strs);
void zxmd_DUP_STRS_sa_SubjectLocality(struct zx_ctx* c, struct zxmd_sa_SubjectLocality_s* x);
void zxmd_FREE_sa_SubjectLocality(struct zx_ctx* c, struct zxmd_sa_SubjectLocality_s* x, int free_strs);
int zxmd_WALK_SO_sa_SubjectLocality(struct zx_ctx* c, struct zxmd_sa_SubjectLocality_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_sa_SubjectLocality(struct zx_ctx* c, struct zxmd_sa_SubjectLocality_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_sa_SubjectLocality(struct zxmd_sa_SubjectLocality_s* x);
char* zxmd_ENC_SO_sa_SubjectLocality(struct zxmd_sa_SubjectLocality_s* x, char* p);
char* zxmd_ENC_WO_sa_SubjectLocality(struct zxmd_sa_SubjectLocality_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_sa_SubjectLocality(struct zx_ctx* c, struct zxmd_sa_SubjectLocality_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_sa_SubjectLocality(struct zx_ctx* c, struct zxmd_sa_SubjectLocality_s* x);

struct zxmd_sa_SubjectLocality_s {
  ZX_ELEM_EXT
  zxmd_sa_SubjectLocality_EXT
  struct zx_str_s* Address;	/* {0,1} attribute xs:string */
  struct zx_str_s* DNSName;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zxmd_sa_SubjectLocality_GET_Address(struct zxmd_sa_SubjectLocality_s* x);
struct zx_str_s* zxmd_sa_SubjectLocality_GET_DNSName(struct zxmd_sa_SubjectLocality_s* x);
void zxmd_sa_SubjectLocality_PUT_Address(struct zxmd_sa_SubjectLocality_s* x, struct zx_str_s* y);
void zxmd_sa_SubjectLocality_PUT_DNSName(struct zxmd_sa_SubjectLocality_s* x, struct zx_str_s* y);

/* -------------------------- sa_TestElem -------------------------- */
/* refby( ) */
#ifndef zxmd_sa_TestElem_EXT
#define zxmd_sa_TestElem_EXT
#endif

struct zxmd_sa_TestElem_s* zxmd_DEC_sa_TestElem(struct zx_ctx* c);
struct zxmd_sa_TestElem_s* zxmd_NEW_sa_TestElem(struct zx_ctx* c);
struct zxmd_sa_TestElem_s* zxmd_DEEP_CLONE_sa_TestElem(struct zx_ctx* c, struct zxmd_sa_TestElem_s* x, int dup_strs);
void zxmd_DUP_STRS_sa_TestElem(struct zx_ctx* c, struct zxmd_sa_TestElem_s* x);
void zxmd_FREE_sa_TestElem(struct zx_ctx* c, struct zxmd_sa_TestElem_s* x, int free_strs);
int zxmd_WALK_SO_sa_TestElem(struct zx_ctx* c, struct zxmd_sa_TestElem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_sa_TestElem(struct zx_ctx* c, struct zxmd_sa_TestElem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_sa_TestElem(struct zxmd_sa_TestElem_s* x);
char* zxmd_ENC_SO_sa_TestElem(struct zxmd_sa_TestElem_s* x, char* p);
char* zxmd_ENC_WO_sa_TestElem(struct zxmd_sa_TestElem_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_sa_TestElem(struct zx_ctx* c, struct zxmd_sa_TestElem_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_sa_TestElem(struct zx_ctx* c, struct zxmd_sa_TestElem_s* x);

struct zxmd_sa_TestElem_s {
  ZX_ELEM_EXT
  zxmd_sa_TestElem_EXT
  struct zx_elem_s* AttributeValue;	/* {0,-1} xs:anyType */
};

struct zx_elem_s* zxmd_sa_TestElem_GET_AttributeValue(struct zxmd_sa_TestElem_s* x, int n);
int zxmd_sa_TestElem_NUM_AttributeValue(struct zxmd_sa_TestElem_s* x);
struct zx_elem_s* zxmd_sa_TestElem_POP_AttributeValue(struct zxmd_sa_TestElem_s* x);
void zxmd_sa_TestElem_PUSH_AttributeValue(struct zxmd_sa_TestElem_s* x, struct zx_elem_s* y);
void zxmd_sa_TestElem_PUT_AttributeValue(struct zxmd_sa_TestElem_s* x, int n, struct zx_elem_s* y);
void zxmd_sa_TestElem_ADD_AttributeValue(struct zxmd_sa_TestElem_s* x, int n, struct zx_elem_s* z);
void zxmd_sa_TestElem_DEL_AttributeValue(struct zxmd_sa_TestElem_s* x, int n);
void zxmd_sa_TestElem_REV_AttributeValue(struct zxmd_sa_TestElem_s* x);

/* -------------------------- xenc_AgreementMethod -------------------------- */
/* refby( ) */
#ifndef zxmd_xenc_AgreementMethod_EXT
#define zxmd_xenc_AgreementMethod_EXT
#endif

struct zxmd_xenc_AgreementMethod_s* zxmd_DEC_xenc_AgreementMethod(struct zx_ctx* c);
struct zxmd_xenc_AgreementMethod_s* zxmd_NEW_xenc_AgreementMethod(struct zx_ctx* c);
struct zxmd_xenc_AgreementMethod_s* zxmd_DEEP_CLONE_xenc_AgreementMethod(struct zx_ctx* c, struct zxmd_xenc_AgreementMethod_s* x, int dup_strs);
void zxmd_DUP_STRS_xenc_AgreementMethod(struct zx_ctx* c, struct zxmd_xenc_AgreementMethod_s* x);
void zxmd_FREE_xenc_AgreementMethod(struct zx_ctx* c, struct zxmd_xenc_AgreementMethod_s* x, int free_strs);
int zxmd_WALK_SO_xenc_AgreementMethod(struct zx_ctx* c, struct zxmd_xenc_AgreementMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_xenc_AgreementMethod(struct zx_ctx* c, struct zxmd_xenc_AgreementMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_xenc_AgreementMethod(struct zxmd_xenc_AgreementMethod_s* x);
char* zxmd_ENC_SO_xenc_AgreementMethod(struct zxmd_xenc_AgreementMethod_s* x, char* p);
char* zxmd_ENC_WO_xenc_AgreementMethod(struct zxmd_xenc_AgreementMethod_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_xenc_AgreementMethod(struct zx_ctx* c, struct zxmd_xenc_AgreementMethod_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_xenc_AgreementMethod(struct zx_ctx* c, struct zxmd_xenc_AgreementMethod_s* x);

struct zxmd_xenc_AgreementMethod_s {
  ZX_ELEM_EXT
  zxmd_xenc_AgreementMethod_EXT
  struct zx_elem_s* KA_Nonce;	/* {0,1} xs:base64Binary */
  struct zxmd_xenc_OriginatorKeyInfo_s* OriginatorKeyInfo;	/* {0,1}  */
  struct zxmd_xenc_RecipientKeyInfo_s* RecipientKeyInfo;	/* {0,1}  */
  struct zx_str_s* Algorithm;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_xenc_AgreementMethod_GET_Algorithm(struct zxmd_xenc_AgreementMethod_s* x);
struct zx_elem_s* zxmd_xenc_AgreementMethod_GET_KA_Nonce(struct zxmd_xenc_AgreementMethod_s* x, int n);
struct zxmd_xenc_OriginatorKeyInfo_s* zxmd_xenc_AgreementMethod_GET_OriginatorKeyInfo(struct zxmd_xenc_AgreementMethod_s* x, int n);
struct zxmd_xenc_RecipientKeyInfo_s* zxmd_xenc_AgreementMethod_GET_RecipientKeyInfo(struct zxmd_xenc_AgreementMethod_s* x, int n);
int zxmd_xenc_AgreementMethod_NUM_KA_Nonce(struct zxmd_xenc_AgreementMethod_s* x);
int zxmd_xenc_AgreementMethod_NUM_OriginatorKeyInfo(struct zxmd_xenc_AgreementMethod_s* x);
int zxmd_xenc_AgreementMethod_NUM_RecipientKeyInfo(struct zxmd_xenc_AgreementMethod_s* x);
struct zx_elem_s* zxmd_xenc_AgreementMethod_POP_KA_Nonce(struct zxmd_xenc_AgreementMethod_s* x);
struct zxmd_xenc_OriginatorKeyInfo_s* zxmd_xenc_AgreementMethod_POP_OriginatorKeyInfo(struct zxmd_xenc_AgreementMethod_s* x);
struct zxmd_xenc_RecipientKeyInfo_s* zxmd_xenc_AgreementMethod_POP_RecipientKeyInfo(struct zxmd_xenc_AgreementMethod_s* x);
void zxmd_xenc_AgreementMethod_PUSH_KA_Nonce(struct zxmd_xenc_AgreementMethod_s* x, struct zx_elem_s* y);
void zxmd_xenc_AgreementMethod_PUSH_OriginatorKeyInfo(struct zxmd_xenc_AgreementMethod_s* x, struct zxmd_xenc_OriginatorKeyInfo_s* y);
void zxmd_xenc_AgreementMethod_PUSH_RecipientKeyInfo(struct zxmd_xenc_AgreementMethod_s* x, struct zxmd_xenc_RecipientKeyInfo_s* y);
void zxmd_xenc_AgreementMethod_PUT_Algorithm(struct zxmd_xenc_AgreementMethod_s* x, struct zx_str_s* y);
void zxmd_xenc_AgreementMethod_PUT_KA_Nonce(struct zxmd_xenc_AgreementMethod_s* x, int n, struct zx_elem_s* y);
void zxmd_xenc_AgreementMethod_PUT_OriginatorKeyInfo(struct zxmd_xenc_AgreementMethod_s* x, int n, struct zxmd_xenc_OriginatorKeyInfo_s* y);
void zxmd_xenc_AgreementMethod_PUT_RecipientKeyInfo(struct zxmd_xenc_AgreementMethod_s* x, int n, struct zxmd_xenc_RecipientKeyInfo_s* y);
void zxmd_xenc_AgreementMethod_ADD_KA_Nonce(struct zxmd_xenc_AgreementMethod_s* x, int n, struct zx_elem_s* z);
void zxmd_xenc_AgreementMethod_ADD_OriginatorKeyInfo(struct zxmd_xenc_AgreementMethod_s* x, int n, struct zxmd_xenc_OriginatorKeyInfo_s* z);
void zxmd_xenc_AgreementMethod_ADD_RecipientKeyInfo(struct zxmd_xenc_AgreementMethod_s* x, int n, struct zxmd_xenc_RecipientKeyInfo_s* z);
void zxmd_xenc_AgreementMethod_DEL_KA_Nonce(struct zxmd_xenc_AgreementMethod_s* x, int n);
void zxmd_xenc_AgreementMethod_DEL_OriginatorKeyInfo(struct zxmd_xenc_AgreementMethod_s* x, int n);
void zxmd_xenc_AgreementMethod_DEL_RecipientKeyInfo(struct zxmd_xenc_AgreementMethod_s* x, int n);
void zxmd_xenc_AgreementMethod_REV_KA_Nonce(struct zxmd_xenc_AgreementMethod_s* x);
void zxmd_xenc_AgreementMethod_REV_OriginatorKeyInfo(struct zxmd_xenc_AgreementMethod_s* x);
void zxmd_xenc_AgreementMethod_REV_RecipientKeyInfo(struct zxmd_xenc_AgreementMethod_s* x);

/* -------------------------- xenc_CipherData -------------------------- */
/* refby( zxmd_xenc_EncryptedData_s zxmd_xenc_EncryptedKey_s ) */
#ifndef zxmd_xenc_CipherData_EXT
#define zxmd_xenc_CipherData_EXT
#endif

struct zxmd_xenc_CipherData_s* zxmd_DEC_xenc_CipherData(struct zx_ctx* c);
struct zxmd_xenc_CipherData_s* zxmd_NEW_xenc_CipherData(struct zx_ctx* c);
struct zxmd_xenc_CipherData_s* zxmd_DEEP_CLONE_xenc_CipherData(struct zx_ctx* c, struct zxmd_xenc_CipherData_s* x, int dup_strs);
void zxmd_DUP_STRS_xenc_CipherData(struct zx_ctx* c, struct zxmd_xenc_CipherData_s* x);
void zxmd_FREE_xenc_CipherData(struct zx_ctx* c, struct zxmd_xenc_CipherData_s* x, int free_strs);
int zxmd_WALK_SO_xenc_CipherData(struct zx_ctx* c, struct zxmd_xenc_CipherData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_xenc_CipherData(struct zx_ctx* c, struct zxmd_xenc_CipherData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_xenc_CipherData(struct zxmd_xenc_CipherData_s* x);
char* zxmd_ENC_SO_xenc_CipherData(struct zxmd_xenc_CipherData_s* x, char* p);
char* zxmd_ENC_WO_xenc_CipherData(struct zxmd_xenc_CipherData_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_xenc_CipherData(struct zx_ctx* c, struct zxmd_xenc_CipherData_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_xenc_CipherData(struct zx_ctx* c, struct zxmd_xenc_CipherData_s* x);

struct zxmd_xenc_CipherData_s {
  ZX_ELEM_EXT
  zxmd_xenc_CipherData_EXT
  struct zx_elem_s* CipherValue;	/* {0,1} xs:base64Binary */
  struct zxmd_xenc_CipherReference_s* CipherReference;	/* {0,1} nada */
};

struct zx_elem_s* zxmd_xenc_CipherData_GET_CipherValue(struct zxmd_xenc_CipherData_s* x, int n);
struct zxmd_xenc_CipherReference_s* zxmd_xenc_CipherData_GET_CipherReference(struct zxmd_xenc_CipherData_s* x, int n);
int zxmd_xenc_CipherData_NUM_CipherValue(struct zxmd_xenc_CipherData_s* x);
int zxmd_xenc_CipherData_NUM_CipherReference(struct zxmd_xenc_CipherData_s* x);
struct zx_elem_s* zxmd_xenc_CipherData_POP_CipherValue(struct zxmd_xenc_CipherData_s* x);
struct zxmd_xenc_CipherReference_s* zxmd_xenc_CipherData_POP_CipherReference(struct zxmd_xenc_CipherData_s* x);
void zxmd_xenc_CipherData_PUSH_CipherValue(struct zxmd_xenc_CipherData_s* x, struct zx_elem_s* y);
void zxmd_xenc_CipherData_PUSH_CipherReference(struct zxmd_xenc_CipherData_s* x, struct zxmd_xenc_CipherReference_s* y);
void zxmd_xenc_CipherData_PUT_CipherValue(struct zxmd_xenc_CipherData_s* x, int n, struct zx_elem_s* y);
void zxmd_xenc_CipherData_PUT_CipherReference(struct zxmd_xenc_CipherData_s* x, int n, struct zxmd_xenc_CipherReference_s* y);
void zxmd_xenc_CipherData_ADD_CipherValue(struct zxmd_xenc_CipherData_s* x, int n, struct zx_elem_s* z);
void zxmd_xenc_CipherData_ADD_CipherReference(struct zxmd_xenc_CipherData_s* x, int n, struct zxmd_xenc_CipherReference_s* z);
void zxmd_xenc_CipherData_DEL_CipherValue(struct zxmd_xenc_CipherData_s* x, int n);
void zxmd_xenc_CipherData_DEL_CipherReference(struct zxmd_xenc_CipherData_s* x, int n);
void zxmd_xenc_CipherData_REV_CipherValue(struct zxmd_xenc_CipherData_s* x);
void zxmd_xenc_CipherData_REV_CipherReference(struct zxmd_xenc_CipherData_s* x);

/* -------------------------- xenc_CipherReference -------------------------- */
/* refby( zxmd_xenc_CipherData_s ) */
#ifndef zxmd_xenc_CipherReference_EXT
#define zxmd_xenc_CipherReference_EXT
#endif

struct zxmd_xenc_CipherReference_s* zxmd_DEC_xenc_CipherReference(struct zx_ctx* c);
struct zxmd_xenc_CipherReference_s* zxmd_NEW_xenc_CipherReference(struct zx_ctx* c);
struct zxmd_xenc_CipherReference_s* zxmd_DEEP_CLONE_xenc_CipherReference(struct zx_ctx* c, struct zxmd_xenc_CipherReference_s* x, int dup_strs);
void zxmd_DUP_STRS_xenc_CipherReference(struct zx_ctx* c, struct zxmd_xenc_CipherReference_s* x);
void zxmd_FREE_xenc_CipherReference(struct zx_ctx* c, struct zxmd_xenc_CipherReference_s* x, int free_strs);
int zxmd_WALK_SO_xenc_CipherReference(struct zx_ctx* c, struct zxmd_xenc_CipherReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_xenc_CipherReference(struct zx_ctx* c, struct zxmd_xenc_CipherReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_xenc_CipherReference(struct zxmd_xenc_CipherReference_s* x);
char* zxmd_ENC_SO_xenc_CipherReference(struct zxmd_xenc_CipherReference_s* x, char* p);
char* zxmd_ENC_WO_xenc_CipherReference(struct zxmd_xenc_CipherReference_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_xenc_CipherReference(struct zx_ctx* c, struct zxmd_xenc_CipherReference_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_xenc_CipherReference(struct zx_ctx* c, struct zxmd_xenc_CipherReference_s* x);

struct zxmd_xenc_CipherReference_s {
  ZX_ELEM_EXT
  zxmd_xenc_CipherReference_EXT
  struct zxmd_xenc_Transforms_s* Transforms;	/* {0,1}  */
  struct zx_str_s* URI;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_xenc_CipherReference_GET_URI(struct zxmd_xenc_CipherReference_s* x);
struct zxmd_xenc_Transforms_s* zxmd_xenc_CipherReference_GET_Transforms(struct zxmd_xenc_CipherReference_s* x, int n);
int zxmd_xenc_CipherReference_NUM_Transforms(struct zxmd_xenc_CipherReference_s* x);
struct zxmd_xenc_Transforms_s* zxmd_xenc_CipherReference_POP_Transforms(struct zxmd_xenc_CipherReference_s* x);
void zxmd_xenc_CipherReference_PUSH_Transforms(struct zxmd_xenc_CipherReference_s* x, struct zxmd_xenc_Transforms_s* y);
void zxmd_xenc_CipherReference_PUT_URI(struct zxmd_xenc_CipherReference_s* x, struct zx_str_s* y);
void zxmd_xenc_CipherReference_PUT_Transforms(struct zxmd_xenc_CipherReference_s* x, int n, struct zxmd_xenc_Transforms_s* y);
void zxmd_xenc_CipherReference_ADD_Transforms(struct zxmd_xenc_CipherReference_s* x, int n, struct zxmd_xenc_Transforms_s* z);
void zxmd_xenc_CipherReference_DEL_Transforms(struct zxmd_xenc_CipherReference_s* x, int n);
void zxmd_xenc_CipherReference_REV_Transforms(struct zxmd_xenc_CipherReference_s* x);

/* -------------------------- xenc_DataReference -------------------------- */
/* refby( zxmd_xenc_ReferenceList_s ) */
#ifndef zxmd_xenc_DataReference_EXT
#define zxmd_xenc_DataReference_EXT
#endif

struct zxmd_xenc_DataReference_s* zxmd_DEC_xenc_DataReference(struct zx_ctx* c);
struct zxmd_xenc_DataReference_s* zxmd_NEW_xenc_DataReference(struct zx_ctx* c);
struct zxmd_xenc_DataReference_s* zxmd_DEEP_CLONE_xenc_DataReference(struct zx_ctx* c, struct zxmd_xenc_DataReference_s* x, int dup_strs);
void zxmd_DUP_STRS_xenc_DataReference(struct zx_ctx* c, struct zxmd_xenc_DataReference_s* x);
void zxmd_FREE_xenc_DataReference(struct zx_ctx* c, struct zxmd_xenc_DataReference_s* x, int free_strs);
int zxmd_WALK_SO_xenc_DataReference(struct zx_ctx* c, struct zxmd_xenc_DataReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_xenc_DataReference(struct zx_ctx* c, struct zxmd_xenc_DataReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_xenc_DataReference(struct zxmd_xenc_DataReference_s* x);
char* zxmd_ENC_SO_xenc_DataReference(struct zxmd_xenc_DataReference_s* x, char* p);
char* zxmd_ENC_WO_xenc_DataReference(struct zxmd_xenc_DataReference_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_xenc_DataReference(struct zx_ctx* c, struct zxmd_xenc_DataReference_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_xenc_DataReference(struct zx_ctx* c, struct zxmd_xenc_DataReference_s* x);

struct zxmd_xenc_DataReference_s {
  ZX_ELEM_EXT
  zxmd_xenc_DataReference_EXT
  struct zx_str_s* URI;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_xenc_DataReference_GET_URI(struct zxmd_xenc_DataReference_s* x);
void zxmd_xenc_DataReference_PUT_URI(struct zxmd_xenc_DataReference_s* x, struct zx_str_s* y);

/* -------------------------- xenc_EncryptedData -------------------------- */
/* refby( zxmd_sa_EncryptedID_s zxmd_sa_EncryptedAttribute_s zxmd_sa_EncryptedAssertion_s ) */
#ifndef zxmd_xenc_EncryptedData_EXT
#define zxmd_xenc_EncryptedData_EXT
#endif

struct zxmd_xenc_EncryptedData_s* zxmd_DEC_xenc_EncryptedData(struct zx_ctx* c);
struct zxmd_xenc_EncryptedData_s* zxmd_NEW_xenc_EncryptedData(struct zx_ctx* c);
struct zxmd_xenc_EncryptedData_s* zxmd_DEEP_CLONE_xenc_EncryptedData(struct zx_ctx* c, struct zxmd_xenc_EncryptedData_s* x, int dup_strs);
void zxmd_DUP_STRS_xenc_EncryptedData(struct zx_ctx* c, struct zxmd_xenc_EncryptedData_s* x);
void zxmd_FREE_xenc_EncryptedData(struct zx_ctx* c, struct zxmd_xenc_EncryptedData_s* x, int free_strs);
int zxmd_WALK_SO_xenc_EncryptedData(struct zx_ctx* c, struct zxmd_xenc_EncryptedData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_xenc_EncryptedData(struct zx_ctx* c, struct zxmd_xenc_EncryptedData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_xenc_EncryptedData(struct zxmd_xenc_EncryptedData_s* x);
char* zxmd_ENC_SO_xenc_EncryptedData(struct zxmd_xenc_EncryptedData_s* x, char* p);
char* zxmd_ENC_WO_xenc_EncryptedData(struct zxmd_xenc_EncryptedData_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_xenc_EncryptedData(struct zx_ctx* c, struct zxmd_xenc_EncryptedData_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_xenc_EncryptedData(struct zx_ctx* c, struct zxmd_xenc_EncryptedData_s* x);

struct zxmd_xenc_EncryptedData_s {
  ZX_ELEM_EXT
  zxmd_xenc_EncryptedData_EXT
  struct zxmd_xenc_EncryptionMethod_s* EncryptionMethod;	/* {0,1}  */
  struct zxmd_ds_KeyInfo_s* KeyInfo;	/* {0,1} nada */
  struct zxmd_xenc_CipherData_s* CipherData;	/* {1,1} nada */
  struct zxmd_xenc_EncryptionProperties_s* EncryptionProperties;	/* {0,1} nada */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
  struct zx_str_s* Type;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* MimeType;	/* {0,1} attribute xs:string */
  struct zx_str_s* Encoding;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_xenc_EncryptedData_GET_Id(struct zxmd_xenc_EncryptedData_s* x);
struct zx_str_s* zxmd_xenc_EncryptedData_GET_Type(struct zxmd_xenc_EncryptedData_s* x);
struct zx_str_s* zxmd_xenc_EncryptedData_GET_MimeType(struct zxmd_xenc_EncryptedData_s* x);
struct zx_str_s* zxmd_xenc_EncryptedData_GET_Encoding(struct zxmd_xenc_EncryptedData_s* x);
struct zxmd_xenc_EncryptionMethod_s* zxmd_xenc_EncryptedData_GET_EncryptionMethod(struct zxmd_xenc_EncryptedData_s* x, int n);
struct zxmd_ds_KeyInfo_s* zxmd_xenc_EncryptedData_GET_KeyInfo(struct zxmd_xenc_EncryptedData_s* x, int n);
struct zxmd_xenc_CipherData_s* zxmd_xenc_EncryptedData_GET_CipherData(struct zxmd_xenc_EncryptedData_s* x, int n);
struct zxmd_xenc_EncryptionProperties_s* zxmd_xenc_EncryptedData_GET_EncryptionProperties(struct zxmd_xenc_EncryptedData_s* x, int n);
int zxmd_xenc_EncryptedData_NUM_EncryptionMethod(struct zxmd_xenc_EncryptedData_s* x);
int zxmd_xenc_EncryptedData_NUM_KeyInfo(struct zxmd_xenc_EncryptedData_s* x);
int zxmd_xenc_EncryptedData_NUM_CipherData(struct zxmd_xenc_EncryptedData_s* x);
int zxmd_xenc_EncryptedData_NUM_EncryptionProperties(struct zxmd_xenc_EncryptedData_s* x);
struct zxmd_xenc_EncryptionMethod_s* zxmd_xenc_EncryptedData_POP_EncryptionMethod(struct zxmd_xenc_EncryptedData_s* x);
struct zxmd_ds_KeyInfo_s* zxmd_xenc_EncryptedData_POP_KeyInfo(struct zxmd_xenc_EncryptedData_s* x);
struct zxmd_xenc_CipherData_s* zxmd_xenc_EncryptedData_POP_CipherData(struct zxmd_xenc_EncryptedData_s* x);
struct zxmd_xenc_EncryptionProperties_s* zxmd_xenc_EncryptedData_POP_EncryptionProperties(struct zxmd_xenc_EncryptedData_s* x);
void zxmd_xenc_EncryptedData_PUSH_EncryptionMethod(struct zxmd_xenc_EncryptedData_s* x, struct zxmd_xenc_EncryptionMethod_s* y);
void zxmd_xenc_EncryptedData_PUSH_KeyInfo(struct zxmd_xenc_EncryptedData_s* x, struct zxmd_ds_KeyInfo_s* y);
void zxmd_xenc_EncryptedData_PUSH_CipherData(struct zxmd_xenc_EncryptedData_s* x, struct zxmd_xenc_CipherData_s* y);
void zxmd_xenc_EncryptedData_PUSH_EncryptionProperties(struct zxmd_xenc_EncryptedData_s* x, struct zxmd_xenc_EncryptionProperties_s* y);
void zxmd_xenc_EncryptedData_PUT_Id(struct zxmd_xenc_EncryptedData_s* x, struct zx_str_s* y);
void zxmd_xenc_EncryptedData_PUT_Type(struct zxmd_xenc_EncryptedData_s* x, struct zx_str_s* y);
void zxmd_xenc_EncryptedData_PUT_MimeType(struct zxmd_xenc_EncryptedData_s* x, struct zx_str_s* y);
void zxmd_xenc_EncryptedData_PUT_Encoding(struct zxmd_xenc_EncryptedData_s* x, struct zx_str_s* y);
void zxmd_xenc_EncryptedData_PUT_EncryptionMethod(struct zxmd_xenc_EncryptedData_s* x, int n, struct zxmd_xenc_EncryptionMethod_s* y);
void zxmd_xenc_EncryptedData_PUT_KeyInfo(struct zxmd_xenc_EncryptedData_s* x, int n, struct zxmd_ds_KeyInfo_s* y);
void zxmd_xenc_EncryptedData_PUT_CipherData(struct zxmd_xenc_EncryptedData_s* x, int n, struct zxmd_xenc_CipherData_s* y);
void zxmd_xenc_EncryptedData_PUT_EncryptionProperties(struct zxmd_xenc_EncryptedData_s* x, int n, struct zxmd_xenc_EncryptionProperties_s* y);
void zxmd_xenc_EncryptedData_ADD_EncryptionMethod(struct zxmd_xenc_EncryptedData_s* x, int n, struct zxmd_xenc_EncryptionMethod_s* z);
void zxmd_xenc_EncryptedData_ADD_KeyInfo(struct zxmd_xenc_EncryptedData_s* x, int n, struct zxmd_ds_KeyInfo_s* z);
void zxmd_xenc_EncryptedData_ADD_CipherData(struct zxmd_xenc_EncryptedData_s* x, int n, struct zxmd_xenc_CipherData_s* z);
void zxmd_xenc_EncryptedData_ADD_EncryptionProperties(struct zxmd_xenc_EncryptedData_s* x, int n, struct zxmd_xenc_EncryptionProperties_s* z);
void zxmd_xenc_EncryptedData_DEL_EncryptionMethod(struct zxmd_xenc_EncryptedData_s* x, int n);
void zxmd_xenc_EncryptedData_DEL_KeyInfo(struct zxmd_xenc_EncryptedData_s* x, int n);
void zxmd_xenc_EncryptedData_DEL_CipherData(struct zxmd_xenc_EncryptedData_s* x, int n);
void zxmd_xenc_EncryptedData_DEL_EncryptionProperties(struct zxmd_xenc_EncryptedData_s* x, int n);
void zxmd_xenc_EncryptedData_REV_EncryptionMethod(struct zxmd_xenc_EncryptedData_s* x);
void zxmd_xenc_EncryptedData_REV_KeyInfo(struct zxmd_xenc_EncryptedData_s* x);
void zxmd_xenc_EncryptedData_REV_CipherData(struct zxmd_xenc_EncryptedData_s* x);
void zxmd_xenc_EncryptedData_REV_EncryptionProperties(struct zxmd_xenc_EncryptedData_s* x);

/* -------------------------- xenc_EncryptedKey -------------------------- */
/* refby( zxmd_sa_EncryptedID_s zxmd_sa_EncryptedAttribute_s zxmd_sa_EncryptedAssertion_s ) */
#ifndef zxmd_xenc_EncryptedKey_EXT
#define zxmd_xenc_EncryptedKey_EXT
#endif

struct zxmd_xenc_EncryptedKey_s* zxmd_DEC_xenc_EncryptedKey(struct zx_ctx* c);
struct zxmd_xenc_EncryptedKey_s* zxmd_NEW_xenc_EncryptedKey(struct zx_ctx* c);
struct zxmd_xenc_EncryptedKey_s* zxmd_DEEP_CLONE_xenc_EncryptedKey(struct zx_ctx* c, struct zxmd_xenc_EncryptedKey_s* x, int dup_strs);
void zxmd_DUP_STRS_xenc_EncryptedKey(struct zx_ctx* c, struct zxmd_xenc_EncryptedKey_s* x);
void zxmd_FREE_xenc_EncryptedKey(struct zx_ctx* c, struct zxmd_xenc_EncryptedKey_s* x, int free_strs);
int zxmd_WALK_SO_xenc_EncryptedKey(struct zx_ctx* c, struct zxmd_xenc_EncryptedKey_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_xenc_EncryptedKey(struct zx_ctx* c, struct zxmd_xenc_EncryptedKey_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_xenc_EncryptedKey(struct zxmd_xenc_EncryptedKey_s* x);
char* zxmd_ENC_SO_xenc_EncryptedKey(struct zxmd_xenc_EncryptedKey_s* x, char* p);
char* zxmd_ENC_WO_xenc_EncryptedKey(struct zxmd_xenc_EncryptedKey_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_xenc_EncryptedKey(struct zx_ctx* c, struct zxmd_xenc_EncryptedKey_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_xenc_EncryptedKey(struct zx_ctx* c, struct zxmd_xenc_EncryptedKey_s* x);

struct zxmd_xenc_EncryptedKey_s {
  ZX_ELEM_EXT
  zxmd_xenc_EncryptedKey_EXT
  struct zxmd_xenc_EncryptionMethod_s* EncryptionMethod;	/* {0,1}  */
  struct zxmd_ds_KeyInfo_s* KeyInfo;	/* {0,1} nada */
  struct zxmd_xenc_CipherData_s* CipherData;	/* {1,1} nada */
  struct zxmd_xenc_EncryptionProperties_s* EncryptionProperties;	/* {0,1} nada */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
  struct zx_str_s* Type;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* MimeType;	/* {0,1} attribute xs:string */
  struct zx_str_s* Encoding;	/* {0,1} attribute xs:anyURI */
  struct zxmd_xenc_ReferenceList_s* ReferenceList;	/* {0,1} nada */
  struct zx_elem_s* CarriedKeyName;	/* {0,1} xs:string */
  struct zx_str_s* Recipient;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zxmd_xenc_EncryptedKey_GET_Id(struct zxmd_xenc_EncryptedKey_s* x);
struct zx_str_s* zxmd_xenc_EncryptedKey_GET_Type(struct zxmd_xenc_EncryptedKey_s* x);
struct zx_str_s* zxmd_xenc_EncryptedKey_GET_MimeType(struct zxmd_xenc_EncryptedKey_s* x);
struct zx_str_s* zxmd_xenc_EncryptedKey_GET_Encoding(struct zxmd_xenc_EncryptedKey_s* x);
struct zx_str_s* zxmd_xenc_EncryptedKey_GET_Recipient(struct zxmd_xenc_EncryptedKey_s* x);
struct zxmd_xenc_EncryptionMethod_s* zxmd_xenc_EncryptedKey_GET_EncryptionMethod(struct zxmd_xenc_EncryptedKey_s* x, int n);
struct zxmd_ds_KeyInfo_s* zxmd_xenc_EncryptedKey_GET_KeyInfo(struct zxmd_xenc_EncryptedKey_s* x, int n);
struct zxmd_xenc_CipherData_s* zxmd_xenc_EncryptedKey_GET_CipherData(struct zxmd_xenc_EncryptedKey_s* x, int n);
struct zxmd_xenc_EncryptionProperties_s* zxmd_xenc_EncryptedKey_GET_EncryptionProperties(struct zxmd_xenc_EncryptedKey_s* x, int n);
struct zxmd_xenc_ReferenceList_s* zxmd_xenc_EncryptedKey_GET_ReferenceList(struct zxmd_xenc_EncryptedKey_s* x, int n);
struct zx_elem_s* zxmd_xenc_EncryptedKey_GET_CarriedKeyName(struct zxmd_xenc_EncryptedKey_s* x, int n);
int zxmd_xenc_EncryptedKey_NUM_EncryptionMethod(struct zxmd_xenc_EncryptedKey_s* x);
int zxmd_xenc_EncryptedKey_NUM_KeyInfo(struct zxmd_xenc_EncryptedKey_s* x);
int zxmd_xenc_EncryptedKey_NUM_CipherData(struct zxmd_xenc_EncryptedKey_s* x);
int zxmd_xenc_EncryptedKey_NUM_EncryptionProperties(struct zxmd_xenc_EncryptedKey_s* x);
int zxmd_xenc_EncryptedKey_NUM_ReferenceList(struct zxmd_xenc_EncryptedKey_s* x);
int zxmd_xenc_EncryptedKey_NUM_CarriedKeyName(struct zxmd_xenc_EncryptedKey_s* x);
struct zxmd_xenc_EncryptionMethod_s* zxmd_xenc_EncryptedKey_POP_EncryptionMethod(struct zxmd_xenc_EncryptedKey_s* x);
struct zxmd_ds_KeyInfo_s* zxmd_xenc_EncryptedKey_POP_KeyInfo(struct zxmd_xenc_EncryptedKey_s* x);
struct zxmd_xenc_CipherData_s* zxmd_xenc_EncryptedKey_POP_CipherData(struct zxmd_xenc_EncryptedKey_s* x);
struct zxmd_xenc_EncryptionProperties_s* zxmd_xenc_EncryptedKey_POP_EncryptionProperties(struct zxmd_xenc_EncryptedKey_s* x);
struct zxmd_xenc_ReferenceList_s* zxmd_xenc_EncryptedKey_POP_ReferenceList(struct zxmd_xenc_EncryptedKey_s* x);
struct zx_elem_s* zxmd_xenc_EncryptedKey_POP_CarriedKeyName(struct zxmd_xenc_EncryptedKey_s* x);
void zxmd_xenc_EncryptedKey_PUSH_EncryptionMethod(struct zxmd_xenc_EncryptedKey_s* x, struct zxmd_xenc_EncryptionMethod_s* y);
void zxmd_xenc_EncryptedKey_PUSH_KeyInfo(struct zxmd_xenc_EncryptedKey_s* x, struct zxmd_ds_KeyInfo_s* y);
void zxmd_xenc_EncryptedKey_PUSH_CipherData(struct zxmd_xenc_EncryptedKey_s* x, struct zxmd_xenc_CipherData_s* y);
void zxmd_xenc_EncryptedKey_PUSH_EncryptionProperties(struct zxmd_xenc_EncryptedKey_s* x, struct zxmd_xenc_EncryptionProperties_s* y);
void zxmd_xenc_EncryptedKey_PUSH_ReferenceList(struct zxmd_xenc_EncryptedKey_s* x, struct zxmd_xenc_ReferenceList_s* y);
void zxmd_xenc_EncryptedKey_PUSH_CarriedKeyName(struct zxmd_xenc_EncryptedKey_s* x, struct zx_elem_s* y);
void zxmd_xenc_EncryptedKey_PUT_Id(struct zxmd_xenc_EncryptedKey_s* x, struct zx_str_s* y);
void zxmd_xenc_EncryptedKey_PUT_Type(struct zxmd_xenc_EncryptedKey_s* x, struct zx_str_s* y);
void zxmd_xenc_EncryptedKey_PUT_MimeType(struct zxmd_xenc_EncryptedKey_s* x, struct zx_str_s* y);
void zxmd_xenc_EncryptedKey_PUT_Encoding(struct zxmd_xenc_EncryptedKey_s* x, struct zx_str_s* y);
void zxmd_xenc_EncryptedKey_PUT_Recipient(struct zxmd_xenc_EncryptedKey_s* x, struct zx_str_s* y);
void zxmd_xenc_EncryptedKey_PUT_EncryptionMethod(struct zxmd_xenc_EncryptedKey_s* x, int n, struct zxmd_xenc_EncryptionMethod_s* y);
void zxmd_xenc_EncryptedKey_PUT_KeyInfo(struct zxmd_xenc_EncryptedKey_s* x, int n, struct zxmd_ds_KeyInfo_s* y);
void zxmd_xenc_EncryptedKey_PUT_CipherData(struct zxmd_xenc_EncryptedKey_s* x, int n, struct zxmd_xenc_CipherData_s* y);
void zxmd_xenc_EncryptedKey_PUT_EncryptionProperties(struct zxmd_xenc_EncryptedKey_s* x, int n, struct zxmd_xenc_EncryptionProperties_s* y);
void zxmd_xenc_EncryptedKey_PUT_ReferenceList(struct zxmd_xenc_EncryptedKey_s* x, int n, struct zxmd_xenc_ReferenceList_s* y);
void zxmd_xenc_EncryptedKey_PUT_CarriedKeyName(struct zxmd_xenc_EncryptedKey_s* x, int n, struct zx_elem_s* y);
void zxmd_xenc_EncryptedKey_ADD_EncryptionMethod(struct zxmd_xenc_EncryptedKey_s* x, int n, struct zxmd_xenc_EncryptionMethod_s* z);
void zxmd_xenc_EncryptedKey_ADD_KeyInfo(struct zxmd_xenc_EncryptedKey_s* x, int n, struct zxmd_ds_KeyInfo_s* z);
void zxmd_xenc_EncryptedKey_ADD_CipherData(struct zxmd_xenc_EncryptedKey_s* x, int n, struct zxmd_xenc_CipherData_s* z);
void zxmd_xenc_EncryptedKey_ADD_EncryptionProperties(struct zxmd_xenc_EncryptedKey_s* x, int n, struct zxmd_xenc_EncryptionProperties_s* z);
void zxmd_xenc_EncryptedKey_ADD_ReferenceList(struct zxmd_xenc_EncryptedKey_s* x, int n, struct zxmd_xenc_ReferenceList_s* z);
void zxmd_xenc_EncryptedKey_ADD_CarriedKeyName(struct zxmd_xenc_EncryptedKey_s* x, int n, struct zx_elem_s* z);
void zxmd_xenc_EncryptedKey_DEL_EncryptionMethod(struct zxmd_xenc_EncryptedKey_s* x, int n);
void zxmd_xenc_EncryptedKey_DEL_KeyInfo(struct zxmd_xenc_EncryptedKey_s* x, int n);
void zxmd_xenc_EncryptedKey_DEL_CipherData(struct zxmd_xenc_EncryptedKey_s* x, int n);
void zxmd_xenc_EncryptedKey_DEL_EncryptionProperties(struct zxmd_xenc_EncryptedKey_s* x, int n);
void zxmd_xenc_EncryptedKey_DEL_ReferenceList(struct zxmd_xenc_EncryptedKey_s* x, int n);
void zxmd_xenc_EncryptedKey_DEL_CarriedKeyName(struct zxmd_xenc_EncryptedKey_s* x, int n);
void zxmd_xenc_EncryptedKey_REV_EncryptionMethod(struct zxmd_xenc_EncryptedKey_s* x);
void zxmd_xenc_EncryptedKey_REV_KeyInfo(struct zxmd_xenc_EncryptedKey_s* x);
void zxmd_xenc_EncryptedKey_REV_CipherData(struct zxmd_xenc_EncryptedKey_s* x);
void zxmd_xenc_EncryptedKey_REV_EncryptionProperties(struct zxmd_xenc_EncryptedKey_s* x);
void zxmd_xenc_EncryptedKey_REV_ReferenceList(struct zxmd_xenc_EncryptedKey_s* x);
void zxmd_xenc_EncryptedKey_REV_CarriedKeyName(struct zxmd_xenc_EncryptedKey_s* x);

/* -------------------------- xenc_EncryptionMethod -------------------------- */
/* refby( zxmd_xenc_EncryptedData_s zxmd_xenc_EncryptedKey_s ) */
#ifndef zxmd_xenc_EncryptionMethod_EXT
#define zxmd_xenc_EncryptionMethod_EXT
#endif

struct zxmd_xenc_EncryptionMethod_s* zxmd_DEC_xenc_EncryptionMethod(struct zx_ctx* c);
struct zxmd_xenc_EncryptionMethod_s* zxmd_NEW_xenc_EncryptionMethod(struct zx_ctx* c);
struct zxmd_xenc_EncryptionMethod_s* zxmd_DEEP_CLONE_xenc_EncryptionMethod(struct zx_ctx* c, struct zxmd_xenc_EncryptionMethod_s* x, int dup_strs);
void zxmd_DUP_STRS_xenc_EncryptionMethod(struct zx_ctx* c, struct zxmd_xenc_EncryptionMethod_s* x);
void zxmd_FREE_xenc_EncryptionMethod(struct zx_ctx* c, struct zxmd_xenc_EncryptionMethod_s* x, int free_strs);
int zxmd_WALK_SO_xenc_EncryptionMethod(struct zx_ctx* c, struct zxmd_xenc_EncryptionMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_xenc_EncryptionMethod(struct zx_ctx* c, struct zxmd_xenc_EncryptionMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_xenc_EncryptionMethod(struct zxmd_xenc_EncryptionMethod_s* x);
char* zxmd_ENC_SO_xenc_EncryptionMethod(struct zxmd_xenc_EncryptionMethod_s* x, char* p);
char* zxmd_ENC_WO_xenc_EncryptionMethod(struct zxmd_xenc_EncryptionMethod_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_xenc_EncryptionMethod(struct zx_ctx* c, struct zxmd_xenc_EncryptionMethod_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_xenc_EncryptionMethod(struct zx_ctx* c, struct zxmd_xenc_EncryptionMethod_s* x);

struct zxmd_xenc_EncryptionMethod_s {
  ZX_ELEM_EXT
  zxmd_xenc_EncryptionMethod_EXT
  struct zx_elem_s* KeySize;	/* {0,1} xs:integer */
  struct zx_elem_s* OAEPparams;	/* {0,1} xs:base64Binary */
  struct zx_str_s* Algorithm;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_xenc_EncryptionMethod_GET_Algorithm(struct zxmd_xenc_EncryptionMethod_s* x);
struct zx_elem_s* zxmd_xenc_EncryptionMethod_GET_KeySize(struct zxmd_xenc_EncryptionMethod_s* x, int n);
struct zx_elem_s* zxmd_xenc_EncryptionMethod_GET_OAEPparams(struct zxmd_xenc_EncryptionMethod_s* x, int n);
int zxmd_xenc_EncryptionMethod_NUM_KeySize(struct zxmd_xenc_EncryptionMethod_s* x);
int zxmd_xenc_EncryptionMethod_NUM_OAEPparams(struct zxmd_xenc_EncryptionMethod_s* x);
struct zx_elem_s* zxmd_xenc_EncryptionMethod_POP_KeySize(struct zxmd_xenc_EncryptionMethod_s* x);
struct zx_elem_s* zxmd_xenc_EncryptionMethod_POP_OAEPparams(struct zxmd_xenc_EncryptionMethod_s* x);
void zxmd_xenc_EncryptionMethod_PUSH_KeySize(struct zxmd_xenc_EncryptionMethod_s* x, struct zx_elem_s* y);
void zxmd_xenc_EncryptionMethod_PUSH_OAEPparams(struct zxmd_xenc_EncryptionMethod_s* x, struct zx_elem_s* y);
void zxmd_xenc_EncryptionMethod_PUT_Algorithm(struct zxmd_xenc_EncryptionMethod_s* x, struct zx_str_s* y);
void zxmd_xenc_EncryptionMethod_PUT_KeySize(struct zxmd_xenc_EncryptionMethod_s* x, int n, struct zx_elem_s* y);
void zxmd_xenc_EncryptionMethod_PUT_OAEPparams(struct zxmd_xenc_EncryptionMethod_s* x, int n, struct zx_elem_s* y);
void zxmd_xenc_EncryptionMethod_ADD_KeySize(struct zxmd_xenc_EncryptionMethod_s* x, int n, struct zx_elem_s* z);
void zxmd_xenc_EncryptionMethod_ADD_OAEPparams(struct zxmd_xenc_EncryptionMethod_s* x, int n, struct zx_elem_s* z);
void zxmd_xenc_EncryptionMethod_DEL_KeySize(struct zxmd_xenc_EncryptionMethod_s* x, int n);
void zxmd_xenc_EncryptionMethod_DEL_OAEPparams(struct zxmd_xenc_EncryptionMethod_s* x, int n);
void zxmd_xenc_EncryptionMethod_REV_KeySize(struct zxmd_xenc_EncryptionMethod_s* x);
void zxmd_xenc_EncryptionMethod_REV_OAEPparams(struct zxmd_xenc_EncryptionMethod_s* x);

/* -------------------------- xenc_EncryptionProperties -------------------------- */
/* refby( zxmd_xenc_EncryptedData_s zxmd_xenc_EncryptedKey_s ) */
#ifndef zxmd_xenc_EncryptionProperties_EXT
#define zxmd_xenc_EncryptionProperties_EXT
#endif

struct zxmd_xenc_EncryptionProperties_s* zxmd_DEC_xenc_EncryptionProperties(struct zx_ctx* c);
struct zxmd_xenc_EncryptionProperties_s* zxmd_NEW_xenc_EncryptionProperties(struct zx_ctx* c);
struct zxmd_xenc_EncryptionProperties_s* zxmd_DEEP_CLONE_xenc_EncryptionProperties(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperties_s* x, int dup_strs);
void zxmd_DUP_STRS_xenc_EncryptionProperties(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperties_s* x);
void zxmd_FREE_xenc_EncryptionProperties(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperties_s* x, int free_strs);
int zxmd_WALK_SO_xenc_EncryptionProperties(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperties_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_xenc_EncryptionProperties(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperties_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_xenc_EncryptionProperties(struct zxmd_xenc_EncryptionProperties_s* x);
char* zxmd_ENC_SO_xenc_EncryptionProperties(struct zxmd_xenc_EncryptionProperties_s* x, char* p);
char* zxmd_ENC_WO_xenc_EncryptionProperties(struct zxmd_xenc_EncryptionProperties_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_xenc_EncryptionProperties(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperties_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_xenc_EncryptionProperties(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperties_s* x);

struct zxmd_xenc_EncryptionProperties_s {
  ZX_ELEM_EXT
  zxmd_xenc_EncryptionProperties_EXT
  struct zxmd_xenc_EncryptionProperty_s* EncryptionProperty;	/* {1,-1} nada */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zxmd_xenc_EncryptionProperties_GET_Id(struct zxmd_xenc_EncryptionProperties_s* x);
struct zxmd_xenc_EncryptionProperty_s* zxmd_xenc_EncryptionProperties_GET_EncryptionProperty(struct zxmd_xenc_EncryptionProperties_s* x, int n);
int zxmd_xenc_EncryptionProperties_NUM_EncryptionProperty(struct zxmd_xenc_EncryptionProperties_s* x);
struct zxmd_xenc_EncryptionProperty_s* zxmd_xenc_EncryptionProperties_POP_EncryptionProperty(struct zxmd_xenc_EncryptionProperties_s* x);
void zxmd_xenc_EncryptionProperties_PUSH_EncryptionProperty(struct zxmd_xenc_EncryptionProperties_s* x, struct zxmd_xenc_EncryptionProperty_s* y);
void zxmd_xenc_EncryptionProperties_PUT_Id(struct zxmd_xenc_EncryptionProperties_s* x, struct zx_str_s* y);
void zxmd_xenc_EncryptionProperties_PUT_EncryptionProperty(struct zxmd_xenc_EncryptionProperties_s* x, int n, struct zxmd_xenc_EncryptionProperty_s* y);
void zxmd_xenc_EncryptionProperties_ADD_EncryptionProperty(struct zxmd_xenc_EncryptionProperties_s* x, int n, struct zxmd_xenc_EncryptionProperty_s* z);
void zxmd_xenc_EncryptionProperties_DEL_EncryptionProperty(struct zxmd_xenc_EncryptionProperties_s* x, int n);
void zxmd_xenc_EncryptionProperties_REV_EncryptionProperty(struct zxmd_xenc_EncryptionProperties_s* x);

/* -------------------------- xenc_EncryptionProperty -------------------------- */
/* refby( zxmd_xenc_EncryptionProperties_s ) */
#ifndef zxmd_xenc_EncryptionProperty_EXT
#define zxmd_xenc_EncryptionProperty_EXT
#endif

struct zxmd_xenc_EncryptionProperty_s* zxmd_DEC_xenc_EncryptionProperty(struct zx_ctx* c);
struct zxmd_xenc_EncryptionProperty_s* zxmd_NEW_xenc_EncryptionProperty(struct zx_ctx* c);
struct zxmd_xenc_EncryptionProperty_s* zxmd_DEEP_CLONE_xenc_EncryptionProperty(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperty_s* x, int dup_strs);
void zxmd_DUP_STRS_xenc_EncryptionProperty(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperty_s* x);
void zxmd_FREE_xenc_EncryptionProperty(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperty_s* x, int free_strs);
int zxmd_WALK_SO_xenc_EncryptionProperty(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperty_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_xenc_EncryptionProperty(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperty_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_xenc_EncryptionProperty(struct zxmd_xenc_EncryptionProperty_s* x);
char* zxmd_ENC_SO_xenc_EncryptionProperty(struct zxmd_xenc_EncryptionProperty_s* x, char* p);
char* zxmd_ENC_WO_xenc_EncryptionProperty(struct zxmd_xenc_EncryptionProperty_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_xenc_EncryptionProperty(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperty_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_xenc_EncryptionProperty(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperty_s* x);

struct zxmd_xenc_EncryptionProperty_s {
  ZX_ELEM_EXT
  zxmd_xenc_EncryptionProperty_EXT
  struct zx_str_s* Target;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zxmd_xenc_EncryptionProperty_GET_Target(struct zxmd_xenc_EncryptionProperty_s* x);
struct zx_str_s* zxmd_xenc_EncryptionProperty_GET_Id(struct zxmd_xenc_EncryptionProperty_s* x);
void zxmd_xenc_EncryptionProperty_PUT_Target(struct zxmd_xenc_EncryptionProperty_s* x, struct zx_str_s* y);
void zxmd_xenc_EncryptionProperty_PUT_Id(struct zxmd_xenc_EncryptionProperty_s* x, struct zx_str_s* y);

/* -------------------------- xenc_KeyReference -------------------------- */
/* refby( zxmd_xenc_ReferenceList_s ) */
#ifndef zxmd_xenc_KeyReference_EXT
#define zxmd_xenc_KeyReference_EXT
#endif

struct zxmd_xenc_KeyReference_s* zxmd_DEC_xenc_KeyReference(struct zx_ctx* c);
struct zxmd_xenc_KeyReference_s* zxmd_NEW_xenc_KeyReference(struct zx_ctx* c);
struct zxmd_xenc_KeyReference_s* zxmd_DEEP_CLONE_xenc_KeyReference(struct zx_ctx* c, struct zxmd_xenc_KeyReference_s* x, int dup_strs);
void zxmd_DUP_STRS_xenc_KeyReference(struct zx_ctx* c, struct zxmd_xenc_KeyReference_s* x);
void zxmd_FREE_xenc_KeyReference(struct zx_ctx* c, struct zxmd_xenc_KeyReference_s* x, int free_strs);
int zxmd_WALK_SO_xenc_KeyReference(struct zx_ctx* c, struct zxmd_xenc_KeyReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_xenc_KeyReference(struct zx_ctx* c, struct zxmd_xenc_KeyReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_xenc_KeyReference(struct zxmd_xenc_KeyReference_s* x);
char* zxmd_ENC_SO_xenc_KeyReference(struct zxmd_xenc_KeyReference_s* x, char* p);
char* zxmd_ENC_WO_xenc_KeyReference(struct zxmd_xenc_KeyReference_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_xenc_KeyReference(struct zx_ctx* c, struct zxmd_xenc_KeyReference_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_xenc_KeyReference(struct zx_ctx* c, struct zxmd_xenc_KeyReference_s* x);

struct zxmd_xenc_KeyReference_s {
  ZX_ELEM_EXT
  zxmd_xenc_KeyReference_EXT
  struct zx_str_s* URI;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zxmd_xenc_KeyReference_GET_URI(struct zxmd_xenc_KeyReference_s* x);
void zxmd_xenc_KeyReference_PUT_URI(struct zxmd_xenc_KeyReference_s* x, struct zx_str_s* y);

/* -------------------------- xenc_OriginatorKeyInfo -------------------------- */
/* refby( zxmd_xenc_AgreementMethod_s ) */
#ifndef zxmd_xenc_OriginatorKeyInfo_EXT
#define zxmd_xenc_OriginatorKeyInfo_EXT
#endif

struct zxmd_xenc_OriginatorKeyInfo_s* zxmd_DEC_xenc_OriginatorKeyInfo(struct zx_ctx* c);
struct zxmd_xenc_OriginatorKeyInfo_s* zxmd_NEW_xenc_OriginatorKeyInfo(struct zx_ctx* c);
struct zxmd_xenc_OriginatorKeyInfo_s* zxmd_DEEP_CLONE_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zxmd_xenc_OriginatorKeyInfo_s* x, int dup_strs);
void zxmd_DUP_STRS_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zxmd_xenc_OriginatorKeyInfo_s* x);
void zxmd_FREE_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zxmd_xenc_OriginatorKeyInfo_s* x, int free_strs);
int zxmd_WALK_SO_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zxmd_xenc_OriginatorKeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zxmd_xenc_OriginatorKeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_xenc_OriginatorKeyInfo(struct zxmd_xenc_OriginatorKeyInfo_s* x);
char* zxmd_ENC_SO_xenc_OriginatorKeyInfo(struct zxmd_xenc_OriginatorKeyInfo_s* x, char* p);
char* zxmd_ENC_WO_xenc_OriginatorKeyInfo(struct zxmd_xenc_OriginatorKeyInfo_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zxmd_xenc_OriginatorKeyInfo_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zxmd_xenc_OriginatorKeyInfo_s* x);

struct zxmd_xenc_OriginatorKeyInfo_s {
  ZX_ELEM_EXT
  zxmd_xenc_OriginatorKeyInfo_EXT
  struct zx_elem_s* KeyName;	/* {0,-1} xs:string */
  struct zxmd_ds_KeyValue_s* KeyValue;	/* {0,-1} nada */
  struct zxmd_ds_RetrievalMethod_s* RetrievalMethod;	/* {0,-1} nada */
  struct zxmd_ds_X509Data_s* X509Data;	/* {0,-1} nada */
  struct zxmd_ds_PGPData_s* PGPData;	/* {0,-1} nada */
  struct zxmd_ds_SPKIData_s* SPKIData;	/* {0,-1} nada */
  struct zx_elem_s* MgmtData;	/* {0,-1} xs:string */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zxmd_xenc_OriginatorKeyInfo_GET_Id(struct zxmd_xenc_OriginatorKeyInfo_s* x);
struct zx_elem_s* zxmd_xenc_OriginatorKeyInfo_GET_KeyName(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n);
struct zxmd_ds_KeyValue_s* zxmd_xenc_OriginatorKeyInfo_GET_KeyValue(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n);
struct zxmd_ds_RetrievalMethod_s* zxmd_xenc_OriginatorKeyInfo_GET_RetrievalMethod(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n);
struct zxmd_ds_X509Data_s* zxmd_xenc_OriginatorKeyInfo_GET_X509Data(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n);
struct zxmd_ds_PGPData_s* zxmd_xenc_OriginatorKeyInfo_GET_PGPData(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n);
struct zxmd_ds_SPKIData_s* zxmd_xenc_OriginatorKeyInfo_GET_SPKIData(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n);
struct zx_elem_s* zxmd_xenc_OriginatorKeyInfo_GET_MgmtData(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n);
int zxmd_xenc_OriginatorKeyInfo_NUM_KeyName(struct zxmd_xenc_OriginatorKeyInfo_s* x);
int zxmd_xenc_OriginatorKeyInfo_NUM_KeyValue(struct zxmd_xenc_OriginatorKeyInfo_s* x);
int zxmd_xenc_OriginatorKeyInfo_NUM_RetrievalMethod(struct zxmd_xenc_OriginatorKeyInfo_s* x);
int zxmd_xenc_OriginatorKeyInfo_NUM_X509Data(struct zxmd_xenc_OriginatorKeyInfo_s* x);
int zxmd_xenc_OriginatorKeyInfo_NUM_PGPData(struct zxmd_xenc_OriginatorKeyInfo_s* x);
int zxmd_xenc_OriginatorKeyInfo_NUM_SPKIData(struct zxmd_xenc_OriginatorKeyInfo_s* x);
int zxmd_xenc_OriginatorKeyInfo_NUM_MgmtData(struct zxmd_xenc_OriginatorKeyInfo_s* x);
struct zx_elem_s* zxmd_xenc_OriginatorKeyInfo_POP_KeyName(struct zxmd_xenc_OriginatorKeyInfo_s* x);
struct zxmd_ds_KeyValue_s* zxmd_xenc_OriginatorKeyInfo_POP_KeyValue(struct zxmd_xenc_OriginatorKeyInfo_s* x);
struct zxmd_ds_RetrievalMethod_s* zxmd_xenc_OriginatorKeyInfo_POP_RetrievalMethod(struct zxmd_xenc_OriginatorKeyInfo_s* x);
struct zxmd_ds_X509Data_s* zxmd_xenc_OriginatorKeyInfo_POP_X509Data(struct zxmd_xenc_OriginatorKeyInfo_s* x);
struct zxmd_ds_PGPData_s* zxmd_xenc_OriginatorKeyInfo_POP_PGPData(struct zxmd_xenc_OriginatorKeyInfo_s* x);
struct zxmd_ds_SPKIData_s* zxmd_xenc_OriginatorKeyInfo_POP_SPKIData(struct zxmd_xenc_OriginatorKeyInfo_s* x);
struct zx_elem_s* zxmd_xenc_OriginatorKeyInfo_POP_MgmtData(struct zxmd_xenc_OriginatorKeyInfo_s* x);
void zxmd_xenc_OriginatorKeyInfo_PUSH_KeyName(struct zxmd_xenc_OriginatorKeyInfo_s* x, struct zx_elem_s* y);
void zxmd_xenc_OriginatorKeyInfo_PUSH_KeyValue(struct zxmd_xenc_OriginatorKeyInfo_s* x, struct zxmd_ds_KeyValue_s* y);
void zxmd_xenc_OriginatorKeyInfo_PUSH_RetrievalMethod(struct zxmd_xenc_OriginatorKeyInfo_s* x, struct zxmd_ds_RetrievalMethod_s* y);
void zxmd_xenc_OriginatorKeyInfo_PUSH_X509Data(struct zxmd_xenc_OriginatorKeyInfo_s* x, struct zxmd_ds_X509Data_s* y);
void zxmd_xenc_OriginatorKeyInfo_PUSH_PGPData(struct zxmd_xenc_OriginatorKeyInfo_s* x, struct zxmd_ds_PGPData_s* y);
void zxmd_xenc_OriginatorKeyInfo_PUSH_SPKIData(struct zxmd_xenc_OriginatorKeyInfo_s* x, struct zxmd_ds_SPKIData_s* y);
void zxmd_xenc_OriginatorKeyInfo_PUSH_MgmtData(struct zxmd_xenc_OriginatorKeyInfo_s* x, struct zx_elem_s* y);
void zxmd_xenc_OriginatorKeyInfo_PUT_Id(struct zxmd_xenc_OriginatorKeyInfo_s* x, struct zx_str_s* y);
void zxmd_xenc_OriginatorKeyInfo_PUT_KeyName(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zx_elem_s* y);
void zxmd_xenc_OriginatorKeyInfo_PUT_KeyValue(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zxmd_ds_KeyValue_s* y);
void zxmd_xenc_OriginatorKeyInfo_PUT_RetrievalMethod(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zxmd_ds_RetrievalMethod_s* y);
void zxmd_xenc_OriginatorKeyInfo_PUT_X509Data(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zxmd_ds_X509Data_s* y);
void zxmd_xenc_OriginatorKeyInfo_PUT_PGPData(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zxmd_ds_PGPData_s* y);
void zxmd_xenc_OriginatorKeyInfo_PUT_SPKIData(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zxmd_ds_SPKIData_s* y);
void zxmd_xenc_OriginatorKeyInfo_PUT_MgmtData(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zx_elem_s* y);
void zxmd_xenc_OriginatorKeyInfo_ADD_KeyName(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zx_elem_s* z);
void zxmd_xenc_OriginatorKeyInfo_ADD_KeyValue(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zxmd_ds_KeyValue_s* z);
void zxmd_xenc_OriginatorKeyInfo_ADD_RetrievalMethod(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zxmd_ds_RetrievalMethod_s* z);
void zxmd_xenc_OriginatorKeyInfo_ADD_X509Data(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zxmd_ds_X509Data_s* z);
void zxmd_xenc_OriginatorKeyInfo_ADD_PGPData(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zxmd_ds_PGPData_s* z);
void zxmd_xenc_OriginatorKeyInfo_ADD_SPKIData(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zxmd_ds_SPKIData_s* z);
void zxmd_xenc_OriginatorKeyInfo_ADD_MgmtData(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zx_elem_s* z);
void zxmd_xenc_OriginatorKeyInfo_DEL_KeyName(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n);
void zxmd_xenc_OriginatorKeyInfo_DEL_KeyValue(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n);
void zxmd_xenc_OriginatorKeyInfo_DEL_RetrievalMethod(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n);
void zxmd_xenc_OriginatorKeyInfo_DEL_X509Data(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n);
void zxmd_xenc_OriginatorKeyInfo_DEL_PGPData(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n);
void zxmd_xenc_OriginatorKeyInfo_DEL_SPKIData(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n);
void zxmd_xenc_OriginatorKeyInfo_DEL_MgmtData(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n);
void zxmd_xenc_OriginatorKeyInfo_REV_KeyName(struct zxmd_xenc_OriginatorKeyInfo_s* x);
void zxmd_xenc_OriginatorKeyInfo_REV_KeyValue(struct zxmd_xenc_OriginatorKeyInfo_s* x);
void zxmd_xenc_OriginatorKeyInfo_REV_RetrievalMethod(struct zxmd_xenc_OriginatorKeyInfo_s* x);
void zxmd_xenc_OriginatorKeyInfo_REV_X509Data(struct zxmd_xenc_OriginatorKeyInfo_s* x);
void zxmd_xenc_OriginatorKeyInfo_REV_PGPData(struct zxmd_xenc_OriginatorKeyInfo_s* x);
void zxmd_xenc_OriginatorKeyInfo_REV_SPKIData(struct zxmd_xenc_OriginatorKeyInfo_s* x);
void zxmd_xenc_OriginatorKeyInfo_REV_MgmtData(struct zxmd_xenc_OriginatorKeyInfo_s* x);

/* -------------------------- xenc_RecipientKeyInfo -------------------------- */
/* refby( zxmd_xenc_AgreementMethod_s ) */
#ifndef zxmd_xenc_RecipientKeyInfo_EXT
#define zxmd_xenc_RecipientKeyInfo_EXT
#endif

struct zxmd_xenc_RecipientKeyInfo_s* zxmd_DEC_xenc_RecipientKeyInfo(struct zx_ctx* c);
struct zxmd_xenc_RecipientKeyInfo_s* zxmd_NEW_xenc_RecipientKeyInfo(struct zx_ctx* c);
struct zxmd_xenc_RecipientKeyInfo_s* zxmd_DEEP_CLONE_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zxmd_xenc_RecipientKeyInfo_s* x, int dup_strs);
void zxmd_DUP_STRS_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zxmd_xenc_RecipientKeyInfo_s* x);
void zxmd_FREE_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zxmd_xenc_RecipientKeyInfo_s* x, int free_strs);
int zxmd_WALK_SO_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zxmd_xenc_RecipientKeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zxmd_xenc_RecipientKeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_xenc_RecipientKeyInfo(struct zxmd_xenc_RecipientKeyInfo_s* x);
char* zxmd_ENC_SO_xenc_RecipientKeyInfo(struct zxmd_xenc_RecipientKeyInfo_s* x, char* p);
char* zxmd_ENC_WO_xenc_RecipientKeyInfo(struct zxmd_xenc_RecipientKeyInfo_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zxmd_xenc_RecipientKeyInfo_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zxmd_xenc_RecipientKeyInfo_s* x);

struct zxmd_xenc_RecipientKeyInfo_s {
  ZX_ELEM_EXT
  zxmd_xenc_RecipientKeyInfo_EXT
  struct zx_elem_s* KeyName;	/* {0,-1} xs:string */
  struct zxmd_ds_KeyValue_s* KeyValue;	/* {0,-1} nada */
  struct zxmd_ds_RetrievalMethod_s* RetrievalMethod;	/* {0,-1} nada */
  struct zxmd_ds_X509Data_s* X509Data;	/* {0,-1} nada */
  struct zxmd_ds_PGPData_s* PGPData;	/* {0,-1} nada */
  struct zxmd_ds_SPKIData_s* SPKIData;	/* {0,-1} nada */
  struct zx_elem_s* MgmtData;	/* {0,-1} xs:string */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zxmd_xenc_RecipientKeyInfo_GET_Id(struct zxmd_xenc_RecipientKeyInfo_s* x);
struct zx_elem_s* zxmd_xenc_RecipientKeyInfo_GET_KeyName(struct zxmd_xenc_RecipientKeyInfo_s* x, int n);
struct zxmd_ds_KeyValue_s* zxmd_xenc_RecipientKeyInfo_GET_KeyValue(struct zxmd_xenc_RecipientKeyInfo_s* x, int n);
struct zxmd_ds_RetrievalMethod_s* zxmd_xenc_RecipientKeyInfo_GET_RetrievalMethod(struct zxmd_xenc_RecipientKeyInfo_s* x, int n);
struct zxmd_ds_X509Data_s* zxmd_xenc_RecipientKeyInfo_GET_X509Data(struct zxmd_xenc_RecipientKeyInfo_s* x, int n);
struct zxmd_ds_PGPData_s* zxmd_xenc_RecipientKeyInfo_GET_PGPData(struct zxmd_xenc_RecipientKeyInfo_s* x, int n);
struct zxmd_ds_SPKIData_s* zxmd_xenc_RecipientKeyInfo_GET_SPKIData(struct zxmd_xenc_RecipientKeyInfo_s* x, int n);
struct zx_elem_s* zxmd_xenc_RecipientKeyInfo_GET_MgmtData(struct zxmd_xenc_RecipientKeyInfo_s* x, int n);
int zxmd_xenc_RecipientKeyInfo_NUM_KeyName(struct zxmd_xenc_RecipientKeyInfo_s* x);
int zxmd_xenc_RecipientKeyInfo_NUM_KeyValue(struct zxmd_xenc_RecipientKeyInfo_s* x);
int zxmd_xenc_RecipientKeyInfo_NUM_RetrievalMethod(struct zxmd_xenc_RecipientKeyInfo_s* x);
int zxmd_xenc_RecipientKeyInfo_NUM_X509Data(struct zxmd_xenc_RecipientKeyInfo_s* x);
int zxmd_xenc_RecipientKeyInfo_NUM_PGPData(struct zxmd_xenc_RecipientKeyInfo_s* x);
int zxmd_xenc_RecipientKeyInfo_NUM_SPKIData(struct zxmd_xenc_RecipientKeyInfo_s* x);
int zxmd_xenc_RecipientKeyInfo_NUM_MgmtData(struct zxmd_xenc_RecipientKeyInfo_s* x);
struct zx_elem_s* zxmd_xenc_RecipientKeyInfo_POP_KeyName(struct zxmd_xenc_RecipientKeyInfo_s* x);
struct zxmd_ds_KeyValue_s* zxmd_xenc_RecipientKeyInfo_POP_KeyValue(struct zxmd_xenc_RecipientKeyInfo_s* x);
struct zxmd_ds_RetrievalMethod_s* zxmd_xenc_RecipientKeyInfo_POP_RetrievalMethod(struct zxmd_xenc_RecipientKeyInfo_s* x);
struct zxmd_ds_X509Data_s* zxmd_xenc_RecipientKeyInfo_POP_X509Data(struct zxmd_xenc_RecipientKeyInfo_s* x);
struct zxmd_ds_PGPData_s* zxmd_xenc_RecipientKeyInfo_POP_PGPData(struct zxmd_xenc_RecipientKeyInfo_s* x);
struct zxmd_ds_SPKIData_s* zxmd_xenc_RecipientKeyInfo_POP_SPKIData(struct zxmd_xenc_RecipientKeyInfo_s* x);
struct zx_elem_s* zxmd_xenc_RecipientKeyInfo_POP_MgmtData(struct zxmd_xenc_RecipientKeyInfo_s* x);
void zxmd_xenc_RecipientKeyInfo_PUSH_KeyName(struct zxmd_xenc_RecipientKeyInfo_s* x, struct zx_elem_s* y);
void zxmd_xenc_RecipientKeyInfo_PUSH_KeyValue(struct zxmd_xenc_RecipientKeyInfo_s* x, struct zxmd_ds_KeyValue_s* y);
void zxmd_xenc_RecipientKeyInfo_PUSH_RetrievalMethod(struct zxmd_xenc_RecipientKeyInfo_s* x, struct zxmd_ds_RetrievalMethod_s* y);
void zxmd_xenc_RecipientKeyInfo_PUSH_X509Data(struct zxmd_xenc_RecipientKeyInfo_s* x, struct zxmd_ds_X509Data_s* y);
void zxmd_xenc_RecipientKeyInfo_PUSH_PGPData(struct zxmd_xenc_RecipientKeyInfo_s* x, struct zxmd_ds_PGPData_s* y);
void zxmd_xenc_RecipientKeyInfo_PUSH_SPKIData(struct zxmd_xenc_RecipientKeyInfo_s* x, struct zxmd_ds_SPKIData_s* y);
void zxmd_xenc_RecipientKeyInfo_PUSH_MgmtData(struct zxmd_xenc_RecipientKeyInfo_s* x, struct zx_elem_s* y);
void zxmd_xenc_RecipientKeyInfo_PUT_Id(struct zxmd_xenc_RecipientKeyInfo_s* x, struct zx_str_s* y);
void zxmd_xenc_RecipientKeyInfo_PUT_KeyName(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zx_elem_s* y);
void zxmd_xenc_RecipientKeyInfo_PUT_KeyValue(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zxmd_ds_KeyValue_s* y);
void zxmd_xenc_RecipientKeyInfo_PUT_RetrievalMethod(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zxmd_ds_RetrievalMethod_s* y);
void zxmd_xenc_RecipientKeyInfo_PUT_X509Data(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zxmd_ds_X509Data_s* y);
void zxmd_xenc_RecipientKeyInfo_PUT_PGPData(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zxmd_ds_PGPData_s* y);
void zxmd_xenc_RecipientKeyInfo_PUT_SPKIData(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zxmd_ds_SPKIData_s* y);
void zxmd_xenc_RecipientKeyInfo_PUT_MgmtData(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zx_elem_s* y);
void zxmd_xenc_RecipientKeyInfo_ADD_KeyName(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zx_elem_s* z);
void zxmd_xenc_RecipientKeyInfo_ADD_KeyValue(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zxmd_ds_KeyValue_s* z);
void zxmd_xenc_RecipientKeyInfo_ADD_RetrievalMethod(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zxmd_ds_RetrievalMethod_s* z);
void zxmd_xenc_RecipientKeyInfo_ADD_X509Data(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zxmd_ds_X509Data_s* z);
void zxmd_xenc_RecipientKeyInfo_ADD_PGPData(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zxmd_ds_PGPData_s* z);
void zxmd_xenc_RecipientKeyInfo_ADD_SPKIData(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zxmd_ds_SPKIData_s* z);
void zxmd_xenc_RecipientKeyInfo_ADD_MgmtData(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zx_elem_s* z);
void zxmd_xenc_RecipientKeyInfo_DEL_KeyName(struct zxmd_xenc_RecipientKeyInfo_s* x, int n);
void zxmd_xenc_RecipientKeyInfo_DEL_KeyValue(struct zxmd_xenc_RecipientKeyInfo_s* x, int n);
void zxmd_xenc_RecipientKeyInfo_DEL_RetrievalMethod(struct zxmd_xenc_RecipientKeyInfo_s* x, int n);
void zxmd_xenc_RecipientKeyInfo_DEL_X509Data(struct zxmd_xenc_RecipientKeyInfo_s* x, int n);
void zxmd_xenc_RecipientKeyInfo_DEL_PGPData(struct zxmd_xenc_RecipientKeyInfo_s* x, int n);
void zxmd_xenc_RecipientKeyInfo_DEL_SPKIData(struct zxmd_xenc_RecipientKeyInfo_s* x, int n);
void zxmd_xenc_RecipientKeyInfo_DEL_MgmtData(struct zxmd_xenc_RecipientKeyInfo_s* x, int n);
void zxmd_xenc_RecipientKeyInfo_REV_KeyName(struct zxmd_xenc_RecipientKeyInfo_s* x);
void zxmd_xenc_RecipientKeyInfo_REV_KeyValue(struct zxmd_xenc_RecipientKeyInfo_s* x);
void zxmd_xenc_RecipientKeyInfo_REV_RetrievalMethod(struct zxmd_xenc_RecipientKeyInfo_s* x);
void zxmd_xenc_RecipientKeyInfo_REV_X509Data(struct zxmd_xenc_RecipientKeyInfo_s* x);
void zxmd_xenc_RecipientKeyInfo_REV_PGPData(struct zxmd_xenc_RecipientKeyInfo_s* x);
void zxmd_xenc_RecipientKeyInfo_REV_SPKIData(struct zxmd_xenc_RecipientKeyInfo_s* x);
void zxmd_xenc_RecipientKeyInfo_REV_MgmtData(struct zxmd_xenc_RecipientKeyInfo_s* x);

/* -------------------------- xenc_ReferenceList -------------------------- */
/* refby( zxmd_xenc_EncryptedKey_s ) */
#ifndef zxmd_xenc_ReferenceList_EXT
#define zxmd_xenc_ReferenceList_EXT
#endif

struct zxmd_xenc_ReferenceList_s* zxmd_DEC_xenc_ReferenceList(struct zx_ctx* c);
struct zxmd_xenc_ReferenceList_s* zxmd_NEW_xenc_ReferenceList(struct zx_ctx* c);
struct zxmd_xenc_ReferenceList_s* zxmd_DEEP_CLONE_xenc_ReferenceList(struct zx_ctx* c, struct zxmd_xenc_ReferenceList_s* x, int dup_strs);
void zxmd_DUP_STRS_xenc_ReferenceList(struct zx_ctx* c, struct zxmd_xenc_ReferenceList_s* x);
void zxmd_FREE_xenc_ReferenceList(struct zx_ctx* c, struct zxmd_xenc_ReferenceList_s* x, int free_strs);
int zxmd_WALK_SO_xenc_ReferenceList(struct zx_ctx* c, struct zxmd_xenc_ReferenceList_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_xenc_ReferenceList(struct zx_ctx* c, struct zxmd_xenc_ReferenceList_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_xenc_ReferenceList(struct zxmd_xenc_ReferenceList_s* x);
char* zxmd_ENC_SO_xenc_ReferenceList(struct zxmd_xenc_ReferenceList_s* x, char* p);
char* zxmd_ENC_WO_xenc_ReferenceList(struct zxmd_xenc_ReferenceList_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_xenc_ReferenceList(struct zx_ctx* c, struct zxmd_xenc_ReferenceList_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_xenc_ReferenceList(struct zx_ctx* c, struct zxmd_xenc_ReferenceList_s* x);

struct zxmd_xenc_ReferenceList_s {
  ZX_ELEM_EXT
  zxmd_xenc_ReferenceList_EXT
  struct zxmd_xenc_DataReference_s* DataReference;	/* {0,1}  */
  struct zxmd_xenc_KeyReference_s* KeyReference;	/* {0,1}  */
};

struct zxmd_xenc_DataReference_s* zxmd_xenc_ReferenceList_GET_DataReference(struct zxmd_xenc_ReferenceList_s* x, int n);
struct zxmd_xenc_KeyReference_s* zxmd_xenc_ReferenceList_GET_KeyReference(struct zxmd_xenc_ReferenceList_s* x, int n);
int zxmd_xenc_ReferenceList_NUM_DataReference(struct zxmd_xenc_ReferenceList_s* x);
int zxmd_xenc_ReferenceList_NUM_KeyReference(struct zxmd_xenc_ReferenceList_s* x);
struct zxmd_xenc_DataReference_s* zxmd_xenc_ReferenceList_POP_DataReference(struct zxmd_xenc_ReferenceList_s* x);
struct zxmd_xenc_KeyReference_s* zxmd_xenc_ReferenceList_POP_KeyReference(struct zxmd_xenc_ReferenceList_s* x);
void zxmd_xenc_ReferenceList_PUSH_DataReference(struct zxmd_xenc_ReferenceList_s* x, struct zxmd_xenc_DataReference_s* y);
void zxmd_xenc_ReferenceList_PUSH_KeyReference(struct zxmd_xenc_ReferenceList_s* x, struct zxmd_xenc_KeyReference_s* y);
void zxmd_xenc_ReferenceList_PUT_DataReference(struct zxmd_xenc_ReferenceList_s* x, int n, struct zxmd_xenc_DataReference_s* y);
void zxmd_xenc_ReferenceList_PUT_KeyReference(struct zxmd_xenc_ReferenceList_s* x, int n, struct zxmd_xenc_KeyReference_s* y);
void zxmd_xenc_ReferenceList_ADD_DataReference(struct zxmd_xenc_ReferenceList_s* x, int n, struct zxmd_xenc_DataReference_s* z);
void zxmd_xenc_ReferenceList_ADD_KeyReference(struct zxmd_xenc_ReferenceList_s* x, int n, struct zxmd_xenc_KeyReference_s* z);
void zxmd_xenc_ReferenceList_DEL_DataReference(struct zxmd_xenc_ReferenceList_s* x, int n);
void zxmd_xenc_ReferenceList_DEL_KeyReference(struct zxmd_xenc_ReferenceList_s* x, int n);
void zxmd_xenc_ReferenceList_REV_DataReference(struct zxmd_xenc_ReferenceList_s* x);
void zxmd_xenc_ReferenceList_REV_KeyReference(struct zxmd_xenc_ReferenceList_s* x);

/* -------------------------- xenc_Transforms -------------------------- */
/* refby( zxmd_xenc_CipherReference_s ) */
#ifndef zxmd_xenc_Transforms_EXT
#define zxmd_xenc_Transforms_EXT
#endif

struct zxmd_xenc_Transforms_s* zxmd_DEC_xenc_Transforms(struct zx_ctx* c);
struct zxmd_xenc_Transforms_s* zxmd_NEW_xenc_Transforms(struct zx_ctx* c);
struct zxmd_xenc_Transforms_s* zxmd_DEEP_CLONE_xenc_Transforms(struct zx_ctx* c, struct zxmd_xenc_Transforms_s* x, int dup_strs);
void zxmd_DUP_STRS_xenc_Transforms(struct zx_ctx* c, struct zxmd_xenc_Transforms_s* x);
void zxmd_FREE_xenc_Transforms(struct zx_ctx* c, struct zxmd_xenc_Transforms_s* x, int free_strs);
int zxmd_WALK_SO_xenc_Transforms(struct zx_ctx* c, struct zxmd_xenc_Transforms_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_xenc_Transforms(struct zx_ctx* c, struct zxmd_xenc_Transforms_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_xenc_Transforms(struct zxmd_xenc_Transforms_s* x);
char* zxmd_ENC_SO_xenc_Transforms(struct zxmd_xenc_Transforms_s* x, char* p);
char* zxmd_ENC_WO_xenc_Transforms(struct zxmd_xenc_Transforms_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_xenc_Transforms(struct zx_ctx* c, struct zxmd_xenc_Transforms_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_xenc_Transforms(struct zx_ctx* c, struct zxmd_xenc_Transforms_s* x);

struct zxmd_xenc_Transforms_s {
  ZX_ELEM_EXT
  zxmd_xenc_Transforms_EXT
  struct zxmd_ds_Transform_s* Transform;	/* {1,-1} nada */
};

struct zxmd_ds_Transform_s* zxmd_xenc_Transforms_GET_Transform(struct zxmd_xenc_Transforms_s* x, int n);
int zxmd_xenc_Transforms_NUM_Transform(struct zxmd_xenc_Transforms_s* x);
struct zxmd_ds_Transform_s* zxmd_xenc_Transforms_POP_Transform(struct zxmd_xenc_Transforms_s* x);
void zxmd_xenc_Transforms_PUSH_Transform(struct zxmd_xenc_Transforms_s* x, struct zxmd_ds_Transform_s* y);
void zxmd_xenc_Transforms_PUT_Transform(struct zxmd_xenc_Transforms_s* x, int n, struct zxmd_ds_Transform_s* y);
void zxmd_xenc_Transforms_ADD_Transform(struct zxmd_xenc_Transforms_s* x, int n, struct zxmd_ds_Transform_s* z);
void zxmd_xenc_Transforms_DEL_Transform(struct zxmd_xenc_Transforms_s* x, int n);
void zxmd_xenc_Transforms_REV_Transform(struct zxmd_xenc_Transforms_s* x);

/* -------------------------- root -------------------------- */
/* refby( ) */
#ifndef zxmd_root_EXT
#define zxmd_root_EXT
#endif

struct zxmd_root_s* zxmd_DEC_root(struct zx_ctx* c);
struct zxmd_root_s* zxmd_NEW_root(struct zx_ctx* c);
struct zxmd_root_s* zxmd_DEEP_CLONE_root(struct zx_ctx* c, struct zxmd_root_s* x, int dup_strs);
void zxmd_DUP_STRS_root(struct zx_ctx* c, struct zxmd_root_s* x);
void zxmd_FREE_root(struct zx_ctx* c, struct zxmd_root_s* x, int free_strs);
int zxmd_WALK_SO_root(struct zx_ctx* c, struct zxmd_root_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_root(struct zx_ctx* c, struct zxmd_root_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_LEN_root(struct zxmd_root_s* x);
char* zxmd_ENC_SO_root(struct zxmd_root_s* x, char* p);
char* zxmd_ENC_WO_root(struct zxmd_root_s* x, char* p);
struct zx_str_s* zxmd_EASY_ENC_SO_root(struct zx_ctx* c, struct zxmd_root_s* x);
struct zx_str_s* zxmd_EASY_ENC_WO_root(struct zx_ctx* c, struct zxmd_root_s* x);

struct zxmd_root_s {
  ZX_ELEM_EXT
  zxmd_root_EXT
  struct zxmd_md_EntityDescriptor_s* EntityDescriptor;	/* {0,-1} root */
  struct zxmd_md_EntitiesDescriptor_s* EntitiesDescriptor;	/* {0,-1} root */
};

struct zxmd_md_EntityDescriptor_s* zxmd_root_GET_EntityDescriptor(struct zxmd_root_s* x, int n);
struct zxmd_md_EntitiesDescriptor_s* zxmd_root_GET_EntitiesDescriptor(struct zxmd_root_s* x, int n);
int zxmd_root_NUM_EntityDescriptor(struct zxmd_root_s* x);
int zxmd_root_NUM_EntitiesDescriptor(struct zxmd_root_s* x);
struct zxmd_md_EntityDescriptor_s* zxmd_root_POP_EntityDescriptor(struct zxmd_root_s* x);
struct zxmd_md_EntitiesDescriptor_s* zxmd_root_POP_EntitiesDescriptor(struct zxmd_root_s* x);
void zxmd_root_PUSH_EntityDescriptor(struct zxmd_root_s* x, struct zxmd_md_EntityDescriptor_s* y);
void zxmd_root_PUSH_EntitiesDescriptor(struct zxmd_root_s* x, struct zxmd_md_EntitiesDescriptor_s* y);
void zxmd_root_PUT_EntityDescriptor(struct zxmd_root_s* x, int n, struct zxmd_md_EntityDescriptor_s* y);
void zxmd_root_PUT_EntitiesDescriptor(struct zxmd_root_s* x, int n, struct zxmd_md_EntitiesDescriptor_s* y);
void zxmd_root_ADD_EntityDescriptor(struct zxmd_root_s* x, int n, struct zxmd_md_EntityDescriptor_s* z);
void zxmd_root_ADD_EntitiesDescriptor(struct zxmd_root_s* x, int n, struct zxmd_md_EntitiesDescriptor_s* z);
void zxmd_root_DEL_EntityDescriptor(struct zxmd_root_s* x, int n);
void zxmd_root_DEL_EntitiesDescriptor(struct zxmd_root_s* x, int n);
void zxmd_root_REV_EntityDescriptor(struct zxmd_root_s* x);
void zxmd_root_REV_EntitiesDescriptor(struct zxmd_root_s* x);

int zxmd_LEN_simple_elem(struct zx_elem_s* x , int simplelen);
char* zxmd_ENC_SO_simple_elem(struct zx_elem_s* x, char* p, char* simpletag, int simplelen);
char* zxmd_ENC_WO_simple_elem(struct zx_elem_s* x, char* p, char* simpletag, int simplelen);
struct zx_str_s* zxmd_EASY_ENC_SO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, char* simpletag, int simplelen);
struct zx_str_s* zxmd_EASY_ENC_WO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, char* simpletag, int simplelen);
struct zx_elem_s* zxmd_DEC_simple_elem(struct zx_ctx* c, int tok);
struct zx_any_elem_s* zxmd_DEC_wrong_elem(struct zx_ctx* c, char* nam, int namlen);
void zxmd_DUP_STRS_simple_elem(struct zx_ctx* c, struct zx_elem_s* x);
struct zx_elem_s* zxmd_DEEP_CLONE_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, int dup_strs);
void zxmd_FREE_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, int free_strs);
int zxmd_WALK_SO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zxmd_WALK_WO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
struct zx_elem_s* zxmd_NEXT_simple_elem(struct zx_ctx* c, struct zx_elem_s* x);

#endif
