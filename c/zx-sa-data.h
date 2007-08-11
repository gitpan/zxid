/* c/zx-sa-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_sa_data_h
#define _c_zx_sa_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- sa_Action -------------------------- */
/* refby( zx_sa_AuthzDecisionStatement_s zx_sp_AuthzDecisionQuery_s ) */
#ifndef zx_sa_Action_EXT
#define zx_sa_Action_EXT
#endif

struct zx_sa_Action_s* zx_DEC_sa_Action(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa_Action_s* zx_NEW_sa_Action(struct zx_ctx* c);
void zx_FREE_sa_Action(struct zx_ctx* c, struct zx_sa_Action_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa_Action_s* zx_DEEP_CLONE_sa_Action(struct zx_ctx* c, struct zx_sa_Action_s* x, int dup_strs);
void zx_DUP_STRS_sa_Action(struct zx_ctx* c, struct zx_sa_Action_s* x);
int zx_WALK_SO_sa_Action(struct zx_ctx* c, struct zx_sa_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_Action(struct zx_ctx* c, struct zx_sa_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa_Action(struct zx_ctx* c, struct zx_sa_Action_s* x);
int zx_LEN_WO_sa_Action(struct zx_ctx* c, struct zx_sa_Action_s* x);
char* zx_ENC_SO_sa_Action(struct zx_ctx* c, struct zx_sa_Action_s* x, char* p);
char* zx_ENC_WO_sa_Action(struct zx_ctx* c, struct zx_sa_Action_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa_Action(struct zx_ctx* c, struct zx_sa_Action_s* x);
struct zx_str* zx_EASY_ENC_WO_sa_Action(struct zx_ctx* c, struct zx_sa_Action_s* x);

struct zx_sa_Action_s {
  ZX_ELEM_EXT
  zx_sa_Action_EXT
  struct zx_str* Namespace;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sa_Action_GET_Namespace(struct zx_sa_Action_s* x);





void zx_sa_Action_PUT_Namespace(struct zx_sa_Action_s* x, struct zx_str* y);





#endif
/* -------------------------- sa_Advice -------------------------- */
/* refby( zx_sa_Assertion_s ) */
#ifndef zx_sa_Advice_EXT
#define zx_sa_Advice_EXT
#endif

struct zx_sa_Advice_s* zx_DEC_sa_Advice(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa_Advice_s* zx_NEW_sa_Advice(struct zx_ctx* c);
void zx_FREE_sa_Advice(struct zx_ctx* c, struct zx_sa_Advice_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa_Advice_s* zx_DEEP_CLONE_sa_Advice(struct zx_ctx* c, struct zx_sa_Advice_s* x, int dup_strs);
void zx_DUP_STRS_sa_Advice(struct zx_ctx* c, struct zx_sa_Advice_s* x);
int zx_WALK_SO_sa_Advice(struct zx_ctx* c, struct zx_sa_Advice_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_Advice(struct zx_ctx* c, struct zx_sa_Advice_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa_Advice(struct zx_ctx* c, struct zx_sa_Advice_s* x);
int zx_LEN_WO_sa_Advice(struct zx_ctx* c, struct zx_sa_Advice_s* x);
char* zx_ENC_SO_sa_Advice(struct zx_ctx* c, struct zx_sa_Advice_s* x, char* p);
char* zx_ENC_WO_sa_Advice(struct zx_ctx* c, struct zx_sa_Advice_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa_Advice(struct zx_ctx* c, struct zx_sa_Advice_s* x);
struct zx_str* zx_EASY_ENC_WO_sa_Advice(struct zx_ctx* c, struct zx_sa_Advice_s* x);

struct zx_sa_Advice_s {
  ZX_ELEM_EXT
  zx_sa_Advice_EXT
  struct zx_elem_s* AssertionIDRef;	/* {0,-1} xs:NCName */
  struct zx_elem_s* AssertionURIRef;	/* {0,-1} xs:anyURI */
  struct zx_sa_Assertion_s* Assertion;	/* {0,-1} nada */
  struct zx_sa_EncryptedAssertion_s* EncryptedAssertion;	/* {0,-1} nada */
  struct zx_sa11_Assertion_s* sa11_Assertion;	/* {0,-1} nada */
  struct zx_ff12_Assertion_s* ff12_Assertion;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_sa_Advice_GET_AssertionIDRef(struct zx_sa_Advice_s* x, int n);
struct zx_elem_s* zx_sa_Advice_GET_AssertionURIRef(struct zx_sa_Advice_s* x, int n);
struct zx_sa_Assertion_s* zx_sa_Advice_GET_Assertion(struct zx_sa_Advice_s* x, int n);
struct zx_sa_EncryptedAssertion_s* zx_sa_Advice_GET_EncryptedAssertion(struct zx_sa_Advice_s* x, int n);
struct zx_sa11_Assertion_s* zx_sa_Advice_GET_sa11_Assertion(struct zx_sa_Advice_s* x, int n);
struct zx_ff12_Assertion_s* zx_sa_Advice_GET_ff12_Assertion(struct zx_sa_Advice_s* x, int n);

int zx_sa_Advice_NUM_AssertionIDRef(struct zx_sa_Advice_s* x);
int zx_sa_Advice_NUM_AssertionURIRef(struct zx_sa_Advice_s* x);
int zx_sa_Advice_NUM_Assertion(struct zx_sa_Advice_s* x);
int zx_sa_Advice_NUM_EncryptedAssertion(struct zx_sa_Advice_s* x);
int zx_sa_Advice_NUM_sa11_Assertion(struct zx_sa_Advice_s* x);
int zx_sa_Advice_NUM_ff12_Assertion(struct zx_sa_Advice_s* x);

struct zx_elem_s* zx_sa_Advice_POP_AssertionIDRef(struct zx_sa_Advice_s* x);
struct zx_elem_s* zx_sa_Advice_POP_AssertionURIRef(struct zx_sa_Advice_s* x);
struct zx_sa_Assertion_s* zx_sa_Advice_POP_Assertion(struct zx_sa_Advice_s* x);
struct zx_sa_EncryptedAssertion_s* zx_sa_Advice_POP_EncryptedAssertion(struct zx_sa_Advice_s* x);
struct zx_sa11_Assertion_s* zx_sa_Advice_POP_sa11_Assertion(struct zx_sa_Advice_s* x);
struct zx_ff12_Assertion_s* zx_sa_Advice_POP_ff12_Assertion(struct zx_sa_Advice_s* x);

void zx_sa_Advice_PUSH_AssertionIDRef(struct zx_sa_Advice_s* x, struct zx_elem_s* y);
void zx_sa_Advice_PUSH_AssertionURIRef(struct zx_sa_Advice_s* x, struct zx_elem_s* y);
void zx_sa_Advice_PUSH_Assertion(struct zx_sa_Advice_s* x, struct zx_sa_Assertion_s* y);
void zx_sa_Advice_PUSH_EncryptedAssertion(struct zx_sa_Advice_s* x, struct zx_sa_EncryptedAssertion_s* y);
void zx_sa_Advice_PUSH_sa11_Assertion(struct zx_sa_Advice_s* x, struct zx_sa11_Assertion_s* y);
void zx_sa_Advice_PUSH_ff12_Assertion(struct zx_sa_Advice_s* x, struct zx_ff12_Assertion_s* y);


void zx_sa_Advice_PUT_AssertionIDRef(struct zx_sa_Advice_s* x, int n, struct zx_elem_s* y);
void zx_sa_Advice_PUT_AssertionURIRef(struct zx_sa_Advice_s* x, int n, struct zx_elem_s* y);
void zx_sa_Advice_PUT_Assertion(struct zx_sa_Advice_s* x, int n, struct zx_sa_Assertion_s* y);
void zx_sa_Advice_PUT_EncryptedAssertion(struct zx_sa_Advice_s* x, int n, struct zx_sa_EncryptedAssertion_s* y);
void zx_sa_Advice_PUT_sa11_Assertion(struct zx_sa_Advice_s* x, int n, struct zx_sa11_Assertion_s* y);
void zx_sa_Advice_PUT_ff12_Assertion(struct zx_sa_Advice_s* x, int n, struct zx_ff12_Assertion_s* y);

void zx_sa_Advice_ADD_AssertionIDRef(struct zx_sa_Advice_s* x, int n, struct zx_elem_s* z);
void zx_sa_Advice_ADD_AssertionURIRef(struct zx_sa_Advice_s* x, int n, struct zx_elem_s* z);
void zx_sa_Advice_ADD_Assertion(struct zx_sa_Advice_s* x, int n, struct zx_sa_Assertion_s* z);
void zx_sa_Advice_ADD_EncryptedAssertion(struct zx_sa_Advice_s* x, int n, struct zx_sa_EncryptedAssertion_s* z);
void zx_sa_Advice_ADD_sa11_Assertion(struct zx_sa_Advice_s* x, int n, struct zx_sa11_Assertion_s* z);
void zx_sa_Advice_ADD_ff12_Assertion(struct zx_sa_Advice_s* x, int n, struct zx_ff12_Assertion_s* z);

void zx_sa_Advice_DEL_AssertionIDRef(struct zx_sa_Advice_s* x, int n);
void zx_sa_Advice_DEL_AssertionURIRef(struct zx_sa_Advice_s* x, int n);
void zx_sa_Advice_DEL_Assertion(struct zx_sa_Advice_s* x, int n);
void zx_sa_Advice_DEL_EncryptedAssertion(struct zx_sa_Advice_s* x, int n);
void zx_sa_Advice_DEL_sa11_Assertion(struct zx_sa_Advice_s* x, int n);
void zx_sa_Advice_DEL_ff12_Assertion(struct zx_sa_Advice_s* x, int n);

void zx_sa_Advice_REV_AssertionIDRef(struct zx_sa_Advice_s* x);
void zx_sa_Advice_REV_AssertionURIRef(struct zx_sa_Advice_s* x);
void zx_sa_Advice_REV_Assertion(struct zx_sa_Advice_s* x);
void zx_sa_Advice_REV_EncryptedAssertion(struct zx_sa_Advice_s* x);
void zx_sa_Advice_REV_sa11_Assertion(struct zx_sa_Advice_s* x);
void zx_sa_Advice_REV_ff12_Assertion(struct zx_sa_Advice_s* x);

#endif
/* -------------------------- sa_Assertion -------------------------- */
/* refby( zx_gl_Credential_s zx_wsse_Security_s zx_cb_Credential_s zx_b_TargetIdentity_s zx_sa11_Advice_s zx_sa_Evidence_s zx_sec_Token_s zx_idp_AssertionItem_s zx_sa_Advice_s zx_sp_Response_s ) */
#ifndef zx_sa_Assertion_EXT
#define zx_sa_Assertion_EXT
#endif

struct zx_sa_Assertion_s* zx_DEC_sa_Assertion(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa_Assertion_s* zx_NEW_sa_Assertion(struct zx_ctx* c);
void zx_FREE_sa_Assertion(struct zx_ctx* c, struct zx_sa_Assertion_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa_Assertion_s* zx_DEEP_CLONE_sa_Assertion(struct zx_ctx* c, struct zx_sa_Assertion_s* x, int dup_strs);
void zx_DUP_STRS_sa_Assertion(struct zx_ctx* c, struct zx_sa_Assertion_s* x);
int zx_WALK_SO_sa_Assertion(struct zx_ctx* c, struct zx_sa_Assertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_Assertion(struct zx_ctx* c, struct zx_sa_Assertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa_Assertion(struct zx_ctx* c, struct zx_sa_Assertion_s* x);
int zx_LEN_WO_sa_Assertion(struct zx_ctx* c, struct zx_sa_Assertion_s* x);
char* zx_ENC_SO_sa_Assertion(struct zx_ctx* c, struct zx_sa_Assertion_s* x, char* p);
char* zx_ENC_WO_sa_Assertion(struct zx_ctx* c, struct zx_sa_Assertion_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa_Assertion(struct zx_ctx* c, struct zx_sa_Assertion_s* x);
struct zx_str* zx_EASY_ENC_WO_sa_Assertion(struct zx_ctx* c, struct zx_sa_Assertion_s* x);

struct zx_sa_Assertion_s {
  ZX_ELEM_EXT
  zx_sa_Assertion_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {1,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sa_Subject_s* Subject;	/* {0,1} nada */
  struct zx_sa_Conditions_s* Conditions;	/* {0,1} nada */
  struct zx_sa_Advice_s* Advice;	/* {0,1} nada */
  struct zx_elem_s* Statement;	/* {0,-1} sa:StatementAbstractType */
  struct zx_sa_AuthnStatement_s* AuthnStatement;	/* {0,-1} nada */
  struct zx_sa_AuthzDecisionStatement_s* AuthzDecisionStatement;	/* {0,-1} nada */
  struct zx_sa_AttributeStatement_s* AttributeStatement;	/* {0,-1} nada */
  struct zx_xasa_XACMLAuthzDecisionStatement_s* XACMLAuthzDecisionStatement;	/* {0,-1} nada */
  struct zx_xasa_XACMLPolicyStatement_s* XACMLPolicyStatement;	/* {0,-1} nada */
  struct zx_str* Version;	/* {1,1} attribute xa:VersionType */
  struct zx_str* ID;	/* {1,1} attribute xs:ID */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sa_Assertion_GET_Version(struct zx_sa_Assertion_s* x);
struct zx_str* zx_sa_Assertion_GET_ID(struct zx_sa_Assertion_s* x);
struct zx_str* zx_sa_Assertion_GET_IssueInstant(struct zx_sa_Assertion_s* x);

struct zx_sa_Issuer_s* zx_sa_Assertion_GET_Issuer(struct zx_sa_Assertion_s* x, int n);
struct zx_ds_Signature_s* zx_sa_Assertion_GET_Signature(struct zx_sa_Assertion_s* x, int n);
struct zx_sa_Subject_s* zx_sa_Assertion_GET_Subject(struct zx_sa_Assertion_s* x, int n);
struct zx_sa_Conditions_s* zx_sa_Assertion_GET_Conditions(struct zx_sa_Assertion_s* x, int n);
struct zx_sa_Advice_s* zx_sa_Assertion_GET_Advice(struct zx_sa_Assertion_s* x, int n);
struct zx_elem_s* zx_sa_Assertion_GET_Statement(struct zx_sa_Assertion_s* x, int n);
struct zx_sa_AuthnStatement_s* zx_sa_Assertion_GET_AuthnStatement(struct zx_sa_Assertion_s* x, int n);
struct zx_sa_AuthzDecisionStatement_s* zx_sa_Assertion_GET_AuthzDecisionStatement(struct zx_sa_Assertion_s* x, int n);
struct zx_sa_AttributeStatement_s* zx_sa_Assertion_GET_AttributeStatement(struct zx_sa_Assertion_s* x, int n);
struct zx_xasa_XACMLAuthzDecisionStatement_s* zx_sa_Assertion_GET_XACMLAuthzDecisionStatement(struct zx_sa_Assertion_s* x, int n);
struct zx_xasa_XACMLPolicyStatement_s* zx_sa_Assertion_GET_XACMLPolicyStatement(struct zx_sa_Assertion_s* x, int n);

int zx_sa_Assertion_NUM_Issuer(struct zx_sa_Assertion_s* x);
int zx_sa_Assertion_NUM_Signature(struct zx_sa_Assertion_s* x);
int zx_sa_Assertion_NUM_Subject(struct zx_sa_Assertion_s* x);
int zx_sa_Assertion_NUM_Conditions(struct zx_sa_Assertion_s* x);
int zx_sa_Assertion_NUM_Advice(struct zx_sa_Assertion_s* x);
int zx_sa_Assertion_NUM_Statement(struct zx_sa_Assertion_s* x);
int zx_sa_Assertion_NUM_AuthnStatement(struct zx_sa_Assertion_s* x);
int zx_sa_Assertion_NUM_AuthzDecisionStatement(struct zx_sa_Assertion_s* x);
int zx_sa_Assertion_NUM_AttributeStatement(struct zx_sa_Assertion_s* x);
int zx_sa_Assertion_NUM_XACMLAuthzDecisionStatement(struct zx_sa_Assertion_s* x);
int zx_sa_Assertion_NUM_XACMLPolicyStatement(struct zx_sa_Assertion_s* x);

struct zx_sa_Issuer_s* zx_sa_Assertion_POP_Issuer(struct zx_sa_Assertion_s* x);
struct zx_ds_Signature_s* zx_sa_Assertion_POP_Signature(struct zx_sa_Assertion_s* x);
struct zx_sa_Subject_s* zx_sa_Assertion_POP_Subject(struct zx_sa_Assertion_s* x);
struct zx_sa_Conditions_s* zx_sa_Assertion_POP_Conditions(struct zx_sa_Assertion_s* x);
struct zx_sa_Advice_s* zx_sa_Assertion_POP_Advice(struct zx_sa_Assertion_s* x);
struct zx_elem_s* zx_sa_Assertion_POP_Statement(struct zx_sa_Assertion_s* x);
struct zx_sa_AuthnStatement_s* zx_sa_Assertion_POP_AuthnStatement(struct zx_sa_Assertion_s* x);
struct zx_sa_AuthzDecisionStatement_s* zx_sa_Assertion_POP_AuthzDecisionStatement(struct zx_sa_Assertion_s* x);
struct zx_sa_AttributeStatement_s* zx_sa_Assertion_POP_AttributeStatement(struct zx_sa_Assertion_s* x);
struct zx_xasa_XACMLAuthzDecisionStatement_s* zx_sa_Assertion_POP_XACMLAuthzDecisionStatement(struct zx_sa_Assertion_s* x);
struct zx_xasa_XACMLPolicyStatement_s* zx_sa_Assertion_POP_XACMLPolicyStatement(struct zx_sa_Assertion_s* x);

void zx_sa_Assertion_PUSH_Issuer(struct zx_sa_Assertion_s* x, struct zx_sa_Issuer_s* y);
void zx_sa_Assertion_PUSH_Signature(struct zx_sa_Assertion_s* x, struct zx_ds_Signature_s* y);
void zx_sa_Assertion_PUSH_Subject(struct zx_sa_Assertion_s* x, struct zx_sa_Subject_s* y);
void zx_sa_Assertion_PUSH_Conditions(struct zx_sa_Assertion_s* x, struct zx_sa_Conditions_s* y);
void zx_sa_Assertion_PUSH_Advice(struct zx_sa_Assertion_s* x, struct zx_sa_Advice_s* y);
void zx_sa_Assertion_PUSH_Statement(struct zx_sa_Assertion_s* x, struct zx_elem_s* y);
void zx_sa_Assertion_PUSH_AuthnStatement(struct zx_sa_Assertion_s* x, struct zx_sa_AuthnStatement_s* y);
void zx_sa_Assertion_PUSH_AuthzDecisionStatement(struct zx_sa_Assertion_s* x, struct zx_sa_AuthzDecisionStatement_s* y);
void zx_sa_Assertion_PUSH_AttributeStatement(struct zx_sa_Assertion_s* x, struct zx_sa_AttributeStatement_s* y);
void zx_sa_Assertion_PUSH_XACMLAuthzDecisionStatement(struct zx_sa_Assertion_s* x, struct zx_xasa_XACMLAuthzDecisionStatement_s* y);
void zx_sa_Assertion_PUSH_XACMLPolicyStatement(struct zx_sa_Assertion_s* x, struct zx_xasa_XACMLPolicyStatement_s* y);

void zx_sa_Assertion_PUT_Version(struct zx_sa_Assertion_s* x, struct zx_str* y);
void zx_sa_Assertion_PUT_ID(struct zx_sa_Assertion_s* x, struct zx_str* y);
void zx_sa_Assertion_PUT_IssueInstant(struct zx_sa_Assertion_s* x, struct zx_str* y);

void zx_sa_Assertion_PUT_Issuer(struct zx_sa_Assertion_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sa_Assertion_PUT_Signature(struct zx_sa_Assertion_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sa_Assertion_PUT_Subject(struct zx_sa_Assertion_s* x, int n, struct zx_sa_Subject_s* y);
void zx_sa_Assertion_PUT_Conditions(struct zx_sa_Assertion_s* x, int n, struct zx_sa_Conditions_s* y);
void zx_sa_Assertion_PUT_Advice(struct zx_sa_Assertion_s* x, int n, struct zx_sa_Advice_s* y);
void zx_sa_Assertion_PUT_Statement(struct zx_sa_Assertion_s* x, int n, struct zx_elem_s* y);
void zx_sa_Assertion_PUT_AuthnStatement(struct zx_sa_Assertion_s* x, int n, struct zx_sa_AuthnStatement_s* y);
void zx_sa_Assertion_PUT_AuthzDecisionStatement(struct zx_sa_Assertion_s* x, int n, struct zx_sa_AuthzDecisionStatement_s* y);
void zx_sa_Assertion_PUT_AttributeStatement(struct zx_sa_Assertion_s* x, int n, struct zx_sa_AttributeStatement_s* y);
void zx_sa_Assertion_PUT_XACMLAuthzDecisionStatement(struct zx_sa_Assertion_s* x, int n, struct zx_xasa_XACMLAuthzDecisionStatement_s* y);
void zx_sa_Assertion_PUT_XACMLPolicyStatement(struct zx_sa_Assertion_s* x, int n, struct zx_xasa_XACMLPolicyStatement_s* y);

void zx_sa_Assertion_ADD_Issuer(struct zx_sa_Assertion_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sa_Assertion_ADD_Signature(struct zx_sa_Assertion_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sa_Assertion_ADD_Subject(struct zx_sa_Assertion_s* x, int n, struct zx_sa_Subject_s* z);
void zx_sa_Assertion_ADD_Conditions(struct zx_sa_Assertion_s* x, int n, struct zx_sa_Conditions_s* z);
void zx_sa_Assertion_ADD_Advice(struct zx_sa_Assertion_s* x, int n, struct zx_sa_Advice_s* z);
void zx_sa_Assertion_ADD_Statement(struct zx_sa_Assertion_s* x, int n, struct zx_elem_s* z);
void zx_sa_Assertion_ADD_AuthnStatement(struct zx_sa_Assertion_s* x, int n, struct zx_sa_AuthnStatement_s* z);
void zx_sa_Assertion_ADD_AuthzDecisionStatement(struct zx_sa_Assertion_s* x, int n, struct zx_sa_AuthzDecisionStatement_s* z);
void zx_sa_Assertion_ADD_AttributeStatement(struct zx_sa_Assertion_s* x, int n, struct zx_sa_AttributeStatement_s* z);
void zx_sa_Assertion_ADD_XACMLAuthzDecisionStatement(struct zx_sa_Assertion_s* x, int n, struct zx_xasa_XACMLAuthzDecisionStatement_s* z);
void zx_sa_Assertion_ADD_XACMLPolicyStatement(struct zx_sa_Assertion_s* x, int n, struct zx_xasa_XACMLPolicyStatement_s* z);

void zx_sa_Assertion_DEL_Issuer(struct zx_sa_Assertion_s* x, int n);
void zx_sa_Assertion_DEL_Signature(struct zx_sa_Assertion_s* x, int n);
void zx_sa_Assertion_DEL_Subject(struct zx_sa_Assertion_s* x, int n);
void zx_sa_Assertion_DEL_Conditions(struct zx_sa_Assertion_s* x, int n);
void zx_sa_Assertion_DEL_Advice(struct zx_sa_Assertion_s* x, int n);
void zx_sa_Assertion_DEL_Statement(struct zx_sa_Assertion_s* x, int n);
void zx_sa_Assertion_DEL_AuthnStatement(struct zx_sa_Assertion_s* x, int n);
void zx_sa_Assertion_DEL_AuthzDecisionStatement(struct zx_sa_Assertion_s* x, int n);
void zx_sa_Assertion_DEL_AttributeStatement(struct zx_sa_Assertion_s* x, int n);
void zx_sa_Assertion_DEL_XACMLAuthzDecisionStatement(struct zx_sa_Assertion_s* x, int n);
void zx_sa_Assertion_DEL_XACMLPolicyStatement(struct zx_sa_Assertion_s* x, int n);

void zx_sa_Assertion_REV_Issuer(struct zx_sa_Assertion_s* x);
void zx_sa_Assertion_REV_Signature(struct zx_sa_Assertion_s* x);
void zx_sa_Assertion_REV_Subject(struct zx_sa_Assertion_s* x);
void zx_sa_Assertion_REV_Conditions(struct zx_sa_Assertion_s* x);
void zx_sa_Assertion_REV_Advice(struct zx_sa_Assertion_s* x);
void zx_sa_Assertion_REV_Statement(struct zx_sa_Assertion_s* x);
void zx_sa_Assertion_REV_AuthnStatement(struct zx_sa_Assertion_s* x);
void zx_sa_Assertion_REV_AuthzDecisionStatement(struct zx_sa_Assertion_s* x);
void zx_sa_Assertion_REV_AttributeStatement(struct zx_sa_Assertion_s* x);
void zx_sa_Assertion_REV_XACMLAuthzDecisionStatement(struct zx_sa_Assertion_s* x);
void zx_sa_Assertion_REV_XACMLPolicyStatement(struct zx_sa_Assertion_s* x);

#endif
/* -------------------------- sa_Attribute -------------------------- */
/* refby( zx_sa_AttributeStatement_s zx_sp_AttributeQuery_s zx_md_AttributeAuthorityDescriptor_s zx_md_IDPSSODescriptor_s ) */
#ifndef zx_sa_Attribute_EXT
#define zx_sa_Attribute_EXT
#endif

struct zx_sa_Attribute_s* zx_DEC_sa_Attribute(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa_Attribute_s* zx_NEW_sa_Attribute(struct zx_ctx* c);
void zx_FREE_sa_Attribute(struct zx_ctx* c, struct zx_sa_Attribute_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa_Attribute_s* zx_DEEP_CLONE_sa_Attribute(struct zx_ctx* c, struct zx_sa_Attribute_s* x, int dup_strs);
void zx_DUP_STRS_sa_Attribute(struct zx_ctx* c, struct zx_sa_Attribute_s* x);
int zx_WALK_SO_sa_Attribute(struct zx_ctx* c, struct zx_sa_Attribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_Attribute(struct zx_ctx* c, struct zx_sa_Attribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa_Attribute(struct zx_ctx* c, struct zx_sa_Attribute_s* x);
int zx_LEN_WO_sa_Attribute(struct zx_ctx* c, struct zx_sa_Attribute_s* x);
char* zx_ENC_SO_sa_Attribute(struct zx_ctx* c, struct zx_sa_Attribute_s* x, char* p);
char* zx_ENC_WO_sa_Attribute(struct zx_ctx* c, struct zx_sa_Attribute_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa_Attribute(struct zx_ctx* c, struct zx_sa_Attribute_s* x);
struct zx_str* zx_EASY_ENC_WO_sa_Attribute(struct zx_ctx* c, struct zx_sa_Attribute_s* x);

struct zx_sa_Attribute_s {
  ZX_ELEM_EXT
  zx_sa_Attribute_EXT
  struct zx_sa_AttributeValue_s* AttributeValue;	/* {0,-1} nada */
  struct zx_str* Name;	/* {1,1} attribute xs:anyURI */
  struct zx_str* NameFormat;	/* {0,1} attribute xs:anyURI */
  struct zx_str* FriendlyName;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sa_Attribute_GET_Name(struct zx_sa_Attribute_s* x);
struct zx_str* zx_sa_Attribute_GET_NameFormat(struct zx_sa_Attribute_s* x);
struct zx_str* zx_sa_Attribute_GET_FriendlyName(struct zx_sa_Attribute_s* x);

struct zx_sa_AttributeValue_s* zx_sa_Attribute_GET_AttributeValue(struct zx_sa_Attribute_s* x, int n);

int zx_sa_Attribute_NUM_AttributeValue(struct zx_sa_Attribute_s* x);

struct zx_sa_AttributeValue_s* zx_sa_Attribute_POP_AttributeValue(struct zx_sa_Attribute_s* x);

void zx_sa_Attribute_PUSH_AttributeValue(struct zx_sa_Attribute_s* x, struct zx_sa_AttributeValue_s* y);

void zx_sa_Attribute_PUT_Name(struct zx_sa_Attribute_s* x, struct zx_str* y);
void zx_sa_Attribute_PUT_NameFormat(struct zx_sa_Attribute_s* x, struct zx_str* y);
void zx_sa_Attribute_PUT_FriendlyName(struct zx_sa_Attribute_s* x, struct zx_str* y);

void zx_sa_Attribute_PUT_AttributeValue(struct zx_sa_Attribute_s* x, int n, struct zx_sa_AttributeValue_s* y);

void zx_sa_Attribute_ADD_AttributeValue(struct zx_sa_Attribute_s* x, int n, struct zx_sa_AttributeValue_s* z);

void zx_sa_Attribute_DEL_AttributeValue(struct zx_sa_Attribute_s* x, int n);

void zx_sa_Attribute_REV_AttributeValue(struct zx_sa_Attribute_s* x);

#endif
/* -------------------------- sa_AttributeStatement -------------------------- */
/* refby( zx_sa_Assertion_s zx_idp_MEDInfo_s ) */
#ifndef zx_sa_AttributeStatement_EXT
#define zx_sa_AttributeStatement_EXT
#endif

struct zx_sa_AttributeStatement_s* zx_DEC_sa_AttributeStatement(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa_AttributeStatement_s* zx_NEW_sa_AttributeStatement(struct zx_ctx* c);
void zx_FREE_sa_AttributeStatement(struct zx_ctx* c, struct zx_sa_AttributeStatement_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa_AttributeStatement_s* zx_DEEP_CLONE_sa_AttributeStatement(struct zx_ctx* c, struct zx_sa_AttributeStatement_s* x, int dup_strs);
void zx_DUP_STRS_sa_AttributeStatement(struct zx_ctx* c, struct zx_sa_AttributeStatement_s* x);
int zx_WALK_SO_sa_AttributeStatement(struct zx_ctx* c, struct zx_sa_AttributeStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_AttributeStatement(struct zx_ctx* c, struct zx_sa_AttributeStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa_AttributeStatement(struct zx_ctx* c, struct zx_sa_AttributeStatement_s* x);
int zx_LEN_WO_sa_AttributeStatement(struct zx_ctx* c, struct zx_sa_AttributeStatement_s* x);
char* zx_ENC_SO_sa_AttributeStatement(struct zx_ctx* c, struct zx_sa_AttributeStatement_s* x, char* p);
char* zx_ENC_WO_sa_AttributeStatement(struct zx_ctx* c, struct zx_sa_AttributeStatement_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa_AttributeStatement(struct zx_ctx* c, struct zx_sa_AttributeStatement_s* x);
struct zx_str* zx_EASY_ENC_WO_sa_AttributeStatement(struct zx_ctx* c, struct zx_sa_AttributeStatement_s* x);

struct zx_sa_AttributeStatement_s {
  ZX_ELEM_EXT
  zx_sa_AttributeStatement_EXT
  struct zx_sa_Attribute_s* Attribute;	/* {0,-1} nada */
  struct zx_sa_EncryptedAttribute_s* EncryptedAttribute;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_sa_Attribute_s* zx_sa_AttributeStatement_GET_Attribute(struct zx_sa_AttributeStatement_s* x, int n);
struct zx_sa_EncryptedAttribute_s* zx_sa_AttributeStatement_GET_EncryptedAttribute(struct zx_sa_AttributeStatement_s* x, int n);

int zx_sa_AttributeStatement_NUM_Attribute(struct zx_sa_AttributeStatement_s* x);
int zx_sa_AttributeStatement_NUM_EncryptedAttribute(struct zx_sa_AttributeStatement_s* x);

struct zx_sa_Attribute_s* zx_sa_AttributeStatement_POP_Attribute(struct zx_sa_AttributeStatement_s* x);
struct zx_sa_EncryptedAttribute_s* zx_sa_AttributeStatement_POP_EncryptedAttribute(struct zx_sa_AttributeStatement_s* x);

void zx_sa_AttributeStatement_PUSH_Attribute(struct zx_sa_AttributeStatement_s* x, struct zx_sa_Attribute_s* y);
void zx_sa_AttributeStatement_PUSH_EncryptedAttribute(struct zx_sa_AttributeStatement_s* x, struct zx_sa_EncryptedAttribute_s* y);


void zx_sa_AttributeStatement_PUT_Attribute(struct zx_sa_AttributeStatement_s* x, int n, struct zx_sa_Attribute_s* y);
void zx_sa_AttributeStatement_PUT_EncryptedAttribute(struct zx_sa_AttributeStatement_s* x, int n, struct zx_sa_EncryptedAttribute_s* y);

void zx_sa_AttributeStatement_ADD_Attribute(struct zx_sa_AttributeStatement_s* x, int n, struct zx_sa_Attribute_s* z);
void zx_sa_AttributeStatement_ADD_EncryptedAttribute(struct zx_sa_AttributeStatement_s* x, int n, struct zx_sa_EncryptedAttribute_s* z);

void zx_sa_AttributeStatement_DEL_Attribute(struct zx_sa_AttributeStatement_s* x, int n);
void zx_sa_AttributeStatement_DEL_EncryptedAttribute(struct zx_sa_AttributeStatement_s* x, int n);

void zx_sa_AttributeStatement_REV_Attribute(struct zx_sa_AttributeStatement_s* x);
void zx_sa_AttributeStatement_REV_EncryptedAttribute(struct zx_sa_AttributeStatement_s* x);

#endif
/* -------------------------- sa_AttributeValue -------------------------- */
/* refby( zx_sa_TestElem_s zx_sa_Attribute_s zx_md_RequestedAttribute_s ) */
#ifndef zx_sa_AttributeValue_EXT
#define zx_sa_AttributeValue_EXT
#endif

struct zx_sa_AttributeValue_s* zx_DEC_sa_AttributeValue(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa_AttributeValue_s* zx_NEW_sa_AttributeValue(struct zx_ctx* c);
void zx_FREE_sa_AttributeValue(struct zx_ctx* c, struct zx_sa_AttributeValue_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa_AttributeValue_s* zx_DEEP_CLONE_sa_AttributeValue(struct zx_ctx* c, struct zx_sa_AttributeValue_s* x, int dup_strs);
void zx_DUP_STRS_sa_AttributeValue(struct zx_ctx* c, struct zx_sa_AttributeValue_s* x);
int zx_WALK_SO_sa_AttributeValue(struct zx_ctx* c, struct zx_sa_AttributeValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_AttributeValue(struct zx_ctx* c, struct zx_sa_AttributeValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa_AttributeValue(struct zx_ctx* c, struct zx_sa_AttributeValue_s* x);
int zx_LEN_WO_sa_AttributeValue(struct zx_ctx* c, struct zx_sa_AttributeValue_s* x);
char* zx_ENC_SO_sa_AttributeValue(struct zx_ctx* c, struct zx_sa_AttributeValue_s* x, char* p);
char* zx_ENC_WO_sa_AttributeValue(struct zx_ctx* c, struct zx_sa_AttributeValue_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa_AttributeValue(struct zx_ctx* c, struct zx_sa_AttributeValue_s* x);
struct zx_str* zx_EASY_ENC_WO_sa_AttributeValue(struct zx_ctx* c, struct zx_sa_AttributeValue_s* x);

struct zx_sa_AttributeValue_s {
  ZX_ELEM_EXT
  zx_sa_AttributeValue_EXT
  struct zx_di12_ResourceOffering_s* ResourceOffering;	/* {0,-1} nada */
  struct zx_a_EndpointReference_s* EndpointReference;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_di12_ResourceOffering_s* zx_sa_AttributeValue_GET_ResourceOffering(struct zx_sa_AttributeValue_s* x, int n);
struct zx_a_EndpointReference_s* zx_sa_AttributeValue_GET_EndpointReference(struct zx_sa_AttributeValue_s* x, int n);

int zx_sa_AttributeValue_NUM_ResourceOffering(struct zx_sa_AttributeValue_s* x);
int zx_sa_AttributeValue_NUM_EndpointReference(struct zx_sa_AttributeValue_s* x);

struct zx_di12_ResourceOffering_s* zx_sa_AttributeValue_POP_ResourceOffering(struct zx_sa_AttributeValue_s* x);
struct zx_a_EndpointReference_s* zx_sa_AttributeValue_POP_EndpointReference(struct zx_sa_AttributeValue_s* x);

void zx_sa_AttributeValue_PUSH_ResourceOffering(struct zx_sa_AttributeValue_s* x, struct zx_di12_ResourceOffering_s* y);
void zx_sa_AttributeValue_PUSH_EndpointReference(struct zx_sa_AttributeValue_s* x, struct zx_a_EndpointReference_s* y);


void zx_sa_AttributeValue_PUT_ResourceOffering(struct zx_sa_AttributeValue_s* x, int n, struct zx_di12_ResourceOffering_s* y);
void zx_sa_AttributeValue_PUT_EndpointReference(struct zx_sa_AttributeValue_s* x, int n, struct zx_a_EndpointReference_s* y);

void zx_sa_AttributeValue_ADD_ResourceOffering(struct zx_sa_AttributeValue_s* x, int n, struct zx_di12_ResourceOffering_s* z);
void zx_sa_AttributeValue_ADD_EndpointReference(struct zx_sa_AttributeValue_s* x, int n, struct zx_a_EndpointReference_s* z);

void zx_sa_AttributeValue_DEL_ResourceOffering(struct zx_sa_AttributeValue_s* x, int n);
void zx_sa_AttributeValue_DEL_EndpointReference(struct zx_sa_AttributeValue_s* x, int n);

void zx_sa_AttributeValue_REV_ResourceOffering(struct zx_sa_AttributeValue_s* x);
void zx_sa_AttributeValue_REV_EndpointReference(struct zx_sa_AttributeValue_s* x);

#endif
/* -------------------------- sa_AudienceRestriction -------------------------- */
/* refby( zx_sa_Conditions_s ) */
#ifndef zx_sa_AudienceRestriction_EXT
#define zx_sa_AudienceRestriction_EXT
#endif

struct zx_sa_AudienceRestriction_s* zx_DEC_sa_AudienceRestriction(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa_AudienceRestriction_s* zx_NEW_sa_AudienceRestriction(struct zx_ctx* c);
void zx_FREE_sa_AudienceRestriction(struct zx_ctx* c, struct zx_sa_AudienceRestriction_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa_AudienceRestriction_s* zx_DEEP_CLONE_sa_AudienceRestriction(struct zx_ctx* c, struct zx_sa_AudienceRestriction_s* x, int dup_strs);
void zx_DUP_STRS_sa_AudienceRestriction(struct zx_ctx* c, struct zx_sa_AudienceRestriction_s* x);
int zx_WALK_SO_sa_AudienceRestriction(struct zx_ctx* c, struct zx_sa_AudienceRestriction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_AudienceRestriction(struct zx_ctx* c, struct zx_sa_AudienceRestriction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa_AudienceRestriction(struct zx_ctx* c, struct zx_sa_AudienceRestriction_s* x);
int zx_LEN_WO_sa_AudienceRestriction(struct zx_ctx* c, struct zx_sa_AudienceRestriction_s* x);
char* zx_ENC_SO_sa_AudienceRestriction(struct zx_ctx* c, struct zx_sa_AudienceRestriction_s* x, char* p);
char* zx_ENC_WO_sa_AudienceRestriction(struct zx_ctx* c, struct zx_sa_AudienceRestriction_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa_AudienceRestriction(struct zx_ctx* c, struct zx_sa_AudienceRestriction_s* x);
struct zx_str* zx_EASY_ENC_WO_sa_AudienceRestriction(struct zx_ctx* c, struct zx_sa_AudienceRestriction_s* x);

struct zx_sa_AudienceRestriction_s {
  ZX_ELEM_EXT
  zx_sa_AudienceRestriction_EXT
  struct zx_elem_s* Audience;	/* {1,-1} xs:anyURI */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_sa_AudienceRestriction_GET_Audience(struct zx_sa_AudienceRestriction_s* x, int n);

int zx_sa_AudienceRestriction_NUM_Audience(struct zx_sa_AudienceRestriction_s* x);

struct zx_elem_s* zx_sa_AudienceRestriction_POP_Audience(struct zx_sa_AudienceRestriction_s* x);

void zx_sa_AudienceRestriction_PUSH_Audience(struct zx_sa_AudienceRestriction_s* x, struct zx_elem_s* y);


void zx_sa_AudienceRestriction_PUT_Audience(struct zx_sa_AudienceRestriction_s* x, int n, struct zx_elem_s* y);

void zx_sa_AudienceRestriction_ADD_Audience(struct zx_sa_AudienceRestriction_s* x, int n, struct zx_elem_s* z);

void zx_sa_AudienceRestriction_DEL_Audience(struct zx_sa_AudienceRestriction_s* x, int n);

void zx_sa_AudienceRestriction_REV_Audience(struct zx_sa_AudienceRestriction_s* x);

#endif
/* -------------------------- sa_AuthnContext -------------------------- */
/* refby( zx_sa_AuthnStatement_s zx_idp_AuthnContextRestriction_s ) */
#ifndef zx_sa_AuthnContext_EXT
#define zx_sa_AuthnContext_EXT
#endif

struct zx_sa_AuthnContext_s* zx_DEC_sa_AuthnContext(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa_AuthnContext_s* zx_NEW_sa_AuthnContext(struct zx_ctx* c);
void zx_FREE_sa_AuthnContext(struct zx_ctx* c, struct zx_sa_AuthnContext_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa_AuthnContext_s* zx_DEEP_CLONE_sa_AuthnContext(struct zx_ctx* c, struct zx_sa_AuthnContext_s* x, int dup_strs);
void zx_DUP_STRS_sa_AuthnContext(struct zx_ctx* c, struct zx_sa_AuthnContext_s* x);
int zx_WALK_SO_sa_AuthnContext(struct zx_ctx* c, struct zx_sa_AuthnContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_AuthnContext(struct zx_ctx* c, struct zx_sa_AuthnContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa_AuthnContext(struct zx_ctx* c, struct zx_sa_AuthnContext_s* x);
int zx_LEN_WO_sa_AuthnContext(struct zx_ctx* c, struct zx_sa_AuthnContext_s* x);
char* zx_ENC_SO_sa_AuthnContext(struct zx_ctx* c, struct zx_sa_AuthnContext_s* x, char* p);
char* zx_ENC_WO_sa_AuthnContext(struct zx_ctx* c, struct zx_sa_AuthnContext_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa_AuthnContext(struct zx_ctx* c, struct zx_sa_AuthnContext_s* x);
struct zx_str* zx_EASY_ENC_WO_sa_AuthnContext(struct zx_ctx* c, struct zx_sa_AuthnContext_s* x);

struct zx_sa_AuthnContext_s {
  ZX_ELEM_EXT
  zx_sa_AuthnContext_EXT
  struct zx_elem_s* AuthnContextClassRef;	/* {0,1} xs:anyURI */
  struct zx_elem_s* AuthnContextDecl;	/* {0,1} xs:anyType */
  struct zx_elem_s* AuthnContextDeclRef;	/* {0,1} xs:anyURI */
  struct zx_elem_s* AuthenticatingAuthority;	/* {0,-1} xs:anyURI */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_sa_AuthnContext_GET_AuthnContextClassRef(struct zx_sa_AuthnContext_s* x, int n);
struct zx_elem_s* zx_sa_AuthnContext_GET_AuthnContextDecl(struct zx_sa_AuthnContext_s* x, int n);
struct zx_elem_s* zx_sa_AuthnContext_GET_AuthnContextDeclRef(struct zx_sa_AuthnContext_s* x, int n);
struct zx_elem_s* zx_sa_AuthnContext_GET_AuthenticatingAuthority(struct zx_sa_AuthnContext_s* x, int n);

int zx_sa_AuthnContext_NUM_AuthnContextClassRef(struct zx_sa_AuthnContext_s* x);
int zx_sa_AuthnContext_NUM_AuthnContextDecl(struct zx_sa_AuthnContext_s* x);
int zx_sa_AuthnContext_NUM_AuthnContextDeclRef(struct zx_sa_AuthnContext_s* x);
int zx_sa_AuthnContext_NUM_AuthenticatingAuthority(struct zx_sa_AuthnContext_s* x);

struct zx_elem_s* zx_sa_AuthnContext_POP_AuthnContextClassRef(struct zx_sa_AuthnContext_s* x);
struct zx_elem_s* zx_sa_AuthnContext_POP_AuthnContextDecl(struct zx_sa_AuthnContext_s* x);
struct zx_elem_s* zx_sa_AuthnContext_POP_AuthnContextDeclRef(struct zx_sa_AuthnContext_s* x);
struct zx_elem_s* zx_sa_AuthnContext_POP_AuthenticatingAuthority(struct zx_sa_AuthnContext_s* x);

void zx_sa_AuthnContext_PUSH_AuthnContextClassRef(struct zx_sa_AuthnContext_s* x, struct zx_elem_s* y);
void zx_sa_AuthnContext_PUSH_AuthnContextDecl(struct zx_sa_AuthnContext_s* x, struct zx_elem_s* y);
void zx_sa_AuthnContext_PUSH_AuthnContextDeclRef(struct zx_sa_AuthnContext_s* x, struct zx_elem_s* y);
void zx_sa_AuthnContext_PUSH_AuthenticatingAuthority(struct zx_sa_AuthnContext_s* x, struct zx_elem_s* y);


void zx_sa_AuthnContext_PUT_AuthnContextClassRef(struct zx_sa_AuthnContext_s* x, int n, struct zx_elem_s* y);
void zx_sa_AuthnContext_PUT_AuthnContextDecl(struct zx_sa_AuthnContext_s* x, int n, struct zx_elem_s* y);
void zx_sa_AuthnContext_PUT_AuthnContextDeclRef(struct zx_sa_AuthnContext_s* x, int n, struct zx_elem_s* y);
void zx_sa_AuthnContext_PUT_AuthenticatingAuthority(struct zx_sa_AuthnContext_s* x, int n, struct zx_elem_s* y);

void zx_sa_AuthnContext_ADD_AuthnContextClassRef(struct zx_sa_AuthnContext_s* x, int n, struct zx_elem_s* z);
void zx_sa_AuthnContext_ADD_AuthnContextDecl(struct zx_sa_AuthnContext_s* x, int n, struct zx_elem_s* z);
void zx_sa_AuthnContext_ADD_AuthnContextDeclRef(struct zx_sa_AuthnContext_s* x, int n, struct zx_elem_s* z);
void zx_sa_AuthnContext_ADD_AuthenticatingAuthority(struct zx_sa_AuthnContext_s* x, int n, struct zx_elem_s* z);

void zx_sa_AuthnContext_DEL_AuthnContextClassRef(struct zx_sa_AuthnContext_s* x, int n);
void zx_sa_AuthnContext_DEL_AuthnContextDecl(struct zx_sa_AuthnContext_s* x, int n);
void zx_sa_AuthnContext_DEL_AuthnContextDeclRef(struct zx_sa_AuthnContext_s* x, int n);
void zx_sa_AuthnContext_DEL_AuthenticatingAuthority(struct zx_sa_AuthnContext_s* x, int n);

void zx_sa_AuthnContext_REV_AuthnContextClassRef(struct zx_sa_AuthnContext_s* x);
void zx_sa_AuthnContext_REV_AuthnContextDecl(struct zx_sa_AuthnContext_s* x);
void zx_sa_AuthnContext_REV_AuthnContextDeclRef(struct zx_sa_AuthnContext_s* x);
void zx_sa_AuthnContext_REV_AuthenticatingAuthority(struct zx_sa_AuthnContext_s* x);

#endif
/* -------------------------- sa_AuthnStatement -------------------------- */
/* refby( zx_sa_Assertion_s ) */
#ifndef zx_sa_AuthnStatement_EXT
#define zx_sa_AuthnStatement_EXT
#endif

struct zx_sa_AuthnStatement_s* zx_DEC_sa_AuthnStatement(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa_AuthnStatement_s* zx_NEW_sa_AuthnStatement(struct zx_ctx* c);
void zx_FREE_sa_AuthnStatement(struct zx_ctx* c, struct zx_sa_AuthnStatement_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa_AuthnStatement_s* zx_DEEP_CLONE_sa_AuthnStatement(struct zx_ctx* c, struct zx_sa_AuthnStatement_s* x, int dup_strs);
void zx_DUP_STRS_sa_AuthnStatement(struct zx_ctx* c, struct zx_sa_AuthnStatement_s* x);
int zx_WALK_SO_sa_AuthnStatement(struct zx_ctx* c, struct zx_sa_AuthnStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_AuthnStatement(struct zx_ctx* c, struct zx_sa_AuthnStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa_AuthnStatement(struct zx_ctx* c, struct zx_sa_AuthnStatement_s* x);
int zx_LEN_WO_sa_AuthnStatement(struct zx_ctx* c, struct zx_sa_AuthnStatement_s* x);
char* zx_ENC_SO_sa_AuthnStatement(struct zx_ctx* c, struct zx_sa_AuthnStatement_s* x, char* p);
char* zx_ENC_WO_sa_AuthnStatement(struct zx_ctx* c, struct zx_sa_AuthnStatement_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa_AuthnStatement(struct zx_ctx* c, struct zx_sa_AuthnStatement_s* x);
struct zx_str* zx_EASY_ENC_WO_sa_AuthnStatement(struct zx_ctx* c, struct zx_sa_AuthnStatement_s* x);

struct zx_sa_AuthnStatement_s {
  ZX_ELEM_EXT
  zx_sa_AuthnStatement_EXT
  struct zx_sa_SubjectLocality_s* SubjectLocality;	/* {0,1} nada */
  struct zx_sa_AuthnContext_s* AuthnContext;	/* {1,1} nada */
  struct zx_str* AuthnInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* SessionIndex;	/* {0,1} attribute xs:string */
  struct zx_str* SessionNotOnOrAfter;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sa_AuthnStatement_GET_AuthnInstant(struct zx_sa_AuthnStatement_s* x);
struct zx_str* zx_sa_AuthnStatement_GET_SessionIndex(struct zx_sa_AuthnStatement_s* x);
struct zx_str* zx_sa_AuthnStatement_GET_SessionNotOnOrAfter(struct zx_sa_AuthnStatement_s* x);

struct zx_sa_SubjectLocality_s* zx_sa_AuthnStatement_GET_SubjectLocality(struct zx_sa_AuthnStatement_s* x, int n);
struct zx_sa_AuthnContext_s* zx_sa_AuthnStatement_GET_AuthnContext(struct zx_sa_AuthnStatement_s* x, int n);

int zx_sa_AuthnStatement_NUM_SubjectLocality(struct zx_sa_AuthnStatement_s* x);
int zx_sa_AuthnStatement_NUM_AuthnContext(struct zx_sa_AuthnStatement_s* x);

struct zx_sa_SubjectLocality_s* zx_sa_AuthnStatement_POP_SubjectLocality(struct zx_sa_AuthnStatement_s* x);
struct zx_sa_AuthnContext_s* zx_sa_AuthnStatement_POP_AuthnContext(struct zx_sa_AuthnStatement_s* x);

void zx_sa_AuthnStatement_PUSH_SubjectLocality(struct zx_sa_AuthnStatement_s* x, struct zx_sa_SubjectLocality_s* y);
void zx_sa_AuthnStatement_PUSH_AuthnContext(struct zx_sa_AuthnStatement_s* x, struct zx_sa_AuthnContext_s* y);

void zx_sa_AuthnStatement_PUT_AuthnInstant(struct zx_sa_AuthnStatement_s* x, struct zx_str* y);
void zx_sa_AuthnStatement_PUT_SessionIndex(struct zx_sa_AuthnStatement_s* x, struct zx_str* y);
void zx_sa_AuthnStatement_PUT_SessionNotOnOrAfter(struct zx_sa_AuthnStatement_s* x, struct zx_str* y);

void zx_sa_AuthnStatement_PUT_SubjectLocality(struct zx_sa_AuthnStatement_s* x, int n, struct zx_sa_SubjectLocality_s* y);
void zx_sa_AuthnStatement_PUT_AuthnContext(struct zx_sa_AuthnStatement_s* x, int n, struct zx_sa_AuthnContext_s* y);

void zx_sa_AuthnStatement_ADD_SubjectLocality(struct zx_sa_AuthnStatement_s* x, int n, struct zx_sa_SubjectLocality_s* z);
void zx_sa_AuthnStatement_ADD_AuthnContext(struct zx_sa_AuthnStatement_s* x, int n, struct zx_sa_AuthnContext_s* z);

void zx_sa_AuthnStatement_DEL_SubjectLocality(struct zx_sa_AuthnStatement_s* x, int n);
void zx_sa_AuthnStatement_DEL_AuthnContext(struct zx_sa_AuthnStatement_s* x, int n);

void zx_sa_AuthnStatement_REV_SubjectLocality(struct zx_sa_AuthnStatement_s* x);
void zx_sa_AuthnStatement_REV_AuthnContext(struct zx_sa_AuthnStatement_s* x);

#endif
/* -------------------------- sa_AuthzDecisionStatement -------------------------- */
/* refby( zx_sa_Assertion_s ) */
#ifndef zx_sa_AuthzDecisionStatement_EXT
#define zx_sa_AuthzDecisionStatement_EXT
#endif

struct zx_sa_AuthzDecisionStatement_s* zx_DEC_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa_AuthzDecisionStatement_s* zx_NEW_sa_AuthzDecisionStatement(struct zx_ctx* c);
void zx_FREE_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_sa_AuthzDecisionStatement_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa_AuthzDecisionStatement_s* zx_DEEP_CLONE_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_sa_AuthzDecisionStatement_s* x, int dup_strs);
void zx_DUP_STRS_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_sa_AuthzDecisionStatement_s* x);
int zx_WALK_SO_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_sa_AuthzDecisionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_sa_AuthzDecisionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_sa_AuthzDecisionStatement_s* x);
int zx_LEN_WO_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_sa_AuthzDecisionStatement_s* x);
char* zx_ENC_SO_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_sa_AuthzDecisionStatement_s* x, char* p);
char* zx_ENC_WO_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_sa_AuthzDecisionStatement_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_sa_AuthzDecisionStatement_s* x);
struct zx_str* zx_EASY_ENC_WO_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_sa_AuthzDecisionStatement_s* x);

struct zx_sa_AuthzDecisionStatement_s {
  ZX_ELEM_EXT
  zx_sa_AuthzDecisionStatement_EXT
  struct zx_sa_Action_s* Action;	/* {1,-1} nada */
  struct zx_sa_Evidence_s* Evidence;	/* {0,1} nada */
  struct zx_str* Resource;	/* {1,1} attribute xs:anyURI */
  struct zx_str* Decision;	/* {1,1} attribute sa11:DecisionType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sa_AuthzDecisionStatement_GET_Resource(struct zx_sa_AuthzDecisionStatement_s* x);
struct zx_str* zx_sa_AuthzDecisionStatement_GET_Decision(struct zx_sa_AuthzDecisionStatement_s* x);

struct zx_sa_Action_s* zx_sa_AuthzDecisionStatement_GET_Action(struct zx_sa_AuthzDecisionStatement_s* x, int n);
struct zx_sa_Evidence_s* zx_sa_AuthzDecisionStatement_GET_Evidence(struct zx_sa_AuthzDecisionStatement_s* x, int n);

int zx_sa_AuthzDecisionStatement_NUM_Action(struct zx_sa_AuthzDecisionStatement_s* x);
int zx_sa_AuthzDecisionStatement_NUM_Evidence(struct zx_sa_AuthzDecisionStatement_s* x);

struct zx_sa_Action_s* zx_sa_AuthzDecisionStatement_POP_Action(struct zx_sa_AuthzDecisionStatement_s* x);
struct zx_sa_Evidence_s* zx_sa_AuthzDecisionStatement_POP_Evidence(struct zx_sa_AuthzDecisionStatement_s* x);

void zx_sa_AuthzDecisionStatement_PUSH_Action(struct zx_sa_AuthzDecisionStatement_s* x, struct zx_sa_Action_s* y);
void zx_sa_AuthzDecisionStatement_PUSH_Evidence(struct zx_sa_AuthzDecisionStatement_s* x, struct zx_sa_Evidence_s* y);

void zx_sa_AuthzDecisionStatement_PUT_Resource(struct zx_sa_AuthzDecisionStatement_s* x, struct zx_str* y);
void zx_sa_AuthzDecisionStatement_PUT_Decision(struct zx_sa_AuthzDecisionStatement_s* x, struct zx_str* y);

void zx_sa_AuthzDecisionStatement_PUT_Action(struct zx_sa_AuthzDecisionStatement_s* x, int n, struct zx_sa_Action_s* y);
void zx_sa_AuthzDecisionStatement_PUT_Evidence(struct zx_sa_AuthzDecisionStatement_s* x, int n, struct zx_sa_Evidence_s* y);

void zx_sa_AuthzDecisionStatement_ADD_Action(struct zx_sa_AuthzDecisionStatement_s* x, int n, struct zx_sa_Action_s* z);
void zx_sa_AuthzDecisionStatement_ADD_Evidence(struct zx_sa_AuthzDecisionStatement_s* x, int n, struct zx_sa_Evidence_s* z);

void zx_sa_AuthzDecisionStatement_DEL_Action(struct zx_sa_AuthzDecisionStatement_s* x, int n);
void zx_sa_AuthzDecisionStatement_DEL_Evidence(struct zx_sa_AuthzDecisionStatement_s* x, int n);

void zx_sa_AuthzDecisionStatement_REV_Action(struct zx_sa_AuthzDecisionStatement_s* x);
void zx_sa_AuthzDecisionStatement_REV_Evidence(struct zx_sa_AuthzDecisionStatement_s* x);

#endif
/* -------------------------- sa_BaseID -------------------------- */
/* refby( zx_sp_NameIDMappingRequest_s zx_sa_SubjectConfirmation_s zx_sa_Subject_s zx_sp_LogoutRequest_s ) */
#ifndef zx_sa_BaseID_EXT
#define zx_sa_BaseID_EXT
#endif

struct zx_sa_BaseID_s* zx_DEC_sa_BaseID(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa_BaseID_s* zx_NEW_sa_BaseID(struct zx_ctx* c);
void zx_FREE_sa_BaseID(struct zx_ctx* c, struct zx_sa_BaseID_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa_BaseID_s* zx_DEEP_CLONE_sa_BaseID(struct zx_ctx* c, struct zx_sa_BaseID_s* x, int dup_strs);
void zx_DUP_STRS_sa_BaseID(struct zx_ctx* c, struct zx_sa_BaseID_s* x);
int zx_WALK_SO_sa_BaseID(struct zx_ctx* c, struct zx_sa_BaseID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_BaseID(struct zx_ctx* c, struct zx_sa_BaseID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa_BaseID(struct zx_ctx* c, struct zx_sa_BaseID_s* x);
int zx_LEN_WO_sa_BaseID(struct zx_ctx* c, struct zx_sa_BaseID_s* x);
char* zx_ENC_SO_sa_BaseID(struct zx_ctx* c, struct zx_sa_BaseID_s* x, char* p);
char* zx_ENC_WO_sa_BaseID(struct zx_ctx* c, struct zx_sa_BaseID_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa_BaseID(struct zx_ctx* c, struct zx_sa_BaseID_s* x);
struct zx_str* zx_EASY_ENC_WO_sa_BaseID(struct zx_ctx* c, struct zx_sa_BaseID_s* x);

struct zx_sa_BaseID_s {
  ZX_ELEM_EXT
  zx_sa_BaseID_EXT
  struct zx_str* NameQualifier;	/* {0,1} attribute xs:string */
  struct zx_str* SPNameQualifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sa_BaseID_GET_NameQualifier(struct zx_sa_BaseID_s* x);
struct zx_str* zx_sa_BaseID_GET_SPNameQualifier(struct zx_sa_BaseID_s* x);





void zx_sa_BaseID_PUT_NameQualifier(struct zx_sa_BaseID_s* x, struct zx_str* y);
void zx_sa_BaseID_PUT_SPNameQualifier(struct zx_sa_BaseID_s* x, struct zx_str* y);





#endif
/* -------------------------- sa_Conditions -------------------------- */
/* refby( zx_sp_AuthnRequest_s zx_sa_Assertion_s ) */
#ifndef zx_sa_Conditions_EXT
#define zx_sa_Conditions_EXT
#endif

struct zx_sa_Conditions_s* zx_DEC_sa_Conditions(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa_Conditions_s* zx_NEW_sa_Conditions(struct zx_ctx* c);
void zx_FREE_sa_Conditions(struct zx_ctx* c, struct zx_sa_Conditions_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa_Conditions_s* zx_DEEP_CLONE_sa_Conditions(struct zx_ctx* c, struct zx_sa_Conditions_s* x, int dup_strs);
void zx_DUP_STRS_sa_Conditions(struct zx_ctx* c, struct zx_sa_Conditions_s* x);
int zx_WALK_SO_sa_Conditions(struct zx_ctx* c, struct zx_sa_Conditions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_Conditions(struct zx_ctx* c, struct zx_sa_Conditions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa_Conditions(struct zx_ctx* c, struct zx_sa_Conditions_s* x);
int zx_LEN_WO_sa_Conditions(struct zx_ctx* c, struct zx_sa_Conditions_s* x);
char* zx_ENC_SO_sa_Conditions(struct zx_ctx* c, struct zx_sa_Conditions_s* x, char* p);
char* zx_ENC_WO_sa_Conditions(struct zx_ctx* c, struct zx_sa_Conditions_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa_Conditions(struct zx_ctx* c, struct zx_sa_Conditions_s* x);
struct zx_str* zx_EASY_ENC_WO_sa_Conditions(struct zx_ctx* c, struct zx_sa_Conditions_s* x);

struct zx_sa_Conditions_s {
  ZX_ELEM_EXT
  zx_sa_Conditions_EXT
  struct zx_elem_s* Condition;	/* {0,-1} sa:ConditionAbstractType */
  struct zx_sa_AudienceRestriction_s* AudienceRestriction;	/* {0,-1}  */
  struct zx_sa_OneTimeUse_s* OneTimeUse;	/* {0,-1} nada */
  struct zx_sa_ProxyRestriction_s* ProxyRestriction;	/* {0,-1} nada */
  struct zx_str* NotBefore;	/* {0,1} attribute xs:dateTime */
  struct zx_str* NotOnOrAfter;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sa_Conditions_GET_NotBefore(struct zx_sa_Conditions_s* x);
struct zx_str* zx_sa_Conditions_GET_NotOnOrAfter(struct zx_sa_Conditions_s* x);

struct zx_elem_s* zx_sa_Conditions_GET_Condition(struct zx_sa_Conditions_s* x, int n);
struct zx_sa_AudienceRestriction_s* zx_sa_Conditions_GET_AudienceRestriction(struct zx_sa_Conditions_s* x, int n);
struct zx_sa_OneTimeUse_s* zx_sa_Conditions_GET_OneTimeUse(struct zx_sa_Conditions_s* x, int n);
struct zx_sa_ProxyRestriction_s* zx_sa_Conditions_GET_ProxyRestriction(struct zx_sa_Conditions_s* x, int n);

int zx_sa_Conditions_NUM_Condition(struct zx_sa_Conditions_s* x);
int zx_sa_Conditions_NUM_AudienceRestriction(struct zx_sa_Conditions_s* x);
int zx_sa_Conditions_NUM_OneTimeUse(struct zx_sa_Conditions_s* x);
int zx_sa_Conditions_NUM_ProxyRestriction(struct zx_sa_Conditions_s* x);

struct zx_elem_s* zx_sa_Conditions_POP_Condition(struct zx_sa_Conditions_s* x);
struct zx_sa_AudienceRestriction_s* zx_sa_Conditions_POP_AudienceRestriction(struct zx_sa_Conditions_s* x);
struct zx_sa_OneTimeUse_s* zx_sa_Conditions_POP_OneTimeUse(struct zx_sa_Conditions_s* x);
struct zx_sa_ProxyRestriction_s* zx_sa_Conditions_POP_ProxyRestriction(struct zx_sa_Conditions_s* x);

void zx_sa_Conditions_PUSH_Condition(struct zx_sa_Conditions_s* x, struct zx_elem_s* y);
void zx_sa_Conditions_PUSH_AudienceRestriction(struct zx_sa_Conditions_s* x, struct zx_sa_AudienceRestriction_s* y);
void zx_sa_Conditions_PUSH_OneTimeUse(struct zx_sa_Conditions_s* x, struct zx_sa_OneTimeUse_s* y);
void zx_sa_Conditions_PUSH_ProxyRestriction(struct zx_sa_Conditions_s* x, struct zx_sa_ProxyRestriction_s* y);

void zx_sa_Conditions_PUT_NotBefore(struct zx_sa_Conditions_s* x, struct zx_str* y);
void zx_sa_Conditions_PUT_NotOnOrAfter(struct zx_sa_Conditions_s* x, struct zx_str* y);

void zx_sa_Conditions_PUT_Condition(struct zx_sa_Conditions_s* x, int n, struct zx_elem_s* y);
void zx_sa_Conditions_PUT_AudienceRestriction(struct zx_sa_Conditions_s* x, int n, struct zx_sa_AudienceRestriction_s* y);
void zx_sa_Conditions_PUT_OneTimeUse(struct zx_sa_Conditions_s* x, int n, struct zx_sa_OneTimeUse_s* y);
void zx_sa_Conditions_PUT_ProxyRestriction(struct zx_sa_Conditions_s* x, int n, struct zx_sa_ProxyRestriction_s* y);

void zx_sa_Conditions_ADD_Condition(struct zx_sa_Conditions_s* x, int n, struct zx_elem_s* z);
void zx_sa_Conditions_ADD_AudienceRestriction(struct zx_sa_Conditions_s* x, int n, struct zx_sa_AudienceRestriction_s* z);
void zx_sa_Conditions_ADD_OneTimeUse(struct zx_sa_Conditions_s* x, int n, struct zx_sa_OneTimeUse_s* z);
void zx_sa_Conditions_ADD_ProxyRestriction(struct zx_sa_Conditions_s* x, int n, struct zx_sa_ProxyRestriction_s* z);

void zx_sa_Conditions_DEL_Condition(struct zx_sa_Conditions_s* x, int n);
void zx_sa_Conditions_DEL_AudienceRestriction(struct zx_sa_Conditions_s* x, int n);
void zx_sa_Conditions_DEL_OneTimeUse(struct zx_sa_Conditions_s* x, int n);
void zx_sa_Conditions_DEL_ProxyRestriction(struct zx_sa_Conditions_s* x, int n);

void zx_sa_Conditions_REV_Condition(struct zx_sa_Conditions_s* x);
void zx_sa_Conditions_REV_AudienceRestriction(struct zx_sa_Conditions_s* x);
void zx_sa_Conditions_REV_OneTimeUse(struct zx_sa_Conditions_s* x);
void zx_sa_Conditions_REV_ProxyRestriction(struct zx_sa_Conditions_s* x);

#endif
/* -------------------------- sa_EncryptedAssertion -------------------------- */
/* refby( zx_sa_Evidence_s zx_sa_Advice_s zx_sp_Response_s ) */
#ifndef zx_sa_EncryptedAssertion_EXT
#define zx_sa_EncryptedAssertion_EXT
#endif

struct zx_sa_EncryptedAssertion_s* zx_DEC_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa_EncryptedAssertion_s* zx_NEW_sa_EncryptedAssertion(struct zx_ctx* c);
void zx_FREE_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_sa_EncryptedAssertion_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa_EncryptedAssertion_s* zx_DEEP_CLONE_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_sa_EncryptedAssertion_s* x, int dup_strs);
void zx_DUP_STRS_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_sa_EncryptedAssertion_s* x);
int zx_WALK_SO_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_sa_EncryptedAssertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_sa_EncryptedAssertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_sa_EncryptedAssertion_s* x);
int zx_LEN_WO_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_sa_EncryptedAssertion_s* x);
char* zx_ENC_SO_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_sa_EncryptedAssertion_s* x, char* p);
char* zx_ENC_WO_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_sa_EncryptedAssertion_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_sa_EncryptedAssertion_s* x);
struct zx_str* zx_EASY_ENC_WO_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_sa_EncryptedAssertion_s* x);

struct zx_sa_EncryptedAssertion_s {
  ZX_ELEM_EXT
  zx_sa_EncryptedAssertion_EXT
  struct zx_xenc_EncryptedData_s* EncryptedData;	/* {1,1} nada */
  struct zx_xenc_EncryptedKey_s* EncryptedKey;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_xenc_EncryptedData_s* zx_sa_EncryptedAssertion_GET_EncryptedData(struct zx_sa_EncryptedAssertion_s* x, int n);
struct zx_xenc_EncryptedKey_s* zx_sa_EncryptedAssertion_GET_EncryptedKey(struct zx_sa_EncryptedAssertion_s* x, int n);

int zx_sa_EncryptedAssertion_NUM_EncryptedData(struct zx_sa_EncryptedAssertion_s* x);
int zx_sa_EncryptedAssertion_NUM_EncryptedKey(struct zx_sa_EncryptedAssertion_s* x);

struct zx_xenc_EncryptedData_s* zx_sa_EncryptedAssertion_POP_EncryptedData(struct zx_sa_EncryptedAssertion_s* x);
struct zx_xenc_EncryptedKey_s* zx_sa_EncryptedAssertion_POP_EncryptedKey(struct zx_sa_EncryptedAssertion_s* x);

void zx_sa_EncryptedAssertion_PUSH_EncryptedData(struct zx_sa_EncryptedAssertion_s* x, struct zx_xenc_EncryptedData_s* y);
void zx_sa_EncryptedAssertion_PUSH_EncryptedKey(struct zx_sa_EncryptedAssertion_s* x, struct zx_xenc_EncryptedKey_s* y);


void zx_sa_EncryptedAssertion_PUT_EncryptedData(struct zx_sa_EncryptedAssertion_s* x, int n, struct zx_xenc_EncryptedData_s* y);
void zx_sa_EncryptedAssertion_PUT_EncryptedKey(struct zx_sa_EncryptedAssertion_s* x, int n, struct zx_xenc_EncryptedKey_s* y);

void zx_sa_EncryptedAssertion_ADD_EncryptedData(struct zx_sa_EncryptedAssertion_s* x, int n, struct zx_xenc_EncryptedData_s* z);
void zx_sa_EncryptedAssertion_ADD_EncryptedKey(struct zx_sa_EncryptedAssertion_s* x, int n, struct zx_xenc_EncryptedKey_s* z);

void zx_sa_EncryptedAssertion_DEL_EncryptedData(struct zx_sa_EncryptedAssertion_s* x, int n);
void zx_sa_EncryptedAssertion_DEL_EncryptedKey(struct zx_sa_EncryptedAssertion_s* x, int n);

void zx_sa_EncryptedAssertion_REV_EncryptedData(struct zx_sa_EncryptedAssertion_s* x);
void zx_sa_EncryptedAssertion_REV_EncryptedKey(struct zx_sa_EncryptedAssertion_s* x);

#endif
/* -------------------------- sa_EncryptedAttribute -------------------------- */
/* refby( zx_sa_AttributeStatement_s ) */
#ifndef zx_sa_EncryptedAttribute_EXT
#define zx_sa_EncryptedAttribute_EXT
#endif

struct zx_sa_EncryptedAttribute_s* zx_DEC_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa_EncryptedAttribute_s* zx_NEW_sa_EncryptedAttribute(struct zx_ctx* c);
void zx_FREE_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_sa_EncryptedAttribute_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa_EncryptedAttribute_s* zx_DEEP_CLONE_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_sa_EncryptedAttribute_s* x, int dup_strs);
void zx_DUP_STRS_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_sa_EncryptedAttribute_s* x);
int zx_WALK_SO_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_sa_EncryptedAttribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_sa_EncryptedAttribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_sa_EncryptedAttribute_s* x);
int zx_LEN_WO_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_sa_EncryptedAttribute_s* x);
char* zx_ENC_SO_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_sa_EncryptedAttribute_s* x, char* p);
char* zx_ENC_WO_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_sa_EncryptedAttribute_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_sa_EncryptedAttribute_s* x);
struct zx_str* zx_EASY_ENC_WO_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_sa_EncryptedAttribute_s* x);

struct zx_sa_EncryptedAttribute_s {
  ZX_ELEM_EXT
  zx_sa_EncryptedAttribute_EXT
  struct zx_xenc_EncryptedData_s* EncryptedData;	/* {1,1} nada */
  struct zx_xenc_EncryptedKey_s* EncryptedKey;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_xenc_EncryptedData_s* zx_sa_EncryptedAttribute_GET_EncryptedData(struct zx_sa_EncryptedAttribute_s* x, int n);
struct zx_xenc_EncryptedKey_s* zx_sa_EncryptedAttribute_GET_EncryptedKey(struct zx_sa_EncryptedAttribute_s* x, int n);

int zx_sa_EncryptedAttribute_NUM_EncryptedData(struct zx_sa_EncryptedAttribute_s* x);
int zx_sa_EncryptedAttribute_NUM_EncryptedKey(struct zx_sa_EncryptedAttribute_s* x);

struct zx_xenc_EncryptedData_s* zx_sa_EncryptedAttribute_POP_EncryptedData(struct zx_sa_EncryptedAttribute_s* x);
struct zx_xenc_EncryptedKey_s* zx_sa_EncryptedAttribute_POP_EncryptedKey(struct zx_sa_EncryptedAttribute_s* x);

void zx_sa_EncryptedAttribute_PUSH_EncryptedData(struct zx_sa_EncryptedAttribute_s* x, struct zx_xenc_EncryptedData_s* y);
void zx_sa_EncryptedAttribute_PUSH_EncryptedKey(struct zx_sa_EncryptedAttribute_s* x, struct zx_xenc_EncryptedKey_s* y);


void zx_sa_EncryptedAttribute_PUT_EncryptedData(struct zx_sa_EncryptedAttribute_s* x, int n, struct zx_xenc_EncryptedData_s* y);
void zx_sa_EncryptedAttribute_PUT_EncryptedKey(struct zx_sa_EncryptedAttribute_s* x, int n, struct zx_xenc_EncryptedKey_s* y);

void zx_sa_EncryptedAttribute_ADD_EncryptedData(struct zx_sa_EncryptedAttribute_s* x, int n, struct zx_xenc_EncryptedData_s* z);
void zx_sa_EncryptedAttribute_ADD_EncryptedKey(struct zx_sa_EncryptedAttribute_s* x, int n, struct zx_xenc_EncryptedKey_s* z);

void zx_sa_EncryptedAttribute_DEL_EncryptedData(struct zx_sa_EncryptedAttribute_s* x, int n);
void zx_sa_EncryptedAttribute_DEL_EncryptedKey(struct zx_sa_EncryptedAttribute_s* x, int n);

void zx_sa_EncryptedAttribute_REV_EncryptedData(struct zx_sa_EncryptedAttribute_s* x);
void zx_sa_EncryptedAttribute_REV_EncryptedKey(struct zx_sa_EncryptedAttribute_s* x);

#endif
/* -------------------------- sa_EncryptedID -------------------------- */
/* refby( zx_sp_NameIDMappingResponse_s zx_sp_NameIDMappingRequest_s zx_sa_SubjectConfirmation_s zx_sa_Subject_s zx_sp_LogoutRequest_s zx_sp_ManageNameIDRequest_s ) */
#ifndef zx_sa_EncryptedID_EXT
#define zx_sa_EncryptedID_EXT
#endif

struct zx_sa_EncryptedID_s* zx_DEC_sa_EncryptedID(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa_EncryptedID_s* zx_NEW_sa_EncryptedID(struct zx_ctx* c);
void zx_FREE_sa_EncryptedID(struct zx_ctx* c, struct zx_sa_EncryptedID_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa_EncryptedID_s* zx_DEEP_CLONE_sa_EncryptedID(struct zx_ctx* c, struct zx_sa_EncryptedID_s* x, int dup_strs);
void zx_DUP_STRS_sa_EncryptedID(struct zx_ctx* c, struct zx_sa_EncryptedID_s* x);
int zx_WALK_SO_sa_EncryptedID(struct zx_ctx* c, struct zx_sa_EncryptedID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_EncryptedID(struct zx_ctx* c, struct zx_sa_EncryptedID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa_EncryptedID(struct zx_ctx* c, struct zx_sa_EncryptedID_s* x);
int zx_LEN_WO_sa_EncryptedID(struct zx_ctx* c, struct zx_sa_EncryptedID_s* x);
char* zx_ENC_SO_sa_EncryptedID(struct zx_ctx* c, struct zx_sa_EncryptedID_s* x, char* p);
char* zx_ENC_WO_sa_EncryptedID(struct zx_ctx* c, struct zx_sa_EncryptedID_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa_EncryptedID(struct zx_ctx* c, struct zx_sa_EncryptedID_s* x);
struct zx_str* zx_EASY_ENC_WO_sa_EncryptedID(struct zx_ctx* c, struct zx_sa_EncryptedID_s* x);

struct zx_sa_EncryptedID_s {
  ZX_ELEM_EXT
  zx_sa_EncryptedID_EXT
  struct zx_xenc_EncryptedData_s* EncryptedData;	/* {1,1} nada */
  struct zx_xenc_EncryptedKey_s* EncryptedKey;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_xenc_EncryptedData_s* zx_sa_EncryptedID_GET_EncryptedData(struct zx_sa_EncryptedID_s* x, int n);
struct zx_xenc_EncryptedKey_s* zx_sa_EncryptedID_GET_EncryptedKey(struct zx_sa_EncryptedID_s* x, int n);

int zx_sa_EncryptedID_NUM_EncryptedData(struct zx_sa_EncryptedID_s* x);
int zx_sa_EncryptedID_NUM_EncryptedKey(struct zx_sa_EncryptedID_s* x);

struct zx_xenc_EncryptedData_s* zx_sa_EncryptedID_POP_EncryptedData(struct zx_sa_EncryptedID_s* x);
struct zx_xenc_EncryptedKey_s* zx_sa_EncryptedID_POP_EncryptedKey(struct zx_sa_EncryptedID_s* x);

void zx_sa_EncryptedID_PUSH_EncryptedData(struct zx_sa_EncryptedID_s* x, struct zx_xenc_EncryptedData_s* y);
void zx_sa_EncryptedID_PUSH_EncryptedKey(struct zx_sa_EncryptedID_s* x, struct zx_xenc_EncryptedKey_s* y);


void zx_sa_EncryptedID_PUT_EncryptedData(struct zx_sa_EncryptedID_s* x, int n, struct zx_xenc_EncryptedData_s* y);
void zx_sa_EncryptedID_PUT_EncryptedKey(struct zx_sa_EncryptedID_s* x, int n, struct zx_xenc_EncryptedKey_s* y);

void zx_sa_EncryptedID_ADD_EncryptedData(struct zx_sa_EncryptedID_s* x, int n, struct zx_xenc_EncryptedData_s* z);
void zx_sa_EncryptedID_ADD_EncryptedKey(struct zx_sa_EncryptedID_s* x, int n, struct zx_xenc_EncryptedKey_s* z);

void zx_sa_EncryptedID_DEL_EncryptedData(struct zx_sa_EncryptedID_s* x, int n);
void zx_sa_EncryptedID_DEL_EncryptedKey(struct zx_sa_EncryptedID_s* x, int n);

void zx_sa_EncryptedID_REV_EncryptedData(struct zx_sa_EncryptedID_s* x);
void zx_sa_EncryptedID_REV_EncryptedKey(struct zx_sa_EncryptedID_s* x);

#endif
/* -------------------------- sa_Evidence -------------------------- */
/* refby( zx_sa_AuthzDecisionStatement_s zx_sp_AuthzDecisionQuery_s ) */
#ifndef zx_sa_Evidence_EXT
#define zx_sa_Evidence_EXT
#endif

struct zx_sa_Evidence_s* zx_DEC_sa_Evidence(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa_Evidence_s* zx_NEW_sa_Evidence(struct zx_ctx* c);
void zx_FREE_sa_Evidence(struct zx_ctx* c, struct zx_sa_Evidence_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa_Evidence_s* zx_DEEP_CLONE_sa_Evidence(struct zx_ctx* c, struct zx_sa_Evidence_s* x, int dup_strs);
void zx_DUP_STRS_sa_Evidence(struct zx_ctx* c, struct zx_sa_Evidence_s* x);
int zx_WALK_SO_sa_Evidence(struct zx_ctx* c, struct zx_sa_Evidence_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_Evidence(struct zx_ctx* c, struct zx_sa_Evidence_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa_Evidence(struct zx_ctx* c, struct zx_sa_Evidence_s* x);
int zx_LEN_WO_sa_Evidence(struct zx_ctx* c, struct zx_sa_Evidence_s* x);
char* zx_ENC_SO_sa_Evidence(struct zx_ctx* c, struct zx_sa_Evidence_s* x, char* p);
char* zx_ENC_WO_sa_Evidence(struct zx_ctx* c, struct zx_sa_Evidence_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa_Evidence(struct zx_ctx* c, struct zx_sa_Evidence_s* x);
struct zx_str* zx_EASY_ENC_WO_sa_Evidence(struct zx_ctx* c, struct zx_sa_Evidence_s* x);

struct zx_sa_Evidence_s {
  ZX_ELEM_EXT
  zx_sa_Evidence_EXT
  struct zx_elem_s* AssertionIDRef;	/* {0,-1} xs:NCName */
  struct zx_elem_s* AssertionURIRef;	/* {0,-1} xs:anyURI */
  struct zx_sa_Assertion_s* Assertion;	/* {0,-1} nada */
  struct zx_sa_EncryptedAssertion_s* EncryptedAssertion;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_sa_Evidence_GET_AssertionIDRef(struct zx_sa_Evidence_s* x, int n);
struct zx_elem_s* zx_sa_Evidence_GET_AssertionURIRef(struct zx_sa_Evidence_s* x, int n);
struct zx_sa_Assertion_s* zx_sa_Evidence_GET_Assertion(struct zx_sa_Evidence_s* x, int n);
struct zx_sa_EncryptedAssertion_s* zx_sa_Evidence_GET_EncryptedAssertion(struct zx_sa_Evidence_s* x, int n);

int zx_sa_Evidence_NUM_AssertionIDRef(struct zx_sa_Evidence_s* x);
int zx_sa_Evidence_NUM_AssertionURIRef(struct zx_sa_Evidence_s* x);
int zx_sa_Evidence_NUM_Assertion(struct zx_sa_Evidence_s* x);
int zx_sa_Evidence_NUM_EncryptedAssertion(struct zx_sa_Evidence_s* x);

struct zx_elem_s* zx_sa_Evidence_POP_AssertionIDRef(struct zx_sa_Evidence_s* x);
struct zx_elem_s* zx_sa_Evidence_POP_AssertionURIRef(struct zx_sa_Evidence_s* x);
struct zx_sa_Assertion_s* zx_sa_Evidence_POP_Assertion(struct zx_sa_Evidence_s* x);
struct zx_sa_EncryptedAssertion_s* zx_sa_Evidence_POP_EncryptedAssertion(struct zx_sa_Evidence_s* x);

void zx_sa_Evidence_PUSH_AssertionIDRef(struct zx_sa_Evidence_s* x, struct zx_elem_s* y);
void zx_sa_Evidence_PUSH_AssertionURIRef(struct zx_sa_Evidence_s* x, struct zx_elem_s* y);
void zx_sa_Evidence_PUSH_Assertion(struct zx_sa_Evidence_s* x, struct zx_sa_Assertion_s* y);
void zx_sa_Evidence_PUSH_EncryptedAssertion(struct zx_sa_Evidence_s* x, struct zx_sa_EncryptedAssertion_s* y);


void zx_sa_Evidence_PUT_AssertionIDRef(struct zx_sa_Evidence_s* x, int n, struct zx_elem_s* y);
void zx_sa_Evidence_PUT_AssertionURIRef(struct zx_sa_Evidence_s* x, int n, struct zx_elem_s* y);
void zx_sa_Evidence_PUT_Assertion(struct zx_sa_Evidence_s* x, int n, struct zx_sa_Assertion_s* y);
void zx_sa_Evidence_PUT_EncryptedAssertion(struct zx_sa_Evidence_s* x, int n, struct zx_sa_EncryptedAssertion_s* y);

void zx_sa_Evidence_ADD_AssertionIDRef(struct zx_sa_Evidence_s* x, int n, struct zx_elem_s* z);
void zx_sa_Evidence_ADD_AssertionURIRef(struct zx_sa_Evidence_s* x, int n, struct zx_elem_s* z);
void zx_sa_Evidence_ADD_Assertion(struct zx_sa_Evidence_s* x, int n, struct zx_sa_Assertion_s* z);
void zx_sa_Evidence_ADD_EncryptedAssertion(struct zx_sa_Evidence_s* x, int n, struct zx_sa_EncryptedAssertion_s* z);

void zx_sa_Evidence_DEL_AssertionIDRef(struct zx_sa_Evidence_s* x, int n);
void zx_sa_Evidence_DEL_AssertionURIRef(struct zx_sa_Evidence_s* x, int n);
void zx_sa_Evidence_DEL_Assertion(struct zx_sa_Evidence_s* x, int n);
void zx_sa_Evidence_DEL_EncryptedAssertion(struct zx_sa_Evidence_s* x, int n);

void zx_sa_Evidence_REV_AssertionIDRef(struct zx_sa_Evidence_s* x);
void zx_sa_Evidence_REV_AssertionURIRef(struct zx_sa_Evidence_s* x);
void zx_sa_Evidence_REV_Assertion(struct zx_sa_Evidence_s* x);
void zx_sa_Evidence_REV_EncryptedAssertion(struct zx_sa_Evidence_s* x);

#endif
/* -------------------------- sa_Issuer -------------------------- */
/* refby( zx_sp_ArtifactResolve_s zx_sp_SubjectQuery_s zx_sp_AuthnRequest_s zx_sp_NameIDMappingResponse_s zx_xasp_XACMLPolicyQuery_s zx_sp_NameIDMappingRequest_s zx_sa_Assertion_s zx_sp_AuthnQuery_s zx_xasp_XACMLAuthzDecisionQuery_s zx_sp_AuthzDecisionQuery_s zx_sp_AttributeQuery_s zx_sp_ManageNameIDResponse_s zx_sp_AssertionIDRequest_s zx_sp_LogoutRequest_s zx_sp_ArtifactResponse_s zx_ecp_Request_s zx_sp_LogoutResponse_s zx_sp_Response_s zx_sp_ManageNameIDRequest_s ) */
#ifndef zx_sa_Issuer_EXT
#define zx_sa_Issuer_EXT
#endif

struct zx_sa_Issuer_s* zx_DEC_sa_Issuer(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa_Issuer_s* zx_NEW_sa_Issuer(struct zx_ctx* c);
void zx_FREE_sa_Issuer(struct zx_ctx* c, struct zx_sa_Issuer_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa_Issuer_s* zx_DEEP_CLONE_sa_Issuer(struct zx_ctx* c, struct zx_sa_Issuer_s* x, int dup_strs);
void zx_DUP_STRS_sa_Issuer(struct zx_ctx* c, struct zx_sa_Issuer_s* x);
int zx_WALK_SO_sa_Issuer(struct zx_ctx* c, struct zx_sa_Issuer_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_Issuer(struct zx_ctx* c, struct zx_sa_Issuer_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa_Issuer(struct zx_ctx* c, struct zx_sa_Issuer_s* x);
int zx_LEN_WO_sa_Issuer(struct zx_ctx* c, struct zx_sa_Issuer_s* x);
char* zx_ENC_SO_sa_Issuer(struct zx_ctx* c, struct zx_sa_Issuer_s* x, char* p);
char* zx_ENC_WO_sa_Issuer(struct zx_ctx* c, struct zx_sa_Issuer_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa_Issuer(struct zx_ctx* c, struct zx_sa_Issuer_s* x);
struct zx_str* zx_EASY_ENC_WO_sa_Issuer(struct zx_ctx* c, struct zx_sa_Issuer_s* x);

struct zx_sa_Issuer_s {
  ZX_ELEM_EXT
  zx_sa_Issuer_EXT
  struct zx_str* NameQualifier;	/* {0,1} attribute xs:string */
  struct zx_str* SPNameQualifier;	/* {0,1} attribute xs:string */
  struct zx_str* Format;	/* {0,1} attribute xs:anyURI */
  struct zx_str* SPProvidedID;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sa_Issuer_GET_NameQualifier(struct zx_sa_Issuer_s* x);
struct zx_str* zx_sa_Issuer_GET_SPNameQualifier(struct zx_sa_Issuer_s* x);
struct zx_str* zx_sa_Issuer_GET_Format(struct zx_sa_Issuer_s* x);
struct zx_str* zx_sa_Issuer_GET_SPProvidedID(struct zx_sa_Issuer_s* x);





void zx_sa_Issuer_PUT_NameQualifier(struct zx_sa_Issuer_s* x, struct zx_str* y);
void zx_sa_Issuer_PUT_SPNameQualifier(struct zx_sa_Issuer_s* x, struct zx_str* y);
void zx_sa_Issuer_PUT_Format(struct zx_sa_Issuer_s* x, struct zx_str* y);
void zx_sa_Issuer_PUT_SPProvidedID(struct zx_sa_Issuer_s* x, struct zx_str* y);





#endif
/* -------------------------- sa_NameID -------------------------- */
/* refby( zx_sp_NameIDMappingResponse_s zx_sp_NameIDMappingRequest_s zx_sa_SubjectConfirmation_s zx_sa_Subject_s zx_sp_LogoutRequest_s zx_sp_ManageNameIDRequest_s zx_idp_MEDInfo_s ) */
#ifndef zx_sa_NameID_EXT
#define zx_sa_NameID_EXT
#endif

struct zx_sa_NameID_s* zx_DEC_sa_NameID(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa_NameID_s* zx_NEW_sa_NameID(struct zx_ctx* c);
void zx_FREE_sa_NameID(struct zx_ctx* c, struct zx_sa_NameID_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa_NameID_s* zx_DEEP_CLONE_sa_NameID(struct zx_ctx* c, struct zx_sa_NameID_s* x, int dup_strs);
void zx_DUP_STRS_sa_NameID(struct zx_ctx* c, struct zx_sa_NameID_s* x);
int zx_WALK_SO_sa_NameID(struct zx_ctx* c, struct zx_sa_NameID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_NameID(struct zx_ctx* c, struct zx_sa_NameID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa_NameID(struct zx_ctx* c, struct zx_sa_NameID_s* x);
int zx_LEN_WO_sa_NameID(struct zx_ctx* c, struct zx_sa_NameID_s* x);
char* zx_ENC_SO_sa_NameID(struct zx_ctx* c, struct zx_sa_NameID_s* x, char* p);
char* zx_ENC_WO_sa_NameID(struct zx_ctx* c, struct zx_sa_NameID_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa_NameID(struct zx_ctx* c, struct zx_sa_NameID_s* x);
struct zx_str* zx_EASY_ENC_WO_sa_NameID(struct zx_ctx* c, struct zx_sa_NameID_s* x);

struct zx_sa_NameID_s {
  ZX_ELEM_EXT
  zx_sa_NameID_EXT
  struct zx_str* NameQualifier;	/* {0,1} attribute xs:string */
  struct zx_str* SPNameQualifier;	/* {0,1} attribute xs:string */
  struct zx_str* Format;	/* {0,1} attribute xs:anyURI */
  struct zx_str* SPProvidedID;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sa_NameID_GET_NameQualifier(struct zx_sa_NameID_s* x);
struct zx_str* zx_sa_NameID_GET_SPNameQualifier(struct zx_sa_NameID_s* x);
struct zx_str* zx_sa_NameID_GET_Format(struct zx_sa_NameID_s* x);
struct zx_str* zx_sa_NameID_GET_SPProvidedID(struct zx_sa_NameID_s* x);





void zx_sa_NameID_PUT_NameQualifier(struct zx_sa_NameID_s* x, struct zx_str* y);
void zx_sa_NameID_PUT_SPNameQualifier(struct zx_sa_NameID_s* x, struct zx_str* y);
void zx_sa_NameID_PUT_Format(struct zx_sa_NameID_s* x, struct zx_str* y);
void zx_sa_NameID_PUT_SPProvidedID(struct zx_sa_NameID_s* x, struct zx_str* y);





#endif
/* -------------------------- sa_OneTimeUse -------------------------- */
/* refby( zx_sa_Conditions_s ) */
#ifndef zx_sa_OneTimeUse_EXT
#define zx_sa_OneTimeUse_EXT
#endif

struct zx_sa_OneTimeUse_s* zx_DEC_sa_OneTimeUse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa_OneTimeUse_s* zx_NEW_sa_OneTimeUse(struct zx_ctx* c);
void zx_FREE_sa_OneTimeUse(struct zx_ctx* c, struct zx_sa_OneTimeUse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa_OneTimeUse_s* zx_DEEP_CLONE_sa_OneTimeUse(struct zx_ctx* c, struct zx_sa_OneTimeUse_s* x, int dup_strs);
void zx_DUP_STRS_sa_OneTimeUse(struct zx_ctx* c, struct zx_sa_OneTimeUse_s* x);
int zx_WALK_SO_sa_OneTimeUse(struct zx_ctx* c, struct zx_sa_OneTimeUse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_OneTimeUse(struct zx_ctx* c, struct zx_sa_OneTimeUse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa_OneTimeUse(struct zx_ctx* c, struct zx_sa_OneTimeUse_s* x);
int zx_LEN_WO_sa_OneTimeUse(struct zx_ctx* c, struct zx_sa_OneTimeUse_s* x);
char* zx_ENC_SO_sa_OneTimeUse(struct zx_ctx* c, struct zx_sa_OneTimeUse_s* x, char* p);
char* zx_ENC_WO_sa_OneTimeUse(struct zx_ctx* c, struct zx_sa_OneTimeUse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa_OneTimeUse(struct zx_ctx* c, struct zx_sa_OneTimeUse_s* x);
struct zx_str* zx_EASY_ENC_WO_sa_OneTimeUse(struct zx_ctx* c, struct zx_sa_OneTimeUse_s* x);

struct zx_sa_OneTimeUse_s {
  ZX_ELEM_EXT
  zx_sa_OneTimeUse_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- sa_ProxyRestriction -------------------------- */
/* refby( zx_sa_Conditions_s ) */
#ifndef zx_sa_ProxyRestriction_EXT
#define zx_sa_ProxyRestriction_EXT
#endif

struct zx_sa_ProxyRestriction_s* zx_DEC_sa_ProxyRestriction(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa_ProxyRestriction_s* zx_NEW_sa_ProxyRestriction(struct zx_ctx* c);
void zx_FREE_sa_ProxyRestriction(struct zx_ctx* c, struct zx_sa_ProxyRestriction_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa_ProxyRestriction_s* zx_DEEP_CLONE_sa_ProxyRestriction(struct zx_ctx* c, struct zx_sa_ProxyRestriction_s* x, int dup_strs);
void zx_DUP_STRS_sa_ProxyRestriction(struct zx_ctx* c, struct zx_sa_ProxyRestriction_s* x);
int zx_WALK_SO_sa_ProxyRestriction(struct zx_ctx* c, struct zx_sa_ProxyRestriction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_ProxyRestriction(struct zx_ctx* c, struct zx_sa_ProxyRestriction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa_ProxyRestriction(struct zx_ctx* c, struct zx_sa_ProxyRestriction_s* x);
int zx_LEN_WO_sa_ProxyRestriction(struct zx_ctx* c, struct zx_sa_ProxyRestriction_s* x);
char* zx_ENC_SO_sa_ProxyRestriction(struct zx_ctx* c, struct zx_sa_ProxyRestriction_s* x, char* p);
char* zx_ENC_WO_sa_ProxyRestriction(struct zx_ctx* c, struct zx_sa_ProxyRestriction_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa_ProxyRestriction(struct zx_ctx* c, struct zx_sa_ProxyRestriction_s* x);
struct zx_str* zx_EASY_ENC_WO_sa_ProxyRestriction(struct zx_ctx* c, struct zx_sa_ProxyRestriction_s* x);

struct zx_sa_ProxyRestriction_s {
  ZX_ELEM_EXT
  zx_sa_ProxyRestriction_EXT
  struct zx_elem_s* Audience;	/* {0,-1} xs:anyURI */
  struct zx_str* Count;	/* {0,1} attribute xs:nonNegativeInteger */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sa_ProxyRestriction_GET_Count(struct zx_sa_ProxyRestriction_s* x);

struct zx_elem_s* zx_sa_ProxyRestriction_GET_Audience(struct zx_sa_ProxyRestriction_s* x, int n);

int zx_sa_ProxyRestriction_NUM_Audience(struct zx_sa_ProxyRestriction_s* x);

struct zx_elem_s* zx_sa_ProxyRestriction_POP_Audience(struct zx_sa_ProxyRestriction_s* x);

void zx_sa_ProxyRestriction_PUSH_Audience(struct zx_sa_ProxyRestriction_s* x, struct zx_elem_s* y);

void zx_sa_ProxyRestriction_PUT_Count(struct zx_sa_ProxyRestriction_s* x, struct zx_str* y);

void zx_sa_ProxyRestriction_PUT_Audience(struct zx_sa_ProxyRestriction_s* x, int n, struct zx_elem_s* y);

void zx_sa_ProxyRestriction_ADD_Audience(struct zx_sa_ProxyRestriction_s* x, int n, struct zx_elem_s* z);

void zx_sa_ProxyRestriction_DEL_Audience(struct zx_sa_ProxyRestriction_s* x, int n);

void zx_sa_ProxyRestriction_REV_Audience(struct zx_sa_ProxyRestriction_s* x);

#endif
/* -------------------------- sa_Subject -------------------------- */
/* refby( zx_sp_SubjectQuery_s zx_sp_AuthnRequest_s zx_sa_Assertion_s zx_sp_AuthnQuery_s zx_sp_AuthzDecisionQuery_s zx_sp_AttributeQuery_s zx_idp_SubjectRestriction_s ) */
#ifndef zx_sa_Subject_EXT
#define zx_sa_Subject_EXT
#endif

struct zx_sa_Subject_s* zx_DEC_sa_Subject(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa_Subject_s* zx_NEW_sa_Subject(struct zx_ctx* c);
void zx_FREE_sa_Subject(struct zx_ctx* c, struct zx_sa_Subject_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa_Subject_s* zx_DEEP_CLONE_sa_Subject(struct zx_ctx* c, struct zx_sa_Subject_s* x, int dup_strs);
void zx_DUP_STRS_sa_Subject(struct zx_ctx* c, struct zx_sa_Subject_s* x);
int zx_WALK_SO_sa_Subject(struct zx_ctx* c, struct zx_sa_Subject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_Subject(struct zx_ctx* c, struct zx_sa_Subject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa_Subject(struct zx_ctx* c, struct zx_sa_Subject_s* x);
int zx_LEN_WO_sa_Subject(struct zx_ctx* c, struct zx_sa_Subject_s* x);
char* zx_ENC_SO_sa_Subject(struct zx_ctx* c, struct zx_sa_Subject_s* x, char* p);
char* zx_ENC_WO_sa_Subject(struct zx_ctx* c, struct zx_sa_Subject_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa_Subject(struct zx_ctx* c, struct zx_sa_Subject_s* x);
struct zx_str* zx_EASY_ENC_WO_sa_Subject(struct zx_ctx* c, struct zx_sa_Subject_s* x);

struct zx_sa_Subject_s {
  ZX_ELEM_EXT
  zx_sa_Subject_EXT
  struct zx_sa_BaseID_s* BaseID;	/* {0,1} nada */
  struct zx_sa_NameID_s* NameID;	/* {0,1} nada */
  struct zx_sa_EncryptedID_s* EncryptedID;	/* {0,1} nada */
  struct zx_sa_SubjectConfirmation_s* SubjectConfirmation;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_sa_BaseID_s* zx_sa_Subject_GET_BaseID(struct zx_sa_Subject_s* x, int n);
struct zx_sa_NameID_s* zx_sa_Subject_GET_NameID(struct zx_sa_Subject_s* x, int n);
struct zx_sa_EncryptedID_s* zx_sa_Subject_GET_EncryptedID(struct zx_sa_Subject_s* x, int n);
struct zx_sa_SubjectConfirmation_s* zx_sa_Subject_GET_SubjectConfirmation(struct zx_sa_Subject_s* x, int n);

int zx_sa_Subject_NUM_BaseID(struct zx_sa_Subject_s* x);
int zx_sa_Subject_NUM_NameID(struct zx_sa_Subject_s* x);
int zx_sa_Subject_NUM_EncryptedID(struct zx_sa_Subject_s* x);
int zx_sa_Subject_NUM_SubjectConfirmation(struct zx_sa_Subject_s* x);

struct zx_sa_BaseID_s* zx_sa_Subject_POP_BaseID(struct zx_sa_Subject_s* x);
struct zx_sa_NameID_s* zx_sa_Subject_POP_NameID(struct zx_sa_Subject_s* x);
struct zx_sa_EncryptedID_s* zx_sa_Subject_POP_EncryptedID(struct zx_sa_Subject_s* x);
struct zx_sa_SubjectConfirmation_s* zx_sa_Subject_POP_SubjectConfirmation(struct zx_sa_Subject_s* x);

void zx_sa_Subject_PUSH_BaseID(struct zx_sa_Subject_s* x, struct zx_sa_BaseID_s* y);
void zx_sa_Subject_PUSH_NameID(struct zx_sa_Subject_s* x, struct zx_sa_NameID_s* y);
void zx_sa_Subject_PUSH_EncryptedID(struct zx_sa_Subject_s* x, struct zx_sa_EncryptedID_s* y);
void zx_sa_Subject_PUSH_SubjectConfirmation(struct zx_sa_Subject_s* x, struct zx_sa_SubjectConfirmation_s* y);


void zx_sa_Subject_PUT_BaseID(struct zx_sa_Subject_s* x, int n, struct zx_sa_BaseID_s* y);
void zx_sa_Subject_PUT_NameID(struct zx_sa_Subject_s* x, int n, struct zx_sa_NameID_s* y);
void zx_sa_Subject_PUT_EncryptedID(struct zx_sa_Subject_s* x, int n, struct zx_sa_EncryptedID_s* y);
void zx_sa_Subject_PUT_SubjectConfirmation(struct zx_sa_Subject_s* x, int n, struct zx_sa_SubjectConfirmation_s* y);

void zx_sa_Subject_ADD_BaseID(struct zx_sa_Subject_s* x, int n, struct zx_sa_BaseID_s* z);
void zx_sa_Subject_ADD_NameID(struct zx_sa_Subject_s* x, int n, struct zx_sa_NameID_s* z);
void zx_sa_Subject_ADD_EncryptedID(struct zx_sa_Subject_s* x, int n, struct zx_sa_EncryptedID_s* z);
void zx_sa_Subject_ADD_SubjectConfirmation(struct zx_sa_Subject_s* x, int n, struct zx_sa_SubjectConfirmation_s* z);

void zx_sa_Subject_DEL_BaseID(struct zx_sa_Subject_s* x, int n);
void zx_sa_Subject_DEL_NameID(struct zx_sa_Subject_s* x, int n);
void zx_sa_Subject_DEL_EncryptedID(struct zx_sa_Subject_s* x, int n);
void zx_sa_Subject_DEL_SubjectConfirmation(struct zx_sa_Subject_s* x, int n);

void zx_sa_Subject_REV_BaseID(struct zx_sa_Subject_s* x);
void zx_sa_Subject_REV_NameID(struct zx_sa_Subject_s* x);
void zx_sa_Subject_REV_EncryptedID(struct zx_sa_Subject_s* x);
void zx_sa_Subject_REV_SubjectConfirmation(struct zx_sa_Subject_s* x);

#endif
/* -------------------------- sa_SubjectConfirmation -------------------------- */
/* refby( zx_sa_Subject_s ) */
#ifndef zx_sa_SubjectConfirmation_EXT
#define zx_sa_SubjectConfirmation_EXT
#endif

struct zx_sa_SubjectConfirmation_s* zx_DEC_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa_SubjectConfirmation_s* zx_NEW_sa_SubjectConfirmation(struct zx_ctx* c);
void zx_FREE_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_sa_SubjectConfirmation_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa_SubjectConfirmation_s* zx_DEEP_CLONE_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_sa_SubjectConfirmation_s* x, int dup_strs);
void zx_DUP_STRS_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_sa_SubjectConfirmation_s* x);
int zx_WALK_SO_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_sa_SubjectConfirmation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_sa_SubjectConfirmation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_sa_SubjectConfirmation_s* x);
int zx_LEN_WO_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_sa_SubjectConfirmation_s* x);
char* zx_ENC_SO_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_sa_SubjectConfirmation_s* x, char* p);
char* zx_ENC_WO_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_sa_SubjectConfirmation_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_sa_SubjectConfirmation_s* x);
struct zx_str* zx_EASY_ENC_WO_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_sa_SubjectConfirmation_s* x);

struct zx_sa_SubjectConfirmation_s {
  ZX_ELEM_EXT
  zx_sa_SubjectConfirmation_EXT
  struct zx_sa_BaseID_s* BaseID;	/* {0,1} nada */
  struct zx_sa_NameID_s* NameID;	/* {0,1} nada */
  struct zx_sa_EncryptedID_s* EncryptedID;	/* {0,1} nada */
  struct zx_sa_SubjectConfirmationData_s* SubjectConfirmationData;	/* {0,1} nada */
  struct zx_str* Method;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sa_SubjectConfirmation_GET_Method(struct zx_sa_SubjectConfirmation_s* x);

struct zx_sa_BaseID_s* zx_sa_SubjectConfirmation_GET_BaseID(struct zx_sa_SubjectConfirmation_s* x, int n);
struct zx_sa_NameID_s* zx_sa_SubjectConfirmation_GET_NameID(struct zx_sa_SubjectConfirmation_s* x, int n);
struct zx_sa_EncryptedID_s* zx_sa_SubjectConfirmation_GET_EncryptedID(struct zx_sa_SubjectConfirmation_s* x, int n);
struct zx_sa_SubjectConfirmationData_s* zx_sa_SubjectConfirmation_GET_SubjectConfirmationData(struct zx_sa_SubjectConfirmation_s* x, int n);

int zx_sa_SubjectConfirmation_NUM_BaseID(struct zx_sa_SubjectConfirmation_s* x);
int zx_sa_SubjectConfirmation_NUM_NameID(struct zx_sa_SubjectConfirmation_s* x);
int zx_sa_SubjectConfirmation_NUM_EncryptedID(struct zx_sa_SubjectConfirmation_s* x);
int zx_sa_SubjectConfirmation_NUM_SubjectConfirmationData(struct zx_sa_SubjectConfirmation_s* x);

struct zx_sa_BaseID_s* zx_sa_SubjectConfirmation_POP_BaseID(struct zx_sa_SubjectConfirmation_s* x);
struct zx_sa_NameID_s* zx_sa_SubjectConfirmation_POP_NameID(struct zx_sa_SubjectConfirmation_s* x);
struct zx_sa_EncryptedID_s* zx_sa_SubjectConfirmation_POP_EncryptedID(struct zx_sa_SubjectConfirmation_s* x);
struct zx_sa_SubjectConfirmationData_s* zx_sa_SubjectConfirmation_POP_SubjectConfirmationData(struct zx_sa_SubjectConfirmation_s* x);

void zx_sa_SubjectConfirmation_PUSH_BaseID(struct zx_sa_SubjectConfirmation_s* x, struct zx_sa_BaseID_s* y);
void zx_sa_SubjectConfirmation_PUSH_NameID(struct zx_sa_SubjectConfirmation_s* x, struct zx_sa_NameID_s* y);
void zx_sa_SubjectConfirmation_PUSH_EncryptedID(struct zx_sa_SubjectConfirmation_s* x, struct zx_sa_EncryptedID_s* y);
void zx_sa_SubjectConfirmation_PUSH_SubjectConfirmationData(struct zx_sa_SubjectConfirmation_s* x, struct zx_sa_SubjectConfirmationData_s* y);

void zx_sa_SubjectConfirmation_PUT_Method(struct zx_sa_SubjectConfirmation_s* x, struct zx_str* y);

void zx_sa_SubjectConfirmation_PUT_BaseID(struct zx_sa_SubjectConfirmation_s* x, int n, struct zx_sa_BaseID_s* y);
void zx_sa_SubjectConfirmation_PUT_NameID(struct zx_sa_SubjectConfirmation_s* x, int n, struct zx_sa_NameID_s* y);
void zx_sa_SubjectConfirmation_PUT_EncryptedID(struct zx_sa_SubjectConfirmation_s* x, int n, struct zx_sa_EncryptedID_s* y);
void zx_sa_SubjectConfirmation_PUT_SubjectConfirmationData(struct zx_sa_SubjectConfirmation_s* x, int n, struct zx_sa_SubjectConfirmationData_s* y);

void zx_sa_SubjectConfirmation_ADD_BaseID(struct zx_sa_SubjectConfirmation_s* x, int n, struct zx_sa_BaseID_s* z);
void zx_sa_SubjectConfirmation_ADD_NameID(struct zx_sa_SubjectConfirmation_s* x, int n, struct zx_sa_NameID_s* z);
void zx_sa_SubjectConfirmation_ADD_EncryptedID(struct zx_sa_SubjectConfirmation_s* x, int n, struct zx_sa_EncryptedID_s* z);
void zx_sa_SubjectConfirmation_ADD_SubjectConfirmationData(struct zx_sa_SubjectConfirmation_s* x, int n, struct zx_sa_SubjectConfirmationData_s* z);

void zx_sa_SubjectConfirmation_DEL_BaseID(struct zx_sa_SubjectConfirmation_s* x, int n);
void zx_sa_SubjectConfirmation_DEL_NameID(struct zx_sa_SubjectConfirmation_s* x, int n);
void zx_sa_SubjectConfirmation_DEL_EncryptedID(struct zx_sa_SubjectConfirmation_s* x, int n);
void zx_sa_SubjectConfirmation_DEL_SubjectConfirmationData(struct zx_sa_SubjectConfirmation_s* x, int n);

void zx_sa_SubjectConfirmation_REV_BaseID(struct zx_sa_SubjectConfirmation_s* x);
void zx_sa_SubjectConfirmation_REV_NameID(struct zx_sa_SubjectConfirmation_s* x);
void zx_sa_SubjectConfirmation_REV_EncryptedID(struct zx_sa_SubjectConfirmation_s* x);
void zx_sa_SubjectConfirmation_REV_SubjectConfirmationData(struct zx_sa_SubjectConfirmation_s* x);

#endif
/* -------------------------- sa_SubjectConfirmationData -------------------------- */
/* refby( zx_sa_SubjectConfirmation_s ) */
#ifndef zx_sa_SubjectConfirmationData_EXT
#define zx_sa_SubjectConfirmationData_EXT
#endif

struct zx_sa_SubjectConfirmationData_s* zx_DEC_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa_SubjectConfirmationData_s* zx_NEW_sa_SubjectConfirmationData(struct zx_ctx* c);
void zx_FREE_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_sa_SubjectConfirmationData_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa_SubjectConfirmationData_s* zx_DEEP_CLONE_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_sa_SubjectConfirmationData_s* x, int dup_strs);
void zx_DUP_STRS_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_sa_SubjectConfirmationData_s* x);
int zx_WALK_SO_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_sa_SubjectConfirmationData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_sa_SubjectConfirmationData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_sa_SubjectConfirmationData_s* x);
int zx_LEN_WO_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_sa_SubjectConfirmationData_s* x);
char* zx_ENC_SO_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_sa_SubjectConfirmationData_s* x, char* p);
char* zx_ENC_WO_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_sa_SubjectConfirmationData_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_sa_SubjectConfirmationData_s* x);
struct zx_str* zx_EASY_ENC_WO_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_sa_SubjectConfirmationData_s* x);

struct zx_sa_SubjectConfirmationData_s {
  ZX_ELEM_EXT
  zx_sa_SubjectConfirmationData_EXT
  struct zx_ds_KeyInfo_s* KeyInfo;	/* {1,-1} nada */
  struct zx_str* NotBefore;	/* {0,1} attribute xs:dateTime */
  struct zx_str* NotOnOrAfter;	/* {0,1} attribute xs:dateTime */
  struct zx_str* Recipient;	/* {0,1} attribute xs:anyURI */
  struct zx_str* InResponseTo;	/* {0,1} attribute xs:NCName */
  struct zx_str* Address;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sa_SubjectConfirmationData_GET_NotBefore(struct zx_sa_SubjectConfirmationData_s* x);
struct zx_str* zx_sa_SubjectConfirmationData_GET_NotOnOrAfter(struct zx_sa_SubjectConfirmationData_s* x);
struct zx_str* zx_sa_SubjectConfirmationData_GET_Recipient(struct zx_sa_SubjectConfirmationData_s* x);
struct zx_str* zx_sa_SubjectConfirmationData_GET_InResponseTo(struct zx_sa_SubjectConfirmationData_s* x);
struct zx_str* zx_sa_SubjectConfirmationData_GET_Address(struct zx_sa_SubjectConfirmationData_s* x);

struct zx_ds_KeyInfo_s* zx_sa_SubjectConfirmationData_GET_KeyInfo(struct zx_sa_SubjectConfirmationData_s* x, int n);

int zx_sa_SubjectConfirmationData_NUM_KeyInfo(struct zx_sa_SubjectConfirmationData_s* x);

struct zx_ds_KeyInfo_s* zx_sa_SubjectConfirmationData_POP_KeyInfo(struct zx_sa_SubjectConfirmationData_s* x);

void zx_sa_SubjectConfirmationData_PUSH_KeyInfo(struct zx_sa_SubjectConfirmationData_s* x, struct zx_ds_KeyInfo_s* y);

void zx_sa_SubjectConfirmationData_PUT_NotBefore(struct zx_sa_SubjectConfirmationData_s* x, struct zx_str* y);
void zx_sa_SubjectConfirmationData_PUT_NotOnOrAfter(struct zx_sa_SubjectConfirmationData_s* x, struct zx_str* y);
void zx_sa_SubjectConfirmationData_PUT_Recipient(struct zx_sa_SubjectConfirmationData_s* x, struct zx_str* y);
void zx_sa_SubjectConfirmationData_PUT_InResponseTo(struct zx_sa_SubjectConfirmationData_s* x, struct zx_str* y);
void zx_sa_SubjectConfirmationData_PUT_Address(struct zx_sa_SubjectConfirmationData_s* x, struct zx_str* y);

void zx_sa_SubjectConfirmationData_PUT_KeyInfo(struct zx_sa_SubjectConfirmationData_s* x, int n, struct zx_ds_KeyInfo_s* y);

void zx_sa_SubjectConfirmationData_ADD_KeyInfo(struct zx_sa_SubjectConfirmationData_s* x, int n, struct zx_ds_KeyInfo_s* z);

void zx_sa_SubjectConfirmationData_DEL_KeyInfo(struct zx_sa_SubjectConfirmationData_s* x, int n);

void zx_sa_SubjectConfirmationData_REV_KeyInfo(struct zx_sa_SubjectConfirmationData_s* x);

#endif
/* -------------------------- sa_SubjectLocality -------------------------- */
/* refby( zx_sa_AuthnStatement_s ) */
#ifndef zx_sa_SubjectLocality_EXT
#define zx_sa_SubjectLocality_EXT
#endif

struct zx_sa_SubjectLocality_s* zx_DEC_sa_SubjectLocality(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa_SubjectLocality_s* zx_NEW_sa_SubjectLocality(struct zx_ctx* c);
void zx_FREE_sa_SubjectLocality(struct zx_ctx* c, struct zx_sa_SubjectLocality_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa_SubjectLocality_s* zx_DEEP_CLONE_sa_SubjectLocality(struct zx_ctx* c, struct zx_sa_SubjectLocality_s* x, int dup_strs);
void zx_DUP_STRS_sa_SubjectLocality(struct zx_ctx* c, struct zx_sa_SubjectLocality_s* x);
int zx_WALK_SO_sa_SubjectLocality(struct zx_ctx* c, struct zx_sa_SubjectLocality_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_SubjectLocality(struct zx_ctx* c, struct zx_sa_SubjectLocality_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa_SubjectLocality(struct zx_ctx* c, struct zx_sa_SubjectLocality_s* x);
int zx_LEN_WO_sa_SubjectLocality(struct zx_ctx* c, struct zx_sa_SubjectLocality_s* x);
char* zx_ENC_SO_sa_SubjectLocality(struct zx_ctx* c, struct zx_sa_SubjectLocality_s* x, char* p);
char* zx_ENC_WO_sa_SubjectLocality(struct zx_ctx* c, struct zx_sa_SubjectLocality_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa_SubjectLocality(struct zx_ctx* c, struct zx_sa_SubjectLocality_s* x);
struct zx_str* zx_EASY_ENC_WO_sa_SubjectLocality(struct zx_ctx* c, struct zx_sa_SubjectLocality_s* x);

struct zx_sa_SubjectLocality_s {
  ZX_ELEM_EXT
  zx_sa_SubjectLocality_EXT
  struct zx_str* Address;	/* {0,1} attribute xs:string */
  struct zx_str* DNSName;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sa_SubjectLocality_GET_Address(struct zx_sa_SubjectLocality_s* x);
struct zx_str* zx_sa_SubjectLocality_GET_DNSName(struct zx_sa_SubjectLocality_s* x);





void zx_sa_SubjectLocality_PUT_Address(struct zx_sa_SubjectLocality_s* x, struct zx_str* y);
void zx_sa_SubjectLocality_PUT_DNSName(struct zx_sa_SubjectLocality_s* x, struct zx_str* y);





#endif
/* -------------------------- sa_TestElem -------------------------- */
/* refby( ) */
#ifndef zx_sa_TestElem_EXT
#define zx_sa_TestElem_EXT
#endif

struct zx_sa_TestElem_s* zx_DEC_sa_TestElem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa_TestElem_s* zx_NEW_sa_TestElem(struct zx_ctx* c);
void zx_FREE_sa_TestElem(struct zx_ctx* c, struct zx_sa_TestElem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa_TestElem_s* zx_DEEP_CLONE_sa_TestElem(struct zx_ctx* c, struct zx_sa_TestElem_s* x, int dup_strs);
void zx_DUP_STRS_sa_TestElem(struct zx_ctx* c, struct zx_sa_TestElem_s* x);
int zx_WALK_SO_sa_TestElem(struct zx_ctx* c, struct zx_sa_TestElem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_TestElem(struct zx_ctx* c, struct zx_sa_TestElem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa_TestElem(struct zx_ctx* c, struct zx_sa_TestElem_s* x);
int zx_LEN_WO_sa_TestElem(struct zx_ctx* c, struct zx_sa_TestElem_s* x);
char* zx_ENC_SO_sa_TestElem(struct zx_ctx* c, struct zx_sa_TestElem_s* x, char* p);
char* zx_ENC_WO_sa_TestElem(struct zx_ctx* c, struct zx_sa_TestElem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa_TestElem(struct zx_ctx* c, struct zx_sa_TestElem_s* x);
struct zx_str* zx_EASY_ENC_WO_sa_TestElem(struct zx_ctx* c, struct zx_sa_TestElem_s* x);

struct zx_sa_TestElem_s {
  ZX_ELEM_EXT
  zx_sa_TestElem_EXT
  struct zx_sa_AttributeValue_s* AttributeValue;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_sa_AttributeValue_s* zx_sa_TestElem_GET_AttributeValue(struct zx_sa_TestElem_s* x, int n);

int zx_sa_TestElem_NUM_AttributeValue(struct zx_sa_TestElem_s* x);

struct zx_sa_AttributeValue_s* zx_sa_TestElem_POP_AttributeValue(struct zx_sa_TestElem_s* x);

void zx_sa_TestElem_PUSH_AttributeValue(struct zx_sa_TestElem_s* x, struct zx_sa_AttributeValue_s* y);


void zx_sa_TestElem_PUT_AttributeValue(struct zx_sa_TestElem_s* x, int n, struct zx_sa_AttributeValue_s* y);

void zx_sa_TestElem_ADD_AttributeValue(struct zx_sa_TestElem_s* x, int n, struct zx_sa_AttributeValue_s* z);

void zx_sa_TestElem_DEL_AttributeValue(struct zx_sa_TestElem_s* x, int n);

void zx_sa_TestElem_REV_AttributeValue(struct zx_sa_TestElem_s* x);

#endif

#endif
