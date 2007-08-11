/* c/zx-ac-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_ac_data_h
#define _c_zx_ac_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- ac_ActivationLimit -------------------------- */
/* refby( zx_ac_ActivationPin_s ) */
#ifndef zx_ac_ActivationLimit_EXT
#define zx_ac_ActivationLimit_EXT
#endif

struct zx_ac_ActivationLimit_s* zx_DEC_ac_ActivationLimit(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_ActivationLimit_s* zx_NEW_ac_ActivationLimit(struct zx_ctx* c);
void zx_FREE_ac_ActivationLimit(struct zx_ctx* c, struct zx_ac_ActivationLimit_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_ActivationLimit_s* zx_DEEP_CLONE_ac_ActivationLimit(struct zx_ctx* c, struct zx_ac_ActivationLimit_s* x, int dup_strs);
void zx_DUP_STRS_ac_ActivationLimit(struct zx_ctx* c, struct zx_ac_ActivationLimit_s* x);
int zx_WALK_SO_ac_ActivationLimit(struct zx_ctx* c, struct zx_ac_ActivationLimit_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_ActivationLimit(struct zx_ctx* c, struct zx_ac_ActivationLimit_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_ActivationLimit(struct zx_ctx* c, struct zx_ac_ActivationLimit_s* x);
int zx_LEN_WO_ac_ActivationLimit(struct zx_ctx* c, struct zx_ac_ActivationLimit_s* x);
char* zx_ENC_SO_ac_ActivationLimit(struct zx_ctx* c, struct zx_ac_ActivationLimit_s* x, char* p);
char* zx_ENC_WO_ac_ActivationLimit(struct zx_ctx* c, struct zx_ac_ActivationLimit_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_ActivationLimit(struct zx_ctx* c, struct zx_ac_ActivationLimit_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_ActivationLimit(struct zx_ctx* c, struct zx_ac_ActivationLimit_s* x);

struct zx_ac_ActivationLimit_s {
  ZX_ELEM_EXT
  zx_ac_ActivationLimit_EXT
  struct zx_ac_ActivationLimitDuration_s* ActivationLimitDuration;	/* {0,1}  */
  struct zx_ac_ActivationLimitUsages_s* ActivationLimitUsages;	/* {0,1}  */
  struct zx_elem_s* ActivationLimitSession;	/* {0,1} ac:ActivationLimitSessionType */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_ActivationLimitDuration_s* zx_ac_ActivationLimit_GET_ActivationLimitDuration(struct zx_ac_ActivationLimit_s* x, int n);
struct zx_ac_ActivationLimitUsages_s* zx_ac_ActivationLimit_GET_ActivationLimitUsages(struct zx_ac_ActivationLimit_s* x, int n);
struct zx_elem_s* zx_ac_ActivationLimit_GET_ActivationLimitSession(struct zx_ac_ActivationLimit_s* x, int n);

int zx_ac_ActivationLimit_NUM_ActivationLimitDuration(struct zx_ac_ActivationLimit_s* x);
int zx_ac_ActivationLimit_NUM_ActivationLimitUsages(struct zx_ac_ActivationLimit_s* x);
int zx_ac_ActivationLimit_NUM_ActivationLimitSession(struct zx_ac_ActivationLimit_s* x);

struct zx_ac_ActivationLimitDuration_s* zx_ac_ActivationLimit_POP_ActivationLimitDuration(struct zx_ac_ActivationLimit_s* x);
struct zx_ac_ActivationLimitUsages_s* zx_ac_ActivationLimit_POP_ActivationLimitUsages(struct zx_ac_ActivationLimit_s* x);
struct zx_elem_s* zx_ac_ActivationLimit_POP_ActivationLimitSession(struct zx_ac_ActivationLimit_s* x);

void zx_ac_ActivationLimit_PUSH_ActivationLimitDuration(struct zx_ac_ActivationLimit_s* x, struct zx_ac_ActivationLimitDuration_s* y);
void zx_ac_ActivationLimit_PUSH_ActivationLimitUsages(struct zx_ac_ActivationLimit_s* x, struct zx_ac_ActivationLimitUsages_s* y);
void zx_ac_ActivationLimit_PUSH_ActivationLimitSession(struct zx_ac_ActivationLimit_s* x, struct zx_elem_s* y);


void zx_ac_ActivationLimit_PUT_ActivationLimitDuration(struct zx_ac_ActivationLimit_s* x, int n, struct zx_ac_ActivationLimitDuration_s* y);
void zx_ac_ActivationLimit_PUT_ActivationLimitUsages(struct zx_ac_ActivationLimit_s* x, int n, struct zx_ac_ActivationLimitUsages_s* y);
void zx_ac_ActivationLimit_PUT_ActivationLimitSession(struct zx_ac_ActivationLimit_s* x, int n, struct zx_elem_s* y);

void zx_ac_ActivationLimit_ADD_ActivationLimitDuration(struct zx_ac_ActivationLimit_s* x, int n, struct zx_ac_ActivationLimitDuration_s* z);
void zx_ac_ActivationLimit_ADD_ActivationLimitUsages(struct zx_ac_ActivationLimit_s* x, int n, struct zx_ac_ActivationLimitUsages_s* z);
void zx_ac_ActivationLimit_ADD_ActivationLimitSession(struct zx_ac_ActivationLimit_s* x, int n, struct zx_elem_s* z);

void zx_ac_ActivationLimit_DEL_ActivationLimitDuration(struct zx_ac_ActivationLimit_s* x, int n);
void zx_ac_ActivationLimit_DEL_ActivationLimitUsages(struct zx_ac_ActivationLimit_s* x, int n);
void zx_ac_ActivationLimit_DEL_ActivationLimitSession(struct zx_ac_ActivationLimit_s* x, int n);

void zx_ac_ActivationLimit_REV_ActivationLimitDuration(struct zx_ac_ActivationLimit_s* x);
void zx_ac_ActivationLimit_REV_ActivationLimitUsages(struct zx_ac_ActivationLimit_s* x);
void zx_ac_ActivationLimit_REV_ActivationLimitSession(struct zx_ac_ActivationLimit_s* x);

#endif
/* -------------------------- ac_ActivationLimitDuration -------------------------- */
/* refby( zx_ac_ActivationLimit_s ) */
#ifndef zx_ac_ActivationLimitDuration_EXT
#define zx_ac_ActivationLimitDuration_EXT
#endif

struct zx_ac_ActivationLimitDuration_s* zx_DEC_ac_ActivationLimitDuration(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_ActivationLimitDuration_s* zx_NEW_ac_ActivationLimitDuration(struct zx_ctx* c);
void zx_FREE_ac_ActivationLimitDuration(struct zx_ctx* c, struct zx_ac_ActivationLimitDuration_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_ActivationLimitDuration_s* zx_DEEP_CLONE_ac_ActivationLimitDuration(struct zx_ctx* c, struct zx_ac_ActivationLimitDuration_s* x, int dup_strs);
void zx_DUP_STRS_ac_ActivationLimitDuration(struct zx_ctx* c, struct zx_ac_ActivationLimitDuration_s* x);
int zx_WALK_SO_ac_ActivationLimitDuration(struct zx_ctx* c, struct zx_ac_ActivationLimitDuration_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_ActivationLimitDuration(struct zx_ctx* c, struct zx_ac_ActivationLimitDuration_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_ActivationLimitDuration(struct zx_ctx* c, struct zx_ac_ActivationLimitDuration_s* x);
int zx_LEN_WO_ac_ActivationLimitDuration(struct zx_ctx* c, struct zx_ac_ActivationLimitDuration_s* x);
char* zx_ENC_SO_ac_ActivationLimitDuration(struct zx_ctx* c, struct zx_ac_ActivationLimitDuration_s* x, char* p);
char* zx_ENC_WO_ac_ActivationLimitDuration(struct zx_ctx* c, struct zx_ac_ActivationLimitDuration_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_ActivationLimitDuration(struct zx_ctx* c, struct zx_ac_ActivationLimitDuration_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_ActivationLimitDuration(struct zx_ctx* c, struct zx_ac_ActivationLimitDuration_s* x);

struct zx_ac_ActivationLimitDuration_s {
  ZX_ELEM_EXT
  zx_ac_ActivationLimitDuration_EXT
  struct zx_str* duration;	/* {1,1} attribute xs:duration */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ac_ActivationLimitDuration_GET_duration(struct zx_ac_ActivationLimitDuration_s* x);





void zx_ac_ActivationLimitDuration_PUT_duration(struct zx_ac_ActivationLimitDuration_s* x, struct zx_str* y);





#endif
/* -------------------------- ac_ActivationLimitUsages -------------------------- */
/* refby( zx_ac_ActivationLimit_s ) */
#ifndef zx_ac_ActivationLimitUsages_EXT
#define zx_ac_ActivationLimitUsages_EXT
#endif

struct zx_ac_ActivationLimitUsages_s* zx_DEC_ac_ActivationLimitUsages(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_ActivationLimitUsages_s* zx_NEW_ac_ActivationLimitUsages(struct zx_ctx* c);
void zx_FREE_ac_ActivationLimitUsages(struct zx_ctx* c, struct zx_ac_ActivationLimitUsages_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_ActivationLimitUsages_s* zx_DEEP_CLONE_ac_ActivationLimitUsages(struct zx_ctx* c, struct zx_ac_ActivationLimitUsages_s* x, int dup_strs);
void zx_DUP_STRS_ac_ActivationLimitUsages(struct zx_ctx* c, struct zx_ac_ActivationLimitUsages_s* x);
int zx_WALK_SO_ac_ActivationLimitUsages(struct zx_ctx* c, struct zx_ac_ActivationLimitUsages_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_ActivationLimitUsages(struct zx_ctx* c, struct zx_ac_ActivationLimitUsages_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_ActivationLimitUsages(struct zx_ctx* c, struct zx_ac_ActivationLimitUsages_s* x);
int zx_LEN_WO_ac_ActivationLimitUsages(struct zx_ctx* c, struct zx_ac_ActivationLimitUsages_s* x);
char* zx_ENC_SO_ac_ActivationLimitUsages(struct zx_ctx* c, struct zx_ac_ActivationLimitUsages_s* x, char* p);
char* zx_ENC_WO_ac_ActivationLimitUsages(struct zx_ctx* c, struct zx_ac_ActivationLimitUsages_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_ActivationLimitUsages(struct zx_ctx* c, struct zx_ac_ActivationLimitUsages_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_ActivationLimitUsages(struct zx_ctx* c, struct zx_ac_ActivationLimitUsages_s* x);

struct zx_ac_ActivationLimitUsages_s {
  ZX_ELEM_EXT
  zx_ac_ActivationLimitUsages_EXT
  struct zx_str* number;	/* {1,1} attribute xs:integer */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ac_ActivationLimitUsages_GET_number(struct zx_ac_ActivationLimitUsages_s* x);





void zx_ac_ActivationLimitUsages_PUT_number(struct zx_ac_ActivationLimitUsages_s* x, struct zx_str* y);





#endif
/* -------------------------- ac_ActivationPin -------------------------- */
/* refby( zx_ac_KeyActivation_s zx_ac_PrincipalAuthenticationMechanism_s ) */
#ifndef zx_ac_ActivationPin_EXT
#define zx_ac_ActivationPin_EXT
#endif

struct zx_ac_ActivationPin_s* zx_DEC_ac_ActivationPin(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_ActivationPin_s* zx_NEW_ac_ActivationPin(struct zx_ctx* c);
void zx_FREE_ac_ActivationPin(struct zx_ctx* c, struct zx_ac_ActivationPin_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_ActivationPin_s* zx_DEEP_CLONE_ac_ActivationPin(struct zx_ctx* c, struct zx_ac_ActivationPin_s* x, int dup_strs);
void zx_DUP_STRS_ac_ActivationPin(struct zx_ctx* c, struct zx_ac_ActivationPin_s* x);
int zx_WALK_SO_ac_ActivationPin(struct zx_ctx* c, struct zx_ac_ActivationPin_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_ActivationPin(struct zx_ctx* c, struct zx_ac_ActivationPin_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_ActivationPin(struct zx_ctx* c, struct zx_ac_ActivationPin_s* x);
int zx_LEN_WO_ac_ActivationPin(struct zx_ctx* c, struct zx_ac_ActivationPin_s* x);
char* zx_ENC_SO_ac_ActivationPin(struct zx_ctx* c, struct zx_ac_ActivationPin_s* x, char* p);
char* zx_ENC_WO_ac_ActivationPin(struct zx_ctx* c, struct zx_ac_ActivationPin_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_ActivationPin(struct zx_ctx* c, struct zx_ac_ActivationPin_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_ActivationPin(struct zx_ctx* c, struct zx_ac_ActivationPin_s* x);

struct zx_ac_ActivationPin_s {
  ZX_ELEM_EXT
  zx_ac_ActivationPin_EXT
  struct zx_ac_Length_s* Length;	/* {0,1} nada */
  struct zx_ac_Alphabet_s* Alphabet;	/* {0,1} nada */
  struct zx_ac_Generation_s* Generation;	/* {0,1}  */
  struct zx_ac_ActivationLimit_s* ActivationLimit;	/* {0,1} nada */
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_Length_s* zx_ac_ActivationPin_GET_Length(struct zx_ac_ActivationPin_s* x, int n);
struct zx_ac_Alphabet_s* zx_ac_ActivationPin_GET_Alphabet(struct zx_ac_ActivationPin_s* x, int n);
struct zx_ac_Generation_s* zx_ac_ActivationPin_GET_Generation(struct zx_ac_ActivationPin_s* x, int n);
struct zx_ac_ActivationLimit_s* zx_ac_ActivationPin_GET_ActivationLimit(struct zx_ac_ActivationPin_s* x, int n);
struct zx_ac_Extension_s* zx_ac_ActivationPin_GET_Extension(struct zx_ac_ActivationPin_s* x, int n);

int zx_ac_ActivationPin_NUM_Length(struct zx_ac_ActivationPin_s* x);
int zx_ac_ActivationPin_NUM_Alphabet(struct zx_ac_ActivationPin_s* x);
int zx_ac_ActivationPin_NUM_Generation(struct zx_ac_ActivationPin_s* x);
int zx_ac_ActivationPin_NUM_ActivationLimit(struct zx_ac_ActivationPin_s* x);
int zx_ac_ActivationPin_NUM_Extension(struct zx_ac_ActivationPin_s* x);

struct zx_ac_Length_s* zx_ac_ActivationPin_POP_Length(struct zx_ac_ActivationPin_s* x);
struct zx_ac_Alphabet_s* zx_ac_ActivationPin_POP_Alphabet(struct zx_ac_ActivationPin_s* x);
struct zx_ac_Generation_s* zx_ac_ActivationPin_POP_Generation(struct zx_ac_ActivationPin_s* x);
struct zx_ac_ActivationLimit_s* zx_ac_ActivationPin_POP_ActivationLimit(struct zx_ac_ActivationPin_s* x);
struct zx_ac_Extension_s* zx_ac_ActivationPin_POP_Extension(struct zx_ac_ActivationPin_s* x);

void zx_ac_ActivationPin_PUSH_Length(struct zx_ac_ActivationPin_s* x, struct zx_ac_Length_s* y);
void zx_ac_ActivationPin_PUSH_Alphabet(struct zx_ac_ActivationPin_s* x, struct zx_ac_Alphabet_s* y);
void zx_ac_ActivationPin_PUSH_Generation(struct zx_ac_ActivationPin_s* x, struct zx_ac_Generation_s* y);
void zx_ac_ActivationPin_PUSH_ActivationLimit(struct zx_ac_ActivationPin_s* x, struct zx_ac_ActivationLimit_s* y);
void zx_ac_ActivationPin_PUSH_Extension(struct zx_ac_ActivationPin_s* x, struct zx_ac_Extension_s* y);


void zx_ac_ActivationPin_PUT_Length(struct zx_ac_ActivationPin_s* x, int n, struct zx_ac_Length_s* y);
void zx_ac_ActivationPin_PUT_Alphabet(struct zx_ac_ActivationPin_s* x, int n, struct zx_ac_Alphabet_s* y);
void zx_ac_ActivationPin_PUT_Generation(struct zx_ac_ActivationPin_s* x, int n, struct zx_ac_Generation_s* y);
void zx_ac_ActivationPin_PUT_ActivationLimit(struct zx_ac_ActivationPin_s* x, int n, struct zx_ac_ActivationLimit_s* y);
void zx_ac_ActivationPin_PUT_Extension(struct zx_ac_ActivationPin_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_ActivationPin_ADD_Length(struct zx_ac_ActivationPin_s* x, int n, struct zx_ac_Length_s* z);
void zx_ac_ActivationPin_ADD_Alphabet(struct zx_ac_ActivationPin_s* x, int n, struct zx_ac_Alphabet_s* z);
void zx_ac_ActivationPin_ADD_Generation(struct zx_ac_ActivationPin_s* x, int n, struct zx_ac_Generation_s* z);
void zx_ac_ActivationPin_ADD_ActivationLimit(struct zx_ac_ActivationPin_s* x, int n, struct zx_ac_ActivationLimit_s* z);
void zx_ac_ActivationPin_ADD_Extension(struct zx_ac_ActivationPin_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_ActivationPin_DEL_Length(struct zx_ac_ActivationPin_s* x, int n);
void zx_ac_ActivationPin_DEL_Alphabet(struct zx_ac_ActivationPin_s* x, int n);
void zx_ac_ActivationPin_DEL_Generation(struct zx_ac_ActivationPin_s* x, int n);
void zx_ac_ActivationPin_DEL_ActivationLimit(struct zx_ac_ActivationPin_s* x, int n);
void zx_ac_ActivationPin_DEL_Extension(struct zx_ac_ActivationPin_s* x, int n);

void zx_ac_ActivationPin_REV_Length(struct zx_ac_ActivationPin_s* x);
void zx_ac_ActivationPin_REV_Alphabet(struct zx_ac_ActivationPin_s* x);
void zx_ac_ActivationPin_REV_Generation(struct zx_ac_ActivationPin_s* x);
void zx_ac_ActivationPin_REV_ActivationLimit(struct zx_ac_ActivationPin_s* x);
void zx_ac_ActivationPin_REV_Extension(struct zx_ac_ActivationPin_s* x);

#endif
/* -------------------------- ac_Alphabet -------------------------- */
/* refby( zx_ac_ActivationPin_s zx_ac_Password_s ) */
#ifndef zx_ac_Alphabet_EXT
#define zx_ac_Alphabet_EXT
#endif

struct zx_ac_Alphabet_s* zx_DEC_ac_Alphabet(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_Alphabet_s* zx_NEW_ac_Alphabet(struct zx_ctx* c);
void zx_FREE_ac_Alphabet(struct zx_ctx* c, struct zx_ac_Alphabet_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_Alphabet_s* zx_DEEP_CLONE_ac_Alphabet(struct zx_ctx* c, struct zx_ac_Alphabet_s* x, int dup_strs);
void zx_DUP_STRS_ac_Alphabet(struct zx_ctx* c, struct zx_ac_Alphabet_s* x);
int zx_WALK_SO_ac_Alphabet(struct zx_ctx* c, struct zx_ac_Alphabet_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_Alphabet(struct zx_ctx* c, struct zx_ac_Alphabet_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_Alphabet(struct zx_ctx* c, struct zx_ac_Alphabet_s* x);
int zx_LEN_WO_ac_Alphabet(struct zx_ctx* c, struct zx_ac_Alphabet_s* x);
char* zx_ENC_SO_ac_Alphabet(struct zx_ctx* c, struct zx_ac_Alphabet_s* x, char* p);
char* zx_ENC_WO_ac_Alphabet(struct zx_ctx* c, struct zx_ac_Alphabet_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_Alphabet(struct zx_ctx* c, struct zx_ac_Alphabet_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_Alphabet(struct zx_ctx* c, struct zx_ac_Alphabet_s* x);

struct zx_ac_Alphabet_s {
  ZX_ELEM_EXT
  zx_ac_Alphabet_EXT
  struct zx_str* requiredChars;	/* {1,1} attribute xs:string */
  struct zx_str* excludedChars;	/* {0,1} attribute xs:string */
  struct zx_str* case_is_c_keyword;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ac_Alphabet_GET_requiredChars(struct zx_ac_Alphabet_s* x);
struct zx_str* zx_ac_Alphabet_GET_excludedChars(struct zx_ac_Alphabet_s* x);
struct zx_str* zx_ac_Alphabet_GET_case_is_c_keyword(struct zx_ac_Alphabet_s* x);





void zx_ac_Alphabet_PUT_requiredChars(struct zx_ac_Alphabet_s* x, struct zx_str* y);
void zx_ac_Alphabet_PUT_excludedChars(struct zx_ac_Alphabet_s* x, struct zx_str* y);
void zx_ac_Alphabet_PUT_case_is_c_keyword(struct zx_ac_Alphabet_s* x, struct zx_str* y);





#endif
/* -------------------------- ac_AsymmetricDecryption -------------------------- */
/* refby( zx_ac_Authenticator_s ) */
#ifndef zx_ac_AsymmetricDecryption_EXT
#define zx_ac_AsymmetricDecryption_EXT
#endif

struct zx_ac_AsymmetricDecryption_s* zx_DEC_ac_AsymmetricDecryption(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_AsymmetricDecryption_s* zx_NEW_ac_AsymmetricDecryption(struct zx_ctx* c);
void zx_FREE_ac_AsymmetricDecryption(struct zx_ctx* c, struct zx_ac_AsymmetricDecryption_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_AsymmetricDecryption_s* zx_DEEP_CLONE_ac_AsymmetricDecryption(struct zx_ctx* c, struct zx_ac_AsymmetricDecryption_s* x, int dup_strs);
void zx_DUP_STRS_ac_AsymmetricDecryption(struct zx_ctx* c, struct zx_ac_AsymmetricDecryption_s* x);
int zx_WALK_SO_ac_AsymmetricDecryption(struct zx_ctx* c, struct zx_ac_AsymmetricDecryption_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_AsymmetricDecryption(struct zx_ctx* c, struct zx_ac_AsymmetricDecryption_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_AsymmetricDecryption(struct zx_ctx* c, struct zx_ac_AsymmetricDecryption_s* x);
int zx_LEN_WO_ac_AsymmetricDecryption(struct zx_ctx* c, struct zx_ac_AsymmetricDecryption_s* x);
char* zx_ENC_SO_ac_AsymmetricDecryption(struct zx_ctx* c, struct zx_ac_AsymmetricDecryption_s* x, char* p);
char* zx_ENC_WO_ac_AsymmetricDecryption(struct zx_ctx* c, struct zx_ac_AsymmetricDecryption_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_AsymmetricDecryption(struct zx_ctx* c, struct zx_ac_AsymmetricDecryption_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_AsymmetricDecryption(struct zx_ctx* c, struct zx_ac_AsymmetricDecryption_s* x);

struct zx_ac_AsymmetricDecryption_s {
  ZX_ELEM_EXT
  zx_ac_AsymmetricDecryption_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_Extension_s* zx_ac_AsymmetricDecryption_GET_Extension(struct zx_ac_AsymmetricDecryption_s* x, int n);

int zx_ac_AsymmetricDecryption_NUM_Extension(struct zx_ac_AsymmetricDecryption_s* x);

struct zx_ac_Extension_s* zx_ac_AsymmetricDecryption_POP_Extension(struct zx_ac_AsymmetricDecryption_s* x);

void zx_ac_AsymmetricDecryption_PUSH_Extension(struct zx_ac_AsymmetricDecryption_s* x, struct zx_ac_Extension_s* y);


void zx_ac_AsymmetricDecryption_PUT_Extension(struct zx_ac_AsymmetricDecryption_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_AsymmetricDecryption_ADD_Extension(struct zx_ac_AsymmetricDecryption_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_AsymmetricDecryption_DEL_Extension(struct zx_ac_AsymmetricDecryption_s* x, int n);

void zx_ac_AsymmetricDecryption_REV_Extension(struct zx_ac_AsymmetricDecryption_s* x);

#endif
/* -------------------------- ac_AsymmetricKeyAgreement -------------------------- */
/* refby( zx_ac_Authenticator_s ) */
#ifndef zx_ac_AsymmetricKeyAgreement_EXT
#define zx_ac_AsymmetricKeyAgreement_EXT
#endif

struct zx_ac_AsymmetricKeyAgreement_s* zx_DEC_ac_AsymmetricKeyAgreement(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_AsymmetricKeyAgreement_s* zx_NEW_ac_AsymmetricKeyAgreement(struct zx_ctx* c);
void zx_FREE_ac_AsymmetricKeyAgreement(struct zx_ctx* c, struct zx_ac_AsymmetricKeyAgreement_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_AsymmetricKeyAgreement_s* zx_DEEP_CLONE_ac_AsymmetricKeyAgreement(struct zx_ctx* c, struct zx_ac_AsymmetricKeyAgreement_s* x, int dup_strs);
void zx_DUP_STRS_ac_AsymmetricKeyAgreement(struct zx_ctx* c, struct zx_ac_AsymmetricKeyAgreement_s* x);
int zx_WALK_SO_ac_AsymmetricKeyAgreement(struct zx_ctx* c, struct zx_ac_AsymmetricKeyAgreement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_AsymmetricKeyAgreement(struct zx_ctx* c, struct zx_ac_AsymmetricKeyAgreement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_AsymmetricKeyAgreement(struct zx_ctx* c, struct zx_ac_AsymmetricKeyAgreement_s* x);
int zx_LEN_WO_ac_AsymmetricKeyAgreement(struct zx_ctx* c, struct zx_ac_AsymmetricKeyAgreement_s* x);
char* zx_ENC_SO_ac_AsymmetricKeyAgreement(struct zx_ctx* c, struct zx_ac_AsymmetricKeyAgreement_s* x, char* p);
char* zx_ENC_WO_ac_AsymmetricKeyAgreement(struct zx_ctx* c, struct zx_ac_AsymmetricKeyAgreement_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_AsymmetricKeyAgreement(struct zx_ctx* c, struct zx_ac_AsymmetricKeyAgreement_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_AsymmetricKeyAgreement(struct zx_ctx* c, struct zx_ac_AsymmetricKeyAgreement_s* x);

struct zx_ac_AsymmetricKeyAgreement_s {
  ZX_ELEM_EXT
  zx_ac_AsymmetricKeyAgreement_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_Extension_s* zx_ac_AsymmetricKeyAgreement_GET_Extension(struct zx_ac_AsymmetricKeyAgreement_s* x, int n);

int zx_ac_AsymmetricKeyAgreement_NUM_Extension(struct zx_ac_AsymmetricKeyAgreement_s* x);

struct zx_ac_Extension_s* zx_ac_AsymmetricKeyAgreement_POP_Extension(struct zx_ac_AsymmetricKeyAgreement_s* x);

void zx_ac_AsymmetricKeyAgreement_PUSH_Extension(struct zx_ac_AsymmetricKeyAgreement_s* x, struct zx_ac_Extension_s* y);


void zx_ac_AsymmetricKeyAgreement_PUT_Extension(struct zx_ac_AsymmetricKeyAgreement_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_AsymmetricKeyAgreement_ADD_Extension(struct zx_ac_AsymmetricKeyAgreement_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_AsymmetricKeyAgreement_DEL_Extension(struct zx_ac_AsymmetricKeyAgreement_s* x, int n);

void zx_ac_AsymmetricKeyAgreement_REV_Extension(struct zx_ac_AsymmetricKeyAgreement_s* x);

#endif
/* -------------------------- ac_AuthenticatingAuthority -------------------------- */
/* refby( zx_ac_AuthenticationContextStatement_s ) */
#ifndef zx_ac_AuthenticatingAuthority_EXT
#define zx_ac_AuthenticatingAuthority_EXT
#endif

struct zx_ac_AuthenticatingAuthority_s* zx_DEC_ac_AuthenticatingAuthority(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_AuthenticatingAuthority_s* zx_NEW_ac_AuthenticatingAuthority(struct zx_ctx* c);
void zx_FREE_ac_AuthenticatingAuthority(struct zx_ctx* c, struct zx_ac_AuthenticatingAuthority_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_AuthenticatingAuthority_s* zx_DEEP_CLONE_ac_AuthenticatingAuthority(struct zx_ctx* c, struct zx_ac_AuthenticatingAuthority_s* x, int dup_strs);
void zx_DUP_STRS_ac_AuthenticatingAuthority(struct zx_ctx* c, struct zx_ac_AuthenticatingAuthority_s* x);
int zx_WALK_SO_ac_AuthenticatingAuthority(struct zx_ctx* c, struct zx_ac_AuthenticatingAuthority_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_AuthenticatingAuthority(struct zx_ctx* c, struct zx_ac_AuthenticatingAuthority_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_AuthenticatingAuthority(struct zx_ctx* c, struct zx_ac_AuthenticatingAuthority_s* x);
int zx_LEN_WO_ac_AuthenticatingAuthority(struct zx_ctx* c, struct zx_ac_AuthenticatingAuthority_s* x);
char* zx_ENC_SO_ac_AuthenticatingAuthority(struct zx_ctx* c, struct zx_ac_AuthenticatingAuthority_s* x, char* p);
char* zx_ENC_WO_ac_AuthenticatingAuthority(struct zx_ctx* c, struct zx_ac_AuthenticatingAuthority_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_AuthenticatingAuthority(struct zx_ctx* c, struct zx_ac_AuthenticatingAuthority_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_AuthenticatingAuthority(struct zx_ctx* c, struct zx_ac_AuthenticatingAuthority_s* x);

struct zx_ac_AuthenticatingAuthority_s {
  ZX_ELEM_EXT
  zx_ac_AuthenticatingAuthority_EXT
  struct zx_ac_GoverningAgreements_s* GoverningAgreements;	/* {1,1}  */
  struct zx_str* ID;	/* {1,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ac_AuthenticatingAuthority_GET_ID(struct zx_ac_AuthenticatingAuthority_s* x);

struct zx_ac_GoverningAgreements_s* zx_ac_AuthenticatingAuthority_GET_GoverningAgreements(struct zx_ac_AuthenticatingAuthority_s* x, int n);

int zx_ac_AuthenticatingAuthority_NUM_GoverningAgreements(struct zx_ac_AuthenticatingAuthority_s* x);

struct zx_ac_GoverningAgreements_s* zx_ac_AuthenticatingAuthority_POP_GoverningAgreements(struct zx_ac_AuthenticatingAuthority_s* x);

void zx_ac_AuthenticatingAuthority_PUSH_GoverningAgreements(struct zx_ac_AuthenticatingAuthority_s* x, struct zx_ac_GoverningAgreements_s* y);

void zx_ac_AuthenticatingAuthority_PUT_ID(struct zx_ac_AuthenticatingAuthority_s* x, struct zx_str* y);

void zx_ac_AuthenticatingAuthority_PUT_GoverningAgreements(struct zx_ac_AuthenticatingAuthority_s* x, int n, struct zx_ac_GoverningAgreements_s* y);

void zx_ac_AuthenticatingAuthority_ADD_GoverningAgreements(struct zx_ac_AuthenticatingAuthority_s* x, int n, struct zx_ac_GoverningAgreements_s* z);

void zx_ac_AuthenticatingAuthority_DEL_GoverningAgreements(struct zx_ac_AuthenticatingAuthority_s* x, int n);

void zx_ac_AuthenticatingAuthority_REV_GoverningAgreements(struct zx_ac_AuthenticatingAuthority_s* x);

#endif
/* -------------------------- ac_AuthenticationContextStatement -------------------------- */
/* refby( zx_ff12_AuthnContext_s ) */
#ifndef zx_ac_AuthenticationContextStatement_EXT
#define zx_ac_AuthenticationContextStatement_EXT
#endif

struct zx_ac_AuthenticationContextStatement_s* zx_DEC_ac_AuthenticationContextStatement(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_AuthenticationContextStatement_s* zx_NEW_ac_AuthenticationContextStatement(struct zx_ctx* c);
void zx_FREE_ac_AuthenticationContextStatement(struct zx_ctx* c, struct zx_ac_AuthenticationContextStatement_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_AuthenticationContextStatement_s* zx_DEEP_CLONE_ac_AuthenticationContextStatement(struct zx_ctx* c, struct zx_ac_AuthenticationContextStatement_s* x, int dup_strs);
void zx_DUP_STRS_ac_AuthenticationContextStatement(struct zx_ctx* c, struct zx_ac_AuthenticationContextStatement_s* x);
int zx_WALK_SO_ac_AuthenticationContextStatement(struct zx_ctx* c, struct zx_ac_AuthenticationContextStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_AuthenticationContextStatement(struct zx_ctx* c, struct zx_ac_AuthenticationContextStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_AuthenticationContextStatement(struct zx_ctx* c, struct zx_ac_AuthenticationContextStatement_s* x);
int zx_LEN_WO_ac_AuthenticationContextStatement(struct zx_ctx* c, struct zx_ac_AuthenticationContextStatement_s* x);
char* zx_ENC_SO_ac_AuthenticationContextStatement(struct zx_ctx* c, struct zx_ac_AuthenticationContextStatement_s* x, char* p);
char* zx_ENC_WO_ac_AuthenticationContextStatement(struct zx_ctx* c, struct zx_ac_AuthenticationContextStatement_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_AuthenticationContextStatement(struct zx_ctx* c, struct zx_ac_AuthenticationContextStatement_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_AuthenticationContextStatement(struct zx_ctx* c, struct zx_ac_AuthenticationContextStatement_s* x);

struct zx_ac_AuthenticationContextStatement_s {
  ZX_ELEM_EXT
  zx_ac_AuthenticationContextStatement_EXT
  struct zx_ac_Identification_s* Identification;	/* {0,1} nada */
  struct zx_ac_TechnicalProtection_s* TechnicalProtection;	/* {0,1} nada */
  struct zx_ac_OperationalProtection_s* OperationalProtection;	/* {0,1} nada */
  struct zx_ac_AuthenticationMethod_s* AuthenticationMethod;	/* {0,1} nada */
  struct zx_ac_GoverningAgreements_s* GoverningAgreements;	/* {0,1}  */
  struct zx_ac_AuthenticatingAuthority_s* AuthenticatingAuthority;	/* {0,-1} nada */
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
  struct zx_str* ID;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ac_AuthenticationContextStatement_GET_ID(struct zx_ac_AuthenticationContextStatement_s* x);

struct zx_ac_Identification_s* zx_ac_AuthenticationContextStatement_GET_Identification(struct zx_ac_AuthenticationContextStatement_s* x, int n);
struct zx_ac_TechnicalProtection_s* zx_ac_AuthenticationContextStatement_GET_TechnicalProtection(struct zx_ac_AuthenticationContextStatement_s* x, int n);
struct zx_ac_OperationalProtection_s* zx_ac_AuthenticationContextStatement_GET_OperationalProtection(struct zx_ac_AuthenticationContextStatement_s* x, int n);
struct zx_ac_AuthenticationMethod_s* zx_ac_AuthenticationContextStatement_GET_AuthenticationMethod(struct zx_ac_AuthenticationContextStatement_s* x, int n);
struct zx_ac_GoverningAgreements_s* zx_ac_AuthenticationContextStatement_GET_GoverningAgreements(struct zx_ac_AuthenticationContextStatement_s* x, int n);
struct zx_ac_AuthenticatingAuthority_s* zx_ac_AuthenticationContextStatement_GET_AuthenticatingAuthority(struct zx_ac_AuthenticationContextStatement_s* x, int n);
struct zx_ac_Extension_s* zx_ac_AuthenticationContextStatement_GET_Extension(struct zx_ac_AuthenticationContextStatement_s* x, int n);

int zx_ac_AuthenticationContextStatement_NUM_Identification(struct zx_ac_AuthenticationContextStatement_s* x);
int zx_ac_AuthenticationContextStatement_NUM_TechnicalProtection(struct zx_ac_AuthenticationContextStatement_s* x);
int zx_ac_AuthenticationContextStatement_NUM_OperationalProtection(struct zx_ac_AuthenticationContextStatement_s* x);
int zx_ac_AuthenticationContextStatement_NUM_AuthenticationMethod(struct zx_ac_AuthenticationContextStatement_s* x);
int zx_ac_AuthenticationContextStatement_NUM_GoverningAgreements(struct zx_ac_AuthenticationContextStatement_s* x);
int zx_ac_AuthenticationContextStatement_NUM_AuthenticatingAuthority(struct zx_ac_AuthenticationContextStatement_s* x);
int zx_ac_AuthenticationContextStatement_NUM_Extension(struct zx_ac_AuthenticationContextStatement_s* x);

struct zx_ac_Identification_s* zx_ac_AuthenticationContextStatement_POP_Identification(struct zx_ac_AuthenticationContextStatement_s* x);
struct zx_ac_TechnicalProtection_s* zx_ac_AuthenticationContextStatement_POP_TechnicalProtection(struct zx_ac_AuthenticationContextStatement_s* x);
struct zx_ac_OperationalProtection_s* zx_ac_AuthenticationContextStatement_POP_OperationalProtection(struct zx_ac_AuthenticationContextStatement_s* x);
struct zx_ac_AuthenticationMethod_s* zx_ac_AuthenticationContextStatement_POP_AuthenticationMethod(struct zx_ac_AuthenticationContextStatement_s* x);
struct zx_ac_GoverningAgreements_s* zx_ac_AuthenticationContextStatement_POP_GoverningAgreements(struct zx_ac_AuthenticationContextStatement_s* x);
struct zx_ac_AuthenticatingAuthority_s* zx_ac_AuthenticationContextStatement_POP_AuthenticatingAuthority(struct zx_ac_AuthenticationContextStatement_s* x);
struct zx_ac_Extension_s* zx_ac_AuthenticationContextStatement_POP_Extension(struct zx_ac_AuthenticationContextStatement_s* x);

void zx_ac_AuthenticationContextStatement_PUSH_Identification(struct zx_ac_AuthenticationContextStatement_s* x, struct zx_ac_Identification_s* y);
void zx_ac_AuthenticationContextStatement_PUSH_TechnicalProtection(struct zx_ac_AuthenticationContextStatement_s* x, struct zx_ac_TechnicalProtection_s* y);
void zx_ac_AuthenticationContextStatement_PUSH_OperationalProtection(struct zx_ac_AuthenticationContextStatement_s* x, struct zx_ac_OperationalProtection_s* y);
void zx_ac_AuthenticationContextStatement_PUSH_AuthenticationMethod(struct zx_ac_AuthenticationContextStatement_s* x, struct zx_ac_AuthenticationMethod_s* y);
void zx_ac_AuthenticationContextStatement_PUSH_GoverningAgreements(struct zx_ac_AuthenticationContextStatement_s* x, struct zx_ac_GoverningAgreements_s* y);
void zx_ac_AuthenticationContextStatement_PUSH_AuthenticatingAuthority(struct zx_ac_AuthenticationContextStatement_s* x, struct zx_ac_AuthenticatingAuthority_s* y);
void zx_ac_AuthenticationContextStatement_PUSH_Extension(struct zx_ac_AuthenticationContextStatement_s* x, struct zx_ac_Extension_s* y);

void zx_ac_AuthenticationContextStatement_PUT_ID(struct zx_ac_AuthenticationContextStatement_s* x, struct zx_str* y);

void zx_ac_AuthenticationContextStatement_PUT_Identification(struct zx_ac_AuthenticationContextStatement_s* x, int n, struct zx_ac_Identification_s* y);
void zx_ac_AuthenticationContextStatement_PUT_TechnicalProtection(struct zx_ac_AuthenticationContextStatement_s* x, int n, struct zx_ac_TechnicalProtection_s* y);
void zx_ac_AuthenticationContextStatement_PUT_OperationalProtection(struct zx_ac_AuthenticationContextStatement_s* x, int n, struct zx_ac_OperationalProtection_s* y);
void zx_ac_AuthenticationContextStatement_PUT_AuthenticationMethod(struct zx_ac_AuthenticationContextStatement_s* x, int n, struct zx_ac_AuthenticationMethod_s* y);
void zx_ac_AuthenticationContextStatement_PUT_GoverningAgreements(struct zx_ac_AuthenticationContextStatement_s* x, int n, struct zx_ac_GoverningAgreements_s* y);
void zx_ac_AuthenticationContextStatement_PUT_AuthenticatingAuthority(struct zx_ac_AuthenticationContextStatement_s* x, int n, struct zx_ac_AuthenticatingAuthority_s* y);
void zx_ac_AuthenticationContextStatement_PUT_Extension(struct zx_ac_AuthenticationContextStatement_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_AuthenticationContextStatement_ADD_Identification(struct zx_ac_AuthenticationContextStatement_s* x, int n, struct zx_ac_Identification_s* z);
void zx_ac_AuthenticationContextStatement_ADD_TechnicalProtection(struct zx_ac_AuthenticationContextStatement_s* x, int n, struct zx_ac_TechnicalProtection_s* z);
void zx_ac_AuthenticationContextStatement_ADD_OperationalProtection(struct zx_ac_AuthenticationContextStatement_s* x, int n, struct zx_ac_OperationalProtection_s* z);
void zx_ac_AuthenticationContextStatement_ADD_AuthenticationMethod(struct zx_ac_AuthenticationContextStatement_s* x, int n, struct zx_ac_AuthenticationMethod_s* z);
void zx_ac_AuthenticationContextStatement_ADD_GoverningAgreements(struct zx_ac_AuthenticationContextStatement_s* x, int n, struct zx_ac_GoverningAgreements_s* z);
void zx_ac_AuthenticationContextStatement_ADD_AuthenticatingAuthority(struct zx_ac_AuthenticationContextStatement_s* x, int n, struct zx_ac_AuthenticatingAuthority_s* z);
void zx_ac_AuthenticationContextStatement_ADD_Extension(struct zx_ac_AuthenticationContextStatement_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_AuthenticationContextStatement_DEL_Identification(struct zx_ac_AuthenticationContextStatement_s* x, int n);
void zx_ac_AuthenticationContextStatement_DEL_TechnicalProtection(struct zx_ac_AuthenticationContextStatement_s* x, int n);
void zx_ac_AuthenticationContextStatement_DEL_OperationalProtection(struct zx_ac_AuthenticationContextStatement_s* x, int n);
void zx_ac_AuthenticationContextStatement_DEL_AuthenticationMethod(struct zx_ac_AuthenticationContextStatement_s* x, int n);
void zx_ac_AuthenticationContextStatement_DEL_GoverningAgreements(struct zx_ac_AuthenticationContextStatement_s* x, int n);
void zx_ac_AuthenticationContextStatement_DEL_AuthenticatingAuthority(struct zx_ac_AuthenticationContextStatement_s* x, int n);
void zx_ac_AuthenticationContextStatement_DEL_Extension(struct zx_ac_AuthenticationContextStatement_s* x, int n);

void zx_ac_AuthenticationContextStatement_REV_Identification(struct zx_ac_AuthenticationContextStatement_s* x);
void zx_ac_AuthenticationContextStatement_REV_TechnicalProtection(struct zx_ac_AuthenticationContextStatement_s* x);
void zx_ac_AuthenticationContextStatement_REV_OperationalProtection(struct zx_ac_AuthenticationContextStatement_s* x);
void zx_ac_AuthenticationContextStatement_REV_AuthenticationMethod(struct zx_ac_AuthenticationContextStatement_s* x);
void zx_ac_AuthenticationContextStatement_REV_GoverningAgreements(struct zx_ac_AuthenticationContextStatement_s* x);
void zx_ac_AuthenticationContextStatement_REV_AuthenticatingAuthority(struct zx_ac_AuthenticationContextStatement_s* x);
void zx_ac_AuthenticationContextStatement_REV_Extension(struct zx_ac_AuthenticationContextStatement_s* x);

#endif
/* -------------------------- ac_AuthenticationMethod -------------------------- */
/* refby( zx_ac_AuthenticationContextStatement_s ) */
#ifndef zx_ac_AuthenticationMethod_EXT
#define zx_ac_AuthenticationMethod_EXT
#endif

struct zx_ac_AuthenticationMethod_s* zx_DEC_ac_AuthenticationMethod(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_AuthenticationMethod_s* zx_NEW_ac_AuthenticationMethod(struct zx_ctx* c);
void zx_FREE_ac_AuthenticationMethod(struct zx_ctx* c, struct zx_ac_AuthenticationMethod_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_AuthenticationMethod_s* zx_DEEP_CLONE_ac_AuthenticationMethod(struct zx_ctx* c, struct zx_ac_AuthenticationMethod_s* x, int dup_strs);
void zx_DUP_STRS_ac_AuthenticationMethod(struct zx_ctx* c, struct zx_ac_AuthenticationMethod_s* x);
int zx_WALK_SO_ac_AuthenticationMethod(struct zx_ctx* c, struct zx_ac_AuthenticationMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_AuthenticationMethod(struct zx_ctx* c, struct zx_ac_AuthenticationMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_AuthenticationMethod(struct zx_ctx* c, struct zx_ac_AuthenticationMethod_s* x);
int zx_LEN_WO_ac_AuthenticationMethod(struct zx_ctx* c, struct zx_ac_AuthenticationMethod_s* x);
char* zx_ENC_SO_ac_AuthenticationMethod(struct zx_ctx* c, struct zx_ac_AuthenticationMethod_s* x, char* p);
char* zx_ENC_WO_ac_AuthenticationMethod(struct zx_ctx* c, struct zx_ac_AuthenticationMethod_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_AuthenticationMethod(struct zx_ctx* c, struct zx_ac_AuthenticationMethod_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_AuthenticationMethod(struct zx_ctx* c, struct zx_ac_AuthenticationMethod_s* x);

struct zx_ac_AuthenticationMethod_s {
  ZX_ELEM_EXT
  zx_ac_AuthenticationMethod_EXT
  struct zx_ac_PrincipalAuthenticationMechanism_s* PrincipalAuthenticationMechanism;	/* {0,1} nada */
  struct zx_ac_Authenticator_s* Authenticator;	/* {0,1} nada */
  struct zx_ac_AuthenticatorTransportProtocol_s* AuthenticatorTransportProtocol;	/* {0,1} nada */
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_PrincipalAuthenticationMechanism_s* zx_ac_AuthenticationMethod_GET_PrincipalAuthenticationMechanism(struct zx_ac_AuthenticationMethod_s* x, int n);
struct zx_ac_Authenticator_s* zx_ac_AuthenticationMethod_GET_Authenticator(struct zx_ac_AuthenticationMethod_s* x, int n);
struct zx_ac_AuthenticatorTransportProtocol_s* zx_ac_AuthenticationMethod_GET_AuthenticatorTransportProtocol(struct zx_ac_AuthenticationMethod_s* x, int n);
struct zx_ac_Extension_s* zx_ac_AuthenticationMethod_GET_Extension(struct zx_ac_AuthenticationMethod_s* x, int n);

int zx_ac_AuthenticationMethod_NUM_PrincipalAuthenticationMechanism(struct zx_ac_AuthenticationMethod_s* x);
int zx_ac_AuthenticationMethod_NUM_Authenticator(struct zx_ac_AuthenticationMethod_s* x);
int zx_ac_AuthenticationMethod_NUM_AuthenticatorTransportProtocol(struct zx_ac_AuthenticationMethod_s* x);
int zx_ac_AuthenticationMethod_NUM_Extension(struct zx_ac_AuthenticationMethod_s* x);

struct zx_ac_PrincipalAuthenticationMechanism_s* zx_ac_AuthenticationMethod_POP_PrincipalAuthenticationMechanism(struct zx_ac_AuthenticationMethod_s* x);
struct zx_ac_Authenticator_s* zx_ac_AuthenticationMethod_POP_Authenticator(struct zx_ac_AuthenticationMethod_s* x);
struct zx_ac_AuthenticatorTransportProtocol_s* zx_ac_AuthenticationMethod_POP_AuthenticatorTransportProtocol(struct zx_ac_AuthenticationMethod_s* x);
struct zx_ac_Extension_s* zx_ac_AuthenticationMethod_POP_Extension(struct zx_ac_AuthenticationMethod_s* x);

void zx_ac_AuthenticationMethod_PUSH_PrincipalAuthenticationMechanism(struct zx_ac_AuthenticationMethod_s* x, struct zx_ac_PrincipalAuthenticationMechanism_s* y);
void zx_ac_AuthenticationMethod_PUSH_Authenticator(struct zx_ac_AuthenticationMethod_s* x, struct zx_ac_Authenticator_s* y);
void zx_ac_AuthenticationMethod_PUSH_AuthenticatorTransportProtocol(struct zx_ac_AuthenticationMethod_s* x, struct zx_ac_AuthenticatorTransportProtocol_s* y);
void zx_ac_AuthenticationMethod_PUSH_Extension(struct zx_ac_AuthenticationMethod_s* x, struct zx_ac_Extension_s* y);


void zx_ac_AuthenticationMethod_PUT_PrincipalAuthenticationMechanism(struct zx_ac_AuthenticationMethod_s* x, int n, struct zx_ac_PrincipalAuthenticationMechanism_s* y);
void zx_ac_AuthenticationMethod_PUT_Authenticator(struct zx_ac_AuthenticationMethod_s* x, int n, struct zx_ac_Authenticator_s* y);
void zx_ac_AuthenticationMethod_PUT_AuthenticatorTransportProtocol(struct zx_ac_AuthenticationMethod_s* x, int n, struct zx_ac_AuthenticatorTransportProtocol_s* y);
void zx_ac_AuthenticationMethod_PUT_Extension(struct zx_ac_AuthenticationMethod_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_AuthenticationMethod_ADD_PrincipalAuthenticationMechanism(struct zx_ac_AuthenticationMethod_s* x, int n, struct zx_ac_PrincipalAuthenticationMechanism_s* z);
void zx_ac_AuthenticationMethod_ADD_Authenticator(struct zx_ac_AuthenticationMethod_s* x, int n, struct zx_ac_Authenticator_s* z);
void zx_ac_AuthenticationMethod_ADD_AuthenticatorTransportProtocol(struct zx_ac_AuthenticationMethod_s* x, int n, struct zx_ac_AuthenticatorTransportProtocol_s* z);
void zx_ac_AuthenticationMethod_ADD_Extension(struct zx_ac_AuthenticationMethod_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_AuthenticationMethod_DEL_PrincipalAuthenticationMechanism(struct zx_ac_AuthenticationMethod_s* x, int n);
void zx_ac_AuthenticationMethod_DEL_Authenticator(struct zx_ac_AuthenticationMethod_s* x, int n);
void zx_ac_AuthenticationMethod_DEL_AuthenticatorTransportProtocol(struct zx_ac_AuthenticationMethod_s* x, int n);
void zx_ac_AuthenticationMethod_DEL_Extension(struct zx_ac_AuthenticationMethod_s* x, int n);

void zx_ac_AuthenticationMethod_REV_PrincipalAuthenticationMechanism(struct zx_ac_AuthenticationMethod_s* x);
void zx_ac_AuthenticationMethod_REV_Authenticator(struct zx_ac_AuthenticationMethod_s* x);
void zx_ac_AuthenticationMethod_REV_AuthenticatorTransportProtocol(struct zx_ac_AuthenticationMethod_s* x);
void zx_ac_AuthenticationMethod_REV_Extension(struct zx_ac_AuthenticationMethod_s* x);

#endif
/* -------------------------- ac_Authenticator -------------------------- */
/* refby( zx_ac_AuthenticationMethod_s ) */
#ifndef zx_ac_Authenticator_EXT
#define zx_ac_Authenticator_EXT
#endif

struct zx_ac_Authenticator_s* zx_DEC_ac_Authenticator(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_Authenticator_s* zx_NEW_ac_Authenticator(struct zx_ctx* c);
void zx_FREE_ac_Authenticator(struct zx_ctx* c, struct zx_ac_Authenticator_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_Authenticator_s* zx_DEEP_CLONE_ac_Authenticator(struct zx_ctx* c, struct zx_ac_Authenticator_s* x, int dup_strs);
void zx_DUP_STRS_ac_Authenticator(struct zx_ctx* c, struct zx_ac_Authenticator_s* x);
int zx_WALK_SO_ac_Authenticator(struct zx_ctx* c, struct zx_ac_Authenticator_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_Authenticator(struct zx_ctx* c, struct zx_ac_Authenticator_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_Authenticator(struct zx_ctx* c, struct zx_ac_Authenticator_s* x);
int zx_LEN_WO_ac_Authenticator(struct zx_ctx* c, struct zx_ac_Authenticator_s* x);
char* zx_ENC_SO_ac_Authenticator(struct zx_ctx* c, struct zx_ac_Authenticator_s* x, char* p);
char* zx_ENC_WO_ac_Authenticator(struct zx_ctx* c, struct zx_ac_Authenticator_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_Authenticator(struct zx_ctx* c, struct zx_ac_Authenticator_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_Authenticator(struct zx_ctx* c, struct zx_ac_Authenticator_s* x);

struct zx_ac_Authenticator_s {
  ZX_ELEM_EXT
  zx_ac_Authenticator_EXT
  struct zx_ac_PreviousSession_s* PreviousSession;	/* {0,1}  */
  struct zx_ac_ResumeSession_s* ResumeSession;	/* {0,1}  */
  struct zx_ac_DigSig_s* DigSig;	/* {0,1}  */
  struct zx_ac_Password_s* Password;	/* {0,1} nada */
  struct zx_ac_ZeroKnowledge_s* ZeroKnowledge;	/* {0,1}  */
  struct zx_ac_SharedSecretChallengeResponse_s* SharedSecretChallengeResponse;	/* {0,1}  */
  struct zx_ac_SharedSecretDynamicPlaintext_s* SharedSecretDynamicPlaintext;	/* {0,1}  */
  struct zx_ac_IPAddress_s* IPAddress;	/* {0,1}  */
  struct zx_ac_AsymmetricDecryption_s* AsymmetricDecryption;	/* {0,1}  */
  struct zx_ac_AsymmetricKeyAgreement_s* AsymmetricKeyAgreement;	/* {0,1}  */
  struct zx_ac_Extension_s* Extension;	/* {1,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_PreviousSession_s* zx_ac_Authenticator_GET_PreviousSession(struct zx_ac_Authenticator_s* x, int n);
struct zx_ac_ResumeSession_s* zx_ac_Authenticator_GET_ResumeSession(struct zx_ac_Authenticator_s* x, int n);
struct zx_ac_DigSig_s* zx_ac_Authenticator_GET_DigSig(struct zx_ac_Authenticator_s* x, int n);
struct zx_ac_Password_s* zx_ac_Authenticator_GET_Password(struct zx_ac_Authenticator_s* x, int n);
struct zx_ac_ZeroKnowledge_s* zx_ac_Authenticator_GET_ZeroKnowledge(struct zx_ac_Authenticator_s* x, int n);
struct zx_ac_SharedSecretChallengeResponse_s* zx_ac_Authenticator_GET_SharedSecretChallengeResponse(struct zx_ac_Authenticator_s* x, int n);
struct zx_ac_SharedSecretDynamicPlaintext_s* zx_ac_Authenticator_GET_SharedSecretDynamicPlaintext(struct zx_ac_Authenticator_s* x, int n);
struct zx_ac_IPAddress_s* zx_ac_Authenticator_GET_IPAddress(struct zx_ac_Authenticator_s* x, int n);
struct zx_ac_AsymmetricDecryption_s* zx_ac_Authenticator_GET_AsymmetricDecryption(struct zx_ac_Authenticator_s* x, int n);
struct zx_ac_AsymmetricKeyAgreement_s* zx_ac_Authenticator_GET_AsymmetricKeyAgreement(struct zx_ac_Authenticator_s* x, int n);
struct zx_ac_Extension_s* zx_ac_Authenticator_GET_Extension(struct zx_ac_Authenticator_s* x, int n);

int zx_ac_Authenticator_NUM_PreviousSession(struct zx_ac_Authenticator_s* x);
int zx_ac_Authenticator_NUM_ResumeSession(struct zx_ac_Authenticator_s* x);
int zx_ac_Authenticator_NUM_DigSig(struct zx_ac_Authenticator_s* x);
int zx_ac_Authenticator_NUM_Password(struct zx_ac_Authenticator_s* x);
int zx_ac_Authenticator_NUM_ZeroKnowledge(struct zx_ac_Authenticator_s* x);
int zx_ac_Authenticator_NUM_SharedSecretChallengeResponse(struct zx_ac_Authenticator_s* x);
int zx_ac_Authenticator_NUM_SharedSecretDynamicPlaintext(struct zx_ac_Authenticator_s* x);
int zx_ac_Authenticator_NUM_IPAddress(struct zx_ac_Authenticator_s* x);
int zx_ac_Authenticator_NUM_AsymmetricDecryption(struct zx_ac_Authenticator_s* x);
int zx_ac_Authenticator_NUM_AsymmetricKeyAgreement(struct zx_ac_Authenticator_s* x);
int zx_ac_Authenticator_NUM_Extension(struct zx_ac_Authenticator_s* x);

struct zx_ac_PreviousSession_s* zx_ac_Authenticator_POP_PreviousSession(struct zx_ac_Authenticator_s* x);
struct zx_ac_ResumeSession_s* zx_ac_Authenticator_POP_ResumeSession(struct zx_ac_Authenticator_s* x);
struct zx_ac_DigSig_s* zx_ac_Authenticator_POP_DigSig(struct zx_ac_Authenticator_s* x);
struct zx_ac_Password_s* zx_ac_Authenticator_POP_Password(struct zx_ac_Authenticator_s* x);
struct zx_ac_ZeroKnowledge_s* zx_ac_Authenticator_POP_ZeroKnowledge(struct zx_ac_Authenticator_s* x);
struct zx_ac_SharedSecretChallengeResponse_s* zx_ac_Authenticator_POP_SharedSecretChallengeResponse(struct zx_ac_Authenticator_s* x);
struct zx_ac_SharedSecretDynamicPlaintext_s* zx_ac_Authenticator_POP_SharedSecretDynamicPlaintext(struct zx_ac_Authenticator_s* x);
struct zx_ac_IPAddress_s* zx_ac_Authenticator_POP_IPAddress(struct zx_ac_Authenticator_s* x);
struct zx_ac_AsymmetricDecryption_s* zx_ac_Authenticator_POP_AsymmetricDecryption(struct zx_ac_Authenticator_s* x);
struct zx_ac_AsymmetricKeyAgreement_s* zx_ac_Authenticator_POP_AsymmetricKeyAgreement(struct zx_ac_Authenticator_s* x);
struct zx_ac_Extension_s* zx_ac_Authenticator_POP_Extension(struct zx_ac_Authenticator_s* x);

void zx_ac_Authenticator_PUSH_PreviousSession(struct zx_ac_Authenticator_s* x, struct zx_ac_PreviousSession_s* y);
void zx_ac_Authenticator_PUSH_ResumeSession(struct zx_ac_Authenticator_s* x, struct zx_ac_ResumeSession_s* y);
void zx_ac_Authenticator_PUSH_DigSig(struct zx_ac_Authenticator_s* x, struct zx_ac_DigSig_s* y);
void zx_ac_Authenticator_PUSH_Password(struct zx_ac_Authenticator_s* x, struct zx_ac_Password_s* y);
void zx_ac_Authenticator_PUSH_ZeroKnowledge(struct zx_ac_Authenticator_s* x, struct zx_ac_ZeroKnowledge_s* y);
void zx_ac_Authenticator_PUSH_SharedSecretChallengeResponse(struct zx_ac_Authenticator_s* x, struct zx_ac_SharedSecretChallengeResponse_s* y);
void zx_ac_Authenticator_PUSH_SharedSecretDynamicPlaintext(struct zx_ac_Authenticator_s* x, struct zx_ac_SharedSecretDynamicPlaintext_s* y);
void zx_ac_Authenticator_PUSH_IPAddress(struct zx_ac_Authenticator_s* x, struct zx_ac_IPAddress_s* y);
void zx_ac_Authenticator_PUSH_AsymmetricDecryption(struct zx_ac_Authenticator_s* x, struct zx_ac_AsymmetricDecryption_s* y);
void zx_ac_Authenticator_PUSH_AsymmetricKeyAgreement(struct zx_ac_Authenticator_s* x, struct zx_ac_AsymmetricKeyAgreement_s* y);
void zx_ac_Authenticator_PUSH_Extension(struct zx_ac_Authenticator_s* x, struct zx_ac_Extension_s* y);


void zx_ac_Authenticator_PUT_PreviousSession(struct zx_ac_Authenticator_s* x, int n, struct zx_ac_PreviousSession_s* y);
void zx_ac_Authenticator_PUT_ResumeSession(struct zx_ac_Authenticator_s* x, int n, struct zx_ac_ResumeSession_s* y);
void zx_ac_Authenticator_PUT_DigSig(struct zx_ac_Authenticator_s* x, int n, struct zx_ac_DigSig_s* y);
void zx_ac_Authenticator_PUT_Password(struct zx_ac_Authenticator_s* x, int n, struct zx_ac_Password_s* y);
void zx_ac_Authenticator_PUT_ZeroKnowledge(struct zx_ac_Authenticator_s* x, int n, struct zx_ac_ZeroKnowledge_s* y);
void zx_ac_Authenticator_PUT_SharedSecretChallengeResponse(struct zx_ac_Authenticator_s* x, int n, struct zx_ac_SharedSecretChallengeResponse_s* y);
void zx_ac_Authenticator_PUT_SharedSecretDynamicPlaintext(struct zx_ac_Authenticator_s* x, int n, struct zx_ac_SharedSecretDynamicPlaintext_s* y);
void zx_ac_Authenticator_PUT_IPAddress(struct zx_ac_Authenticator_s* x, int n, struct zx_ac_IPAddress_s* y);
void zx_ac_Authenticator_PUT_AsymmetricDecryption(struct zx_ac_Authenticator_s* x, int n, struct zx_ac_AsymmetricDecryption_s* y);
void zx_ac_Authenticator_PUT_AsymmetricKeyAgreement(struct zx_ac_Authenticator_s* x, int n, struct zx_ac_AsymmetricKeyAgreement_s* y);
void zx_ac_Authenticator_PUT_Extension(struct zx_ac_Authenticator_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_Authenticator_ADD_PreviousSession(struct zx_ac_Authenticator_s* x, int n, struct zx_ac_PreviousSession_s* z);
void zx_ac_Authenticator_ADD_ResumeSession(struct zx_ac_Authenticator_s* x, int n, struct zx_ac_ResumeSession_s* z);
void zx_ac_Authenticator_ADD_DigSig(struct zx_ac_Authenticator_s* x, int n, struct zx_ac_DigSig_s* z);
void zx_ac_Authenticator_ADD_Password(struct zx_ac_Authenticator_s* x, int n, struct zx_ac_Password_s* z);
void zx_ac_Authenticator_ADD_ZeroKnowledge(struct zx_ac_Authenticator_s* x, int n, struct zx_ac_ZeroKnowledge_s* z);
void zx_ac_Authenticator_ADD_SharedSecretChallengeResponse(struct zx_ac_Authenticator_s* x, int n, struct zx_ac_SharedSecretChallengeResponse_s* z);
void zx_ac_Authenticator_ADD_SharedSecretDynamicPlaintext(struct zx_ac_Authenticator_s* x, int n, struct zx_ac_SharedSecretDynamicPlaintext_s* z);
void zx_ac_Authenticator_ADD_IPAddress(struct zx_ac_Authenticator_s* x, int n, struct zx_ac_IPAddress_s* z);
void zx_ac_Authenticator_ADD_AsymmetricDecryption(struct zx_ac_Authenticator_s* x, int n, struct zx_ac_AsymmetricDecryption_s* z);
void zx_ac_Authenticator_ADD_AsymmetricKeyAgreement(struct zx_ac_Authenticator_s* x, int n, struct zx_ac_AsymmetricKeyAgreement_s* z);
void zx_ac_Authenticator_ADD_Extension(struct zx_ac_Authenticator_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_Authenticator_DEL_PreviousSession(struct zx_ac_Authenticator_s* x, int n);
void zx_ac_Authenticator_DEL_ResumeSession(struct zx_ac_Authenticator_s* x, int n);
void zx_ac_Authenticator_DEL_DigSig(struct zx_ac_Authenticator_s* x, int n);
void zx_ac_Authenticator_DEL_Password(struct zx_ac_Authenticator_s* x, int n);
void zx_ac_Authenticator_DEL_ZeroKnowledge(struct zx_ac_Authenticator_s* x, int n);
void zx_ac_Authenticator_DEL_SharedSecretChallengeResponse(struct zx_ac_Authenticator_s* x, int n);
void zx_ac_Authenticator_DEL_SharedSecretDynamicPlaintext(struct zx_ac_Authenticator_s* x, int n);
void zx_ac_Authenticator_DEL_IPAddress(struct zx_ac_Authenticator_s* x, int n);
void zx_ac_Authenticator_DEL_AsymmetricDecryption(struct zx_ac_Authenticator_s* x, int n);
void zx_ac_Authenticator_DEL_AsymmetricKeyAgreement(struct zx_ac_Authenticator_s* x, int n);
void zx_ac_Authenticator_DEL_Extension(struct zx_ac_Authenticator_s* x, int n);

void zx_ac_Authenticator_REV_PreviousSession(struct zx_ac_Authenticator_s* x);
void zx_ac_Authenticator_REV_ResumeSession(struct zx_ac_Authenticator_s* x);
void zx_ac_Authenticator_REV_DigSig(struct zx_ac_Authenticator_s* x);
void zx_ac_Authenticator_REV_Password(struct zx_ac_Authenticator_s* x);
void zx_ac_Authenticator_REV_ZeroKnowledge(struct zx_ac_Authenticator_s* x);
void zx_ac_Authenticator_REV_SharedSecretChallengeResponse(struct zx_ac_Authenticator_s* x);
void zx_ac_Authenticator_REV_SharedSecretDynamicPlaintext(struct zx_ac_Authenticator_s* x);
void zx_ac_Authenticator_REV_IPAddress(struct zx_ac_Authenticator_s* x);
void zx_ac_Authenticator_REV_AsymmetricDecryption(struct zx_ac_Authenticator_s* x);
void zx_ac_Authenticator_REV_AsymmetricKeyAgreement(struct zx_ac_Authenticator_s* x);
void zx_ac_Authenticator_REV_Extension(struct zx_ac_Authenticator_s* x);

#endif
/* -------------------------- ac_AuthenticatorTransportProtocol -------------------------- */
/* refby( zx_ac_AuthenticationMethod_s ) */
#ifndef zx_ac_AuthenticatorTransportProtocol_EXT
#define zx_ac_AuthenticatorTransportProtocol_EXT
#endif

struct zx_ac_AuthenticatorTransportProtocol_s* zx_DEC_ac_AuthenticatorTransportProtocol(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_AuthenticatorTransportProtocol_s* zx_NEW_ac_AuthenticatorTransportProtocol(struct zx_ctx* c);
void zx_FREE_ac_AuthenticatorTransportProtocol(struct zx_ctx* c, struct zx_ac_AuthenticatorTransportProtocol_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_AuthenticatorTransportProtocol_s* zx_DEEP_CLONE_ac_AuthenticatorTransportProtocol(struct zx_ctx* c, struct zx_ac_AuthenticatorTransportProtocol_s* x, int dup_strs);
void zx_DUP_STRS_ac_AuthenticatorTransportProtocol(struct zx_ctx* c, struct zx_ac_AuthenticatorTransportProtocol_s* x);
int zx_WALK_SO_ac_AuthenticatorTransportProtocol(struct zx_ctx* c, struct zx_ac_AuthenticatorTransportProtocol_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_AuthenticatorTransportProtocol(struct zx_ctx* c, struct zx_ac_AuthenticatorTransportProtocol_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_AuthenticatorTransportProtocol(struct zx_ctx* c, struct zx_ac_AuthenticatorTransportProtocol_s* x);
int zx_LEN_WO_ac_AuthenticatorTransportProtocol(struct zx_ctx* c, struct zx_ac_AuthenticatorTransportProtocol_s* x);
char* zx_ENC_SO_ac_AuthenticatorTransportProtocol(struct zx_ctx* c, struct zx_ac_AuthenticatorTransportProtocol_s* x, char* p);
char* zx_ENC_WO_ac_AuthenticatorTransportProtocol(struct zx_ctx* c, struct zx_ac_AuthenticatorTransportProtocol_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_AuthenticatorTransportProtocol(struct zx_ctx* c, struct zx_ac_AuthenticatorTransportProtocol_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_AuthenticatorTransportProtocol(struct zx_ctx* c, struct zx_ac_AuthenticatorTransportProtocol_s* x);

struct zx_ac_AuthenticatorTransportProtocol_s {
  ZX_ELEM_EXT
  zx_ac_AuthenticatorTransportProtocol_EXT
  struct zx_ac_HTTP_s* HTTP;	/* {0,1}  */
  struct zx_ac_SSL_s* SSL;	/* {0,1}  */
  struct zx_ac_MobileNetworkNoEncryption_s* MobileNetworkNoEncryption;	/* {0,1}  */
  struct zx_ac_MobileNetworkRadioEncryption_s* MobileNetworkRadioEncryption;	/* {0,1}  */
  struct zx_ac_MobileNetworkEndToEndEncryption_s* MobileNetworkEndToEndEncryption;	/* {0,1}  */
  struct zx_ac_WTLS_s* WTLS;	/* {0,1}  */
  struct zx_ac_IPSec_s* IPSec;	/* {0,1}  */
  struct zx_ac_Extension_s* Extension;	/* {1,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_HTTP_s* zx_ac_AuthenticatorTransportProtocol_GET_HTTP(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n);
struct zx_ac_SSL_s* zx_ac_AuthenticatorTransportProtocol_GET_SSL(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n);
struct zx_ac_MobileNetworkNoEncryption_s* zx_ac_AuthenticatorTransportProtocol_GET_MobileNetworkNoEncryption(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n);
struct zx_ac_MobileNetworkRadioEncryption_s* zx_ac_AuthenticatorTransportProtocol_GET_MobileNetworkRadioEncryption(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n);
struct zx_ac_MobileNetworkEndToEndEncryption_s* zx_ac_AuthenticatorTransportProtocol_GET_MobileNetworkEndToEndEncryption(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n);
struct zx_ac_WTLS_s* zx_ac_AuthenticatorTransportProtocol_GET_WTLS(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n);
struct zx_ac_IPSec_s* zx_ac_AuthenticatorTransportProtocol_GET_IPSec(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n);
struct zx_ac_Extension_s* zx_ac_AuthenticatorTransportProtocol_GET_Extension(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n);

int zx_ac_AuthenticatorTransportProtocol_NUM_HTTP(struct zx_ac_AuthenticatorTransportProtocol_s* x);
int zx_ac_AuthenticatorTransportProtocol_NUM_SSL(struct zx_ac_AuthenticatorTransportProtocol_s* x);
int zx_ac_AuthenticatorTransportProtocol_NUM_MobileNetworkNoEncryption(struct zx_ac_AuthenticatorTransportProtocol_s* x);
int zx_ac_AuthenticatorTransportProtocol_NUM_MobileNetworkRadioEncryption(struct zx_ac_AuthenticatorTransportProtocol_s* x);
int zx_ac_AuthenticatorTransportProtocol_NUM_MobileNetworkEndToEndEncryption(struct zx_ac_AuthenticatorTransportProtocol_s* x);
int zx_ac_AuthenticatorTransportProtocol_NUM_WTLS(struct zx_ac_AuthenticatorTransportProtocol_s* x);
int zx_ac_AuthenticatorTransportProtocol_NUM_IPSec(struct zx_ac_AuthenticatorTransportProtocol_s* x);
int zx_ac_AuthenticatorTransportProtocol_NUM_Extension(struct zx_ac_AuthenticatorTransportProtocol_s* x);

struct zx_ac_HTTP_s* zx_ac_AuthenticatorTransportProtocol_POP_HTTP(struct zx_ac_AuthenticatorTransportProtocol_s* x);
struct zx_ac_SSL_s* zx_ac_AuthenticatorTransportProtocol_POP_SSL(struct zx_ac_AuthenticatorTransportProtocol_s* x);
struct zx_ac_MobileNetworkNoEncryption_s* zx_ac_AuthenticatorTransportProtocol_POP_MobileNetworkNoEncryption(struct zx_ac_AuthenticatorTransportProtocol_s* x);
struct zx_ac_MobileNetworkRadioEncryption_s* zx_ac_AuthenticatorTransportProtocol_POP_MobileNetworkRadioEncryption(struct zx_ac_AuthenticatorTransportProtocol_s* x);
struct zx_ac_MobileNetworkEndToEndEncryption_s* zx_ac_AuthenticatorTransportProtocol_POP_MobileNetworkEndToEndEncryption(struct zx_ac_AuthenticatorTransportProtocol_s* x);
struct zx_ac_WTLS_s* zx_ac_AuthenticatorTransportProtocol_POP_WTLS(struct zx_ac_AuthenticatorTransportProtocol_s* x);
struct zx_ac_IPSec_s* zx_ac_AuthenticatorTransportProtocol_POP_IPSec(struct zx_ac_AuthenticatorTransportProtocol_s* x);
struct zx_ac_Extension_s* zx_ac_AuthenticatorTransportProtocol_POP_Extension(struct zx_ac_AuthenticatorTransportProtocol_s* x);

void zx_ac_AuthenticatorTransportProtocol_PUSH_HTTP(struct zx_ac_AuthenticatorTransportProtocol_s* x, struct zx_ac_HTTP_s* y);
void zx_ac_AuthenticatorTransportProtocol_PUSH_SSL(struct zx_ac_AuthenticatorTransportProtocol_s* x, struct zx_ac_SSL_s* y);
void zx_ac_AuthenticatorTransportProtocol_PUSH_MobileNetworkNoEncryption(struct zx_ac_AuthenticatorTransportProtocol_s* x, struct zx_ac_MobileNetworkNoEncryption_s* y);
void zx_ac_AuthenticatorTransportProtocol_PUSH_MobileNetworkRadioEncryption(struct zx_ac_AuthenticatorTransportProtocol_s* x, struct zx_ac_MobileNetworkRadioEncryption_s* y);
void zx_ac_AuthenticatorTransportProtocol_PUSH_MobileNetworkEndToEndEncryption(struct zx_ac_AuthenticatorTransportProtocol_s* x, struct zx_ac_MobileNetworkEndToEndEncryption_s* y);
void zx_ac_AuthenticatorTransportProtocol_PUSH_WTLS(struct zx_ac_AuthenticatorTransportProtocol_s* x, struct zx_ac_WTLS_s* y);
void zx_ac_AuthenticatorTransportProtocol_PUSH_IPSec(struct zx_ac_AuthenticatorTransportProtocol_s* x, struct zx_ac_IPSec_s* y);
void zx_ac_AuthenticatorTransportProtocol_PUSH_Extension(struct zx_ac_AuthenticatorTransportProtocol_s* x, struct zx_ac_Extension_s* y);


void zx_ac_AuthenticatorTransportProtocol_PUT_HTTP(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n, struct zx_ac_HTTP_s* y);
void zx_ac_AuthenticatorTransportProtocol_PUT_SSL(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n, struct zx_ac_SSL_s* y);
void zx_ac_AuthenticatorTransportProtocol_PUT_MobileNetworkNoEncryption(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n, struct zx_ac_MobileNetworkNoEncryption_s* y);
void zx_ac_AuthenticatorTransportProtocol_PUT_MobileNetworkRadioEncryption(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n, struct zx_ac_MobileNetworkRadioEncryption_s* y);
void zx_ac_AuthenticatorTransportProtocol_PUT_MobileNetworkEndToEndEncryption(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n, struct zx_ac_MobileNetworkEndToEndEncryption_s* y);
void zx_ac_AuthenticatorTransportProtocol_PUT_WTLS(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n, struct zx_ac_WTLS_s* y);
void zx_ac_AuthenticatorTransportProtocol_PUT_IPSec(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n, struct zx_ac_IPSec_s* y);
void zx_ac_AuthenticatorTransportProtocol_PUT_Extension(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_AuthenticatorTransportProtocol_ADD_HTTP(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n, struct zx_ac_HTTP_s* z);
void zx_ac_AuthenticatorTransportProtocol_ADD_SSL(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n, struct zx_ac_SSL_s* z);
void zx_ac_AuthenticatorTransportProtocol_ADD_MobileNetworkNoEncryption(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n, struct zx_ac_MobileNetworkNoEncryption_s* z);
void zx_ac_AuthenticatorTransportProtocol_ADD_MobileNetworkRadioEncryption(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n, struct zx_ac_MobileNetworkRadioEncryption_s* z);
void zx_ac_AuthenticatorTransportProtocol_ADD_MobileNetworkEndToEndEncryption(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n, struct zx_ac_MobileNetworkEndToEndEncryption_s* z);
void zx_ac_AuthenticatorTransportProtocol_ADD_WTLS(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n, struct zx_ac_WTLS_s* z);
void zx_ac_AuthenticatorTransportProtocol_ADD_IPSec(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n, struct zx_ac_IPSec_s* z);
void zx_ac_AuthenticatorTransportProtocol_ADD_Extension(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_AuthenticatorTransportProtocol_DEL_HTTP(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n);
void zx_ac_AuthenticatorTransportProtocol_DEL_SSL(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n);
void zx_ac_AuthenticatorTransportProtocol_DEL_MobileNetworkNoEncryption(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n);
void zx_ac_AuthenticatorTransportProtocol_DEL_MobileNetworkRadioEncryption(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n);
void zx_ac_AuthenticatorTransportProtocol_DEL_MobileNetworkEndToEndEncryption(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n);
void zx_ac_AuthenticatorTransportProtocol_DEL_WTLS(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n);
void zx_ac_AuthenticatorTransportProtocol_DEL_IPSec(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n);
void zx_ac_AuthenticatorTransportProtocol_DEL_Extension(struct zx_ac_AuthenticatorTransportProtocol_s* x, int n);

void zx_ac_AuthenticatorTransportProtocol_REV_HTTP(struct zx_ac_AuthenticatorTransportProtocol_s* x);
void zx_ac_AuthenticatorTransportProtocol_REV_SSL(struct zx_ac_AuthenticatorTransportProtocol_s* x);
void zx_ac_AuthenticatorTransportProtocol_REV_MobileNetworkNoEncryption(struct zx_ac_AuthenticatorTransportProtocol_s* x);
void zx_ac_AuthenticatorTransportProtocol_REV_MobileNetworkRadioEncryption(struct zx_ac_AuthenticatorTransportProtocol_s* x);
void zx_ac_AuthenticatorTransportProtocol_REV_MobileNetworkEndToEndEncryption(struct zx_ac_AuthenticatorTransportProtocol_s* x);
void zx_ac_AuthenticatorTransportProtocol_REV_WTLS(struct zx_ac_AuthenticatorTransportProtocol_s* x);
void zx_ac_AuthenticatorTransportProtocol_REV_IPSec(struct zx_ac_AuthenticatorTransportProtocol_s* x);
void zx_ac_AuthenticatorTransportProtocol_REV_Extension(struct zx_ac_AuthenticatorTransportProtocol_s* x);

#endif
/* -------------------------- ac_DeactivationCallCenter -------------------------- */
/* refby( zx_ac_OperationalProtection_s ) */
#ifndef zx_ac_DeactivationCallCenter_EXT
#define zx_ac_DeactivationCallCenter_EXT
#endif

struct zx_ac_DeactivationCallCenter_s* zx_DEC_ac_DeactivationCallCenter(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_DeactivationCallCenter_s* zx_NEW_ac_DeactivationCallCenter(struct zx_ctx* c);
void zx_FREE_ac_DeactivationCallCenter(struct zx_ctx* c, struct zx_ac_DeactivationCallCenter_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_DeactivationCallCenter_s* zx_DEEP_CLONE_ac_DeactivationCallCenter(struct zx_ctx* c, struct zx_ac_DeactivationCallCenter_s* x, int dup_strs);
void zx_DUP_STRS_ac_DeactivationCallCenter(struct zx_ctx* c, struct zx_ac_DeactivationCallCenter_s* x);
int zx_WALK_SO_ac_DeactivationCallCenter(struct zx_ctx* c, struct zx_ac_DeactivationCallCenter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_DeactivationCallCenter(struct zx_ctx* c, struct zx_ac_DeactivationCallCenter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_DeactivationCallCenter(struct zx_ctx* c, struct zx_ac_DeactivationCallCenter_s* x);
int zx_LEN_WO_ac_DeactivationCallCenter(struct zx_ctx* c, struct zx_ac_DeactivationCallCenter_s* x);
char* zx_ENC_SO_ac_DeactivationCallCenter(struct zx_ctx* c, struct zx_ac_DeactivationCallCenter_s* x, char* p);
char* zx_ENC_WO_ac_DeactivationCallCenter(struct zx_ctx* c, struct zx_ac_DeactivationCallCenter_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_DeactivationCallCenter(struct zx_ctx* c, struct zx_ac_DeactivationCallCenter_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_DeactivationCallCenter(struct zx_ctx* c, struct zx_ac_DeactivationCallCenter_s* x);

struct zx_ac_DeactivationCallCenter_s {
  ZX_ELEM_EXT
  zx_ac_DeactivationCallCenter_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_Extension_s* zx_ac_DeactivationCallCenter_GET_Extension(struct zx_ac_DeactivationCallCenter_s* x, int n);

int zx_ac_DeactivationCallCenter_NUM_Extension(struct zx_ac_DeactivationCallCenter_s* x);

struct zx_ac_Extension_s* zx_ac_DeactivationCallCenter_POP_Extension(struct zx_ac_DeactivationCallCenter_s* x);

void zx_ac_DeactivationCallCenter_PUSH_Extension(struct zx_ac_DeactivationCallCenter_s* x, struct zx_ac_Extension_s* y);


void zx_ac_DeactivationCallCenter_PUT_Extension(struct zx_ac_DeactivationCallCenter_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_DeactivationCallCenter_ADD_Extension(struct zx_ac_DeactivationCallCenter_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_DeactivationCallCenter_DEL_Extension(struct zx_ac_DeactivationCallCenter_s* x, int n);

void zx_ac_DeactivationCallCenter_REV_Extension(struct zx_ac_DeactivationCallCenter_s* x);

#endif
/* -------------------------- ac_DigSig -------------------------- */
/* refby( zx_ac_Authenticator_s ) */
#ifndef zx_ac_DigSig_EXT
#define zx_ac_DigSig_EXT
#endif

struct zx_ac_DigSig_s* zx_DEC_ac_DigSig(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_DigSig_s* zx_NEW_ac_DigSig(struct zx_ctx* c);
void zx_FREE_ac_DigSig(struct zx_ctx* c, struct zx_ac_DigSig_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_DigSig_s* zx_DEEP_CLONE_ac_DigSig(struct zx_ctx* c, struct zx_ac_DigSig_s* x, int dup_strs);
void zx_DUP_STRS_ac_DigSig(struct zx_ctx* c, struct zx_ac_DigSig_s* x);
int zx_WALK_SO_ac_DigSig(struct zx_ctx* c, struct zx_ac_DigSig_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_DigSig(struct zx_ctx* c, struct zx_ac_DigSig_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_DigSig(struct zx_ctx* c, struct zx_ac_DigSig_s* x);
int zx_LEN_WO_ac_DigSig(struct zx_ctx* c, struct zx_ac_DigSig_s* x);
char* zx_ENC_SO_ac_DigSig(struct zx_ctx* c, struct zx_ac_DigSig_s* x, char* p);
char* zx_ENC_WO_ac_DigSig(struct zx_ctx* c, struct zx_ac_DigSig_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_DigSig(struct zx_ctx* c, struct zx_ac_DigSig_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_DigSig(struct zx_ctx* c, struct zx_ac_DigSig_s* x);

struct zx_ac_DigSig_s {
  ZX_ELEM_EXT
  zx_ac_DigSig_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_Extension_s* zx_ac_DigSig_GET_Extension(struct zx_ac_DigSig_s* x, int n);

int zx_ac_DigSig_NUM_Extension(struct zx_ac_DigSig_s* x);

struct zx_ac_Extension_s* zx_ac_DigSig_POP_Extension(struct zx_ac_DigSig_s* x);

void zx_ac_DigSig_PUSH_Extension(struct zx_ac_DigSig_s* x, struct zx_ac_Extension_s* y);


void zx_ac_DigSig_PUT_Extension(struct zx_ac_DigSig_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_DigSig_ADD_Extension(struct zx_ac_DigSig_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_DigSig_DEL_Extension(struct zx_ac_DigSig_s* x, int n);

void zx_ac_DigSig_REV_Extension(struct zx_ac_DigSig_s* x);

#endif
/* -------------------------- ac_Extension -------------------------- */
/* refby( zx_ac_MobileNetworkNoEncryption_s zx_ac_IPSec_s zx_ac_KeyActivation_s zx_ac_DigSig_s zx_ac_PreviousSession_s zx_ac_ActivationPin_s zx_ac_Identification_s zx_ac_PrivateKeyProtection_s zx_ac_AsymmetricDecryption_s zx_ac_AuthenticationMethod_s zx_ac_WTLS_s zx_ac_AsymmetricKeyAgreement_s zx_ac_DeactivationCallCenter_s zx_ac_SwitchAudit_s zx_ac_SSL_s zx_ac_MobileNetworkEndToEndEncryption_s zx_ac_WrittenConsent_s zx_ac_ResumeSession_s zx_ac_HTTP_s zx_ac_Token_s zx_ac_SecretKeyProtection_s zx_ac_SecurityAudit_s zx_ac_AuthenticatorTransportProtocol_s zx_ac_SharedSecretChallengeResponse_s zx_ac_Authenticator_s zx_ac_AuthenticationContextStatement_s zx_ac_TechnicalProtection_s zx_ac_Password_s zx_ac_MobileNetworkRadioEncryption_s zx_ac_ZeroKnowledge_s zx_ac_Smartcard_s zx_ac_OperationalProtection_s zx_ac_SharedSecretDynamicPlaintext_s zx_ac_PrincipalAuthenticationMechanism_s zx_ac_IPAddress_s ) */
#ifndef zx_ac_Extension_EXT
#define zx_ac_Extension_EXT
#endif

struct zx_ac_Extension_s* zx_DEC_ac_Extension(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_Extension_s* zx_NEW_ac_Extension(struct zx_ctx* c);
void zx_FREE_ac_Extension(struct zx_ctx* c, struct zx_ac_Extension_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_Extension_s* zx_DEEP_CLONE_ac_Extension(struct zx_ctx* c, struct zx_ac_Extension_s* x, int dup_strs);
void zx_DUP_STRS_ac_Extension(struct zx_ctx* c, struct zx_ac_Extension_s* x);
int zx_WALK_SO_ac_Extension(struct zx_ctx* c, struct zx_ac_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_Extension(struct zx_ctx* c, struct zx_ac_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_Extension(struct zx_ctx* c, struct zx_ac_Extension_s* x);
int zx_LEN_WO_ac_Extension(struct zx_ctx* c, struct zx_ac_Extension_s* x);
char* zx_ENC_SO_ac_Extension(struct zx_ctx* c, struct zx_ac_Extension_s* x, char* p);
char* zx_ENC_WO_ac_Extension(struct zx_ctx* c, struct zx_ac_Extension_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_Extension(struct zx_ctx* c, struct zx_ac_Extension_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_Extension(struct zx_ctx* c, struct zx_ac_Extension_s* x);

struct zx_ac_Extension_s {
  ZX_ELEM_EXT
  zx_ac_Extension_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- ac_Generation -------------------------- */
/* refby( zx_ac_ActivationPin_s zx_ac_Password_s ) */
#ifndef zx_ac_Generation_EXT
#define zx_ac_Generation_EXT
#endif

struct zx_ac_Generation_s* zx_DEC_ac_Generation(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_Generation_s* zx_NEW_ac_Generation(struct zx_ctx* c);
void zx_FREE_ac_Generation(struct zx_ctx* c, struct zx_ac_Generation_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_Generation_s* zx_DEEP_CLONE_ac_Generation(struct zx_ctx* c, struct zx_ac_Generation_s* x, int dup_strs);
void zx_DUP_STRS_ac_Generation(struct zx_ctx* c, struct zx_ac_Generation_s* x);
int zx_WALK_SO_ac_Generation(struct zx_ctx* c, struct zx_ac_Generation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_Generation(struct zx_ctx* c, struct zx_ac_Generation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_Generation(struct zx_ctx* c, struct zx_ac_Generation_s* x);
int zx_LEN_WO_ac_Generation(struct zx_ctx* c, struct zx_ac_Generation_s* x);
char* zx_ENC_SO_ac_Generation(struct zx_ctx* c, struct zx_ac_Generation_s* x, char* p);
char* zx_ENC_WO_ac_Generation(struct zx_ctx* c, struct zx_ac_Generation_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_Generation(struct zx_ctx* c, struct zx_ac_Generation_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_Generation(struct zx_ctx* c, struct zx_ac_Generation_s* x);

struct zx_ac_Generation_s {
  ZX_ELEM_EXT
  zx_ac_Generation_EXT
  struct zx_str* mechanism;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ac_Generation_GET_mechanism(struct zx_ac_Generation_s* x);





void zx_ac_Generation_PUT_mechanism(struct zx_ac_Generation_s* x, struct zx_str* y);





#endif
/* -------------------------- ac_GoverningAgreementRef -------------------------- */
/* refby( zx_ac_GoverningAgreements_s ) */
#ifndef zx_ac_GoverningAgreementRef_EXT
#define zx_ac_GoverningAgreementRef_EXT
#endif

struct zx_ac_GoverningAgreementRef_s* zx_DEC_ac_GoverningAgreementRef(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_GoverningAgreementRef_s* zx_NEW_ac_GoverningAgreementRef(struct zx_ctx* c);
void zx_FREE_ac_GoverningAgreementRef(struct zx_ctx* c, struct zx_ac_GoverningAgreementRef_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_GoverningAgreementRef_s* zx_DEEP_CLONE_ac_GoverningAgreementRef(struct zx_ctx* c, struct zx_ac_GoverningAgreementRef_s* x, int dup_strs);
void zx_DUP_STRS_ac_GoverningAgreementRef(struct zx_ctx* c, struct zx_ac_GoverningAgreementRef_s* x);
int zx_WALK_SO_ac_GoverningAgreementRef(struct zx_ctx* c, struct zx_ac_GoverningAgreementRef_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_GoverningAgreementRef(struct zx_ctx* c, struct zx_ac_GoverningAgreementRef_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_GoverningAgreementRef(struct zx_ctx* c, struct zx_ac_GoverningAgreementRef_s* x);
int zx_LEN_WO_ac_GoverningAgreementRef(struct zx_ctx* c, struct zx_ac_GoverningAgreementRef_s* x);
char* zx_ENC_SO_ac_GoverningAgreementRef(struct zx_ctx* c, struct zx_ac_GoverningAgreementRef_s* x, char* p);
char* zx_ENC_WO_ac_GoverningAgreementRef(struct zx_ctx* c, struct zx_ac_GoverningAgreementRef_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_GoverningAgreementRef(struct zx_ctx* c, struct zx_ac_GoverningAgreementRef_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_GoverningAgreementRef(struct zx_ctx* c, struct zx_ac_GoverningAgreementRef_s* x);

struct zx_ac_GoverningAgreementRef_s {
  ZX_ELEM_EXT
  zx_ac_GoverningAgreementRef_EXT
  struct zx_str* governingAgreementRef;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ac_GoverningAgreementRef_GET_governingAgreementRef(struct zx_ac_GoverningAgreementRef_s* x);





void zx_ac_GoverningAgreementRef_PUT_governingAgreementRef(struct zx_ac_GoverningAgreementRef_s* x, struct zx_str* y);





#endif
/* -------------------------- ac_GoverningAgreements -------------------------- */
/* refby( zx_ac_AuthenticatingAuthority_s zx_ac_AuthenticationContextStatement_s ) */
#ifndef zx_ac_GoverningAgreements_EXT
#define zx_ac_GoverningAgreements_EXT
#endif

struct zx_ac_GoverningAgreements_s* zx_DEC_ac_GoverningAgreements(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_GoverningAgreements_s* zx_NEW_ac_GoverningAgreements(struct zx_ctx* c);
void zx_FREE_ac_GoverningAgreements(struct zx_ctx* c, struct zx_ac_GoverningAgreements_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_GoverningAgreements_s* zx_DEEP_CLONE_ac_GoverningAgreements(struct zx_ctx* c, struct zx_ac_GoverningAgreements_s* x, int dup_strs);
void zx_DUP_STRS_ac_GoverningAgreements(struct zx_ctx* c, struct zx_ac_GoverningAgreements_s* x);
int zx_WALK_SO_ac_GoverningAgreements(struct zx_ctx* c, struct zx_ac_GoverningAgreements_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_GoverningAgreements(struct zx_ctx* c, struct zx_ac_GoverningAgreements_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_GoverningAgreements(struct zx_ctx* c, struct zx_ac_GoverningAgreements_s* x);
int zx_LEN_WO_ac_GoverningAgreements(struct zx_ctx* c, struct zx_ac_GoverningAgreements_s* x);
char* zx_ENC_SO_ac_GoverningAgreements(struct zx_ctx* c, struct zx_ac_GoverningAgreements_s* x, char* p);
char* zx_ENC_WO_ac_GoverningAgreements(struct zx_ctx* c, struct zx_ac_GoverningAgreements_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_GoverningAgreements(struct zx_ctx* c, struct zx_ac_GoverningAgreements_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_GoverningAgreements(struct zx_ctx* c, struct zx_ac_GoverningAgreements_s* x);

struct zx_ac_GoverningAgreements_s {
  ZX_ELEM_EXT
  zx_ac_GoverningAgreements_EXT
  struct zx_ac_GoverningAgreementRef_s* GoverningAgreementRef;	/* {1,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_GoverningAgreementRef_s* zx_ac_GoverningAgreements_GET_GoverningAgreementRef(struct zx_ac_GoverningAgreements_s* x, int n);

int zx_ac_GoverningAgreements_NUM_GoverningAgreementRef(struct zx_ac_GoverningAgreements_s* x);

struct zx_ac_GoverningAgreementRef_s* zx_ac_GoverningAgreements_POP_GoverningAgreementRef(struct zx_ac_GoverningAgreements_s* x);

void zx_ac_GoverningAgreements_PUSH_GoverningAgreementRef(struct zx_ac_GoverningAgreements_s* x, struct zx_ac_GoverningAgreementRef_s* y);


void zx_ac_GoverningAgreements_PUT_GoverningAgreementRef(struct zx_ac_GoverningAgreements_s* x, int n, struct zx_ac_GoverningAgreementRef_s* y);

void zx_ac_GoverningAgreements_ADD_GoverningAgreementRef(struct zx_ac_GoverningAgreements_s* x, int n, struct zx_ac_GoverningAgreementRef_s* z);

void zx_ac_GoverningAgreements_DEL_GoverningAgreementRef(struct zx_ac_GoverningAgreements_s* x, int n);

void zx_ac_GoverningAgreements_REV_GoverningAgreementRef(struct zx_ac_GoverningAgreements_s* x);

#endif
/* -------------------------- ac_HTTP -------------------------- */
/* refby( zx_ac_AuthenticatorTransportProtocol_s ) */
#ifndef zx_ac_HTTP_EXT
#define zx_ac_HTTP_EXT
#endif

struct zx_ac_HTTP_s* zx_DEC_ac_HTTP(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_HTTP_s* zx_NEW_ac_HTTP(struct zx_ctx* c);
void zx_FREE_ac_HTTP(struct zx_ctx* c, struct zx_ac_HTTP_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_HTTP_s* zx_DEEP_CLONE_ac_HTTP(struct zx_ctx* c, struct zx_ac_HTTP_s* x, int dup_strs);
void zx_DUP_STRS_ac_HTTP(struct zx_ctx* c, struct zx_ac_HTTP_s* x);
int zx_WALK_SO_ac_HTTP(struct zx_ctx* c, struct zx_ac_HTTP_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_HTTP(struct zx_ctx* c, struct zx_ac_HTTP_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_HTTP(struct zx_ctx* c, struct zx_ac_HTTP_s* x);
int zx_LEN_WO_ac_HTTP(struct zx_ctx* c, struct zx_ac_HTTP_s* x);
char* zx_ENC_SO_ac_HTTP(struct zx_ctx* c, struct zx_ac_HTTP_s* x, char* p);
char* zx_ENC_WO_ac_HTTP(struct zx_ctx* c, struct zx_ac_HTTP_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_HTTP(struct zx_ctx* c, struct zx_ac_HTTP_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_HTTP(struct zx_ctx* c, struct zx_ac_HTTP_s* x);

struct zx_ac_HTTP_s {
  ZX_ELEM_EXT
  zx_ac_HTTP_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_Extension_s* zx_ac_HTTP_GET_Extension(struct zx_ac_HTTP_s* x, int n);

int zx_ac_HTTP_NUM_Extension(struct zx_ac_HTTP_s* x);

struct zx_ac_Extension_s* zx_ac_HTTP_POP_Extension(struct zx_ac_HTTP_s* x);

void zx_ac_HTTP_PUSH_Extension(struct zx_ac_HTTP_s* x, struct zx_ac_Extension_s* y);


void zx_ac_HTTP_PUT_Extension(struct zx_ac_HTTP_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_HTTP_ADD_Extension(struct zx_ac_HTTP_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_HTTP_DEL_Extension(struct zx_ac_HTTP_s* x, int n);

void zx_ac_HTTP_REV_Extension(struct zx_ac_HTTP_s* x);

#endif
/* -------------------------- ac_IPAddress -------------------------- */
/* refby( zx_ac_Authenticator_s ) */
#ifndef zx_ac_IPAddress_EXT
#define zx_ac_IPAddress_EXT
#endif

struct zx_ac_IPAddress_s* zx_DEC_ac_IPAddress(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_IPAddress_s* zx_NEW_ac_IPAddress(struct zx_ctx* c);
void zx_FREE_ac_IPAddress(struct zx_ctx* c, struct zx_ac_IPAddress_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_IPAddress_s* zx_DEEP_CLONE_ac_IPAddress(struct zx_ctx* c, struct zx_ac_IPAddress_s* x, int dup_strs);
void zx_DUP_STRS_ac_IPAddress(struct zx_ctx* c, struct zx_ac_IPAddress_s* x);
int zx_WALK_SO_ac_IPAddress(struct zx_ctx* c, struct zx_ac_IPAddress_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_IPAddress(struct zx_ctx* c, struct zx_ac_IPAddress_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_IPAddress(struct zx_ctx* c, struct zx_ac_IPAddress_s* x);
int zx_LEN_WO_ac_IPAddress(struct zx_ctx* c, struct zx_ac_IPAddress_s* x);
char* zx_ENC_SO_ac_IPAddress(struct zx_ctx* c, struct zx_ac_IPAddress_s* x, char* p);
char* zx_ENC_WO_ac_IPAddress(struct zx_ctx* c, struct zx_ac_IPAddress_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_IPAddress(struct zx_ctx* c, struct zx_ac_IPAddress_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_IPAddress(struct zx_ctx* c, struct zx_ac_IPAddress_s* x);

struct zx_ac_IPAddress_s {
  ZX_ELEM_EXT
  zx_ac_IPAddress_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_Extension_s* zx_ac_IPAddress_GET_Extension(struct zx_ac_IPAddress_s* x, int n);

int zx_ac_IPAddress_NUM_Extension(struct zx_ac_IPAddress_s* x);

struct zx_ac_Extension_s* zx_ac_IPAddress_POP_Extension(struct zx_ac_IPAddress_s* x);

void zx_ac_IPAddress_PUSH_Extension(struct zx_ac_IPAddress_s* x, struct zx_ac_Extension_s* y);


void zx_ac_IPAddress_PUT_Extension(struct zx_ac_IPAddress_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_IPAddress_ADD_Extension(struct zx_ac_IPAddress_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_IPAddress_DEL_Extension(struct zx_ac_IPAddress_s* x, int n);

void zx_ac_IPAddress_REV_Extension(struct zx_ac_IPAddress_s* x);

#endif
/* -------------------------- ac_IPSec -------------------------- */
/* refby( zx_ac_AuthenticatorTransportProtocol_s ) */
#ifndef zx_ac_IPSec_EXT
#define zx_ac_IPSec_EXT
#endif

struct zx_ac_IPSec_s* zx_DEC_ac_IPSec(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_IPSec_s* zx_NEW_ac_IPSec(struct zx_ctx* c);
void zx_FREE_ac_IPSec(struct zx_ctx* c, struct zx_ac_IPSec_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_IPSec_s* zx_DEEP_CLONE_ac_IPSec(struct zx_ctx* c, struct zx_ac_IPSec_s* x, int dup_strs);
void zx_DUP_STRS_ac_IPSec(struct zx_ctx* c, struct zx_ac_IPSec_s* x);
int zx_WALK_SO_ac_IPSec(struct zx_ctx* c, struct zx_ac_IPSec_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_IPSec(struct zx_ctx* c, struct zx_ac_IPSec_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_IPSec(struct zx_ctx* c, struct zx_ac_IPSec_s* x);
int zx_LEN_WO_ac_IPSec(struct zx_ctx* c, struct zx_ac_IPSec_s* x);
char* zx_ENC_SO_ac_IPSec(struct zx_ctx* c, struct zx_ac_IPSec_s* x, char* p);
char* zx_ENC_WO_ac_IPSec(struct zx_ctx* c, struct zx_ac_IPSec_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_IPSec(struct zx_ctx* c, struct zx_ac_IPSec_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_IPSec(struct zx_ctx* c, struct zx_ac_IPSec_s* x);

struct zx_ac_IPSec_s {
  ZX_ELEM_EXT
  zx_ac_IPSec_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_Extension_s* zx_ac_IPSec_GET_Extension(struct zx_ac_IPSec_s* x, int n);

int zx_ac_IPSec_NUM_Extension(struct zx_ac_IPSec_s* x);

struct zx_ac_Extension_s* zx_ac_IPSec_POP_Extension(struct zx_ac_IPSec_s* x);

void zx_ac_IPSec_PUSH_Extension(struct zx_ac_IPSec_s* x, struct zx_ac_Extension_s* y);


void zx_ac_IPSec_PUT_Extension(struct zx_ac_IPSec_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_IPSec_ADD_Extension(struct zx_ac_IPSec_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_IPSec_DEL_Extension(struct zx_ac_IPSec_s* x, int n);

void zx_ac_IPSec_REV_Extension(struct zx_ac_IPSec_s* x);

#endif
/* -------------------------- ac_Identification -------------------------- */
/* refby( zx_ac_AuthenticationContextStatement_s ) */
#ifndef zx_ac_Identification_EXT
#define zx_ac_Identification_EXT
#endif

struct zx_ac_Identification_s* zx_DEC_ac_Identification(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_Identification_s* zx_NEW_ac_Identification(struct zx_ctx* c);
void zx_FREE_ac_Identification(struct zx_ctx* c, struct zx_ac_Identification_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_Identification_s* zx_DEEP_CLONE_ac_Identification(struct zx_ctx* c, struct zx_ac_Identification_s* x, int dup_strs);
void zx_DUP_STRS_ac_Identification(struct zx_ctx* c, struct zx_ac_Identification_s* x);
int zx_WALK_SO_ac_Identification(struct zx_ctx* c, struct zx_ac_Identification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_Identification(struct zx_ctx* c, struct zx_ac_Identification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_Identification(struct zx_ctx* c, struct zx_ac_Identification_s* x);
int zx_LEN_WO_ac_Identification(struct zx_ctx* c, struct zx_ac_Identification_s* x);
char* zx_ENC_SO_ac_Identification(struct zx_ctx* c, struct zx_ac_Identification_s* x, char* p);
char* zx_ENC_WO_ac_Identification(struct zx_ctx* c, struct zx_ac_Identification_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_Identification(struct zx_ctx* c, struct zx_ac_Identification_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_Identification(struct zx_ctx* c, struct zx_ac_Identification_s* x);

struct zx_ac_Identification_s {
  ZX_ELEM_EXT
  zx_ac_Identification_EXT
  struct zx_ac_PhysicalVerification_s* PhysicalVerification;	/* {0,1}  */
  struct zx_ac_WrittenConsent_s* WrittenConsent;	/* {0,1}  */
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
  struct zx_str* nym;	/* {0,1} attribute anonymity */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ac_Identification_GET_nym(struct zx_ac_Identification_s* x);

struct zx_ac_PhysicalVerification_s* zx_ac_Identification_GET_PhysicalVerification(struct zx_ac_Identification_s* x, int n);
struct zx_ac_WrittenConsent_s* zx_ac_Identification_GET_WrittenConsent(struct zx_ac_Identification_s* x, int n);
struct zx_ac_Extension_s* zx_ac_Identification_GET_Extension(struct zx_ac_Identification_s* x, int n);

int zx_ac_Identification_NUM_PhysicalVerification(struct zx_ac_Identification_s* x);
int zx_ac_Identification_NUM_WrittenConsent(struct zx_ac_Identification_s* x);
int zx_ac_Identification_NUM_Extension(struct zx_ac_Identification_s* x);

struct zx_ac_PhysicalVerification_s* zx_ac_Identification_POP_PhysicalVerification(struct zx_ac_Identification_s* x);
struct zx_ac_WrittenConsent_s* zx_ac_Identification_POP_WrittenConsent(struct zx_ac_Identification_s* x);
struct zx_ac_Extension_s* zx_ac_Identification_POP_Extension(struct zx_ac_Identification_s* x);

void zx_ac_Identification_PUSH_PhysicalVerification(struct zx_ac_Identification_s* x, struct zx_ac_PhysicalVerification_s* y);
void zx_ac_Identification_PUSH_WrittenConsent(struct zx_ac_Identification_s* x, struct zx_ac_WrittenConsent_s* y);
void zx_ac_Identification_PUSH_Extension(struct zx_ac_Identification_s* x, struct zx_ac_Extension_s* y);

void zx_ac_Identification_PUT_nym(struct zx_ac_Identification_s* x, struct zx_str* y);

void zx_ac_Identification_PUT_PhysicalVerification(struct zx_ac_Identification_s* x, int n, struct zx_ac_PhysicalVerification_s* y);
void zx_ac_Identification_PUT_WrittenConsent(struct zx_ac_Identification_s* x, int n, struct zx_ac_WrittenConsent_s* y);
void zx_ac_Identification_PUT_Extension(struct zx_ac_Identification_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_Identification_ADD_PhysicalVerification(struct zx_ac_Identification_s* x, int n, struct zx_ac_PhysicalVerification_s* z);
void zx_ac_Identification_ADD_WrittenConsent(struct zx_ac_Identification_s* x, int n, struct zx_ac_WrittenConsent_s* z);
void zx_ac_Identification_ADD_Extension(struct zx_ac_Identification_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_Identification_DEL_PhysicalVerification(struct zx_ac_Identification_s* x, int n);
void zx_ac_Identification_DEL_WrittenConsent(struct zx_ac_Identification_s* x, int n);
void zx_ac_Identification_DEL_Extension(struct zx_ac_Identification_s* x, int n);

void zx_ac_Identification_REV_PhysicalVerification(struct zx_ac_Identification_s* x);
void zx_ac_Identification_REV_WrittenConsent(struct zx_ac_Identification_s* x);
void zx_ac_Identification_REV_Extension(struct zx_ac_Identification_s* x);

#endif
/* -------------------------- ac_KeyActivation -------------------------- */
/* refby( zx_ac_PrivateKeyProtection_s zx_ac_SecretKeyProtection_s ) */
#ifndef zx_ac_KeyActivation_EXT
#define zx_ac_KeyActivation_EXT
#endif

struct zx_ac_KeyActivation_s* zx_DEC_ac_KeyActivation(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_KeyActivation_s* zx_NEW_ac_KeyActivation(struct zx_ctx* c);
void zx_FREE_ac_KeyActivation(struct zx_ctx* c, struct zx_ac_KeyActivation_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_KeyActivation_s* zx_DEEP_CLONE_ac_KeyActivation(struct zx_ctx* c, struct zx_ac_KeyActivation_s* x, int dup_strs);
void zx_DUP_STRS_ac_KeyActivation(struct zx_ctx* c, struct zx_ac_KeyActivation_s* x);
int zx_WALK_SO_ac_KeyActivation(struct zx_ctx* c, struct zx_ac_KeyActivation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_KeyActivation(struct zx_ctx* c, struct zx_ac_KeyActivation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_KeyActivation(struct zx_ctx* c, struct zx_ac_KeyActivation_s* x);
int zx_LEN_WO_ac_KeyActivation(struct zx_ctx* c, struct zx_ac_KeyActivation_s* x);
char* zx_ENC_SO_ac_KeyActivation(struct zx_ctx* c, struct zx_ac_KeyActivation_s* x, char* p);
char* zx_ENC_WO_ac_KeyActivation(struct zx_ctx* c, struct zx_ac_KeyActivation_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_KeyActivation(struct zx_ctx* c, struct zx_ac_KeyActivation_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_KeyActivation(struct zx_ctx* c, struct zx_ac_KeyActivation_s* x);

struct zx_ac_KeyActivation_s {
  ZX_ELEM_EXT
  zx_ac_KeyActivation_EXT
  struct zx_ac_ActivationPin_s* ActivationPin;	/* {0,1} nada */
  struct zx_ac_Extension_s* Extension;	/* {1,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_ActivationPin_s* zx_ac_KeyActivation_GET_ActivationPin(struct zx_ac_KeyActivation_s* x, int n);
struct zx_ac_Extension_s* zx_ac_KeyActivation_GET_Extension(struct zx_ac_KeyActivation_s* x, int n);

int zx_ac_KeyActivation_NUM_ActivationPin(struct zx_ac_KeyActivation_s* x);
int zx_ac_KeyActivation_NUM_Extension(struct zx_ac_KeyActivation_s* x);

struct zx_ac_ActivationPin_s* zx_ac_KeyActivation_POP_ActivationPin(struct zx_ac_KeyActivation_s* x);
struct zx_ac_Extension_s* zx_ac_KeyActivation_POP_Extension(struct zx_ac_KeyActivation_s* x);

void zx_ac_KeyActivation_PUSH_ActivationPin(struct zx_ac_KeyActivation_s* x, struct zx_ac_ActivationPin_s* y);
void zx_ac_KeyActivation_PUSH_Extension(struct zx_ac_KeyActivation_s* x, struct zx_ac_Extension_s* y);


void zx_ac_KeyActivation_PUT_ActivationPin(struct zx_ac_KeyActivation_s* x, int n, struct zx_ac_ActivationPin_s* y);
void zx_ac_KeyActivation_PUT_Extension(struct zx_ac_KeyActivation_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_KeyActivation_ADD_ActivationPin(struct zx_ac_KeyActivation_s* x, int n, struct zx_ac_ActivationPin_s* z);
void zx_ac_KeyActivation_ADD_Extension(struct zx_ac_KeyActivation_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_KeyActivation_DEL_ActivationPin(struct zx_ac_KeyActivation_s* x, int n);
void zx_ac_KeyActivation_DEL_Extension(struct zx_ac_KeyActivation_s* x, int n);

void zx_ac_KeyActivation_REV_ActivationPin(struct zx_ac_KeyActivation_s* x);
void zx_ac_KeyActivation_REV_Extension(struct zx_ac_KeyActivation_s* x);

#endif
/* -------------------------- ac_KeySharing -------------------------- */
/* refby( zx_ac_PrivateKeyProtection_s ) */
#ifndef zx_ac_KeySharing_EXT
#define zx_ac_KeySharing_EXT
#endif

struct zx_ac_KeySharing_s* zx_DEC_ac_KeySharing(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_KeySharing_s* zx_NEW_ac_KeySharing(struct zx_ctx* c);
void zx_FREE_ac_KeySharing(struct zx_ctx* c, struct zx_ac_KeySharing_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_KeySharing_s* zx_DEEP_CLONE_ac_KeySharing(struct zx_ctx* c, struct zx_ac_KeySharing_s* x, int dup_strs);
void zx_DUP_STRS_ac_KeySharing(struct zx_ctx* c, struct zx_ac_KeySharing_s* x);
int zx_WALK_SO_ac_KeySharing(struct zx_ctx* c, struct zx_ac_KeySharing_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_KeySharing(struct zx_ctx* c, struct zx_ac_KeySharing_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_KeySharing(struct zx_ctx* c, struct zx_ac_KeySharing_s* x);
int zx_LEN_WO_ac_KeySharing(struct zx_ctx* c, struct zx_ac_KeySharing_s* x);
char* zx_ENC_SO_ac_KeySharing(struct zx_ctx* c, struct zx_ac_KeySharing_s* x, char* p);
char* zx_ENC_WO_ac_KeySharing(struct zx_ctx* c, struct zx_ac_KeySharing_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_KeySharing(struct zx_ctx* c, struct zx_ac_KeySharing_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_KeySharing(struct zx_ctx* c, struct zx_ac_KeySharing_s* x);

struct zx_ac_KeySharing_s {
  ZX_ELEM_EXT
  zx_ac_KeySharing_EXT
  struct zx_str* sharing;	/* {1,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ac_KeySharing_GET_sharing(struct zx_ac_KeySharing_s* x);





void zx_ac_KeySharing_PUT_sharing(struct zx_ac_KeySharing_s* x, struct zx_str* y);





#endif
/* -------------------------- ac_KeyStorage -------------------------- */
/* refby( zx_ac_PrivateKeyProtection_s zx_ac_SecretKeyProtection_s ) */
#ifndef zx_ac_KeyStorage_EXT
#define zx_ac_KeyStorage_EXT
#endif

struct zx_ac_KeyStorage_s* zx_DEC_ac_KeyStorage(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_KeyStorage_s* zx_NEW_ac_KeyStorage(struct zx_ctx* c);
void zx_FREE_ac_KeyStorage(struct zx_ctx* c, struct zx_ac_KeyStorage_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_KeyStorage_s* zx_DEEP_CLONE_ac_KeyStorage(struct zx_ctx* c, struct zx_ac_KeyStorage_s* x, int dup_strs);
void zx_DUP_STRS_ac_KeyStorage(struct zx_ctx* c, struct zx_ac_KeyStorage_s* x);
int zx_WALK_SO_ac_KeyStorage(struct zx_ctx* c, struct zx_ac_KeyStorage_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_KeyStorage(struct zx_ctx* c, struct zx_ac_KeyStorage_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_KeyStorage(struct zx_ctx* c, struct zx_ac_KeyStorage_s* x);
int zx_LEN_WO_ac_KeyStorage(struct zx_ctx* c, struct zx_ac_KeyStorage_s* x);
char* zx_ENC_SO_ac_KeyStorage(struct zx_ctx* c, struct zx_ac_KeyStorage_s* x, char* p);
char* zx_ENC_WO_ac_KeyStorage(struct zx_ctx* c, struct zx_ac_KeyStorage_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_KeyStorage(struct zx_ctx* c, struct zx_ac_KeyStorage_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_KeyStorage(struct zx_ctx* c, struct zx_ac_KeyStorage_s* x);

struct zx_ac_KeyStorage_s {
  ZX_ELEM_EXT
  zx_ac_KeyStorage_EXT
  struct zx_str* medium;	/* {1,1} attribute memory */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ac_KeyStorage_GET_medium(struct zx_ac_KeyStorage_s* x);





void zx_ac_KeyStorage_PUT_medium(struct zx_ac_KeyStorage_s* x, struct zx_str* y);





#endif
/* -------------------------- ac_Length -------------------------- */
/* refby( zx_ac_ActivationPin_s zx_ac_Password_s ) */
#ifndef zx_ac_Length_EXT
#define zx_ac_Length_EXT
#endif

struct zx_ac_Length_s* zx_DEC_ac_Length(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_Length_s* zx_NEW_ac_Length(struct zx_ctx* c);
void zx_FREE_ac_Length(struct zx_ctx* c, struct zx_ac_Length_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_Length_s* zx_DEEP_CLONE_ac_Length(struct zx_ctx* c, struct zx_ac_Length_s* x, int dup_strs);
void zx_DUP_STRS_ac_Length(struct zx_ctx* c, struct zx_ac_Length_s* x);
int zx_WALK_SO_ac_Length(struct zx_ctx* c, struct zx_ac_Length_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_Length(struct zx_ctx* c, struct zx_ac_Length_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_Length(struct zx_ctx* c, struct zx_ac_Length_s* x);
int zx_LEN_WO_ac_Length(struct zx_ctx* c, struct zx_ac_Length_s* x);
char* zx_ENC_SO_ac_Length(struct zx_ctx* c, struct zx_ac_Length_s* x, char* p);
char* zx_ENC_WO_ac_Length(struct zx_ctx* c, struct zx_ac_Length_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_Length(struct zx_ctx* c, struct zx_ac_Length_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_Length(struct zx_ctx* c, struct zx_ac_Length_s* x);

struct zx_ac_Length_s {
  ZX_ELEM_EXT
  zx_ac_Length_EXT
  struct zx_str* min;	/* {1,1} attribute xs:integer */
  struct zx_str* max;	/* {0,1} attribute xs:integer */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ac_Length_GET_min(struct zx_ac_Length_s* x);
struct zx_str* zx_ac_Length_GET_max(struct zx_ac_Length_s* x);





void zx_ac_Length_PUT_min(struct zx_ac_Length_s* x, struct zx_str* y);
void zx_ac_Length_PUT_max(struct zx_ac_Length_s* x, struct zx_str* y);





#endif
/* -------------------------- ac_MobileNetworkEndToEndEncryption -------------------------- */
/* refby( zx_ac_AuthenticatorTransportProtocol_s ) */
#ifndef zx_ac_MobileNetworkEndToEndEncryption_EXT
#define zx_ac_MobileNetworkEndToEndEncryption_EXT
#endif

struct zx_ac_MobileNetworkEndToEndEncryption_s* zx_DEC_ac_MobileNetworkEndToEndEncryption(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_MobileNetworkEndToEndEncryption_s* zx_NEW_ac_MobileNetworkEndToEndEncryption(struct zx_ctx* c);
void zx_FREE_ac_MobileNetworkEndToEndEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkEndToEndEncryption_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_MobileNetworkEndToEndEncryption_s* zx_DEEP_CLONE_ac_MobileNetworkEndToEndEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkEndToEndEncryption_s* x, int dup_strs);
void zx_DUP_STRS_ac_MobileNetworkEndToEndEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkEndToEndEncryption_s* x);
int zx_WALK_SO_ac_MobileNetworkEndToEndEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkEndToEndEncryption_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_MobileNetworkEndToEndEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkEndToEndEncryption_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_MobileNetworkEndToEndEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkEndToEndEncryption_s* x);
int zx_LEN_WO_ac_MobileNetworkEndToEndEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkEndToEndEncryption_s* x);
char* zx_ENC_SO_ac_MobileNetworkEndToEndEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkEndToEndEncryption_s* x, char* p);
char* zx_ENC_WO_ac_MobileNetworkEndToEndEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkEndToEndEncryption_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_MobileNetworkEndToEndEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkEndToEndEncryption_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_MobileNetworkEndToEndEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkEndToEndEncryption_s* x);

struct zx_ac_MobileNetworkEndToEndEncryption_s {
  ZX_ELEM_EXT
  zx_ac_MobileNetworkEndToEndEncryption_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_Extension_s* zx_ac_MobileNetworkEndToEndEncryption_GET_Extension(struct zx_ac_MobileNetworkEndToEndEncryption_s* x, int n);

int zx_ac_MobileNetworkEndToEndEncryption_NUM_Extension(struct zx_ac_MobileNetworkEndToEndEncryption_s* x);

struct zx_ac_Extension_s* zx_ac_MobileNetworkEndToEndEncryption_POP_Extension(struct zx_ac_MobileNetworkEndToEndEncryption_s* x);

void zx_ac_MobileNetworkEndToEndEncryption_PUSH_Extension(struct zx_ac_MobileNetworkEndToEndEncryption_s* x, struct zx_ac_Extension_s* y);


void zx_ac_MobileNetworkEndToEndEncryption_PUT_Extension(struct zx_ac_MobileNetworkEndToEndEncryption_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_MobileNetworkEndToEndEncryption_ADD_Extension(struct zx_ac_MobileNetworkEndToEndEncryption_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_MobileNetworkEndToEndEncryption_DEL_Extension(struct zx_ac_MobileNetworkEndToEndEncryption_s* x, int n);

void zx_ac_MobileNetworkEndToEndEncryption_REV_Extension(struct zx_ac_MobileNetworkEndToEndEncryption_s* x);

#endif
/* -------------------------- ac_MobileNetworkNoEncryption -------------------------- */
/* refby( zx_ac_AuthenticatorTransportProtocol_s ) */
#ifndef zx_ac_MobileNetworkNoEncryption_EXT
#define zx_ac_MobileNetworkNoEncryption_EXT
#endif

struct zx_ac_MobileNetworkNoEncryption_s* zx_DEC_ac_MobileNetworkNoEncryption(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_MobileNetworkNoEncryption_s* zx_NEW_ac_MobileNetworkNoEncryption(struct zx_ctx* c);
void zx_FREE_ac_MobileNetworkNoEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkNoEncryption_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_MobileNetworkNoEncryption_s* zx_DEEP_CLONE_ac_MobileNetworkNoEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkNoEncryption_s* x, int dup_strs);
void zx_DUP_STRS_ac_MobileNetworkNoEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkNoEncryption_s* x);
int zx_WALK_SO_ac_MobileNetworkNoEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkNoEncryption_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_MobileNetworkNoEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkNoEncryption_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_MobileNetworkNoEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkNoEncryption_s* x);
int zx_LEN_WO_ac_MobileNetworkNoEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkNoEncryption_s* x);
char* zx_ENC_SO_ac_MobileNetworkNoEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkNoEncryption_s* x, char* p);
char* zx_ENC_WO_ac_MobileNetworkNoEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkNoEncryption_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_MobileNetworkNoEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkNoEncryption_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_MobileNetworkNoEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkNoEncryption_s* x);

struct zx_ac_MobileNetworkNoEncryption_s {
  ZX_ELEM_EXT
  zx_ac_MobileNetworkNoEncryption_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_Extension_s* zx_ac_MobileNetworkNoEncryption_GET_Extension(struct zx_ac_MobileNetworkNoEncryption_s* x, int n);

int zx_ac_MobileNetworkNoEncryption_NUM_Extension(struct zx_ac_MobileNetworkNoEncryption_s* x);

struct zx_ac_Extension_s* zx_ac_MobileNetworkNoEncryption_POP_Extension(struct zx_ac_MobileNetworkNoEncryption_s* x);

void zx_ac_MobileNetworkNoEncryption_PUSH_Extension(struct zx_ac_MobileNetworkNoEncryption_s* x, struct zx_ac_Extension_s* y);


void zx_ac_MobileNetworkNoEncryption_PUT_Extension(struct zx_ac_MobileNetworkNoEncryption_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_MobileNetworkNoEncryption_ADD_Extension(struct zx_ac_MobileNetworkNoEncryption_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_MobileNetworkNoEncryption_DEL_Extension(struct zx_ac_MobileNetworkNoEncryption_s* x, int n);

void zx_ac_MobileNetworkNoEncryption_REV_Extension(struct zx_ac_MobileNetworkNoEncryption_s* x);

#endif
/* -------------------------- ac_MobileNetworkRadioEncryption -------------------------- */
/* refby( zx_ac_AuthenticatorTransportProtocol_s ) */
#ifndef zx_ac_MobileNetworkRadioEncryption_EXT
#define zx_ac_MobileNetworkRadioEncryption_EXT
#endif

struct zx_ac_MobileNetworkRadioEncryption_s* zx_DEC_ac_MobileNetworkRadioEncryption(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_MobileNetworkRadioEncryption_s* zx_NEW_ac_MobileNetworkRadioEncryption(struct zx_ctx* c);
void zx_FREE_ac_MobileNetworkRadioEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkRadioEncryption_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_MobileNetworkRadioEncryption_s* zx_DEEP_CLONE_ac_MobileNetworkRadioEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkRadioEncryption_s* x, int dup_strs);
void zx_DUP_STRS_ac_MobileNetworkRadioEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkRadioEncryption_s* x);
int zx_WALK_SO_ac_MobileNetworkRadioEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkRadioEncryption_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_MobileNetworkRadioEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkRadioEncryption_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_MobileNetworkRadioEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkRadioEncryption_s* x);
int zx_LEN_WO_ac_MobileNetworkRadioEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkRadioEncryption_s* x);
char* zx_ENC_SO_ac_MobileNetworkRadioEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkRadioEncryption_s* x, char* p);
char* zx_ENC_WO_ac_MobileNetworkRadioEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkRadioEncryption_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_MobileNetworkRadioEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkRadioEncryption_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_MobileNetworkRadioEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkRadioEncryption_s* x);

struct zx_ac_MobileNetworkRadioEncryption_s {
  ZX_ELEM_EXT
  zx_ac_MobileNetworkRadioEncryption_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_Extension_s* zx_ac_MobileNetworkRadioEncryption_GET_Extension(struct zx_ac_MobileNetworkRadioEncryption_s* x, int n);

int zx_ac_MobileNetworkRadioEncryption_NUM_Extension(struct zx_ac_MobileNetworkRadioEncryption_s* x);

struct zx_ac_Extension_s* zx_ac_MobileNetworkRadioEncryption_POP_Extension(struct zx_ac_MobileNetworkRadioEncryption_s* x);

void zx_ac_MobileNetworkRadioEncryption_PUSH_Extension(struct zx_ac_MobileNetworkRadioEncryption_s* x, struct zx_ac_Extension_s* y);


void zx_ac_MobileNetworkRadioEncryption_PUT_Extension(struct zx_ac_MobileNetworkRadioEncryption_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_MobileNetworkRadioEncryption_ADD_Extension(struct zx_ac_MobileNetworkRadioEncryption_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_MobileNetworkRadioEncryption_DEL_Extension(struct zx_ac_MobileNetworkRadioEncryption_s* x, int n);

void zx_ac_MobileNetworkRadioEncryption_REV_Extension(struct zx_ac_MobileNetworkRadioEncryption_s* x);

#endif
/* -------------------------- ac_OperationalProtection -------------------------- */
/* refby( zx_ac_AuthenticationContextStatement_s ) */
#ifndef zx_ac_OperationalProtection_EXT
#define zx_ac_OperationalProtection_EXT
#endif

struct zx_ac_OperationalProtection_s* zx_DEC_ac_OperationalProtection(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_OperationalProtection_s* zx_NEW_ac_OperationalProtection(struct zx_ctx* c);
void zx_FREE_ac_OperationalProtection(struct zx_ctx* c, struct zx_ac_OperationalProtection_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_OperationalProtection_s* zx_DEEP_CLONE_ac_OperationalProtection(struct zx_ctx* c, struct zx_ac_OperationalProtection_s* x, int dup_strs);
void zx_DUP_STRS_ac_OperationalProtection(struct zx_ctx* c, struct zx_ac_OperationalProtection_s* x);
int zx_WALK_SO_ac_OperationalProtection(struct zx_ctx* c, struct zx_ac_OperationalProtection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_OperationalProtection(struct zx_ctx* c, struct zx_ac_OperationalProtection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_OperationalProtection(struct zx_ctx* c, struct zx_ac_OperationalProtection_s* x);
int zx_LEN_WO_ac_OperationalProtection(struct zx_ctx* c, struct zx_ac_OperationalProtection_s* x);
char* zx_ENC_SO_ac_OperationalProtection(struct zx_ctx* c, struct zx_ac_OperationalProtection_s* x, char* p);
char* zx_ENC_WO_ac_OperationalProtection(struct zx_ctx* c, struct zx_ac_OperationalProtection_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_OperationalProtection(struct zx_ctx* c, struct zx_ac_OperationalProtection_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_OperationalProtection(struct zx_ctx* c, struct zx_ac_OperationalProtection_s* x);

struct zx_ac_OperationalProtection_s {
  ZX_ELEM_EXT
  zx_ac_OperationalProtection_EXT
  struct zx_ac_SecurityAudit_s* SecurityAudit;	/* {0,1} nada */
  struct zx_ac_DeactivationCallCenter_s* DeactivationCallCenter;	/* {0,1}  */
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_SecurityAudit_s* zx_ac_OperationalProtection_GET_SecurityAudit(struct zx_ac_OperationalProtection_s* x, int n);
struct zx_ac_DeactivationCallCenter_s* zx_ac_OperationalProtection_GET_DeactivationCallCenter(struct zx_ac_OperationalProtection_s* x, int n);
struct zx_ac_Extension_s* zx_ac_OperationalProtection_GET_Extension(struct zx_ac_OperationalProtection_s* x, int n);

int zx_ac_OperationalProtection_NUM_SecurityAudit(struct zx_ac_OperationalProtection_s* x);
int zx_ac_OperationalProtection_NUM_DeactivationCallCenter(struct zx_ac_OperationalProtection_s* x);
int zx_ac_OperationalProtection_NUM_Extension(struct zx_ac_OperationalProtection_s* x);

struct zx_ac_SecurityAudit_s* zx_ac_OperationalProtection_POP_SecurityAudit(struct zx_ac_OperationalProtection_s* x);
struct zx_ac_DeactivationCallCenter_s* zx_ac_OperationalProtection_POP_DeactivationCallCenter(struct zx_ac_OperationalProtection_s* x);
struct zx_ac_Extension_s* zx_ac_OperationalProtection_POP_Extension(struct zx_ac_OperationalProtection_s* x);

void zx_ac_OperationalProtection_PUSH_SecurityAudit(struct zx_ac_OperationalProtection_s* x, struct zx_ac_SecurityAudit_s* y);
void zx_ac_OperationalProtection_PUSH_DeactivationCallCenter(struct zx_ac_OperationalProtection_s* x, struct zx_ac_DeactivationCallCenter_s* y);
void zx_ac_OperationalProtection_PUSH_Extension(struct zx_ac_OperationalProtection_s* x, struct zx_ac_Extension_s* y);


void zx_ac_OperationalProtection_PUT_SecurityAudit(struct zx_ac_OperationalProtection_s* x, int n, struct zx_ac_SecurityAudit_s* y);
void zx_ac_OperationalProtection_PUT_DeactivationCallCenter(struct zx_ac_OperationalProtection_s* x, int n, struct zx_ac_DeactivationCallCenter_s* y);
void zx_ac_OperationalProtection_PUT_Extension(struct zx_ac_OperationalProtection_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_OperationalProtection_ADD_SecurityAudit(struct zx_ac_OperationalProtection_s* x, int n, struct zx_ac_SecurityAudit_s* z);
void zx_ac_OperationalProtection_ADD_DeactivationCallCenter(struct zx_ac_OperationalProtection_s* x, int n, struct zx_ac_DeactivationCallCenter_s* z);
void zx_ac_OperationalProtection_ADD_Extension(struct zx_ac_OperationalProtection_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_OperationalProtection_DEL_SecurityAudit(struct zx_ac_OperationalProtection_s* x, int n);
void zx_ac_OperationalProtection_DEL_DeactivationCallCenter(struct zx_ac_OperationalProtection_s* x, int n);
void zx_ac_OperationalProtection_DEL_Extension(struct zx_ac_OperationalProtection_s* x, int n);

void zx_ac_OperationalProtection_REV_SecurityAudit(struct zx_ac_OperationalProtection_s* x);
void zx_ac_OperationalProtection_REV_DeactivationCallCenter(struct zx_ac_OperationalProtection_s* x);
void zx_ac_OperationalProtection_REV_Extension(struct zx_ac_OperationalProtection_s* x);

#endif
/* -------------------------- ac_Password -------------------------- */
/* refby( zx_ac_Authenticator_s zx_ac_PrincipalAuthenticationMechanism_s ) */
#ifndef zx_ac_Password_EXT
#define zx_ac_Password_EXT
#endif

struct zx_ac_Password_s* zx_DEC_ac_Password(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_Password_s* zx_NEW_ac_Password(struct zx_ctx* c);
void zx_FREE_ac_Password(struct zx_ctx* c, struct zx_ac_Password_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_Password_s* zx_DEEP_CLONE_ac_Password(struct zx_ctx* c, struct zx_ac_Password_s* x, int dup_strs);
void zx_DUP_STRS_ac_Password(struct zx_ctx* c, struct zx_ac_Password_s* x);
int zx_WALK_SO_ac_Password(struct zx_ctx* c, struct zx_ac_Password_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_Password(struct zx_ctx* c, struct zx_ac_Password_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_Password(struct zx_ctx* c, struct zx_ac_Password_s* x);
int zx_LEN_WO_ac_Password(struct zx_ctx* c, struct zx_ac_Password_s* x);
char* zx_ENC_SO_ac_Password(struct zx_ctx* c, struct zx_ac_Password_s* x, char* p);
char* zx_ENC_WO_ac_Password(struct zx_ctx* c, struct zx_ac_Password_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_Password(struct zx_ctx* c, struct zx_ac_Password_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_Password(struct zx_ctx* c, struct zx_ac_Password_s* x);

struct zx_ac_Password_s {
  ZX_ELEM_EXT
  zx_ac_Password_EXT
  struct zx_ac_Length_s* Length;	/* {0,1} nada */
  struct zx_ac_Alphabet_s* Alphabet;	/* {0,1} nada */
  struct zx_ac_Generation_s* Generation;	/* {0,1}  */
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_Length_s* zx_ac_Password_GET_Length(struct zx_ac_Password_s* x, int n);
struct zx_ac_Alphabet_s* zx_ac_Password_GET_Alphabet(struct zx_ac_Password_s* x, int n);
struct zx_ac_Generation_s* zx_ac_Password_GET_Generation(struct zx_ac_Password_s* x, int n);
struct zx_ac_Extension_s* zx_ac_Password_GET_Extension(struct zx_ac_Password_s* x, int n);

int zx_ac_Password_NUM_Length(struct zx_ac_Password_s* x);
int zx_ac_Password_NUM_Alphabet(struct zx_ac_Password_s* x);
int zx_ac_Password_NUM_Generation(struct zx_ac_Password_s* x);
int zx_ac_Password_NUM_Extension(struct zx_ac_Password_s* x);

struct zx_ac_Length_s* zx_ac_Password_POP_Length(struct zx_ac_Password_s* x);
struct zx_ac_Alphabet_s* zx_ac_Password_POP_Alphabet(struct zx_ac_Password_s* x);
struct zx_ac_Generation_s* zx_ac_Password_POP_Generation(struct zx_ac_Password_s* x);
struct zx_ac_Extension_s* zx_ac_Password_POP_Extension(struct zx_ac_Password_s* x);

void zx_ac_Password_PUSH_Length(struct zx_ac_Password_s* x, struct zx_ac_Length_s* y);
void zx_ac_Password_PUSH_Alphabet(struct zx_ac_Password_s* x, struct zx_ac_Alphabet_s* y);
void zx_ac_Password_PUSH_Generation(struct zx_ac_Password_s* x, struct zx_ac_Generation_s* y);
void zx_ac_Password_PUSH_Extension(struct zx_ac_Password_s* x, struct zx_ac_Extension_s* y);


void zx_ac_Password_PUT_Length(struct zx_ac_Password_s* x, int n, struct zx_ac_Length_s* y);
void zx_ac_Password_PUT_Alphabet(struct zx_ac_Password_s* x, int n, struct zx_ac_Alphabet_s* y);
void zx_ac_Password_PUT_Generation(struct zx_ac_Password_s* x, int n, struct zx_ac_Generation_s* y);
void zx_ac_Password_PUT_Extension(struct zx_ac_Password_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_Password_ADD_Length(struct zx_ac_Password_s* x, int n, struct zx_ac_Length_s* z);
void zx_ac_Password_ADD_Alphabet(struct zx_ac_Password_s* x, int n, struct zx_ac_Alphabet_s* z);
void zx_ac_Password_ADD_Generation(struct zx_ac_Password_s* x, int n, struct zx_ac_Generation_s* z);
void zx_ac_Password_ADD_Extension(struct zx_ac_Password_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_Password_DEL_Length(struct zx_ac_Password_s* x, int n);
void zx_ac_Password_DEL_Alphabet(struct zx_ac_Password_s* x, int n);
void zx_ac_Password_DEL_Generation(struct zx_ac_Password_s* x, int n);
void zx_ac_Password_DEL_Extension(struct zx_ac_Password_s* x, int n);

void zx_ac_Password_REV_Length(struct zx_ac_Password_s* x);
void zx_ac_Password_REV_Alphabet(struct zx_ac_Password_s* x);
void zx_ac_Password_REV_Generation(struct zx_ac_Password_s* x);
void zx_ac_Password_REV_Extension(struct zx_ac_Password_s* x);

#endif
/* -------------------------- ac_PhysicalVerification -------------------------- */
/* refby( zx_ac_Identification_s ) */
#ifndef zx_ac_PhysicalVerification_EXT
#define zx_ac_PhysicalVerification_EXT
#endif

struct zx_ac_PhysicalVerification_s* zx_DEC_ac_PhysicalVerification(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_PhysicalVerification_s* zx_NEW_ac_PhysicalVerification(struct zx_ctx* c);
void zx_FREE_ac_PhysicalVerification(struct zx_ctx* c, struct zx_ac_PhysicalVerification_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_PhysicalVerification_s* zx_DEEP_CLONE_ac_PhysicalVerification(struct zx_ctx* c, struct zx_ac_PhysicalVerification_s* x, int dup_strs);
void zx_DUP_STRS_ac_PhysicalVerification(struct zx_ctx* c, struct zx_ac_PhysicalVerification_s* x);
int zx_WALK_SO_ac_PhysicalVerification(struct zx_ctx* c, struct zx_ac_PhysicalVerification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_PhysicalVerification(struct zx_ctx* c, struct zx_ac_PhysicalVerification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_PhysicalVerification(struct zx_ctx* c, struct zx_ac_PhysicalVerification_s* x);
int zx_LEN_WO_ac_PhysicalVerification(struct zx_ctx* c, struct zx_ac_PhysicalVerification_s* x);
char* zx_ENC_SO_ac_PhysicalVerification(struct zx_ctx* c, struct zx_ac_PhysicalVerification_s* x, char* p);
char* zx_ENC_WO_ac_PhysicalVerification(struct zx_ctx* c, struct zx_ac_PhysicalVerification_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_PhysicalVerification(struct zx_ctx* c, struct zx_ac_PhysicalVerification_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_PhysicalVerification(struct zx_ctx* c, struct zx_ac_PhysicalVerification_s* x);

struct zx_ac_PhysicalVerification_s {
  ZX_ELEM_EXT
  zx_ac_PhysicalVerification_EXT
  struct zx_str* credentialLevel;	/* {0,1} attribute primary */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ac_PhysicalVerification_GET_credentialLevel(struct zx_ac_PhysicalVerification_s* x);





void zx_ac_PhysicalVerification_PUT_credentialLevel(struct zx_ac_PhysicalVerification_s* x, struct zx_str* y);





#endif
/* -------------------------- ac_PreviousSession -------------------------- */
/* refby( zx_ac_Authenticator_s ) */
#ifndef zx_ac_PreviousSession_EXT
#define zx_ac_PreviousSession_EXT
#endif

struct zx_ac_PreviousSession_s* zx_DEC_ac_PreviousSession(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_PreviousSession_s* zx_NEW_ac_PreviousSession(struct zx_ctx* c);
void zx_FREE_ac_PreviousSession(struct zx_ctx* c, struct zx_ac_PreviousSession_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_PreviousSession_s* zx_DEEP_CLONE_ac_PreviousSession(struct zx_ctx* c, struct zx_ac_PreviousSession_s* x, int dup_strs);
void zx_DUP_STRS_ac_PreviousSession(struct zx_ctx* c, struct zx_ac_PreviousSession_s* x);
int zx_WALK_SO_ac_PreviousSession(struct zx_ctx* c, struct zx_ac_PreviousSession_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_PreviousSession(struct zx_ctx* c, struct zx_ac_PreviousSession_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_PreviousSession(struct zx_ctx* c, struct zx_ac_PreviousSession_s* x);
int zx_LEN_WO_ac_PreviousSession(struct zx_ctx* c, struct zx_ac_PreviousSession_s* x);
char* zx_ENC_SO_ac_PreviousSession(struct zx_ctx* c, struct zx_ac_PreviousSession_s* x, char* p);
char* zx_ENC_WO_ac_PreviousSession(struct zx_ctx* c, struct zx_ac_PreviousSession_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_PreviousSession(struct zx_ctx* c, struct zx_ac_PreviousSession_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_PreviousSession(struct zx_ctx* c, struct zx_ac_PreviousSession_s* x);

struct zx_ac_PreviousSession_s {
  ZX_ELEM_EXT
  zx_ac_PreviousSession_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_Extension_s* zx_ac_PreviousSession_GET_Extension(struct zx_ac_PreviousSession_s* x, int n);

int zx_ac_PreviousSession_NUM_Extension(struct zx_ac_PreviousSession_s* x);

struct zx_ac_Extension_s* zx_ac_PreviousSession_POP_Extension(struct zx_ac_PreviousSession_s* x);

void zx_ac_PreviousSession_PUSH_Extension(struct zx_ac_PreviousSession_s* x, struct zx_ac_Extension_s* y);


void zx_ac_PreviousSession_PUT_Extension(struct zx_ac_PreviousSession_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_PreviousSession_ADD_Extension(struct zx_ac_PreviousSession_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_PreviousSession_DEL_Extension(struct zx_ac_PreviousSession_s* x, int n);

void zx_ac_PreviousSession_REV_Extension(struct zx_ac_PreviousSession_s* x);

#endif
/* -------------------------- ac_PrincipalAuthenticationMechanism -------------------------- */
/* refby( zx_ac_AuthenticationMethod_s ) */
#ifndef zx_ac_PrincipalAuthenticationMechanism_EXT
#define zx_ac_PrincipalAuthenticationMechanism_EXT
#endif

struct zx_ac_PrincipalAuthenticationMechanism_s* zx_DEC_ac_PrincipalAuthenticationMechanism(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_PrincipalAuthenticationMechanism_s* zx_NEW_ac_PrincipalAuthenticationMechanism(struct zx_ctx* c);
void zx_FREE_ac_PrincipalAuthenticationMechanism(struct zx_ctx* c, struct zx_ac_PrincipalAuthenticationMechanism_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_PrincipalAuthenticationMechanism_s* zx_DEEP_CLONE_ac_PrincipalAuthenticationMechanism(struct zx_ctx* c, struct zx_ac_PrincipalAuthenticationMechanism_s* x, int dup_strs);
void zx_DUP_STRS_ac_PrincipalAuthenticationMechanism(struct zx_ctx* c, struct zx_ac_PrincipalAuthenticationMechanism_s* x);
int zx_WALK_SO_ac_PrincipalAuthenticationMechanism(struct zx_ctx* c, struct zx_ac_PrincipalAuthenticationMechanism_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_PrincipalAuthenticationMechanism(struct zx_ctx* c, struct zx_ac_PrincipalAuthenticationMechanism_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_PrincipalAuthenticationMechanism(struct zx_ctx* c, struct zx_ac_PrincipalAuthenticationMechanism_s* x);
int zx_LEN_WO_ac_PrincipalAuthenticationMechanism(struct zx_ctx* c, struct zx_ac_PrincipalAuthenticationMechanism_s* x);
char* zx_ENC_SO_ac_PrincipalAuthenticationMechanism(struct zx_ctx* c, struct zx_ac_PrincipalAuthenticationMechanism_s* x, char* p);
char* zx_ENC_WO_ac_PrincipalAuthenticationMechanism(struct zx_ctx* c, struct zx_ac_PrincipalAuthenticationMechanism_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_PrincipalAuthenticationMechanism(struct zx_ctx* c, struct zx_ac_PrincipalAuthenticationMechanism_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_PrincipalAuthenticationMechanism(struct zx_ctx* c, struct zx_ac_PrincipalAuthenticationMechanism_s* x);

struct zx_ac_PrincipalAuthenticationMechanism_s {
  ZX_ELEM_EXT
  zx_ac_PrincipalAuthenticationMechanism_EXT
  struct zx_ac_Password_s* Password;	/* {0,1} nada */
  struct zx_ac_Token_s* Token;	/* {0,1} nada */
  struct zx_ac_Smartcard_s* Smartcard;	/* {0,1}  */
  struct zx_ac_ActivationPin_s* ActivationPin;	/* {0,1} nada */
  struct zx_ac_Extension_s* Extension;	/* {1,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_Password_s* zx_ac_PrincipalAuthenticationMechanism_GET_Password(struct zx_ac_PrincipalAuthenticationMechanism_s* x, int n);
struct zx_ac_Token_s* zx_ac_PrincipalAuthenticationMechanism_GET_Token(struct zx_ac_PrincipalAuthenticationMechanism_s* x, int n);
struct zx_ac_Smartcard_s* zx_ac_PrincipalAuthenticationMechanism_GET_Smartcard(struct zx_ac_PrincipalAuthenticationMechanism_s* x, int n);
struct zx_ac_ActivationPin_s* zx_ac_PrincipalAuthenticationMechanism_GET_ActivationPin(struct zx_ac_PrincipalAuthenticationMechanism_s* x, int n);
struct zx_ac_Extension_s* zx_ac_PrincipalAuthenticationMechanism_GET_Extension(struct zx_ac_PrincipalAuthenticationMechanism_s* x, int n);

int zx_ac_PrincipalAuthenticationMechanism_NUM_Password(struct zx_ac_PrincipalAuthenticationMechanism_s* x);
int zx_ac_PrincipalAuthenticationMechanism_NUM_Token(struct zx_ac_PrincipalAuthenticationMechanism_s* x);
int zx_ac_PrincipalAuthenticationMechanism_NUM_Smartcard(struct zx_ac_PrincipalAuthenticationMechanism_s* x);
int zx_ac_PrincipalAuthenticationMechanism_NUM_ActivationPin(struct zx_ac_PrincipalAuthenticationMechanism_s* x);
int zx_ac_PrincipalAuthenticationMechanism_NUM_Extension(struct zx_ac_PrincipalAuthenticationMechanism_s* x);

struct zx_ac_Password_s* zx_ac_PrincipalAuthenticationMechanism_POP_Password(struct zx_ac_PrincipalAuthenticationMechanism_s* x);
struct zx_ac_Token_s* zx_ac_PrincipalAuthenticationMechanism_POP_Token(struct zx_ac_PrincipalAuthenticationMechanism_s* x);
struct zx_ac_Smartcard_s* zx_ac_PrincipalAuthenticationMechanism_POP_Smartcard(struct zx_ac_PrincipalAuthenticationMechanism_s* x);
struct zx_ac_ActivationPin_s* zx_ac_PrincipalAuthenticationMechanism_POP_ActivationPin(struct zx_ac_PrincipalAuthenticationMechanism_s* x);
struct zx_ac_Extension_s* zx_ac_PrincipalAuthenticationMechanism_POP_Extension(struct zx_ac_PrincipalAuthenticationMechanism_s* x);

void zx_ac_PrincipalAuthenticationMechanism_PUSH_Password(struct zx_ac_PrincipalAuthenticationMechanism_s* x, struct zx_ac_Password_s* y);
void zx_ac_PrincipalAuthenticationMechanism_PUSH_Token(struct zx_ac_PrincipalAuthenticationMechanism_s* x, struct zx_ac_Token_s* y);
void zx_ac_PrincipalAuthenticationMechanism_PUSH_Smartcard(struct zx_ac_PrincipalAuthenticationMechanism_s* x, struct zx_ac_Smartcard_s* y);
void zx_ac_PrincipalAuthenticationMechanism_PUSH_ActivationPin(struct zx_ac_PrincipalAuthenticationMechanism_s* x, struct zx_ac_ActivationPin_s* y);
void zx_ac_PrincipalAuthenticationMechanism_PUSH_Extension(struct zx_ac_PrincipalAuthenticationMechanism_s* x, struct zx_ac_Extension_s* y);


void zx_ac_PrincipalAuthenticationMechanism_PUT_Password(struct zx_ac_PrincipalAuthenticationMechanism_s* x, int n, struct zx_ac_Password_s* y);
void zx_ac_PrincipalAuthenticationMechanism_PUT_Token(struct zx_ac_PrincipalAuthenticationMechanism_s* x, int n, struct zx_ac_Token_s* y);
void zx_ac_PrincipalAuthenticationMechanism_PUT_Smartcard(struct zx_ac_PrincipalAuthenticationMechanism_s* x, int n, struct zx_ac_Smartcard_s* y);
void zx_ac_PrincipalAuthenticationMechanism_PUT_ActivationPin(struct zx_ac_PrincipalAuthenticationMechanism_s* x, int n, struct zx_ac_ActivationPin_s* y);
void zx_ac_PrincipalAuthenticationMechanism_PUT_Extension(struct zx_ac_PrincipalAuthenticationMechanism_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_PrincipalAuthenticationMechanism_ADD_Password(struct zx_ac_PrincipalAuthenticationMechanism_s* x, int n, struct zx_ac_Password_s* z);
void zx_ac_PrincipalAuthenticationMechanism_ADD_Token(struct zx_ac_PrincipalAuthenticationMechanism_s* x, int n, struct zx_ac_Token_s* z);
void zx_ac_PrincipalAuthenticationMechanism_ADD_Smartcard(struct zx_ac_PrincipalAuthenticationMechanism_s* x, int n, struct zx_ac_Smartcard_s* z);
void zx_ac_PrincipalAuthenticationMechanism_ADD_ActivationPin(struct zx_ac_PrincipalAuthenticationMechanism_s* x, int n, struct zx_ac_ActivationPin_s* z);
void zx_ac_PrincipalAuthenticationMechanism_ADD_Extension(struct zx_ac_PrincipalAuthenticationMechanism_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_PrincipalAuthenticationMechanism_DEL_Password(struct zx_ac_PrincipalAuthenticationMechanism_s* x, int n);
void zx_ac_PrincipalAuthenticationMechanism_DEL_Token(struct zx_ac_PrincipalAuthenticationMechanism_s* x, int n);
void zx_ac_PrincipalAuthenticationMechanism_DEL_Smartcard(struct zx_ac_PrincipalAuthenticationMechanism_s* x, int n);
void zx_ac_PrincipalAuthenticationMechanism_DEL_ActivationPin(struct zx_ac_PrincipalAuthenticationMechanism_s* x, int n);
void zx_ac_PrincipalAuthenticationMechanism_DEL_Extension(struct zx_ac_PrincipalAuthenticationMechanism_s* x, int n);

void zx_ac_PrincipalAuthenticationMechanism_REV_Password(struct zx_ac_PrincipalAuthenticationMechanism_s* x);
void zx_ac_PrincipalAuthenticationMechanism_REV_Token(struct zx_ac_PrincipalAuthenticationMechanism_s* x);
void zx_ac_PrincipalAuthenticationMechanism_REV_Smartcard(struct zx_ac_PrincipalAuthenticationMechanism_s* x);
void zx_ac_PrincipalAuthenticationMechanism_REV_ActivationPin(struct zx_ac_PrincipalAuthenticationMechanism_s* x);
void zx_ac_PrincipalAuthenticationMechanism_REV_Extension(struct zx_ac_PrincipalAuthenticationMechanism_s* x);

#endif
/* -------------------------- ac_PrivateKeyProtection -------------------------- */
/* refby( zx_ac_TechnicalProtection_s ) */
#ifndef zx_ac_PrivateKeyProtection_EXT
#define zx_ac_PrivateKeyProtection_EXT
#endif

struct zx_ac_PrivateKeyProtection_s* zx_DEC_ac_PrivateKeyProtection(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_PrivateKeyProtection_s* zx_NEW_ac_PrivateKeyProtection(struct zx_ctx* c);
void zx_FREE_ac_PrivateKeyProtection(struct zx_ctx* c, struct zx_ac_PrivateKeyProtection_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_PrivateKeyProtection_s* zx_DEEP_CLONE_ac_PrivateKeyProtection(struct zx_ctx* c, struct zx_ac_PrivateKeyProtection_s* x, int dup_strs);
void zx_DUP_STRS_ac_PrivateKeyProtection(struct zx_ctx* c, struct zx_ac_PrivateKeyProtection_s* x);
int zx_WALK_SO_ac_PrivateKeyProtection(struct zx_ctx* c, struct zx_ac_PrivateKeyProtection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_PrivateKeyProtection(struct zx_ctx* c, struct zx_ac_PrivateKeyProtection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_PrivateKeyProtection(struct zx_ctx* c, struct zx_ac_PrivateKeyProtection_s* x);
int zx_LEN_WO_ac_PrivateKeyProtection(struct zx_ctx* c, struct zx_ac_PrivateKeyProtection_s* x);
char* zx_ENC_SO_ac_PrivateKeyProtection(struct zx_ctx* c, struct zx_ac_PrivateKeyProtection_s* x, char* p);
char* zx_ENC_WO_ac_PrivateKeyProtection(struct zx_ctx* c, struct zx_ac_PrivateKeyProtection_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_PrivateKeyProtection(struct zx_ctx* c, struct zx_ac_PrivateKeyProtection_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_PrivateKeyProtection(struct zx_ctx* c, struct zx_ac_PrivateKeyProtection_s* x);

struct zx_ac_PrivateKeyProtection_s {
  ZX_ELEM_EXT
  zx_ac_PrivateKeyProtection_EXT
  struct zx_ac_KeyActivation_s* KeyActivation;	/* {0,1} nada */
  struct zx_ac_KeyStorage_s* KeyStorage;	/* {0,1}  */
  struct zx_ac_KeySharing_s* KeySharing;	/* {0,1}  */
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_KeyActivation_s* zx_ac_PrivateKeyProtection_GET_KeyActivation(struct zx_ac_PrivateKeyProtection_s* x, int n);
struct zx_ac_KeyStorage_s* zx_ac_PrivateKeyProtection_GET_KeyStorage(struct zx_ac_PrivateKeyProtection_s* x, int n);
struct zx_ac_KeySharing_s* zx_ac_PrivateKeyProtection_GET_KeySharing(struct zx_ac_PrivateKeyProtection_s* x, int n);
struct zx_ac_Extension_s* zx_ac_PrivateKeyProtection_GET_Extension(struct zx_ac_PrivateKeyProtection_s* x, int n);

int zx_ac_PrivateKeyProtection_NUM_KeyActivation(struct zx_ac_PrivateKeyProtection_s* x);
int zx_ac_PrivateKeyProtection_NUM_KeyStorage(struct zx_ac_PrivateKeyProtection_s* x);
int zx_ac_PrivateKeyProtection_NUM_KeySharing(struct zx_ac_PrivateKeyProtection_s* x);
int zx_ac_PrivateKeyProtection_NUM_Extension(struct zx_ac_PrivateKeyProtection_s* x);

struct zx_ac_KeyActivation_s* zx_ac_PrivateKeyProtection_POP_KeyActivation(struct zx_ac_PrivateKeyProtection_s* x);
struct zx_ac_KeyStorage_s* zx_ac_PrivateKeyProtection_POP_KeyStorage(struct zx_ac_PrivateKeyProtection_s* x);
struct zx_ac_KeySharing_s* zx_ac_PrivateKeyProtection_POP_KeySharing(struct zx_ac_PrivateKeyProtection_s* x);
struct zx_ac_Extension_s* zx_ac_PrivateKeyProtection_POP_Extension(struct zx_ac_PrivateKeyProtection_s* x);

void zx_ac_PrivateKeyProtection_PUSH_KeyActivation(struct zx_ac_PrivateKeyProtection_s* x, struct zx_ac_KeyActivation_s* y);
void zx_ac_PrivateKeyProtection_PUSH_KeyStorage(struct zx_ac_PrivateKeyProtection_s* x, struct zx_ac_KeyStorage_s* y);
void zx_ac_PrivateKeyProtection_PUSH_KeySharing(struct zx_ac_PrivateKeyProtection_s* x, struct zx_ac_KeySharing_s* y);
void zx_ac_PrivateKeyProtection_PUSH_Extension(struct zx_ac_PrivateKeyProtection_s* x, struct zx_ac_Extension_s* y);


void zx_ac_PrivateKeyProtection_PUT_KeyActivation(struct zx_ac_PrivateKeyProtection_s* x, int n, struct zx_ac_KeyActivation_s* y);
void zx_ac_PrivateKeyProtection_PUT_KeyStorage(struct zx_ac_PrivateKeyProtection_s* x, int n, struct zx_ac_KeyStorage_s* y);
void zx_ac_PrivateKeyProtection_PUT_KeySharing(struct zx_ac_PrivateKeyProtection_s* x, int n, struct zx_ac_KeySharing_s* y);
void zx_ac_PrivateKeyProtection_PUT_Extension(struct zx_ac_PrivateKeyProtection_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_PrivateKeyProtection_ADD_KeyActivation(struct zx_ac_PrivateKeyProtection_s* x, int n, struct zx_ac_KeyActivation_s* z);
void zx_ac_PrivateKeyProtection_ADD_KeyStorage(struct zx_ac_PrivateKeyProtection_s* x, int n, struct zx_ac_KeyStorage_s* z);
void zx_ac_PrivateKeyProtection_ADD_KeySharing(struct zx_ac_PrivateKeyProtection_s* x, int n, struct zx_ac_KeySharing_s* z);
void zx_ac_PrivateKeyProtection_ADD_Extension(struct zx_ac_PrivateKeyProtection_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_PrivateKeyProtection_DEL_KeyActivation(struct zx_ac_PrivateKeyProtection_s* x, int n);
void zx_ac_PrivateKeyProtection_DEL_KeyStorage(struct zx_ac_PrivateKeyProtection_s* x, int n);
void zx_ac_PrivateKeyProtection_DEL_KeySharing(struct zx_ac_PrivateKeyProtection_s* x, int n);
void zx_ac_PrivateKeyProtection_DEL_Extension(struct zx_ac_PrivateKeyProtection_s* x, int n);

void zx_ac_PrivateKeyProtection_REV_KeyActivation(struct zx_ac_PrivateKeyProtection_s* x);
void zx_ac_PrivateKeyProtection_REV_KeyStorage(struct zx_ac_PrivateKeyProtection_s* x);
void zx_ac_PrivateKeyProtection_REV_KeySharing(struct zx_ac_PrivateKeyProtection_s* x);
void zx_ac_PrivateKeyProtection_REV_Extension(struct zx_ac_PrivateKeyProtection_s* x);

#endif
/* -------------------------- ac_ResumeSession -------------------------- */
/* refby( zx_ac_Authenticator_s ) */
#ifndef zx_ac_ResumeSession_EXT
#define zx_ac_ResumeSession_EXT
#endif

struct zx_ac_ResumeSession_s* zx_DEC_ac_ResumeSession(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_ResumeSession_s* zx_NEW_ac_ResumeSession(struct zx_ctx* c);
void zx_FREE_ac_ResumeSession(struct zx_ctx* c, struct zx_ac_ResumeSession_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_ResumeSession_s* zx_DEEP_CLONE_ac_ResumeSession(struct zx_ctx* c, struct zx_ac_ResumeSession_s* x, int dup_strs);
void zx_DUP_STRS_ac_ResumeSession(struct zx_ctx* c, struct zx_ac_ResumeSession_s* x);
int zx_WALK_SO_ac_ResumeSession(struct zx_ctx* c, struct zx_ac_ResumeSession_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_ResumeSession(struct zx_ctx* c, struct zx_ac_ResumeSession_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_ResumeSession(struct zx_ctx* c, struct zx_ac_ResumeSession_s* x);
int zx_LEN_WO_ac_ResumeSession(struct zx_ctx* c, struct zx_ac_ResumeSession_s* x);
char* zx_ENC_SO_ac_ResumeSession(struct zx_ctx* c, struct zx_ac_ResumeSession_s* x, char* p);
char* zx_ENC_WO_ac_ResumeSession(struct zx_ctx* c, struct zx_ac_ResumeSession_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_ResumeSession(struct zx_ctx* c, struct zx_ac_ResumeSession_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_ResumeSession(struct zx_ctx* c, struct zx_ac_ResumeSession_s* x);

struct zx_ac_ResumeSession_s {
  ZX_ELEM_EXT
  zx_ac_ResumeSession_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_Extension_s* zx_ac_ResumeSession_GET_Extension(struct zx_ac_ResumeSession_s* x, int n);

int zx_ac_ResumeSession_NUM_Extension(struct zx_ac_ResumeSession_s* x);

struct zx_ac_Extension_s* zx_ac_ResumeSession_POP_Extension(struct zx_ac_ResumeSession_s* x);

void zx_ac_ResumeSession_PUSH_Extension(struct zx_ac_ResumeSession_s* x, struct zx_ac_Extension_s* y);


void zx_ac_ResumeSession_PUT_Extension(struct zx_ac_ResumeSession_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_ResumeSession_ADD_Extension(struct zx_ac_ResumeSession_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_ResumeSession_DEL_Extension(struct zx_ac_ResumeSession_s* x, int n);

void zx_ac_ResumeSession_REV_Extension(struct zx_ac_ResumeSession_s* x);

#endif
/* -------------------------- ac_SSL -------------------------- */
/* refby( zx_ac_AuthenticatorTransportProtocol_s ) */
#ifndef zx_ac_SSL_EXT
#define zx_ac_SSL_EXT
#endif

struct zx_ac_SSL_s* zx_DEC_ac_SSL(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_SSL_s* zx_NEW_ac_SSL(struct zx_ctx* c);
void zx_FREE_ac_SSL(struct zx_ctx* c, struct zx_ac_SSL_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_SSL_s* zx_DEEP_CLONE_ac_SSL(struct zx_ctx* c, struct zx_ac_SSL_s* x, int dup_strs);
void zx_DUP_STRS_ac_SSL(struct zx_ctx* c, struct zx_ac_SSL_s* x);
int zx_WALK_SO_ac_SSL(struct zx_ctx* c, struct zx_ac_SSL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_SSL(struct zx_ctx* c, struct zx_ac_SSL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_SSL(struct zx_ctx* c, struct zx_ac_SSL_s* x);
int zx_LEN_WO_ac_SSL(struct zx_ctx* c, struct zx_ac_SSL_s* x);
char* zx_ENC_SO_ac_SSL(struct zx_ctx* c, struct zx_ac_SSL_s* x, char* p);
char* zx_ENC_WO_ac_SSL(struct zx_ctx* c, struct zx_ac_SSL_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_SSL(struct zx_ctx* c, struct zx_ac_SSL_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_SSL(struct zx_ctx* c, struct zx_ac_SSL_s* x);

struct zx_ac_SSL_s {
  ZX_ELEM_EXT
  zx_ac_SSL_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_Extension_s* zx_ac_SSL_GET_Extension(struct zx_ac_SSL_s* x, int n);

int zx_ac_SSL_NUM_Extension(struct zx_ac_SSL_s* x);

struct zx_ac_Extension_s* zx_ac_SSL_POP_Extension(struct zx_ac_SSL_s* x);

void zx_ac_SSL_PUSH_Extension(struct zx_ac_SSL_s* x, struct zx_ac_Extension_s* y);


void zx_ac_SSL_PUT_Extension(struct zx_ac_SSL_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_SSL_ADD_Extension(struct zx_ac_SSL_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_SSL_DEL_Extension(struct zx_ac_SSL_s* x, int n);

void zx_ac_SSL_REV_Extension(struct zx_ac_SSL_s* x);

#endif
/* -------------------------- ac_SecretKeyProtection -------------------------- */
/* refby( zx_ac_TechnicalProtection_s ) */
#ifndef zx_ac_SecretKeyProtection_EXT
#define zx_ac_SecretKeyProtection_EXT
#endif

struct zx_ac_SecretKeyProtection_s* zx_DEC_ac_SecretKeyProtection(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_SecretKeyProtection_s* zx_NEW_ac_SecretKeyProtection(struct zx_ctx* c);
void zx_FREE_ac_SecretKeyProtection(struct zx_ctx* c, struct zx_ac_SecretKeyProtection_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_SecretKeyProtection_s* zx_DEEP_CLONE_ac_SecretKeyProtection(struct zx_ctx* c, struct zx_ac_SecretKeyProtection_s* x, int dup_strs);
void zx_DUP_STRS_ac_SecretKeyProtection(struct zx_ctx* c, struct zx_ac_SecretKeyProtection_s* x);
int zx_WALK_SO_ac_SecretKeyProtection(struct zx_ctx* c, struct zx_ac_SecretKeyProtection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_SecretKeyProtection(struct zx_ctx* c, struct zx_ac_SecretKeyProtection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_SecretKeyProtection(struct zx_ctx* c, struct zx_ac_SecretKeyProtection_s* x);
int zx_LEN_WO_ac_SecretKeyProtection(struct zx_ctx* c, struct zx_ac_SecretKeyProtection_s* x);
char* zx_ENC_SO_ac_SecretKeyProtection(struct zx_ctx* c, struct zx_ac_SecretKeyProtection_s* x, char* p);
char* zx_ENC_WO_ac_SecretKeyProtection(struct zx_ctx* c, struct zx_ac_SecretKeyProtection_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_SecretKeyProtection(struct zx_ctx* c, struct zx_ac_SecretKeyProtection_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_SecretKeyProtection(struct zx_ctx* c, struct zx_ac_SecretKeyProtection_s* x);

struct zx_ac_SecretKeyProtection_s {
  ZX_ELEM_EXT
  zx_ac_SecretKeyProtection_EXT
  struct zx_ac_KeyActivation_s* KeyActivation;	/* {0,1} nada */
  struct zx_ac_KeyStorage_s* KeyStorage;	/* {0,1}  */
  struct zx_ac_Extension_s* Extension;	/* {1,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_KeyActivation_s* zx_ac_SecretKeyProtection_GET_KeyActivation(struct zx_ac_SecretKeyProtection_s* x, int n);
struct zx_ac_KeyStorage_s* zx_ac_SecretKeyProtection_GET_KeyStorage(struct zx_ac_SecretKeyProtection_s* x, int n);
struct zx_ac_Extension_s* zx_ac_SecretKeyProtection_GET_Extension(struct zx_ac_SecretKeyProtection_s* x, int n);

int zx_ac_SecretKeyProtection_NUM_KeyActivation(struct zx_ac_SecretKeyProtection_s* x);
int zx_ac_SecretKeyProtection_NUM_KeyStorage(struct zx_ac_SecretKeyProtection_s* x);
int zx_ac_SecretKeyProtection_NUM_Extension(struct zx_ac_SecretKeyProtection_s* x);

struct zx_ac_KeyActivation_s* zx_ac_SecretKeyProtection_POP_KeyActivation(struct zx_ac_SecretKeyProtection_s* x);
struct zx_ac_KeyStorage_s* zx_ac_SecretKeyProtection_POP_KeyStorage(struct zx_ac_SecretKeyProtection_s* x);
struct zx_ac_Extension_s* zx_ac_SecretKeyProtection_POP_Extension(struct zx_ac_SecretKeyProtection_s* x);

void zx_ac_SecretKeyProtection_PUSH_KeyActivation(struct zx_ac_SecretKeyProtection_s* x, struct zx_ac_KeyActivation_s* y);
void zx_ac_SecretKeyProtection_PUSH_KeyStorage(struct zx_ac_SecretKeyProtection_s* x, struct zx_ac_KeyStorage_s* y);
void zx_ac_SecretKeyProtection_PUSH_Extension(struct zx_ac_SecretKeyProtection_s* x, struct zx_ac_Extension_s* y);


void zx_ac_SecretKeyProtection_PUT_KeyActivation(struct zx_ac_SecretKeyProtection_s* x, int n, struct zx_ac_KeyActivation_s* y);
void zx_ac_SecretKeyProtection_PUT_KeyStorage(struct zx_ac_SecretKeyProtection_s* x, int n, struct zx_ac_KeyStorage_s* y);
void zx_ac_SecretKeyProtection_PUT_Extension(struct zx_ac_SecretKeyProtection_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_SecretKeyProtection_ADD_KeyActivation(struct zx_ac_SecretKeyProtection_s* x, int n, struct zx_ac_KeyActivation_s* z);
void zx_ac_SecretKeyProtection_ADD_KeyStorage(struct zx_ac_SecretKeyProtection_s* x, int n, struct zx_ac_KeyStorage_s* z);
void zx_ac_SecretKeyProtection_ADD_Extension(struct zx_ac_SecretKeyProtection_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_SecretKeyProtection_DEL_KeyActivation(struct zx_ac_SecretKeyProtection_s* x, int n);
void zx_ac_SecretKeyProtection_DEL_KeyStorage(struct zx_ac_SecretKeyProtection_s* x, int n);
void zx_ac_SecretKeyProtection_DEL_Extension(struct zx_ac_SecretKeyProtection_s* x, int n);

void zx_ac_SecretKeyProtection_REV_KeyActivation(struct zx_ac_SecretKeyProtection_s* x);
void zx_ac_SecretKeyProtection_REV_KeyStorage(struct zx_ac_SecretKeyProtection_s* x);
void zx_ac_SecretKeyProtection_REV_Extension(struct zx_ac_SecretKeyProtection_s* x);

#endif
/* -------------------------- ac_SecurityAudit -------------------------- */
/* refby( zx_ac_OperationalProtection_s ) */
#ifndef zx_ac_SecurityAudit_EXT
#define zx_ac_SecurityAudit_EXT
#endif

struct zx_ac_SecurityAudit_s* zx_DEC_ac_SecurityAudit(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_SecurityAudit_s* zx_NEW_ac_SecurityAudit(struct zx_ctx* c);
void zx_FREE_ac_SecurityAudit(struct zx_ctx* c, struct zx_ac_SecurityAudit_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_SecurityAudit_s* zx_DEEP_CLONE_ac_SecurityAudit(struct zx_ctx* c, struct zx_ac_SecurityAudit_s* x, int dup_strs);
void zx_DUP_STRS_ac_SecurityAudit(struct zx_ctx* c, struct zx_ac_SecurityAudit_s* x);
int zx_WALK_SO_ac_SecurityAudit(struct zx_ctx* c, struct zx_ac_SecurityAudit_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_SecurityAudit(struct zx_ctx* c, struct zx_ac_SecurityAudit_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_SecurityAudit(struct zx_ctx* c, struct zx_ac_SecurityAudit_s* x);
int zx_LEN_WO_ac_SecurityAudit(struct zx_ctx* c, struct zx_ac_SecurityAudit_s* x);
char* zx_ENC_SO_ac_SecurityAudit(struct zx_ctx* c, struct zx_ac_SecurityAudit_s* x, char* p);
char* zx_ENC_WO_ac_SecurityAudit(struct zx_ctx* c, struct zx_ac_SecurityAudit_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_SecurityAudit(struct zx_ctx* c, struct zx_ac_SecurityAudit_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_SecurityAudit(struct zx_ctx* c, struct zx_ac_SecurityAudit_s* x);

struct zx_ac_SecurityAudit_s {
  ZX_ELEM_EXT
  zx_ac_SecurityAudit_EXT
  struct zx_ac_SwitchAudit_s* SwitchAudit;	/* {0,1}  */
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_SwitchAudit_s* zx_ac_SecurityAudit_GET_SwitchAudit(struct zx_ac_SecurityAudit_s* x, int n);
struct zx_ac_Extension_s* zx_ac_SecurityAudit_GET_Extension(struct zx_ac_SecurityAudit_s* x, int n);

int zx_ac_SecurityAudit_NUM_SwitchAudit(struct zx_ac_SecurityAudit_s* x);
int zx_ac_SecurityAudit_NUM_Extension(struct zx_ac_SecurityAudit_s* x);

struct zx_ac_SwitchAudit_s* zx_ac_SecurityAudit_POP_SwitchAudit(struct zx_ac_SecurityAudit_s* x);
struct zx_ac_Extension_s* zx_ac_SecurityAudit_POP_Extension(struct zx_ac_SecurityAudit_s* x);

void zx_ac_SecurityAudit_PUSH_SwitchAudit(struct zx_ac_SecurityAudit_s* x, struct zx_ac_SwitchAudit_s* y);
void zx_ac_SecurityAudit_PUSH_Extension(struct zx_ac_SecurityAudit_s* x, struct zx_ac_Extension_s* y);


void zx_ac_SecurityAudit_PUT_SwitchAudit(struct zx_ac_SecurityAudit_s* x, int n, struct zx_ac_SwitchAudit_s* y);
void zx_ac_SecurityAudit_PUT_Extension(struct zx_ac_SecurityAudit_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_SecurityAudit_ADD_SwitchAudit(struct zx_ac_SecurityAudit_s* x, int n, struct zx_ac_SwitchAudit_s* z);
void zx_ac_SecurityAudit_ADD_Extension(struct zx_ac_SecurityAudit_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_SecurityAudit_DEL_SwitchAudit(struct zx_ac_SecurityAudit_s* x, int n);
void zx_ac_SecurityAudit_DEL_Extension(struct zx_ac_SecurityAudit_s* x, int n);

void zx_ac_SecurityAudit_REV_SwitchAudit(struct zx_ac_SecurityAudit_s* x);
void zx_ac_SecurityAudit_REV_Extension(struct zx_ac_SecurityAudit_s* x);

#endif
/* -------------------------- ac_SharedSecretChallengeResponse -------------------------- */
/* refby( zx_ac_Authenticator_s ) */
#ifndef zx_ac_SharedSecretChallengeResponse_EXT
#define zx_ac_SharedSecretChallengeResponse_EXT
#endif

struct zx_ac_SharedSecretChallengeResponse_s* zx_DEC_ac_SharedSecretChallengeResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_SharedSecretChallengeResponse_s* zx_NEW_ac_SharedSecretChallengeResponse(struct zx_ctx* c);
void zx_FREE_ac_SharedSecretChallengeResponse(struct zx_ctx* c, struct zx_ac_SharedSecretChallengeResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_SharedSecretChallengeResponse_s* zx_DEEP_CLONE_ac_SharedSecretChallengeResponse(struct zx_ctx* c, struct zx_ac_SharedSecretChallengeResponse_s* x, int dup_strs);
void zx_DUP_STRS_ac_SharedSecretChallengeResponse(struct zx_ctx* c, struct zx_ac_SharedSecretChallengeResponse_s* x);
int zx_WALK_SO_ac_SharedSecretChallengeResponse(struct zx_ctx* c, struct zx_ac_SharedSecretChallengeResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_SharedSecretChallengeResponse(struct zx_ctx* c, struct zx_ac_SharedSecretChallengeResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_SharedSecretChallengeResponse(struct zx_ctx* c, struct zx_ac_SharedSecretChallengeResponse_s* x);
int zx_LEN_WO_ac_SharedSecretChallengeResponse(struct zx_ctx* c, struct zx_ac_SharedSecretChallengeResponse_s* x);
char* zx_ENC_SO_ac_SharedSecretChallengeResponse(struct zx_ctx* c, struct zx_ac_SharedSecretChallengeResponse_s* x, char* p);
char* zx_ENC_WO_ac_SharedSecretChallengeResponse(struct zx_ctx* c, struct zx_ac_SharedSecretChallengeResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_SharedSecretChallengeResponse(struct zx_ctx* c, struct zx_ac_SharedSecretChallengeResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_SharedSecretChallengeResponse(struct zx_ctx* c, struct zx_ac_SharedSecretChallengeResponse_s* x);

struct zx_ac_SharedSecretChallengeResponse_s {
  ZX_ELEM_EXT
  zx_ac_SharedSecretChallengeResponse_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_Extension_s* zx_ac_SharedSecretChallengeResponse_GET_Extension(struct zx_ac_SharedSecretChallengeResponse_s* x, int n);

int zx_ac_SharedSecretChallengeResponse_NUM_Extension(struct zx_ac_SharedSecretChallengeResponse_s* x);

struct zx_ac_Extension_s* zx_ac_SharedSecretChallengeResponse_POP_Extension(struct zx_ac_SharedSecretChallengeResponse_s* x);

void zx_ac_SharedSecretChallengeResponse_PUSH_Extension(struct zx_ac_SharedSecretChallengeResponse_s* x, struct zx_ac_Extension_s* y);


void zx_ac_SharedSecretChallengeResponse_PUT_Extension(struct zx_ac_SharedSecretChallengeResponse_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_SharedSecretChallengeResponse_ADD_Extension(struct zx_ac_SharedSecretChallengeResponse_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_SharedSecretChallengeResponse_DEL_Extension(struct zx_ac_SharedSecretChallengeResponse_s* x, int n);

void zx_ac_SharedSecretChallengeResponse_REV_Extension(struct zx_ac_SharedSecretChallengeResponse_s* x);

#endif
/* -------------------------- ac_SharedSecretDynamicPlaintext -------------------------- */
/* refby( zx_ac_Authenticator_s ) */
#ifndef zx_ac_SharedSecretDynamicPlaintext_EXT
#define zx_ac_SharedSecretDynamicPlaintext_EXT
#endif

struct zx_ac_SharedSecretDynamicPlaintext_s* zx_DEC_ac_SharedSecretDynamicPlaintext(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_SharedSecretDynamicPlaintext_s* zx_NEW_ac_SharedSecretDynamicPlaintext(struct zx_ctx* c);
void zx_FREE_ac_SharedSecretDynamicPlaintext(struct zx_ctx* c, struct zx_ac_SharedSecretDynamicPlaintext_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_SharedSecretDynamicPlaintext_s* zx_DEEP_CLONE_ac_SharedSecretDynamicPlaintext(struct zx_ctx* c, struct zx_ac_SharedSecretDynamicPlaintext_s* x, int dup_strs);
void zx_DUP_STRS_ac_SharedSecretDynamicPlaintext(struct zx_ctx* c, struct zx_ac_SharedSecretDynamicPlaintext_s* x);
int zx_WALK_SO_ac_SharedSecretDynamicPlaintext(struct zx_ctx* c, struct zx_ac_SharedSecretDynamicPlaintext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_SharedSecretDynamicPlaintext(struct zx_ctx* c, struct zx_ac_SharedSecretDynamicPlaintext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_SharedSecretDynamicPlaintext(struct zx_ctx* c, struct zx_ac_SharedSecretDynamicPlaintext_s* x);
int zx_LEN_WO_ac_SharedSecretDynamicPlaintext(struct zx_ctx* c, struct zx_ac_SharedSecretDynamicPlaintext_s* x);
char* zx_ENC_SO_ac_SharedSecretDynamicPlaintext(struct zx_ctx* c, struct zx_ac_SharedSecretDynamicPlaintext_s* x, char* p);
char* zx_ENC_WO_ac_SharedSecretDynamicPlaintext(struct zx_ctx* c, struct zx_ac_SharedSecretDynamicPlaintext_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_SharedSecretDynamicPlaintext(struct zx_ctx* c, struct zx_ac_SharedSecretDynamicPlaintext_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_SharedSecretDynamicPlaintext(struct zx_ctx* c, struct zx_ac_SharedSecretDynamicPlaintext_s* x);

struct zx_ac_SharedSecretDynamicPlaintext_s {
  ZX_ELEM_EXT
  zx_ac_SharedSecretDynamicPlaintext_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_Extension_s* zx_ac_SharedSecretDynamicPlaintext_GET_Extension(struct zx_ac_SharedSecretDynamicPlaintext_s* x, int n);

int zx_ac_SharedSecretDynamicPlaintext_NUM_Extension(struct zx_ac_SharedSecretDynamicPlaintext_s* x);

struct zx_ac_Extension_s* zx_ac_SharedSecretDynamicPlaintext_POP_Extension(struct zx_ac_SharedSecretDynamicPlaintext_s* x);

void zx_ac_SharedSecretDynamicPlaintext_PUSH_Extension(struct zx_ac_SharedSecretDynamicPlaintext_s* x, struct zx_ac_Extension_s* y);


void zx_ac_SharedSecretDynamicPlaintext_PUT_Extension(struct zx_ac_SharedSecretDynamicPlaintext_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_SharedSecretDynamicPlaintext_ADD_Extension(struct zx_ac_SharedSecretDynamicPlaintext_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_SharedSecretDynamicPlaintext_DEL_Extension(struct zx_ac_SharedSecretDynamicPlaintext_s* x, int n);

void zx_ac_SharedSecretDynamicPlaintext_REV_Extension(struct zx_ac_SharedSecretDynamicPlaintext_s* x);

#endif
/* -------------------------- ac_Smartcard -------------------------- */
/* refby( zx_ac_PrincipalAuthenticationMechanism_s ) */
#ifndef zx_ac_Smartcard_EXT
#define zx_ac_Smartcard_EXT
#endif

struct zx_ac_Smartcard_s* zx_DEC_ac_Smartcard(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_Smartcard_s* zx_NEW_ac_Smartcard(struct zx_ctx* c);
void zx_FREE_ac_Smartcard(struct zx_ctx* c, struct zx_ac_Smartcard_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_Smartcard_s* zx_DEEP_CLONE_ac_Smartcard(struct zx_ctx* c, struct zx_ac_Smartcard_s* x, int dup_strs);
void zx_DUP_STRS_ac_Smartcard(struct zx_ctx* c, struct zx_ac_Smartcard_s* x);
int zx_WALK_SO_ac_Smartcard(struct zx_ctx* c, struct zx_ac_Smartcard_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_Smartcard(struct zx_ctx* c, struct zx_ac_Smartcard_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_Smartcard(struct zx_ctx* c, struct zx_ac_Smartcard_s* x);
int zx_LEN_WO_ac_Smartcard(struct zx_ctx* c, struct zx_ac_Smartcard_s* x);
char* zx_ENC_SO_ac_Smartcard(struct zx_ctx* c, struct zx_ac_Smartcard_s* x, char* p);
char* zx_ENC_WO_ac_Smartcard(struct zx_ctx* c, struct zx_ac_Smartcard_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_Smartcard(struct zx_ctx* c, struct zx_ac_Smartcard_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_Smartcard(struct zx_ctx* c, struct zx_ac_Smartcard_s* x);

struct zx_ac_Smartcard_s {
  ZX_ELEM_EXT
  zx_ac_Smartcard_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_Extension_s* zx_ac_Smartcard_GET_Extension(struct zx_ac_Smartcard_s* x, int n);

int zx_ac_Smartcard_NUM_Extension(struct zx_ac_Smartcard_s* x);

struct zx_ac_Extension_s* zx_ac_Smartcard_POP_Extension(struct zx_ac_Smartcard_s* x);

void zx_ac_Smartcard_PUSH_Extension(struct zx_ac_Smartcard_s* x, struct zx_ac_Extension_s* y);


void zx_ac_Smartcard_PUT_Extension(struct zx_ac_Smartcard_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_Smartcard_ADD_Extension(struct zx_ac_Smartcard_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_Smartcard_DEL_Extension(struct zx_ac_Smartcard_s* x, int n);

void zx_ac_Smartcard_REV_Extension(struct zx_ac_Smartcard_s* x);

#endif
/* -------------------------- ac_SwitchAudit -------------------------- */
/* refby( zx_ac_SecurityAudit_s ) */
#ifndef zx_ac_SwitchAudit_EXT
#define zx_ac_SwitchAudit_EXT
#endif

struct zx_ac_SwitchAudit_s* zx_DEC_ac_SwitchAudit(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_SwitchAudit_s* zx_NEW_ac_SwitchAudit(struct zx_ctx* c);
void zx_FREE_ac_SwitchAudit(struct zx_ctx* c, struct zx_ac_SwitchAudit_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_SwitchAudit_s* zx_DEEP_CLONE_ac_SwitchAudit(struct zx_ctx* c, struct zx_ac_SwitchAudit_s* x, int dup_strs);
void zx_DUP_STRS_ac_SwitchAudit(struct zx_ctx* c, struct zx_ac_SwitchAudit_s* x);
int zx_WALK_SO_ac_SwitchAudit(struct zx_ctx* c, struct zx_ac_SwitchAudit_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_SwitchAudit(struct zx_ctx* c, struct zx_ac_SwitchAudit_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_SwitchAudit(struct zx_ctx* c, struct zx_ac_SwitchAudit_s* x);
int zx_LEN_WO_ac_SwitchAudit(struct zx_ctx* c, struct zx_ac_SwitchAudit_s* x);
char* zx_ENC_SO_ac_SwitchAudit(struct zx_ctx* c, struct zx_ac_SwitchAudit_s* x, char* p);
char* zx_ENC_WO_ac_SwitchAudit(struct zx_ctx* c, struct zx_ac_SwitchAudit_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_SwitchAudit(struct zx_ctx* c, struct zx_ac_SwitchAudit_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_SwitchAudit(struct zx_ctx* c, struct zx_ac_SwitchAudit_s* x);

struct zx_ac_SwitchAudit_s {
  ZX_ELEM_EXT
  zx_ac_SwitchAudit_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_Extension_s* zx_ac_SwitchAudit_GET_Extension(struct zx_ac_SwitchAudit_s* x, int n);

int zx_ac_SwitchAudit_NUM_Extension(struct zx_ac_SwitchAudit_s* x);

struct zx_ac_Extension_s* zx_ac_SwitchAudit_POP_Extension(struct zx_ac_SwitchAudit_s* x);

void zx_ac_SwitchAudit_PUSH_Extension(struct zx_ac_SwitchAudit_s* x, struct zx_ac_Extension_s* y);


void zx_ac_SwitchAudit_PUT_Extension(struct zx_ac_SwitchAudit_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_SwitchAudit_ADD_Extension(struct zx_ac_SwitchAudit_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_SwitchAudit_DEL_Extension(struct zx_ac_SwitchAudit_s* x, int n);

void zx_ac_SwitchAudit_REV_Extension(struct zx_ac_SwitchAudit_s* x);

#endif
/* -------------------------- ac_TechnicalProtection -------------------------- */
/* refby( zx_ac_AuthenticationContextStatement_s ) */
#ifndef zx_ac_TechnicalProtection_EXT
#define zx_ac_TechnicalProtection_EXT
#endif

struct zx_ac_TechnicalProtection_s* zx_DEC_ac_TechnicalProtection(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_TechnicalProtection_s* zx_NEW_ac_TechnicalProtection(struct zx_ctx* c);
void zx_FREE_ac_TechnicalProtection(struct zx_ctx* c, struct zx_ac_TechnicalProtection_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_TechnicalProtection_s* zx_DEEP_CLONE_ac_TechnicalProtection(struct zx_ctx* c, struct zx_ac_TechnicalProtection_s* x, int dup_strs);
void zx_DUP_STRS_ac_TechnicalProtection(struct zx_ctx* c, struct zx_ac_TechnicalProtection_s* x);
int zx_WALK_SO_ac_TechnicalProtection(struct zx_ctx* c, struct zx_ac_TechnicalProtection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_TechnicalProtection(struct zx_ctx* c, struct zx_ac_TechnicalProtection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_TechnicalProtection(struct zx_ctx* c, struct zx_ac_TechnicalProtection_s* x);
int zx_LEN_WO_ac_TechnicalProtection(struct zx_ctx* c, struct zx_ac_TechnicalProtection_s* x);
char* zx_ENC_SO_ac_TechnicalProtection(struct zx_ctx* c, struct zx_ac_TechnicalProtection_s* x, char* p);
char* zx_ENC_WO_ac_TechnicalProtection(struct zx_ctx* c, struct zx_ac_TechnicalProtection_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_TechnicalProtection(struct zx_ctx* c, struct zx_ac_TechnicalProtection_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_TechnicalProtection(struct zx_ctx* c, struct zx_ac_TechnicalProtection_s* x);

struct zx_ac_TechnicalProtection_s {
  ZX_ELEM_EXT
  zx_ac_TechnicalProtection_EXT
  struct zx_ac_PrivateKeyProtection_s* PrivateKeyProtection;	/* {0,1} nada */
  struct zx_ac_SecretKeyProtection_s* SecretKeyProtection;	/* {0,1} nada */
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_PrivateKeyProtection_s* zx_ac_TechnicalProtection_GET_PrivateKeyProtection(struct zx_ac_TechnicalProtection_s* x, int n);
struct zx_ac_SecretKeyProtection_s* zx_ac_TechnicalProtection_GET_SecretKeyProtection(struct zx_ac_TechnicalProtection_s* x, int n);
struct zx_ac_Extension_s* zx_ac_TechnicalProtection_GET_Extension(struct zx_ac_TechnicalProtection_s* x, int n);

int zx_ac_TechnicalProtection_NUM_PrivateKeyProtection(struct zx_ac_TechnicalProtection_s* x);
int zx_ac_TechnicalProtection_NUM_SecretKeyProtection(struct zx_ac_TechnicalProtection_s* x);
int zx_ac_TechnicalProtection_NUM_Extension(struct zx_ac_TechnicalProtection_s* x);

struct zx_ac_PrivateKeyProtection_s* zx_ac_TechnicalProtection_POP_PrivateKeyProtection(struct zx_ac_TechnicalProtection_s* x);
struct zx_ac_SecretKeyProtection_s* zx_ac_TechnicalProtection_POP_SecretKeyProtection(struct zx_ac_TechnicalProtection_s* x);
struct zx_ac_Extension_s* zx_ac_TechnicalProtection_POP_Extension(struct zx_ac_TechnicalProtection_s* x);

void zx_ac_TechnicalProtection_PUSH_PrivateKeyProtection(struct zx_ac_TechnicalProtection_s* x, struct zx_ac_PrivateKeyProtection_s* y);
void zx_ac_TechnicalProtection_PUSH_SecretKeyProtection(struct zx_ac_TechnicalProtection_s* x, struct zx_ac_SecretKeyProtection_s* y);
void zx_ac_TechnicalProtection_PUSH_Extension(struct zx_ac_TechnicalProtection_s* x, struct zx_ac_Extension_s* y);


void zx_ac_TechnicalProtection_PUT_PrivateKeyProtection(struct zx_ac_TechnicalProtection_s* x, int n, struct zx_ac_PrivateKeyProtection_s* y);
void zx_ac_TechnicalProtection_PUT_SecretKeyProtection(struct zx_ac_TechnicalProtection_s* x, int n, struct zx_ac_SecretKeyProtection_s* y);
void zx_ac_TechnicalProtection_PUT_Extension(struct zx_ac_TechnicalProtection_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_TechnicalProtection_ADD_PrivateKeyProtection(struct zx_ac_TechnicalProtection_s* x, int n, struct zx_ac_PrivateKeyProtection_s* z);
void zx_ac_TechnicalProtection_ADD_SecretKeyProtection(struct zx_ac_TechnicalProtection_s* x, int n, struct zx_ac_SecretKeyProtection_s* z);
void zx_ac_TechnicalProtection_ADD_Extension(struct zx_ac_TechnicalProtection_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_TechnicalProtection_DEL_PrivateKeyProtection(struct zx_ac_TechnicalProtection_s* x, int n);
void zx_ac_TechnicalProtection_DEL_SecretKeyProtection(struct zx_ac_TechnicalProtection_s* x, int n);
void zx_ac_TechnicalProtection_DEL_Extension(struct zx_ac_TechnicalProtection_s* x, int n);

void zx_ac_TechnicalProtection_REV_PrivateKeyProtection(struct zx_ac_TechnicalProtection_s* x);
void zx_ac_TechnicalProtection_REV_SecretKeyProtection(struct zx_ac_TechnicalProtection_s* x);
void zx_ac_TechnicalProtection_REV_Extension(struct zx_ac_TechnicalProtection_s* x);

#endif
/* -------------------------- ac_TimeSyncToken -------------------------- */
/* refby( zx_ac_Token_s ) */
#ifndef zx_ac_TimeSyncToken_EXT
#define zx_ac_TimeSyncToken_EXT
#endif

struct zx_ac_TimeSyncToken_s* zx_DEC_ac_TimeSyncToken(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_TimeSyncToken_s* zx_NEW_ac_TimeSyncToken(struct zx_ctx* c);
void zx_FREE_ac_TimeSyncToken(struct zx_ctx* c, struct zx_ac_TimeSyncToken_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_TimeSyncToken_s* zx_DEEP_CLONE_ac_TimeSyncToken(struct zx_ctx* c, struct zx_ac_TimeSyncToken_s* x, int dup_strs);
void zx_DUP_STRS_ac_TimeSyncToken(struct zx_ctx* c, struct zx_ac_TimeSyncToken_s* x);
int zx_WALK_SO_ac_TimeSyncToken(struct zx_ctx* c, struct zx_ac_TimeSyncToken_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_TimeSyncToken(struct zx_ctx* c, struct zx_ac_TimeSyncToken_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_TimeSyncToken(struct zx_ctx* c, struct zx_ac_TimeSyncToken_s* x);
int zx_LEN_WO_ac_TimeSyncToken(struct zx_ctx* c, struct zx_ac_TimeSyncToken_s* x);
char* zx_ENC_SO_ac_TimeSyncToken(struct zx_ctx* c, struct zx_ac_TimeSyncToken_s* x, char* p);
char* zx_ENC_WO_ac_TimeSyncToken(struct zx_ctx* c, struct zx_ac_TimeSyncToken_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_TimeSyncToken(struct zx_ctx* c, struct zx_ac_TimeSyncToken_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_TimeSyncToken(struct zx_ctx* c, struct zx_ac_TimeSyncToken_s* x);

struct zx_ac_TimeSyncToken_s {
  ZX_ELEM_EXT
  zx_ac_TimeSyncToken_EXT
  struct zx_str* DeviceType;	/* {1,1} attribute hardware */
  struct zx_str* SeedLength;	/* {1,1} attribute xs:integer */
  struct zx_str* DeviceInHand;	/* {1,1} attribute true */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ac_TimeSyncToken_GET_DeviceType(struct zx_ac_TimeSyncToken_s* x);
struct zx_str* zx_ac_TimeSyncToken_GET_SeedLength(struct zx_ac_TimeSyncToken_s* x);
struct zx_str* zx_ac_TimeSyncToken_GET_DeviceInHand(struct zx_ac_TimeSyncToken_s* x);





void zx_ac_TimeSyncToken_PUT_DeviceType(struct zx_ac_TimeSyncToken_s* x, struct zx_str* y);
void zx_ac_TimeSyncToken_PUT_SeedLength(struct zx_ac_TimeSyncToken_s* x, struct zx_str* y);
void zx_ac_TimeSyncToken_PUT_DeviceInHand(struct zx_ac_TimeSyncToken_s* x, struct zx_str* y);





#endif
/* -------------------------- ac_Token -------------------------- */
/* refby( zx_ac_PrincipalAuthenticationMechanism_s ) */
#ifndef zx_ac_Token_EXT
#define zx_ac_Token_EXT
#endif

struct zx_ac_Token_s* zx_DEC_ac_Token(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_Token_s* zx_NEW_ac_Token(struct zx_ctx* c);
void zx_FREE_ac_Token(struct zx_ctx* c, struct zx_ac_Token_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_Token_s* zx_DEEP_CLONE_ac_Token(struct zx_ctx* c, struct zx_ac_Token_s* x, int dup_strs);
void zx_DUP_STRS_ac_Token(struct zx_ctx* c, struct zx_ac_Token_s* x);
int zx_WALK_SO_ac_Token(struct zx_ctx* c, struct zx_ac_Token_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_Token(struct zx_ctx* c, struct zx_ac_Token_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_Token(struct zx_ctx* c, struct zx_ac_Token_s* x);
int zx_LEN_WO_ac_Token(struct zx_ctx* c, struct zx_ac_Token_s* x);
char* zx_ENC_SO_ac_Token(struct zx_ctx* c, struct zx_ac_Token_s* x, char* p);
char* zx_ENC_WO_ac_Token(struct zx_ctx* c, struct zx_ac_Token_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_Token(struct zx_ctx* c, struct zx_ac_Token_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_Token(struct zx_ctx* c, struct zx_ac_Token_s* x);

struct zx_ac_Token_s {
  ZX_ELEM_EXT
  zx_ac_Token_EXT
  struct zx_ac_TimeSyncToken_s* TimeSyncToken;	/* {1,1} nada */
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_TimeSyncToken_s* zx_ac_Token_GET_TimeSyncToken(struct zx_ac_Token_s* x, int n);
struct zx_ac_Extension_s* zx_ac_Token_GET_Extension(struct zx_ac_Token_s* x, int n);

int zx_ac_Token_NUM_TimeSyncToken(struct zx_ac_Token_s* x);
int zx_ac_Token_NUM_Extension(struct zx_ac_Token_s* x);

struct zx_ac_TimeSyncToken_s* zx_ac_Token_POP_TimeSyncToken(struct zx_ac_Token_s* x);
struct zx_ac_Extension_s* zx_ac_Token_POP_Extension(struct zx_ac_Token_s* x);

void zx_ac_Token_PUSH_TimeSyncToken(struct zx_ac_Token_s* x, struct zx_ac_TimeSyncToken_s* y);
void zx_ac_Token_PUSH_Extension(struct zx_ac_Token_s* x, struct zx_ac_Extension_s* y);


void zx_ac_Token_PUT_TimeSyncToken(struct zx_ac_Token_s* x, int n, struct zx_ac_TimeSyncToken_s* y);
void zx_ac_Token_PUT_Extension(struct zx_ac_Token_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_Token_ADD_TimeSyncToken(struct zx_ac_Token_s* x, int n, struct zx_ac_TimeSyncToken_s* z);
void zx_ac_Token_ADD_Extension(struct zx_ac_Token_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_Token_DEL_TimeSyncToken(struct zx_ac_Token_s* x, int n);
void zx_ac_Token_DEL_Extension(struct zx_ac_Token_s* x, int n);

void zx_ac_Token_REV_TimeSyncToken(struct zx_ac_Token_s* x);
void zx_ac_Token_REV_Extension(struct zx_ac_Token_s* x);

#endif
/* -------------------------- ac_WTLS -------------------------- */
/* refby( zx_ac_AuthenticatorTransportProtocol_s ) */
#ifndef zx_ac_WTLS_EXT
#define zx_ac_WTLS_EXT
#endif

struct zx_ac_WTLS_s* zx_DEC_ac_WTLS(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_WTLS_s* zx_NEW_ac_WTLS(struct zx_ctx* c);
void zx_FREE_ac_WTLS(struct zx_ctx* c, struct zx_ac_WTLS_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_WTLS_s* zx_DEEP_CLONE_ac_WTLS(struct zx_ctx* c, struct zx_ac_WTLS_s* x, int dup_strs);
void zx_DUP_STRS_ac_WTLS(struct zx_ctx* c, struct zx_ac_WTLS_s* x);
int zx_WALK_SO_ac_WTLS(struct zx_ctx* c, struct zx_ac_WTLS_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_WTLS(struct zx_ctx* c, struct zx_ac_WTLS_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_WTLS(struct zx_ctx* c, struct zx_ac_WTLS_s* x);
int zx_LEN_WO_ac_WTLS(struct zx_ctx* c, struct zx_ac_WTLS_s* x);
char* zx_ENC_SO_ac_WTLS(struct zx_ctx* c, struct zx_ac_WTLS_s* x, char* p);
char* zx_ENC_WO_ac_WTLS(struct zx_ctx* c, struct zx_ac_WTLS_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_WTLS(struct zx_ctx* c, struct zx_ac_WTLS_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_WTLS(struct zx_ctx* c, struct zx_ac_WTLS_s* x);

struct zx_ac_WTLS_s {
  ZX_ELEM_EXT
  zx_ac_WTLS_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_Extension_s* zx_ac_WTLS_GET_Extension(struct zx_ac_WTLS_s* x, int n);

int zx_ac_WTLS_NUM_Extension(struct zx_ac_WTLS_s* x);

struct zx_ac_Extension_s* zx_ac_WTLS_POP_Extension(struct zx_ac_WTLS_s* x);

void zx_ac_WTLS_PUSH_Extension(struct zx_ac_WTLS_s* x, struct zx_ac_Extension_s* y);


void zx_ac_WTLS_PUT_Extension(struct zx_ac_WTLS_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_WTLS_ADD_Extension(struct zx_ac_WTLS_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_WTLS_DEL_Extension(struct zx_ac_WTLS_s* x, int n);

void zx_ac_WTLS_REV_Extension(struct zx_ac_WTLS_s* x);

#endif
/* -------------------------- ac_WrittenConsent -------------------------- */
/* refby( zx_ac_Identification_s ) */
#ifndef zx_ac_WrittenConsent_EXT
#define zx_ac_WrittenConsent_EXT
#endif

struct zx_ac_WrittenConsent_s* zx_DEC_ac_WrittenConsent(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_WrittenConsent_s* zx_NEW_ac_WrittenConsent(struct zx_ctx* c);
void zx_FREE_ac_WrittenConsent(struct zx_ctx* c, struct zx_ac_WrittenConsent_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_WrittenConsent_s* zx_DEEP_CLONE_ac_WrittenConsent(struct zx_ctx* c, struct zx_ac_WrittenConsent_s* x, int dup_strs);
void zx_DUP_STRS_ac_WrittenConsent(struct zx_ctx* c, struct zx_ac_WrittenConsent_s* x);
int zx_WALK_SO_ac_WrittenConsent(struct zx_ctx* c, struct zx_ac_WrittenConsent_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_WrittenConsent(struct zx_ctx* c, struct zx_ac_WrittenConsent_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_WrittenConsent(struct zx_ctx* c, struct zx_ac_WrittenConsent_s* x);
int zx_LEN_WO_ac_WrittenConsent(struct zx_ctx* c, struct zx_ac_WrittenConsent_s* x);
char* zx_ENC_SO_ac_WrittenConsent(struct zx_ctx* c, struct zx_ac_WrittenConsent_s* x, char* p);
char* zx_ENC_WO_ac_WrittenConsent(struct zx_ctx* c, struct zx_ac_WrittenConsent_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_WrittenConsent(struct zx_ctx* c, struct zx_ac_WrittenConsent_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_WrittenConsent(struct zx_ctx* c, struct zx_ac_WrittenConsent_s* x);

struct zx_ac_WrittenConsent_s {
  ZX_ELEM_EXT
  zx_ac_WrittenConsent_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_Extension_s* zx_ac_WrittenConsent_GET_Extension(struct zx_ac_WrittenConsent_s* x, int n);

int zx_ac_WrittenConsent_NUM_Extension(struct zx_ac_WrittenConsent_s* x);

struct zx_ac_Extension_s* zx_ac_WrittenConsent_POP_Extension(struct zx_ac_WrittenConsent_s* x);

void zx_ac_WrittenConsent_PUSH_Extension(struct zx_ac_WrittenConsent_s* x, struct zx_ac_Extension_s* y);


void zx_ac_WrittenConsent_PUT_Extension(struct zx_ac_WrittenConsent_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_WrittenConsent_ADD_Extension(struct zx_ac_WrittenConsent_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_WrittenConsent_DEL_Extension(struct zx_ac_WrittenConsent_s* x, int n);

void zx_ac_WrittenConsent_REV_Extension(struct zx_ac_WrittenConsent_s* x);

#endif
/* -------------------------- ac_ZeroKnowledge -------------------------- */
/* refby( zx_ac_Authenticator_s ) */
#ifndef zx_ac_ZeroKnowledge_EXT
#define zx_ac_ZeroKnowledge_EXT
#endif

struct zx_ac_ZeroKnowledge_s* zx_DEC_ac_ZeroKnowledge(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ac_ZeroKnowledge_s* zx_NEW_ac_ZeroKnowledge(struct zx_ctx* c);
void zx_FREE_ac_ZeroKnowledge(struct zx_ctx* c, struct zx_ac_ZeroKnowledge_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ac_ZeroKnowledge_s* zx_DEEP_CLONE_ac_ZeroKnowledge(struct zx_ctx* c, struct zx_ac_ZeroKnowledge_s* x, int dup_strs);
void zx_DUP_STRS_ac_ZeroKnowledge(struct zx_ctx* c, struct zx_ac_ZeroKnowledge_s* x);
int zx_WALK_SO_ac_ZeroKnowledge(struct zx_ctx* c, struct zx_ac_ZeroKnowledge_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_ZeroKnowledge(struct zx_ctx* c, struct zx_ac_ZeroKnowledge_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ac_ZeroKnowledge(struct zx_ctx* c, struct zx_ac_ZeroKnowledge_s* x);
int zx_LEN_WO_ac_ZeroKnowledge(struct zx_ctx* c, struct zx_ac_ZeroKnowledge_s* x);
char* zx_ENC_SO_ac_ZeroKnowledge(struct zx_ctx* c, struct zx_ac_ZeroKnowledge_s* x, char* p);
char* zx_ENC_WO_ac_ZeroKnowledge(struct zx_ctx* c, struct zx_ac_ZeroKnowledge_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ac_ZeroKnowledge(struct zx_ctx* c, struct zx_ac_ZeroKnowledge_s* x);
struct zx_str* zx_EASY_ENC_WO_ac_ZeroKnowledge(struct zx_ctx* c, struct zx_ac_ZeroKnowledge_s* x);

struct zx_ac_ZeroKnowledge_s {
  ZX_ELEM_EXT
  zx_ac_ZeroKnowledge_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_ac_Extension_s* zx_ac_ZeroKnowledge_GET_Extension(struct zx_ac_ZeroKnowledge_s* x, int n);

int zx_ac_ZeroKnowledge_NUM_Extension(struct zx_ac_ZeroKnowledge_s* x);

struct zx_ac_Extension_s* zx_ac_ZeroKnowledge_POP_Extension(struct zx_ac_ZeroKnowledge_s* x);

void zx_ac_ZeroKnowledge_PUSH_Extension(struct zx_ac_ZeroKnowledge_s* x, struct zx_ac_Extension_s* y);


void zx_ac_ZeroKnowledge_PUT_Extension(struct zx_ac_ZeroKnowledge_s* x, int n, struct zx_ac_Extension_s* y);

void zx_ac_ZeroKnowledge_ADD_Extension(struct zx_ac_ZeroKnowledge_s* x, int n, struct zx_ac_Extension_s* z);

void zx_ac_ZeroKnowledge_DEL_Extension(struct zx_ac_ZeroKnowledge_s* x, int n);

void zx_ac_ZeroKnowledge_REV_Extension(struct zx_ac_ZeroKnowledge_s* x);

#endif

#endif
