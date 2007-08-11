/* c/zx-sa11-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_sa11_data_h
#define _c_zx_sa11_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- sa11_Action -------------------------- */
/* refby( zx_sa11_AuthorizationDecisionStatement_s zx_sp11_AuthorizationDecisionQuery_s ) */
#ifndef zx_sa11_Action_EXT
#define zx_sa11_Action_EXT
#endif

struct zx_sa11_Action_s* zx_DEC_sa11_Action(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa11_Action_s* zx_NEW_sa11_Action(struct zx_ctx* c);
void zx_FREE_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa11_Action_s* zx_DEEP_CLONE_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x, int dup_strs);
void zx_DUP_STRS_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x);
int zx_WALK_SO_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x);
int zx_LEN_WO_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x);
char* zx_ENC_SO_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x, char* p);
char* zx_ENC_WO_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x);
struct zx_str* zx_EASY_ENC_WO_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x);

struct zx_sa11_Action_s {
  ZX_ELEM_EXT
  zx_sa11_Action_EXT
  struct zx_str* Namespace;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sa11_Action_GET_Namespace(struct zx_sa11_Action_s* x);





void zx_sa11_Action_PUT_Namespace(struct zx_sa11_Action_s* x, struct zx_str* y);





#endif
/* -------------------------- sa11_Advice -------------------------- */
/* refby( zx_sa11_Assertion_s zx_ff12_Assertion_s ) */
#ifndef zx_sa11_Advice_EXT
#define zx_sa11_Advice_EXT
#endif

struct zx_sa11_Advice_s* zx_DEC_sa11_Advice(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa11_Advice_s* zx_NEW_sa11_Advice(struct zx_ctx* c);
void zx_FREE_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa11_Advice_s* zx_DEEP_CLONE_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x, int dup_strs);
void zx_DUP_STRS_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x);
int zx_WALK_SO_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x);
int zx_LEN_WO_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x);
char* zx_ENC_SO_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x, char* p);
char* zx_ENC_WO_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x);
struct zx_str* zx_EASY_ENC_WO_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x);

struct zx_sa11_Advice_s {
  ZX_ELEM_EXT
  zx_sa11_Advice_EXT
  struct zx_elem_s* AssertionIDReference;	/* {0,-1} xs:NCName */
  struct zx_sa11_Assertion_s* Assertion;	/* {0,-1} nada */
  struct zx_ff12_Assertion_s* ff12_Assertion;	/* {0,-1} nada */
  struct zx_sa_Assertion_s* sa_Assertion;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_sa11_Advice_GET_AssertionIDReference(struct zx_sa11_Advice_s* x, int n);
struct zx_sa11_Assertion_s* zx_sa11_Advice_GET_Assertion(struct zx_sa11_Advice_s* x, int n);
struct zx_ff12_Assertion_s* zx_sa11_Advice_GET_ff12_Assertion(struct zx_sa11_Advice_s* x, int n);
struct zx_sa_Assertion_s* zx_sa11_Advice_GET_sa_Assertion(struct zx_sa11_Advice_s* x, int n);

int zx_sa11_Advice_NUM_AssertionIDReference(struct zx_sa11_Advice_s* x);
int zx_sa11_Advice_NUM_Assertion(struct zx_sa11_Advice_s* x);
int zx_sa11_Advice_NUM_ff12_Assertion(struct zx_sa11_Advice_s* x);
int zx_sa11_Advice_NUM_sa_Assertion(struct zx_sa11_Advice_s* x);

struct zx_elem_s* zx_sa11_Advice_POP_AssertionIDReference(struct zx_sa11_Advice_s* x);
struct zx_sa11_Assertion_s* zx_sa11_Advice_POP_Assertion(struct zx_sa11_Advice_s* x);
struct zx_ff12_Assertion_s* zx_sa11_Advice_POP_ff12_Assertion(struct zx_sa11_Advice_s* x);
struct zx_sa_Assertion_s* zx_sa11_Advice_POP_sa_Assertion(struct zx_sa11_Advice_s* x);

void zx_sa11_Advice_PUSH_AssertionIDReference(struct zx_sa11_Advice_s* x, struct zx_elem_s* y);
void zx_sa11_Advice_PUSH_Assertion(struct zx_sa11_Advice_s* x, struct zx_sa11_Assertion_s* y);
void zx_sa11_Advice_PUSH_ff12_Assertion(struct zx_sa11_Advice_s* x, struct zx_ff12_Assertion_s* y);
void zx_sa11_Advice_PUSH_sa_Assertion(struct zx_sa11_Advice_s* x, struct zx_sa_Assertion_s* y);


void zx_sa11_Advice_PUT_AssertionIDReference(struct zx_sa11_Advice_s* x, int n, struct zx_elem_s* y);
void zx_sa11_Advice_PUT_Assertion(struct zx_sa11_Advice_s* x, int n, struct zx_sa11_Assertion_s* y);
void zx_sa11_Advice_PUT_ff12_Assertion(struct zx_sa11_Advice_s* x, int n, struct zx_ff12_Assertion_s* y);
void zx_sa11_Advice_PUT_sa_Assertion(struct zx_sa11_Advice_s* x, int n, struct zx_sa_Assertion_s* y);

void zx_sa11_Advice_ADD_AssertionIDReference(struct zx_sa11_Advice_s* x, int n, struct zx_elem_s* z);
void zx_sa11_Advice_ADD_Assertion(struct zx_sa11_Advice_s* x, int n, struct zx_sa11_Assertion_s* z);
void zx_sa11_Advice_ADD_ff12_Assertion(struct zx_sa11_Advice_s* x, int n, struct zx_ff12_Assertion_s* z);
void zx_sa11_Advice_ADD_sa_Assertion(struct zx_sa11_Advice_s* x, int n, struct zx_sa_Assertion_s* z);

void zx_sa11_Advice_DEL_AssertionIDReference(struct zx_sa11_Advice_s* x, int n);
void zx_sa11_Advice_DEL_Assertion(struct zx_sa11_Advice_s* x, int n);
void zx_sa11_Advice_DEL_ff12_Assertion(struct zx_sa11_Advice_s* x, int n);
void zx_sa11_Advice_DEL_sa_Assertion(struct zx_sa11_Advice_s* x, int n);

void zx_sa11_Advice_REV_AssertionIDReference(struct zx_sa11_Advice_s* x);
void zx_sa11_Advice_REV_Assertion(struct zx_sa11_Advice_s* x);
void zx_sa11_Advice_REV_ff12_Assertion(struct zx_sa11_Advice_s* x);
void zx_sa11_Advice_REV_sa_Assertion(struct zx_sa11_Advice_s* x);

#endif
/* -------------------------- sa11_Assertion -------------------------- */
/* refby( zx_wsse_Security_s zx_b_TargetIdentity_s zx_sa11_Advice_s zx_sa11_Evidence_s zx_sec_Token_s zx_sp11_Response_s zx_ff12_AuthnResponse_s zx_sa_Advice_s ) */
#ifndef zx_sa11_Assertion_EXT
#define zx_sa11_Assertion_EXT
#endif

struct zx_sa11_Assertion_s* zx_DEC_sa11_Assertion(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa11_Assertion_s* zx_NEW_sa11_Assertion(struct zx_ctx* c);
void zx_FREE_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa11_Assertion_s* zx_DEEP_CLONE_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x, int dup_strs);
void zx_DUP_STRS_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x);
int zx_WALK_SO_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x);
int zx_LEN_WO_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x);
char* zx_ENC_SO_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x, char* p);
char* zx_ENC_WO_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x);
struct zx_str* zx_EASY_ENC_WO_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x);

struct zx_sa11_Assertion_s {
  ZX_ELEM_EXT
  zx_sa11_Assertion_EXT
  struct zx_sa11_Conditions_s* Conditions;	/* {0,1} nada */
  struct zx_sa11_Advice_s* Advice;	/* {0,1} nada */
  struct zx_elem_s* Statement;	/* {0,-1} sa11:StatementAbstractType */
  struct zx_sa11_SubjectStatement_s* SubjectStatement;	/* {0,-1}  */
  struct zx_sa11_AuthenticationStatement_s* AuthenticationStatement;	/* {0,-1} nada */
  struct zx_sa11_AuthorizationDecisionStatement_s* AuthorizationDecisionStatement;	/* {0,-1} nada */
  struct zx_sa11_AttributeStatement_s* AttributeStatement;	/* {0,-1} nada */
  struct zx_xasa_XACMLAuthzDecisionStatement_s* XACMLAuthzDecisionStatement;	/* {0,-1} nada */
  struct zx_xasa_XACMLPolicyStatement_s* XACMLPolicyStatement;	/* {0,-1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_str* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str* MinorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str* AssertionID;	/* {1,1} attribute xs:ID */
  struct zx_str* Issuer;	/* {1,1} attribute xs:string */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sa11_Assertion_GET_MajorVersion(struct zx_sa11_Assertion_s* x);
struct zx_str* zx_sa11_Assertion_GET_MinorVersion(struct zx_sa11_Assertion_s* x);
struct zx_str* zx_sa11_Assertion_GET_AssertionID(struct zx_sa11_Assertion_s* x);
struct zx_str* zx_sa11_Assertion_GET_Issuer(struct zx_sa11_Assertion_s* x);
struct zx_str* zx_sa11_Assertion_GET_IssueInstant(struct zx_sa11_Assertion_s* x);

struct zx_sa11_Conditions_s* zx_sa11_Assertion_GET_Conditions(struct zx_sa11_Assertion_s* x, int n);
struct zx_sa11_Advice_s* zx_sa11_Assertion_GET_Advice(struct zx_sa11_Assertion_s* x, int n);
struct zx_elem_s* zx_sa11_Assertion_GET_Statement(struct zx_sa11_Assertion_s* x, int n);
struct zx_sa11_SubjectStatement_s* zx_sa11_Assertion_GET_SubjectStatement(struct zx_sa11_Assertion_s* x, int n);
struct zx_sa11_AuthenticationStatement_s* zx_sa11_Assertion_GET_AuthenticationStatement(struct zx_sa11_Assertion_s* x, int n);
struct zx_sa11_AuthorizationDecisionStatement_s* zx_sa11_Assertion_GET_AuthorizationDecisionStatement(struct zx_sa11_Assertion_s* x, int n);
struct zx_sa11_AttributeStatement_s* zx_sa11_Assertion_GET_AttributeStatement(struct zx_sa11_Assertion_s* x, int n);
struct zx_xasa_XACMLAuthzDecisionStatement_s* zx_sa11_Assertion_GET_XACMLAuthzDecisionStatement(struct zx_sa11_Assertion_s* x, int n);
struct zx_xasa_XACMLPolicyStatement_s* zx_sa11_Assertion_GET_XACMLPolicyStatement(struct zx_sa11_Assertion_s* x, int n);
struct zx_ds_Signature_s* zx_sa11_Assertion_GET_Signature(struct zx_sa11_Assertion_s* x, int n);

int zx_sa11_Assertion_NUM_Conditions(struct zx_sa11_Assertion_s* x);
int zx_sa11_Assertion_NUM_Advice(struct zx_sa11_Assertion_s* x);
int zx_sa11_Assertion_NUM_Statement(struct zx_sa11_Assertion_s* x);
int zx_sa11_Assertion_NUM_SubjectStatement(struct zx_sa11_Assertion_s* x);
int zx_sa11_Assertion_NUM_AuthenticationStatement(struct zx_sa11_Assertion_s* x);
int zx_sa11_Assertion_NUM_AuthorizationDecisionStatement(struct zx_sa11_Assertion_s* x);
int zx_sa11_Assertion_NUM_AttributeStatement(struct zx_sa11_Assertion_s* x);
int zx_sa11_Assertion_NUM_XACMLAuthzDecisionStatement(struct zx_sa11_Assertion_s* x);
int zx_sa11_Assertion_NUM_XACMLPolicyStatement(struct zx_sa11_Assertion_s* x);
int zx_sa11_Assertion_NUM_Signature(struct zx_sa11_Assertion_s* x);

struct zx_sa11_Conditions_s* zx_sa11_Assertion_POP_Conditions(struct zx_sa11_Assertion_s* x);
struct zx_sa11_Advice_s* zx_sa11_Assertion_POP_Advice(struct zx_sa11_Assertion_s* x);
struct zx_elem_s* zx_sa11_Assertion_POP_Statement(struct zx_sa11_Assertion_s* x);
struct zx_sa11_SubjectStatement_s* zx_sa11_Assertion_POP_SubjectStatement(struct zx_sa11_Assertion_s* x);
struct zx_sa11_AuthenticationStatement_s* zx_sa11_Assertion_POP_AuthenticationStatement(struct zx_sa11_Assertion_s* x);
struct zx_sa11_AuthorizationDecisionStatement_s* zx_sa11_Assertion_POP_AuthorizationDecisionStatement(struct zx_sa11_Assertion_s* x);
struct zx_sa11_AttributeStatement_s* zx_sa11_Assertion_POP_AttributeStatement(struct zx_sa11_Assertion_s* x);
struct zx_xasa_XACMLAuthzDecisionStatement_s* zx_sa11_Assertion_POP_XACMLAuthzDecisionStatement(struct zx_sa11_Assertion_s* x);
struct zx_xasa_XACMLPolicyStatement_s* zx_sa11_Assertion_POP_XACMLPolicyStatement(struct zx_sa11_Assertion_s* x);
struct zx_ds_Signature_s* zx_sa11_Assertion_POP_Signature(struct zx_sa11_Assertion_s* x);

void zx_sa11_Assertion_PUSH_Conditions(struct zx_sa11_Assertion_s* x, struct zx_sa11_Conditions_s* y);
void zx_sa11_Assertion_PUSH_Advice(struct zx_sa11_Assertion_s* x, struct zx_sa11_Advice_s* y);
void zx_sa11_Assertion_PUSH_Statement(struct zx_sa11_Assertion_s* x, struct zx_elem_s* y);
void zx_sa11_Assertion_PUSH_SubjectStatement(struct zx_sa11_Assertion_s* x, struct zx_sa11_SubjectStatement_s* y);
void zx_sa11_Assertion_PUSH_AuthenticationStatement(struct zx_sa11_Assertion_s* x, struct zx_sa11_AuthenticationStatement_s* y);
void zx_sa11_Assertion_PUSH_AuthorizationDecisionStatement(struct zx_sa11_Assertion_s* x, struct zx_sa11_AuthorizationDecisionStatement_s* y);
void zx_sa11_Assertion_PUSH_AttributeStatement(struct zx_sa11_Assertion_s* x, struct zx_sa11_AttributeStatement_s* y);
void zx_sa11_Assertion_PUSH_XACMLAuthzDecisionStatement(struct zx_sa11_Assertion_s* x, struct zx_xasa_XACMLAuthzDecisionStatement_s* y);
void zx_sa11_Assertion_PUSH_XACMLPolicyStatement(struct zx_sa11_Assertion_s* x, struct zx_xasa_XACMLPolicyStatement_s* y);
void zx_sa11_Assertion_PUSH_Signature(struct zx_sa11_Assertion_s* x, struct zx_ds_Signature_s* y);

void zx_sa11_Assertion_PUT_MajorVersion(struct zx_sa11_Assertion_s* x, struct zx_str* y);
void zx_sa11_Assertion_PUT_MinorVersion(struct zx_sa11_Assertion_s* x, struct zx_str* y);
void zx_sa11_Assertion_PUT_AssertionID(struct zx_sa11_Assertion_s* x, struct zx_str* y);
void zx_sa11_Assertion_PUT_Issuer(struct zx_sa11_Assertion_s* x, struct zx_str* y);
void zx_sa11_Assertion_PUT_IssueInstant(struct zx_sa11_Assertion_s* x, struct zx_str* y);

void zx_sa11_Assertion_PUT_Conditions(struct zx_sa11_Assertion_s* x, int n, struct zx_sa11_Conditions_s* y);
void zx_sa11_Assertion_PUT_Advice(struct zx_sa11_Assertion_s* x, int n, struct zx_sa11_Advice_s* y);
void zx_sa11_Assertion_PUT_Statement(struct zx_sa11_Assertion_s* x, int n, struct zx_elem_s* y);
void zx_sa11_Assertion_PUT_SubjectStatement(struct zx_sa11_Assertion_s* x, int n, struct zx_sa11_SubjectStatement_s* y);
void zx_sa11_Assertion_PUT_AuthenticationStatement(struct zx_sa11_Assertion_s* x, int n, struct zx_sa11_AuthenticationStatement_s* y);
void zx_sa11_Assertion_PUT_AuthorizationDecisionStatement(struct zx_sa11_Assertion_s* x, int n, struct zx_sa11_AuthorizationDecisionStatement_s* y);
void zx_sa11_Assertion_PUT_AttributeStatement(struct zx_sa11_Assertion_s* x, int n, struct zx_sa11_AttributeStatement_s* y);
void zx_sa11_Assertion_PUT_XACMLAuthzDecisionStatement(struct zx_sa11_Assertion_s* x, int n, struct zx_xasa_XACMLAuthzDecisionStatement_s* y);
void zx_sa11_Assertion_PUT_XACMLPolicyStatement(struct zx_sa11_Assertion_s* x, int n, struct zx_xasa_XACMLPolicyStatement_s* y);
void zx_sa11_Assertion_PUT_Signature(struct zx_sa11_Assertion_s* x, int n, struct zx_ds_Signature_s* y);

void zx_sa11_Assertion_ADD_Conditions(struct zx_sa11_Assertion_s* x, int n, struct zx_sa11_Conditions_s* z);
void zx_sa11_Assertion_ADD_Advice(struct zx_sa11_Assertion_s* x, int n, struct zx_sa11_Advice_s* z);
void zx_sa11_Assertion_ADD_Statement(struct zx_sa11_Assertion_s* x, int n, struct zx_elem_s* z);
void zx_sa11_Assertion_ADD_SubjectStatement(struct zx_sa11_Assertion_s* x, int n, struct zx_sa11_SubjectStatement_s* z);
void zx_sa11_Assertion_ADD_AuthenticationStatement(struct zx_sa11_Assertion_s* x, int n, struct zx_sa11_AuthenticationStatement_s* z);
void zx_sa11_Assertion_ADD_AuthorizationDecisionStatement(struct zx_sa11_Assertion_s* x, int n, struct zx_sa11_AuthorizationDecisionStatement_s* z);
void zx_sa11_Assertion_ADD_AttributeStatement(struct zx_sa11_Assertion_s* x, int n, struct zx_sa11_AttributeStatement_s* z);
void zx_sa11_Assertion_ADD_XACMLAuthzDecisionStatement(struct zx_sa11_Assertion_s* x, int n, struct zx_xasa_XACMLAuthzDecisionStatement_s* z);
void zx_sa11_Assertion_ADD_XACMLPolicyStatement(struct zx_sa11_Assertion_s* x, int n, struct zx_xasa_XACMLPolicyStatement_s* z);
void zx_sa11_Assertion_ADD_Signature(struct zx_sa11_Assertion_s* x, int n, struct zx_ds_Signature_s* z);

void zx_sa11_Assertion_DEL_Conditions(struct zx_sa11_Assertion_s* x, int n);
void zx_sa11_Assertion_DEL_Advice(struct zx_sa11_Assertion_s* x, int n);
void zx_sa11_Assertion_DEL_Statement(struct zx_sa11_Assertion_s* x, int n);
void zx_sa11_Assertion_DEL_SubjectStatement(struct zx_sa11_Assertion_s* x, int n);
void zx_sa11_Assertion_DEL_AuthenticationStatement(struct zx_sa11_Assertion_s* x, int n);
void zx_sa11_Assertion_DEL_AuthorizationDecisionStatement(struct zx_sa11_Assertion_s* x, int n);
void zx_sa11_Assertion_DEL_AttributeStatement(struct zx_sa11_Assertion_s* x, int n);
void zx_sa11_Assertion_DEL_XACMLAuthzDecisionStatement(struct zx_sa11_Assertion_s* x, int n);
void zx_sa11_Assertion_DEL_XACMLPolicyStatement(struct zx_sa11_Assertion_s* x, int n);
void zx_sa11_Assertion_DEL_Signature(struct zx_sa11_Assertion_s* x, int n);

void zx_sa11_Assertion_REV_Conditions(struct zx_sa11_Assertion_s* x);
void zx_sa11_Assertion_REV_Advice(struct zx_sa11_Assertion_s* x);
void zx_sa11_Assertion_REV_Statement(struct zx_sa11_Assertion_s* x);
void zx_sa11_Assertion_REV_SubjectStatement(struct zx_sa11_Assertion_s* x);
void zx_sa11_Assertion_REV_AuthenticationStatement(struct zx_sa11_Assertion_s* x);
void zx_sa11_Assertion_REV_AuthorizationDecisionStatement(struct zx_sa11_Assertion_s* x);
void zx_sa11_Assertion_REV_AttributeStatement(struct zx_sa11_Assertion_s* x);
void zx_sa11_Assertion_REV_XACMLAuthzDecisionStatement(struct zx_sa11_Assertion_s* x);
void zx_sa11_Assertion_REV_XACMLPolicyStatement(struct zx_sa11_Assertion_s* x);
void zx_sa11_Assertion_REV_Signature(struct zx_sa11_Assertion_s* x);

#endif
/* -------------------------- sa11_Attribute -------------------------- */
/* refby( zx_sa11_AttributeStatement_s ) */
#ifndef zx_sa11_Attribute_EXT
#define zx_sa11_Attribute_EXT
#endif

struct zx_sa11_Attribute_s* zx_DEC_sa11_Attribute(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa11_Attribute_s* zx_NEW_sa11_Attribute(struct zx_ctx* c);
void zx_FREE_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa11_Attribute_s* zx_DEEP_CLONE_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x, int dup_strs);
void zx_DUP_STRS_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x);
int zx_WALK_SO_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x);
int zx_LEN_WO_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x);
char* zx_ENC_SO_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x, char* p);
char* zx_ENC_WO_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x);
struct zx_str* zx_EASY_ENC_WO_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x);

struct zx_sa11_Attribute_s {
  ZX_ELEM_EXT
  zx_sa11_Attribute_EXT
  struct zx_sa11_AttributeValue_s* AttributeValue;	/* {1,-1} nada */
  struct zx_str* AttributeName;	/* {1,1} attribute xs:string */
  struct zx_str* AttributeNamespace;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sa11_Attribute_GET_AttributeName(struct zx_sa11_Attribute_s* x);
struct zx_str* zx_sa11_Attribute_GET_AttributeNamespace(struct zx_sa11_Attribute_s* x);

struct zx_sa11_AttributeValue_s* zx_sa11_Attribute_GET_AttributeValue(struct zx_sa11_Attribute_s* x, int n);

int zx_sa11_Attribute_NUM_AttributeValue(struct zx_sa11_Attribute_s* x);

struct zx_sa11_AttributeValue_s* zx_sa11_Attribute_POP_AttributeValue(struct zx_sa11_Attribute_s* x);

void zx_sa11_Attribute_PUSH_AttributeValue(struct zx_sa11_Attribute_s* x, struct zx_sa11_AttributeValue_s* y);

void zx_sa11_Attribute_PUT_AttributeName(struct zx_sa11_Attribute_s* x, struct zx_str* y);
void zx_sa11_Attribute_PUT_AttributeNamespace(struct zx_sa11_Attribute_s* x, struct zx_str* y);

void zx_sa11_Attribute_PUT_AttributeValue(struct zx_sa11_Attribute_s* x, int n, struct zx_sa11_AttributeValue_s* y);

void zx_sa11_Attribute_ADD_AttributeValue(struct zx_sa11_Attribute_s* x, int n, struct zx_sa11_AttributeValue_s* z);

void zx_sa11_Attribute_DEL_AttributeValue(struct zx_sa11_Attribute_s* x, int n);

void zx_sa11_Attribute_REV_AttributeValue(struct zx_sa11_Attribute_s* x);

#endif
/* -------------------------- sa11_AttributeDesignator -------------------------- */
/* refby( zx_sp11_AttributeQuery_s ) */
#ifndef zx_sa11_AttributeDesignator_EXT
#define zx_sa11_AttributeDesignator_EXT
#endif

struct zx_sa11_AttributeDesignator_s* zx_DEC_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa11_AttributeDesignator_s* zx_NEW_sa11_AttributeDesignator(struct zx_ctx* c);
void zx_FREE_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa11_AttributeDesignator_s* zx_DEEP_CLONE_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x, int dup_strs);
void zx_DUP_STRS_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x);
int zx_WALK_SO_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x);
int zx_LEN_WO_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x);
char* zx_ENC_SO_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x, char* p);
char* zx_ENC_WO_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x);
struct zx_str* zx_EASY_ENC_WO_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x);

struct zx_sa11_AttributeDesignator_s {
  ZX_ELEM_EXT
  zx_sa11_AttributeDesignator_EXT
  struct zx_str* AttributeName;	/* {1,1} attribute xs:string */
  struct zx_str* AttributeNamespace;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sa11_AttributeDesignator_GET_AttributeName(struct zx_sa11_AttributeDesignator_s* x);
struct zx_str* zx_sa11_AttributeDesignator_GET_AttributeNamespace(struct zx_sa11_AttributeDesignator_s* x);





void zx_sa11_AttributeDesignator_PUT_AttributeName(struct zx_sa11_AttributeDesignator_s* x, struct zx_str* y);
void zx_sa11_AttributeDesignator_PUT_AttributeNamespace(struct zx_sa11_AttributeDesignator_s* x, struct zx_str* y);





#endif
/* -------------------------- sa11_AttributeStatement -------------------------- */
/* refby( zx_sa11_Assertion_s zx_ff12_Assertion_s ) */
#ifndef zx_sa11_AttributeStatement_EXT
#define zx_sa11_AttributeStatement_EXT
#endif

struct zx_sa11_AttributeStatement_s* zx_DEC_sa11_AttributeStatement(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa11_AttributeStatement_s* zx_NEW_sa11_AttributeStatement(struct zx_ctx* c);
void zx_FREE_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa11_AttributeStatement_s* zx_DEEP_CLONE_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x, int dup_strs);
void zx_DUP_STRS_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x);
int zx_WALK_SO_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x);
int zx_LEN_WO_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x);
char* zx_ENC_SO_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x, char* p);
char* zx_ENC_WO_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x);
struct zx_str* zx_EASY_ENC_WO_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x);

struct zx_sa11_AttributeStatement_s {
  ZX_ELEM_EXT
  zx_sa11_AttributeStatement_EXT
  struct zx_sa11_Subject_s* Subject;	/* {1,1} nada */
  struct zx_sa11_Attribute_s* Attribute;	/* {1,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_sa11_Subject_s* zx_sa11_AttributeStatement_GET_Subject(struct zx_sa11_AttributeStatement_s* x, int n);
struct zx_sa11_Attribute_s* zx_sa11_AttributeStatement_GET_Attribute(struct zx_sa11_AttributeStatement_s* x, int n);

int zx_sa11_AttributeStatement_NUM_Subject(struct zx_sa11_AttributeStatement_s* x);
int zx_sa11_AttributeStatement_NUM_Attribute(struct zx_sa11_AttributeStatement_s* x);

struct zx_sa11_Subject_s* zx_sa11_AttributeStatement_POP_Subject(struct zx_sa11_AttributeStatement_s* x);
struct zx_sa11_Attribute_s* zx_sa11_AttributeStatement_POP_Attribute(struct zx_sa11_AttributeStatement_s* x);

void zx_sa11_AttributeStatement_PUSH_Subject(struct zx_sa11_AttributeStatement_s* x, struct zx_sa11_Subject_s* y);
void zx_sa11_AttributeStatement_PUSH_Attribute(struct zx_sa11_AttributeStatement_s* x, struct zx_sa11_Attribute_s* y);


void zx_sa11_AttributeStatement_PUT_Subject(struct zx_sa11_AttributeStatement_s* x, int n, struct zx_sa11_Subject_s* y);
void zx_sa11_AttributeStatement_PUT_Attribute(struct zx_sa11_AttributeStatement_s* x, int n, struct zx_sa11_Attribute_s* y);

void zx_sa11_AttributeStatement_ADD_Subject(struct zx_sa11_AttributeStatement_s* x, int n, struct zx_sa11_Subject_s* z);
void zx_sa11_AttributeStatement_ADD_Attribute(struct zx_sa11_AttributeStatement_s* x, int n, struct zx_sa11_Attribute_s* z);

void zx_sa11_AttributeStatement_DEL_Subject(struct zx_sa11_AttributeStatement_s* x, int n);
void zx_sa11_AttributeStatement_DEL_Attribute(struct zx_sa11_AttributeStatement_s* x, int n);

void zx_sa11_AttributeStatement_REV_Subject(struct zx_sa11_AttributeStatement_s* x);
void zx_sa11_AttributeStatement_REV_Attribute(struct zx_sa11_AttributeStatement_s* x);

#endif
/* -------------------------- sa11_AttributeValue -------------------------- */
/* refby( zx_sa11_Attribute_s ) */
#ifndef zx_sa11_AttributeValue_EXT
#define zx_sa11_AttributeValue_EXT
#endif

struct zx_sa11_AttributeValue_s* zx_DEC_sa11_AttributeValue(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa11_AttributeValue_s* zx_NEW_sa11_AttributeValue(struct zx_ctx* c);
void zx_FREE_sa11_AttributeValue(struct zx_ctx* c, struct zx_sa11_AttributeValue_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa11_AttributeValue_s* zx_DEEP_CLONE_sa11_AttributeValue(struct zx_ctx* c, struct zx_sa11_AttributeValue_s* x, int dup_strs);
void zx_DUP_STRS_sa11_AttributeValue(struct zx_ctx* c, struct zx_sa11_AttributeValue_s* x);
int zx_WALK_SO_sa11_AttributeValue(struct zx_ctx* c, struct zx_sa11_AttributeValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_AttributeValue(struct zx_ctx* c, struct zx_sa11_AttributeValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa11_AttributeValue(struct zx_ctx* c, struct zx_sa11_AttributeValue_s* x);
int zx_LEN_WO_sa11_AttributeValue(struct zx_ctx* c, struct zx_sa11_AttributeValue_s* x);
char* zx_ENC_SO_sa11_AttributeValue(struct zx_ctx* c, struct zx_sa11_AttributeValue_s* x, char* p);
char* zx_ENC_WO_sa11_AttributeValue(struct zx_ctx* c, struct zx_sa11_AttributeValue_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa11_AttributeValue(struct zx_ctx* c, struct zx_sa11_AttributeValue_s* x);
struct zx_str* zx_EASY_ENC_WO_sa11_AttributeValue(struct zx_ctx* c, struct zx_sa11_AttributeValue_s* x);

struct zx_sa11_AttributeValue_s {
  ZX_ELEM_EXT
  zx_sa11_AttributeValue_EXT
  struct zx_di12_ResourceOffering_s* ResourceOffering;	/* {0,-1} nada */
  struct zx_a_EndpointReference_s* EndpointReference;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_di12_ResourceOffering_s* zx_sa11_AttributeValue_GET_ResourceOffering(struct zx_sa11_AttributeValue_s* x, int n);
struct zx_a_EndpointReference_s* zx_sa11_AttributeValue_GET_EndpointReference(struct zx_sa11_AttributeValue_s* x, int n);

int zx_sa11_AttributeValue_NUM_ResourceOffering(struct zx_sa11_AttributeValue_s* x);
int zx_sa11_AttributeValue_NUM_EndpointReference(struct zx_sa11_AttributeValue_s* x);

struct zx_di12_ResourceOffering_s* zx_sa11_AttributeValue_POP_ResourceOffering(struct zx_sa11_AttributeValue_s* x);
struct zx_a_EndpointReference_s* zx_sa11_AttributeValue_POP_EndpointReference(struct zx_sa11_AttributeValue_s* x);

void zx_sa11_AttributeValue_PUSH_ResourceOffering(struct zx_sa11_AttributeValue_s* x, struct zx_di12_ResourceOffering_s* y);
void zx_sa11_AttributeValue_PUSH_EndpointReference(struct zx_sa11_AttributeValue_s* x, struct zx_a_EndpointReference_s* y);


void zx_sa11_AttributeValue_PUT_ResourceOffering(struct zx_sa11_AttributeValue_s* x, int n, struct zx_di12_ResourceOffering_s* y);
void zx_sa11_AttributeValue_PUT_EndpointReference(struct zx_sa11_AttributeValue_s* x, int n, struct zx_a_EndpointReference_s* y);

void zx_sa11_AttributeValue_ADD_ResourceOffering(struct zx_sa11_AttributeValue_s* x, int n, struct zx_di12_ResourceOffering_s* z);
void zx_sa11_AttributeValue_ADD_EndpointReference(struct zx_sa11_AttributeValue_s* x, int n, struct zx_a_EndpointReference_s* z);

void zx_sa11_AttributeValue_DEL_ResourceOffering(struct zx_sa11_AttributeValue_s* x, int n);
void zx_sa11_AttributeValue_DEL_EndpointReference(struct zx_sa11_AttributeValue_s* x, int n);

void zx_sa11_AttributeValue_REV_ResourceOffering(struct zx_sa11_AttributeValue_s* x);
void zx_sa11_AttributeValue_REV_EndpointReference(struct zx_sa11_AttributeValue_s* x);

#endif
/* -------------------------- sa11_AudienceRestrictionCondition -------------------------- */
/* refby( zx_sa11_Conditions_s ) */
#ifndef zx_sa11_AudienceRestrictionCondition_EXT
#define zx_sa11_AudienceRestrictionCondition_EXT
#endif

struct zx_sa11_AudienceRestrictionCondition_s* zx_DEC_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa11_AudienceRestrictionCondition_s* zx_NEW_sa11_AudienceRestrictionCondition(struct zx_ctx* c);
void zx_FREE_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa11_AudienceRestrictionCondition_s* zx_DEEP_CLONE_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x, int dup_strs);
void zx_DUP_STRS_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x);
int zx_WALK_SO_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x);
int zx_LEN_WO_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x);
char* zx_ENC_SO_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x, char* p);
char* zx_ENC_WO_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x);
struct zx_str* zx_EASY_ENC_WO_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x);

struct zx_sa11_AudienceRestrictionCondition_s {
  ZX_ELEM_EXT
  zx_sa11_AudienceRestrictionCondition_EXT
  struct zx_elem_s* Audience;	/* {1,-1} xs:anyURI */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_sa11_AudienceRestrictionCondition_GET_Audience(struct zx_sa11_AudienceRestrictionCondition_s* x, int n);

int zx_sa11_AudienceRestrictionCondition_NUM_Audience(struct zx_sa11_AudienceRestrictionCondition_s* x);

struct zx_elem_s* zx_sa11_AudienceRestrictionCondition_POP_Audience(struct zx_sa11_AudienceRestrictionCondition_s* x);

void zx_sa11_AudienceRestrictionCondition_PUSH_Audience(struct zx_sa11_AudienceRestrictionCondition_s* x, struct zx_elem_s* y);


void zx_sa11_AudienceRestrictionCondition_PUT_Audience(struct zx_sa11_AudienceRestrictionCondition_s* x, int n, struct zx_elem_s* y);

void zx_sa11_AudienceRestrictionCondition_ADD_Audience(struct zx_sa11_AudienceRestrictionCondition_s* x, int n, struct zx_elem_s* z);

void zx_sa11_AudienceRestrictionCondition_DEL_Audience(struct zx_sa11_AudienceRestrictionCondition_s* x, int n);

void zx_sa11_AudienceRestrictionCondition_REV_Audience(struct zx_sa11_AudienceRestrictionCondition_s* x);

#endif
/* -------------------------- sa11_AuthenticationStatement -------------------------- */
/* refby( zx_sa11_Assertion_s zx_ff12_Assertion_s ) */
#ifndef zx_sa11_AuthenticationStatement_EXT
#define zx_sa11_AuthenticationStatement_EXT
#endif

struct zx_sa11_AuthenticationStatement_s* zx_DEC_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa11_AuthenticationStatement_s* zx_NEW_sa11_AuthenticationStatement(struct zx_ctx* c);
void zx_FREE_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa11_AuthenticationStatement_s* zx_DEEP_CLONE_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x, int dup_strs);
void zx_DUP_STRS_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x);
int zx_WALK_SO_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x);
int zx_LEN_WO_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x);
char* zx_ENC_SO_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x, char* p);
char* zx_ENC_WO_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x);
struct zx_str* zx_EASY_ENC_WO_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x);

struct zx_sa11_AuthenticationStatement_s {
  ZX_ELEM_EXT
  zx_sa11_AuthenticationStatement_EXT
  struct zx_sa11_Subject_s* Subject;	/* {1,1} nada */
  struct zx_sa11_SubjectLocality_s* SubjectLocality;	/* {0,1} nada */
  struct zx_sa11_AuthorityBinding_s* AuthorityBinding;	/* {0,-1} nada */
  struct zx_str* AuthenticationMethod;	/* {1,1} attribute xs:anyURI */
  struct zx_str* AuthenticationInstant;	/* {1,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sa11_AuthenticationStatement_GET_AuthenticationMethod(struct zx_sa11_AuthenticationStatement_s* x);
struct zx_str* zx_sa11_AuthenticationStatement_GET_AuthenticationInstant(struct zx_sa11_AuthenticationStatement_s* x);

struct zx_sa11_Subject_s* zx_sa11_AuthenticationStatement_GET_Subject(struct zx_sa11_AuthenticationStatement_s* x, int n);
struct zx_sa11_SubjectLocality_s* zx_sa11_AuthenticationStatement_GET_SubjectLocality(struct zx_sa11_AuthenticationStatement_s* x, int n);
struct zx_sa11_AuthorityBinding_s* zx_sa11_AuthenticationStatement_GET_AuthorityBinding(struct zx_sa11_AuthenticationStatement_s* x, int n);

int zx_sa11_AuthenticationStatement_NUM_Subject(struct zx_sa11_AuthenticationStatement_s* x);
int zx_sa11_AuthenticationStatement_NUM_SubjectLocality(struct zx_sa11_AuthenticationStatement_s* x);
int zx_sa11_AuthenticationStatement_NUM_AuthorityBinding(struct zx_sa11_AuthenticationStatement_s* x);

struct zx_sa11_Subject_s* zx_sa11_AuthenticationStatement_POP_Subject(struct zx_sa11_AuthenticationStatement_s* x);
struct zx_sa11_SubjectLocality_s* zx_sa11_AuthenticationStatement_POP_SubjectLocality(struct zx_sa11_AuthenticationStatement_s* x);
struct zx_sa11_AuthorityBinding_s* zx_sa11_AuthenticationStatement_POP_AuthorityBinding(struct zx_sa11_AuthenticationStatement_s* x);

void zx_sa11_AuthenticationStatement_PUSH_Subject(struct zx_sa11_AuthenticationStatement_s* x, struct zx_sa11_Subject_s* y);
void zx_sa11_AuthenticationStatement_PUSH_SubjectLocality(struct zx_sa11_AuthenticationStatement_s* x, struct zx_sa11_SubjectLocality_s* y);
void zx_sa11_AuthenticationStatement_PUSH_AuthorityBinding(struct zx_sa11_AuthenticationStatement_s* x, struct zx_sa11_AuthorityBinding_s* y);

void zx_sa11_AuthenticationStatement_PUT_AuthenticationMethod(struct zx_sa11_AuthenticationStatement_s* x, struct zx_str* y);
void zx_sa11_AuthenticationStatement_PUT_AuthenticationInstant(struct zx_sa11_AuthenticationStatement_s* x, struct zx_str* y);

void zx_sa11_AuthenticationStatement_PUT_Subject(struct zx_sa11_AuthenticationStatement_s* x, int n, struct zx_sa11_Subject_s* y);
void zx_sa11_AuthenticationStatement_PUT_SubjectLocality(struct zx_sa11_AuthenticationStatement_s* x, int n, struct zx_sa11_SubjectLocality_s* y);
void zx_sa11_AuthenticationStatement_PUT_AuthorityBinding(struct zx_sa11_AuthenticationStatement_s* x, int n, struct zx_sa11_AuthorityBinding_s* y);

void zx_sa11_AuthenticationStatement_ADD_Subject(struct zx_sa11_AuthenticationStatement_s* x, int n, struct zx_sa11_Subject_s* z);
void zx_sa11_AuthenticationStatement_ADD_SubjectLocality(struct zx_sa11_AuthenticationStatement_s* x, int n, struct zx_sa11_SubjectLocality_s* z);
void zx_sa11_AuthenticationStatement_ADD_AuthorityBinding(struct zx_sa11_AuthenticationStatement_s* x, int n, struct zx_sa11_AuthorityBinding_s* z);

void zx_sa11_AuthenticationStatement_DEL_Subject(struct zx_sa11_AuthenticationStatement_s* x, int n);
void zx_sa11_AuthenticationStatement_DEL_SubjectLocality(struct zx_sa11_AuthenticationStatement_s* x, int n);
void zx_sa11_AuthenticationStatement_DEL_AuthorityBinding(struct zx_sa11_AuthenticationStatement_s* x, int n);

void zx_sa11_AuthenticationStatement_REV_Subject(struct zx_sa11_AuthenticationStatement_s* x);
void zx_sa11_AuthenticationStatement_REV_SubjectLocality(struct zx_sa11_AuthenticationStatement_s* x);
void zx_sa11_AuthenticationStatement_REV_AuthorityBinding(struct zx_sa11_AuthenticationStatement_s* x);

#endif
/* -------------------------- sa11_AuthorityBinding -------------------------- */
/* refby( zx_ff12_AuthenticationStatement_s zx_sa11_AuthenticationStatement_s ) */
#ifndef zx_sa11_AuthorityBinding_EXT
#define zx_sa11_AuthorityBinding_EXT
#endif

struct zx_sa11_AuthorityBinding_s* zx_DEC_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa11_AuthorityBinding_s* zx_NEW_sa11_AuthorityBinding(struct zx_ctx* c);
void zx_FREE_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa11_AuthorityBinding_s* zx_DEEP_CLONE_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x, int dup_strs);
void zx_DUP_STRS_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x);
int zx_WALK_SO_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x);
int zx_LEN_WO_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x);
char* zx_ENC_SO_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x, char* p);
char* zx_ENC_WO_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x);
struct zx_str* zx_EASY_ENC_WO_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x);

struct zx_sa11_AuthorityBinding_s {
  ZX_ELEM_EXT
  zx_sa11_AuthorityBinding_EXT
  struct zx_str* AuthorityKind;	/* {1,1} attribute xs:QName */
  struct zx_str* Location;	/* {1,1} attribute xs:anyURI */
  struct zx_str* Binding;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sa11_AuthorityBinding_GET_AuthorityKind(struct zx_sa11_AuthorityBinding_s* x);
struct zx_str* zx_sa11_AuthorityBinding_GET_Location(struct zx_sa11_AuthorityBinding_s* x);
struct zx_str* zx_sa11_AuthorityBinding_GET_Binding(struct zx_sa11_AuthorityBinding_s* x);





void zx_sa11_AuthorityBinding_PUT_AuthorityKind(struct zx_sa11_AuthorityBinding_s* x, struct zx_str* y);
void zx_sa11_AuthorityBinding_PUT_Location(struct zx_sa11_AuthorityBinding_s* x, struct zx_str* y);
void zx_sa11_AuthorityBinding_PUT_Binding(struct zx_sa11_AuthorityBinding_s* x, struct zx_str* y);





#endif
/* -------------------------- sa11_AuthorizationDecisionStatement -------------------------- */
/* refby( zx_sa11_Assertion_s zx_ff12_Assertion_s ) */
#ifndef zx_sa11_AuthorizationDecisionStatement_EXT
#define zx_sa11_AuthorizationDecisionStatement_EXT
#endif

struct zx_sa11_AuthorizationDecisionStatement_s* zx_DEC_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa11_AuthorizationDecisionStatement_s* zx_NEW_sa11_AuthorizationDecisionStatement(struct zx_ctx* c);
void zx_FREE_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa11_AuthorizationDecisionStatement_s* zx_DEEP_CLONE_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x, int dup_strs);
void zx_DUP_STRS_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x);
int zx_WALK_SO_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x);
int zx_LEN_WO_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x);
char* zx_ENC_SO_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x, char* p);
char* zx_ENC_WO_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x);
struct zx_str* zx_EASY_ENC_WO_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x);

struct zx_sa11_AuthorizationDecisionStatement_s {
  ZX_ELEM_EXT
  zx_sa11_AuthorizationDecisionStatement_EXT
  struct zx_sa11_Subject_s* Subject;	/* {1,1} nada */
  struct zx_sa11_Action_s* Action;	/* {1,-1} nada */
  struct zx_sa11_Evidence_s* Evidence;	/* {0,1} nada */
  struct zx_str* Resource;	/* {1,1} attribute xs:anyURI */
  struct zx_str* Decision;	/* {1,1} attribute sa11:DecisionType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sa11_AuthorizationDecisionStatement_GET_Resource(struct zx_sa11_AuthorizationDecisionStatement_s* x);
struct zx_str* zx_sa11_AuthorizationDecisionStatement_GET_Decision(struct zx_sa11_AuthorizationDecisionStatement_s* x);

struct zx_sa11_Subject_s* zx_sa11_AuthorizationDecisionStatement_GET_Subject(struct zx_sa11_AuthorizationDecisionStatement_s* x, int n);
struct zx_sa11_Action_s* zx_sa11_AuthorizationDecisionStatement_GET_Action(struct zx_sa11_AuthorizationDecisionStatement_s* x, int n);
struct zx_sa11_Evidence_s* zx_sa11_AuthorizationDecisionStatement_GET_Evidence(struct zx_sa11_AuthorizationDecisionStatement_s* x, int n);

int zx_sa11_AuthorizationDecisionStatement_NUM_Subject(struct zx_sa11_AuthorizationDecisionStatement_s* x);
int zx_sa11_AuthorizationDecisionStatement_NUM_Action(struct zx_sa11_AuthorizationDecisionStatement_s* x);
int zx_sa11_AuthorizationDecisionStatement_NUM_Evidence(struct zx_sa11_AuthorizationDecisionStatement_s* x);

struct zx_sa11_Subject_s* zx_sa11_AuthorizationDecisionStatement_POP_Subject(struct zx_sa11_AuthorizationDecisionStatement_s* x);
struct zx_sa11_Action_s* zx_sa11_AuthorizationDecisionStatement_POP_Action(struct zx_sa11_AuthorizationDecisionStatement_s* x);
struct zx_sa11_Evidence_s* zx_sa11_AuthorizationDecisionStatement_POP_Evidence(struct zx_sa11_AuthorizationDecisionStatement_s* x);

void zx_sa11_AuthorizationDecisionStatement_PUSH_Subject(struct zx_sa11_AuthorizationDecisionStatement_s* x, struct zx_sa11_Subject_s* y);
void zx_sa11_AuthorizationDecisionStatement_PUSH_Action(struct zx_sa11_AuthorizationDecisionStatement_s* x, struct zx_sa11_Action_s* y);
void zx_sa11_AuthorizationDecisionStatement_PUSH_Evidence(struct zx_sa11_AuthorizationDecisionStatement_s* x, struct zx_sa11_Evidence_s* y);

void zx_sa11_AuthorizationDecisionStatement_PUT_Resource(struct zx_sa11_AuthorizationDecisionStatement_s* x, struct zx_str* y);
void zx_sa11_AuthorizationDecisionStatement_PUT_Decision(struct zx_sa11_AuthorizationDecisionStatement_s* x, struct zx_str* y);

void zx_sa11_AuthorizationDecisionStatement_PUT_Subject(struct zx_sa11_AuthorizationDecisionStatement_s* x, int n, struct zx_sa11_Subject_s* y);
void zx_sa11_AuthorizationDecisionStatement_PUT_Action(struct zx_sa11_AuthorizationDecisionStatement_s* x, int n, struct zx_sa11_Action_s* y);
void zx_sa11_AuthorizationDecisionStatement_PUT_Evidence(struct zx_sa11_AuthorizationDecisionStatement_s* x, int n, struct zx_sa11_Evidence_s* y);

void zx_sa11_AuthorizationDecisionStatement_ADD_Subject(struct zx_sa11_AuthorizationDecisionStatement_s* x, int n, struct zx_sa11_Subject_s* z);
void zx_sa11_AuthorizationDecisionStatement_ADD_Action(struct zx_sa11_AuthorizationDecisionStatement_s* x, int n, struct zx_sa11_Action_s* z);
void zx_sa11_AuthorizationDecisionStatement_ADD_Evidence(struct zx_sa11_AuthorizationDecisionStatement_s* x, int n, struct zx_sa11_Evidence_s* z);

void zx_sa11_AuthorizationDecisionStatement_DEL_Subject(struct zx_sa11_AuthorizationDecisionStatement_s* x, int n);
void zx_sa11_AuthorizationDecisionStatement_DEL_Action(struct zx_sa11_AuthorizationDecisionStatement_s* x, int n);
void zx_sa11_AuthorizationDecisionStatement_DEL_Evidence(struct zx_sa11_AuthorizationDecisionStatement_s* x, int n);

void zx_sa11_AuthorizationDecisionStatement_REV_Subject(struct zx_sa11_AuthorizationDecisionStatement_s* x);
void zx_sa11_AuthorizationDecisionStatement_REV_Action(struct zx_sa11_AuthorizationDecisionStatement_s* x);
void zx_sa11_AuthorizationDecisionStatement_REV_Evidence(struct zx_sa11_AuthorizationDecisionStatement_s* x);

#endif
/* -------------------------- sa11_Conditions -------------------------- */
/* refby( zx_sa11_Assertion_s zx_ff12_Assertion_s ) */
#ifndef zx_sa11_Conditions_EXT
#define zx_sa11_Conditions_EXT
#endif

struct zx_sa11_Conditions_s* zx_DEC_sa11_Conditions(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa11_Conditions_s* zx_NEW_sa11_Conditions(struct zx_ctx* c);
void zx_FREE_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa11_Conditions_s* zx_DEEP_CLONE_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x, int dup_strs);
void zx_DUP_STRS_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x);
int zx_WALK_SO_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x);
int zx_LEN_WO_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x);
char* zx_ENC_SO_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x, char* p);
char* zx_ENC_WO_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x);
struct zx_str* zx_EASY_ENC_WO_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x);

struct zx_sa11_Conditions_s {
  ZX_ELEM_EXT
  zx_sa11_Conditions_EXT
  struct zx_sa11_AudienceRestrictionCondition_s* AudienceRestrictionCondition;	/* {0,-1}  */
  struct zx_sa11_DoNotCacheCondition_s* DoNotCacheCondition;	/* {0,-1} nada */
  struct zx_elem_s* Condition;	/* {0,-1} sa11:ConditionAbstractType */
  struct zx_str* NotBefore;	/* {0,1} attribute xs:dateTime */
  struct zx_str* NotOnOrAfter;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sa11_Conditions_GET_NotBefore(struct zx_sa11_Conditions_s* x);
struct zx_str* zx_sa11_Conditions_GET_NotOnOrAfter(struct zx_sa11_Conditions_s* x);

struct zx_sa11_AudienceRestrictionCondition_s* zx_sa11_Conditions_GET_AudienceRestrictionCondition(struct zx_sa11_Conditions_s* x, int n);
struct zx_sa11_DoNotCacheCondition_s* zx_sa11_Conditions_GET_DoNotCacheCondition(struct zx_sa11_Conditions_s* x, int n);
struct zx_elem_s* zx_sa11_Conditions_GET_Condition(struct zx_sa11_Conditions_s* x, int n);

int zx_sa11_Conditions_NUM_AudienceRestrictionCondition(struct zx_sa11_Conditions_s* x);
int zx_sa11_Conditions_NUM_DoNotCacheCondition(struct zx_sa11_Conditions_s* x);
int zx_sa11_Conditions_NUM_Condition(struct zx_sa11_Conditions_s* x);

struct zx_sa11_AudienceRestrictionCondition_s* zx_sa11_Conditions_POP_AudienceRestrictionCondition(struct zx_sa11_Conditions_s* x);
struct zx_sa11_DoNotCacheCondition_s* zx_sa11_Conditions_POP_DoNotCacheCondition(struct zx_sa11_Conditions_s* x);
struct zx_elem_s* zx_sa11_Conditions_POP_Condition(struct zx_sa11_Conditions_s* x);

void zx_sa11_Conditions_PUSH_AudienceRestrictionCondition(struct zx_sa11_Conditions_s* x, struct zx_sa11_AudienceRestrictionCondition_s* y);
void zx_sa11_Conditions_PUSH_DoNotCacheCondition(struct zx_sa11_Conditions_s* x, struct zx_sa11_DoNotCacheCondition_s* y);
void zx_sa11_Conditions_PUSH_Condition(struct zx_sa11_Conditions_s* x, struct zx_elem_s* y);

void zx_sa11_Conditions_PUT_NotBefore(struct zx_sa11_Conditions_s* x, struct zx_str* y);
void zx_sa11_Conditions_PUT_NotOnOrAfter(struct zx_sa11_Conditions_s* x, struct zx_str* y);

void zx_sa11_Conditions_PUT_AudienceRestrictionCondition(struct zx_sa11_Conditions_s* x, int n, struct zx_sa11_AudienceRestrictionCondition_s* y);
void zx_sa11_Conditions_PUT_DoNotCacheCondition(struct zx_sa11_Conditions_s* x, int n, struct zx_sa11_DoNotCacheCondition_s* y);
void zx_sa11_Conditions_PUT_Condition(struct zx_sa11_Conditions_s* x, int n, struct zx_elem_s* y);

void zx_sa11_Conditions_ADD_AudienceRestrictionCondition(struct zx_sa11_Conditions_s* x, int n, struct zx_sa11_AudienceRestrictionCondition_s* z);
void zx_sa11_Conditions_ADD_DoNotCacheCondition(struct zx_sa11_Conditions_s* x, int n, struct zx_sa11_DoNotCacheCondition_s* z);
void zx_sa11_Conditions_ADD_Condition(struct zx_sa11_Conditions_s* x, int n, struct zx_elem_s* z);

void zx_sa11_Conditions_DEL_AudienceRestrictionCondition(struct zx_sa11_Conditions_s* x, int n);
void zx_sa11_Conditions_DEL_DoNotCacheCondition(struct zx_sa11_Conditions_s* x, int n);
void zx_sa11_Conditions_DEL_Condition(struct zx_sa11_Conditions_s* x, int n);

void zx_sa11_Conditions_REV_AudienceRestrictionCondition(struct zx_sa11_Conditions_s* x);
void zx_sa11_Conditions_REV_DoNotCacheCondition(struct zx_sa11_Conditions_s* x);
void zx_sa11_Conditions_REV_Condition(struct zx_sa11_Conditions_s* x);

#endif
/* -------------------------- sa11_DoNotCacheCondition -------------------------- */
/* refby( zx_sa11_Conditions_s ) */
#ifndef zx_sa11_DoNotCacheCondition_EXT
#define zx_sa11_DoNotCacheCondition_EXT
#endif

struct zx_sa11_DoNotCacheCondition_s* zx_DEC_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa11_DoNotCacheCondition_s* zx_NEW_sa11_DoNotCacheCondition(struct zx_ctx* c);
void zx_FREE_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa11_DoNotCacheCondition_s* zx_DEEP_CLONE_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x, int dup_strs);
void zx_DUP_STRS_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x);
int zx_WALK_SO_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x);
int zx_LEN_WO_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x);
char* zx_ENC_SO_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x, char* p);
char* zx_ENC_WO_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x);
struct zx_str* zx_EASY_ENC_WO_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x);

struct zx_sa11_DoNotCacheCondition_s {
  ZX_ELEM_EXT
  zx_sa11_DoNotCacheCondition_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- sa11_Evidence -------------------------- */
/* refby( zx_sa11_AuthorizationDecisionStatement_s zx_sp11_AuthorizationDecisionQuery_s ) */
#ifndef zx_sa11_Evidence_EXT
#define zx_sa11_Evidence_EXT
#endif

struct zx_sa11_Evidence_s* zx_DEC_sa11_Evidence(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa11_Evidence_s* zx_NEW_sa11_Evidence(struct zx_ctx* c);
void zx_FREE_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa11_Evidence_s* zx_DEEP_CLONE_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x, int dup_strs);
void zx_DUP_STRS_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x);
int zx_WALK_SO_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x);
int zx_LEN_WO_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x);
char* zx_ENC_SO_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x, char* p);
char* zx_ENC_WO_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x);
struct zx_str* zx_EASY_ENC_WO_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x);

struct zx_sa11_Evidence_s {
  ZX_ELEM_EXT
  zx_sa11_Evidence_EXT
  struct zx_elem_s* AssertionIDReference;	/* {0,-1} xs:NCName */
  struct zx_sa11_Assertion_s* Assertion;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_sa11_Evidence_GET_AssertionIDReference(struct zx_sa11_Evidence_s* x, int n);
struct zx_sa11_Assertion_s* zx_sa11_Evidence_GET_Assertion(struct zx_sa11_Evidence_s* x, int n);

int zx_sa11_Evidence_NUM_AssertionIDReference(struct zx_sa11_Evidence_s* x);
int zx_sa11_Evidence_NUM_Assertion(struct zx_sa11_Evidence_s* x);

struct zx_elem_s* zx_sa11_Evidence_POP_AssertionIDReference(struct zx_sa11_Evidence_s* x);
struct zx_sa11_Assertion_s* zx_sa11_Evidence_POP_Assertion(struct zx_sa11_Evidence_s* x);

void zx_sa11_Evidence_PUSH_AssertionIDReference(struct zx_sa11_Evidence_s* x, struct zx_elem_s* y);
void zx_sa11_Evidence_PUSH_Assertion(struct zx_sa11_Evidence_s* x, struct zx_sa11_Assertion_s* y);


void zx_sa11_Evidence_PUT_AssertionIDReference(struct zx_sa11_Evidence_s* x, int n, struct zx_elem_s* y);
void zx_sa11_Evidence_PUT_Assertion(struct zx_sa11_Evidence_s* x, int n, struct zx_sa11_Assertion_s* y);

void zx_sa11_Evidence_ADD_AssertionIDReference(struct zx_sa11_Evidence_s* x, int n, struct zx_elem_s* z);
void zx_sa11_Evidence_ADD_Assertion(struct zx_sa11_Evidence_s* x, int n, struct zx_sa11_Assertion_s* z);

void zx_sa11_Evidence_DEL_AssertionIDReference(struct zx_sa11_Evidence_s* x, int n);
void zx_sa11_Evidence_DEL_Assertion(struct zx_sa11_Evidence_s* x, int n);

void zx_sa11_Evidence_REV_AssertionIDReference(struct zx_sa11_Evidence_s* x);
void zx_sa11_Evidence_REV_Assertion(struct zx_sa11_Evidence_s* x);

#endif
/* -------------------------- sa11_NameIdentifier -------------------------- */
/* refby( zx_ff12_NameIdentifierMappingResponse_s zx_sec12_ProxySubject_s zx_sa11_Subject_s zx_ff12_FederationTerminationNotification_s zx_ff12_NameIdentifierMappingRequest_s zx_ff12_LogoutRequest_s zx_ff12_Subject_s zx_sec12_SessionSubject_s ) */
#ifndef zx_sa11_NameIdentifier_EXT
#define zx_sa11_NameIdentifier_EXT
#endif

struct zx_sa11_NameIdentifier_s* zx_DEC_sa11_NameIdentifier(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa11_NameIdentifier_s* zx_NEW_sa11_NameIdentifier(struct zx_ctx* c);
void zx_FREE_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa11_NameIdentifier_s* zx_DEEP_CLONE_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x, int dup_strs);
void zx_DUP_STRS_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x);
int zx_WALK_SO_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x);
int zx_LEN_WO_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x);
char* zx_ENC_SO_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x, char* p);
char* zx_ENC_WO_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x);
struct zx_str* zx_EASY_ENC_WO_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x);

struct zx_sa11_NameIdentifier_s {
  ZX_ELEM_EXT
  zx_sa11_NameIdentifier_EXT
  struct zx_str* NameQualifier;	/* {0,1} attribute xs:string */
  struct zx_str* Format;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sa11_NameIdentifier_GET_NameQualifier(struct zx_sa11_NameIdentifier_s* x);
struct zx_str* zx_sa11_NameIdentifier_GET_Format(struct zx_sa11_NameIdentifier_s* x);





void zx_sa11_NameIdentifier_PUT_NameQualifier(struct zx_sa11_NameIdentifier_s* x, struct zx_str* y);
void zx_sa11_NameIdentifier_PUT_Format(struct zx_sa11_NameIdentifier_s* x, struct zx_str* y);





#endif
/* -------------------------- sa11_Subject -------------------------- */
/* refby( zx_sa11_AuthorizationDecisionStatement_s zx_sec12_ResourceAccessStatement_s zx_sec12_ProxyTransitedStatement_s zx_ff12_AuthenticationStatement_s zx_sp11_AttributeQuery_s zx_sp11_AuthorizationDecisionQuery_s zx_sp11_AuthenticationQuery_s zx_sa11_AuthenticationStatement_s zx_sa11_SubjectStatement_s zx_sec12_SessionContextStatement_s zx_sp11_SubjectQuery_s zx_sa11_AttributeStatement_s ) */
#ifndef zx_sa11_Subject_EXT
#define zx_sa11_Subject_EXT
#endif

struct zx_sa11_Subject_s* zx_DEC_sa11_Subject(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa11_Subject_s* zx_NEW_sa11_Subject(struct zx_ctx* c);
void zx_FREE_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa11_Subject_s* zx_DEEP_CLONE_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x, int dup_strs);
void zx_DUP_STRS_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x);
int zx_WALK_SO_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x);
int zx_LEN_WO_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x);
char* zx_ENC_SO_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x, char* p);
char* zx_ENC_WO_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x);
struct zx_str* zx_EASY_ENC_WO_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x);

struct zx_sa11_Subject_s {
  ZX_ELEM_EXT
  zx_sa11_Subject_EXT
  struct zx_sa11_NameIdentifier_s* NameIdentifier;	/* {0,1} nada */
  struct zx_sa11_SubjectConfirmation_s* SubjectConfirmation;	/* {0,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_sa11_NameIdentifier_s* zx_sa11_Subject_GET_NameIdentifier(struct zx_sa11_Subject_s* x, int n);
struct zx_sa11_SubjectConfirmation_s* zx_sa11_Subject_GET_SubjectConfirmation(struct zx_sa11_Subject_s* x, int n);

int zx_sa11_Subject_NUM_NameIdentifier(struct zx_sa11_Subject_s* x);
int zx_sa11_Subject_NUM_SubjectConfirmation(struct zx_sa11_Subject_s* x);

struct zx_sa11_NameIdentifier_s* zx_sa11_Subject_POP_NameIdentifier(struct zx_sa11_Subject_s* x);
struct zx_sa11_SubjectConfirmation_s* zx_sa11_Subject_POP_SubjectConfirmation(struct zx_sa11_Subject_s* x);

void zx_sa11_Subject_PUSH_NameIdentifier(struct zx_sa11_Subject_s* x, struct zx_sa11_NameIdentifier_s* y);
void zx_sa11_Subject_PUSH_SubjectConfirmation(struct zx_sa11_Subject_s* x, struct zx_sa11_SubjectConfirmation_s* y);


void zx_sa11_Subject_PUT_NameIdentifier(struct zx_sa11_Subject_s* x, int n, struct zx_sa11_NameIdentifier_s* y);
void zx_sa11_Subject_PUT_SubjectConfirmation(struct zx_sa11_Subject_s* x, int n, struct zx_sa11_SubjectConfirmation_s* y);

void zx_sa11_Subject_ADD_NameIdentifier(struct zx_sa11_Subject_s* x, int n, struct zx_sa11_NameIdentifier_s* z);
void zx_sa11_Subject_ADD_SubjectConfirmation(struct zx_sa11_Subject_s* x, int n, struct zx_sa11_SubjectConfirmation_s* z);

void zx_sa11_Subject_DEL_NameIdentifier(struct zx_sa11_Subject_s* x, int n);
void zx_sa11_Subject_DEL_SubjectConfirmation(struct zx_sa11_Subject_s* x, int n);

void zx_sa11_Subject_REV_NameIdentifier(struct zx_sa11_Subject_s* x);
void zx_sa11_Subject_REV_SubjectConfirmation(struct zx_sa11_Subject_s* x);

#endif
/* -------------------------- sa11_SubjectConfirmation -------------------------- */
/* refby( zx_sec12_ProxySubject_s zx_sa11_Subject_s zx_ff12_Subject_s zx_sec12_SessionSubject_s ) */
#ifndef zx_sa11_SubjectConfirmation_EXT
#define zx_sa11_SubjectConfirmation_EXT
#endif

struct zx_sa11_SubjectConfirmation_s* zx_DEC_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa11_SubjectConfirmation_s* zx_NEW_sa11_SubjectConfirmation(struct zx_ctx* c);
void zx_FREE_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa11_SubjectConfirmation_s* zx_DEEP_CLONE_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x, int dup_strs);
void zx_DUP_STRS_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x);
int zx_WALK_SO_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x);
int zx_LEN_WO_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x);
char* zx_ENC_SO_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x, char* p);
char* zx_ENC_WO_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x);
struct zx_str* zx_EASY_ENC_WO_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x);

struct zx_sa11_SubjectConfirmation_s {
  ZX_ELEM_EXT
  zx_sa11_SubjectConfirmation_EXT
  struct zx_elem_s* ConfirmationMethod;	/* {1,-1} xs:anyURI */
  struct zx_elem_s* SubjectConfirmationData;	/* {0,1} xs:anyType */
  struct zx_ds_KeyInfo_s* KeyInfo;	/* {0,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_sa11_SubjectConfirmation_GET_ConfirmationMethod(struct zx_sa11_SubjectConfirmation_s* x, int n);
struct zx_elem_s* zx_sa11_SubjectConfirmation_GET_SubjectConfirmationData(struct zx_sa11_SubjectConfirmation_s* x, int n);
struct zx_ds_KeyInfo_s* zx_sa11_SubjectConfirmation_GET_KeyInfo(struct zx_sa11_SubjectConfirmation_s* x, int n);

int zx_sa11_SubjectConfirmation_NUM_ConfirmationMethod(struct zx_sa11_SubjectConfirmation_s* x);
int zx_sa11_SubjectConfirmation_NUM_SubjectConfirmationData(struct zx_sa11_SubjectConfirmation_s* x);
int zx_sa11_SubjectConfirmation_NUM_KeyInfo(struct zx_sa11_SubjectConfirmation_s* x);

struct zx_elem_s* zx_sa11_SubjectConfirmation_POP_ConfirmationMethod(struct zx_sa11_SubjectConfirmation_s* x);
struct zx_elem_s* zx_sa11_SubjectConfirmation_POP_SubjectConfirmationData(struct zx_sa11_SubjectConfirmation_s* x);
struct zx_ds_KeyInfo_s* zx_sa11_SubjectConfirmation_POP_KeyInfo(struct zx_sa11_SubjectConfirmation_s* x);

void zx_sa11_SubjectConfirmation_PUSH_ConfirmationMethod(struct zx_sa11_SubjectConfirmation_s* x, struct zx_elem_s* y);
void zx_sa11_SubjectConfirmation_PUSH_SubjectConfirmationData(struct zx_sa11_SubjectConfirmation_s* x, struct zx_elem_s* y);
void zx_sa11_SubjectConfirmation_PUSH_KeyInfo(struct zx_sa11_SubjectConfirmation_s* x, struct zx_ds_KeyInfo_s* y);


void zx_sa11_SubjectConfirmation_PUT_ConfirmationMethod(struct zx_sa11_SubjectConfirmation_s* x, int n, struct zx_elem_s* y);
void zx_sa11_SubjectConfirmation_PUT_SubjectConfirmationData(struct zx_sa11_SubjectConfirmation_s* x, int n, struct zx_elem_s* y);
void zx_sa11_SubjectConfirmation_PUT_KeyInfo(struct zx_sa11_SubjectConfirmation_s* x, int n, struct zx_ds_KeyInfo_s* y);

void zx_sa11_SubjectConfirmation_ADD_ConfirmationMethod(struct zx_sa11_SubjectConfirmation_s* x, int n, struct zx_elem_s* z);
void zx_sa11_SubjectConfirmation_ADD_SubjectConfirmationData(struct zx_sa11_SubjectConfirmation_s* x, int n, struct zx_elem_s* z);
void zx_sa11_SubjectConfirmation_ADD_KeyInfo(struct zx_sa11_SubjectConfirmation_s* x, int n, struct zx_ds_KeyInfo_s* z);

void zx_sa11_SubjectConfirmation_DEL_ConfirmationMethod(struct zx_sa11_SubjectConfirmation_s* x, int n);
void zx_sa11_SubjectConfirmation_DEL_SubjectConfirmationData(struct zx_sa11_SubjectConfirmation_s* x, int n);
void zx_sa11_SubjectConfirmation_DEL_KeyInfo(struct zx_sa11_SubjectConfirmation_s* x, int n);

void zx_sa11_SubjectConfirmation_REV_ConfirmationMethod(struct zx_sa11_SubjectConfirmation_s* x);
void zx_sa11_SubjectConfirmation_REV_SubjectConfirmationData(struct zx_sa11_SubjectConfirmation_s* x);
void zx_sa11_SubjectConfirmation_REV_KeyInfo(struct zx_sa11_SubjectConfirmation_s* x);

#endif
/* -------------------------- sa11_SubjectLocality -------------------------- */
/* refby( zx_ff12_AuthenticationStatement_s zx_sa11_AuthenticationStatement_s ) */
#ifndef zx_sa11_SubjectLocality_EXT
#define zx_sa11_SubjectLocality_EXT
#endif

struct zx_sa11_SubjectLocality_s* zx_DEC_sa11_SubjectLocality(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa11_SubjectLocality_s* zx_NEW_sa11_SubjectLocality(struct zx_ctx* c);
void zx_FREE_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa11_SubjectLocality_s* zx_DEEP_CLONE_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x, int dup_strs);
void zx_DUP_STRS_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x);
int zx_WALK_SO_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x);
int zx_LEN_WO_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x);
char* zx_ENC_SO_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x, char* p);
char* zx_ENC_WO_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x);
struct zx_str* zx_EASY_ENC_WO_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x);

struct zx_sa11_SubjectLocality_s {
  ZX_ELEM_EXT
  zx_sa11_SubjectLocality_EXT
  struct zx_str* IPAddress;	/* {0,1} attribute xs:string */
  struct zx_str* DNSAddress;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sa11_SubjectLocality_GET_IPAddress(struct zx_sa11_SubjectLocality_s* x);
struct zx_str* zx_sa11_SubjectLocality_GET_DNSAddress(struct zx_sa11_SubjectLocality_s* x);





void zx_sa11_SubjectLocality_PUT_IPAddress(struct zx_sa11_SubjectLocality_s* x, struct zx_str* y);
void zx_sa11_SubjectLocality_PUT_DNSAddress(struct zx_sa11_SubjectLocality_s* x, struct zx_str* y);





#endif
/* -------------------------- sa11_SubjectStatement -------------------------- */
/* refby( zx_sa11_Assertion_s zx_ff12_Assertion_s ) */
#ifndef zx_sa11_SubjectStatement_EXT
#define zx_sa11_SubjectStatement_EXT
#endif

struct zx_sa11_SubjectStatement_s* zx_DEC_sa11_SubjectStatement(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sa11_SubjectStatement_s* zx_NEW_sa11_SubjectStatement(struct zx_ctx* c);
void zx_FREE_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sa11_SubjectStatement_s* zx_DEEP_CLONE_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x, int dup_strs);
void zx_DUP_STRS_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x);
int zx_WALK_SO_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x);
int zx_LEN_WO_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x);
char* zx_ENC_SO_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x, char* p);
char* zx_ENC_WO_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x);
struct zx_str* zx_EASY_ENC_WO_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x);

struct zx_sa11_SubjectStatement_s {
  ZX_ELEM_EXT
  zx_sa11_SubjectStatement_EXT
  struct zx_sa11_Subject_s* Subject;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_sa11_Subject_s* zx_sa11_SubjectStatement_GET_Subject(struct zx_sa11_SubjectStatement_s* x, int n);

int zx_sa11_SubjectStatement_NUM_Subject(struct zx_sa11_SubjectStatement_s* x);

struct zx_sa11_Subject_s* zx_sa11_SubjectStatement_POP_Subject(struct zx_sa11_SubjectStatement_s* x);

void zx_sa11_SubjectStatement_PUSH_Subject(struct zx_sa11_SubjectStatement_s* x, struct zx_sa11_Subject_s* y);


void zx_sa11_SubjectStatement_PUT_Subject(struct zx_sa11_SubjectStatement_s* x, int n, struct zx_sa11_Subject_s* y);

void zx_sa11_SubjectStatement_ADD_Subject(struct zx_sa11_SubjectStatement_s* x, int n, struct zx_sa11_Subject_s* z);

void zx_sa11_SubjectStatement_DEL_Subject(struct zx_sa11_SubjectStatement_s* x, int n);

void zx_sa11_SubjectStatement_REV_Subject(struct zx_sa11_SubjectStatement_s* x);

#endif

#endif
